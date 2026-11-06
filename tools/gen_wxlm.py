#!/usr/bin/env python3
"""Pre-link and lift 1.4.3 WiiXLaunch (.wxlm) modules into static C for totk-pc-recomp."""

import json
import struct
import sys
from pathlib import Path

REPO_DIR = Path(__file__).resolve().parent.parent
PORT_ROOT = REPO_DIR.parent
sys.path.insert(0, str(REPO_DIR / "tools"))
sys.path.insert(0, str(REPO_DIR / "recomp"))

from lifter import Lifter, Unsupported, bits, hx, sext

DETAILS_PATH = PORT_ROOT / "eden_wxlm_details.json"
AUDIT_PATH = PORT_ROOT / "audit_wxlm_vs_main.json"
EDEN_MODS = Path(r"C:\Users\24559\game\Eden-v0.2.1\versions\1.4.3\user\load\0100F2C0115B6000")

HOST_STUBS = {
    "Log": 0x70051FF000,
    "ResolveTarget": 0x70051FF010,
    "Write": 0x70051FF020,
    "Fingerprint": 0x70051FF030,
}


def looks_like_func(payload: bytearray, mod_base: int, lifter: Lifter, cand: int, fixup_map: dict, text_limit: int) -> bool:
    n = len(payload)
    if cand < 0x1000 or cand >= text_limit or cand + 4 > n or cand % 4 != 0:
        return False
    for step in range(256):
        off = cand + step * 4
        if off + 4 > n:
            return False
        w = struct.unpack_from("<I", payload, off)[0]
        if w == 0:
            return False
        if off in fixup_map:
            return True
        try:
            ins = lifter.lift(w, mod_base + off)
        except Unsupported:
            return False
        if ins.kind == "trap":
            return False
        if ins.kind in ("b", "bl", "bcond"):
            t_off = ins.target - mod_base
            if not (0x1000 <= t_off < n):
                return False
        if ins.kind in ("ret", "b", "br"):
            return step > 0
    return False


def discover_wxlm(payload: bytearray, mod_base: int, patches: list, fixups: list, bl_targets: list):
    n = len(payload)
    fixup_map = {int(f["site"], 16): int(f["dest_rva"], 16) for f in fixups}

    seeds = set()
    for t in bl_targets:
        v = t if isinstance(t, int) else int(t, 16)
        if v >= 0x1000:
            seeds.add(v)
    for p in patches:
        if p["stub"]:
            s = int(p["stub"], 16)
            if s != 0:
                seeds.add(s)

    for site in fixup_map:
        if site >= 8:
            prev_w = struct.unpack_from("<I", payload, site - 4)[0]
            prev2_w = struct.unpack_from("<I", payload, site - 8)[0]
            if prev_w != 0 and prev2_w == 0:
                seeds.add(site - 4)

    lifter = Lifter(mod_base, simd="c")
    visited = set()
    fn_starts = set(seeds)
    queue = list(seeds)

    while queue:
        off = queue.pop(0)
        if off in visited or off < 0 or off + 4 > n or off % 4 != 0:
            continue
        w = struct.unpack_from("<I", payload, off)[0]
        if w == 0:
            continue
        visited.add(off)
        addr = mod_base + off
        ins = lifter.lift(w, addr)

        op0 = bits(w, 25, 4)
        if (op0 & 0b1110) == 0b1000 and bits(w, 23, 3) in (0, 1):
            rd = bits(w, 0, 5)
            imm = sext((bits(w, 5, 19) << 2) | bits(w, 29, 2), 21)
            cand = None
            if bits(w, 31, 1):
                page = (off & ~0xFFF) + (imm << 12)
                if off + 4 < n:
                    w2 = struct.unpack_from("<I", payload, off + 4)[0]
                    if bits(w2, 22, 10) == 0b1001000100 and bits(w2, 0, 5) == rd and bits(w2, 5, 5) == rd:
                        cand = page + bits(w2, 10, 12)
            else:
                cand = off + imm
            text_limit = 0xFFA0 if n == 0x23000 else n
            if cand is not None and looks_like_func(payload, mod_base, lifter, cand, fixup_map, text_limit):
                fn_starts.add(cand)
                if cand not in visited:
                    queue.append(cand)

        if off in fixup_map:
            continue

        if ins.kind in ("b", "bl", "bcond"):
            t = ins.target
            if mod_base <= t < mod_base + n:
                t_off = t - mod_base
                if ins.kind == "bl":
                    fn_starts.add(t_off)
                if t_off not in visited:
                    queue.append(t_off)
            if ins.kind in ("bl", "bcond"):
                if off + 4 not in visited:
                    queue.append(off + 4)
        elif ins.kind in ("br", "ret", "trap"):
            pass
        else:
            if off + 4 not in visited:
                queue.append(off + 4)

    return visited, fn_starts


def prelink_and_lift(name: str, payload: bytearray, mod_base: int, m_info: dict, audit_patches: list):
    n = len(payload)
    tables = m_info["tables"]
    patches = tables.get("patches", [])
    fixups = [dict(f) for f in tables.get("fixups", [])]
    bl_targets = tables.get("bl_targets", [])

    if name == "qol143":
        for f in fixups:
            if int(f["site"], 16) == 0x55D0 and int(f["dest_rva"], 16) == 0x41AE760:
                struct.pack_into("<I", payload, 0x55D0, 0xD10103FF)  # sub sp, sp, #0x40
                struct.pack_into("<I", payload, 0x55D4, 0x14000000)  # b #0
                f["site"] = "0x55d4"
                f["dest_rva"] = "0x16fdd0"
    elif name == "eqcat143":
        uc_stub = [
            0xF900005F,  # str xzr, [x2]
            0x528000E8,  # mov w8, #7
            0x29017C48,  # stp w8, wzr, [x2, #8]
            0x52800020,  # mov w0, #1
            0xD65F03C0,  # ret
        ]
        for idx, w in enumerate(uc_stub):
            struct.pack_into("<I", payload, 0x6D44 + idx * 4, w)

    # Pre-link imports in payload
    for imp in m_info.get("imports", []):
        slot = int(imp["slot_offset"], 16)
        sym = imp["symbol"]
        if sym in HOST_STUBS:
            struct.pack_into("<Q", payload, slot, HOST_STUBS[sym])

    # Pre-link state pointer slot
    if tables.get("state_ptr_slot") and tables.get("state_offset"):
        slot = int(tables["state_ptr_slot"], 16)
        st_off = int(tables["state_offset"], 16)
        struct.pack_into("<Q", payload, slot, mod_base + st_off)

    # Pre-link native function pointer slots
    for nat in tables.get("natives", []):
        slot = int(nat["slot"], 16)
        rva = int(nat["main_rva"], 16)
        struct.pack_into("<Q", payload, slot, 0x7000000000 + rva)

    fixup_map = {int(f["site"], 16): int(f["dest_rva"], 16) for f in fixups}
    patch_by_rva = {int(p["rva"], 16): p for p in audit_patches}

    visited, fn_starts = discover_wxlm(payload, mod_base, patches, fixups, bl_targets)
    lifter = Lifter(mod_base, simd="c")

    fn_list = sorted(fn_starts)
    c_funcs = []
    main_refs = set()
    ret_pcs = set()
    tramp_entries = set()

    for s in fn_list:
        fn_offs = set()
        labels = set()
        q = [s]
        while q:
            off = q.pop(0)
            if off in fn_offs or off < 0 or off + 4 > n or off % 4 != 0:
                continue
            w = struct.unpack_from("<I", payload, off)[0]
            if w == 0:
                continue
            fn_offs.add(off)
            if off in fixup_map:
                continue
            ins = lifter.lift(w, mod_base + off)
            if ins.kind in ("b", "bcond"):
                t_off = ins.target - mod_base
                if t_off not in fn_starts and 0 <= t_off < n:
                    labels.add(t_off)
                    if t_off not in fn_offs:
                        q.append(t_off)
                if ins.kind == "bcond":
                    if off + 4 not in fn_offs:
                        q.append(off + 4)
            elif ins.kind in ("op", "bl", "blr"):
                if off + 4 not in fn_offs:
                    q.append(off + 4)

        sorted_offs = sorted(fn_offs)
        for idx, off in enumerate(sorted_offs):
            if off in fixup_map:
                continue
            w = struct.unpack_from("<I", payload, off)[0]
            ins = lifter.lift(w, mod_base + off)
            if ins.kind in ("op", "bl", "blr", "bcond"):
                nxt = off + 4
                if idx + 1 >= len(sorted_offs) or sorted_offs[idx + 1] != nxt:
                    labels.add(nxt)

        lines = [f"void f_{mod_base + s:x}(Cpu *c) {{"]
        for idx, off in enumerate(sorted_offs):
            addr = mod_base + off
            if off in labels:
                lines.append(f"L_{addr:x}:;")

            if off in fixup_map:
                dest_rva = fixup_map[off]
                entry_patch = patch_by_rva.get(dest_rva - 4)
                prev2_w = struct.unpack_from("<I", payload, off - 8)[0] if off >= 8 else 0
                is_tramp = entry_patch is not None and entry_patch["is_func_entry"] and prev2_w == 0
                if is_tramp:
                    main_fn = 0x7000000000 + dest_rva - 4
                    main_refs.add(main_fn)
                    tramp_entries.add(main_fn)
                    lines.append(f"    c->pc = {hx(0x7000000000 + dest_rva)}; f_{main_fn:x}(c); c->pc = 0; return;")
                elif name == "acq143" and dest_rva == 0x16FDCC:
                    main_fn = 0x700016FDCC
                    main_refs.add(main_fn)
                    ret_pc = 0x700209A95C if off == 0x3328 else 0x700209AB14
                    ret_pcs.add(ret_pc)
                    lines.append(f"    c->pc = 0; f_{main_fn:x}(c); c->pc = {hx(ret_pc)}; return;")
                else:
                    ret_pc = 0x7000000000 + dest_rva
                    ret_pcs.add(ret_pc)
                    lines.append(f"    c->pc = {hx(ret_pc)}; return;")
                continue

            w = struct.unpack_from("<I", payload, off)[0]
            ins = lifter.lift(w, addr)
            fallthrough_needed = False

            if ins.kind == "op":
                lines.append(f"    {ins.code}")
                fallthrough_needed = True
            elif ins.kind == "bl":
                t = ins.target
                lines.append(f"    c->x[30] = {hx(addr + 4)}; f_{t:x}(c);")
                fallthrough_needed = True
            elif ins.kind == "blr":
                lines.append(f"    c->pc = {ins.target}; c->x[30] = {hx(addr + 4)}; rt_dispatch(c); c->pc = 0;")
                fallthrough_needed = True
            elif ins.kind == "br":
                lines.append(f"    c->pc = {ins.target}; rt_dispatch(c); c->pc = 0; return;")
            elif ins.kind == "ret":
                lines.append("    c->pc = 0; return;")
            elif ins.kind == "trap":
                lines.append(f"    {ins.code} return;")
            elif ins.kind == "b":
                t = ins.target
                t_off = t - mod_base
                if t_off in fn_starts:
                    lines.append(f"    f_{t:x}(c); return;")
                else:
                    lines.append(f"    goto L_{t:x};")
            elif ins.kind == "bcond":
                t = ins.target
                t_off = t - mod_base
                if t_off in fn_starts:
                    lines.append(f"    if ({ins.cond}) {{ f_{t:x}(c); return; }}")
                else:
                    lines.append(f"    if ({ins.cond}) goto L_{t:x};")
                fallthrough_needed = True

            if fallthrough_needed:
                nxt = off + 4
                if idx + 1 >= len(sorted_offs) or sorted_offs[idx + 1] != nxt:
                    if nxt in fn_starts:
                        lines.append(f"    f_{mod_base + nxt:x}(c); return;")
                    elif nxt in fn_offs:
                        lines.append(f"    goto L_{mod_base + nxt:x};")
                    else:
                        lines.append("    c->pc = 0; return;")

        lines.append("}")
        c_funcs.append("\n".join(lines))

    # Finally write 26-bit branch instructions at fixup sites in payload so guest memory matches
    for site, dest_rva in fixup_map.items():
        delta = (0x7000000000 + dest_rva) - (mod_base + site)
        b_word = 0x14000000 | ((delta >> 2) & 0x3FFFFFF)
        struct.pack_into("<I", payload, site, b_word)

    return fn_list, c_funcs, main_refs, ret_pcs, tramp_entries


def extract_spans(payload: bytearray, min_zero_run: int = 16):
    spans = []
    n = len(payload)
    i = 0
    while i < n:
        while i < n and payload[i] == 0:
            i += 1
        if i >= n:
            break
        start = i
        while i < n:
            if payload[i] == 0:
                z = i
                while z < n and payload[z] == 0 and (z - i) < min_zero_run:
                    z += 1
                if z - i >= min_zero_run or z == n:
                    break
                i = z
            else:
                i += 1
        spans.append((start, bytes(payload[start:i])))
    return spans


def update_patches_txt(mod_names: list, inline_sites: list):
    p_path = REPO_DIR / "recomp" / "patches-v143.txt"
    text = p_path.read_text(encoding="utf-8")
    marker = "# WiiXLaunch (.wxlm) 1.4.3 mod sets"
    if marker in text:
        text = text[: text.index(marker)]
    lines = ["", marker]
    for name in mod_names:
        env = f"TOTK_WXLM_{name.upper()}"
        lines.append(f"set wxlm_{name:<12} {env:<24} 1")
    lines.append("")
    lines.append("# qol143 inline instruction patches (stub == None)")
    lines.extend(inline_sites)
    lines.append("")
    p_path.write_text(text.rstrip() + "\n" + "\n".join(lines), encoding="utf-8")


def main():
    details = json.loads(DETAILS_PATH.read_text(encoding="utf-8"))
    audit = json.loads(AUDIT_PATH.read_text(encoding="utf-8"))
    audit_by_name = {m["wxlm_name"]: m["patches"] for m in audit["modules"]}

    mod_names = []
    inline_sites = []
    all_fn_addrs = []
    all_protos = []
    all_bodies = []
    all_main_refs = set()
    all_tramp_entries = set()
    hooks_json = {}
    mod_spans = []
    mod_patch_records = []

    base_cursor = 0x7005200000
    for rel_path, m in details.items():
        name = m["name"]
        if name == "ultrahand":
            continue
        mod_names.append(name)
        raw = (EDEN_MODS / rel_path).read_bytes()
        pay_size = int(m["payload_size"], 16)
        pay = bytearray(raw[m["payload_offset"] : m["payload_offset"] + pay_size])
        mod_base = base_cursor
        base_cursor += 0x100000

        audit_patches = audit_by_name[name]
        fn_list, c_funcs, main_refs, ret_pcs, tramp_entries = prelink_and_lift(
            name, pay, mod_base, m, audit_patches
        )

        for s in fn_list:
            addr = mod_base + s
            all_fn_addrs.append(addr)
            all_protos.append(f"void f_{addr:x}(Cpu *c);")
        all_bodies.extend(c_funcs)
        all_main_refs |= main_refs
        all_tramp_entries |= tramp_entries

        # Build hooks_json and main guest-memory patch table for this module
        p_recs = []
        for p in audit_patches:
            rva = int(p["rva"], 16)
            actual_bytes = bytes.fromhex(p["actual_hex"])
            orig_w0 = struct.unpack_from("<I", actual_bytes, 0)[0]
            if p["stub"] is not None:
                stub_off = int(p["stub"], 16)
                stub_addr = mod_base + stub_off
                hook_addr = 0x7000000000 + rva
                delta = stub_addr - hook_addr
                patched_w0 = 0x14000000 | ((delta >> 2) & 0x3FFFFFF)
                fn_lo_s, fn_hi_s = p["func"].split("..")
                fn_lo, fn_hi = int(fn_lo_s, 16), int(fn_hi_s, 16)
                targets = sorted(pc for pc in ret_pcs if fn_lo <= pc < fn_hi)
                hooks_json[f"0x{hook_addr:x}"] = {
                    "set": f"wxlm_{name}",
                    "stub": stub_addr,
                    "targets": targets,
                }
                p_recs.append((rva, orig_w0, patched_w0))
                if len(actual_bytes) >= 8:
                    orig_w1 = struct.unpack_from("<I", actual_bytes, 4)[0]
                    p_recs.append((rva + 4, orig_w1, 0xD503201F))
            else:
                repl_bytes = bytes.fromhex(p["repl_hex"])
                for off_b in range(0, len(actual_bytes), 4):
                    ow = struct.unpack_from("<I", actual_bytes, off_b)[0]
                    pw = struct.unpack_from("<I", repl_bytes, off_b)[0]
                    p_recs.append((rva + off_b, ow, pw))
                    inline_sites.append(f"site wxlm_{name} main {rva + off_b:x} {ow:08x} {pw:08x}")

        mod_patch_records.append((name, mod_base, p_recs))
        spans = extract_spans(pay)
        mod_spans.append((name, mod_base, spans))
        print(f"Lifted {name} @ {hex(mod_base)}: {len(fn_list)} funcs, {len(spans)} payload spans, {len(p_recs)} patches")

    for mr in sorted(all_main_refs):
        all_protos.append(f"__attribute__((weak)) void f_{mr:x}(Cpu *c);")

    update_patches_txt(mod_names, inline_sites)

    wxlm_hooks_path = REPO_DIR / "recomp" / "wxlm_hooks.json"
    wxlm_hooks_path.write_text(
        json.dumps(
            {
                "tramp_entries": [f"0x{a:x}" for a in sorted(all_tramp_entries)],
                "hooks": hooks_json,
            },
            indent=2,
        ),
        encoding="utf-8",
    )
    print(f"Wrote {wxlm_hooks_path} ({len(hooks_json)} hooks, {len(all_tramp_entries)} tramp entries)")

    # Write runtime/wxlm.h
    h_path = REPO_DIR / "runtime" / "wxlm.h"
    h_path.write_text(
        """#ifndef TOTK_WXLM_H
#define TOTK_WXLM_H

void wxlm_register_hosts(void);
void wxlm_init_modules(void);
void wxlm_sync_main_patches(void);

#endif
""",
        encoding="utf-8",
    )

    # Split lifted C functions into 3 files under 800 KB each
    num_shards = 3
    shards = [[] for _ in range(num_shards)]
    shard_sizes = [0] * num_shards
    for body in all_bodies:
        idx = min(range(num_shards), key=lambda i: shard_sizes[i])
        shards[idx].append(body)
        shard_sizes[idx] += len(body)

    header_block = '#include "cpu.h"\n#include "simd.h"\n\n' + "\n".join(all_protos) + "\n\n"
    for i in range(num_shards):
        c_path = REPO_DIR / "runtime" / f"wxlm_mods_{i}.c"
        content = header_block + "\n\n".join(shards[i]) + "\n"
        c_path.write_text(content, encoding="utf-8")
        print(f"Wrote {c_path.name}: {len(content)} bytes ({len(shards[i])} funcs)")

    # Write runtime/wxlm_loader.c
    loader_lines = [
        '#include "wxlm.h"',
        '#include "cpu.h"',
        '#include "host.h"',
        '#include "patches.h"',
        '#include "platform/platform.h"',
        "#include <stdint.h>",
        "#include <string.h>",
        "",
    ]
    for addr in all_fn_addrs:
        loader_lines.append(f"void f_{addr:x}(Cpu *c);")
    loader_lines.append("")

    # Host import stubs
    loader_lines.append(
        """static void wxlm_host_log(Cpu *c) {
    const char *msg = (const char *)(uintptr_t)c->x[0];
    if (msg && msg[0]) {
        rt_log("[wxlm] %s", msg);
    }
    c->x[0] = 0;
    c->pc = 0;
}

static void wxlm_host_noop(Cpu *c) {
    c->x[0] = 0;
    c->pc = 0;
}
"""
    )

    # Payload spans
    loader_lines.append("typedef struct { uint64_t dst; uint32_t len; const uint8_t *data; } WxlmSpan;")
    span_entries = []
    blob_bytes = bytearray()
    for name, mod_base, spans in mod_spans:
        for off, data in spans:
            blob_off = len(blob_bytes)
            blob_bytes.extend(data)
            span_entries.append((mod_base + off, len(data), blob_off))

    while len(blob_bytes) % 8 != 0:
        blob_bytes.append(0)
    u64_count = len(blob_bytes) // 8
    u64_vals = struct.unpack(f"<{u64_count}Q", blob_bytes)

    loader_lines.append(f"static const uint64_t wxlm_blob_u64[{u64_count}] = {{")
    for i in range(0, u64_count, 8):
        chunk = u64_vals[i : i + 8]
        loader_lines.append("    " + ",".join(f"0x{v:x}ull" for v in chunk) + ",")
    loader_lines.append("};")
    loader_lines.append("#define wxlm_blob ((const uint8_t *)wxlm_blob_u64)")
    loader_lines.append("")

    loader_lines.append(f"static const WxlmSpan wxlm_spans[{len(span_entries)}] = {{")
    for dst, length, blob_off in span_entries:
        loader_lines.append(f"    {{ 0x{dst:x}ull, {length}u, &wxlm_blob[{blob_off}] }},")
    loader_lines.append("};")
    loader_lines.append("")

    # Main guest-memory patch table per module
    loader_lines.append(
        """typedef struct { uint32_t rva; uint32_t orig_w; uint32_t patched_w; } WxlmPatchSite;
typedef struct { const char *set_name; const WxlmPatchSite *sites; uint32_t count; } WxlmModPatches;
"""
    )
    for name, mod_base, p_recs in mod_patch_records:
        loader_lines.append(f"static const WxlmPatchSite wxlm_sites_{name}[{len(p_recs)}] = {{")
        for rva, orig_w, patched_w in p_recs:
            loader_lines.append(f"    {{ 0x{rva:x}u, 0x{orig_w:08x}u, 0x{patched_w:08x}u }},")
        loader_lines.append("};")
    loader_lines.append("")

    loader_lines.append(f"static const WxlmModPatches wxlm_mod_patches[{len(mod_patch_records)}] = {{")
    for name, mod_base, p_recs in mod_patch_records:
        loader_lines.append(f'    {{ "wxlm_{name}", wxlm_sites_{name}, {len(p_recs)}u }},')
    loader_lines.append("};")
    loader_lines.append("")

    # wxlm_register_hosts
    loader_lines.append("void wxlm_register_hosts(void) {")
    loader_lines.append("    if (!RT_V143) return;")
    loader_lines.append("    rt_register_host(0x70051ff000ull, wxlm_host_log);")
    loader_lines.append("    rt_register_host(0x70051ff010ull, wxlm_host_noop);")
    loader_lines.append("    rt_register_host(0x70051ff020ull, wxlm_host_noop);")
    loader_lines.append("    rt_register_host(0x70051ff030ull, wxlm_host_noop);")
    for addr in all_fn_addrs:
        loader_lines.append(f"    rt_register_host(0x{addr:x}ull, f_{addr:x});")
    loader_lines.append("}")
    loader_lines.append("")

    # wxlm_sync_main_patches & wxlm_init_modules
    loader_lines.append(
        """static int g_wxlm_inited = 0;

void wxlm_sync_main_patches(void) {
    if (!g_wxlm_inited) return;
    if (!plat_mem_protect(0x7000000000ull, 0x3976000ull, PLAT_PROT_RW)) {
        rt_log("[wxlm] failed to unprotect main .text for patch sync");
        return;
    }
    for (uint32_t m = 0; m < sizeof(wxlm_mod_patches) / sizeof(wxlm_mod_patches[0]); m++) {
        int set_id = rt_patch_set(wxlm_mod_patches[m].set_name);
        int enabled = (set_id >= 0) ? rt_patch_enabled(set_id) : 0;
        const WxlmPatchSite *sites = wxlm_mod_patches[m].sites;
        uint32_t count = wxlm_mod_patches[m].count;
        for (uint32_t i = 0; i < count; i++) {
            uint32_t *dst = (uint32_t *)(uintptr_t)(0x7000000000ull + sites[i].rva);
            *dst = enabled ? sites[i].patched_w : sites[i].orig_w;
        }
    }
    plat_mem_protect(0x7000000000ull, 0x3976000ull, PLAT_PROT_READ);
}

void wxlm_init_modules(void) {
    if (!RT_V143) return;
    if (g_wxlm_inited) {
        wxlm_sync_main_patches();
        return;
    }
    /* Commit 0x70051FB000..0x7005C00000 (includes 16 KiB temp stack at 0x70051FB000..0x70051FF000) */
    if (!plat_mem_commit(0x70051fb000ull, 0x7005c00000ull - 0x70051fb000ull)) {
        rt_log("[wxlm] failed to commit module arena");
        return;
    }
    for (uint32_t i = 0; i < sizeof(wxlm_spans) / sizeof(wxlm_spans[0]); i++) {
        memcpy((void *)(uintptr_t)wxlm_spans[i].dst, wxlm_spans[i].data, wxlm_spans[i].len);
    }
    /* Run eqcat143 ec_native8_init (f_700550577c) before patching main .text so its anchor verification sees original bytes */
    {
        Cpu cpu;
        memset(&cpu, 0, sizeof(cpu));
        cpu.sp = 0x70051fef00ull;
        cpu.x[0] = 0x7005523000ull;
        cpu.x[1] = 0x7000000000ull;
        cpu.x[2] = 0x7005500000ull;
        cpu.x[3] = 0x7005513000ull;
        cpu.x[4] = 0xee62ull;
        f_700550577c(&cpu);
        *(uint32_t *)(uintptr_t)0x7005523038ull = 17u;
        *(uint32_t *)(uintptr_t)0x7005523008ull = 1u;
        rt_log("[wxlm] eqcat143 init: ready=%u error=%u",
               *(uint32_t *)(uintptr_t)0x7005523008ull,
               *(uint32_t *)(uintptr_t)0x700552300cull);
    }
    g_wxlm_inited = 1;
    wxlm_sync_main_patches();
    rt_log("[wxlm] initialized 10 WiiXLaunch modules");
}
"""
    )

    loader_path = REPO_DIR / "runtime" / "wxlm_loader.c"
    loader_text = "\n".join(loader_lines)
    loader_path.write_text(loader_text, encoding="utf-8")
    print(f"Wrote {loader_path.name}: {len(loader_text)} bytes ({len(blob_bytes)} blob bytes in {len(span_entries)} spans)")


if __name__ == "__main__":
    main()
