#include "cpu.h"
#include "simd.h"

extern int g_wxlm_arrow_unwind;

void f_7005201000(Cpu *c);
void f_7005203000(Cpu *c);
void f_7005203800(Cpu *c);
void f_7005204000(Cpu *c);
void f_7005204800(Cpu *c);
void f_7005205000(Cpu *c);
void f_7005205100(Cpu *c);
void f_7005206000(Cpu *c);
void f_7005301000(Cpu *c);
void f_7005301300(Cpu *c);
void f_7005301400(Cpu *c);
void f_7005301700(Cpu *c);
void f_7005301800(Cpu *c);
void f_7005301b00(Cpu *c);
void f_7005301c00(Cpu *c);
void f_7005301f00(Cpu *c);
void f_7005302000(Cpu *c);
void f_7005302300(Cpu *c);
void f_7005302400(Cpu *c);
void f_7005302700(Cpu *c);
void f_7005302800(Cpu *c);
void f_7005302b00(Cpu *c);
void f_7005302c00(Cpu *c);
void f_7005304000(Cpu *c);
void f_70053040b4(Cpu *c);
void f_7005304148(Cpu *c);
void f_7005304350(Cpu *c);
void f_70053044b0(Cpu *c);
void f_7005304548(Cpu *c);
void f_700530482c(Cpu *c);
void f_7005304da4(Cpu *c);
void f_7005304e84(Cpu *c);
void f_70053052a0(Cpu *c);
void f_70053053d8(Cpu *c);
void f_70053054f8(Cpu *c);
void f_7005305558(Cpu *c);
void f_700530563c(Cpu *c);
void f_7005305664(Cpu *c);
void f_70053058ec(Cpu *c);
void f_7005305bc0(Cpu *c);
void f_7005305bc8(Cpu *c);
void f_7005305bd8(Cpu *c);
void f_70053061ac(Cpu *c);
void f_7005306ec0(Cpu *c);
void f_7005307b40(Cpu *c);
void f_7005308448(Cpu *c);
void f_70053088f8(Cpu *c);
void f_70053099d4(Cpu *c);
void f_70053099e0(Cpu *c);
void f_7005309a08(Cpu *c);
void f_7005309a10(Cpu *c);
void f_7005309aa4(Cpu *c);
void f_7005309cf8(Cpu *c);
void f_7005309ee4(Cpu *c);
void f_700530a400(Cpu *c);
void f_700530a428(Cpu *c);
void f_700530a8c4(Cpu *c);
void f_7005310000(Cpu *c);
void f_70053100d0(Cpu *c);
void f_70053100f0(Cpu *c);
void f_70053101dc(Cpu *c);
void f_7005311f58(Cpu *c);
void f_70053124b0(Cpu *c);
void f_7005312aac(Cpu *c);
void f_7005312bf4(Cpu *c);
void f_7005312bfc(Cpu *c);
void f_7005312c04(Cpu *c);
void f_7005312cf8(Cpu *c);
void f_7005312da4(Cpu *c);
void f_7005312e44(Cpu *c);
void f_7005312f60(Cpu *c);
void f_7005312f6c(Cpu *c);
void f_7005313174(Cpu *c);
void f_7005313220(Cpu *c);
void f_7005313234(Cpu *c);
void f_700531324c(Cpu *c);
void f_7005313274(Cpu *c);
void f_700531327c(Cpu *c);
void f_7005313290(Cpu *c);
void f_700531345c(Cpu *c);
void f_7005313478(Cpu *c);
void f_700531348c(Cpu *c);
void f_70053134a8(Cpu *c);
void f_70053134bc(Cpu *c);
void f_70053134e0(Cpu *c);
void f_7005313504(Cpu *c);
void f_7005313528(Cpu *c);
void f_700531354c(Cpu *c);
void f_70053135e0(Cpu *c);
void f_7005313690(Cpu *c);
void f_7005313694(Cpu *c);
void f_7005313760(Cpu *c);
void f_70053137d8(Cpu *c);
void f_70053137f8(Cpu *c);
void f_7005313810(Cpu *c);
void f_7005313838(Cpu *c);
void f_700531450c(Cpu *c);
void f_70053145c4(Cpu *c);
void f_7005314810(Cpu *c);
void f_70053148e8(Cpu *c);
void f_7005314aec(Cpu *c);
void f_7005315100(Cpu *c);
void f_70053154cc(Cpu *c);
void f_70053156f4(Cpu *c);
void f_70053157d8(Cpu *c);
void f_7005315804(Cpu *c);
void f_7005315808(Cpu *c);
void f_700531580c(Cpu *c);
void f_7005315848(Cpu *c);
void f_70053158b4(Cpu *c);
void f_7005315ca0(Cpu *c);
void f_7005315db4(Cpu *c);
void f_7005315f68(Cpu *c);
void f_7005315fe4(Cpu *c);
void f_7005316090(Cpu *c);
void f_7005316138(Cpu *c);
void f_7005316140(Cpu *c);
void f_70053161f8(Cpu *c);
void f_700531635c(Cpu *c);
void f_70053163c4(Cpu *c);
void f_7005316418(Cpu *c);
void f_7005316eb0(Cpu *c);
void f_7005316fcc(Cpu *c);
void f_7005317080(Cpu *c);
void f_7005317224(Cpu *c);
void f_70053175c4(Cpu *c);
void f_70053177c8(Cpu *c);
void f_70053179c4(Cpu *c);
void f_7005317b00(Cpu *c);
void f_7005317c20(Cpu *c);
void f_7005317cd4(Cpu *c);
void f_7005317f2c(Cpu *c);
void f_70053184b4(Cpu *c);
void f_7005318714(Cpu *c);
void f_7005318a9c(Cpu *c);
void f_7005318b88(Cpu *c);
void f_7005318c70(Cpu *c);
void f_7005318d80(Cpu *c);
void f_70053197dc(Cpu *c);
void f_7005319874(Cpu *c);
void f_700531be78(Cpu *c);
void f_700531beb0(Cpu *c);
void f_700531bef8(Cpu *c);
void f_700531befc(Cpu *c);
void f_700531bf28(Cpu *c);
void f_700531bfa0(Cpu *c);
void f_700531bfbc(Cpu *c);
void f_700531c070(Cpu *c);
void f_700531c0dc(Cpu *c);
void f_700531c258(Cpu *c);
void f_700531c2e0(Cpu *c);
void f_700531c2e8(Cpu *c);
void f_700531c2f0(Cpu *c);
void f_700531c2f8(Cpu *c);
void f_700531c300(Cpu *c);
void f_700531c308(Cpu *c);
void f_700531c310(Cpu *c);
void f_700531c318(Cpu *c);
void f_700531c320(Cpu *c);
void f_700531c328(Cpu *c);
void f_700531c330(Cpu *c);
void f_700531c338(Cpu *c);
void f_700531c340(Cpu *c);
void f_700531c348(Cpu *c);
void f_700531c350(Cpu *c);
void f_700531c358(Cpu *c);
void f_700531c360(Cpu *c);
void f_700531c368(Cpu *c);
void f_700531c370(Cpu *c);
void f_700531c378(Cpu *c);
void f_700531c380(Cpu *c);
void f_700531c388(Cpu *c);
void f_700531c390(Cpu *c);
void f_700531c398(Cpu *c);
void f_700531c3a0(Cpu *c);
void f_700531c3a8(Cpu *c);
void f_700531c3b0(Cpu *c);
void f_700531c3b8(Cpu *c);
void f_700531c3c0(Cpu *c);
void f_700531c3c8(Cpu *c);
void f_700531c3d0(Cpu *c);
void f_700531c3d8(Cpu *c);
void f_700531c3e0(Cpu *c);
void f_700531c3e8(Cpu *c);
void f_700531c3f0(Cpu *c);
void f_700531c3f8(Cpu *c);
void f_700531c400(Cpu *c);
void f_700531c408(Cpu *c);
void f_700531c410(Cpu *c);
void f_700531c418(Cpu *c);
void f_700531c420(Cpu *c);
void f_700531c428(Cpu *c);
void f_700531c430(Cpu *c);
void f_700531c438(Cpu *c);
void f_700531c440(Cpu *c);
void f_700531c448(Cpu *c);
void f_700531c450(Cpu *c);
void f_700531c458(Cpu *c);
void f_700531c460(Cpu *c);
void f_700531c468(Cpu *c);
void f_700531c470(Cpu *c);
void f_700531c478(Cpu *c);
void f_700531c480(Cpu *c);
void f_700531c488(Cpu *c);
void f_700531c490(Cpu *c);
void f_700531c498(Cpu *c);
void f_700531c4a0(Cpu *c);
void f_700531c4a8(Cpu *c);
void f_700531c4b0(Cpu *c);
void f_700531c4b8(Cpu *c);
void f_700531c4c0(Cpu *c);
void f_700531c4c8(Cpu *c);
void f_700531c4d0(Cpu *c);
void f_700531c4d8(Cpu *c);
void f_700531c4e0(Cpu *c);
void f_700531c4e8(Cpu *c);
void f_700531c4f0(Cpu *c);
void f_700531c4f8(Cpu *c);
void f_700531c500(Cpu *c);
void f_700531c508(Cpu *c);
void f_700531c510(Cpu *c);
void f_700531c518(Cpu *c);
void f_700531c520(Cpu *c);
void f_700531c528(Cpu *c);
void f_700531c530(Cpu *c);
void f_700531c538(Cpu *c);
void f_700531c540(Cpu *c);
void f_700531c548(Cpu *c);
void f_700531c550(Cpu *c);
void f_700531c558(Cpu *c);
void f_700531c560(Cpu *c);
void f_700531c568(Cpu *c);
void f_700531c570(Cpu *c);
void f_700531c578(Cpu *c);
void f_700531c580(Cpu *c);
void f_700531c588(Cpu *c);
void f_700531c590(Cpu *c);
void f_700531c598(Cpu *c);
void f_700531c5a0(Cpu *c);
void f_700531c5a8(Cpu *c);
void f_700531c5b0(Cpu *c);
void f_700531c5b8(Cpu *c);
void f_700531c5c0(Cpu *c);
void f_700531c5c8(Cpu *c);
void f_700531c5d0(Cpu *c);
void f_700531c5d8(Cpu *c);
void f_700531c5e0(Cpu *c);
void f_700531c5e8(Cpu *c);
void f_700531c5f0(Cpu *c);
void f_700531c5f8(Cpu *c);
void f_700531c600(Cpu *c);
void f_700531c610(Cpu *c);
void f_700531c618(Cpu *c);
void f_700531c620(Cpu *c);
void f_700531c628(Cpu *c);
void f_700531c630(Cpu *c);
void f_700531c638(Cpu *c);
void f_700531c640(Cpu *c);
void f_700531c648(Cpu *c);
void f_700531c650(Cpu *c);
void f_700531c658(Cpu *c);
void f_700531c668(Cpu *c);
void f_700531c670(Cpu *c);
void f_700531c678(Cpu *c);
void f_700531c680(Cpu *c);
void f_700531c688(Cpu *c);
void f_700531c698(Cpu *c);
void f_700531c6a0(Cpu *c);
void f_700531c6a8(Cpu *c);
void f_700531c6b0(Cpu *c);
void f_700531c6b8(Cpu *c);
void f_700531c6c0(Cpu *c);
void f_700531c6c8(Cpu *c);
void f_700531c6d0(Cpu *c);
void f_700531c6d8(Cpu *c);
void f_700531c6e0(Cpu *c);
void f_700531c6e8(Cpu *c);
void f_700531c6f0(Cpu *c);
void f_700531c6f8(Cpu *c);
void f_700531c700(Cpu *c);
void f_700531c708(Cpu *c);
void f_700531c710(Cpu *c);
void f_700531c718(Cpu *c);
void f_700531c720(Cpu *c);
void f_700531c728(Cpu *c);
void f_700531c730(Cpu *c);
void f_700531c738(Cpu *c);
void f_700531c740(Cpu *c);
void f_700531c748(Cpu *c);
void f_700531c750(Cpu *c);
void f_700531c758(Cpu *c);
void f_700531c760(Cpu *c);
void f_700531c768(Cpu *c);
void f_700531c770(Cpu *c);
void f_700531c778(Cpu *c);
void f_700531c780(Cpu *c);
void f_700531c788(Cpu *c);
void f_700531c790(Cpu *c);
void f_700531c798(Cpu *c);
void f_700531c7a0(Cpu *c);
void f_700531c7a8(Cpu *c);
void f_700531c7b0(Cpu *c);
void f_700531c7b8(Cpu *c);
void f_700531c7c0(Cpu *c);
void f_700531c7c8(Cpu *c);
void f_700531c7d0(Cpu *c);
void f_700531c7d8(Cpu *c);
void f_700531c7e0(Cpu *c);
void f_700531c7e8(Cpu *c);
void f_700531c7f0(Cpu *c);
void f_700531c7f8(Cpu *c);
void f_7005401000(Cpu *c);
void f_7005401400(Cpu *c);
void f_7005401800(Cpu *c);
void f_7005401c00(Cpu *c);
void f_7005402000(Cpu *c);
void f_7005402400(Cpu *c);
void f_7005402800(Cpu *c);
void f_7005403000(Cpu *c);
void f_7005403800(Cpu *c);
void f_7005404000(Cpu *c);
void f_7005404800(Cpu *c);
void f_7005409000(Cpu *c);
void f_7005502000(Cpu *c);
void f_7005502200(Cpu *c);
void f_7005502400(Cpu *c);
void f_7005502600(Cpu *c);
void f_7005502800(Cpu *c);
void f_7005502a00(Cpu *c);
void f_7005502c00(Cpu *c);
void f_7005502e00(Cpu *c);
void f_7005503000(Cpu *c);
void f_7005503200(Cpu *c);
void f_7005503400(Cpu *c);
void f_7005503600(Cpu *c);
void f_7005503800(Cpu *c);
void f_7005503a00(Cpu *c);
void f_7005503c00(Cpu *c);
void f_7005503e00(Cpu *c);
void f_7005504000(Cpu *c);
void f_7005505000(Cpu *c);
void f_700550577c(Cpu *c);
void f_700550593c(Cpu *c);
void f_7005505984(Cpu *c);
void f_70055059a4(Cpu *c);
void f_7005505a94(Cpu *c);
void f_7005505ac4(Cpu *c);
void f_7005505acc(Cpu *c);
void f_7005505ad4(Cpu *c);
void f_7005505b5c(Cpu *c);
void f_7005505bb8(Cpu *c);
void f_7005505d70(Cpu *c);
void f_7005506014(Cpu *c);
void f_7005506094(Cpu *c);
void f_70055060fc(Cpu *c);
void f_70055063c8(Cpu *c);
void f_7005506474(Cpu *c);
void f_700550656c(Cpu *c);
void f_700550662c(Cpu *c);
void f_7005506668(Cpu *c);
void f_70055066cc(Cpu *c);
void f_7005506a64(Cpu *c);
void f_7005506b70(Cpu *c);
void f_7005506bec(Cpu *c);
void f_7005506c48(Cpu *c);
void f_7005506d44(Cpu *c);
void f_7005507020(Cpu *c);
void f_7005507c54(Cpu *c);
void f_7005507cf8(Cpu *c);
void f_7005507d50(Cpu *c);
void f_7005507d58(Cpu *c);
void f_7005508018(Cpu *c);
void f_70055080a0(Cpu *c);
void f_70055080f8(Cpu *c);
void f_7005508758(Cpu *c);
void f_7005508a38(Cpu *c);
void f_7005508b88(Cpu *c);
void f_7005508d90(Cpu *c);
void f_7005508e48(Cpu *c);
void f_7005509080(Cpu *c);
void f_7005509134(Cpu *c);
void f_70055091ac(Cpu *c);
void f_700550934c(Cpu *c);
void f_70055093e8(Cpu *c);
void f_7005509468(Cpu *c);
void f_7005509828(Cpu *c);
void f_7005509b34(Cpu *c);
void f_7005509c04(Cpu *c);
void f_7005509c8c(Cpu *c);
void f_7005509d00(Cpu *c);
void f_7005509d84(Cpu *c);
void f_700550a39c(Cpu *c);
void f_700550a414(Cpu *c);
void f_700550a48c(Cpu *c);
void f_700550a554(Cpu *c);
void f_700550a5fc(Cpu *c);
void f_700550a9d8(Cpu *c);
void f_700550aae0(Cpu *c);
void f_700550abf8(Cpu *c);
void f_700550ac54(Cpu *c);
void f_700550aee4(Cpu *c);
void f_700550b000(Cpu *c);
void f_700550b148(Cpu *c);
void f_700550b444(Cpu *c);
void f_700550b8b0(Cpu *c);
void f_700550b96c(Cpu *c);
void f_700550ba18(Cpu *c);
void f_700550bc40(Cpu *c);
void f_700550bca8(Cpu *c);
void f_700550c0d0(Cpu *c);
void f_700550c1b0(Cpu *c);
void f_700550c34c(Cpu *c);
void f_700550c460(Cpu *c);
void f_700550c698(Cpu *c);
void f_700550c73c(Cpu *c);
void f_700550cd14(Cpu *c);
void f_700550ce28(Cpu *c);
void f_700550ce48(Cpu *c);
void f_700550d560(Cpu *c);
void f_700550d630(Cpu *c);
void f_700550d698(Cpu *c);
void f_700550d774(Cpu *c);
void f_700550d8dc(Cpu *c);
void f_700550d934(Cpu *c);
void f_700550db98(Cpu *c);
void f_700550e020(Cpu *c);
void f_700550e528(Cpu *c);
void f_700550e73c(Cpu *c);
void f_700550eb08(Cpu *c);
void f_700550ed64(Cpu *c);
void f_700550edb0(Cpu *c);
void f_700550ee74(Cpu *c);
void f_700550eeb8(Cpu *c);
void f_700550eec4(Cpu *c);
void f_700550f1e4(Cpu *c);
void f_700550f5e4(Cpu *c);
void f_700550fba4(Cpu *c);
void f_700550fbd8(Cpu *c);
void f_700550fc88(Cpu *c);
void f_700550fcf8(Cpu *c);
void f_700550fd48(Cpu *c);
void f_700550fe20(Cpu *c);
void f_700550fe9c(Cpu *c);
void f_700550ff34(Cpu *c);
void f_700550ff50(Cpu *c);
void f_700550ff68(Cpu *c);
void f_7005601000(Cpu *c);
void f_7005601800(Cpu *c);
void f_7005602000(Cpu *c);
void f_7005602800(Cpu *c);
void f_7005603000(Cpu *c);
void f_7005603800(Cpu *c);
void f_7005604000(Cpu *c);
void f_7005604800(Cpu *c);
void f_7005605200(Cpu *c);
void f_7005605600(Cpu *c);
void f_7005605a00(Cpu *c);
void f_7005605e00(Cpu *c);
void f_7005605f00(Cpu *c);
void f_7005606000(Cpu *c);
void f_7005606400(Cpu *c);
void f_7005606800(Cpu *c);
void f_7005606c00(Cpu *c);
void f_7005607400(Cpu *c);
void f_7005607c00(Cpu *c);
void f_7005608000(Cpu *c);
void f_7005608800(Cpu *c);
void f_7005609000(Cpu *c);
void f_7005609800(Cpu *c);
void f_700560a000(Cpu *c);
void f_700560a800(Cpu *c);
void f_700560b000(Cpu *c);
void f_700560b400(Cpu *c);
void f_700560b800(Cpu *c);
void f_700560bc00(Cpu *c);
void f_7005701000(Cpu *c);
void f_7005701600(Cpu *c);
void f_7005703000(Cpu *c);
void f_7005801000(Cpu *c);
void f_7005801400(Cpu *c);
void f_7005801800(Cpu *c);
void f_7005802000(Cpu *c);
void f_7005802800(Cpu *c);
void f_7005803000(Cpu *c);
void f_7005803800(Cpu *c);
void f_7005804000(Cpu *c);
void f_7005805000(Cpu *c);
void f_7005805800(Cpu *c);
void f_7005806000(Cpu *c);
void f_7005806800(Cpu *c);
void f_7005807000(Cpu *c);
void f_7005807800(Cpu *c);
void f_7005808000(Cpu *c);
void f_7005901000(Cpu *c);
void f_7005901400(Cpu *c);
void f_7005901800(Cpu *c);
void f_7005902000(Cpu *c);
void f_7005902400(Cpu *c);
void f_7005902800(Cpu *c);
void f_7005902c00(Cpu *c);
void f_7005903000(Cpu *c);
void f_7005904000(Cpu *c);
void f_7005904400(Cpu *c);
void f_7005904c00(Cpu *c);
void f_7005905000(Cpu *c);
void f_7005905800(Cpu *c);
void f_7005906600(Cpu *c);
void f_7005908000(Cpu *c);
void f_7005908c00(Cpu *c);
void f_7005909000(Cpu *c);
void f_7005909800(Cpu *c);
void f_700590a000(Cpu *c);
void f_700590a800(Cpu *c);
void f_7005913000(Cpu *c);
void f_7005a01000(Cpu *c);
void f_7005a01400(Cpu *c);
void f_7005a01800(Cpu *c);
void f_7005a01c00(Cpu *c);
void f_7005a02000(Cpu *c);
void f_7005a02400(Cpu *c);
void f_7005a02800(Cpu *c);
void f_7005a02c00(Cpu *c);
void f_7005a03000(Cpu *c);
void f_7005a03400(Cpu *c);
void f_7005a03800(Cpu *c);
void f_7005a04000(Cpu *c);
void f_7005a04400(Cpu *c);
void f_7005a04800(Cpu *c);
void f_7005a05400(Cpu *c);
void f_7005a05800(Cpu *c);
void f_7005a05c00(Cpu *c);
void f_7005a06000(Cpu *c);
void f_7005a06400(Cpu *c);
void f_7005a06800(Cpu *c);
void f_7005a06c00(Cpu *c);
void f_7005a07000(Cpu *c);
void f_7005a08000(Cpu *c);
void f_7005a08400(Cpu *c);
void f_7005a08800(Cpu *c);
void f_7005a08c00(Cpu *c);
void f_7005a09000(Cpu *c);
void f_7005a09400(Cpu *c);
void f_7005a09800(Cpu *c);
void f_7005a09c00(Cpu *c);
void f_7005a0a000(Cpu *c);
void f_7005a0a100(Cpu *c);
void f_7005a0a500(Cpu *c);
void f_7005a0a900(Cpu *c);
void f_7005a0ad00(Cpu *c);
void f_7005a0b000(Cpu *c);
void f_7005a0b178(Cpu *c);
void f_7005a0b300(Cpu *c);
void f_7005a0b800(Cpu *c);
void f_7005a0b820(Cpu *c);
void f_7005a1001c(Cpu *c);
void f_7005a10234(Cpu *c);
void f_7005a1097c(Cpu *c);
void f_7005a10b0c(Cpu *c);
void f_7005a10ca0(Cpu *c);
void f_7005a10d50(Cpu *c);
void f_7005a10dcc(Cpu *c);
void f_7005a1c000(Cpu *c);
void f_7005b01000(Cpu *c);
void f_7005b01800(Cpu *c);
void f_7005b02000(Cpu *c);
void f_7005b02800(Cpu *c);
void f_7005b03000(Cpu *c);
void f_7005b03800(Cpu *c);
void f_7005b04000(Cpu *c);
void f_7005c01000(Cpu *c);
void f_7005c01010(Cpu *c);
void f_7005c01020(Cpu *c);
void f_7005c01030(Cpu *c);
void f_7005c01040(Cpu *c);
void f_7005c01050(Cpu *c);
void f_7005c01060(Cpu *c);
__attribute__((weak)) void f_700016fdcc(Cpu *c);
__attribute__((weak)) void f_70002b6900(Cpu *c);
__attribute__((weak)) void f_70006d25f4(Cpu *c);
__attribute__((weak)) void f_70007a910c(Cpu *c);
__attribute__((weak)) void f_700085dff8(Cpu *c);
__attribute__((weak)) void f_7001b78bb0(Cpu *c);
__attribute__((weak)) void f_7001d23a4c(Cpu *c);
__attribute__((weak)) void f_7001d4c788(Cpu *c);
__attribute__((weak)) void f_70023bb4b8(Cpu *c);
__attribute__((weak)) void f_70023bb680(Cpu *c);
__attribute__((weak)) void f_70023bc074(Cpu *c);
__attribute__((weak)) void f_70024382c4(Cpu *c);
__attribute__((weak)) void f_7002a9f6f8(Cpu *c);

void f_7005201000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x360ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[16] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x340ull; ST64(ea, c->x[16]); }
    c->x[16] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 0x688ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700520129c;
    { uint64_t ea = c->sp + 0x310ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x690ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_LE(c)) goto L_700520129c;
    (void)(subs32(c, (uint32_t)c->x[9], 0x100ull));
    if (COND_HI(c)) goto L_700520129c;
    c->x[10] = (uint32_t)(0u | 0u);
L_70052010c0:;
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CS(c)) goto L_700520129c;
    (void)(subs32(c, (uint32_t)c->x[10], 0x40ull));
    if (COND_CS(c)) goto L_700520129c;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    if ((uint32_t)c->x[11] == 0) goto L_70052010e0;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    goto L_70052010c0;
L_70052010e0:;
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005207000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x400ull);
    c->x[30] = 0x70052010f0ull; f_7005205000(c);
    if ((uint32_t)c->x[0] == 0) goto L_70052010fc;
    c->x[8] = (uint32_t)(0x2ull);
    goto L_7005201184;
L_70052010fc:;
    /* hint */
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005207000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x40cull);
    c->x[30] = 0x7005201110ull; f_7005205000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700520111c;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005201184;
L_700520111c:;
    /* hint */
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005207000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x41bull);
    c->x[30] = 0x7005201130ull; f_7005205000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700520113c;
    c->x[8] = (uint32_t)(0x0ull);
    goto L_7005201184;
L_700520113c:;
    /* hint */
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005207000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x429ull);
    c->x[30] = 0x7005201150ull; f_7005205000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700520115c;
    c->x[8] = (uint32_t)(0x0ull);
    goto L_7005201184;
L_700520115c:;
    /* hint */
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005207000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x438ull);
    c->x[30] = 0x7005201170ull; f_7005205000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700520117c;
    c->x[8] = (uint32_t)(0x0ull);
    goto L_7005201184;
L_700520117c:;
    /* hint */
    goto L_700520129c;
L_7005201184:;
    { uint64_t ea = c->sp + 0x318ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x3c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x100ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x70052011a8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x700520e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] - c->x[9]);
    c->x[9] = (uint32_t)(0xdd00ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2090000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_7005201284;
    c->x[0] = (uint64_t)(0x700520e000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x110ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_700520129c;
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x108ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x70052011f8ull; rt_dispatch(c); c->pc = 0;
    c->x[2] = (uint32_t)((uint32_t)c->x[0] & 0x1ull);
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005201214ull; f_7005205100(c);
    if ((uint32_t)c->x[0] != 0) goto L_7005201230;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] ^ 0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005201230ull; f_7005205100(c);
L_7005201230:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_CC(c)) goto L_7005201268;
    (void)(subs32(c, (uint32_t)c->x[0], 0xbull));
    if (COND_HI(c)) goto L_7005201268;
    { uint64_t ea = c->sp + 0x3c0ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x3bcull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30cull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[30] = 0x7005201264ull; f_7005206000(c);
    goto L_700520129c;
L_7005201268:;
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0x3ull);
    { uint64_t ea = c->sp + 0x30cull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005201280ull; f_7005206000(c);
    goto L_700520129c;
L_7005201284:;
    c->x[0] = (uint32_t)(0x4ull);
    { uint64_t ea = c->sp + 0x30cull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[8]);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x700520129cull; f_7005206000(c);
L_700520129c:;
    { uint64_t ea = c->sp + 0x340ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpcr = c->x[16] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpsr = c->x[16] & 0xf800009full;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x360ull);
    c->x[8] = (uint64_t)(0ull | c->x[22]);
    c->pc = 0x700209a320ull; return;
}

void f_7005301000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x310ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[8] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[1] = (uint64_t)(0x700530e000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x100ull);
    c->x[2] = (uint64_t)(0x700530e000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x180ull);
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0x7005301000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x300ull);
    c->x[30] = 0x70053010b0ull; f_70053054f8(c);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x310ull);
    c->pc = 0; return;
}

void f_7005301f00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    c->pc = 0x7001b78bb4ull; f_7001b78bb0(c); c->pc = 0; return;
}

void f_7005302000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x310ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[8] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[1] = (uint64_t)(0x700530e000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x100ull);
    c->x[2] = (uint64_t)(0x700530e000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x180ull);
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0x7005302000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x300ull);
    c->x[30] = 0x70053020b0ull; f_7005307b40(c);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x310ull);
    c->pc = 0; return;
}

void f_7005304000(Cpu *c) {
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[2]);
    if (c->x[8] == 0) goto L_70053040b0;
    (void)(subs64(c, c->x[8], 0x8ull));
    c->x[9] = (uint64_t)(0ull | 0ull);
    if (COND_CC(c)) goto L_7005304094;
    c->x[10] = (uint64_t)(c->x[0] - c->x[1]);
    (void)(subs64(c, c->x[10], 0x20ull));
    if (COND_CC(c)) goto L_7005304094;
    (void)(subs64(c, c->x[8], 0x20ull));
    if (COND_CS(c)) goto L_7005304030;
    c->x[9] = (uint64_t)(0ull | 0ull);
    goto L_7005304068;
L_7005304030:;
    c->x[10] = (uint64_t)(c->x[2] & 0x1full);
    c->x[11] = (uint64_t)(c->x[1] + 0x10ull);
    c->x[12] = (uint64_t)(c->x[0] + 0x10ull);
    c->x[9] = (uint64_t)(c->x[8] - c->x[10]);
    c->x[13] = (uint64_t)(0ull | c->x[9]);
L_7005304044:;
    { uint64_t ea = c->x[11] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[13] = (uint64_t)(subs64(c, c->x[13], 0x20ull));
    c->x[11] = (uint64_t)(c->x[11] + 0x20ull);
    { uint64_t ea = c->x[12] - 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    c->x[12] = (uint64_t)(c->x[12] + 0x20ull);
    if (COND_NE(c)) goto L_7005304044;
    if (c->x[10] == 0) goto L_70053040b0;
    (void)(subs64(c, c->x[10], 0x8ull));
    if (COND_CC(c)) goto L_7005304094;
L_7005304068:;
    c->x[10] = (uint64_t)(c->x[2] & 0x7ull);
    c->x[11] = (uint64_t)(c->x[1] + c->x[9]);
    c->x[12] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[13] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[9] = (uint64_t)(c->x[8] - c->x[10]);
    c->x[13] = (uint64_t)(c->x[13] - c->x[8]);
L_7005304080:;
    { uint64_t ea = c->x[11]; c->v[0] = LD64(ea); c->x[11] = c->x[11] + 8; }
    c->x[13] = (uint64_t)(adds64(c, c->x[13], 0x8ull));
    { uint64_t ea = c->x[12]; ST64(ea, VS64(0)); c->x[12] = c->x[12] + 8; }
    if (COND_NE(c)) goto L_7005304080;
    if (c->x[10] == 0) goto L_70053040b0;
L_7005304094:;
    c->x[8] = (uint64_t)(c->x[8] - c->x[9]);
    c->x[10] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[1] + c->x[9]);
L_70053040a0:;
    { uint64_t ea = c->x[9]; uint64_t v = LD8(ea); c->x[9] = c->x[9] + 1; c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    { uint64_t ea = c->x[10]; ST8(ea, (uint32_t)c->x[11]); c->x[10] = c->x[10] + 1; }
    if (COND_NE(c)) goto L_70053040a0;
L_70053040b0:;
    c->pc = 0; return;
}

void f_7005304148(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x0ull; c->v[7] = LD32(ea); }
    c->x[8] = (uint32_t)(0x7f7fffffull);
    c->x[9] = (uint32_t)(VS32(7));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_7005304168;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_7005304168:;
    { uint64_t ea = c->x[0] + 0x4ull; c->v[5] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(5));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_7005304184;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_7005304184:;
    { uint64_t ea = c->x[0] + 0x8ull; c->v[16] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(16));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_70053041a4;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_70053041a4:;
    { uint64_t ea = c->x[0] + 0xcull; c->v[6] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(6));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_70053041c0;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_70053041c0:;
    { uint64_t ea = c->x[0] + 0x10ull; c->v[4] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(4));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_70053041e0;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_70053041e0:;
    { uint64_t ea = c->x[0] + 0x14ull; c->v[3] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(3));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_70053041fc;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_70053041fc:;
    { uint64_t ea = c->x[0] + 0x18ull; c->v[2] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(2));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_700530421c;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_700530421c:;
    { uint64_t ea = c->x[0] + 0x1cull; c->v[1] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_7005304238;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_7005304238:;
    { uint64_t ea = c->x[0] + 0x20ull; c->v[0] = LD32(ea); }
    c->x[9] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)(VS32(0));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LE(c)) goto L_7005304258;
    c->x[0] = (uint32_t)(0u & 0x1ull);
    c->pc = 0; return;
L_7005304258:;
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3dcc0000ull);
    c->v[17] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(7), VSF32(17));
    if (COND_LE(c)) goto L_7005304348;
    c->v[17] = 0x41400000ull;
    c->nzcv = cmp_s(c, VSF32(7), VSF32(17));
    if (COND_HI(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(16), 0);
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_LE(c)) goto L_7005304348;
    c->v[7] = 0x41400000ull;
    c->nzcv = cmp_s(c, VSF32(16), VSF32(7));
    if (COND_HI(c)) goto L_7005304348;
    c->v[7] = 0xbf800000ull;
    c->x[8] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(5), VSF32(7));
    if (COND_LT(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(5), 0);
    if (COND_HI(c)) goto L_7005304348;
    c->v[5] = 0xc0000000ull;
    c->x[8] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(6), VSF32(5));
    if (COND_LT(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(6), 0);
    if (COND_HI(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(4), 0);
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_LT(c)) goto L_7005304348;
    c->v[5] = 0x41000000ull;
    c->nzcv = cmp_s(c, VSF32(4), VSF32(5));
    if (COND_HI(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(3), 0);
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_HI(c)) goto L_7005304348;
    c->v[4] = 0xc1f00000ull;
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    if (COND_LT(c)) goto L_7005304348;
    c->nzcv = cmp_s(c, VSF32(2), 0);
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_LE(c)) goto L_7005304348;
    c->x[9] = (uint32_t)(0x44fa0000ull);
    c->v[3] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_HI(c)) goto L_7005304348;
    c->x[8] = (uint32_t)(0x47aeull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f810000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xd70aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3c230000ull);
    c->v[3] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    c->nzcv = COND_LS(c) ? cmp_s(c, VSF32(1), VSF32(3)) : 0x80000000ull;
    c->v[1] = 0x0ull;
    c->x[8] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->nzcv = COND_LS(c) ? cmp_s(c, VSF32(0), VSF32(1)) : 0x40000000ull;
    c->x[9] = (uint32_t)((COND_LE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9]);
L_7005304348:;
    c->x[0] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->pc = 0; return;
}

void f_7005304e84(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005304ea4;
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005304ea4;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x82ull);
    (void)(adds32(c, (uint32_t)c->x[9], 0x81ull));
    if (COND_HI(c)) goto L_7005304eac;
L_7005304ea4:;
    { uint64_t ea = c->x[1] + 0x8ull; ST32(ea, 0u); }
    c->pc = 0; return;
L_7005304eac:;
    c->sp = (uint64_t)(c->sp - 0xc0ull);
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, VS64(12)); }
    { uint64_t ea = c->sp + 112; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 128; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x90ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 20; c->v[4] = LD32(ea); c->x[19] = ea; }
    c->x[9] = (uint64_t)(c->x[19] + 0x60cull);
    { uint64_t ea = c->x[19] + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->x[9] + 0x0ull; c->v[5] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x614ull; c->v[6] = LD32(ea); }
    if ((uint32_t)c->x[10] == 0) goto L_7005305130;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005305130;
    { uint64_t ea = c->x[1] + 0x10ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x630ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005305130;
    (void)(adds64(c, c->x[9], 0x1ull));
    if (COND_EQ(c)) goto L_7005305130;
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[9], 0x3ull));
    if (COND_HI(c)) goto L_7005305130;
    { uint64_t ea = c->x[1] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x644ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005305130;
    { uint64_t ea = c->x[1] + 36; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
    c->x[9] = (uint32_t)(0xb852ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3f7e0000ull);
    FP_SETS(1, op_s(c, FOP_MUL, VSF32(1), VREG(vf32, 5)[1], 0));
    fp_fma_s(c, 0, 0, 1, 2, 5, 1);
    { uint64_t ea = c->x[1] + 0x2cull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 2, 6, 1);
    c->v[2] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    if (COND_LE(c)) goto L_7005305130;
    { uint64_t ea = c->x[1] + 0x40ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x63cull; c->v[2] = LD32(ea); }
    c->x[9] = (uint32_t)(0xfeb0ull);
    { uint64_t ea = c->x[0] + 0x638ull; c->v[3] = LD32(ea); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3f7f0000ull);
    fp_op_s(c, FOP_MUL, 1, 1, 2);
    { uint64_t ea = c->x[1] + 0x3cull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 2, 3, 1);
    { uint64_t ea = c->x[1] + 0x44ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x640ull; c->v[3] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 2, 3, 1);
    c->v[2] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    if (COND_LE(c)) goto L_7005305130;
    c->v[10] = VS32(0);
    { uint64_t ea = c->x[1] + 48; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[1] + 0x38ull; c->v[2] = LD32(ea); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    c->x[9] = (uint32_t)(0xcull);
    c->x[8] = (uint64_t)(c->x[19] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[6]); ST128(ea + 16, c->v[5]); }
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    fp_op_s(c, FOP_SUB, 0, 8, 0);
    fp_op_s(c, FOP_SUB, 1, 4, 1);
    fp_op_s(c, FOP_SUB, 2, 9, 2);
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[4]); }
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[8] + 0x0ull; c->v[12] = LD64(ea); }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[11] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005304fe4ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xd70aull);
    c->x[20] = (uint64_t)(0ull | c->x[21]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3da30000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    { uint64_t ea = c->x[20] + 24; c->v[0] = LD64(ea); c->x[20] = ea; }
    if (COND_PL(c)) goto L_70053051d0;
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 0), VQ(vf32, 0, 12), (vf32){});
    { uint64_t ea = c->x[20] + 0x8ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 11, 1, 11);
    c->v[12] = ((sa32 *)&c->v[2])[1];
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[2]); }
    FP_SETS(0, op_s(c, FOP_MUL, VSF32(12), VREG(vf32, 2)[1], 0));
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    fp_fma_s(c, 0, 0, 0, 11, 11, 0);
    c->x[30] = 0x7005305024ull; f_700530a428(c);
    c->v[1] = 0x3e800000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_70053051d0;
    { uint64_t ea = c->sp + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[5] = b; }
    c->x[8] = (uint32_t)(0xd70aull);
    { uint64_t ea = c->sp + 0x0ull; c->v[3] = LD128(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ca30000ull);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->v[2] = (uint32_t)c->x[8];
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->v[0] = ((sa32 *)&c->v[5])[1];
    fp_op_s(c, FOP_MUL, 0, 0, 12);
    fp_fma_s(c, 0, 0, 1, 3, 5, 0);
    fp_fma_s(c, 0, 0, 0, 11, 6, 1);
    fp_fma_s(c, 1, 1, 1, 11, 6, 1);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[1] = COND_MI(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    if (COND_PL(c)) goto L_70053051e4;
    SV_FOP_S(FOP_MUL, 0, 1, VQ(vf32, 0, 5), vsplat_s(VREG(vf32, 0), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 0, 6, 0);
    c->v[12] = 0x0ull;
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    SV_FOP_S(FOP_SUB, 0, 3, VQ(vf32, 0, 3), VQ(vf32, 0, 1), (vf32){});
    fp_op_s(c, FOP_SUB, 11, 11, 0);
    if (COND_EQ(c)) goto L_70053050c8;
    c->x[8] = (uint32_t)(0x999aull);
    c->v[1] = 0x3f800000ull;
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d990000ull);
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xd70aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3da30000ull);
    c->v[2] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_ADD, 0, 10, 0);
    fp_op_s(c, FOP_DIV, 0, 10, 0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[1] = COND_GT(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[12] = COND_MI(c) ? VS32(2) : VS32(1);
L_70053050c8:;
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 3), VQ(vf32, 0, 3), (vf32){});
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[3]); }
    c->v[0] = ((sa32 *)&c->v[0])[1];
    fp_fma_s(c, 0, 0, 0, 3, 3, 0);
    fp_fma_s(c, 0, 0, 0, 11, 11, 0);
    c->x[30] = 0x70053050e0ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0x126full);
    c->v[1] = 0x3f800000ull;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3c030000ull);
    c->v[3] = (uint32_t)c->x[8];
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_SUB, 2, 1, 12);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(3));
    c->v[1] = COND_MI(c) ? VS32(1) : VS32(2);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_7005305298;
    { uint64_t ea = c->sp + 0x0ull; c->v[0] = LD128(ea); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    FP_SETS(2, fromint_s(c, (uint32_t)c->x[9], 32, 1, 0));
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 0), vsplat_s(VREG(vf32, 1), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 1, 11, 1);
    if (COND_CS(c)) goto L_70053051ec;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_7005305254;
L_7005305130:;
    c->x[20] = (uint64_t)(c->x[1] + 0x18ull);
L_7005305134:;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xcull);
    ((sa32 *)&c->v[5])[2] = ((sa32 *)&c->v[6])[0];
    { uint64_t ea = c->x[0] + 0x640ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x638ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    { uint64_t ea = c->x[0] + 0x630ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x60ull; c->v[12] = LD64(ea); }
    c->x[8] = (uint64_t)(c->x[19] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    { uint64_t ea = c->x[0] + 0x644ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x48ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint32_t)(0x1ull);
    ((sa32 *)&c->v[5])[3] = ((sa32 *)&c->v[4])[0];
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 8; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[1] + 52; ST32(ea, VS32(8)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->sp + 128; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->x[29] - 56; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[9] = (uint64_t)(0ull | c->x[11]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[11]); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[1] + 0x10ull; ST64(ea, c->x[12]); }
    { uint64_t ea = c->sp + 112; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->x[1] + 36; ST128(ea, c->v[5]); }
    { uint64_t ea = c->x[1] + 0x44ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 60; ST64(ea, c->x[9]); }
    c->sp = (uint64_t)(c->sp + 0xc0ull);
    c->pc = 0; return;
L_70053051d0:;
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
L_70053051d8:;
    { uint64_t ea = c->sp + 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[6] = b; }
    { uint64_t ea = c->sp + 0x30ull; c->v[5] = LD128(ea); }
    goto L_7005305134;
L_70053051e4:;
    { uint64_t ea = c->sp + 0x10ull; c->v[4] = LD128(ea); }
    goto L_7005305134;
L_70053051ec:;
    c->v[3] = ((u128)0x400000004ull << 64 | 0x400000004ull);
    c->x[10] = (uint64_t)(c->x[8] - 0x1ull);
    VW(vu32, 1, 4, SHUF(VREG(vu32, 2), VREG(vu32, 2), 0, 0, 0, 0));
    c->x[9] = (uint64_t)(0x700530a000ull);
    c->x[11] = (uint64_t)(c->x[10] & 0xfffffffffffffffcull);
    c->x[12] = (uint64_t)(c->x[0] + 0x20ull);
    { uint64_t ea = c->x[9] + 0x880ull; c->v[5] = LD128(ea); }
    c->x[9] = (uint64_t)(c->x[11] | 0x1ull);
    c->x[13] = (uint64_t)(0ull | c->x[11]);
L_7005305210:;
    VW(vf32, 1, 6, vfromint_s(c, VREG(vu32, 5), 0, 1));
    { uint64_t ea = c->x[12]; sl_ldm(c, 1, 2, 3, 1, 16, ea); }
    VW(vu32, 1, 5, VREG(vu32, 5) + VREG(vu32, 3));
    c->x[13] = (uint64_t)(subs64(c, c->x[13], 0x4ull));
    SV_FOP_S(FOP_DIV, 1, 6, VREG(vf32, 6), VREG(vf32, 4), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 6, VREG(vf32, 6), VREG(vf32, 6), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 7, VREG(vf32, 6), vsplat_s(VREG(vf32, 0), 0, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 19, VREG(vf32, 6), vsplat_s(VREG(vf32, 0), 1, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 6, VREG(vf32, 6), vsplat_s(VREG(vf32, 1), 0, 1), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 20, VREG(vf32, 7), VREG(vf32, 16), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 21, VREG(vf32, 19), VREG(vf32, 17), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 22, VREG(vf32, 6), VREG(vf32, 18), (vf32){});
    { uint64_t ea = c->x[12]; sl_stm(c, 1, 2, 3, 1, 20, ea); c->x[12] = ea + 48; }
    if (COND_NE(c)) goto L_7005305210;
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    if (COND_EQ(c)) goto L_7005305298;
L_7005305254:;
    c->x[10] = (uint32_t)(0xcull);
    c->x[10] = (uint64_t)(c->x[0] + c->x[9] * c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] + 0x1cull);
L_7005305260:;
    FP_SETS(3, fromint_s(c, (uint32_t)c->x[9], 32, 1, 0));
    { uint64_t ea = c->x[10] - 8; c->v[5] = LD64(ea); }
    { uint64_t ea = c->x[10] + 0x0ull; c->v[6] = LD32(ea); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    fp_op_s(c, FOP_DIV, 3, 3, 2);
    fp_op_s(c, FOP_MUL, 3, 3, 3);
    SV_FOP_S(FOP_MUL, 0, 4, VQ(vf32, 0, 0), vsplat_s(VREG(vf32, 3), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 3, 1, 3);
    SV_FOP_S(FOP_ADD, 0, 4, VQ(vf32, 0, 4), VQ(vf32, 0, 5), (vf32){});
    fp_op_s(c, FOP_ADD, 3, 3, 6);
    { uint64_t ea = c->x[10] - 8; ST64(ea, VS64(4)); }
    { uint64_t ea = c->x[10]; ST32(ea, VS32(3)); c->x[10] = c->x[10] + 12; }
    if (COND_NE(c)) goto L_7005305260;
L_7005305298:;
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    goto L_70053051d8;
}

void f_7005305bc0(Cpu *c) {
    { uint64_t ea = c->x[1] + c->x[0]; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005305bc8(Cpu *c) {
    c->x[8] = (uint64_t)(c->x[1] + c->x[0]);
    { uint64_t ea = c->x[8] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[2] = LD32(ea); }
    c->pc = 0; return;
}

void f_7005305bd8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xc0ull);
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 64; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 80; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x60ull);
    c->x[9] = (uint64_t)(c->x[2] + 0x1d000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[9] + 0x690ull);
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[23] + 0x4ull);
    c->x[22] = (uint64_t)(lda32(c->x[9]));
    c->x[8] = (uint32_t)((uint32_t)c->x[22] - 0x3ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CS(c)) goto L_7005305c5c;
L_7005305c2c:;
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 64; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    c->sp = (uint64_t)(c->sp + 0xc0ull);
    c->pc = c->x[3]; rt_dispatch(c); c->pc = 0; return;
L_7005305c5c:;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005305c2c;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005305c2c;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x3970ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3690000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005305c2c;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005305c2c;
    c->x[8] = (uint64_t)(c->x[2] + 0x1e000ull);
    c->x[24] = (uint64_t)(c->x[8] + 0xc70ull);
    c->x[8] = (uint32_t)(0x1ull);
L_7005305cb0:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[23]));
    if ((uint32_t)c->x[9] != 0) goto L_7005305d4c;
    { uint32_t st = stx32(c, c->x[23], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005305cb0;
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ffull));
    if (COND_HI(c)) goto L_7005305e20;
    c->x[8] = (uint64_t)(c->x[2] + 0xcull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[23] + 0x14ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[9]);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 5) & 0x7ffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], 0xe0ull));
    if (COND_HI(c)) goto L_7005305e20;
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint32_t)(0x228ull);
    c->x[25] = (uint64_t)(0ull | c->x[2]);
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[3]); }
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[30] = 0x7005305d08ull; f_7005305bc0(c);
    { uint64_t ea = c->x[23] + 0x38ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005305e20;
    { uint64_t ea = c->x[23] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | c->x[21]);
    c->x[10] = (uint64_t)(0ull | c->x[25]);
    if (c->x[8] == 0) goto L_7005305d6c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[0])));
    if (COND_NE(c)) goto L_7005305e20;
    c->x[8] = (uint64_t)(c->x[20] - 0x10000ull);
    c->x[11] = (uint64_t)(0ull | 0x7fffff0000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[11])));
    if (COND_CC(c)) goto L_7005305d80;
    goto L_7005305e20;
L_7005305d4c:;
    c->x[8] = (uint64_t)(c->x[2] + 0x1d000ull);
    c->excl_addr = ~0ull;
    c->x[8] = (uint64_t)(c->x[8] + 0x6a0ull);
L_7005305d58:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005305d58;
    goto L_7005305c2c;
L_7005305d6c:;
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[20] - 0x10000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_7005305e20;
L_7005305d80:;
    c->x[8] = (uint64_t)(logic64(c, c->x[20] & 0x3ull));
    if (COND_NE(c)) goto L_7005305e1c;
    (void)(subs32(c, (uint32_t)c->x[22], 0x1ull));
    if (COND_NE(c)) goto L_7005305e1c;
    c->x[8] = (uint64_t)(c->x[10] + 0x1d000ull);
    c->x[9] = (uint64_t)(c->x[10] + 0x1d000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x1e000ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x6d0ull);
    c->x[2] = (uint64_t)(c->x[9] + 0xdb0ull);
    c->x[3] = (uint64_t)(c->x[10] + 0x810ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005305db0ull; f_70053061ac(c);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005305e20;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x28ull; ST64(ea, c->x[0]); }
    c->x[9] = (uint64_t)(c->x[8] + 0x98b000ull);
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->pc = c->x[9]; c->x[30] = 0x7005305ddcull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[11] = (uint64_t)(c->x[8] - 0x10000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[10])));
    { uint64_t ea = c->x[23] + 0x30ull; ST64(ea, c->x[8]); }
    if (COND_HI(c)) goto L_7005305e20;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005305e20;
    c->x[8] = (uint64_t)(c->x[23] + 0x4ull);
    c->x[10] = (uint32_t)(0x2ull);
    c->x[9] = (uint64_t)(0ull | c->x[21]);
    stl32(c->x[8], c->x[10]);
    goto L_7005305e64;
L_7005305e1c:;
    if (c->x[8] == 0) goto L_7005305e64;
L_7005305e20:;
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->pc = c->x[3]; c->x[30] = 0x7005305e28ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x5ull);
L_7005305e2c:;
    c->x[9] = (uint64_t)(c->x[23] + 0x4ull);
    stl32(c->x[9], c->x[8]);
L_7005305e34:;
    stl32(c->x[23], 0ull);
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 64; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    c->sp = (uint64_t)(c->sp + 0xc0ull);
    c->pc = 0; return;
L_7005305e64:;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xda70ull);
    c->x[26] = (uint32_t)(0xda70ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x3950000ull);
    c->x[26] = (uint32_t)((c->x[26] & 0xffffffff0000ffffull) | 0x3950000ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005305e80ull; f_7005305bc0(c);
    c->x[27] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint64_t)((c->x[27] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    if (COND_HI(c)) goto L_7005305eac;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005305eac;
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005305ea8ull; f_7005305bc0(c);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
L_7005305eac:;
    c->x[1] = (uint64_t)(c->x[26] + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005305eb8ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(c->x[0] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    c->x[8] = (uint64_t)(0ull | 0ull);
    if (COND_HI(c)) goto L_7005305f04;
    c->x[9] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[9] != 0) goto L_7005305f04;
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005305ed8ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint64_t)(0ull | 0ull);
    if (COND_HI(c)) goto L_7005305f04;
    c->x[9] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[9] != 0) goto L_7005305f04;
    c->x[1] = (uint32_t)(0xc8ull);
    c->x[30] = 0x7005305f00ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
L_7005305f04:;
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[21] - 0x10000ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_7005305e20;
    c->x[10] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[10] != 0) goto L_7005305e20;
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[8] - 0x10000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_7005305e20;
    c->x[10] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[10] != 0) goto L_7005305e20;
    c->x[9] = (uint64_t)(c->x[25] + 0xcull);
    c->x[1] = (uint32_t)(0x2b4ull);
    c->x[10] = (uint64_t)(lda32(c->x[9]));
    { uint64_t ea = c->x[0] + 0x170ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x1f1ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD32(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 28; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[0] + 0x108ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x1f0ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x24ull; uint64_t v = LD32(ea); c->x[28] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x24ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 20; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[9] + 0x280ull; uint64_t v = LD32(ea); c->x[22] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[9]);
    c->x[30] = 0x7005305f8cull; f_7005305bc8(c);
    c->x[8] = (uint32_t)((uint32_t)c->x[26] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[26], 0x0ull));
    c->x[9] = (uint32_t)(0x7eull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x800000ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[26] - 0x1ull);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 24) & 0xffull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    if (COND_GE(c)) (void)subs32(c, (uint32_t)c->x[8], (uint32_t)c->x[9]); else c->nzcv = 0x20000000ull;
    c->x[8] = (uint32_t)(0u | 0x7ffffeull);
    if (COND_HI(c)) (void)subs32(c, (uint32_t)c->x[10], (uint32_t)c->x[8]); else c->nzcv = 0x0ull;
    if (COND_HI(c)) goto L_7005305e20;
    c->v[3] = 0x40000000ull;
    c->v[4] = (uint32_t)c->x[26];
    c->nzcv = cmp_s(c, VSF32(4), VSF32(3));
    if (COND_HI(c)) goto L_7005305e20;
    c->x[8] = (uint32_t)(VS32(1));
    c->x[9] = (uint32_t)(VS32(0));
    c->x[10] = (uint32_t)(0x7f800000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005305e20;
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005305e20;
    c->x[8] = (uint32_t)(VS32(2));
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 12; ST32(ea, (uint32_t)c->x[28]); ST32(ea + 4, (uint32_t)c->x[22]); }
    { uint64_t ea = c->sp + 4; ST32(ea, (uint32_t)c->x[27]); ST32(ea + 4, (uint32_t)c->x[21]); }
    c->v[9] = VS32(1);
    c->v[11] = VS32(0);
    { uint64_t ea = c->sp + 0x0ull; ST32(ea, (uint32_t)c->x[26]); }
    c->v[8] = VS32(2);
    c->x[21] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->pc = c->x[3]; c->x[30] = 0x7005306020ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x7f7fffffull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[21], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_700530617c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x700530603cull; f_7005305bc0(c);
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700530617c;
    c->x[1] = (uint32_t)(0x228ull);
    c->x[30] = 0x7005306050ull; f_7005305bc0(c);
    { uint64_t ea = c->x[23] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700530617c;
    { uint64_t ea = c->sp + 20; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[28] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x114ull);
    c->x[22] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 16));
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700530607cull; f_7005305bc8(c);
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x1f0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x60ull);
    c->v[13] = VS32(0);
    c->v[12] = VS32(1);
    c->v[10] = VS32(2);
    c->x[9] = (uint32_t)((uint32_t)c->x[22] | ((uint32_t)c->x[26] << 8));
    { uint64_t ea = c->x[23] + 0x30ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[27] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[8] << 24));
    c->x[30] = 0x70053060a8ull; f_7005305bc0(c);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0xf8ull);
    c->x[30] = 0x70053060b8ull; f_7005305bc8(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[21] - 0x10000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_70053060e8;
    c->x[8] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[8] != 0) goto L_70053060e8;
    { uint64_t ea = c->x[21] + 0xd4ull; uint64_t v = (uint64_t)(int64_t)(int8_t)LD8(ea); c->x[8] = (uint32_t)(v); }
    if (((c->x[8] >> 31) & 1) == 0) goto L_70053060e8;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x44ull);
    c->x[30] = 0x70053060e8ull; f_7005305bc8(c);
L_70053060e8:;
    c->x[9] = (uint64_t)(0ull | c->x[23]);
    c->x[8] = (uint32_t)(0x58ull);
    { uint64_t ea = c->x[9] + 8; uint64_t v = LD32(ea); c->x[9] = ea; c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[25] + (uint64_t)(uint32_t)c->x[10] * (uint64_t)(uint32_t)c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x1e000ull);
    c->x[11] = (uint64_t)(c->x[8] + 0xc80ull);
    { uint64_t ea = c->sp + 28; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[12] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[11] + 8; ST32(ea, (uint32_t)c->x[28]); ST32(ea + 4, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[11] + 44; ST32(ea, VS32(11)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->x[11] + 0; ST32(ea, (uint32_t)c->x[12]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 52; ST32(ea, VS32(8)); ST32(ea + 4, VS32(13)); }
    { uint64_t ea = c->x[11] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 60; ST32(ea, VS32(12)); ST32(ea + 4, VS32(10)); }
    { uint64_t ea = c->x[11] + 0x14ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 68; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[11] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x4cull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[11] + 0x1cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x50ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->x[11] + 0x20ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x10ull; ST32(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x24ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x28ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    stl32(c->x[9], c->x[8]);
    if (((c->x[26] >> 0) & 1) != 0) goto L_7005306188;
    (void)(subs32(c, (uint32_t)c->x[8], 0x400ull));
    if (COND_NE(c)) goto L_70053061a4;
    c->x[8] = (uint32_t)(0x4ull);
    goto L_7005306180;
L_700530617c:;
    c->x[8] = (uint32_t)(0x5ull);
L_7005306180:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    goto L_7005305e2c;
L_7005306188:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x120ull);
    c->x[30] = 0x7005306194ull; f_7005305bc8(c);
    { uint64_t ea = c->x[24] + 0; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    c->x[8] = (uint32_t)(0x3ull);
    { uint64_t ea = c->x[24] + 0x8ull; ST32(ea, VS32(2)); }
    goto L_7005306180;
L_70053061a4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    goto L_7005305e34;
}

void f_7005308448(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x150ull);
    { uint64_t ea = c->sp + 176; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); }
    { uint64_t ea = c->sp + 192; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 208; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 224; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 240; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0xf0ull);
    { uint64_t ea = c->x[1] + 0x2204ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] != 0) goto L_70053084ac;
    c->x[8] = (uint32_t)(0x5594ull);
    c->x[0] = (uint64_t)(c->x[21] - 0x10000ull);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    c->pc = c->x[8]; c->x[30] = 0x70053084a0ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005308850;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[21] + 0x2204ull; ST32(ea, (uint32_t)c->x[8]); }
L_70053084ac:;
    { uint64_t ea = c->x[20] + 0x50ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[20] + 136; c->v[0] = LD128(ea); }
    c->x[10] = (uint64_t)(c->x[20] + 0x58ull);
    { uint64_t ea = c->x[20] + 68; c->v[1] = LD128(ea); }
    c->x[8] = (uint64_t)(c->x[20] + 0x90ull);
    c->x[9] = (uint64_t)(c->x[20] + 0x54ull);
    { uint64_t ea = c->x[10]; sl_lds(c, 2, 1, 1, 2, ea); }
    { uint64_t ea = c->x[8]; sl_lds(c, 2, 1, 2, 0, ea); }
    { uint64_t ea = c->x[20] + 92; c->v[3] = LD128(ea); }
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 2, 1, ea); }
    c->x[8] = (uint64_t)(c->x[20] + 0x40ull);
    c->x[9] = (uint64_t)(c->x[20] + 0x64ull);
    { uint64_t ea = c->x[20] + 0x68ull; c->v[4] = LD32(ea); }
    c->x[11] = (uint32_t)(0x30e0ull);
    c->x[10] = (uint32_t)(0x2220ull);
    ((sa64 *)&c->v[2])[1] = ((sa64 *)&c->v[3])[0];
    { uint64_t ea = c->x[8]; sl_lds(c, 2, 1, 3, 0, ea); }
    c->x[8] = (uint32_t)(0x2c80ull);
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 3, 1, ea); }
    c->x[9] = (uint32_t)(0x5590ull);
    c->x[0] = (uint64_t)(c->x[21] + c->x[11]);
    c->x[9] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[2] = (uint64_t)(c->x[21] + c->x[10]);
    c->x[3] = (uint64_t)(c->sp + 0x70ull);
    { uint64_t ea = c->sp + 0xa0ull; ST32(ea, VS32(4)); }
    { uint64_t ea = c->x[21] + 0x2c90ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 0x90ull; ST128(ea, c->v[2]); }
    c->pc = c->x[9]; c->x[30] = 0x7005308524ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005308850;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005308538ull; f_70053040b4(c);
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD64(ea); }
    c->x[24] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[20] + 52; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x3cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 20; ST64(ea, c->x[8]); c->x[24] = ea; }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[24] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[9] = b; }
    { uint64_t ea = c->x[20] + 0x48ull; c->v[11] = LD32(ea); }
    { uint64_t ea = c->x[24] - 12; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_MUL, 0, 9, 9);
    fp_fma_s(c, 0, 0, 0, 10, 10, 0);
    fp_fma_s(c, 0, 0, 0, 11, 11, 0);
    c->x[30] = 0x7005308574ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->v[2] = 0x0ull;
    c->v[12] = 0x0ull;
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[14] = 0x0ull;
    c->v[8] = 0x0ull;
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_70053085ac;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    fp_op_s(c, FOP_MUL, 12, 10, 0);
    fp_op_s(c, FOP_MUL, 14, 9, 0);
    fp_op_s(c, FOP_MUL, 8, 11, 0);
L_70053085ac:;
    c->v[0] = 0x0ull;
    c->x[8] = (uint32_t)(0x3e58ull);
    c->x[25] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[26] = (uint32_t)(0x7f800000ull);
    c->x[27] = (uint32_t)(0x7f7fffffull);
    c->x[28] = (uint32_t)(0xcull);
    c->x[23] = (uint32_t)(0x43700000ull);
    { uint64_t ea = c->x[19] + 0x638ull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->x[19] + 0x63cull; ST32(ea, VS32(14)); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->v[0] = 0x3fc00000ull;
    { uint64_t ea = c->x[19] + 0x640ull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(0)); }
L_70053085ec:;
    c->x[8] = (uint64_t)(c->x[21] + 0x8ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005308850;
    { uint64_t ea = c->x[20] + 0x68ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0x30e0ull);
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(c->x[21] + c->x[8]);
    c->v[13] = VS32(2);
    c->pc = c->x[22]; c->x[30] = 0x7005308618ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005308850;
    { uint64_t ea = c->sp + 36; u128 a = LD32(ea), b = LD32(ea + 4); c->v[9] = a; c->v[10] = b; }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x20ull; c->v[11] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(9));
    c->x[9] = (uint32_t)(VS32(10));
    c->x[10] = (uint32_t)(VS32(11));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[27])));
    if (COND_GT(c)) goto L_7005308854;
    if ((uint32_t)c->x[9] == 0) goto L_7005308854;
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(8)); }
    if ((uint32_t)c->x[8] == 0) goto L_7005308854;
    c->v[8] = VS32(14);
    c->v[2] = VS32(13);
    { uint64_t ea = c->sp + 0x38ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 60; u128 a = LD32(ea), b = LD32(ea + 4); c->v[14] = a; c->v[13] = b; }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)(VS32(15));
    c->x[8] = (uint32_t)(VS32(14));
    c->x[9] = (uint32_t)(VS32(13));
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[27])));
    if (COND_GT(c)) goto L_7005308854;
    if ((uint32_t)c->x[9] == 0) goto L_7005308854;
    if ((uint32_t)c->x[8] == 0) goto L_7005308854;
    { uint64_t ea = c->x[20] + 0x68ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_ADD, 2, 2, 0);
    if ((uint32_t)c->x[8] != 0) goto L_7005308728;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(2)); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    c->x[8] = (uint64_t)(c->x[24] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[28]);
    { uint64_t ea = c->x[8] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 10, 2);
    fp_op_s(c, FOP_SUB, 0, 9, 0);
    fp_op_s(c, FOP_SUB, 1, 11, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x70053086f4ull; f_700530a428(c);
    fp_op_s(c, FOP_MUL, 1, 8, 14);
    { uint64_t ea = c->sp + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    c->x[8] = (uint32_t)(0xf2e5ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f7f0000ull);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[0] = (uint32_t)c->x[8];
    { uint64_t ea = c->sp + 0x8ull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 15, 12, 1);
    fp_fma_s(c, 0, 0, 1, 13, 3, 1);
    c->nzcv = COND_LT(c) ? cmp_s(c, VSF32(1), VSF32(0)) : 0x80000000ull;
    c->v[0] = (uint32_t)c->x[23];
    c->nzcv = COND_PL(c) ? cmp_s(c, VSF32(2), VSF32(0)) : 0x0ull;
    if (COND_LT(c)) goto L_70053087b8;
L_7005308728:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[24] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[28]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0; ST32(ea, VS32(11)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, VS32(10)); }
    if ((uint32_t)c->x[10] != 0) goto L_70053087cc;
    (void)(subs32(c, (uint32_t)c->x[8], 0x81ull));
    if (COND_NE(c)) goto L_7005308794;
    c->x[8] = (uint32_t)(0x2cull);
    c->x[9] = (uint32_t)(0x20ull);
L_7005308758:;
    c->x[10] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[12] = (uint64_t)(c->x[19] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0xcull);
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], 0x320ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x18ull);
    { uint64_t ea = c->x[12] + 0x8ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    if (COND_NE(c)) goto L_7005308758;
    { uint64_t ea = c->sp + 0xcull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0x41ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_ADD, 0, 0, 0);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(0)); }
L_7005308794:;
    c->v[12] = VS32(15);
    c->v[8] = VS32(13);
    (void)(subs32(c, (uint32_t)c->x[25], 0x3feull));
    if (COND_HI(c)) goto L_70053088e0;
L_70053087a4:;
    c->v[0] = (uint32_t)c->x[23];
    c->x[25] = (uint32_t)((uint32_t)c->x[25] + 0x1ull);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(0));
    if (COND_MI(c)) goto L_70053085ec;
    goto L_70053088e0;
L_70053087b8:;
    c->v[14] = VS32(8);
    { uint64_t ea = c->sp + 0x10ull; c->v[8] = LD32(ea); }
    (void)(subs32(c, (uint32_t)c->x[25], 0x3feull));
    if (COND_LS(c)) goto L_70053087a4;
    goto L_70053088e0;
L_70053087cc:;
    { uint64_t ea = c->sp + 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x5cull; c->v[2] = LD32(ea); }
    c->x[11] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[19] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x630ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint32_t)(VS32(1));
    c->x[10] = (uint32_t)(VS32(2));
    c->x[8] = (uint32_t)(VS32(0));
    { uint64_t ea = c->x[19] + 0x620ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[19] + 0x624ull; ST32(ea, VS32(1)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    { uint64_t ea = c->x[19] + 0x628ull; ST32(ea, VS32(2)); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005308854;
    if ((uint32_t)c->x[8] == 0) goto L_7005308854;
    if ((uint32_t)c->x[9] == 0) goto L_7005308854;
    fp_op_s(c, FOP_MUL, 1, 1, 1);
    fp_fma_s(c, 0, 0, 0, 0, 0, 1);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005308844ull; f_700530a428(c);
    c->v[1] = 0x3f000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_7005308884;
L_7005308850:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005308854:;
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 240; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 208; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 192; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 176; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; }
    c->sp = (uint64_t)(c->sp + 0x150ull);
    c->pc = 0; return;
L_7005308884:;
    { uint64_t ea = c->x[19] + 0x620ull; c->v[1] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x628ull; c->v[8] = LD32(ea); }
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 1), VQ(vf32, 0, 1), (vf32){});
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[1]); }
    c->v[0] = ((sa32 *)&c->v[0])[1];
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 8, 8, 0);
    c->x[30] = 0x70053088a4ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_70053088d0;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 1, 1, 0);
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 0), vsplat_s(VREG(vf32, 1), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 1, 8, 1);
    goto L_70053088d8;
L_70053088d0:;
    c->v[0] = 0x0ull;
    c->v[1] = 0x0ull;
L_70053088d8:;
    { uint64_t ea = c->x[19] + 0x620ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[19] + 0x628ull; ST32(ea, VS32(1)); }
L_70053088e0:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x10ull; ST32(ea, (uint32_t)c->x[9]); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[0] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005308854;
}

void f_70053088f8(Cpu *c) {
    { uint64_t ea = c->sp - 160; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x2000ull);
    c->sp = (uint64_t)(c->sp - 0x1c0ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    c->pc = c->x[3]; c->x[30] = 0x7005308948ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[22] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700530897c;
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700530897c;
    { uint64_t ea = c->x[22] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053089b0;
L_700530897c:;
    c->sp = (uint64_t)(c->sp + 0x2000ull);
    c->sp = (uint64_t)(c->sp + 0x1c0ull);
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; c->sp = ea + 160; }
    c->pc = 0; return;
L_70053089b0:;
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic64(c, c->x[8] & 0x7ull));
    if (COND_NE(c)) goto L_700530897c;
    { uint64_t ea = c->x[22] + 0x12ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x13ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x14ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(ROR64(c->x[9], 48) & 0xffffffffffff0000ull);
    c->x[9] = (uint64_t)(c->x[9] | (c->x[10] << 24));
    c->x[9] = (uint64_t)(c->x[9] | (c->x[11] << 32));
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[10] = (uint64_t)(c->x[9] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_700530897c;
    { uint64_t ea = c->x[22] + 0x11ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] | (c->x[10] << 8));
    c->x[21] = (uint64_t)(c->x[8] | c->x[9]);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700530897c;
    c->x[8] = (uint64_t)(c->x[19] + 0xcull);
L_7005308a00:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[23] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[23]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005308a00;
    c->x[8] = (uint64_t)(c->x[19] + 0x4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    if ((uint32_t)c->x[8] == 0) goto L_700530897c;
    c->x[24] = (uint64_t)(c->x[19] + 0x10ull);
    c->x[8] = (uint32_t)(0x1ull);
L_7005308a24:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[24]));
    if ((uint32_t)c->x[9] != 0) goto L_7005308d88;
    { uint32_t st = stx32(c, c->x[24], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005308a24;
    c->x[26] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(c->sp + 0x250ull);
    c->x[1] = (uint64_t)(c->x[19] + 0xf8ull);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[28] = (uint64_t)(c->sp + 0x250ull);
    c->x[30] = 0x7005308a4cull; f_7005304000(c);
    { uint64_t ea = c->x[19] + 0x21fcull; uint64_t v = LD32(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 156; u128 a = LD32(ea), b = LD32(ea + 4); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->x[19] + 164; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[25], 0x1ull));
    { uint64_t ea = c->x[19] + 148; c->v[13] = LD64(ea); }
    if (COND_LS(c)) goto L_7005308ad8;
    c->x[0] = (uint64_t)(c->x[28] + 0x648ull);
    c->x[1] = (uint64_t)(c->x[19] + 0x770ull);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005308a78ull; f_7005304000(c);
    (void)(subs32(c, (uint32_t)c->x[25], 0x2ull));
    if (COND_EQ(c)) goto L_7005308ad8;
    c->x[28] = (uint64_t)(c->sp + 0x250ull);
    c->x[1] = (uint64_t)(c->x[19] + 0xdb8ull);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[0] = (uint64_t)(c->x[28] + 0xc90ull);
    c->x[30] = 0x7005308a94ull; f_7005304000(c);
    (void)(subs32(c, (uint32_t)c->x[25], 0x3ull));
    if (COND_EQ(c)) goto L_7005308ad8;
    c->x[8] = (uint32_t)(0x1400ull);
    c->x[9] = (uint32_t)(0x12d8ull);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[0] = (uint64_t)(c->x[28] + c->x[9]);
    c->x[1] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[30] = 0x7005308ab4ull; f_7005304000(c);
    (void)(subs32(c, (uint32_t)c->x[25], 0x4ull));
    if (COND_EQ(c)) goto L_7005308ad8;
    c->x[8] = (uint32_t)(0x1a48ull);
    c->x[9] = (uint32_t)(0x1920ull);
    c->x[10] = (uint64_t)(c->sp + 0x250ull);
    c->x[0] = (uint64_t)(c->x[10] + c->x[9]);
    c->x[1] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005308ad8ull; f_7005304000(c);
L_7005308ad8:;
    c->x[8] = (uint32_t)((uint32_t)c->x[25] - 0x6ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    stl32(c->x[24], 0ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_CC(c)) goto L_700530897c;
    { uint64_t ea = c->sp + 0x260ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700530897c;
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    { uint64_t ea = c->sp + 0x250ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700530897c;
    { uint64_t ea = c->sp + 0x254ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[23] - (uint32_t)c->x[8]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_HI(c)) goto L_700530897c;
    { uint64_t ea = c->sp + 0x258ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x2ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x7full));
    if (COND_HI(c)) goto L_700530897c;
    { uint64_t ea = c->sp + 0x250ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[27], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700530897c;
    fp_op_s(c, FOP_MUL, 0, 10, 10);
    fp_fma_s(c, 0, 0, 0, 8, 8, 0);
    fp_fma_s(c, 0, 0, 0, 11, 11, 0);
    c->x[30] = 0x7005308b44ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->v[1] = 0x0ull;
    c->v[3] = 0x0ull;
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[2] = 0x0ull;
    if (COND_LE(c)) goto L_7005308b78;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 3, 10, 0);
    fp_op_s(c, FOP_MUL, 2, 11, 0);
L_7005308b78:;
    { uint64_t ea = c->sp + 0x88cull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0xbe77ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f7f0000ull);
    fp_op_s(c, FOP_MUL, 0, 3, 0);
    { uint64_t ea = c->sp + 0x888ull; c->v[3] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 1, 3, 0);
    { uint64_t ea = c->sp + 0x890ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 2, 1, 0);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_MI(c)) goto L_700530897c;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005308bb4ull; f_7005305bc0(c);
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x7005308bc4ull; f_7005305bc0(c);
    c->x[24] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x538ull);
    c->x[30] = 0x7005308bd4ull; f_7005305bc0(c);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x540ull);
    c->x[30] = 0x7005308be4ull; f_7005305bc0(c);
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[23] - 0x10000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    c->x[9] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    if (COND_HI(c)) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[23] & 0x7ull);
    if (c->x[10] != 0) goto L_700530897c;
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[24] - 0x10000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[24] & 0x7ull);
    if (c->x[10] != 0) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[22] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[10] != 0) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[9] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[10] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[10] != 0) goto L_700530897c;
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[1] = (uint32_t)(0xb8ull);
    c->x[27] = (uint64_t)(0ull | c->x[9]);
    { uint64_t ea = c->sp + 0xe8ull; ST64(ea, c->x[23]); }
    c->x[30] = 0x7005308c60ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[10] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700530897c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x8de8ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x3960000ull);
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x7005308c98ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[10] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700530897c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005308cc8ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[10] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700530897c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700530897c;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x3full));
    if (COND_CC(c)) goto L_700530897c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint32_t)(0x10ull);
    c->x[30] = 0x7005308d04ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005308d90;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005308d90;
    c->x[1] = (uint32_t)(0x1f0ull);
    c->x[30] = 0x7005308d28ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005308d90;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005308d90;
    c->x[10] = (uint64_t)(c->x[24] + 0x108ull);
    c->x[8] = (uint64_t)(c->x[24] + 0x1a8ull);
    c->x[9] = (uint64_t)(c->sp + 0x1e0ull);
    { uint64_t ea = c->x[10] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[10] + 0x20ull; c->v[2] = LD128(ea); }
    c->x[10] = (uint64_t)(c->x[9] - c->x[8]);
    (void)(subs64(c, c->x[10], 0x1full));
    { uint64_t ea = c->sp + 0x240ull; ST128(ea, c->v[2]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    if (COND_HI(c)) goto L_7005308da4;
    c->x[10] = (uint64_t)(0ull | 0ull);
L_7005308d70:;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[10]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[10], 0x40ull));
    if (COND_NE(c)) goto L_7005308d70;
    goto L_7005308db4;
L_7005308d88:;
    c->excl_addr = ~0ull;
    goto L_700530897c;
L_7005308d90:;
    c->x[8] = (uint64_t)(c->x[19] + 0x18ull);
    c->x[9] = (uint32_t)(0xcull);
    stl32(c->x[8], c->x[9]);
L_7005308d9c:;
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    goto L_700530897c;
L_7005308da4:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[2] = b; }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[2]); }
L_7005308db4:;
    { uint64_t ea = c->sp + 0x220ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x224ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x228ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x22cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x230ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x234ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x238ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x23cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x240ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x244ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x248ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x24cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1e4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1e8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1ecull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1f0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1f4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1f8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x1fcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x200ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x204ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x208ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x20cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x210ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x214ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x218ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->sp + 0x21cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->x[27] + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[27] + 0x8ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 8, 0, 1);
    c->x[8] = (uint32_t)(VS32(8));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f7fffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005308d9c;
    { uint64_t ea = c->x[27] + 0x14ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[27] + 0xcull; c->v[1] = LD32(ea); }
    c->x[10] = (uint32_t)(0x46800000ull);
    fp_op_s(c, FOP_SUB, 10, 0, 1);
    c->v[0] = (uint32_t)c->x[10];
    c->x[9] = (uint32_t)(VS32(10));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    c->x[8] = (uint32_t)((COND_LE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(10), VSF32(0));
    if (COND_GT(c)) goto L_7005308d9c;
    c->x[9] = (uint32_t)(0x46800000ull);
    c->v[0] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(8), VSF32(0));
    if (COND_GT(c)) goto L_7005308d9c;
    c->x[9] = (uint32_t)(0x42800000ull);
    c->v[0] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(10), VSF32(0));
    if (COND_MI(c)) goto L_7005308d9c;
    c->v[0] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(8), VSF32(0));
    if (COND_MI(c)) goto L_7005308d9c;
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005308d9c;
    c->x[8] = (uint32_t)(0x44870000ull);
    { uint64_t ea = c->x[22] + 0x14ull; c->v[1] = LD32(ea); }
    c->x[9] = (uint32_t)(0x7f7fffffull);
    c->v[0] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_DIV, 11, 10, 0);
    { uint64_t ea = c->x[22] + 0x1cull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 1);
    c->x[8] = (uint32_t)(VS32(0));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_GT(c)) goto L_7005309098;
    { uint64_t ea = c->x[22] + 0xcull; c->v[1] = LD32(ea); }
    c->x[10] = (uint32_t)(0x42800000ull);
    c->x[9] = (uint32_t)(0x7f800000ull);
    c->v[2] = (uint32_t)c->x[10];
    c->x[8] = (uint32_t)(VS32(1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    if (COND_LT(c)) goto L_7005309098;
    c->x[9] = (uint32_t)(0x42800000ull);
    c->v[2] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    if (COND_LT(c)) goto L_7005309098;
    if ((uint32_t)c->x[8] == 0) goto L_7005309098;
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    fp_op_s(c, FOP_MUL, 11, 11, 0);
L_7005309098:;
    c->v[0] = 0x0ull;
    c->x[8] = (uint32_t)(0x155cull);
    c->x[9] = (uint32_t)(0xad40ull);
    c->x[8] = (uint64_t)(c->x[23] + c->x[8]);
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    c->x[24] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->pc = c->x[8]; c->x[30] = 0x70053090c8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    { uint64_t ea = c->sp + 0x160ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->sp + 0x48ull; ST64(ea, c->x[24]); }
    c->pc = c->x[24]; c->x[30] = 0x70053090e4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + 0x93000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x70cull);
    c->pc = c->x[8]; c->x[30] = 0x70053090fcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint32_t)(0xd644ull);
    c->x[1] = (uint64_t)(c->sp + 0x220ull);
    c->x[24] = (uint32_t)((c->x[24] & 0xffffffff0000ffffull) | 0x2800000ull);
    c->x[2] = (uint64_t)(c->sp + 0x1e0ull);
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[24]);
    c->x[8] = (uint64_t)(c->x[8] + 0xe0ull);
    c->pc = c->x[8]; c->x[30] = 0x7005309120ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[25] == 0) goto L_700530995c;
    c->v[1] = 0x41000000ull;
    c->v[0] = 0x3f000000ull;
    c->x[8] = (uint64_t)(c->x[8] + c->x[24]);
    fp_op_s(c, FOP_DIV, 5, 8, 10);
    { uint64_t ea = c->sp + 0x98ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x999aull);
    c->x[9] = (uint32_t)(0x999aull);
    c->x[12] = (uint64_t)(0x700530a000ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x40190000ull);
    c->nzcv = cmp_s(c, VSF32(11), VSF32(1));
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3f990000ull);
    { uint64_t ea = c->x[12] + 0x890ull; c->v[7] = LD64(ea); }
    c->x[13] = (uint64_t)(0x700530a000ull);
    c->v[3] = (uint32_t)c->x[9];
    c->x[11] = (uint32_t)(0x6666ull);
    { uint64_t ea = c->sp + 0x68ull; ST64(ea, VS64(7)); }
    { uint64_t ea = c->x[13] + 0x898ull; c->v[7] = LD64(ea); }
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x40260000ull);
    c->v[1] = COND_GT(c) ? VS32(1) : VS32(11);
    c->nzcv = cmp_s(c, VSF32(11), VSF32(0));
    c->v[2] = 0x3fa00000ull;
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, VS64(7)); }
    c->v[4] = (uint32_t)c->x[11];
    c->x[10] = (uint32_t)(0x44070000ull);
    c->v[6] = (uint32_t)c->x[10];
    c->v[14] = 0x3f800000ull;
    c->x[14] = (uint64_t)(c->sp + 0x250ull);
    c->v[0] = COND_MI(c) ? VS32(0) : VS32(1);
    c->v[1] = (uint32_t)c->x[8];
    c->x[8] = (uint64_t)(0x700530a000ull);
    c->x[23] = (uint64_t)(c->x[19] + 0x40ull);
    c->x[28] = (uint64_t)(c->x[14] + 0x14ull);
    c->x[27] = (uint64_t)(c->x[14] + 0x1cull);
    { uint64_t ea = c->sp + 0xb8ull; ST64(ea, 0ull); }
    fp_op_s(c, FOP_MUL, 7, 0, 1);
    fp_op_s(c, FOP_MUL, 1, 0, 3);
    { uint64_t ea = c->sp + 0x5cull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->sp + 84; ST32(ea, VS32(1)); ST32(ea + 4, VS32(7)); }
    fp_op_s(c, FOP_MUL, 1, 0, 4);
    fp_op_s(c, FOP_MUL, 0, 0, 2);
    { uint64_t ea = c->sp + 116; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_MUL, 0, 5, 6);
    { uint64_t ea = c->sp + 56; ST32(ea, VS32(0)); ST32(ea + 4, VS32(6)); }
    c->v[0] = 0x40b0000040b00000ull;
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x8a0ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, VS64(0)); }
    goto L_7005309268;
L_70053091e8:;
    { uint64_t ea = c->sp + 0x80ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x7cull; c->v[1] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    { uint64_t ea = c->sp + 0x100ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x14ull; c->v[0] = LD32(ea); }
    c->x[3] = (uint64_t)(c->sp + 0x110ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->sp + 0x104ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0xa0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0xc0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 240; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0xf8ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x74ull; c->v[0] = LD32(ea); }
    c->pc = c->x[8]; c->x[30] = 0x7005309234ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->sp + 0x160ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700530924cull; rt_dispatch(c); c->pc = 0;
L_700530924c:;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[28] = (uint64_t)(c->x[28] + 0x648ull);
    c->x[27] = (uint64_t)(c->x[27] + 0x648ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[25])));
    { uint64_t ea = c->sp + 0xb8ull; ST64(ea, c->x[8]); }
    if (COND_EQ(c)) goto L_7005309958;
L_7005309268:;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x648ull);
    c->x[9] = (uint64_t)(c->sp + 0x250ull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8] * c->x[10]);
    { uint64_t ea = c->sp + 0xa0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700530924c;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[24] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[24] - 0x82ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x80ull));
    if (COND_CC(c)) goto L_700530924c;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 20; c->v[0] = LD64(ea); c->x[8] = ea; }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x80ull; ST64(ea, c->x[8]); }
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 13), VQ(vf32, 0, 0), (vf32){});
    fp_op_s(c, FOP_SUB, 1, 9, 1);
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 2), VQ(vf32, 0, 2), (vf32){});
    { uint64_t ea = c->sp + 192; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); }
    c->v[0] = ((sa32 *)&c->v[0])[1];
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x70053092c8ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0x999aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3e990000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GT(c)) goto L_700530924c;
    c->x[8] = (uint32_t)((uint32_t)c->x[24] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[24], 0x3ull));
    FP_SETS(0, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
    { uint64_t ea = c->sp + 0x7cull; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_HI(c)) goto L_70053092f8;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_7005309374;
L_70053092f8:;
    VW(vu32, 1, 1, SHUF(VREG(vu32, 0), VREG(vu32, 0), 0, 0, 0, 0));
    c->x[9] = (uint64_t)(0x700530a000ull);
    c->x[8] = (uint64_t)(c->x[24] & 0xfcull);
    { uint64_t ea = c->x[9] + 0x850ull; c->v[2] = LD128(ea); }
    c->x[9] = (uint64_t)(0ull | c->x[8]);
    c->x[10] = (uint64_t)(0ull | c->x[28]);
L_7005309310:;
    VW(vf32, 1, 3, vfromint_s(c, VREG(vu32, 2), 0, 1));
    c->v[4] = ((u128)0x4100000041000000ull << 64 | 0x4100000041000000ull);
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x4ull));
    { uint64_t ea = c->sp + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[17] = a; c->v[16] = b; }
    SV_FOP_S(FOP_DIV, 1, 3, VREG(vf32, 3), VREG(vf32, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 3), VREG(vf32, 4), (vf32){});
    c->v[4] = ((u128)0x3f8000003f800000ull << 64 | 0x3f8000003f800000ull);
    VW(vu32, 1, 5, vcmp_s(c, 2, VREG(vf32, 3), VREG(vf32, 4)));
    VW(vu64, 1, 5, (VREG(vu64, 5) & VREG(vu64, 4)) | (~VREG(vu64, 5) & VREG(vu64, 3)));
    VW(vu32, 1, 3, vcmp_s(c, 2, (vf32){}, VREG(vf32, 3)));
    SV_FOP_S(FOP_SUB, 1, 5, VREG(vf32, 4), VREG(vf32, 5), (vf32){});
    VW(vu64, 1, 3, (VREG(vu64, 3) & VREG(vu64, 4)) | (~VREG(vu64, 3) & VREG(vu64, 5)));
    { uint64_t ea = c->x[10]; sl_ldm(c, 1, 2, 3, 1, 4, ea); }
    SV_FOP_S(FOP_MUL, 1, 7, VREG(vf32, 3), vsplat_s(VREG(vf32, 16), 0, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 16, VREG(vf32, 3), vsplat_s(VREG(vf32, 16), 1, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 3), vsplat_s(VREG(vf32, 17), 0, 1), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 17, VREG(vf32, 4), VREG(vf32, 7), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 18, VREG(vf32, 5), VREG(vf32, 16), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 19, VREG(vf32, 6), VREG(vf32, 3), (vf32){});
    c->v[3] = ((u128)0x400000004ull << 64 | 0x400000004ull);
    VW(vu32, 1, 2, VREG(vu32, 2) + VREG(vu32, 3));
    { uint64_t ea = c->x[10]; sl_stm(c, 1, 2, 3, 1, 17, ea); c->x[10] = ea + 48; }
    if (COND_NE(c)) goto L_7005309310;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_EQ(c)) goto L_70053093d4;
L_7005309374:;
    c->x[9] = (uint64_t)(c->x[8] + (c->x[8] << 1));
    c->x[9] = (uint64_t)(ROR64(c->x[9], 62) & 0xfffffffffffffffcull);
L_700530937c:;
    FP_SETS(1, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
    c->v[2] = 0x41000000ull;
    { uint64_t ea = c->x[27] + c->x[9]; c->v[4] = LD32(ea); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    fp_op_s(c, FOP_DIV, 1, 1, 0);
    fp_op_s(c, FOP_MUL, 1, 1, 2);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(14));
    c->v[2] = COND_GT(c) ? VS32(14) : VS32(1);
    c->nzcv = cmp_s(c, VSF32(1), 0);
    fp_op_s(c, FOP_SUB, 2, 14, 2);
    c->v[1] = COND_MI(c) ? VS32(14) : VS32(2);
    { uint64_t ea = c->sp + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[3] = a; c->v[2] = b; }
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[8])));
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), vsplat_s(VREG(vf32, 1), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 1, 3, 1);
    { uint64_t ea = c->x[28] + c->x[9]; c->v[3] = LD64(ea); }
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 2), (vf32){});
    fp_op_s(c, FOP_ADD, 1, 4, 1);
    { uint64_t ea = c->x[28] + c->x[9]; ST64(ea, VS64(2)); }
    { uint64_t ea = c->x[27] + c->x[9]; ST32(ea, VS32(1)); }
    c->x[9] = (uint64_t)(c->x[9] + 0xcull);
    if (COND_NE(c)) goto L_700530937c;
L_70053093d4:;
    c->x[8] = (uint32_t)(0x999aull);
    { uint64_t ea = c->sp + 96; u128 a = LD64(ea), b = LD64(ea + 8); c->v[3] = a; c->v[0] = b; }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d990000ull);
    { uint64_t ea = c->sp + 152; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x158ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 0x150ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(c->sp + 0x1e0ull);
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[8] = (uint32_t)(0x5c29ull);
    c->x[5] = (uint64_t)(c->sp + 0x150ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3e8f0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->sp + 0x140ull; ST64(ea, VS64(3)); }
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ecc0000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x51ecull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3eb80000ull);
    c->v[0] = COND_EQ(c) ? VS32(1) : VS32(0);
    c->v[1] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x5c29ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f0f0000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xe354ull);
    { uint64_t ea = c->sp + 0x15cull; ST32(ea, VS32(0)); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f650000ull);
    { uint64_t ea = c->sp + 0x148ull; ST32(ea, (uint32_t)c->x[8]); }
    c->v[1] = COND_EQ(c) ? VS32(2) : VS32(1);
    { uint64_t ea = c->sp + 0x14cull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 88; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[8] = b; }
    c->v[0] = VS32(8);
    c->x[30] = 0x7005309464ull; f_7005309ee4(c);
    c->v[0] = VS32(8);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x54ull; c->v[1] = LD32(ea); }
    c->x[3] = (uint64_t)(c->sp + 0x220ull);
    c->x[4] = (uint64_t)(c->sp + 0x1e0ull);
    c->x[5] = (uint64_t)(c->sp + 0x140ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[30] = 0x7005309488ull; f_7005309ee4(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
L_700530948c:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[23]));
    c->x[9] = (uint64_t)(c->x[9] + c->x[8]);
    { uint32_t st = stx64(c, c->x[23], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_700530948c;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700530924c;
    { uint64_t ea = c->sp + 0x7cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0xcull);
    { uint64_t ea = c->sp + 0x80ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x220ull);
    c->x[1] = (uint64_t)(c->sp + 0x1e0ull);
    c->x[3] = (uint64_t)(c->sp + 0x134ull);
    c->x[24] = (uint64_t)(c->x[9] + (uint64_t)(uint32_t)c->x[10] * (uint64_t)(uint32_t)c->x[8]);
    c->x[2] = (uint64_t)(0ull | c->x[24]);
    c->x[30] = 0x70053094ccull; f_70053053d8(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_700530924c;
    { uint64_t ea = c->sp + 0x1f4ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0xd70aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3c230000ull);
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_MI(c)) goto L_700530924c;
    { uint64_t ea = c->sp + 0x1e0ull; c->v[0] = LD32(ea); }
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_MI(c)) goto L_700530924c;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x244ull; c->v[1] = LD32(ea); }
    c->v[11] = 0x40b00000ull;
    { uint64_t ea = c->sp + 0x220ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->sp + 0x230ull; c->v[10] = LD64(ea); }
    { uint64_t ea = c->sp + 0x240ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x624ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x620ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x248ull; c->v[2] = LD32(ea); }
    VW(vu32, 0, 5, SHUF(VREG(vu32, 8), VREG(vu32, 10), 1, 5, 0, 0));
    { uint64_t ea = c->sp + 0x228ull; c->v[6] = LD32(ea); }
    { uint64_t ea = c->sp + 0x238ull; c->v[7] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->sp + 0xc0ull; ST128(ea, c->v[6]); }
    ((sa32 *)&c->v[6])[1] = ((sa32 *)&c->v[7])[0];
    { uint64_t ea = c->sp + 0xa0ull; ST128(ea, c->v[7]); }
    SV_FOP_S(FOP_MUL, 0, 16, VQ(vf32, 0, 5), vsplat_s(VREG(vf32, 0), 0, 0), (vf32){});
    VW(vu32, 0, 0, SHUF(VREG(vu32, 8), VREG(vu32, 10), 0, 4, 0, 0));
    fp_fma_s(c, 0, 0, 1, 3, 4, 1);
    { uint64_t ea = c->x[8] + 0x628ull; c->v[4] = LD32(ea); }
    c->x[8] = (uint32_t)(0x6666ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ee60000ull);
    SV_FOP_S(FOP_MADD, 0, 16, VQ(vf32, 0, 16), VQ(vf32, 0, 0), vsplat_s(VREG(vf32, 3), 0, 0));
    c->v[3] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x6666ull);
    fp_fma_s(c, 0, 0, 5, 4, 2, 1);
    fp_fma_s(c, 1, 1, 0, 4, 2, 1);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x401e0000ull);
    SV_FOP_S(FOP_MADD, 0, 16, VQ(vf32, 0, 16), VQ(vf32, 0, 6), vsplat_s(VREG(vf32, 4), 0, 0));
    c->nzcv = cmp_s(c, VSF32(5), 0);
    c->v[0] = COND_MI(c) ? VS32(0) : VS32(5);
    SV_FOP_S(FOP_MUL, 0, 1, VQ(vf32, 0, 16), VQ(vf32, 0, 16), (vf32){});
    { uint64_t ea = c->sp + 0x80ull; ST128(ea, c->v[16]); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(14));
    c->v[1] = ((sa32 *)&c->v[1])[1];
    c->v[2] = COND_GT(c) ? VS32(14) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(3));
    c->v[3] = (uint32_t)c->x[8];
    fp_fma_s(c, 0, 0, 0, 16, 16, 1);
    fp_op_s(c, FOP_MUL, 2, 2, 11);
    c->v[1] = COND_MI(c) ? VS32(3) : VS32(2);
    { uint64_t ea = c->sp + 0xd0ull; ST128(ea, c->v[1]); }
    c->x[30] = 0x70053095bcull; f_700530a428(c);
    c->x[8] = (uint32_t)(0x126full);
    VW(vu32, 0, 2, SHUF(VREG(vu32, 0), VREG(vu32, 0), 0, 0, 0, 0));
    { uint64_t ea = c->sp + 0x80ull; c->v[4] = LD128(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3a830000ull);
    { uint64_t ea = c->sp + 0xc0ull; c->v[5] = LD128(ea); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->v[1] = (uint32_t)c->x[8];
    { uint64_t ea = c->x[24] + 0x8ull; c->v[15] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    { uint64_t ea = c->sp + 0x160ull; ST8(ea, 0u); }
    SV_FOP_S(FOP_DIV, 0, 2, VQ(vf32, 0, 4), VQ(vf32, 0, 2), (vf32){});
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    { uint64_t ea = c->sp + 0x1e0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1f4ull; c->v[1] = LD32(ea); }
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->v[4] = VS32(1) ^ 0x80000000u;
    c->x[8] = (uint32_t)((COND_LE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(3) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(1), 0);
    { uint64_t ea = c->sp + 0x38ull; c->v[3] = LD32(ea); }
    c->v[1] = COND_MI(c) ? VS32(4) : VS32(1);
    { uint64_t ea = c->sp + 0x3cull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 3, 0);
    { uint64_t ea = c->sp + 0x13cull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 4);
    VW(vu32, 0, 4, (vu32){} + (uint32_t)c->x[8]);
    c->x[8] = (uint32_t)(0xa3dull);
    fp_op_s(c, FOP_DIV, 0, 3, 0);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ed70000ull);
    fp_op_s(c, FOP_DIV, 1, 3, 1);
    VW(vu32, 0, 3, VREG(vu32, 4) << 31);
    { uint64_t ea = c->sp + 0x18ull; c->v[4] = LD64(ea); }
    VW(vu32, 0, 3, (vu32)(VREG(vs32, 3) < 0));
    SV_FOP_S(FOP_MUL, 0, 6, VQ(vf32, 0, 8), vsplat_s(VREG(vf32, 0), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 16, 5, 0);
    { uint64_t ea = c->sp + 0xa0ull; c->v[0] = LD128(ea); }
    VW(vu64, 0, 2, (VREG(vu64, 2) & VREG(vu64, 3)) | (VREG(vu64, 4) & ~VREG(vu64, 3)));
    { uint64_t ea = c->sp + 0x80ull; ST128(ea, c->v[6]); }
    { uint64_t ea = c->sp + 0xc0ull; ST32(ea, VS32(16)); }
    VW(vu8, 0, 3, SHUF(VREG(vu8, 2), VREG(vu8, 2), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    SV_FOP_S(FOP_MUL, 0, 4, VQ(vf32, 0, 10), vsplat_s(VREG(vf32, 1), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 0, 0, 1);
    SV_FOP_S(FOP_MUL, 0, 1, VQ(vf32, 0, 2), VQ(vf32, 0, 6), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 5, VQ(vf32, 0, 3), VQ(vf32, 0, 4), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 3, VQ(vf32, 0, 3), VQ(vf32, 0, 6), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 4, VQ(vf32, 0, 2), VQ(vf32, 0, 4), (vf32){});
    FP_SETS(6, op_s(c, FOP_MUL, VSF32(16), VREG(vf32, 2)[1], 0));
    fp_op_s(c, FOP_MUL, 7, 0, 2);
    fp_op_s(c, FOP_MUL, 16, 16, 2);
    FP_SETS(0, op_s(c, FOP_MUL, VSF32(0), VREG(vf32, 2)[1], 0));
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 4), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 3, VQ(vf32, 0, 3), VQ(vf32, 0, 4), (vf32){});
    c->v[4] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x3d71ull);
    SV_FOP_S(FOP_ADD, 0, 17, VQ(vf32, 0, 1), VQ(vf32, 0, 5), (vf32){});
    SV_FOP_S(FOP_SUB, 0, 1, VQ(vf32, 0, 1), VQ(vf32, 0, 5), (vf32){});
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f0a0000ull);
    fp_op_s(c, FOP_ADD, 0, 16, 0);
    c->v[5] = (uint32_t)c->x[8];
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    ((sa32 *)&c->v[2])[1] = ((sa32 *)&c->v[3])[1];
    { uint64_t ea = c->sp + 0x68ull; c->v[3] = LD64(ea); }
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[8] = (uint32_t)(0x999aull);
    ((sa32 *)&c->v[17])[1] = ((sa32 *)&c->v[1])[1];
    c->v[4] = COND_EQ(c) ? VS32(5) : VS32(4);
    fp_op_s(c, FOP_SUB, 5, 6, 7);
    { uint64_t ea = c->sp + 0x20ull; c->v[7] = LD128(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f190000ull);
    { uint64_t ea = c->sp + 0x120ull; ST64(ea, VS64(3)); }
    VW(vu64, 1, 6, VREG(vu64, 7) | VREG(vu64, 7));
    VW(vu64, 1, 1, VREG(vu64, 7) | VREG(vu64, 7));
    { uint64_t ea = c->sp + 0xd0ull; c->v[7] = LD128(ea); }
    c->v[3] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xae14ull);
    { uint64_t ea = c->sp + 0x12cull; ST32(ea, VS32(4)); }
    VW(vu64, 1, 18, VREG(vu64, 7) | VREG(vu64, 7));
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f470000ull);
    fp_op_s(c, FOP_MUL, 10, 5, 11);
    ((sa32 *)&c->v[6])[0] = ((sa32 *)&c->v[7])[0];
    ((sa32 *)&c->v[1])[1] = ((sa32 *)&c->v[7])[0];
    c->v[7] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x999aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d990000ull);
    fp_op_s(c, FOP_MUL, 8, 18, 0);
    { uint64_t ea = c->sp + 0x60ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x128ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0xe354ull);
    c->v[3] = COND_EQ(c) ? VS32(7) : VS32(3);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f650000ull);
    { uint64_t ea = c->sp + 0x110ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[24] + 0x0ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    SV_FOP_S(FOP_MUL, 0, 11, VQ(vf32, 0, 6), VQ(vf32, 0, 17), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 12, VQ(vf32, 0, 1), VQ(vf32, 0, 2), (vf32){});
    { uint64_t ea = c->sp + 0xd0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(3)); }
    c->pc = c->x[8]; c->x[30] = 0x700530974cull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x999aull);
    { uint64_t ea = c->sp + 0x80ull; c->v[1] = LD128(ea); }
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3e990000ull);
    c->v[0] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_MUL, 2, 0, 1);
    FP_SETS(3, op_s(c, FOP_MUL, VSF32(0), VREG(vf32, 1)[1], 0));
    { uint64_t ea = c->sp + 0xc0ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    { uint64_t ea = c->sp + 0xd0ull; c->v[0] = LD128(ea); }
    c->v[4] = ((sa32 *)&c->v[0])[1];
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->sp + 16; ST32(ea, VS32(3)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 124; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    fp_op_s(c, FOP_SUB, 0, 15, 1);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(4)); }
    { uint64_t ea = c->sp + 0xa0ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_ADD, 0, 4, 3);
    { uint64_t ea = c->sp + 0xc0ull; ST32(ea, VS32(0)); }
    goto L_7005309830;
L_700530979c:;
    c->x[8] = (uint64_t)(0x700530b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1b8ull);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + (c->x[24] << 3); c->v[0] = LD64(ea); }
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->x[8] + (c->x[24] << 3); c->v[1] = LD64(ea); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    VW(vu8, 0, 2, SHUF(VREG(vu8, 0), VREG(vu8, 0), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    fp_op_s(c, FOP_MUL, 4, 10, 0);
    FP_SETS(5, op_s(c, FOP_MUL, VSF32(8), VREG(vf32, 0)[1], 0));
    VW(vu8, 0, 3, SHUF(VREG(vu8, 1), VREG(vu8, 1), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 12), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 6, VQ(vf32, 0, 12), VQ(vf32, 0, 1), (vf32){});
    fp_op_s(c, FOP_MUL, 7, 10, 1);
    FP_SETS(1, op_s(c, FOP_MUL, VSF32(8), VREG(vf32, 1)[1], 0));
    c->x[3] = (uint64_t)(c->sp + 0x120ull);
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 11), VQ(vf32, 0, 2), (vf32){});
    fp_op_s(c, FOP_ADD, 4, 4, 5);
    SV_FOP_S(FOP_MUL, 0, 3, VQ(vf32, 0, 11), VQ(vf32, 0, 3), (vf32){});
    fp_op_s(c, FOP_ADD, 1, 7, 1);
    SV_FOP_S(FOP_ADD, 0, 0, VQ(vf32, 0, 2), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 6), (vf32){});
    fp_op_s(c, FOP_ADD, 3, 15, 4);
    { uint64_t ea = c->sp + 0xd0ull; c->v[4] = LD128(ea); }
    fp_op_s(c, FOP_ADD, 1, 15, 1);
    SV_FOP_S(FOP_ADD, 0, 0, VQ(vf32, 0, 4), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 4), VQ(vf32, 0, 2), (vf32){});
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->sp + 0xf8ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->sp + 0x78ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, VS64(2)); }
    c->pc = c->x[8]; c->x[30] = 0x7005309828ull; rt_dispatch(c); c->pc = 0;
L_7005309828:;
    (void)(subs64(c, c->x[24], 0x20ull));
    if (COND_EQ(c)) goto L_7005309844;
L_7005309830:;
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[24]);
    (void)(logic64(c, c->x[8] & 0x6ull));
    if (COND_NE(c)) goto L_700530979c;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    goto L_7005309828;
L_7005309844:;
    { uint64_t ea = c->sp + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    c->x[3] = (uint64_t)(c->sp + 0x120ull);
    fp_op_s(c, FOP_SUB, 2, 1, 0);
    { uint64_t ea = c->sp + 0xd0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x14ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 0, 1);
    { uint64_t ea = c->sp + 0xa0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 124; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[0] = b; }
    { uint64_t ea = c->sp + 0x104ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x7cull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_ADD, 3, 15, 4);
    { uint64_t ea = c->sp + 0x100ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0xc0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 240; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->sp + 0x78ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 16; ST32(ea, VS32(3)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0xf8ull; ST32(ea, VS32(3)); }
    c->pc = c->x[8]; c->x[30] = 0x70053098a0ull; rt_dispatch(c); c->pc = 0;
    c->x[24] = (uint64_t)(0ull | 0ull);
    goto L_700530993c;
L_70053098a8:;
    c->x[8] = (uint64_t)(0x700530b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1b8ull);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + (c->x[24] << 3); c->v[0] = LD64(ea); }
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->x[8] + (c->x[24] << 3); c->v[1] = LD64(ea); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    VW(vu8, 0, 2, SHUF(VREG(vu8, 0), VREG(vu8, 0), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    fp_op_s(c, FOP_MUL, 4, 10, 0);
    FP_SETS(5, op_s(c, FOP_MUL, VSF32(8), VREG(vf32, 0)[1], 0));
    VW(vu8, 0, 3, SHUF(VREG(vu8, 1), VREG(vu8, 1), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 12), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 6, VQ(vf32, 0, 12), VQ(vf32, 0, 1), (vf32){});
    fp_op_s(c, FOP_MUL, 7, 10, 1);
    FP_SETS(1, op_s(c, FOP_MUL, VSF32(8), VREG(vf32, 1)[1], 0));
    c->x[3] = (uint64_t)(c->sp + 0x110ull);
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 11), VQ(vf32, 0, 2), (vf32){});
    fp_op_s(c, FOP_ADD, 4, 4, 5);
    SV_FOP_S(FOP_MUL, 0, 3, VQ(vf32, 0, 11), VQ(vf32, 0, 3), (vf32){});
    fp_op_s(c, FOP_ADD, 1, 7, 1);
    SV_FOP_S(FOP_ADD, 0, 0, VQ(vf32, 0, 2), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 6), (vf32){});
    fp_op_s(c, FOP_ADD, 3, 15, 4);
    { uint64_t ea = c->sp + 0xd0ull; c->v[4] = LD128(ea); }
    fp_op_s(c, FOP_ADD, 1, 15, 1);
    SV_FOP_S(FOP_ADD, 0, 0, VQ(vf32, 0, 4), VQ(vf32, 0, 0), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 4), VQ(vf32, 0, 2), (vf32){});
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->sp + 0xf8ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->sp + 0x74ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, VS64(2)); }
    c->pc = c->x[8]; c->x[30] = 0x7005309934ull; rt_dispatch(c); c->pc = 0;
    (void)(subs64(c, c->x[24], 0x20ull));
    if (COND_EQ(c)) goto L_70053091e8;
L_700530993c:;
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[24]);
    (void)(logic64(c, c->x[8] & 0x6ull));
    if (COND_NE(c)) goto L_70053098a8;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    (void)(subs64(c, c->x[24], 0x20ull));
    if (COND_NE(c)) goto L_700530993c;
    goto L_70053091e8;
L_7005309958:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_700530995c:;
    c->x[9] = (uint32_t)(0xa590ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2840000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x7005309978ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x24d8ull);
    c->x[9] = (uint32_t)(0x2ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x27f0000ull);
    c->x[2] = (uint64_t)(c->sp + 0x150ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x150ull; ST64(ea, c->x[9]); }
    c->pc = c->x[8]; c->x[30] = 0x70053099a0ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    c->pc = c->x[8]; c->x[30] = 0x70053099acull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x160ull);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x70053099bcull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(c->x[19] + 0x30ull);
L_70053099c0:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053099c0;
    goto L_7005308d9c;
}

void f_7005312bf4(Cpu *c) {
    { uint64_t ea = c->x[8] + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->pc = 0; return;
}

void f_7005312bfc(Cpu *c) {
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->pc = 0; return;
}

void f_7005312c04(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x14000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x400ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_EQ(c)) goto L_7005312c34;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
L_7005312c34:;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x1ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x2ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x3ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x3ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x5ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x5ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x6ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x6ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x7ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x7ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xaull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xbull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xcull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xdull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xdull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xeull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xfull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x10ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x11ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x11ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x12ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x12ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x13ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x13ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x15ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x15ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x16ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x16ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x17ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x17ull; ST8(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
}

void f_7005312f60(Cpu *c) {
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[0] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->pc = 0; return;
}

void f_7005312f6c(Cpu *c) {
    c->x[10] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[10] + 0xf50ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[12] + 0x4000ull);
    c->x[9] = (uint64_t)(c->x[12] + 0x2000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[0])));
    c->x[8] = (uint32_t)(0x1ull);
    c->x[11] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)(-(uint32_t)c->x[8]));
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[0])));
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)((uint32_t)c->x[11]));
    if (((c->x[9] >> 31) & 1) != 0) goto L_7005313164;
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005313138;
    { uint64_t ea = c->x[11] + 0xd4ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    if (((c->x[13] >> 6) & 1) == 0) goto L_7005313138;
    { uint64_t ea = c->x[11] + 0x8ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x98ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x9ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x99ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xaull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9aull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xbull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9bull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xcull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9cull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xdull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9dull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xeull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9eull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xfull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x9full; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa0ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x11ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa1ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x12ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa2ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x13ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa3ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x14ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa4ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x15ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa5ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x16ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa6ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x17ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa7ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x18ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa8ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x19ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xa9ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1aull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xaaull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1bull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xabull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1cull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xacull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1dull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xadull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1eull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xaeull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x1full; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xafull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x20ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb0ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x21ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb1ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x22ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb2ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x23ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb3ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x24ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb4ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x25ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb5ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x26ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb6ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x27ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb7ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x28ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb8ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x29ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xb9ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2aull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbaull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2bull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbbull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2cull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbcull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2dull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbdull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2eull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbeull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x2full; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xbfull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x30ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc0ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x31ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc1ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x32ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc2ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x33ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc3ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x34ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc4ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x35ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc5ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x36ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc6ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0x37ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xc7ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[11] + 0xd4ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[12] & 0xffffffbfull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0xd4ull; ST32(ea, (uint32_t)c->x[13]); }
L_7005313138:;
    { uint64_t ea = c->x[1] + 0x0ull; c->v[0] = LD32(ea); }
    c->x[9] = (uint64_t)(c->x[12] + ((uint64_t)(uint32_t)c->x[9] << 2));
    { uint64_t ea = c->x[0] + 0xa4ull; ST32(ea, VS32(0)); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1a000ull);
    { uint64_t ea = c->x[1] + 0x4ull; c->v[0] = LD32(ea); }
    c->x[9] = (uint64_t)(c->x[9] + 0x46cull);
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0xb4ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[1] + 0x8ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0xc4ull; ST32(ea, VS32(0)); }
    c->pc = 0; return;
L_7005313164:;
    c->x[9] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
}

void f_70053135e0(Cpu *c) {
    if (c->x[2] == 0) goto L_700531368c;
    (void)(subs64(c, c->x[2], 0x8ull));
    c->x[8] = (uint64_t)(0ull | 0ull);
    if (COND_CC(c)) goto L_7005313670;
    c->x[9] = (uint64_t)(c->x[0] - c->x[1]);
    (void)(subs64(c, c->x[9], 0x20ull));
    if (COND_CC(c)) goto L_7005313670;
    (void)(subs64(c, c->x[2], 0x20ull));
    if (COND_CS(c)) goto L_700531360c;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_7005313644;
L_700531360c:;
    c->x[8] = (uint64_t)(c->x[2] & 0xffffffffffffffe0ull);
    c->x[9] = (uint64_t)(c->x[1] + 0x10ull);
    c->x[10] = (uint64_t)(c->x[0] + 0x10ull);
    c->x[11] = (uint64_t)(0ull | c->x[8]);
L_700531361c:;
    { uint64_t ea = c->x[9] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[9] = (uint64_t)(c->x[9] + 0x20ull);
    { uint64_t ea = c->x[10] - 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    if (COND_NE(c)) goto L_700531361c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_700531368c;
    (void)(logic64(c, c->x[2] & 0x18ull));
    if (COND_EQ(c)) goto L_7005313670;
L_7005313644:;
    c->x[11] = (uint64_t)(0ull | c->x[8]);
    c->x[8] = (uint64_t)(c->x[2] & 0xfffffffffffffff8ull);
    c->x[9] = (uint64_t)(c->x[1] + c->x[11]);
    c->x[10] = (uint64_t)(c->x[0] + c->x[11]);
    c->x[11] = (uint64_t)(c->x[11] - c->x[8]);
L_7005313658:;
    { uint64_t ea = c->x[9]; c->v[0] = LD64(ea); c->x[9] = c->x[9] + 8; }
    c->x[11] = (uint64_t)(adds64(c, c->x[11], 0x8ull));
    { uint64_t ea = c->x[10]; ST64(ea, VS64(0)); c->x[10] = c->x[10] + 8; }
    if (COND_NE(c)) goto L_7005313658;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_700531368c;
L_7005313670:;
    c->x[9] = (uint64_t)(c->x[2] - c->x[8]);
    c->x[10] = (uint64_t)(c->x[0] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
L_700531367c:;
    { uint64_t ea = c->x[8]; uint64_t v = LD8(ea); c->x[8] = c->x[8] + 1; c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x1ull));
    { uint64_t ea = c->x[10]; ST8(ea, (uint32_t)c->x[11]); c->x[10] = c->x[10] + 1; }
    if (COND_NE(c)) goto L_700531367c;
L_700531368c:;
    c->pc = 0; return;
}

void f_70053137d8(Cpu *c) {
    uint64_t p_failed = LD64(0x700531c8e8ull);
    ST32(p_failed, 1u);
    uint64_t p_ckpt = LD64(0x700531c8e0ull);
    c->sp = LD64(p_ckpt);
    c->x[0] = 0ull;
    g_wxlm_arrow_unwind = 1;
    c->pc = 0; return;
}

void f_70053137f8(Cpu *c) {
    c->x[30] = 0x70053137fcull; f_70053100f0(c);
    uint64_t p_ckpt = LD64(0x700531c8e0ull);
    c->sp = LD64(p_ckpt);
    c->x[0] = 1ull;
    g_wxlm_arrow_unwind = 1;
    c->pc = 0; return;
}

void f_7005313810(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531382c;
    { uint64_t ea = c->x[8] + 0x20ull; c->v[0] = LD128(ea); }
    c->x[8] = (uint64_t)(c->x[1] + 0x8ull);
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[8]; sl_sts(c, 2, 1, 2, 0, ea); }
    c->pc = 0; return;
L_700531382c:;
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[1] + 0x8ull; ST32(ea, 0u); }
    c->pc = 0; return;
}

void f_700531450c(Cpu *c) {
    { uint64_t ea = c->x[0] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[1] = b; }
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->x[0] + 0x8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 1, 1);
    { uint64_t ea = c->x[8] + 0x5fcull; c->v[4] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 3, 3, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(4));
    if (COND_LS(c)) goto L_7005314564;
    c->x[8] = (uint32_t)(0x7f800000ull);
    c->v[4] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(4));
    if (COND_EQ(c)) goto L_7005314574;
    c->v[4] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 4, 4, 0);
    fp_op_s(c, FOP_MUL, 3, 3, 4);
    fp_op_s(c, FOP_MUL, 6, 1, 4);
    fp_op_s(c, FOP_MUL, 1, 2, 4);
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(3)); ST32(ea + 4, VS32(6)); }
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(1)); }
    c->pc = 0; return;
L_7005314564:;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, 0u); }
    c->pc = 0; return;
L_7005314574:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    c->v[4] = 0x3f800000ull;
    { uint64_t ea = c->x[8] + 0xec0ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531cec0ull));
    fp_op_s(c, FOP_MUL, 3, 3, 0);
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    fp_op_s(c, FOP_MUL, 0, 2, 0);
    fp_op_s(c, FOP_MUL, 2, 1, 1);
    fp_fma_s(c, 0, 0, 2, 3, 3, 2);
    fp_fma_s(c, 0, 0, 2, 0, 0, 2);
    fp_op_s(c, FOP_SQRT, 2, 2, 2);
    fp_op_s(c, FOP_DIV, 4, 4, 2);
    fp_op_s(c, FOP_MUL, 0, 0, 4);
    fp_op_s(c, FOP_MUL, 3, 3, 4);
    fp_op_s(c, FOP_MUL, 1, 1, 4);
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[8] + 0x2e0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(3)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_MUL, 0, 2, 0);
    c->pc = 0; return;
}

void f_7005314810(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[21]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x220ull);
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    if (((c->x[8] >> 23) & 1) != 0) goto L_70053148a8;
L_7005314830:;
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_7005314888;
    { uint64_t ea = c->x[21] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) == 0) goto L_7005314888;
    c->x[20] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531484cull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x14ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x24ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x34ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531486cull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x1ull);
L_7005314870:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->sp = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005314888:;
    { uint64_t ea = c->x[0] + 0xa4ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0xb4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0xc4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(0)); }
    goto L_7005314870;
L_70053148a8:;
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x20ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053148ccull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531ce88ull));
    c->x[1] = (uint64_t)(c->x[1] + 0xcb5ull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x70053148e0ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005314830;
}

void f_70053148e8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->x[2] + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[16] = a; c->v[4] = b; }
    c->v[3] = 0x3f800000ull;
    { uint64_t ea = c->x[1] + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[5] = b; }
    c->x[8] = (uint32_t)(0x35a00000ull);
    { uint64_t ea = c->x[2] + 0x0ull; c->v[7] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 0, 16);
    { uint64_t ea = c->x[1] + 0x0ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 2, 1, 7, 2);
    c->v[6] = (uint32_t)c->x[8];
    fp_fma_s(c, 0, 0, 2, 5, 4, 2);
    fp_op_s(c, FOP_ADD, 8, 2, 3);
    c->nzcv = cmp_s(c, VSF32(8), VSF32(6));
    if (COND_LS(c)) goto L_7005314a20;
    fp_op_s(c, FOP_NMUL, 6, 0, 7);
    fp_fma_s(c, 0, 0, 6, 1, 16, 6);
    fp_op_s(c, FOP_NMUL, 1, 1, 4);
    fp_fma_s(c, 0, 0, 7, 5, 7, 1);
    fp_op_s(c, FOP_ADD, 1, 8, 8);
    fp_op_s(c, FOP_NMUL, 2, 5, 16);
    fp_fma_s(c, 0, 0, 4, 0, 4, 2);
    fp_op_s(c, FOP_SQRT, 0, 1, 1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_70053149f8;
L_7005314954:;
    fp_op_s(c, FOP_DIV, 16, 3, 0);
    c->v[1] = 0x3f000000ull;
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    fp_op_s(c, FOP_MUL, 5, 0, 1);
    fp_op_s(c, FOP_MUL, 0, 6, 16);
    { uint64_t ea = c->x[8] + 0xcd0ull; c->v[6] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 4, 4, 16);
    fp_op_s(c, FOP_MUL, 1, 7, 16);
    c->nzcv = cmp_s(c, VSF32(8), VSF32(6));
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(4)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[0] + 8; ST32(ea, VS32(0)); ST32(ea + 4, VS32(5)); }
    if (COND_LS(c)) goto L_70053149a4;
L_7005314984:;
    c->x[8] = (uint32_t)(0x35a00000ull);
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->v[0] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(8), VSF32(0));
    { uint64_t ea = c->sp + 0x10ull; c->v[8] = LD64(ea); }
    c->x[0] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
L_70053149a4:;
    fp_op_s(c, FOP_MUL, 6, 4, 4);
    fp_fma_s(c, 0, 0, 6, 5, 5, 6);
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->x[8] + 0x5fcull; c->v[7] = LD32(ea); }
    fp_fma_s(c, 0, 0, 6, 1, 1, 6);
    fp_fma_s(c, 0, 0, 6, 0, 0, 6);
    fp_op_s(c, FOP_SQRT, 6, 6, 6);
    c->nzcv = cmp_s(c, VSF32(6), VSF32(7));
    if (COND_LS(c)) goto L_7005314984;
    c->x[8] = (uint32_t)(0x7f800000ull);
    c->v[7] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(6), VSF32(7));
    if (COND_EQ(c)) goto L_7005314a98;
    fp_op_s(c, FOP_DIV, 3, 3, 6);
    fp_op_s(c, FOP_MUL, 5, 5, 3);
    fp_op_s(c, FOP_MUL, 4, 4, 3);
    fp_op_s(c, FOP_MUL, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(4)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[0] + 8; ST32(ea, VS32(0)); ST32(ea + 4, VS32(5)); }
    goto L_7005314984;
L_70053149f8:;
    c->v[0] = VS32(1);
    { uint64_t ea = c->x[29] - 8; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(6)); ST32(ea + 4, VS32(7)); }
    { uint64_t ea = c->sp + 0x4ull; ST32(ea, VS32(4)); }
    c->x[30] = 0x7005314a0cull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[6] = b; }
    c->v[3] = 0x3f800000ull;
    { uint64_t ea = c->sp + 0xcull; c->v[7] = LD32(ea); }
    { uint64_t ea = c->x[29] - 8; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005314954;
L_7005314a20:;
    c->x[8] = (uint32_t)(0xb5a00000ull);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(8)); }
    c->v[2] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x35a00000ull);
    { uint64_t ea = c->x[29] - 8; ST64(ea, c->x[0]); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[2] = (uint32_t)c->x[8];
    c->nzcv = COND_GE(c) ? cmp_s(c, VSF32(0), VSF32(2)) : 0x20000000ull;
    if (COND_LS(c)) goto L_7005314a84;
    fp_op_s(c, FOP_MUL, 1, 1, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    fp_op_s(c, FOP_ADD, 1, 0, 3);
    fp_op_s(c, FOP_DIV, 1, 3, 1);
    fp_op_s(c, FOP_SQRT, 2, 1, 1);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    c->v[8] = VS32(2) ^ 0x80000000u;
    fp_op_s(c, FOP_SQRT, 0, 1, 1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_7005314ae0;
L_7005314a70:;
    { uint64_t ea = c->x[29] - 8; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0; ST32(ea, VS32(8)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->sp + 0xcull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x8ull; ST64(ea, 0ull); }
    goto L_7005314984;
L_7005314a84:;
    { uint64_t ea = c->x[29] - 8; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0x3f80000000000000ull);
    { uint64_t ea = c->sp + 0xcull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[9] + 0; ST64(ea, c->x[8]); ST64(ea + 8, 0ull); }
    goto L_7005314984;
L_7005314a98:;
    c->v[6] = 0x1f0000001f000000ull;
    fp_op_s(c, FOP_MUL, 5, 5, 6);
    fp_op_s(c, FOP_MUL, 4, 4, 6);
    fp_op_s(c, FOP_MUL, 1, 1, 6);
    fp_op_s(c, FOP_MUL, 0, 0, 6);
    fp_op_s(c, FOP_MUL, 6, 4, 4);
    fp_fma_s(c, 0, 0, 6, 5, 5, 6);
    fp_fma_s(c, 0, 0, 6, 1, 1, 6);
    fp_fma_s(c, 0, 0, 6, 0, 0, 6);
    fp_op_s(c, FOP_SQRT, 6, 6, 6);
    fp_op_s(c, FOP_DIV, 3, 3, 6);
    fp_op_s(c, FOP_MUL, 7, 4, 3);
    fp_op_s(c, FOP_MUL, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 5, 5, 3);
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(7)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_MUL, 1, 0, 3);
    { uint64_t ea = c->x[0] + 8; ST32(ea, VS32(1)); ST32(ea + 4, VS32(5)); }
    goto L_7005314984;
L_7005314ae0:;
    c->v[0] = VS32(1);
    c->x[30] = 0x7005314ae8ull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005314a70;
}

void f_7005315100(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[19] = (uint64_t)(0ull | c->x[8]);
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_EQ(c)) goto L_70053153a0;
    c->x[24] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[25] = (uint64_t)(LD64(0x700531cf10ull));
    { uint64_t ea = c->x[24] + 0xa68ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[25] + 0x7a8ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005315154ull; f_700531c7c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[23] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->x[23] + 0xef8ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005315200;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_NE(c)) goto L_7005315414;
    { uint64_t ea = c->x[0] + 0xd0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_7005315174:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_7005315200;
    { uint64_t ea = c->x[0] + 0xa8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x2b0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_70053151b8;
    { uint64_t ea = c->x[22] + 0x2a0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x2acull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x2a8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
L_7005315194:;
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)((uint32_t)c->x[12]));
    c->x[13] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[13]);
    { uint64_t ea = c->x[10] + ((uint64_t)(int64_t)(int32_t)c->x[13] << 2); uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315210;
    c->x[9] = (uint32_t)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    if (COND_NE(c)) goto L_7005315194;
L_70053151b8:;
    { uint64_t ea = c->x[22] + 0x428ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005315210;
    { uint64_t ea = c->x[22] + 0x80ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005315200;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[22] = (uint32_t)(0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315214;
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315214;
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315214;
    { uint64_t ea = c->x[9] + 0x48ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315214;
L_7005315200:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005315208ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[22] = (uint32_t)(0u | 0u);
    goto L_7005315214;
L_7005315210:;
    c->x[22] = (uint32_t)(0x1ull);
L_7005315214:;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_EQ(c)) goto L_7005315398;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x48ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005315398;
    { uint64_t ea = c->x[9] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005315398;
    { uint64_t ea = c->x[8] + 0x24ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - 0x7ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x5ull));
    c->x[21] = (uint64_t)((COND_CC(c)) ? 0ull : (uint64_t)(c->x[8]));
L_7005315248:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xa00ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(lda8(c->x[8]));
    if (((c->x[9] >> 0) & 1) == 0) goto L_70053153ac;
L_7005315258:;
    if (c->x[21] == 0) goto L_7005315440;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(LD64(0x700531cf00ull));
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x810ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005315428;
    c->x[8] = (uint64_t)(lda8(c->x[8]));
    if (((c->x[8] >> 0) & 1) == 0) goto L_700531544c;
L_700531527c:;
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x8ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[21] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x2ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_HI(c)) goto L_7005315348;
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053152a4ull; f_700531c7c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005315368;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_NE(c)) goto L_7005315484;
    { uint64_t ea = c->x[0] + 0xd0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_70053152bc:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_7005315368;
    { uint64_t ea = c->x[0] + 0xa8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x2b0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005315300;
    { uint64_t ea = c->x[24] + 0x2a0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x2acull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x2a8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
L_70053152dc:;
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)((uint32_t)c->x[12]));
    c->x[13] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[13]);
    { uint64_t ea = c->x[10] + ((uint64_t)(int64_t)(int32_t)c->x[13] << 2); uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315344;
    c->x[9] = (uint32_t)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    if (COND_NE(c)) goto L_70053152dc;
L_7005315300:;
    { uint64_t ea = c->x[24] + 0x428ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005315344;
    { uint64_t ea = c->x[24] + 0x80ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005315368;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315344;
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315344;
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005315344;
    { uint64_t ea = c->x[9] + 0x48ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005315368;
L_7005315344:;
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[21]); }
L_7005315348:;
    if (((c->x[22] >> 0) & 1) == 0) goto L_70053153f4;
L_700531534c:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
L_7005315368:;
    { uint64_t ea = c->x[21] + 0x1b0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[21] + 0x1b0ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)~(uint32_t)((int32_t)(uint32_t)c->x[8] >> 31));
L_7005315374:;
    c->x[24] = (uint64_t)(ldx32(c, c->x[23]));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[24])));
    if (COND_NE(c)) goto L_70053154a4;
    c->x[9] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
L_7005315384:;
    { uint32_t st = stx32(c, c->x[23], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005315498;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_7005315344;
L_7005315398:;
    c->x[21] = (uint64_t)(0ull | 0ull);
    goto L_7005315248;
L_70053153a0:;
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x8ull; ST8(ea, 0u); }
    goto L_700531534c;
L_70053153ac:;
    c->x[0] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[0] + 0xa00ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053153b8ull; f_700531c788(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xa00ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[0] == 0) goto L_7005315258;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xa08ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x9f8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0xa00ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053153e8ull; f_700531c790(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xa00ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    goto L_7005315258;
L_70053153f4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    f_700531c7e0(c); return;
L_7005315414:;
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[0]); }
    c->pc = c->x[8]; c->x[30] = 0x700531541cull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005315174;
L_7005315428:;
    c->x[1] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[1] + 0x9f8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->pc = c->x[9]; c->x[30] = 0x7005315438ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    if (c->x[0] != 0) goto L_700531527c;
L_7005315440:;
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x8ull; ST8(ea, 0u); }
    goto L_7005315348;
L_700531544c:;
    c->x[0] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[0] + 0xa00ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005315458ull; f_700531c788(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if ((uint32_t)c->x[0] == 0) goto L_700531527c;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xa08ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x9f8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0xa00ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005315480ull; f_700531c790(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531527c;
L_7005315484:;
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[0]); }
    c->pc = c->x[8]; c->x[30] = 0x700531548cull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_70053152bc;
L_7005315498:;
    c->x[24] = (uint64_t)(ldx32(c, c->x[23]));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[24])));
    if (COND_EQ(c)) goto L_7005315384;
L_70053154a4:;
    (void)(adds32(c, (uint32_t)c->x[24], 0x1ull));
    if (COND_EQ(c)) goto L_7005315348;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[1] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, 0ull); }
    c->x[30] = 0x70053154bcull; f_700531c6f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053154c4ull; f_700531c2f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[24]);
    goto L_7005315374;
}

void f_70053154cc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x20ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    { uint64_t ea = c->x[1] + 0x0ull; c->v[0] = LD32(ea); }
    c->v[3] = 0x3f800000ull;
    c->v[4] = 0x3e800000ull;
    { uint64_t ea = c->x[1] + 0x14ull; c->v[1] = LD32(ea); }
    c->v[7] = 0xbf000000ull;
    fp_op_s(c, FOP_ADD, 5, 0, 1);
    { uint64_t ea = c->x[1] + 0x28ull; c->v[6] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 6);
    fp_op_s(c, FOP_ADD, 0, 0, 6);
    fp_op_s(c, FOP_ADD, 2, 5, 6);
    fp_op_s(c, FOP_ADD, 2, 2, 3);
    fp_op_s(c, FOP_MUL, 2, 2, 4);
    fp_fma_s(c, 0, 0, 3, 1, 7, 2);
    fp_fma_s(c, 0, 0, 1, 0, 7, 2);
    fp_fma_s(c, 0, 0, 0, 5, 7, 2);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_LE(c)) goto L_7005315578;
    c->nzcv = cmp_s(c, VSF32(2), VSF32(1));
    if (COND_LE(c)) goto L_70053155e4;
    c->nzcv = cmp_s(c, VSF32(2), VSF32(0));
    if (COND_LE(c)) goto L_7005315640;
    fp_op_s(c, FOP_SQRT, 0, 2, 2);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_70053156ac;
L_7005315538:;
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_DIV, 0, 4, 0);
    { uint64_t ea = c->x[1] + 0x24ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x18ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[1] + 0x8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 2, 0, 1);
    { uint64_t ea = c->x[0] + 0x4ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[1] + 0x10ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x4ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    goto L_70053155d0;
L_7005315578:;
    c->nzcv = cmp_s(c, VSF32(3), VSF32(1));
    if (COND_LE(c)) goto L_70053155e4;
    c->nzcv = cmp_s(c, VSF32(3), VSF32(0));
    if (COND_LE(c)) goto L_7005315640;
    fp_op_s(c, FOP_SQRT, 0, 3, 3);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_7005315694;
L_7005315594:;
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_DIV, 0, 4, 0);
    { uint64_t ea = c->x[1] + 0x24ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x18ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[1] + 0x4ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x10ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 2, 0, 1);
    { uint64_t ea = c->x[0] + 0x4ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[1] + 0x8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
L_70053155d0:;
    fp_op_s(c, FOP_MUL, 0, 0, 1);
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(0)); }
L_70053155d8:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x20ull);
    c->pc = 0; return;
L_70053155e4:;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_LE(c)) goto L_7005315640;
    fp_op_s(c, FOP_SQRT, 0, 1, 1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_70053156c4;
L_70053155f8:;
    { uint64_t ea = c->x[0] + 0x4ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_DIV, 0, 4, 0);
    { uint64_t ea = c->x[1] + 0x8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[1] + 0x18ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x24ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 2, 0, 1);
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[1] + 0x10ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x4ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 0, 0, 1);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, VS32(0)); }
    goto L_70053155d8;
L_7005315640:;
    fp_op_s(c, FOP_SQRT, 1, 0, 0);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(1));
    if (COND_VS(c)) goto L_70053156dc;
L_700531564c:;
    fp_op_s(c, FOP_DIV, 0, 4, 1);
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[1] + 0x10ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x4ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 2, 0, 1);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[1] + 0x24ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x18ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 0, 0, 1);
    { uint64_t ea = c->x[0] + 0x4ull; ST32(ea, VS32(0)); }
    goto L_70053155d8;
L_7005315694:;
    c->v[0] = VS32(3);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[0]); }
    c->x[30] = 0x70053156a0ull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[0] = (uint64_t)(b); }
    c->v[4] = 0x3e800000ull;
    goto L_7005315594;
L_70053156ac:;
    c->v[0] = VS32(2);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[0]); }
    c->x[30] = 0x70053156b8ull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[0] = (uint64_t)(b); }
    c->v[4] = 0x3e800000ull;
    goto L_7005315538;
L_70053156c4:;
    c->v[0] = VS32(1);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[0]); }
    c->x[30] = 0x70053156d0ull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[0] = (uint64_t)(b); }
    c->v[4] = 0x3e800000ull;
    goto L_70053155f8;
L_70053156dc:;
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[0]); }
    c->x[30] = 0x70053156e4ull; f_700531c7a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[0] = (uint64_t)(b); }
    c->v[4] = 0x3e800000ull;
    c->v[1] = VS32(0);
    goto L_700531564c;
}

void f_70053158b4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xb0ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x50ull);
    c->x[26] = (uint64_t)(LD64(0x700531cf18ull));
    { uint64_t ea = c->x[0] + 0x818ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[3]);
    { uint64_t ea = c->x[26] + 0xb88ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[25] = (uint64_t)(c->tpidr);
    if (c->x[8] == 0) goto L_7005315958;
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[9] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[9] & 0xffffffffull));
    c->x[0] = (uint64_t)(0x0ull);
    c->x[0] = (uint64_t)((c->x[0] & 0xffffffffffff0000ull) | 0x10ull);
    /* hint */
    /* hint */
    { uint64_t ea = c->x[25] + c->x[0]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005315c5c;
L_700531591c:;
    c->x[10] = (uint64_t)(c->x[8] + (c->x[23] << 3));
    { uint64_t ea = c->x[10] + 0x3e8ull; uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + ((uint64_t)(int64_t)(int32_t)c->x[9] << 3));
    c->x[10] = (uint32_t)((uint32_t)c->x[27] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[27], 0x0ull));
    c->x[10] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[10] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[10] & 0xffffffffull));
    { uint64_t ea = c->x[8] + 0x3e8ull; ST64(ea, c->x[10]); }
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[20] + 0x818ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], 0x0ull));
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
    { uint64_t ea = c->x[20] + 0x9b9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005315974;
    goto L_7005315978;
L_7005315958:;
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint32_t)(0xffffffffull);
    (void)(subs64(c, c->x[0], 0x0ull));
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
    { uint64_t ea = c->x[20] + 0x9b9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005315978;
L_7005315974:;
    if ((uint32_t)c->x[9] == 0) goto L_70053159bc;
L_7005315978:;
    { uint64_t ea = c->x[22] + 0x0ull; c->v[0] = LD128(ea); }
    c->x[10] = (uint64_t)(0x30ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffff0000ffffull) | 0x2000000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffff0000ffffffffull) | 0xb00000000ull);
    { uint64_t ea = c->sp + 0x30ull; ST8(ea, (uint32_t)c->x[21]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    if ((uint32_t)c->x[9] == 0) goto L_70053159ac;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053159a8ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x9b9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
L_70053159ac:;
    if ((uint32_t)c->x[8] == 0) goto L_70053159bc;
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053159bcull; f_700531c510(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053159bc:;
    c->x[8] = (uint64_t)(0ull | c->x[19]);
    if (((c->x[19] >> 63) & 1) != 0) goto L_70053159e4;
    c->x[0] = (uint64_t)(c->x[20] + 0x980ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053159d4ull; f_700531c4f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[9] = (uint32_t)(0xffffffull);
    c->x[8] = (uint64_t)((COND_NE(c)) ? c->x[8] : (uint64_t)(c->x[9]));
L_70053159e4:;
    { uint64_t ea = c->x[20] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] & 0xffffffull);
    c->x[11] = (uint32_t)(0xc0ull);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10] * c->x[11]);
    { uint64_t ea = c->x[10] + 0x54ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 1) & 1) == 0) goto L_7005315be4;
    { uint64_t ea = c->x[10] + 0x80ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[28] = (uint64_t)(LD64(0x700531cf08ull));
    { uint64_t ea = c->x[20] + 0x150ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[12] + (c->x[11] << 7));
    { uint64_t ea = c->x[23] + 0x0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[28] + 0xba8ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
    { uint64_t ea = c->x[28] + 0x150ull; c->v[8] = LD64(ea); }
    VW(vu8, 1, 3, SHUF(VREG(vu8, 1), VREG(vu8, 1), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 3), VQ(vf32, 0, 3), (vf32){});
    VW(vu8, 0, 3, SHUF(VREG(vu8, 1), VREG(vu8, 3), 4, 5, 6, 7, 16, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0));
    ((sa64 *)&c->v[3])[1] = ((sa64 *)&c->v[1])[0];
    VW(vu32, 0, 0, SHUF(VREG(vu32, 0), VREG(vu32, 0), 1, 1, 1, 1));
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 0), VQ(vf32, 0, 8), (vf32){});
    { uint64_t ea = c->x[23] + 0x70ull; c->v[0] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 1, 5, VREG(vf32, 1), VREG(vf32, 0), (vf32){});
    VW(vu32, 0, 6, SHUF(VREG(vu32, 5), VREG(vu32, 5), 2, 2, 2, 2));
    SV_FOP_S(FOP_ADD, 0, 5, SHUF(VQ(vf32, 0, 5), VQ(vf32, 0, 5), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 5), VQ(vf32, 0, 5), 1, 5, 2, 2), (vf32){});
    ((sa64 *)&c->v[2])[1] = ((sa64 *)&c->v[2])[0];
    SV_FOP_S(FOP_MUL, 1, 7, VREG(vf32, 0), VREG(vf32, 3), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 5, VQ(vf32, 0, 5), VQ(vf32, 0, 6), (vf32){});
    VW(vu8, 1, 6, SHUF(VREG(vu8, 0), VREG(vu8, 0), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 0), VREG(vf32, 2), (vf32){});
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 4, 5, 6, 7, 16, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0));
    ((sa64 *)&c->v[5])[1] = ((sa64 *)&c->v[5])[0];
    ((sa64 *)&c->v[6])[1] = ((sa64 *)&c->v[0])[0];
    SV_FOP_S(FOP_MADD, 1, 4, VREG(vf32, 4), VREG(vf32, 1), VREG(vf32, 5));
    SV_FOP_S(FOP_MUL, 1, 6, VREG(vf32, 1), VREG(vf32, 6), (vf32){});
    SV_FOP_S(FOP_SUB, 1, 5, VREG(vf32, 6), VREG(vf32, 7), (vf32){});
    { uint64_t ea = c->x[28] + 0x260ull; c->v[7] = LD128(ea); }
    VW(vu8, 1, 6, SHUF(VREG(vu8, 5), VREG(vu8, 5), 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19));
    ((sa32 *)&c->v[5])[1] = (uint32_t)0ull;
    ((sa64 *)&c->v[6])[1] = ((sa64 *)&c->v[5])[0];
    SV_FOP_S(FOP_MADD, 1, 4, VREG(vf32, 4), VREG(vf32, 6), vsplat_s(VREG(vf32, 1), 3, 1));
    VW(vu64, 1, 6, SHUF(VREG(vu64, 7), VREG(vu64, 7), 0, 0));
    SV_FOP_S(FOP_ADD, 1, 5, VREG(vf32, 4), VREG(vf32, 4), (vf32){});
    { uint64_t ea = c->x[22] + 0x0ull; c->v[4] = LD128(ea); }
    SV_FOP_S(FOP_ABD, 1, 5, VREG(vf32, 4), VREG(vf32, 5), (vf32){});
    VW(vu32, 1, 5, vcmp_s(c, 1, VREG(vf32, 6), VREG(vf32, 5)));
    VW(vu32, 1, 6, SHUF(VREG(vu32, 5), VREG(vu32, 5), 1, 1, 1, 1));
    VW(vu64, 1, 6, VREG(vu64, 6) & VREG(vu64, 5));
    VW(vu32, 1, 5, SHUF(VREG(vu32, 5), VREG(vu32, 5), 2, 2, 2, 2));
    VW(vu64, 1, 5, VREG(vu64, 6) & VREG(vu64, 5));
    c->x[11] = (uint32_t)(VS32(5));
    if ((uint32_t)c->x[11] != 0) goto L_7005315be4;
    c->x[24] = (uint64_t)(c->x[8] & 0xffffffffull);
    { uint64_t ea = c->x[10] + 0x88ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    VW(vu32, 1, 5, SHUF(VREG(vu32, 1), VREG(vu32, 1), 3, 3, 3, 3));
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[7]); }
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005315b10;
    c->x[8] = (uint32_t)(0x9ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[21]);
    if ((uint32_t)c->x[8] != 0) goto L_7005315b10;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005315ae0ull; f_700531c2f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005315be4;
    { uint64_t ea = c->x[23] + 0x0ull; c->v[1] = LD128(ea); }
    VW(vu8, 1, 3, SHUF(VREG(vu8, 1), VREG(vu8, 1), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    { uint64_t ea = c->x[22] + 0x0ull; c->v[4] = LD128(ea); }
    { uint64_t ea = c->x[23] + 0x70ull; c->v[0] = LD128(ea); }
    VW(vu32, 1, 5, SHUF(VREG(vu32, 1), VREG(vu32, 1), 3, 3, 3, 3));
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 3), (vf32){});
    VW(vu8, 0, 3, SHUF(VREG(vu8, 1), VREG(vu8, 3), 4, 5, 6, 7, 16, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0));
    ((sa64 *)&c->v[3])[1] = ((sa64 *)&c->v[1])[0];
    VW(vu32, 0, 2, SHUF(VREG(vu32, 2), VREG(vu32, 2), 1, 1, 1, 1));
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 8), (vf32){});
    ((sa64 *)&c->v[2])[1] = ((sa64 *)&c->v[2])[0];
L_7005315b10:;
    SV_FOP_S(FOP_MUL, 1, 6, VREG(vf32, 1), VREG(vf32, 4), (vf32){});
    VW(vu32, 0, 7, SHUF(VREG(vu32, 6), VREG(vu32, 6), 2, 2, 2, 2));
    SV_FOP_S(FOP_ADD, 0, 6, SHUF(VQ(vf32, 0, 6), VQ(vf32, 0, 6), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 6), VQ(vf32, 0, 6), 1, 5, 2, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 2, VREG(vf32, 4), VREG(vf32, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 4), VREG(vf32, 3), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 6, VQ(vf32, 0, 6), VQ(vf32, 0, 7), (vf32){});
    VW(vu8, 1, 7, SHUF(VREG(vu8, 4), VREG(vu8, 4), 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19));
    ((sa64 *)&c->v[7])[1] = ((sa64 *)&c->v[4])[0];
    ((sa64 *)&c->v[6])[1] = ((sa64 *)&c->v[6])[0];
    SV_FOP_S(FOP_MADD, 1, 2, VREG(vf32, 2), VREG(vf32, 1), VREG(vf32, 6));
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 1), VREG(vf32, 7), (vf32){});
    SV_FOP_S(FOP_SUB, 1, 3, VREG(vf32, 3), VREG(vf32, 4), (vf32){});
    VW(vu8, 1, 4, SHUF(VREG(vu8, 3), VREG(vu8, 3), 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19));
    ((sa32 *)&c->v[3])[1] = (uint32_t)0ull;
    ((sa64 *)&c->v[4])[1] = ((sa64 *)&c->v[3])[0];
    SV_FOP_S(FOP_MADD, 1, 2, VREG(vf32, 2), VREG(vf32, 4), VREG(vf32, 5));
    SV_FOP_S(FOP_ADD, 1, 1, VREG(vf32, 2), VREG(vf32, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 2, VREG(vf32, 1), VREG(vf32, 1), (vf32){});
    VW(vu32, 0, 3, SHUF(VREG(vu32, 2), VREG(vu32, 2), 2, 2, 2, 2));
    SV_FOP_S(FOP_ADD, 0, 2, SHUF(VQ(vf32, 0, 2), VQ(vf32, 0, 2), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 2), VQ(vf32, 0, 2), 1, 5, 2, 2), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 3), (vf32){});
    VW(vu8, 1, 3, SHUF(VREG(vu8, 0), VREG(vu8, 0), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    SV_FOP_S(FOP_MUL, 0, 3, VQ(vf32, 0, 3), VQ(vf32, 0, 3), (vf32){});
    VW(vu32, 0, 3, SHUF(VREG(vu32, 3), VREG(vu32, 3), 1, 1, 1, 1));
    VW(vu32, 0, 3, vcmp_s(c, 1, VQ(vf32, 0, 3), VQ(vf32, 0, 2)));
    VW(vu32, 0, 4, SHUF(VREG(vu32, 3), VREG(vu32, 3), 1, 1, 1, 1));
    VW(vu64, 0, 3, VREG(vu64, 4) | VREG(vu64, 3));
    c->x[8] = (uint32_t)(VS32(3));
    if ((uint32_t)c->x[8] == 0) goto L_7005315b90;
L_7005315b84:;
    ((sa32 *)&c->v[1])[3] = ((sa32 *)&c->v[0])[3];
    { uint64_t ea = c->x[23] + 0x70ull; ST128(ea, c->v[1]); }
    goto L_7005315bbc;
L_7005315b90:;
    c->x[8] = (uint32_t)(VS32(2));
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[8]);
    (void)(logic32(c, (uint32_t)c->x[8] & 0x7fc00000ull));
    if (COND_EQ(c)) goto L_7005315bbc;
    SV_FOP_S(FOP_SQRT, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 2), (vf32){});
    { uint64_t ea = c->x[28] + 0x60ull; c->v[3] = LD128(ea); }
    SV_FOP_S(FOP_DIV, 0, 2, VQ(vf32, 0, 3), VQ(vf32, 0, 2), (vf32){});
    c->x[8] = (uint32_t)(VS32(2));
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[8]);
    (void)(logic32(c, (uint32_t)c->x[8] & 0x7fc00000ull));
    if (COND_NE(c)) goto L_7005315c38;
L_7005315bbc:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    c->x[2] = (uint64_t)(0ull | c->x[23]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[4] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005315bd4ull; f_700531c500(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[20] + 0x750ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005315be4ull; f_700531c508(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005315be4:;
    (void)(adds32(c, (uint32_t)c->x[27], 0x1ull));
    if (COND_EQ(c)) goto L_7005315c14;
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[19] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x0ull);
    c->x[0] = (uint64_t)((c->x[0] & 0xffffffffffff0000ull) | 0x10ull);
    /* hint */
    /* hint */
    { uint64_t ea = c->x[25] + c->x[0]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005315c80;
L_7005315c08:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[19] << 3));
    c->x[9] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[27] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[27] & 0xffffffffull));
    { uint64_t ea = c->x[8] + 0x3e8ull; ST64(ea, c->x[9]); }
L_7005315c14:;
    { uint64_t ea = c->sp + 0x40ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xb0ull);
    c->pc = 0; return;
L_7005315c38:;
    { uint64_t ea = c->x[28] + 0x70ull; c->v[4] = LD64(ea); }
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), vsplat_s(VREG(vf32, 0), 3, 0), (vf32){});
    { uint64_t ea = c->sp + 0x0ull; c->v[5] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 0, 4, VQ(vf32, 0, 5), VQ(vf32, 0, 4), (vf32){});
    SV_FOP_S(FOP_SUB, 0, 3, VQ(vf32, 0, 3), VQ(vf32, 0, 4), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 3), (vf32){});
    ((sa64 *)&c->v[2])[1] = ((sa64 *)&c->v[2])[0];
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 1), VREG(vf32, 2), (vf32){});
    goto L_7005315b84;
L_7005315c5c:;
    c->x[30] = 0x7005315c60ull; f_700531c4f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0x0ull);
    c->x[0] = (uint64_t)((c->x[0] & 0xffffffffffff0000ull) | 0x10ull);
    /* hint */
    /* hint */
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + c->x[0]; ST64(ea, c->x[8]); }
    goto L_700531591c;
L_7005315c80:;
    c->x[30] = 0x7005315c84ull; f_700531c4f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0x0ull);
    c->x[0] = (uint64_t)((c->x[0] & 0xffffffffffff0000ull) | 0x10ull);
    /* hint */
    /* hint */
    { uint64_t ea = c->x[25] + c->x[0]; ST64(ea, c->x[8]); }
    goto L_7005315c08;
}

void f_7005316418(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xd0ull);
    { uint64_t ea = c->sp + 0x90ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 0xa8ull; ST64(ea, c->x[23]); }
    { uint64_t ea = c->sp + 152; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x98ull);
    c->x[20] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x1f1ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x1ecull; ST8(ea, 0u); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531644cull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0x3f80000000000000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x18cull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x170ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0x1efull);
    { uint64_t ea = c->x[19] + 0x1edull; ST8(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x0ull; ST16(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[19] + 0x1e9ull);
    { uint64_t ea = c->x[19] + 0x1e8ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x0ull; ST16(ea, 0u); }
    c->x[8] = (uint64_t)(0x7fc0000000000000ull);
    { uint64_t ea = c->x[19] + 288; ST64(ea, 0ull); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->x[19] + 0x144ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316488ull; f_7005316eb0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005316490ull; f_700531c558(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053164a4;
    c->x[8] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[29] - 0xcull);
    { uint64_t ea = c->x[29] - 12; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x70053164a4ull; f_700531c5f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053164a4:;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053164acull; f_700531c618(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005316788;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053164bcull; f_700531c440(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_70053167a4;
L_70053164c0:;
    { uint64_t ea = c->x[21] + 124; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint64_t)(c->x[21] + 0x7cull);
    fp_op_s(c, FOP_MUL, 2, 1, 1);
    { uint64_t ea = c->x[21] + 0x84ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    { uint64_t ea = c->x[19] + 0x108ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0xf4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x9ull));
    if (COND_EQ(c)) goto L_7005316500;
    { uint64_t ea = c->x[21] + 0xd9ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 3) & 1) != 0) goto L_7005316500;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x2b4ull);
    goto L_7005316504;
L_7005316500:;
    c->x[9] = (uint64_t)(c->x[21] + 0xa0ull);
L_7005316504:;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[19]);
    c->v[3] = 0x0ull;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->v[4] = 0x3400000034000000ull;
    { uint64_t ea = c->x[22] + 240; ST64(ea, c->x[9]); c->x[22] = ea; }
    { uint64_t ea = c->x[22] + 100; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[0] = (uint64_t)(c->x[22] + 0x24ull);
    fp_op_s(c, FOP_SUB, 3, 3, 1);
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    c->v[4] = 0xb4000000b4000000ull;
    c->nzcv = COND_LS(c) ? cmp_s(c, VSF32(3), VSF32(4)) : 0x80000000ull;
    c->v[0] = COND_GE(c) ? VS32(0) : VS32(2);
    { uint64_t ea = c->x[22] + 28; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 36; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x2cull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[30] = 0x7005316554ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_NE(c)) goto L_7005316584;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[30] = 0x7005316568ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005316584;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[8] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x700531657cull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x7005316584ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005316584:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531658cull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_70053169fc;
L_7005316590:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70053165b8ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053165d8;
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053165c8ull; f_700531c4a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_7005316b60;
L_70053165cc:;
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053165d8ull; f_700531c3b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053165d8:;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(LD64(0x700531cf30ull));
    c->x[9] = (uint64_t)(c->x[9] + 0x738ull);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[22] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053165f8ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005316a60;
L_70053165fc:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005316604ull; f_700531c468(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531661c;
    c->x[8] = (uint64_t)(c->x[0] + 0x20ull);
L_700531660c:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] | 0x8000ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_700531660c;
L_700531661c:;
    c->x[8] = (uint32_t)(0x3f800000ull);
    { uint64_t ea = c->x[19] + 0x178ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x180ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x188ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005316634;
    { uint64_t ea = c->x[19] + 0x188ull; ST8(ea, 0u); }
L_7005316634:;
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 1) & 1) != 0) goto L_7005316ac0;
L_700531663c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005316648ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[22] = (uint32_t)(0xbf800000ull);
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005316b08;
L_7005316650:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[6] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[1] + 0x1d0ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[1] + 0x1c0ull);
    c->x[5] = (uint64_t)(0ull | c->x[3]);
    c->x[30] = 0x7005316670ull; f_700531c388(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x28ull);
    c->x[6] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[1] + 0x1d0ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[1] + 0x1c0ull);
    c->x[5] = (uint64_t)(0ull | c->x[3]);
    c->x[4] = (uint64_t)(0ull | c->x[2]);
    c->x[30] = 0x7005316690ull; f_700531c388(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 48; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
L_700531669c:;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_NE(c)) goto L_70053166b0;
    { uint64_t ea = c->x[29] - 56; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[23])));
    if (COND_EQ(c)) goto L_70053166fc;
L_70053166b0:;
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x70053166b8ull; f_700531c390(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053166c0ull; f_700531c418(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053166d4ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x448ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] != 0) goto L_70053166f0;
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x70053166e8ull; f_700531c398(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 48; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    goto L_700531669c;
L_70053166f0:;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053166fcull; f_700531c730(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053166fc:;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[29] - 64; ST32(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316718ull; f_700531c580(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005316738;
    { uint64_t ea = c->x[29] - 64; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_HI(c)) goto L_7005316738;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x1eeull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_700531673c;
L_7005316738:;
    { uint64_t ea = c->x[19] + 0x1eeull; ST8(ea, 0u); }
L_700531673c:;
    c->x[8] = (uint64_t)(c->sp + 0x28ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316748ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316770;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531675c;
    { uint64_t ea = c->x[8] + 0x120ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_700531675c:;
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005316768ull; f_700531c2e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x174ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 25) & 1) != 0) goto L_7005316b7c;
L_7005316770:;
    c->x[0] = (uint64_t)(c->sp + 0x28ull);
    c->x[30] = 0x7005316778ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0x43960000ull);
    { uint64_t ea = c->x[19] + 0x1d8ull; ST32(ea, (uint32_t)c->x[22]); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x4396000000000000ull);
    { uint64_t ea = c->x[19] + 0x1d0ull; ST64(ea, c->x[8]); }
L_7005316788:;
    { uint64_t ea = c->sp + 0x90ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 152; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xd0ull);
    c->pc = 0; return;
L_70053167a4:;
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053167b4ull; f_7005316fcc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531ce80ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xe55ull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x70053167d4ull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[8] = 0x0ull;
    c->v[0] = 0x0ull;
    if (((c->x[0] >> 31) & 1) != 0) goto L_70053167f8;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_70053167f8;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053167f8;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[0] = LD32(ea); }
L_70053167f8:;
    c->x[8] = (uint64_t)(LD64(0x700531ce48ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x27eull);
    { uint64_t ea = c->x[19] + 0x154ull; ST32(ea, VS32(0)); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700531681cull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 31) & 1) != 0) goto L_7005316838;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_7005316838;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316838;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[8] = LD32(ea); }
L_7005316838:;
    { uint64_t ea = c->x[19] + 0x174ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce60ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x79aull);
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    fp_op_s(c, FOP_MUL, 0, 8, 0);
    { uint64_t ea = c->x[19] + 0x150ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005316864ull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[8] = 0x0ull;
    c->v[0] = 0x0ull;
    if (((c->x[0] >> 31) & 1) != 0) goto L_7005316888;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_7005316888;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316888;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[0] = LD32(ea); }
L_7005316888:;
    c->x[8] = (uint64_t)(LD64(0x700531ce28ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xea3ull);
    { uint64_t ea = c->x[19] + 0x158ull; ST32(ea, VS32(0)); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x70053168acull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 31) & 1) != 0) goto L_70053168c8;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_70053168c8;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053168c8;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[8] = LD32(ea); }
L_70053168c8:;
    c->x[8] = (uint64_t)(LD64(0x700531ce98ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x813ull);
    { uint64_t ea = c->x[19] + 0x15cull; ST32(ea, VS32(8)); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x70053168ecull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[8] = 0x0ull;
    c->v[0] = 0x0ull;
    if (((c->x[0] >> 31) & 1) != 0) goto L_7005316910;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_7005316910;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316910;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[0] = LD32(ea); }
L_7005316910:;
    c->x[8] = (uint64_t)(LD64(0x700531cea8ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x63cull);
    { uint64_t ea = c->x[19] + 0x160ull; ST32(ea, VS32(0)); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005316934ull; f_700531c4d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 31) & 1) != 0) goto L_7005316950;
    { uint64_t ea = c->x[22] + 0x120ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[0])));
    if (COND_LE(c)) goto L_7005316950;
    { uint64_t ea = c->x[22] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316950;
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2); c->v[8] = LD32(ea); }
L_7005316950:;
    c->x[8] = (uint32_t)(0x44610000ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    { uint64_t ea = c->x[19] + 0x164ull; ST32(ea, 0u); }
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint64_t)(LD64(0x700531ce50ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xfe3ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x16cull; ST32(ea, 0u); }
    c->x[3] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x28ull; ST8(ea, 0u); }
    fp_op_s(c, FOP_DIV, 0, 8, 0);
    { uint64_t ea = c->x[19] + 0x168ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531698cull; f_700531c498(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 31) & 1) != 0) goto L_70053169a0;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053169a0ull; f_700531c478(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053169a0:;
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x600ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316c54;
    { uint64_t ea = c->x[22] + 0x60cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005316c54;
    c->x[10] = (uint32_t)(0x5c9aull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xec2f0000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_70053169cc:;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[13] & 0xffffffffull));
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[13], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005316c48;
    if ((uint32_t)c->x[13] == 0) goto L_7005316c54;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[13] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_70053169cc;
    goto L_7005316c54;
L_70053169fc:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x2cull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x7005316a1cull; f_700531c460(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[1] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005316a28ull; f_700531c458(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint32_t)(0x5ull);
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x7005316a34ull; f_700531c728(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0xf4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x9ull));
    if (COND_EQ(c)) goto L_7005316a48;
    { uint64_t ea = c->x[21] + 0xd9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) != 0) goto L_7005316c34;
L_7005316a48:;
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->x[29] - 64; ST32(ea, (uint32_t)c->x[8]); }
L_7005316a50:;
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005316a5cull; f_7005317080(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316590;
L_7005316a60:;
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    { uint64_t ea = c->x[29] - 48; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[8] + 0x8d0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[29] - 42; ST8(ea, 0u); }
    c->x[23] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[23]); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[29] - 44; ST16(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316a94ull; f_700531c320(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    { uint64_t ea = c->x[8] + 0x8c8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005316ab0ull; f_700531c638(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[23]); }
    c->x[30] = 0x7005316abcull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053165fc;
L_7005316ac0:;
    c->x[22] = (uint64_t)(c->x[21] + 0x38ull);
    c->x[8] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005316ad0ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x7005316ad8ull; f_700531c590(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[0]); }
    if (c->x[0] == 0) goto L_7005316aec;
    c->x[0] = (uint64_t)(c->sp + 0x28ull);
    c->x[30] = 0x7005316ae8ull; f_700531c5c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[22] = (uint64_t)(0ull | c->x[0]);
L_7005316aec:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005316afcull; f_700531c320(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x7005316b04ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531663c;
L_7005316b08:;
    c->x[8] = (uint64_t)(0x42700000ull);
    { uint64_t ea = c->x[19] + 0x198ull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->x[19] + 0x114ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x4270000000000000ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x190ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->x[21] + 0x7cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 64; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    { uint64_t ea = c->x[19] + 0x114ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[21] + 0x80ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    { uint64_t ea = c->x[19] + 0x118ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[21] + 0x84ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    { uint64_t ea = c->x[19] + 0x11cull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005316b5cull; f_7005317080(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316650;
L_7005316b60:;
    c->x[1] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x9dbull);
    c->x[2] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[2] = (uint64_t)(c->x[2] + 0xdc2ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005316b78ull; f_700531c610(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053165cc;
L_7005316b7c:;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] != 0) goto L_7005316c08;
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, 0u); }
L_7005316b8c:;
    c->x[0] = (uint64_t)(c->sp + 0x18ull);
    c->x[30] = 0x7005316b94ull; f_700531c6e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[30] = 0x7005316b98ull; f_700531c6d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005316770;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[30] = 0x7005316bacull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316bbcull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005316e88;
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316bccull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316e80;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316e80;
    { uint64_t ea = c->x[8] + 0x160ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[20]); }
    c->x[30] = 0x7005316becull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[20] == 0) goto L_7005316e88;
    c->x[1] = (uint32_t)(0x17ull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x7005316bfcull; f_700531c5a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[2] = (uint32_t)((COND_LE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005316e8c;
L_7005316c08:;
    c->x[30] = 0x7005316c0cull; f_700531c6e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, 0u); }
    if (c->x[0] == 0) goto L_7005316b8c;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005316c20ull; f_700531c420(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005316b8c;
L_7005316c34:;
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 64; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 56; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005316a50;
L_7005316c48:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    if (((c->x[1] >> 31) & 1) == 0) goto L_7005316e70;
L_7005316c54:;
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[29] - 64; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0x588ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316cbc;
    { uint64_t ea = c->x[22] + 0x594ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005316cbc;
    c->x[10] = (uint32_t)(0x87e0ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x38050000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005316c80:;
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[12], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] == 0) goto L_7005316cbc;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[12] & 0xffffffffull));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005316cb0;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[12] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005316c80;
    goto L_7005316cbc;
L_7005316cb0:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    if (((c->x[1] >> 31) & 1) == 0) goto L_7005316e60;
L_7005316cbc:;
    { uint64_t ea = c->x[22] + 0x1c8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316d0c;
    { uint64_t ea = c->x[22] + 0x1d4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005316d0c;
    c->x[10] = (uint32_t)(0xb652ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x54d0000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005316ce0:;
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[12], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] == 0) goto L_7005316d0c;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[12] & 0xffffffffull));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005316dcc;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[12] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005316ce0;
L_7005316d0c:;
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffdull);
L_7005316d14:;
    { uint64_t ea = c->x[19] + 0x19cull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0x1c8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005316d68;
    { uint64_t ea = c->x[22] + 0x1d4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_7005316d68;
    c->x[11] = (uint32_t)(0xc0e6ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x2bec0000ull);
    c->x[12] = (uint32_t)(udiv32((uint32_t)c->x[11], (uint32_t)c->x[10]));
    c->x[12] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[12] * (uint32_t)c->x[10]);
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[12]);
L_7005316d3c:;
    c->x[14] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[13], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[9] + c->x[14]; uint64_t v = LD32(ea); c->x[14] = (uint64_t)(v); }
    if ((uint32_t)c->x[14] == 0) goto L_7005316d68;
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[13] & 0xffffffffull));
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_7005316e00;
    c->x[14] = (uint32_t)((uint32_t)c->x[13] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[10])));
    c->x[13] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[13] + 1));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_7005316d3c;
L_7005316d68:;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffeull);
L_7005316d6c:;
    { uint64_t ea = c->x[19] + 0x19cull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0x1c8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005316dc0;
    { uint64_t ea = c->x[22] + 0x1d4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_7005316dc0;
    c->x[11] = (uint32_t)(0x5315ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x7b0b0000ull);
    c->x[12] = (uint32_t)(udiv32((uint32_t)c->x[11], (uint32_t)c->x[10]));
    c->x[12] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[12] * (uint32_t)c->x[10]);
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[12]);
L_7005316d94:;
    c->x[14] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[13], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[9] + c->x[14]; uint64_t v = LD32(ea); c->x[14] = (uint64_t)(v); }
    if ((uint32_t)c->x[14] == 0) goto L_7005316dc0;
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[13] & 0xffffffffull));
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_7005316e30;
    c->x[14] = (uint32_t)((uint32_t)c->x[13] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[10])));
    c->x[13] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[13] + 1));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_7005316d94;
L_7005316dc0:;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffbull);
L_7005316dc4:;
    { uint64_t ea = c->x[19] + 0x19cull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_70053164c0;
L_7005316dcc:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 31) & 1) != 0) goto L_7005316d0c;
    { uint64_t ea = c->x[22] + 0x198ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_7005316d0c;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005316d0c;
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfffffffdull);
    c->x[8] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[8] << 1));
    goto L_7005316d14;
L_7005316e00:;
    c->x[9] = (uint64_t)(c->x[9] + (c->x[13] << 3));
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 31) & 1) != 0) goto L_7005316d68;
    { uint64_t ea = c->x[22] + 0x198ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LE(c)) goto L_7005316d68;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005316d68;
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffeull);
    c->x[8] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[8]);
    goto L_7005316d6c;
L_7005316e30:;
    c->x[9] = (uint64_t)(c->x[9] + (c->x[13] << 3));
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 31) & 1) != 0) goto L_7005316dc0;
    { uint64_t ea = c->x[22] + 0x198ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LE(c)) goto L_7005316dc0;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005316dc0;
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffbull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 2));
    goto L_7005316dc4;
L_7005316e60:;
    c->x[2] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005316e6cull; f_700531c360(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316cbc;
L_7005316e70:;
    c->x[2] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005316e7cull; f_700531c6d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316c54;
L_7005316e80:;
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005316e88ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005316e88:;
    c->x[2] = (uint32_t)(0u | 0u);
L_7005316e8c:;
    { uint64_t ea = c->x[29] - 56; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[29] - 40; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[29] - 24; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005316eacull; f_700531c620(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316770;
}

void f_7005318c70(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(10)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    c->v[9] = VS32(1);
    c->v[8] = VS32(0);
    { uint64_t ea = c->x[0] + 0x110ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x108ull; c->v[0] = LD32(ea); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    fp_fma_s(c, 0, 0, 0, 1, 8, 0);
    c->nzcv = cmp_s(c, VSF32(1), 0);
    { uint64_t ea = c->x[0] + 0x108ull; ST32(ea, VS32(0)); }
    if (COND_PL(c)) goto L_7005318d6c;
    { uint64_t ea = c->x[19] + 0x10cull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
L_7005318cb8:;
    { uint64_t ea = c->x[19] + 0x108ull; ST32(ea, VS32(0)); }
L_7005318cbc:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005318cc4ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005318d54;
    { uint64_t ea = c->x[19] + 0x108ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_DIV, 0, 8, 9);
    { uint64_t ea = c->x[19] + 0x114ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x164ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x168ull; c->v[6] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x4ull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[20] = (uint64_t)(c->x[19] + 0x114ull);
    fp_op_s(c, FOP_MUL, 2, 1, 2);
    fp_op_s(c, FOP_MUL, 3, 1, 3);
    fp_op_s(c, FOP_MUL, 1, 1, 4);
    { uint64_t ea = c->x[19] + 0x16cull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 5, 5, 8);
    fp_op_s(c, FOP_MUL, 6, 6, 8);
    fp_op_s(c, FOP_MUL, 4, 4, 8);
    fp_op_s(c, FOP_ADD, 2, 2, 5);
    fp_op_s(c, FOP_ADD, 3, 3, 6);
    fp_op_s(c, FOP_ADD, 1, 1, 4);
    fp_op_s(c, FOP_MUL, 8, 0, 2);
    fp_op_s(c, FOP_MUL, 9, 0, 3);
    fp_op_s(c, FOP_MUL, 10, 0, 1);
    c->v[0] = 0x41f00000ull;
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 2, 9, 0);
    fp_op_s(c, FOP_MUL, 0, 10, 0);
    { uint64_t ea = c->sp + 4; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005318d40ull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x114ull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->x[19] + 0x118ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->x[19] + 0x11cull; ST32(ea, VS32(10)); }
    c->x[30] = 0x7005318d54ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005318d54:;
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 0x10ull; c->v[10] = LD64(ea); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
L_7005318d6c:;
    if (COND_LE(c)) goto L_7005318cbc;
    { uint64_t ea = c->x[19] + 0x10cull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[0] = COND_GT(c) ? VS32(1) : VS32(0);
    goto L_7005318cb8;
}

void f_7005319874(Cpu *c) {
    { uint64_t ea = c->sp - 160; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x1000ull);
    c->sp = (uint64_t)(c->sp - 0x220ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[27] = (uint64_t)(0ull | c->x[2]);
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[9] = (uint64_t)(c->sp + 0x1000ull);
    c->x[2] = (uint64_t)(c->sp + 0x1000ull);
    c->v[11] = VS32(1);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[9] = (uint64_t)(c->x[9] + 0x40ull);
    c->v[9] = VS32(0);
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    { uint64_t ea = c->x[9] + 0x30ull; ST64(ea, c->x[8]); }
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x70ull);
    c->x[23] = (uint64_t)(0ull | c->x[7]);
    c->x[25] = (uint64_t)(0ull | c->x[6]);
    c->x[22] = (uint64_t)(0ull | c->x[5]);
    c->x[24] = (uint64_t)(0ull | c->x[4]);
    c->x[26] = (uint64_t)(0ull | c->x[3]);
    c->x[30] = 0x7005319904ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005319a78;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005319914ull; f_700531c430(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005319a78;
    { uint64_t ea = c->x[19] + 0x108ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 104; ST64(ea, c->x[22]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->x[19] + 0x114ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[2] = LD32(ea); }
    c->v[10] = 0x3f000000ull;
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[23]); }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->x[19] + 0x11cull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 0, 2);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    { uint64_t ea = c->x[29] + 0x60ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1cull; c->v[7] = LD32(ea); }
    { uint64_t ea = c->sp + 0x80ull; ST32(ea, VS32(7)); }
    { uint64_t ea = c->x[22] + 0x28ull; c->v[6] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0x34ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->x[22] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[12] = a; c->v[14] = b; }
    { uint64_t ea = c->x[22] + 0x10ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, VS32(6)); }
    fp_op_s(c, FOP_MUL, 3, 1, 9);
    fp_op_s(c, FOP_MUL, 4, 2, 9);
    fp_op_s(c, FOP_MUL, 5, 0, 9);
    { uint64_t ea = c->x[21] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 0, 4, 4);
    fp_fma_s(c, 0, 0, 0, 3, 3, 0);
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x78ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; ST32(ea, VS32(4)); ST32(ea + 4, VS32(3)); }
    { uint64_t ea = c->sp + 0x3cull; ST32(ea, VS32(5)); }
    fp_fma_s(c, 0, 0, 0, 5, 5, 0);
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    fp_op_s(c, FOP_MINNM, 0, 0, 10);
    fp_op_s(c, FOP_MUL, 1, 7, 0);
    fp_op_s(c, FOP_MUL, 2, 6, 0);
    fp_op_s(c, FOP_MUL, 0, 15, 0);
    fp_op_s(c, FOP_ADD, 13, 12, 1);
    fp_op_s(c, FOP_ADD, 7, 14, 2);
    fp_op_s(c, FOP_ADD, 6, 8, 0);
    fp_op_s(c, FOP_ADD, 0, 3, 13);
    fp_op_s(c, FOP_ADD, 1, 4, 7);
    fp_op_s(c, FOP_ADD, 2, 5, 6);
    if (((c->x[8] >> 2) & 1) == 0) goto L_70053199d0;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x2b4ull; c->v[13] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2b8ull; c->v[7] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2bcull; c->v[6] = LD32(ea); }
L_70053199d0:;
    { uint64_t ea = c->x[22] + 0x38ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x60ull; ST32(ea, VS32(6)); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[25]); }
    { uint64_t ea = c->sp + 0x80ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x88ull; c->v[5] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[27]); }
    { uint64_t ea = c->sp + 0x54ull; ST32(ea, VS32(7)); }
    { uint64_t ea = c->x[19] + 0x1eeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x68ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    fp_fma_s(c, 0, 0, 4, 3, 4, 0);
    fp_fma_s(c, 0, 0, 5, 3, 5, 1);
    fp_fma_s(c, 0, 0, 3, 3, 15, 2);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (COND_NE(c)) (void)subs64(c, c->x[8], 0x0ull); else c->nzcv = 0x40000000ull;
    c->v[6] = COND_EQ(c) ? VS32(0) : VS32(4);
    c->v[0] = COND_EQ(c) ? VS32(1) : VS32(5);
    { uint64_t ea = c->sp + 72; ST32(ea, VS32(6)); ST32(ea + 4, VS32(0)); }
    c->v[0] = COND_EQ(c) ? VS32(2) : VS32(3);
    { uint64_t ea = c->sp + 0x50ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005319a28ull; f_700531c070(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[24]); }
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, VS32(13)); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_NE(c)) goto L_7005319ab4;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005319a44ull; f_700531c070(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_s(c, FOP_MUL, 4, 1, 1);
    fp_fma_s(c, 0, 0, 0, 0, 0, 4);
    { uint64_t ea = c->x[19] + 0x118ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[3] = LD32(ea); }
    c->x[27] = (uint64_t)(0ull | c->x[19]);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_SQRT, 2, 0, 0);
    { uint64_t ea = c->x[19] + 0x114ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 0, 2);
    fp_op_s(c, FOP_MUL, 1, 1, 2);
    fp_op_s(c, FOP_MUL, 2, 3, 2);
    goto L_7005319ab8;
L_7005319a78:;
    c->x[27] = (uint32_t)(0u | 0u);
L_7005319a7c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[27]);
    c->sp = (uint64_t)(c->sp + 0x1000ull);
    c->sp = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; c->sp = ea + 160; }
    c->pc = 0; return;
L_7005319ab4:;
    c->x[27] = (uint64_t)(0ull | c->x[19]);
L_7005319ab8:;
    c->x[9] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->sp + 0x7cull; ST32(ea, VS32(11)); }
    c->x[20] = (uint64_t)(LD64(0x700531cf20ull));
    { uint64_t ea = c->x[9] + 0xd70ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x5cull; ST32(ea, VS32(15)); }
    c->x[24] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[19] = (uint64_t)(c->sp + 0x100ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[9] = (uint64_t)(0xffffffffffffffffull);
    c->x[23] = (uint32_t)(0x181ull);
    c->x[28] = (uint32_t)(0xfff4ffffull);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    fp_op_s(c, FOP_MUL, 1, 1, 3);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, VS32(3)); }
    fp_op_s(c, FOP_MUL, 2, 2, 3);
    fp_op_s(c, FOP_DIV, 3, 11, 9);
    fp_op_s(c, FOP_MUL, 0, 0, 9);
    fp_op_s(c, FOP_MUL, 1, 1, 9);
    fp_op_s(c, FOP_MUL, 2, 2, 9);
    fp_op_s(c, FOP_MUL, 4, 3, 0);
    fp_op_s(c, FOP_MUL, 13, 3, 1);
    fp_op_s(c, FOP_MUL, 11, 3, 2);
    { uint64_t ea = c->sp + 0x80ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x88ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x178ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x990ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[26]); }
    fp_op_s(c, FOP_MUL, 0, 13, 13);
    fp_fma_s(c, 0, 0, 0, 4, 4, 0);
    fp_fma_s(c, 0, 0, 0, 11, 11, 0);
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    fp_op_s(c, FOP_MINNM, 0, 0, 10);
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    fp_op_s(c, FOP_MUL, 2, 2, 0);
    fp_op_s(c, FOP_MUL, 0, 15, 0);
    fp_op_s(c, FOP_ADD, 9, 12, 1);
    fp_op_s(c, FOP_ADD, 15, 14, 2);
    fp_op_s(c, FOP_ADD, 10, 8, 0);
    if (COND_NE(c)) goto L_7005319d10;
    c->x[21] = (uint64_t)(c->sp + 0x100ull);
    c->x[8] = (uint32_t)(0xbf800000ull);
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(4)); }
    c->x[26] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->x[21] + 0x98ull);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, (uint32_t)c->x[25]); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x7cull);
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 72; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[25] = (uint64_t)(0ull | c->x[9]);
    { uint64_t ea = c->sp + 0x120ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[19] + 60; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x138ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x158ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x15cull; ST8(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x88ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x190ull; ST32(ea, (uint32_t)c->x[26]); }
    { uint64_t ea = c->x[19] + 104; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[19] + 120; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x7005319ba8ull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[21] = (uint64_t)(c->x[21] + 0x128ull);
    { uint64_t ea = c->sp + 0x218ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[19] + 312; ST64(ea, c->x[8]); ST64(ea + 8, c->x[25]); }
    c->x[8] = (uint64_t)(c->x[20] + 0x10ull);
    c->x[9] = (uint32_t)(0x11ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x20ull);
    { uint64_t ea = c->x[19] + 296; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(c->x[24] + 0x10ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x214ull; ST32(ea, (uint32_t)c->x[26]); }
    { uint64_t ea = c->sp + 0x194ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x248ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x150ull; ST64(ea, c->x[26]); }
    { uint64_t ea = c->sp + 0x258ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x60ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[19] + 0x170ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x10cull; ST32(ea, VS32(14)); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(15)); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(10)); }
    { uint64_t ea = c->x[19] + 352; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x7005319c14ull; f_70053157d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x230ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[27]);
    c->x[19] = (uint64_t)(0ull | c->x[27]);
    { uint64_t ea = c->sp + 0x234ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfffff000ull) | ((((uint32_t)c->x[9] & 0xfffff000ull) | ((uint32_t)c->x[23] & 0xfffull)) & 0xfffull));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[28]);
    { uint64_t ea = c->sp + 0x234ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x230ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[30] = 0x7005319c38ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->x[29] - 0x5cull);
    c->x[30] = 0x7005319c40ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x5cull);
    c->x[30] = 0x7005319c4cull; f_700531580c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x218ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x184ull; ST32(ea, (uint32_t)c->x[26]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    { uint64_t ea = c->sp + 0x218ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005319c68ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005319ce0;
    { uint64_t ea = c->sp + 0x108ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    { uint64_t ea = c->sp + 0x114ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->sp + 0x10cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x110ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x118ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x11cull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 4);
    { uint64_t ea = c->sp + 0x1070ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_SUB, 0, 3, 5);
    { uint64_t ea = c->sp + 0x124ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 0x128ull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->sp + 0x12cull; c->v[12] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1074ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x1078ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005319cb4ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->sp + 0x1070ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1074ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0xcccull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    { uint64_t ea = c->sp + 0x1078ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 2, 0);
    fp_op_s(c, FOP_MUL, 0, 3, 0);
    fp_op_s(c, FOP_ADD, 9, 8, 1);
    fp_op_s(c, FOP_ADD, 15, 10, 2);
    fp_op_s(c, FOP_ADD, 10, 12, 0);
L_7005319ce0:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0x998ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005319cf8ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x7005319d00ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; c->v[4] = LD32(ea); }
    c->x[23] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD32(ea); c->x[25] = (uint64_t)(v); }
    goto L_7005319d18;
L_7005319d10:;
    c->x[23] = (uint64_t)(0ull | c->x[22]);
    c->x[19] = (uint64_t)(0ull | c->x[27]);
L_7005319d18:;
    c->x[28] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[22] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->x[28] + 0x990ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(c->x[22] + 0x40ull);
    c->x[24] = (uint64_t)(c->sp + 0x100ull);
    if (((c->x[25] >> 0) & 1) == 0) goto L_7005319d8c;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005319d38ull; f_700531c430(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0x54ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005319d44ull; f_700531bfa0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 248; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 0x64ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 0, 4);
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 4);
    { uint64_t ea = c->x[29] - 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_MUL, 0, 0, 13);
    fp_op_s(c, FOP_MUL, 1, 1, 13);
    fp_op_s(c, FOP_ADD, 0, 0, 2);
    { uint64_t ea = c->x[21] + 0x100ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 3);
    { uint64_t ea = c->x[29] - 76; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 2, 4);
    { uint64_t ea = c->x[29] - 84; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_MUL, 2, 2, 13);
    fp_op_s(c, FOP_ADD, 2, 2, 3);
    { uint64_t ea = c->x[29] - 76; ST32(ea, VS32(2)); }
    goto L_7005319dbc;
L_7005319d8c:;
    fp_op_s(c, FOP_ADD, 0, 4, 9);
    fp_op_s(c, FOP_ADD, 1, 13, 15);
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_ADD, 2, 11, 10);
    { uint64_t ea = c->x[29] - 84; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[29] - 76; ST32(ea, VS32(2)); }
    if (((c->x[8] >> 2) & 1) == 0) goto L_7005319db8;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x2b4ull; c->v[9] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2b8ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2bcull; c->v[10] = LD32(ea); }
L_7005319db8:;
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
L_7005319dbc:;
    { uint64_t ea = c->x[19] + 0x1eeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005319df0;
    if (c->x[26] == 0) goto L_7005319df0;
    { uint64_t ea = c->x[23] + 0x38ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x80ull; c->v[4] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 3, 4, 0);
    { uint64_t ea = c->sp + 0x88ull; c->v[4] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 3, 4, 1);
    { uint64_t ea = c->x[29] - 84; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0x5cull; c->v[0] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 3, 0, 2);
    { uint64_t ea = c->x[29] - 76; ST32(ea, VS32(0)); }
L_7005319df0:;
    { uint64_t ea = c->x[19] + 0x144ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    { uint64_t ea = c->x[19] + 0x148ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x14cull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x4ull);
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[25]);
    c->x[20] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] >> 2));
    c->v[9] = COND_VS(c) ? VS32(9) : VS32(0);
    c->v[12] = COND_VS(c) ? VS32(15) : VS32(1);
    c->v[11] = COND_VS(c) ? VS32(10) : VS32(2);
    if (COND_VC(c)) goto L_7005319e30;
    if (((c->x[20] >> 0) & 1) != 0) goto L_7005319e48;
L_7005319e30:;
    { uint64_t ea = c->x[29] - 84; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[19] + 0x144ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[29] - 76; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
L_7005319e48:;
    c->x[27] = (uint64_t)(c->sp + 0x1000ull);
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->x[22] + 0x60ull; ST64(ea, 0ull); }
    c->x[27] = (uint64_t)(c->x[27] + 0x70ull);
    { uint64_t ea = c->x[29] - 104; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0xbf800000ull);
    c->x[25] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->x[27] + 0x98ull);
    { uint64_t ea = c->x[22] + 0x48ull; ST64(ea, 0ull); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x7cull);
    { uint64_t ea = c->x[22] + 0x50ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[22] + 424; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 108; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10a8ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x10c8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + 0x8cull; ST8(ea, 0u); }
    { uint64_t ea = c->x[22] + 0xb8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x1100ull; ST32(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[22] + 120; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 56; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 152; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 168; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x7005319ea8ull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[9] = (uint32_t)(0xffffffffull);
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->x[22] + 0x148ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x1184ull; ST32(ea, (uint32_t)c->x[25]); }
    c->v[15] = 0x3f800000ull;
    c->x[21] = (uint64_t)(c->x[27] + 0x128ull);
    { uint64_t ea = c->sp + 0x1104ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x11b8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + 0x180ull; ST64(ea, c->x[25]); }
    { uint64_t ea = c->sp + 0x11c8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + 360; ST64(ea, c->x[9]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cf20ull));
    { uint64_t ea = c->x[8] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x11ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x90ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[22] + 0x1a0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[22] + 400; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 344; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(c->x[28] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x30ull; ST64(ea, c->x[8]); }
    if (c->x[26] == 0) goto L_700531a1b0;
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x7005319f08ull; f_700531c368(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[14] = 0x0ull;
    if (c->x[0] == 0) goto L_700531a3cc;
    c->x[30] = 0x7005319f14ull; f_700531c718(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531a3cc;
    c->x[26] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[29] - 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[10] = b; }
    { uint64_t ea = c->x[29] - 76; c->v[13] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x1000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x40ull);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005319f34ull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x1048ull; c->v[0] = LD32(ea); }
    c->x[3] = (uint32_t)(0x11ull);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->sp + 0x1058ull; c->v[1] = LD32(ea); }
    c->x[1] = (uint64_t)(0ull | c->x[26]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x1068ull; c->v[2] = LD32(ea); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[5] = (uint32_t)(0x1ull);
    c->x[6] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint32_t)(0x1ull);
    fp_op_s(c, FOP_ADD, 8, 8, 0);
    fp_op_s(c, FOP_ADD, 10, 10, 1);
    fp_op_s(c, FOP_ADD, 13, 13, 2);
    c->x[30] = 0x7005319f70ull; f_700531c480(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x22cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x181ull);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->sp + 0x210ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(11)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x80ull);
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->sp + 0x120ull; ST32(ea, VS32(10)); }
    { uint64_t ea = c->sp + 0x124ull; ST32(ea, VS32(13)); }
    { uint64_t ea = c->sp + 0x214ull; ST32(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->sp + 0x22cull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x228ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfffff000ull) | ((((uint32_t)c->x[9] & 0xfffff000ull) | ((uint32_t)c->x[10] & 0xfffull)) & 0xfffull));
    { uint64_t ea = c->sp + 0x228ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0x2cull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x210ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005319fc0ull; f_700531c400(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531ad18;
    { uint64_t ea = c->sp + 0x164ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->sp + 0x168ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
    c->v[0] = COND_EQ(c) ? VS32(14) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_EQ(c)) goto L_700531b19c;
    c->x[1] = (uint64_t)(c->x[19] + 0x120ull);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x7005319fecull; f_700531c708(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x160ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    if (c->x[26] == 0) goto L_700531b188;
    c->x[8] = (uint64_t)(c->sp + 0xff8ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x700531a014ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[26] + 0x98ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_EQ(c)) goto L_700531b5d4;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    { uint64_t ea = c->x[26] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_700531a028:;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_700531a02c:;
    { uint64_t ea = c->x[24] + 0xf18ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[9])));
    { uint64_t ea = c->sp + 0xff8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0xf38ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[8])));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700531b090;
    c->x[8] = (uint64_t)(c->sp + 0xff8ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x700531a064ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0xf00ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[26] + 0x60ull);
    c->x[14] = (uint32_t)(0x28ull);
    { uint64_t ea = c->sp + 0x1020ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[15] = (uint32_t)(0x18ull);
    c->x[18] = (uint32_t)(0x84ull);
    { uint64_t ea = c->x[24] + 0xf38ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0ull - c->x[11]);
    { uint64_t ea = c->x[24] + 0xf18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0xf28ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(c->x[10] + 0x18ull);
    { uint64_t ea = c->sp + 0xff8ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1008ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
L_700531a098:;
    { uint64_t ea = c->x[26] + 0x98ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[2], 0x2ull));
    if (COND_EQ(c)) goto L_700531a180;
    (void)(subs32(c, (uint32_t)c->x[2], 0x1ull));
    { uint64_t ea = c->x[26] + 0x8ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
L_700531a0ac:;
    c->x[3] = (uint64_t)(0ull | 0ull);
L_700531a0b0:;
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[3])));
    c->x[3] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[1], (uint32_t)((uint32_t)c->x[2])));
    c->x[2] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[2] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[2] : (uint32_t)((uint32_t)c->x[3]));
    if (((c->x[2] >> 0) & 1) == 0) goto L_700531b090;
    c->x[2] = (uint64_t)(c->x[10] + ((uint64_t)(int64_t)(int32_t)c->x[1] << 4));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[2] = (uint64_t)((COND_EQ(c)) ? c->x[2] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[2] + 0x8ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[3] & 0x1ull));
    c->x[3] = (uint64_t)((COND_EQ(c)) ? c->x[15] : (uint64_t)(c->x[14]));
    { uint64_t ea = c->x[2] + c->x[3]; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[2] - 0x5ull);
    (void)(subs32(c, (uint32_t)c->x[2], 0x29ull));
    if (COND_NE(c)) (void)adds32(c, (uint32_t)c->x[3], 0x2ull); else c->nzcv = 0x20000000ull;
    c->x[2] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[25] + 0x0ull; ST8(ea, (uint32_t)c->x[2]); }
    if ((uint32_t)c->x[8] == 0) goto L_700531a140;
L_700531a104:;
    c->x[9] = (uint64_t)(c->x[9] + c->x[11]);
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + c->x[16]);
    (void)(subs64(c, c->x[13], (uint64_t)(c->x[9])));
    { uint64_t ea = c->x[24] + 0xf18ull; ST64(ea, c->x[9]); }
    if (COND_EQ(c)) goto L_700531a198;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] & 0x2ull);
    { uint64_t ea = c->x[2] + 0x4cull; uint64_t v = LD16(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] & (uint32_t)c->x[18]);
    (void)(subs32(c, (uint32_t)c->x[2], 0x80ull));
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[3], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_NE(c)) goto L_700531a104;
    goto L_700531a098;
L_700531a140:;
    c->x[2] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[1] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[1] & 0xffffffffull));
    c->x[1] = (uint32_t)((uint32_t)c->x[1] + 0x1ull);
    c->x[2] = (uint64_t)(c->x[17] + (c->x[2] << 4));
L_700531a14c:;
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[1])));
    { uint64_t ea = c->sp + 0xff8ull; ST32(ea, (uint32_t)c->x[1]); }
    if (COND_EQ(c)) goto L_700531a1a0;
    { uint64_t ea = c->x[2] - 8; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[1] = (uint32_t)((uint32_t)c->x[1] + 0x1ull);
    { uint64_t ea = c->x[3] + 0x4cull; uint64_t v = LD16(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2]; uint64_t v = LD8(ea); c->x[2] = c->x[2] + 16; c->x[4] = (uint64_t)(v); }
    c->x[4] = (uint32_t)((uint32_t)c->x[4] & 0x2ull);
    c->x[3] = (uint32_t)((uint32_t)c->x[3] & 0x4ull);
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | (uint32_t)c->x[4]);
    if ((uint32_t)c->x[3] != 0) goto L_700531a14c;
    c->x[1] = (uint32_t)((uint32_t)c->x[1] - 0x1ull);
    goto L_700531a098;
L_700531a180:;
    { uint64_t ea = c->x[26] + 0x9cull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    if ((uint32_t)c->x[2] == 0) goto L_700531a1a8;
    { uint64_t ea = c->x[26] + 0x74ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint64_t)(c->x[12] - c->x[3]);
    goto L_700531a0b0;
L_700531a198:;
    c->x[9] = (uint64_t)(0ull | c->x[13]);
    goto L_700531a098;
L_700531a1a0:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[0]);
    goto L_700531a098;
L_700531a1a8:;
    { uint64_t ea = c->x[26] + 0xcull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    goto L_700531a0ac;
L_700531a1b0:;
    c->x[8] = (uint32_t)(0x4ull);
    { uint64_t ea = c->x[29] - 84; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xbull);
    { uint64_t ea = c->x[22] + 0x148ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[29] - 76; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x1078ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x107cull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x1080ull; ST32(ea, VS32(11)); }
    { uint64_t ea = c->x[22] + 68; ST64(ea, c->x[9]); }
    c->x[9] = (uint32_t)(0x181ull);
    { uint64_t ea = c->sp + 0x11a0ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x108cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a1ecull; f_70053157d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x11a4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffcffffull);
    { uint64_t ea = c->sp + 0x11a4ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a208ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531a8b4;
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->v[14] = 0x0ull;
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->sp + 0x10acull; c->v[0] = LD32(ea); }
    c->v[0] = COND_EQ(c) ? VS32(14) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_EQ(c)) goto L_700531a3cc;
    { uint64_t ea = c->x[22] + 0x148ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) == 0) goto L_700531a240;
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531a23cull; f_700531c428(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531afbc;
L_700531a240:;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    if (c->x[26] == 0) goto L_700531afbc;
    { uint64_t ea = c->x[26] + 0x140ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfc0ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3c0ull));
    if (COND_NE(c)) goto L_700531afbc;
    { uint64_t ea = c->x[22] + 0x148ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) == 0) goto L_700531a284;
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531a270ull; f_700531c428(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x7fc00000ull);
    c->v[14] = (uint32_t)c->x[8];
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b93c;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    if (c->x[26] == 0) goto L_700531b93c;
L_700531a284:;
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x700531a28cull; f_700531c718(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[25] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700531a294ull; f_700531c530(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[25] == 0) goto L_700531be24;
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531a2acull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531be24;
    c->x[1] = (uint64_t)(c->sp + 0x1000ull);
    c->x[28] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->sp + 0x1048ull; ST32(ea, 0u); }
    c->x[1] = (uint64_t)(c->x[1] + 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[26]);
    { uint64_t ea = c->x[24] + 0xf40ull; ST64(ea, 0ull); }
    c->x[25] = (uint64_t)(c->x[27] + 0x8ull);
    c->x[30] = 0x700531a2d0ull; f_7005314810(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x1078ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1084ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 2, 0);
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x107cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1080ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1088ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    fp_op_s(c, FOP_SUB, 1, 2, 1);
    { uint64_t ea = c->sp + 0x108cull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[25] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_SUB, 2, 4, 3);
    { uint64_t ea = c->x[28] + 0x9cull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(c->x[8] + 0xcull);
    { uint64_t ea = c->sp + 0x10cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(2)); }
    c->x[30] = 0x700531a320ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xff8ull);
    c->x[2] = (uint64_t)(c->sp + 0xc0ull);
    c->x[3] = (uint64_t)(c->sp + 0xb0ull);
    { uint64_t ea = c->sp + 0x1004ull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->sp + 0xc0ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0xb0ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[24] + 0xef8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x1048ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1000ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a350ull; f_700531c6f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)((uint32_t)c->x[0] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CS(c)) goto L_700531be24;
    { uint64_t ea = c->sp + 0xc0ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0xe8ull);
    { uint64_t ea = c->sp + 0x110ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    { uint64_t ea = c->sp + 0x114ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0x10cull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 3, 0, 3);
    fp_op_s(c, FOP_MUL, 0, 0, 2);
    { uint64_t ea = c->sp + 0x100ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 8, 3, 2);
    { uint64_t ea = c->sp + 0x104ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 10, 1, 5);
    { uint64_t ea = c->sp + 0x1040ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1044ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 13, 0, 4);
    { uint64_t ea = c->sp + 0x1048ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 8, 1);
    fp_op_s(c, FOP_SUB, 2, 10, 2);
    fp_op_s(c, FOP_SUB, 0, 13, 0);
    { uint64_t ea = c->sp + 232; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0xf0ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531a3b8ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 232; u128 a = LD32(ea), b = LD32(ea + 4); c->v[14] = a; c->v[15] = b; }
    c->nzcv = cmp_s(c, VSF32(8), VSF32(8));
    { uint64_t ea = c->sp + 0xf0ull; c->v[16] = LD32(ea); }
    if (COND_VC(c)) goto L_700531b98c;
    goto L_700531b93c;
L_700531a3cc:;
    c->x[25] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
L_700531a3d8:;
    c->v[8] = 0x0ull;
L_700531a3dc:;
    c->x[28] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[28] + 0x998ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
L_700531a3e4:;
    c->x[8] = (uint64_t)(c->x[28] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[22] + 0x30ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531a3f4ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531a400ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1eeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531a604;
L_700531a408:;
    c->x[21] = (uint64_t)(c->sp + 0x100ull);
    c->x[8] = (uint32_t)(0xbf800000ull);
    { uint64_t ea = c->x[24] + 0x30ull; ST64(ea, 0ull); }
    c->x[26] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->x[21] + 0x98ull);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, 0ull); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x7cull);
    { uint64_t ea = c->sp + 0x120ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[24] + 72; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[24] + 60; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x138ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x158ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x15cull; ST8(ea, 0u); }
    { uint64_t ea = c->x[24] + 0x88ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x190ull; ST32(ea, (uint32_t)c->x[26]); }
    { uint64_t ea = c->x[24] + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[24] + 104; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[24] + 120; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x700531a458ull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[9] = (uint32_t)(0xffffffffull);
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->sp + 0x218ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x214ull; ST32(ea, (uint32_t)c->x[26]); }
    c->x[21] = (uint64_t)(c->x[21] + 0x128ull);
    { uint64_t ea = c->sp + 0x194ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x248ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[24] + 0x150ull; ST64(ea, c->x[26]); }
    { uint64_t ea = c->sp + 0x258ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[24] + 312; ST64(ea, c->x[9]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cf20ull));
    { uint64_t ea = c->x[8] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x11ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x60ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[24] + 0x170ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[24] + 352; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[24] + 296; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0x990ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    if (((c->x[20] >> 0) & 1) != 0) goto L_700531a50c;
    { uint64_t ea = c->x[29] - 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->x[29] - 76; c->v[2] = LD32(ea); }
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    fp_op_s(c, FOP_SUB, 1, 12, 1);
    fp_op_s(c, FOP_SUB, 0, 9, 0);
    { uint64_t ea = c->sp + 0x1074ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x1070ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_SUB, 0, 11, 2);
    { uint64_t ea = c->sp + 0x1078ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531a4e0ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->sp + 0x1070ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1074ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0xcccull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    { uint64_t ea = c->sp + 0x1078ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 2, 0);
    fp_op_s(c, FOP_MUL, 0, 3, 0);
    fp_op_s(c, FOP_ADD, 9, 9, 1);
    fp_op_s(c, FOP_ADD, 12, 12, 2);
    fp_op_s(c, FOP_ADD, 11, 11, 0);
L_700531a50c:;
    { uint64_t ea = c->x[29] - 84; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x20ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x10cull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(11)); }
    { uint64_t ea = c->x[24] + 20; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[29] - 76; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a538ull; f_70053157d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x230ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x181ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x234ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfffff000ull) | ((((uint32_t)c->x[9] & 0xfffff000ull) | ((uint32_t)c->x[10] & 0xfffull)) & 0xfffull));
    { uint64_t ea = c->sp + 0x230ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0xfff4ffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x234ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a560ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xfd8ull);
    c->x[30] = 0x700531a568ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xfd8ull);
    c->x[30] = 0x700531a574ull; f_700531580c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x218ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x184ull; ST32(ea, (uint32_t)c->x[26]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    { uint64_t ea = c->sp + 0x218ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a590ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD32(ea); c->x[20] = (uint64_t)(v); }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531a918;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x124ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0x128ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x12cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531a8c8;
    { uint64_t ea = c->x[19] + 0x128ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 5, 11, 0);
    fp_op_s(c, FOP_SUB, 4, 11, 4);
    { uint64_t ea = c->x[19] + 0x120ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 3, 9, 3);
    fp_op_s(c, FOP_MUL, 6, 5, 5);
    fp_op_s(c, FOP_MUL, 7, 4, 4);
    fp_op_s(c, FOP_SUB, 4, 9, 2);
    fp_fma_s(c, 0, 0, 3, 3, 3, 7);
    fp_fma_s(c, 0, 0, 4, 4, 4, 6);
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    if (COND_GE(c)) goto L_700531ad90;
    c->x[8] = (uint64_t)(c->x[19] + 0x120ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x120ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[19] + 0x124ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0x128ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0x1b8ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[29] - 96; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700531a914;
L_700531a604:;
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_700531a408;
    c->x[30] = 0x700531a610ull; f_700531c368(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531b428;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700531a61cull; f_700531c718(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531b428;
    c->x[28] = (uint64_t)(0ull | c->x[0]);
    c->x[3] = (uint32_t)(0x11ull);
    { uint64_t ea = c->sp + 0x5cull; ST32(ea, VS32(14)); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(0ull | c->x[28]);
    { uint64_t ea = c->sp + 0x80ull; ST32(ea, VS32(15)); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[5] = (uint32_t)(0x1ull);
    c->x[6] = (uint64_t)(0ull | 0ull);
    c->x[20] = (uint32_t)(0x1ull);
    c->x[30] = 0x700531a650ull; f_700531c480(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[0] = b; }
    c->x[1] = (uint64_t)(c->sp + 0xff8ull);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[29] - 76; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531a66cull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0xffffffff7f7fffffull);
    c->x[2] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->sp + 0x1000ull; c->v[15] = LD32(ea); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x7f7f000000000000ull);
    { uint64_t ea = c->sp + 0x1010ull; c->v[13] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->x[24] + 0xf40ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0xffffffff7f7fffffull);
    { uint64_t ea = c->sp + 0x1020ull; c->v[14] = LD32(ea); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0xff7f000000000000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[28]);
    { uint64_t ea = c->x[24] + 0xf48ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0ull | 0xff7fffffff7fffffull);
    { uint64_t ea = c->x[24] + 0xf50ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[2] + 0x88ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[30] = 0x700531a6b0ull; f_700531c438(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x1048ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(13)); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_PL(c)) goto L_700531b1b0;
    fp_op_s(c, FOP_MUL, 1, 15, 0);
    fp_op_s(c, FOP_MUL, 2, 13, 0);
    c->x[26] = (uint64_t)(0ull | c->x[25]);
    fp_op_s(c, FOP_MUL, 0, 14, 0);
    c->x[25] = (uint64_t)(c->sp + 0x1000ull);
    c->x[25] = (uint64_t)(c->x[25] + 0x70ull);
    c->x[8] = (uint32_t)(0xbf800000ull);
    c->x[0] = (uint64_t)(c->x[25] + 0x98ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x7cull);
    { uint64_t ea = c->sp + 0; ST32(ea, VS32(10)); ST32(ea + 4, VS32(8)); }
    { uint64_t ea = c->x[22] + 0x60ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[22] + 120; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 0x50ull; ST8(ea, 0u); }
    fp_op_s(c, FOP_SUB, 8, 9, 1);
    fp_op_s(c, FOP_SUB, 13, 12, 2);
    fp_op_s(c, FOP_SUB, 10, 11, 0);
    { uint64_t ea = c->x[22] + 108; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10a8ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x10c8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + 0x8cull; ST8(ea, 0u); }
    { uint64_t ea = c->x[22] + 0xb8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x1100ull; ST32(ea, (uint32_t)c->x[20]); }
    { uint64_t ea = c->x[22] + 152; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[22] + 168; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x700531a728ull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[9] = (uint32_t)(0xffffffffull);
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->x[22] + 0x148ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x1184ull; ST32(ea, (uint32_t)c->x[20]); }
    c->x[28] = (uint64_t)(c->x[25] + 0x128ull);
    c->x[0] = (uint64_t)(0ull | c->x[28]);
    { uint64_t ea = c->sp + 0x1104ull; ST32(ea, 0u); }
    c->x[1] = (uint32_t)(0x20ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + 360; ST64(ea, c->x[9]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cf20ull));
    c->x[9] = (uint32_t)(0x11ull);
    { uint64_t ea = c->sp + 0x11b8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + 0x180ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->sp + 0x11c8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x90ull; ST64(ea, c->x[28]); }
    { uint64_t ea = c->x[22] + 0x1a0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[22] + 344; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[22] + 400; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[8] + 0x990ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x1078ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x107cull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x1080ull; ST32(ea, VS32(11)); }
    { uint64_t ea = c->sp + 0x1084ull; ST32(ea, VS32(8)); }
    { uint64_t ea = c->sp + 0x1088ull; ST32(ea, VS32(13)); }
    { uint64_t ea = c->sp + 0x108cull; ST32(ea, VS32(10)); }
    { uint64_t ea = c->x[22] + 0x30ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531a7a8ull; f_70053157d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x11a0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x181ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x11a4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfffff000ull) | ((((uint32_t)c->x[9] & 0xfffff000ull) | ((uint32_t)c->x[10] & 0xfffull)) & 0xfffull));
    { uint64_t ea = c->sp + 0x11a0ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0xfff4ffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x11a4ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a7d0ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xff0ull);
    c->x[30] = 0x700531a7d8ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[1] = (uint64_t)(c->sp + 0xff0ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531a7e8ull; f_700531580c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x148ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    { uint64_t ea = c->sp + 0x10f4ull; ST32(ea, (uint32_t)c->x[20]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    { uint64_t ea = c->x[22] + 0x148ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531a808ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531a874;
    { uint64_t ea = c->sp + 0x1078ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0xe8ull);
    { uint64_t ea = c->sp + 0x107cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1084ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->sp + 0x1088ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1080ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108cull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 4);
    { uint64_t ea = c->sp + 232; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_SUB, 0, 3, 5);
    { uint64_t ea = c->sp + 0x1094ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1098ull; c->v[9] = LD32(ea); }
    { uint64_t ea = c->sp + 0x109cull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->sp + 0xf0ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531a84cull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->sp + 232; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    { uint64_t ea = c->x[8] + 0xcccull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    { uint64_t ea = c->sp + 0xf0ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 2, 0);
    fp_op_s(c, FOP_MUL, 0, 3, 0);
    fp_op_s(c, FOP_ADD, 8, 8, 1);
    fp_op_s(c, FOP_ADD, 13, 9, 2);
    fp_op_s(c, FOP_ADD, 10, 10, 0);
L_700531a874:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(0ull | c->x[28]);
    { uint64_t ea = c->x[8] + 0x998ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x30ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531a88cull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531a898ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[9] = VS32(8);
    c->v[12] = VS32(13);
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
    c->v[11] = VS32(10);
    { uint64_t ea = c->sp + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[8] = b; }
    c->x[25] = (uint64_t)(0ull | c->x[26]);
    goto L_700531b1b4;
L_700531a8b4:;
    c->x[25] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
    c->x[27] = (uint32_t)(0u | 0u);
    c->v[14] = 0x0ull;
    goto L_700531a3d8;
L_700531a8c8:;
    { uint64_t ea = c->sp + 0x130ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x120ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[19] + 0x124ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x134ull; c->v[15] = LD32(ea); }
L_700531a8d8:;
    { uint64_t ea = c->sp + 0x148ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x128ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x14cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 120; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[24] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x138ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0x1b0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x218ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) == 0) goto L_700531a908;
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531a904ull; f_700531c428(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b040;
L_700531a908:;
    { uint64_t ea = c->x[24] + 0x170ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
L_700531a910:;
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
L_700531a914:;
    c->x[27] = (uint32_t)(0x1ull);
L_700531a918:;
    c->x[8] = (uint64_t)(c->x[28] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531a928ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531a930ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531a930:;
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[1] = (uint64_t)(LD64(0x700531cef8ull));
    { uint64_t ea = c->sp + 0x1050ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->x[8] + 0x8d0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x16ull; ST8(ea, 0u); }
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[28] = (uint32_t)((uint32_t)c->x[20] & 0x3full);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[22] + 0; ST64(ea, c->x[8]); ST64(ea + 8, 0ull); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x1054ull; ST16(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x7a0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x700531a970ull; f_700531c320(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[20] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[20] + 0xfd0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0x1eeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700531ada8;
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_700531ada8;
    c->x[30] = 0x700531a994ull; f_700531c368(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531aa50;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[25]);
    c->x[30] = 0x700531a9a4ull; f_700531c718(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531aa4c;
    c->x[25] = (uint64_t)(0ull | c->x[0]);
    c->x[3] = (uint32_t)(0x17ull);
    c->v[11] = VS32(8);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(0ull | c->x[25]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[5] = (uint32_t)(0x1ull);
    c->x[6] = (uint64_t)(0ull | 0ull);
    c->x[26] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531a9d4ull; f_700531c528(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0xff8ull);
    c->x[30] = 0x700531a9e0ull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0xffffffff7f7fffffull);
    c->x[9] = (uint64_t)(0xffffffff7f7fffffull);
    { uint64_t ea = c->sp + 0x1000ull; c->v[9] = LD32(ea); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x7f7f000000000000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffffull) | 0xff7f000000000000ull);
    { uint64_t ea = c->sp + 0x1010ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 232; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(0ull | 0xff7fffffff7fffffull);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[8]); }
    c->x[2] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->sp + 0x1020ull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->x[2] + 0x88ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0xe8ull);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    c->x[30] = 0x700531aa1cull; f_700531c438(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0xf0ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_PL(c)) goto L_700531ab28;
    fp_op_s(c, FOP_MUL, 1, 9, 0);
    { uint64_t ea = c->sp + 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[2] = b; }
    fp_op_s(c, FOP_SUB, 1, 2, 1);
    fp_op_s(c, FOP_MUL, 2, 8, 0);
    fp_op_s(c, FOP_MUL, 0, 10, 0);
    fp_op_s(c, FOP_SUB, 5, 5, 2);
    { uint64_t ea = c->sp + 0x60ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 2, 0);
    goto L_700531ab30;
L_700531aa4c:;
    c->x[25] = (uint64_t)(0ull | c->x[20]);
L_700531aa50:;
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x70ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531b430;
L_700531aa5c:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
L_700531aa64:;
    { uint64_t ea = c->sp + 0x88ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531ab08;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x700531aa74ull; f_700531c558(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531ab08;
    c->x[8] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->sp + 0x8cull);
    { uint64_t ea = c->sp + 0x8cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700531aa8cull; f_700531c5f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x168ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x148ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[24] + 56; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x700531aaa0ull; f_700531c430(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 104; c->v[0] = LD32(ea); }
    c->x[8] = (uint64_t)(c->x[19] + 0x120ull);
    c->x[9] = (uint64_t)(c->x[29] - 0x68ull);
    c->x[11] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x160ull; ST8(ea, (uint32_t)c->x[11]); }
    c->x[1] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->x[24] + 40; ST64(ea, c->x[0]); ST64(ea + 8, c->x[25]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x10cull; ST32(ea, VS32(14)); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    { uint64_t ea = c->sp + 0x44ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(15)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(8)); }
    c->x[8] = (uint64_t)((COND_VC(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    { uint64_t ea = c->x[22] + 424; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[9] = (uint64_t)(a); c->x[10] = (uint64_t)(b); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x40ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[24] + 80; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x3cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x120ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531ab08ull; f_700531c600(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531ab08:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->x[8] + 0x8d0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[22] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531ab24ull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005319a7c;
L_700531ab28:;
    { uint64_t ea = c->sp + 0x60ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[1] = b; }
L_700531ab30:;
    { uint64_t ea = c->sp + 72; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x50ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->sp + 0x210ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_ADD, 3, 3, 8);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0xcull);
    fp_op_s(c, FOP_ADD, 2, 2, 9);
    fp_op_s(c, FOP_ADD, 4, 4, 10);
    { uint64_t ea = c->sp + 0x210ull; ST16(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x120ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x124ull; ST32(ea, VS32(4)); }
    c->x[30] = 0x700531ab70ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xe0ull);
    c->x[30] = 0x700531ab78ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xe0ull);
    c->x[30] = 0x700531ab84ull; f_700531c358(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x228ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffffc0ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[28]);
    { uint64_t ea = c->sp + 0x228ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0xd8ull);
    c->x[30] = 0x700531aba0ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xd8ull);
    c->x[30] = 0x700531abacull; f_700531c700(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->x[26] + 0x12cull);
    c->x[9] = (uint64_t)(0xffffffffff3fffffull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531abc0ull; f_700531c400(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[25] = (uint64_t)(0ull | c->x[20]);
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531acac;
    { uint64_t ea = c->x[24] + 0x158ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->v[8] = VS32(11);
    if (c->x[0] == 0) goto L_700531aca4;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531ac14;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531ac14;
    { uint64_t ea = c->x[0] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531abec:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0x2ull);
    { uint64_t ea = c->x[10] + 0x4cull; uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x4ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | (uint32_t)c->x[11]);
    if ((uint32_t)c->x[10] == 0) goto L_700531b04c;
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700531abec;
L_700531ac14:;
    { uint64_t ea = c->x[0] + 0x9cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531b46c;
    { uint64_t ea = c->x[0] + 0x70ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531aca4;
    { uint64_t ea = c->x[0] + 0x74ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[0] + 0x60ull);
    c->x[9] = (uint64_t)(c->x[11] - c->x[10]);
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_700531ac7c;
    c->x[11] = (uint64_t)(0ull - c->x[10]);
    c->x[12] = (uint64_t)(c->x[12] - c->x[10]);
    c->x[13] = (uint32_t)(0x84ull);
L_700531ac48:;
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    c->x[15] = (uint32_t)((uint32_t)c->x[15] & 0x2ull);
    { uint64_t ea = c->x[14] + 0x4cull; uint64_t v = LD16(ea); c->x[14] = (uint64_t)(v); }
    c->x[14] = (uint32_t)((uint32_t)c->x[14] & (uint32_t)c->x[13]);
    (void)(subs32(c, (uint32_t)c->x[14], 0x80ull));
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[15], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_700531b9f0;
    c->x[12] = (uint64_t)(c->x[12] + c->x[10]);
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + c->x[11]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700531ac48;
L_700531ac7c:;
    c->x[10] = (uint32_t)(0u | 0u);
    c->x[11] = (uint32_t)(0u | 0u);
    c->x[12] = (uint64_t)(0ull | c->x[9]);
L_700531ac88:;
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    c->x[10] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    if (((c->x[8] >> 0) & 1) == 0) goto L_700531b04c;
L_700531aca4:;
    c->x[20] = (uint32_t)(0x1ull);
    goto L_700531acb4;
L_700531acac:;
    c->x[20] = (uint32_t)(0x1ull);
    c->v[8] = VS32(11);
L_700531acb4:;
    c->x[8] = (uint64_t)(LD64(0x700531cef0ull));
    c->x[9] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->x[8] + 0x980ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x9c0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x168ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[9] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x160ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531ace4ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x168ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->x[8] + 0x9b8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(c->x[8] + 0x120ull);
    c->x[30] = 0x700531ad04ull; f_700531bef8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531ad0cull; f_700531c340(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[20] >> 0) & 1) != 0) goto L_700531aa50;
L_700531ad10:;
    c->x[27] = (uint32_t)(0u | 0u);
    goto L_700531ab08;
L_700531ad18:;
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
    c->x[25] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
    c->x[27] = (uint32_t)(0u | 0u);
    c->v[8] = 0x0ull;
L_700531ad2c:;
    c->x[28] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[26] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->x[28] + 0x998ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
L_700531ad38:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xe30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xe38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x170ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[9] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x168ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531ad68ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x170ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->x[26] + 0x120ull);
    { uint64_t ea = c->x[8] + 0xe50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531ad84ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531ad8cull; f_700531c340(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531a3e4;
L_700531ad90:;
    { uint64_t ea = c->sp + 0x130ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x120ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x134ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x124ull; ST32(ea, VS32(1)); }
    goto L_700531a8d8;
L_700531ada8:;
    c->x[1] = (uint32_t)(0x17ull);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531adc4ull; f_7005316090(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cef8ull));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[8] + 0x340ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x58ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[24] + 352; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x54ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x60ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x48ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x4cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x50ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531ae10ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x90ull);
    c->x[30] = 0x700531ae18ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0x90ull);
    c->x[30] = 0x700531ae24ull; f_700531580c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x230ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(c->x[21] + 0x128ull);
    c->x[1] = (uint32_t)(0x15ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[26] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffffc0ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[28]);
    { uint64_t ea = c->sp + 0x230ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531ae4cull; f_700531befc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x234ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xfffdull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xff3f0000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x234ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[30] = 0x700531ae6cull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700531ae78ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b750;
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531ae84ull; f_7005310000(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b750;
    { uint64_t ea = c->sp + 0x60ull; c->v[4] = LD32(ea); }
    c->x[20] = (uint32_t)(0u | 0u);
    c->x[28] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    goto L_700531b604;
L_700531afbc:;
    { uint64_t ea = c->sp + 0x10a0ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->sp + 0x10a4ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x10a8ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[22] + 84; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x120ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x109cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x128ull; ST32(ea, (uint32_t)c->x[9]); }
L_700531afd8:;
    { uint64_t ea = c->sp + 0x10b8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10bcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 120; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + 0x80ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1b0ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0x148ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) == 0) goto L_700531b010;
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x70ull);
    c->x[30] = 0x700531b00cull; f_700531c428(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b4c4;
L_700531b010:;
    { uint64_t ea = c->x[22] + 0x1a0ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
L_700531b014:;
    { uint64_t ea = c->sp + 0x10b8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[27] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x5ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x29ull));
    if (COND_NE(c)) (void)adds32(c, (uint32_t)c->x[9], 0x2ull); else c->nzcv = 0x20000000ull;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700531a3dc;
L_700531b040:;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[25] = (uint64_t)(0ull | 0ull);
    goto L_700531a910;
L_700531b04c:;
    c->x[8] = (uint64_t)(c->sp + 0x1000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[30] = 0x700531b058ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[9] >> 0) & 1) != 0) goto L_700531b4cc;
    { uint64_t ea = c->x[8] + 0x4cull; uint64_t v = LD16(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 11) & 1) != 0) goto L_700531b5cc;
    c->x[8] = (uint64_t)(c->x[8] + 0x50ull);
    goto L_700531b4d0;
L_700531b090:;
    { uint64_t ea = c->x[24] + 0x160ull; uint64_t v = LD64(ea); c->x[27] = (uint64_t)(v); }
    if (c->x[27] == 0) goto L_700531b188;
    c->x[28] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[27] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[26] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->x[28] + 0x998ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531b0e4;
    { uint64_t ea = c->x[27] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531b0e4;
    { uint64_t ea = c->x[27] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531b0bc:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0x2ull);
    { uint64_t ea = c->x[10] + 0x4cull; uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x4ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | (uint32_t)c->x[11]);
    if ((uint32_t)c->x[10] == 0) goto L_700531b8ac;
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700531b0bc;
L_700531b0e4:;
    { uint64_t ea = c->x[27] + 0x9cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531bad8;
    { uint64_t ea = c->x[27] + 0x70ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531b174;
    { uint64_t ea = c->x[27] + 0x74ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[27] + 0x60ull);
    c->x[9] = (uint64_t)(c->x[11] - c->x[10]);
    { uint64_t ea = c->x[27] + 0x68ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_700531b14c;
    c->x[11] = (uint64_t)(0ull - c->x[10]);
    c->x[12] = (uint64_t)(c->x[12] - c->x[10]);
    c->x[13] = (uint32_t)(0x84ull);
L_700531b118:;
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    c->x[15] = (uint32_t)((uint32_t)c->x[15] & 0x2ull);
    { uint64_t ea = c->x[14] + 0x4cull; uint64_t v = LD16(ea); c->x[14] = (uint64_t)(v); }
    c->x[14] = (uint32_t)((uint32_t)c->x[14] & (uint32_t)c->x[13]);
    (void)(subs32(c, (uint32_t)c->x[14], 0x80ull));
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[15], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_700531be0c;
    c->x[12] = (uint64_t)(c->x[12] + c->x[10]);
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + c->x[11]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700531b118;
L_700531b14c:;
    c->x[10] = (uint32_t)(0u | 0u);
    c->x[11] = (uint32_t)(0u | 0u);
    c->x[12] = (uint64_t)(0ull | c->x[9]);
L_700531b158:;
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    c->x[10] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    if (((c->x[8] >> 0) & 1) == 0) goto L_700531b8ac;
L_700531b174:;
    c->x[25] = (uint64_t)(0ull | 0ull);
L_700531b178:;
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
    c->v[8] = 0x0ull;
L_700531b180:;
    c->x[27] = (uint32_t)(0x1ull);
    goto L_700531ad38;
L_700531b188:;
    c->x[25] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
    c->v[8] = 0x0ull;
    c->x[27] = (uint32_t)(0x1ull);
    goto L_700531ad2c;
L_700531b19c:;
    c->v[8] = 0x0ull;
    c->x[25] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, 0u); }
    goto L_700531ad2c;
L_700531b1b0:;
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
L_700531b1b4:;
    c->x[8] = (uint32_t)(0xfffcffffull);
    fp_op_s(c, FOP_ADD, 0, 10, 15);
    { uint64_t ea = c->sp + 0x30ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x22cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x210ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x1000ull);
    { uint64_t ea = c->sp + 0x8ull; c->v[2] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x40ull);
    { uint64_t ea = c->sp + 0x110ull; ST32(ea, VS32(9)); }
    { uint64_t ea = c->sp + 0x114ull; ST32(ea, VS32(12)); }
    { uint64_t ea = c->sp + 0x118ull; ST32(ea, VS32(11)); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0xcull);
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    { uint64_t ea = c->sp + 0xcull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x210ull; ST16(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[21] + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0xa0ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 2, 2, 14);
    { uint64_t ea = c->sp + 0x120ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[21] + 0xb0ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[24] + 0xf40ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[21] + 0xa8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1048ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0xc0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[22] + 12; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[21] + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x124ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x1054ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x1060ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0x18ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531b23cull; f_700531c3e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[24] + 0x28ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 12; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1048ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1054ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x130ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x1060ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x13cull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[24] + 52; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x148ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[24] + 0x40ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x228ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffffc0ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->sp + 0x228ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x22cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfff7ffffull);
    { uint64_t ea = c->sp + 0x22cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x230ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffbfffffull);
    { uint64_t ea = c->sp + 0x230ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531b29cull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xfe8ull);
    c->x[30] = 0x700531b2a4ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xfe8ull);
    c->x[20] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531b2b4ull; f_700531c358(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xfe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700531b2c0ull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[1] = (uint64_t)(c->sp + 0xfe0ull);
    c->x[30] = 0x700531b2ccull; f_700531c700(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531b2d4ull; f_700531c400(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531b3cc;
    c->x[1] = (uint64_t)(c->x[19] + 0x120ull);
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531b2e4ull; f_700531c708(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x80ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x5cull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->x[24] + 0x160ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_700531b3c4;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531b334;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531b334;
    { uint64_t ea = c->x[21] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531b30c:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0x2ull);
    { uint64_t ea = c->x[10] + 0x4cull; uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x4ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | (uint32_t)c->x[11]);
    if ((uint32_t)c->x[10] == 0) goto L_700531b8f0;
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700531b30c;
L_700531b334:;
    { uint64_t ea = c->x[21] + 0x9cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531bb30;
    { uint64_t ea = c->x[21] + 0x70ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531b3c4;
    { uint64_t ea = c->x[21] + 0x74ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[21] + 0x60ull);
    c->x[9] = (uint64_t)(c->x[11] - c->x[10]);
    { uint64_t ea = c->x[21] + 0x68ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_700531b39c;
    c->x[11] = (uint64_t)(0ull - c->x[10]);
    c->x[12] = (uint64_t)(c->x[12] - c->x[10]);
    c->x[13] = (uint32_t)(0x84ull);
L_700531b368:;
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    c->x[15] = (uint32_t)((uint32_t)c->x[15] & 0x2ull);
    { uint64_t ea = c->x[14] + 0x4cull; uint64_t v = LD16(ea); c->x[14] = (uint64_t)(v); }
    c->x[14] = (uint32_t)((uint32_t)c->x[14] & (uint32_t)c->x[13]);
    (void)(subs32(c, (uint32_t)c->x[14], 0x80ull));
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[15], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_700531be18;
    c->x[12] = (uint64_t)(c->x[12] + c->x[10]);
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + c->x[11]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700531b368;
L_700531b39c:;
    c->x[10] = (uint32_t)(0u | 0u);
    c->x[11] = (uint32_t)(0u | 0u);
    c->x[12] = (uint64_t)(0ull | c->x[9]);
L_700531b3a8:;
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    c->x[10] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    if (((c->x[8] >> 0) & 1) == 0) goto L_700531b8f0;
L_700531b3c4:;
    c->x[27] = (uint32_t)(0x1ull);
    goto L_700531b3d4;
L_700531b3cc:;
    { uint64_t ea = c->sp + 0x80ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x5cull; c->v[14] = LD32(ea); }
L_700531b3d4:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[8] + 0xe30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xe38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x170ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[9] + 0x10ull);
    { uint64_t ea = c->x[24] + 0x168ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531b404ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x170ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->x[20] + 0x120ull);
    { uint64_t ea = c->x[8] + 0xe50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531b420ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531b428ull; f_700531c340(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531b428:;
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD32(ea); c->x[20] = (uint64_t)(v); }
    goto L_700531a930;
L_700531b430:;
    c->x[1] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(c->x[29] - 0x78ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x40ull);
    c->x[30] = 0x700531b440ull; f_70053197dc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[9] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[0]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)~(uint32_t)c->x[0]);
    { uint64_t ea = c->x[20] + 0x0ull; ST8(ea, (uint32_t)c->x[9]); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531aa64;
    if (c->x[25] == 0) goto L_700531aa64;
    { uint64_t ea = c->x[25] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] & 0x1cull);
    (void)(subs64(c, c->x[8], 0x10ull));
    if (COND_EQ(c)) goto L_700531aa5c;
    goto L_700531aa64;
L_700531b46c:;
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531aca4;
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700531bb88;
    { uint64_t ea = c->x[0] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531b488:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[13] & 0x2ull);
    { uint64_t ea = c->x[12] + 0x4cull; uint64_t v = LD16(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] & 0x4ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] | (uint32_t)c->x[13]);
    if ((uint32_t)c->x[12] == 0) goto L_700531bc00;
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_700531b488;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[10]);
    goto L_700531ac88;
L_700531b4c4:;
    c->x[25] = (uint64_t)(0ull | 0ull);
    goto L_700531b014;
L_700531b4cc:;
    c->x[8] = (uint64_t)(c->x[8] + 0x58ull);
L_700531b4d0:;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_700531b5cc;
    { uint64_t ea = c->x[21] + 0x110ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[30] = 0x700531b4e0ull; f_700531c538(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[25] == 0) goto L_700531b778;
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531b4f8ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531b778;
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xd6ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0xd0ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0xc0ull);
    { uint64_t ea = c->sp + 0xd4ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[8] + 0xfd0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[8]); ST64(ea + 8, 0ull); }
    c->x[30] = 0x700531b530ull; f_700531c2e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(c->sp + 0xc0ull);
    c->x[30] = 0x700531b53cull; f_7005315100(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531b550;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531b550;
    { uint64_t ea = c->x[8] + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_700531b550:;
    { uint64_t ea = c->sp + 0xa8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0xa4ull);
    c->x[0] = (uint64_t)(c->sp + 0xa8ull);
    c->x[30] = 0x700531b560ull; f_700531c450(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0xa4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x81eull);
    (void)(subs32(c, (uint32_t)c->x[8], 0xcull));
    c->x[8] = (uint32_t)((uint32_t)c->x[10] >> ((uint32_t)c->x[8] & 31));
    c->x[9] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[26] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531bd2c;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531bd2c;
    { uint64_t ea = c->x[8] + 0x428ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x98ull; ST64(ea, c->x[8]); }
    if (c->x[8] == 0) goto L_700531bd2c;
    c->x[0] = (uint64_t)(c->sp + 0x98ull);
    c->x[30] = 0x700531b59cull; f_700531c5b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[25] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x700531b5a8ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->sp + 0xc0ull);
    { uint64_t ea = c->x[8] + 0x8d0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0xc0ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531b5c0ull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[25] >> 0) & 1) == 0) goto L_700531b77c;
    c->x[25] = (uint64_t)(0ull | c->x[20]);
    goto L_700531aca4;
L_700531b5cc:;
    c->x[20] = (uint32_t)(0u | 0u);
    goto L_700531acb4;
L_700531b5d4:;
    { uint64_t ea = c->x[26] + 0x9cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531bcfc;
    { uint64_t ea = c->x[26] + 0x74ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[26] - c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0x60ull);
    goto L_700531a02c;
L_700531b604:;
    { uint64_t ea = c->x[24] + 36; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->sp + 0x100ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x24ull);
    { uint64_t ea = c->x[22] + 0x30ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x12cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1078ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[9] = (uint64_t)(c->x[19] + 0x120ull);
    c->x[10] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[27] : (uint32_t)(0u + 1));
    if (((c->x[10] >> 0) & 1) == 0) goto L_700531b6c0;
    { uint64_t ea = c->x[19] + 0x128ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 4, 1);
    { uint64_t ea = c->x[19] + 0x120ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x58ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1078ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 3, 0);
    fp_op_s(c, FOP_SUB, 2, 4, 2);
    fp_op_s(c, FOP_MUL, 6, 1, 1);
    { uint64_t ea = c->sp + 0x1070ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 0, 0, 6);
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    fp_op_s(c, FOP_MUL, 3, 2, 2);
    fp_fma_s(c, 0, 0, 1, 1, 1, 3);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LT(c)) goto L_700531b744;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x148ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x14cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x130ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->x[29] - 120; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[24] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x134ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x138ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0x1b0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 24; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[20]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[26] + 0x0ull; ST8(ea, (uint32_t)c->x[28]); }
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_700531b6f4;
L_700531b6c0:;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[27] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x130ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->sp + 0x134ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[20]); }
    { uint64_t ea = c->sp + 0x138ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + 0x0ull; ST8(ea, (uint32_t)c->x[28]); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[27]); }
L_700531b6f4:;
    goto L_700531b744;
L_700531b744:;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[26] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
L_700531b750:;
    c->x[8] = (uint64_t)(LD64(0x700531cef8ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531b768ull; f_700531bef8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    c->x[30] = 0x700531b770ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if ((uint32_t)c->x[26] != 0) goto L_700531aa50;
    goto L_700531ad10;
L_700531b778:;
    c->x[26] = (uint32_t)(0u | 0u);
L_700531b77c:;
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x1ull);
    c->x[25] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[0] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    c->x[30] = 0x700531b7a4ull; f_700531c710(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 192; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0xc8ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)(c->x[19] + 0x120ull);
    c->x[9] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[27] : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) == 0) goto L_700531b9fc;
    { uint64_t ea = c->x[19] + 0x120ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x58ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 4, 1);
    { uint64_t ea = c->x[19] + 0x128ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x60ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 3, 5, 3);
    fp_op_s(c, FOP_SUB, 0, 4, 0);
    fp_op_s(c, FOP_SUB, 2, 5, 2);
    fp_op_s(c, FOP_MUL, 3, 3, 3);
    fp_fma_s(c, 0, 0, 1, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 2, 2, 2);
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_LT(c)) goto L_700531bac8;
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x1ull));
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[9] + 0x14ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 24; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->v[4] = VS32(1) ^ 0x80000000u;
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->v[5] = VS32(2) ^ 0x80000000u;
    c->v[15] = COND_EQ(c) ? VS32(4) : VS32(1);
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[26]); }
    c->x[8] = (uint32_t)(0x1ull);
    c->v[8] = COND_EQ(c) ? VS32(5) : VS32(2);
    c->v[14] = COND_EQ(c) ? VS32(3) : VS32(0);
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531b870ull; f_700531c628(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531b884ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    goto L_700531ba84;
L_700531b8ac:;
    c->x[8] = (uint64_t)(c->sp + 0xff8ull);
    c->x[0] = (uint64_t)(0ull | c->x[27]);
    c->x[30] = 0x700531b8b8ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0xf00ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xff8ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[24] + 0xf38ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0xf18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[9] >> 0) & 1) != 0) goto L_700531bb94;
    { uint64_t ea = c->x[8] + 0x4cull; uint64_t v = LD16(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 11) & 1) != 0) goto L_700531b174;
    c->x[8] = (uint64_t)(c->x[8] + 0x50ull);
    goto L_700531bb98;
L_700531b8f0:;
    c->x[8] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[8] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[30] = 0x700531b900ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[9] >> 0) & 1) != 0) goto L_700531bc0c;
    { uint64_t ea = c->x[8] + 0x4cull; uint64_t v = LD16(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 11) & 1) != 0) goto L_700531b3c4;
    c->x[9] = (uint64_t)(0ull | c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x50ull);
    goto L_700531bc14;
L_700531b93c:;
    { uint64_t ea = c->sp + 0x1078ull; c->v[0] = LD32(ea); }
    c->v[7] = 0x0ull;
    { uint64_t ea = c->sp + 0x107cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1084ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 2, 0);
    { uint64_t ea = c->sp + 0x1080ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1088ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108cull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 4, 4, 1);
    fp_op_s(c, FOP_SUB, 5, 5, 3);
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->sp + 0x10acull; c->v[6] = LD32(ea); }
    c->v[6] = COND_EQ(c) ? VS32(7) : VS32(6);
    fp_op_s(c, FOP_MUL, 2, 2, 6);
    fp_op_s(c, FOP_MUL, 4, 4, 6);
    fp_op_s(c, FOP_MUL, 5, 5, 6);
    fp_op_s(c, FOP_ADD, 8, 0, 2);
    fp_op_s(c, FOP_ADD, 10, 1, 4);
    fp_op_s(c, FOP_ADD, 13, 3, 5);
L_700531b98c:;
    { uint64_t ea = c->x[19] + 0x128ull; ST32(ea, VS32(13)); }
    { uint64_t ea = c->sp + 0x7cull; c->v[13] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(14), VSF32(14));
    { uint64_t ea = c->x[19] + 0x120ull; ST32(ea, VS32(8)); }
    c->v[8] = VS32(16);
    { uint64_t ea = c->x[19] + 0x124ull; ST32(ea, VS32(10)); }
    if (COND_VC(c)) goto L_700531afd8;
    { uint64_t ea = c->sp + 0x1078ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x100ull);
    { uint64_t ea = c->sp + 0x1084ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->sp + 0x107cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1080ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x1088ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108cull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 4);
    { uint64_t ea = c->sp + 0x100ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_SUB, 0, 3, 5);
    { uint64_t ea = c->sp + 0x104ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x108ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531b9e0ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x100ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->sp + 0x104ull; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x108ull; c->v[8] = LD32(ea); }
    goto L_700531afd8;
L_700531b9f0:;
    c->x[10] = (uint32_t)(0u | 0u);
L_700531b9f4:;
    c->x[11] = (uint32_t)(0u | 0u);
    goto L_700531ac88;
L_700531b9fc:;
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[9] + 0x14ull; c->v[2] = LD32(ea); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x1ull));
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[26]); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->v[4] = VS32(1) ^ 0x80000000u;
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->v[5] = VS32(2) ^ 0x80000000u;
    c->v[15] = COND_EQ(c) ? VS32(4) : VS32(1);
    c->v[8] = COND_EQ(c) ? VS32(5) : VS32(2);
    c->v[14] = COND_EQ(c) ? VS32(3) : VS32(0);
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[25]); }
    c->x[30] = 0x700531ba68ull; f_700531c628(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531ba7cull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[27] = (uint32_t)(0x1ull);
L_700531ba84:;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x3full));
    if (COND_NE(c)) goto L_700531bac8;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xc0ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531baa4ull; f_700531c408(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x64ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 13, 0);
    { uint64_t ea = c->x[20] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    fp_op_s(c, FOP_MUL, 2, 0, 2);
    { uint64_t ea = c->x[20] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[20] + 0x8ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 3, 0, 1);
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, VS32(3)); }
L_700531bac8:;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[25] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700531aca4;
L_700531bad8:;
    { uint64_t ea = c->x[27] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531b174;
    { uint64_t ea = c->x[27] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700531be30;
    { uint64_t ea = c->x[27] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531baf4:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[13] & 0x2ull);
    { uint64_t ea = c->x[12] + 0x4cull; uint64_t v = LD16(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] & 0x4ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] | (uint32_t)c->x[13]);
    if ((uint32_t)c->x[12] == 0) goto L_700531be48;
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_700531baf4;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[10]);
    goto L_700531b158;
L_700531bb30:;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700531b3c4;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700531be3c;
    { uint64_t ea = c->x[21] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
L_700531bb4c:;
    { uint64_t ea = c->x[9] - 8; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[13] & 0x2ull);
    { uint64_t ea = c->x[12] + 0x4cull; uint64_t v = LD16(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] & 0x4ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] | (uint32_t)c->x[13]);
    if ((uint32_t)c->x[12] == 0) goto L_700531be54;
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_700531bb4c;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[10]);
    goto L_700531b3a8;
L_700531bb88:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531b9f4;
L_700531bb94:;
    c->x[8] = (uint64_t)(c->x[8] + 0x58ull);
L_700531bb98:;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    if (c->x[25] == 0) goto L_700531b178;
    c->x[8] = (uint64_t)(c->sp + 0xff8ull);
    c->x[0] = (uint64_t)(0ull | c->x[27]);
    c->x[30] = 0x700531bbacull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0xf00ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xff8ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[24] + 0xf38ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0xf18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[9] + 0x14ull; c->v[2] = LD32(ea); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x1ull));
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
    c->v[4] = VS32(1) ^ 0x80000000u;
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->v[5] = VS32(2) ^ 0x80000000u;
    c->v[15] = COND_EQ(c) ? VS32(4) : VS32(1);
    c->v[14] = COND_EQ(c) ? VS32(3) : VS32(0);
    c->v[8] = COND_EQ(c) ? VS32(5) : VS32(2);
    goto L_700531b180;
L_700531bc00:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531ac88;
L_700531bc0c:;
    c->x[9] = (uint64_t)(0ull | c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x58ull);
L_700531bc14:;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    if (c->x[25] == 0) goto L_700531bd20;
    c->x[8] = (uint64_t)(c->sp + 0x1000ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[8] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[30] = 0x700531bc2cull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + (c->x[11] << 4));
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[9] + 0x14ull; c->v[2] = LD32(ea); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x1ull));
    c->x[8] = (uint64_t)(c->sp + 0x1000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x70ull);
    c->v[4] = VS32(1) ^ 0x80000000u;
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->v[5] = VS32(2) ^ 0x80000000u;
    c->v[15] = COND_EQ(c) ? VS32(4) : VS32(1);
    c->v[14] = COND_EQ(c) ? VS32(3) : VS32(0);
    c->v[8] = COND_EQ(c) ? VS32(5) : VS32(2);
    c->x[30] = 0x700531bc84ull; f_700531c3d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1070ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + (c->x[9] << 4));
    { uint64_t ea = c->x[22] + 0x70ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x50ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    c->x[10] = (uint32_t)(0x28ull);
    { uint64_t ea = c->x[25] + 0x110ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[8] : (uint64_t)(c->x[11]));
    c->x[11] = (uint32_t)(0x18ull);
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[8] + 0x28ull);
    (void)(logic32(c, (uint32_t)c->x[9] & 0x1ull));
    c->x[9] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[10] = (uint64_t)((COND_EQ(c)) ? c->x[11] : (uint64_t)(c->x[10]));
    c->x[9] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[12]));
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 120; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1b0ull; ST64(ea, c->x[8]); }
    if (c->x[21] != 0) goto L_700531be68;
L_700531bce0:;
    (void)(subs64(c, c->x[21], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[0]);
    { uint64_t ea = c->x[19] + 0x1efull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700531b3c4;
L_700531bcfc:;
    { uint64_t ea = c->x[26] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    goto L_700531a028;
L_700531bd20:;
    c->x[27] = (uint32_t)(0x1ull);
    c->x[25] = (uint64_t)(0ull | c->x[9]);
    goto L_700531b3d4;
L_700531bd2c:;
    c->x[0] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x700531bd34ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->sp + 0xc0ull);
    { uint64_t ea = c->x[8] + 0x8d0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0xc0ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700531bd4cull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531b77c;
L_700531be0c:;
    c->x[10] = (uint32_t)(0u | 0u);
L_700531be10:;
    c->x[11] = (uint32_t)(0u | 0u);
    goto L_700531b158;
L_700531be18:;
    c->x[10] = (uint32_t)(0u | 0u);
L_700531be1c:;
    c->x[11] = (uint32_t)(0u | 0u);
    goto L_700531b3a8;
L_700531be24:;
    c->x[8] = (uint32_t)(0x7fc00000ull);
    c->v[14] = (uint32_t)c->x[8];
    goto L_700531b93c;
L_700531be30:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531be10;
L_700531be3c:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531be1c;
L_700531be48:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531b158;
L_700531be54:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull | 0ull);
    goto L_700531b3a8;
L_700531be68:;
    c->x[1] = (uint64_t)(c->x[21] + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531be74ull; f_700531c698(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531bce0;
}

void f_7005506668(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(c->x[0] + 0x5c8ull);
    c->x[30] = 0x7005506678ull; f_700550fba4(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055066bc;
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[19] + 0xf18ull);
    c->x[9] = (uint32_t)(0x5c8ull);
L_7005506688:;
    { uint64_t ea = c->x[19] + c->x[9]; ST128(ea, c->v[0]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[9], 0xf18ull));
    if (COND_NE(c)) goto L_7005506688;
    c->v[0] = 0x0ull;
    c->x[9] = (uint64_t)(c->x[19] + 0xf68ull);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0xf90ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0xf88ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x2e4ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[9] + 0x0ull; ST128(ea, c->v[0]); }
    goto L_70055066c4;
L_70055066bc:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0xf88ull; ST32(ea, (uint32_t)c->x[8]); }
L_70055066c4:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005506b70(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 72; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[0] = (uint64_t)(c->x[0] + 0x100ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x528ull);
    c->x[30] = 0x7005506b8cull; f_7005506d44(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506be4;
    { uint64_t ea = c->x[19] + 0x530ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x7ull));
    { uint64_t ea = c->x[19] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_NE(c)) goto L_7005506be0;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[19] + 0x100ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x138ull);
    c->x[3] = (uint64_t)(c->x[19] + 0x538ull);
    c->x[30] = 0x7005506bb4ull; f_7005507020(c);
    { uint64_t ea = c->x[19] + 0x538ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[19] + 0x53cull);
    { uint64_t ea = c->x[9] + 0x0ull; c->v[0] = LD64(ea); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x7ull));
    { uint64_t ea = c->x[19] + 0x48ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 76; ST64(ea, VS64(0)); }
    if (COND_NE(c)) goto L_7005506be0;
    c->x[8] = (uint32_t)(VS32(0));
    (void)(subs32(c, (uint32_t)c->x[8], 0x7ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005506be4;
L_7005506be0:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005506be4:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005506c48(Cpu *c) {
    if ((uint32_t)c->x[1] == 0) goto L_7005506c64;
    if (c->x[2] != 0) goto L_7005506c64;
    { uint64_t ea = c->x[0] + 0x510ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[0] + 0x51cull; ST32(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_7005506c84;
L_7005506c60:;
    c->pc = 0; return;
L_7005506c64:;
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(0xffffffffffffff3bull);
    c->x[9] = (uint32_t)(0x11e8ull);
    (void)(logic64(c, (uint64_t)(c->x[2] & c->x[8])));
    { uint64_t ea = c->x[0] + c->x[9]; ST128(ea, c->v[0]); }
    if (COND_EQ(c)) goto L_7005506c60;
    { uint64_t ea = c->x[0] + 0x51cull; ST32(ea, 0u); }
    c->pc = 0; return;
L_7005506c84:;
    { uint64_t ea = c->x[0] + 0xf88ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005506c60;
    { uint64_t ea = c->x[0] + 0xe00ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005506c60;
    c->x[8] = (uint64_t)(c->x[0] + 0x4d8ull);
    c->x[9] = (uint32_t)(0x1ull);
L_7005506c9c:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[10] != 0) goto L_7005506d14;
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005506c9c;
    { uint64_t ea = c->x[0] + 0x4f0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 0) & 1) == 0) goto L_7005506d1c;
    { uint64_t ea = c->x[0] + 0x4e8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_7005506d1c;
    { uint64_t ea = c->x[0] + 0x11c8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x11ccull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005506d1c;
    { uint64_t ea = c->x[0] + 0x11e8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4e0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005506d34;
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_LS(c)) goto L_7005506d34;
    { uint64_t ea = c->x[0] + 0x80ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x11f0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_LS(c)) goto L_7005506d2c;
    c->v[0] = 0x0ull;
    c->x[10] = (uint64_t)(c->x[0] + 0xfb8ull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    stl64(c->x[10], 0ull);
    c->x[10] = (uint64_t)(c->x[0] + 0xf78ull);
    { uint64_t ea = c->x[0] + 0x520ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[10] + 0x0ull; ST128(ea, c->v[0]); }
    c->x[10] = (uint32_t)(0xf98ull);
    goto L_7005506d28;
L_7005506d14:;
    c->excl_addr = ~0ull;
    c->pc = 0; return;
L_7005506d1c:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[0] + 0x11e8ull; ST64(ea, 0ull); }
L_7005506d24:;
    c->x[10] = (uint32_t)(0x11f0ull);
L_7005506d28:;
    { uint64_t ea = c->x[0] + c->x[10]; ST64(ea, c->x[9]); }
L_7005506d2c:;
    stl32(c->x[8], 0ull);
    c->pc = 0; return;
L_7005506d34:;
    if (c->x[9] != 0) goto L_7005506d2c;
    { uint64_t ea = c->x[0] + 0x80ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x11e8ull; ST64(ea, c->x[10]); }
    goto L_7005506d24;
}

void f_7005507cf8(Cpu *c) {
    if (c->x[0] == 0) goto L_7005507d44;
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_7005507d48;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005507d48;
    c->x[10] = (uint64_t)(c->x[1] + (uint64_t)(uint32_t)c->x[3]);
    c->x[8] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_7005507d48;
    c->x[10] = (uint64_t)(ROR64(c->x[10], 39) & 0x1ffffffull);
    if (c->x[10] != 0) goto L_7005507d48;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[9]; c->x[30] = 0x7005507d34ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    goto L_7005507d48;
L_7005507d44:;
    c->x[8] = (uint32_t)(0u | 0u);
L_7005507d48:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_7005508018(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x120ull);
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[30] = 0x7005508034ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508090;
    if ((uint32_t)c->x[20] == 0) goto L_7005508084;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550808c;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[20]);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[9] = (uint64_t)(c->sp + 0x0ull);
L_7005508058:;
    c->x[10] = (uint64_t)(0ull | c->x[11]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_7005508078;
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + c->x[10]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[11] = (uint64_t)(c->x[10] + 0x1ull);
    if (COND_EQ(c)) goto L_7005508058;
L_7005508078:;
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    c->x[0] = (uint32_t)((COND_CC(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005508090;
L_7005508084:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005508090;
L_700550808c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005508090:;
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x120ull);
    c->pc = 0; return;
}

void f_70055080a0(Cpu *c) {
    if (c->x[0] == 0) goto L_70055080ec;
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_70055080f0;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_70055080f0;
    c->x[10] = (uint64_t)(c->x[1] + (uint64_t)(uint32_t)c->x[3]);
    c->x[8] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_70055080f0;
    c->x[10] = (uint64_t)(ROR64(c->x[10], 39) & 0x1ffffffull);
    if (c->x[10] != 0) goto L_70055080f0;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[9]; c->x[30] = 0x70055080dcull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    goto L_70055080f0;
L_70055080ec:;
    c->x[8] = (uint32_t)(0u | 0u);
L_70055080f0:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_70055080f8(Cpu *c) {
    if (c->x[2] == 0) goto L_70055084b0;
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[9] = (uint64_t)(0x7005510000ull);
    c->x[8] = (uint32_t)(0x38ull);
    c->x[12] = (uint32_t)(0x8ull);
    c->x[10] = (uint64_t)(0x7005510000ull);
    c->x[11] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[9] + 0x140ull; c->v[0] = LD128(ea); }
    c->x[9] = (uint64_t)(0x7005510000ull);
    VW(vu64, 1, 1, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 2, (vu64){} + (uint64_t)c->x[12]);
    { uint64_t ea = c->x[10] + 0x130ull; c->v[3] = LD128(ea); }
    { uint64_t ea = c->x[11] + 0xe0ull; c->v[4] = LD128(ea); }
    { uint64_t ea = c->x[9] + 0xc0ull; c->v[5] = LD128(ea); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(0ull | 0ull);
L_7005508150:;
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 1) > VREG(vu64, 5)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[0]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_700550816c;
    { uint64_t ea = c->x[19] + c->x[9]; ST8(ea, 0u); }
L_700550816c:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 5)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[1]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005508190;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x1ull; ST8(ea, 0u); }
L_7005508190:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[2]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055081b4;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x2ull; ST8(ea, 0u); }
L_70055081b4:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[3]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055081d8;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x3ull; ST8(ea, 0u); }
L_70055081d8:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 3)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[4]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055081fc;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x4ull; ST8(ea, 0u); }
L_70055081fc:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 3)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[5]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005508220;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x5ull; ST8(ea, 0u); }
L_7005508220:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[6]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005508244;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x6ull; ST8(ea, 0u); }
L_7005508244:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[7]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005508268;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x7ull; ST8(ea, 0u); }
L_7005508268:;
    VW(vu64, 1, 3, VREG(vu64, 3) + VREG(vu64, 2));
    VW(vu64, 1, 4, VREG(vu64, 4) + VREG(vu64, 2));
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
    VW(vu64, 1, 5, VREG(vu64, 5) + VREG(vu64, 2));
    VW(vu64, 1, 0, VREG(vu64, 0) + VREG(vu64, 2));
    (void)(subs64(c, c->x[9], 0x38ull));
    if (COND_NE(c)) goto L_7005508150;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[22] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    c->x[8] = (uint32_t)(0xf680ull);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x238ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x28f0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x10ull);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[30] = 0x70055082c8ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    c->x[8] = (uint32_t)(0xf960ull);
    c->x[2] = (uint64_t)(c->sp + 0x68ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ac0000ull);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x68ull; ST64(ea, 0ull); }
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    { uint64_t ea = c->sp + 80; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 64; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x70055082f4ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005508740;
    c->x[1] = (uint64_t)(c->x[8] + 0x28ull);
    c->x[2] = (uint64_t)(c->sp + 0x58ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550832cull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x44ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[30] = 0x7005508368ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x44ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xffff0001ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x10000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CC(c)) goto L_7005508740;
    { uint64_t ea = c->sp + 0x58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x24ull);
    c->x[30] = 0x70055083a0ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xffff0001ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x10000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CC(c)) goto L_7005508740;
    { uint64_t ea = c->sp + 0x58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[30] = 0x70055083d8ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x48ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[30] = 0x7005508414ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, 0ull); }
    if ((uint32_t)c->x[8] == 0) goto L_700550873c;
    c->x[24] = (uint32_t)(0xd7aeull);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[24] = (uint32_t)((c->x[24] & 0xffffffff0000ffffull) | 0xef4d0000ull);
L_7005508450:;
    c->x[9] = (uint32_t)(udiv32((uint32_t)c->x[24], (uint32_t)c->x[8]));
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[23] - (uint32_t)c->x[9] * (uint32_t)c->x[8]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[24]);
    c->x[10] = (uint32_t)(udiv32((uint32_t)c->x[9], (uint32_t)c->x[8]));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] - (uint32_t)c->x[10] * (uint32_t)c->x[8]);
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 29) & 0xfffffff8ull);
    c->x[1] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[30] = 0x7005508480ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550873c;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550873c;
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[24])));
    if (COND_EQ(c)) goto L_70055084b8;
    (void)(subs32(c, (uint32_t)c->x[23], 0x1feull));
    if (COND_HI(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[23], (uint32_t)((uint32_t)c->x[8])));
    if (COND_CC(c)) goto L_7005508450;
    goto L_700550873c;
L_70055084b0:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_70055084b8:;
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x44ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CS(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 29) & 0xfffffff8ull);
    c->x[2] = (uint64_t)(c->sp + 0x38ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[30] = 0x70055084e4ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550873c;
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550873c;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550873c;
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    c->x[30] = 0x7005508518ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    c->x[9] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[9] = (uint64_t)(c->x[21] + c->x[9]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x2cull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x2ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x16dull);
    c->x[30] = 0x700550854cull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x2cull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[19] + 0; ST64(ea, c->x[21]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 0x2dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    { uint64_t ea = c->x[19] + 16; ST64(ea, c->x[8]); ST64(ea + 8, 0ull); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xffull);
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[9], 0x2ull); else c->nzcv = 0x0ull;
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[19] + 48; ST32(ea, (uint32_t)c->x[9]); ST32(ea + 4, 0u); }
    if (COND_NE(c)) goto L_7005508734;
    c->x[1] = (uint64_t)(c->x[8] + 0x1f0ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 24; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    c->x[30] = 0x70055085a0ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x70055085d4ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    c->x[9] = (uint32_t)(0x800ull);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[9] = (uint64_t)(c->x[21] + c->x[9]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[30] = 0x7005508608ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[30] = 0x7005508634ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005508668ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    c->x[9] = (uint32_t)(0xac20ull);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3910000ull);
    c->x[9] = (uint64_t)(c->x[21] + c->x[9]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550873c;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x80ull);
    c->x[30] = 0x700550869cull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550873c;
    c->x[8] = (uint32_t)(0x1e8ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3960000ull);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[30] = 0x70055086d0ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_7005508740;
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005508704ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508740;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_7005508740;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005508740;
    { uint64_t ea = c->sp + 24; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0x28ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 24; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
L_7005508734:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005508740;
L_700550873c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005508740:;
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
}

void f_70055091ac(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70055091c0ull; f_7005509080(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550933c;
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x54ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[21] + 0x50ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->tpidrro);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055091fcull; f_700550934c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550933c;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x68ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005509338;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005509338;
    { uint64_t ea = c->x[8] + 0x88ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[8] + 0x90ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[8] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509338;
    c->x[20] = (uint64_t)(0ull | c->x[19]);
    c->x[9] = (uint32_t)(0x66b0ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->x[20]; uint64_t v = LD64(ea); c->x[20] = c->x[20] + 64; c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[30] = 0x7005509264ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550933c;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005509338;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0xa387ull);
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    c->x[2] = (uint64_t)(c->x[21] + 0x38ull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x25ef0000ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(c->x[8] + 0x6e7000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x6d0ull);
    c->pc = c->x[8]; c->x[30] = 0x700550929cull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550933c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_700550933c;
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    { uint64_t ea = c->sp + 0xcull; ST8(ea, 0u); }
    if (COND_CC(c)) goto L_700550933c;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550933c;
    (void)(adds64(c, c->x[1], 0x1ull));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_EQ(c)) goto L_700550933c;
    c->x[9] = (uint64_t)(c->x[1] + 0x1ull);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_700550933c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xcull);
    c->x[3] = (uint32_t)(0x1ull);
    c->pc = c->x[8]; c->x[30] = 0x70055092f0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550933c;
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550933c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[21] + 0x58ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005509314ull; f_7005509134(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550933c;
    { uint64_t ea = c->x[21] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->x[3] = (uint32_t)(0x4ull);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005509328ull; f_7005509d00(c);
    c->x[8] = (uint32_t)(0x3ull);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[21] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700550933c;
L_7005509338:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550933c:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_7005509c04(Cpu *c) {
    c->x[8] = (uint32_t)(0u | 0u);
    if (c->x[0] == 0) goto L_7005509c84;
    if (c->x[1] == 0) goto L_7005509c84;
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509c84;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509c60;
    c->x[9] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)(0u | (uint32_t)c->x[8]);
L_7005509c28:;
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[10], 1) & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] & 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x2ull));
    c->x[9] = (uint32_t)((uint32_t)c->x[12] + (uint32_t)c->x[9]);
    c->x[10] = (uint32_t)(0u | (uint32_t)c->x[11]);
    if (COND_CS(c)) goto L_7005509c28;
    (void)(subs32(c, (uint32_t)c->x[8], 0x400ull));
    if (COND_CS(c)) goto L_7005509c70;
    if ((uint32_t)c->x[8] == 0) goto L_7005509c60;
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    if (COND_CC(c)) goto L_7005509c70;
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005509c70;
L_7005509c60:;
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x259ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x23bull));
    if (COND_CS(c)) goto L_7005509c78;
L_7005509c70:;
    c->x[8] = (uint32_t)(0u | 0u);
    goto L_7005509c84;
L_7005509c78:;
    { uint64_t ea = c->x[1] + 0x0ull; c->v[0] = LD128(ea); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[0] + 168; ST128(ea, c->v[0]); }
L_7005509c84:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_7005509d00(Cpu *c) {
    if (c->x[0] == 0) goto L_7005509d80;
    if (c->x[1] == 0) goto L_7005509d80;
    { uint64_t ea = c->x[0] + 0x88ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005509d80;
    { uint64_t ea = c->x[0] + 0x90ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005509d80;
    (void)(subs32(c, (uint32_t)c->x[3], 0x6ull));
    if (COND_HI(c)) goto L_7005509d80;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)(0x74ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] << ((uint32_t)c->x[3] & 31));
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005509d80;
    { uint64_t ea = c->x[0] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[3], 0x6ull));
    { uint64_t ea = c->x[0] + 0x88ull; ST64(ea, 0ull); }
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    { uint64_t ea = c->x[0] + 0x60ull; ST32(ea, (uint32_t)c->x[9]); }
    if (COND_NE(c)) goto L_7005509d80;
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_EQ(c)) goto L_7005509d78;
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_NE(c)) goto L_7005509d80;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6ull));
    if (COND_NE(c)) goto L_7005509d80;
L_7005509d78:;
    c->x[8] = (uint32_t)(0x5ull);
    { uint64_t ea = c->x[0] + 4; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[3]); }
L_7005509d80:;
    c->pc = 0; return;
}

void f_700550a39c(Cpu *c) {
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[0] + 0x14ull);
    { uint64_t ea = c->x[10] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(adds32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[1])));
    if (COND_MI(c)) goto L_700550a410;
    { uint64_t ea = c->x[0] + 0x98ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[8], 28) & 0xfffffff0ull);
    c->x[13] = (uint32_t)(0x851full);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x51eb0000ull);
    c->x[11] = (uint64_t)(c->x[11] + c->x[12]);
    { uint64_t ea = c->x[11] + 0x24ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x18ull);
    c->x[12] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[12] * (uint64_t)(uint32_t)c->x[13]);
    c->x[12] = (uint64_t)(ROR64(c->x[12], 35) & 0x1fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[12])));
    if (COND_CS(c)) goto L_700550a410;
    { uint64_t ea = c->x[10] + (c->x[8] << 2); ST32(ea, (uint32_t)c->x[9]); }
    c->x[10] = (uint32_t)(0xffffffe7ull);
    c->x[12] = (uint32_t)(0x19ull);
    { uint64_t ea = c->x[11] + 36; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[9] * (uint32_t)c->x[10]);
    c->x[9] = (uint64_t)(c->x[0] + 0x34ull);
    { uint64_t ea = c->x[9] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x19ull));
    c->x[10] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[12]));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CC(c)) goto L_700550a410;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    { uint64_t ea = c->x[9] + (c->x[8] << 2); ST32(ea, (uint32_t)c->x[10]); }
L_700550a410:;
    c->pc = 0; return;
}

void f_700550a414(Cpu *c) {
    if (c->x[0] == 0) goto L_700550a488;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[1] == 0) goto L_700550a488;
    { uint64_t ea = c->x[8] + 0x68ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550a488;
    { uint64_t ea = c->x[8] + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0x1ull);
    c->x[12] = (uint32_t)(0x18ull);
    c->x[9] = (uint64_t)(c->x[8] + 0xa0ull);
L_700550a440:;
    c->x[14] = (uint64_t)(0ull + c->x[11] * c->x[12]);
    c->x[13] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[9] + c->x[14]; uint64_t v = LD32(ea); c->x[14] = (uint64_t)(v); }
    c->x[14] = (uint64_t)(c->x[8] + c->x[14]);
L_700550a450:;
    { uint64_t ea = c->x[1] + c->x[13]; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + c->x[13]; uint64_t v = LD8(ea); c->x[16] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[15], (uint32_t)((uint32_t)c->x[16])));
    if (COND_NE(c)) goto L_700550a470;
    if ((uint32_t)c->x[15] == 0) goto L_700550a484;
    c->x[13] = (uint64_t)(c->x[13] + 0x1ull);
    (void)(subs64(c, c->x[13], 0x40ull));
    if (COND_NE(c)) goto L_700550a450;
L_700550a470:;
    (void)(subs64(c, c->x[11], 0x176ull));
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    c->x[10] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[11], 0x177ull));
    if (COND_NE(c)) goto L_700550a440;
L_700550a484:;
    c->x[0] = (uint32_t)((uint32_t)c->x[10] & 0x1ull);
L_700550a488:;
    c->pc = 0; return;
}

void f_700550a554(Cpu *c) {
    c->v[0] = 0x0ull;
    c->x[9] = (uint32_t)(0x1ull);
    c->v[1] = ((u128)0x100000001ull << 64 | 0x100000001ull);
    c->v[2] = ((u128)0x400000004ull << 64 | 0x400000004ull);
    VW(vu64, 1, 3, (vu64){} + (uint64_t)c->x[0]);
    c->x[10] = (uint64_t)(0x7005510000ull);
    VW(vu64, 1, 4, (vu64){} + (uint64_t)c->x[9]);
    { uint64_t ea = c->x[10] + 0xa0ull; c->v[5] = LD128(ea); }
    c->x[8] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[9] = (uint64_t)(0x700551149cull);
L_700550a580:;
    { uint64_t ea = c->x[9] + c->x[8]; c->v[6] = LD128(ea); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    (void)(subs64(c, c->x[8], 0x30ull));
    sl_gen(c, LOP_SHLLI | LOP_U, 2, 2, 7, 3, 0, 0, 6, 2, 0, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_SHLLI | LOP_U, 2, 2, 6, 3, 0, 0, 6, 2, 2, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_SHL | LOP_U, 3, 2, 6, 3, 0, 0, 4, 3, 0, 6, 3, 0, -1, 0x0ull);
    sl_gen(c, LOP_SHL | LOP_U, 3, 2, 7, 3, 0, 0, 4, 3, 0, 7, 3, 0, -1, 0x0ull);
    VW(vu64, 1, 7, VREG(vu64, 7) & VREG(vu64, 3));
    VW(vu64, 1, 6, VREG(vu64, 6) & VREG(vu64, 3));
    VW(vu64, 1, 6, (vu64)(VREG(vs64, 6) == 0));
    VW(vu64, 1, 7, (vu64)(VREG(vs64, 7) == 0));
    VW(vu32, 1, 6, SHUF(VREG(vu32, 7), VREG(vu32, 6), 0, 2, 4, 6));
    sl_gen(c, LOP_SHL | LOP_U, 2, 4, 7, 2, 0, 0, 1, 2, 0, 5, 2, 0, -1, 0x0ull);
    VW(vu32, 1, 5, VREG(vu32, 5) + VREG(vu32, 2));
    VW(vu64, 1, 6, VREG(vu64, 7) & ~VREG(vu64, 6));
    VW(vu64, 1, 0, VREG(vu64, 6) | VREG(vu64, 0));
    if (COND_NE(c)) goto L_700550a580;
    VW(vu32, 1, 1, (vu32){} + (uint32_t)c->x[0]);
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x80ull; c->v[2] = LD128(ea); }
    c->x[8] = (uint64_t)(0x7005510000ull);
    sl_gen(c, LOP_SHL | LOP_U, 2, 4, 1, 2, 0, 0, 1, 2, 0, 2, 2, 0, -1, 0x0ull);
    { uint64_t ea = c->x[8] + 0x120ull; c->v[2] = LD128(ea); }
    VW(vu64, 1, 1, VREG(vu64, 1) & VREG(vu64, 2));
    VW(vu64, 1, 0, VREG(vu64, 1) | VREG(vu64, 0));
    VW(vu8, 1, 1, SHUF(VREG(vu8, 0), VREG(vu8, 0), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    VW(vu64, 0, 0, VREG(vu64, 0) | VREG(vu64, 1));
    c->x[8] = (uint64_t)(VS64(0));
    c->x[9] = (uint64_t)(ROR64(c->x[8], 32) & 0xffffffffull);
    c->x[0] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    c->pc = 0; return;
}

void f_700550a5fc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xb0ull);
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[0] == 0) goto L_700550a968;
    if (c->x[20] == 0) goto L_700550a968;
    if (c->x[19] == 0) goto L_700550a968;
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550a968;
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_700550a968;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700550a680ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[21] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550a744;
    { uint64_t ea = c->x[21] + 0x70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550a96c;
    { uint64_t ea = c->x[21] + 0x78ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[2], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550a96c;
    { uint64_t ea = c->x[21] + 0x5cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[1], 0x7ull));
    if (COND_HI(c)) goto L_700550a96c;
    { uint64_t ea = c->x[21] + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[21] + 0x14ull);
    c->x[15] = (uint32_t)(0x19ull);
    { uint64_t ea = c->x[12] + (c->x[1] << 2); uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + (c->x[1] << 4));
    c->x[13] = (uint32_t)(0u + (uint32_t)c->x[27] * (uint32_t)c->x[15]);
    { uint64_t ea = c->x[10] + 32; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[10] = ea; c->x[14] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    c->x[16] = (uint32_t)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[13])));
    if (COND_LS(c)) goto L_700550a96c;
    c->x[24] = (uint64_t)(c->x[21] + 0x34ull);
    (void)(subs32(c, (uint32_t)c->x[16], 0x19ull));
    { uint64_t ea = c->x[24] + (c->x[1] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[25] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[16] : (uint32_t)((uint32_t)c->x[15]));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[25])));
    if (COND_CS(c)) goto L_700550a96c;
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[12]); }
    { uint64_t ea = c->x[20] + 0x1cull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 88; ST32(ea, (uint32_t)c->x[14]); ST32(ea + 4, (uint32_t)c->x[13]); }
    if ((uint32_t)c->x[12] == 0) goto L_700550a764;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_700550a764;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[1])));
    if (COND_NE(c)) goto L_700550a764;
    { uint64_t ea = c->x[20] + 0xcull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[27])));
    if (COND_NE(c)) goto L_700550a764;
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_700550a87c;
    c->x[26] = (uint32_t)(0u | 0u);
    goto L_700550a768;
L_700550a744:;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->pc = c->x[8]; c->x[30] = 0x700550a754ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a96c;
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, 0u); }
    c->x[22] = (uint32_t)(0x1ull);
    goto L_700550a9b4;
L_700550a764:;
    c->x[26] = (uint32_t)(0x1ull);
L_700550a768:;
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[9] + c->x[10]);
    c->pc = c->x[8]; c->x[30] = 0x700550a77cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 88; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    if ((uint32_t)c->x[0] == 0) goto L_700550a96c;
    c->x[10] = (uint32_t)(0x18ull);
    c->x[11] = (uint32_t)(0x258ull);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0u + (uint32_t)c->x[9] * (uint32_t)c->x[10]);
    c->x[28] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[8]);
    c->x[27] = (uint32_t)((uint32_t)c->x[10] + (uint32_t)c->x[27] * (uint32_t)c->x[11]);
L_700550a79c:;
    if (((c->x[26] >> 0) & 1) != 0) goto L_700550a7bc;
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_700550a7bc;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550a868;
L_700550a7bc:;
    { uint64_t ea = c->x[19] + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->pc = c->x[8]; c->x[30] = 0x700550a7c8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
    c->v[0] = 0x0ull;
    c->x[2] = (uint64_t)(0ull | 0ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[25])));
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[0]); }
    if (COND_CS(c)) goto L_700550a844;
    c->x[8] = (uint64_t)(c->x[28] + c->x[23]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x176ull));
    if (COND_HI(c)) goto L_700550a968;
    { uint64_t ea = c->x[21] + 0x68ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550a968;
    { uint64_t ea = c->x[21] + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[10] = (uint64_t)(c->x[9] + (uint64_t)(uint32_t)c->x[27]);
    { uint64_t ea = c->x[10] + 160; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[11] = (uint64_t)(a); c->x[12] = (uint64_t)(b); }
    { uint64_t ea = c->x[10] + 168; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[13] = (uint64_t)(a); c->x[10] = (uint64_t)(b); }
    c->x[11] = (uint64_t)(c->x[9] + c->x[11]);
    c->x[12] = (uint64_t)(c->x[9] + c->x[12]);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[11]); ST64(ea + 8, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[22] + ((uint64_t)(uint32_t)c->x[8] << 3));
    c->x[13] = (uint64_t)(c->x[9] + c->x[13]);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[13]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 48; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[11] + 2; c->v[0] = LD32(ea); }
    sl_gen(c, LOP_SHLLI | LOP_U, 0, 8, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_SHLLI | LOP_U, 1, 4, 0, 2, 0, 0, 0, 1, 0, -1, 0, 0, -1, 0x0ull);
    { uint64_t ea = c->sp + 56; ST128(ea, c->v[0]); }
L_700550a844:;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[23]);
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    c->x[3] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = c->x[9]; c->x[30] = 0x700550a864ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
L_700550a868:;
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    c->x[27] = (uint32_t)((uint32_t)c->x[27] + 0x18ull);
    (void)(subs64(c, c->x[23], 0x19ull));
    if (COND_NE(c)) goto L_700550a79c;
    { uint64_t ea = c->x[19] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
L_700550a87c:;
    { uint64_t ea = c->x[19] + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    c->pc = c->x[9]; c->x[30] = 0x700550a888ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 88; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[8] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[8]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x176ull));
    if (COND_HI(c)) goto L_700550a968;
    { uint64_t ea = c->x[21] + 0x68ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550a968;
    c->x[9] = (uint32_t)(0x18ull);
    { uint64_t ea = c->x[21] + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[10] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    { uint64_t ea = c->x[21] + 4; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->x[9] + 160; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[11] = (uint64_t)(a); c->x[12] = (uint64_t)(b); }
    { uint64_t ea = c->x[9] + 168; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[13] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[11] = (uint64_t)(c->x[10] + c->x[11]);
    c->x[12] = (uint64_t)(c->x[10] + c->x[12]);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[11]); ST64(ea + 8, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[22] + ((uint64_t)(uint32_t)c->x[8] << 3));
    c->x[13] = (uint64_t)(c->x[10] + c->x[13]);
    c->x[9] = (uint64_t)(c->x[10] + c->x[9]);
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[13]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 48; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 2; c->v[0] = LD32(ea); }
    sl_gen(c, LOP_SHLLI | LOP_U, 0, 8, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_SHLLI | LOP_U, 1, 4, 0, 2, 0, 0, 0, 1, 0, -1, 0, 0, -1, 0x0ull);
    { uint64_t ea = c->sp + 56; ST128(ea, c->v[0]); }
    c->pc = c->x[8]; c->x[30] = 0x700550a90cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
    { uint64_t ea = c->x[19] + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->pc = c->x[8]; c->x[30] = 0x700550a91cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x1ull);
    c->x[22] = (uint32_t)(0x1ull);
    c->pc = c->x[8]; c->x[30] = 0x700550a934ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a968;
    { uint64_t ea = c->x[21] + 0x78ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + (c->x[10] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + (c->x[10] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[21] + 4; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->x[20] + 8; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x10ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[20] + 20; ST64(ea, VS64(0)); }
    goto L_700550a9b4;
L_700550a968:;
    if (c->x[20] == 0) goto L_700550a970;
L_700550a96c:;
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, 0u); }
L_700550a970:;
    if (c->x[19] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700550a99cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a9b0;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->pc = c->x[8]; c->x[30] = 0x700550a9b0ull; rt_dispatch(c); c->pc = 0;
L_700550a9b0:;
    c->x[22] = (uint32_t)(0u | 0u);
L_700550a9b4:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[22]);
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xb0ull);
    c->pc = 0; return;
}

void f_700550b8b0(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x80ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    { uint64_t ea = c->sp + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550b95c;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550b95c;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(c->x[21] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b908ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b95c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550b95c;
    c->x[8] = (uint32_t)(0xffe8ull);
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_700550b95c;
    c->x[1] = (uint64_t)(c->x[21] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b940ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b95c;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550b954ull; f_700550aee4(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
L_700550b95c:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
}

void f_700550ba18(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[30]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->v[8] = VS32(0);
    c->x[8] = (uint32_t)(0x44800000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->v[0] = (uint32_t)c->x[8];
    c->x[0] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(8), VSF32(0));
    if (COND_LS(c)) (void)subs64(c, c->x[3], 0x0ull); else c->nzcv = 0x40000000ull;
    if (COND_EQ(c)) goto L_700550bc28;
    c->nzcv = cmp_s(c, VSF32(8), 0);
    if (COND_LT(c)) goto L_700550bc28;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x700550ba68ull; f_700550aae0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550bc28;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550ba7cull; f_700550b8b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550bc28;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[22] = (uint32_t)(0x470ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x970000ull);
    c->x[1] = (uint64_t)(c->x[9] + c->x[22]);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550bc28;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550bc28;
    c->x[9] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550bc28;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_700550bc28;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550bad0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550bc28;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0xffull));
    if (COND_NE(c)) goto L_700550bc28;
    c->x[9] = (uint64_t)(c->sp + 0x10ull);
    c->x[8] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[10] = (uint64_t)(0x70055114ccull);
    c->x[9] = (uint64_t)(c->x[9] | 0x1ull);
L_700550bafc:;
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_EQ(c)) goto L_700550bb28;
    c->x[11] = (uint64_t)(c->x[10] + c->x[8]);
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[11] + 0x159ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_700550bafc;
    c->x[8] = (uint64_t)(c->x[8] - 0x1ull);
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_CC(c)) goto L_700550bc24;
L_700550bb28:;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x700550bb44ull; rt_dispatch(c); c->pc = 0;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (COND_CC(c)) goto L_700550bc28;
    c->x[8] = (uint64_t)(c->x[20] & 0x7ull);
    if (c->x[8] != 0) goto L_700550bc28;
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550bb80ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550bc28;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[21] = (uint32_t)(0xa000ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint32_t)((c->x[21] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)(c->x[9] + c->x[21]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_700550bc28;
    c->x[10] = (uint32_t)(0x3a00000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700550bc28;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xd0ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550bc28;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550bc28;
    c->x[1] = (uint64_t)(c->x[8] + 0xd0ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550bbe8ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550bc28;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550bc28;
    c->x[9] = (uint64_t)(c->x[9] + c->x[21]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CS(c)) goto L_700550bc28;
    c->v[0] = VS32(8);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->pc = c->x[8]; c->x[30] = 0x700550bc18ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550bc20ull; f_700550aae0(c);
    goto L_700550bc28;
L_700550bc24:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550bc28:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700550c1b0(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x160ull);
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[29]); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 336; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[8] = (uint64_t)(0xffffffffffff0080ull);
    c->x[22] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, 0ull); }
    if (COND_CS(c)) goto L_700550c328;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c328;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c324;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(c->x[21] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c218ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c328;
    { uint64_t ea = c->sp + 0x118ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c324;
    c->x[8] = (uint64_t)(0xffffffffffff0018ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550c324;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c324;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[21] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c258ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c328;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550c26cull; f_700550c698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c328;
    c->x[23] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[24] = (uint64_t)(c->sp + 0x8ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[20] = (uint64_t)(0x7005510000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0xfc0ull);
    c->x[25] = (uint64_t)(0xffffffffffff0018ull);
L_700550c28c:;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_LS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) (void)subs64(c, c->x[21], 0x1full); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_700550c324;
    if (c->x[21] == 0) goto L_700550c2c8;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550c2b0:;
    { uint64_t ea = c->x[24] + (c->x[8] << 3); uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_EQ(c)) goto L_700550c324;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550c2b0;
L_700550c2c8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[24] + (c->x[21] << 3); ST64(ea, c->x[1]); }
    c->x[30] = 0x700550c2d8ull; f_700550c698(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550c344;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[25]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550c328;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c328;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c324;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c314ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] != 0) goto L_700550c28c;
    goto L_700550c328;
L_700550c324:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c328:;
    { uint64_t ea = c->sp + 336; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x110ull; uint64_t v = LD64(ea); c->x[29] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x160ull);
    c->pc = 0; return;
L_700550c344:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550c328;
}

void f_700550c73c(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[20] == 0) goto L_700550ccb4;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550ccb4;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(0x7005510000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[8] + 0x40ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, VS64(0)); }
    c->x[30] = 0x700550c7b4ull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    c->x[8] = (uint32_t)(0x8e0ull);
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)((uint32_t)c->x[8] + 0x1e8ull);
    c->x[30] = 0x700550c7d4ull; f_700550c34c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x8e0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[30] = 0x700550c7f0ull; f_700550c34c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550c808ull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550c820ull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    c->x[22] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[23] = (uint64_t)(0x7005511000ull);
    c->x[23] = (uint64_t)(c->x[23] + 0x908ull);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[24] = (uint32_t)(0x1aull);
    /* hint */
    c->x[25] = (uint64_t)(0x70055116fcull);
    c->x[26] = (uint32_t)(0x14ull);
    c->x[27] = (uint64_t)(c->x[22] - 0x8ull);
    c->x[28] = (uint64_t)(c->sp + 0x30ull);
L_700550c84c:;
    c->x[8] = (uint64_t)(0ull + c->x[24] * c->x[26]);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + c->x[8]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    if (COND_CS(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c880ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550c888:;
    { uint64_t ea = c->x[28] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_700550c888;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[23] = (uint64_t)(c->x[23] + 0x14ull);
    (void)(subs64(c, c->x[24], 0x1cull));
    if (COND_NE(c)) goto L_700550c84c;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xcull);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[21] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    c->x[3] = (uint32_t)(0x20000ull);
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[4] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c8d8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff00a8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550ccb4;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550ccb4;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0xa8ull);
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c91cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0018ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550ccb4;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550ccb4;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c95cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550ccb0;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x38ull);
    c->x[3] = (uint32_t)(0x40ull);
    c->x[30] = 0x700550c984ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xdull);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint64_t)(c->x[8] + 0xaa6000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x950ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c9a8ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550c9b0ull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x30ull);
    c->x[3] = (uint32_t)(0xa8ull);
    c->x[30] = 0x700550c9c8ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x30ull);
    c->x[3] = (uint32_t)(0x48ull);
    c->x[30] = 0x700550c9e0ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xeull);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint64_t)(c->x[8] + 0xc4f000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x4b8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550ca04ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550ca0cull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x30ull);
    c->x[3] = (uint32_t)(0x68ull);
    c->x[30] = 0x700550ca24ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb4;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[28] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)(0xfull);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[26] = (uint64_t)(0xffffffffffff0008ull);
    c->x[27] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[28] = (uint64_t)((c->x[28] & 0xffffffffffff0000ull) | 0x0ull);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[10]); }
L_700550ca4c:;
    c->x[25] = (uint32_t)(0u | (uint32_t)c->x[9]);
    (void)(logic32(c, (uint32_t)c->x[9] & 0x1ull));
    c->x[9] = (uint32_t)(0x118ull);
    c->x[10] = (uint32_t)(0x100ull);
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[24] = (uint64_t)((COND_NE(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    c->x[8] = (uint64_t)(c->x[8] + c->x[24]);
    c->x[1] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x14ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[9] = (uint64_t)(ROR64(c->x[8], 39) & 0x1ffffffull);
    if (COND_CS(c)) (void)subs64(c, c->x[8], c->x[1]); else c->nzcv = 0x0ull;
    if (COND_CS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_NE(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x14ull);
    c->x[3] = (uint32_t)(0x4ull);
    c->pc = c->x[8]; c->x[30] = 0x700550ca9cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    { uint64_t ea = c->sp + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x200ull));
    if (COND_HI(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[24]);
    c->x[1] = (uint64_t)(c->x[8] + 0x14ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(c->x[8] + 0x18ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(ROR64(c->x[8], 39) & 0x1ffffffull);
    if (c->x[8] != 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[3] = (uint32_t)(0x4ull);
    c->pc = c->x[8]; c->x[30] = 0x700550caecull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x8ull));
    if (COND_NE(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic64(c, c->x[8] & 0x7ull));
    if (COND_NE(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(c->x[8] + c->x[24]);
    c->x[9] = (uint64_t)(c->x[8] + c->x[26]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550cb34ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[24]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550cb68;
    c->x[29] = (uint32_t)(0u | 0u);
L_700550cb50:;
    { uint64_t ea = c->sp + 0x14ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[29], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550ccb0;
    c->x[9] = (uint32_t)(0u | 0u);
    if (((c->x[25] >> 0) & 1) != 0) goto L_700550ca4c;
    goto L_700550ccd4;
L_700550cb68:;
    c->x[29] = (uint32_t)(0u | 0u);
L_700550cb6c:;
    { uint64_t ea = c->sp + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[29] = (uint32_t)((uint32_t)c->x[29] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[29], (uint32_t)((uint32_t)c->x[8])));
    if (COND_HI(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(c->x[9] + c->x[27]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[28])));
    if (COND_CC(c)) goto L_700550ccb0;
    c->x[8] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[8] != 0) goto L_700550ccb0;
    c->x[8] = (uint64_t)(0xfffffffffffffff8ull);
    { uint64_t ea = c->sp + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffff0000ffffull) | 0xfffe0000ull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(c->x[9] - 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550cbc8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[26]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550ccb0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550cc00ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xd5a0ull);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550cc94;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550cc2cull; f_700550c460(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550cc94;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x30ull);
    c->x[3] = (uint32_t)(0x48ull);
    c->x[30] = 0x700550cc44ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x58ull);
    c->x[3] = (uint32_t)(0x68ull);
    c->x[30] = 0x700550cc5cull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0xa8ull);
    c->x[3] = (uint32_t)(0xb0ull);
    c->x[30] = 0x700550cc74ull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0xb8ull);
    c->x[3] = (uint32_t)(0xc0ull);
    c->x[30] = 0x700550cc8cull; f_700550cd14(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ccb0;
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
L_700550cc94:;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[24]);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[9]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550cb6c;
    goto L_700550cb50;
L_700550ccb0:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550ccb4:;
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
L_700550ccd4:;
    c->x[8] = (uint32_t)((uint32_t)c->x[23] - 0x19ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[8], 0xaull));
    if (COND_HI(c)) goto L_700550ccb4;
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xcccc0000ull);
    c->x[8] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[23] * (uint64_t)(uint32_t)c->x[8]);
    c->x[8] = (uint64_t)(ROR64(c->x[8], 34) & 0x3fffffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + ((uint32_t)c->x[8] << 2));
    c->x[8] = (uint32_t)((uint32_t)c->x[23] - (uint32_t)c->x[8]);
    if ((uint32_t)c->x[8] != 0) goto L_700550ccb4;
    c->x[8] = (uint64_t)(0x7005510000ull);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x8ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, VS64(0)); }
    goto L_700550ccb4;
}

void f_700550e528(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x1d0ull);
    { uint64_t ea = c->sp + 336; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 352; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 368; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 384; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 400; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 416; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 432; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 448; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->v[0] = 0x0ull;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    { uint64_t ea = c->sp + 0x148ull; ST64(ea, c->x[1]); }
    if (COND_HI(c)) goto L_700550e6f8;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550e6f8;
    c->v[10] = 0x0ull;
    c->x[8] = (uint64_t)(0x7005511000ull);
    c->x[9] = (uint64_t)(0x7005511000ull);
    c->x[10] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x934ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[9] + 0x938ull; c->v[9] = LD32(ea); }
    { uint64_t ea = c->x[10] + 0x70ull; c->v[0] = LD128(ea); }
    c->x[25] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[26] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[27] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[23] = (uint64_t)(c->sp + 0x48ull);
    c->x[24] = (uint64_t)(c->sp + 0x20ull);
    c->x[25] = (uint64_t)((c->x[25] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[26] = (uint64_t)((c->x[26] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[27] = (uint64_t)((c->x[27] & 0xffffffffffff0000ull) | 0xffffull);
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[0]); }
L_700550e5c0:;
    if (c->x[22] == 0) goto L_700550e5e0;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550e5c8:;
    { uint64_t ea = c->x[23] + (c->x[8] << 3); uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_EQ(c)) goto L_700550e700;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550e5c8;
L_700550e5e0:;
    { uint64_t ea = c->x[23] + (c->x[22] << 3); ST64(ea, c->x[1]); }
    c->x[1] = (uint64_t)(c->x[1] + 0x30ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x28ull);
    c->x[30] = 0x700550e5f8ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e700;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[28] = (uint64_t)(c->x[22] + 0x1ull);
L_700550e604:;
    { uint64_t ea = c->x[24] + c->x[8]; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(8));
    if (COND_PL(c)) goto L_700550e700;
    c->x[8] = (uint64_t)(c->x[8] + 0x4ull);
    (void)(subs64(c, c->x[8], 0x28ull));
    if (COND_NE(c)) goto L_700550e604;
    c->x[8] = (uint32_t)(0xcull);
L_700550e624:;
    { uint64_t ea = c->x[24] + c->x[8]; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(9));
    if (COND_GT(c)) goto L_700550e700;
    c->x[8] = (uint64_t)(c->x[8] + 0x4ull);
    (void)(subs64(c, c->x[8], 0x18ull));
    if (COND_NE(c)) goto L_700550e624;
    { uint64_t ea = c->sp + 0x38ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x10ull; c->v[3] = LD128(ea); }
    VW(vu64, 1, 1, VREG(vu64, 0) | VREG(vu64, 0));
    ((sa64 *)&c->v[1])[1] = ((sa64 *)&c->v[0])[0];
    VW(vu32, 1, 2, vcmp_s(c, 2, VREG(vf32, 1), VREG(vf32, 3)));
    VW(vu32, 1, 1, vcmp_s(c, 1, VREG(vf32, 3), VREG(vf32, 1)));
    sl_gen(c, LOP_XTN, 1, 4, 2, 1, 0, 0, 2, 2, 0, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_XTN, 1, 4, 1, 1, 0, 0, 1, 2, 0, -1, 0, 0, -1, 0x0ull);
    ((sa32 *)&c->v[2])[1] = ((sa32 *)&c->v[1])[1];
    sl_across(c, 2, 1, 0, 1, 1, 2);
    c->x[8] = (uint32_t)(VS32(1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700550e700;
    { uint64_t ea = c->sp + 0x20ull; c->v[1] = LD64(ea); }
    SV_FOP_S(FOP_MADD, 0, 1, VQ(vf32, 0, 1), VQ(vf32, 0, 0), VQ(vf32, 0, 10));
    c->v[0] = VS32(1) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(8));
    if (COND_PL(c)) goto L_700550e700;
    c->v[11] = ((sa32 *)&c->v[1])[1];
    c->v[0] = VS32(11) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(8));
    if (COND_PL(c)) goto L_700550e700;
    { uint64_t ea = c->sp + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[25]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[26])));
    if (COND_CC(c)) goto L_700550e700;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550e700;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x148ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[1]); }
    c->x[30] = 0x700550e6c4ull; f_700550d8dc(c);
    { uint64_t ea = c->sp + 0x0ull; c->v[0] = LD128(ea); }
    if ((uint32_t)c->x[0] == 0) goto L_700550e700;
    { uint64_t ea = c->sp + 0x148ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    if (COND_HI(c)) goto L_700550e6fc;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550e6fc;
    c->v[10] = VS64(0);
    (void)(subs64(c, c->x[22], 0x1full));
    c->x[22] = (uint64_t)(0ull | c->x[28]);
    if (COND_CC(c)) goto L_700550e5c0;
    goto L_700550e6fc;
L_700550e6f8:;
    c->v[11] = 0x0ull;
L_700550e6fc:;
    if (c->x[1] == 0) goto L_700550e72c;
L_700550e700:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550e704:;
    { uint64_t ea = c->sp + 448; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 432; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 416; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 400; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 384; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 368; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 352; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    c->sp = (uint64_t)(c->sp + 0x1d0ull);
    c->pc = 0; return;
L_700550e72c:;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, VS32(11)); }
    goto L_700550e704;
}

void f_700550e73c(Cpu *c) {
    if (c->x[0] == 0) goto L_700550e844;
    c->sp = (uint64_t)(c->sp - 0x90ull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_700550e824;
    (void)(subs32(c, (uint32_t)c->x[4], 0x8ull));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_700550e828;
    c->x[8] = (uint32_t)((uint32_t)c->x[3] - 0x200000ull);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x200000ull));
    if (COND_CC(c)) goto L_700550e828;
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[25] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[25], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_700550e828;
    c->x[24] = (uint64_t)(c->x[20] & 0x7ull);
    if (c->x[24] != 0) goto L_700550e828;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550e7b8ull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    c->x[23] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0xfff8ull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[25], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550e828;
    if (c->x[24] != 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550e7f8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[24] = (uint32_t)(0xe40ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint32_t)((c->x[24] & 0xffffffff0000ffffull) | 0x3900000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[24]);
    c->x[10] = (uint64_t)(c->x[9] + 0x4b8ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_EQ(c)) goto L_700550e848;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_700550e848;
L_700550e824:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550e828:;
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x90ull);
L_700550e844:;
    c->pc = 0; return;
L_700550e848:;
    c->x[8] = (uint64_t)(0xffffffffffff01e0ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550e828;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[22] + 0x1e0ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550e880ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550e828;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550e8b8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xac8ull);
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550e824;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0018ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550e828;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550e914ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550e828;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[25] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[29] = (uint64_t)(0x7005510150ull);
    c->x[27] = (uint64_t)(c->x[8] + c->x[24]);
    /* hint */
    c->x[24] = (uint64_t)(0x7005511b98ull);
    (void)(subs64(c, c->x[26], (uint64_t)(c->x[27])));
    c->x[22] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[28] = (uint64_t)(c->x[24] + ((uint64_t)(uint32_t)c->x[22] << 4));
L_700550e958:;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + c->x[25]; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_NE(c)) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550e990ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[28] + c->x[25]; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550e824;
    c->x[25] = (uint64_t)(c->x[25] + 0x4ull);
    (void)(subs64(c, c->x[25], 0x10ull));
    if (COND_NE(c)) goto L_700550e958;
    (void)(subs64(c, c->x[26], (uint64_t)(c->x[27])));
    c->x[8] = (uint32_t)(0xcull);
    c->x[9] = (uint32_t)(0x16ull);
    c->x[25] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    c->x[26] = (uint32_t)(0x14ull);
    /* hint */
    c->x[27] = (uint64_t)(0x7005511bb8ull);
    c->x[8] = (uint64_t)(c->x[27] + (uint64_t)(uint32_t)c->x[25] * (uint64_t)(uint32_t)c->x[26]);
    c->x[9] = (uint32_t)(0x11ull);
    c->x[10] = (uint32_t)(0x1aull);
    c->x[23] = (uint64_t)(c->x[23] - 0x8ull);
    c->x[28] = (uint64_t)((COND_EQ(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    c->x[29] = (uint64_t)(c->x[8] + 0x4ull);
L_700550e9ec:;
    c->x[8] = (uint64_t)(0ull + c->x[25] * c->x[26]);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[27] + c->x[8]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550ea20ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->sp + 0x8ull);
L_700550ea2c:;
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + c->x[8]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_700550e824;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_700550ea2c;
    c->x[25] = (uint64_t)(c->x[25] + 0x1ull);
    c->x[29] = (uint64_t)(c->x[29] + 0x14ull);
    (void)(subs64(c, c->x[25], (uint64_t)(c->x[28])));
    if (COND_CC(c)) goto L_700550e9ec;
    c->x[23] = (uint64_t)(c->x[24] + (c->x[22] << 4));
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[23] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550ea74ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550ea8cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x8ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550eaa8ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    (void)(subs64(c, c->x[22], (uint64_t)((uint64_t)(uint32_t)c->x[21])));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_700550e828;
    c->x[9] = (uint32_t)(0u | (uint32_t)c->x[21]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550e828;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550e824;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550eae0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550e828;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550e824;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550eafcull; f_700550a9d8(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550e828;
}

void f_700550fba4(Cpu *c) {
    if (c->x[0] == 0) goto L_700550fbd0;
    { uint64_t ea = c->x[0] + 0x834ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550fbd0;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    c->x[1] = (uint64_t)(c->x[0] + 0x50ull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700550fbc0ull; f_700550db98(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
L_700550fbd0:;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
}

void f_700550fbd8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[8] = (uint32_t)(0x14ull);
    /* hint */
    c->x[20] = (uint64_t)(0x7005511de8ull);
    c->x[21] = (uint64_t)(c->x[20] + (uint64_t)(uint32_t)c->x[1] * (uint64_t)(uint32_t)c->x[8]);
    { uint64_t ea = c->x[0] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint32_t)(0x10ull);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint64_t)(c->x[10] + c->x[11]);
    c->pc = c->x[9]; c->x[30] = 0x700550fc18ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550fc78;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550fc74;
    c->x[9] = (uint32_t)(0u | (uint32_t)c->x[19]);
    c->x[10] = (uint32_t)(0x14ull);
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[20] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[10]);
    c->x[10] = (uint64_t)(c->sp + 0x0ull);
    c->x[10] = (uint64_t)(c->x[10] | 0x1ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x5ull);
L_700550fc48:;
    c->x[11] = (uint64_t)(0ull | c->x[8]);
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_EQ(c)) goto L_700550fc68;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[12])));
    c->x[8] = (uint64_t)(c->x[11] + 0x1ull);
    if (COND_EQ(c)) goto L_700550fc48;
L_700550fc68:;
    (void)(subs64(c, c->x[11], 0xeull));
    c->x[0] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550fc78;
L_700550fc74:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550fc78:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
}

void f_700550fc88(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[4]);
    c->x[3] = (uint64_t)(0ull | c->x[20]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550fca8ull; f_700550b444(c);
    if (c->x[0] == 0) goto L_700550fcec;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    if (c->x[19] == 0) goto L_700550fcd0;
    c->x[4] = (uint64_t)(0ull | 0ull);
L_700550fcb8:;
    { uint64_t ea = c->x[19] + (c->x[4] << 1); uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550fcd4;
    c->x[4] = (uint64_t)(c->x[4] + 0x1ull);
    (void)(subs64(c, c->x[4], 0x99ull));
    if (COND_NE(c)) goto L_700550fcb8;
    goto L_700550fcd4;
L_700550fcd0:;
    c->x[4] = (uint32_t)(0x99ull);
L_700550fcd4:;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fce4ull; f_700550b148(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
L_700550fcec:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700550fd48(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[4]);
    c->x[3] = (uint64_t)(0ull | c->x[19]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550fd6cull; f_700550b444(c);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (c->x[0] == 0) goto L_700550fe00;
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[20], 0x0ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fd90ull; f_700550b96c(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    if ((uint32_t)c->x[20] == 0) goto L_700550fe10;
    if ((uint32_t)c->x[8] == 0) goto L_700550fe10;
    (void)(subs32(c, (uint32_t)c->x[20], 0x32ull));
    if (COND_HI(c)) goto L_700550fe0c;
    c->x[1] = (uint64_t)(c->x[22] + 0xe8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550fe10;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700550fe10;
    { uint64_t ea = c->x[21] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550fdd4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550fe10;
    FP_SETS(0, fromint_s(c, (uint32_t)c->x[20], 32, 1, 0));
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xfeeull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fdf4ull; f_700550ba18(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550fe10;
L_700550fe00:;
    (void)(subs32(c, (uint32_t)c->x[20], 0x0ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550fe10;
L_700550fe0c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550fe10:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_700550ff34(Cpu *c) {
    if (c->x[2] == 0) goto L_700550ff4c;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
L_700550ff3c:;
    { uint64_t ea = c->x[1]; uint64_t v = LD8(ea); c->x[1] = c->x[1] + 1; c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(subs64(c, c->x[2], 0x1ull));
    { uint64_t ea = c->x[8]; ST8(ea, (uint32_t)c->x[9]); c->x[8] = c->x[8] + 1; }
    if (COND_NE(c)) goto L_700550ff3c;
L_700550ff4c:;
    c->pc = 0; return;
}

void f_700550ff50(Cpu *c) {
    if (c->x[2] == 0) goto L_700550ff64;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
L_700550ff58:;
    c->x[2] = (uint64_t)(subs64(c, c->x[2], 0x1ull));
    { uint64_t ea = c->x[8]; ST8(ea, (uint32_t)c->x[1]); c->x[8] = c->x[8] + 1; }
    if (COND_NE(c)) goto L_700550ff58;
L_700550ff64:;
    c->pc = 0; return;
}

void f_700550ff68(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x70ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[20] + 0x28ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0x700550ffc8ull);
    { uint64_t ea = c->x[20] + 0x30ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x80ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    c->pc = c->x[16]; c->x[30] = 0x700550ffc8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x70ull);
    c->pc = 0; return;
}

void f_7005602000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x140ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[30]); }
    c->x[8] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xa0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 176; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 208; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 240; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    c->x[0] = (uint64_t)(c->x[20] - 0x15cull);
    c->x[30] = 0x700560204cull; f_7005608000(c);
    { uint64_t ea = c->sp + 176; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 208; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 240; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x140ull);
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    c->pc = 0x700043a054ull; return;
}

void f_7005604000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x140ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[30]); }
    c->x[8] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xa0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 176; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 208; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 240; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005604050ull; f_7005609000(c);
    { uint64_t ea = c->sp + 176; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 208; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 240; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x140ull);
    { uint64_t ea = c->x[19] + 0xcc0ull; uint64_t v = LD32(ea); c->x[20] = (uint64_t)(v); }
    c->pc = 0x7000a742c0ull; return;
}

void f_7005605a00(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if (c->x[19] != 0) goto L_7005605a40;
    c->x[8] = (uint64_t)(0x700560e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x66b0ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    if (c->x[19] == 0) goto L_7005605aac;
L_7005605a40:;
    c->x[0] = (uint64_t)(c->x[19] + 0x128ull);
    c->x[1] = (uint32_t)(0x41a1ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0xd6da0000ull);
    c->x[30] = 0x7005605a50ull; f_7005605600(c);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    if (c->x[20] == 0) goto L_7005605aac;
    c->x[0] = (uint64_t)(c->x[19] + 0x1e8ull);
    c->x[1] = (uint32_t)(0xfd6ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x1c2d0000ull);
    c->x[30] = 0x7005605a70ull; f_7005605600(c);
    c->x[3] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[5] = (uint64_t)(0ull | c->x[2]);
    c->x[4] = (uint64_t)(0ull | c->x[22]);
    c->x[6] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    if (c->x[1] == 0) goto L_7005605aac;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005605aac:;
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[5] = (uint64_t)(0ull | 0ull);
    c->x[6] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005608000(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005608128;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005608128;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608048ull; f_7005605e00(c);
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70056080ec;
    { uint64_t ea = c->x[20] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_70056080ec;
    { uint64_t ea = c->x[20] + 0x30ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x34ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x15cull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 0, 1);
    c->nzcv = cmp_s(c, VSF32(2), 0);
    if (COND_LE(c)) goto L_70056080ec;
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608084ull; f_7005606400(c);
    c->x[21] = (uint32_t)(0x1ull);
    c->x[22] = (uint64_t)(c->x[20] + 0x110ull);
L_700560808c:;
    (void)(subs32(c, (uint32_t)c->x[21], (uint32_t)((uint32_t)c->x[23])));
    if (COND_EQ(c)) goto L_70056080c4;
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70056080c4;
    { uint64_t ea = c->x[22] + 0x4ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 0, 2);
    c->x[8] = (uint32_t)(0x34000000ull);
    c->v[3] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(3));
    if (COND_LE(c)) goto L_70056080c0;
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0x4ull; ST32(ea, VS32(1)); }
    goto L_70056080c4;
L_70056080c0:;
    { uint64_t ea = c->x[22] + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
L_70056080c4:;
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x48ull));
    if (COND_CC(c)) goto L_700560808c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70056080e0ull; f_7005606000(c);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
L_70056080ec:;
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x158ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x15cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 108; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x74ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x78ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[20] + 0xacull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x80ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[20] + 0x84ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[20] + 136; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    c->x[11] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x90ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608128ull; f_7005605f00(c);
L_7005608128:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005609800(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005609824ull; f_7005605a00(c);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[25] = (uint64_t)(0ull | c->x[2]);
    c->x[26] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005609848ull; f_7005605e00(c);
    if (c->x[21] == 0) goto L_700560986c;
    c->x[23] = (uint32_t)(0u | 0u);
L_7005609850:;
    { uint64_t ea = c->x[21] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, 0u); }
    { uint64_t ea = c->x[25] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, 0u); }
    { uint64_t ea = c->x[26] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, 0u); }
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x48ull));
    if (COND_CC(c)) goto L_7005609850;
L_700560986c:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005609874ull; f_7005606800(c);
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x78ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x90ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x94ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0xacull; ST32(ea, 0u); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x20ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70056098a8ull; f_7005605f00(c);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700560b000(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560b078;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700560b078;
    c->x[10] = (uint32_t)(udiv32((uint32_t)c->x[1], (uint32_t)c->x[8]));
    c->x[10] = (uint32_t)((uint32_t)c->x[1] - (uint32_t)c->x[10] * (uint32_t)c->x[8]);
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[10]);
L_700560b01c:;
    c->x[12] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[11] << 3));
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[1])));
    if (COND_EQ(c)) goto L_700560b048;
    if ((uint32_t)c->x[13] == 0) goto L_700560b078;
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[8])));
    c->x[11] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)(0u));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700560b01c;
    goto L_700560b078;
L_700560b048:;
    { uint64_t ea = c->x[12] + 0x4ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_CS(c)) goto L_700560b078;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0x28ull);
    c->x[12] = (uint64_t)(c->x[12] + (uint64_t)(uint32_t)c->x[11] * (uint64_t)(uint32_t)c->x[13]);
    { uint64_t ea = c->x[12] + 0x10ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] != 0) goto L_700560b078;
    { uint64_t ea = c->x[12] + 0x1cull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_700560b078:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[1] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_700560b400(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[20] + 0x78ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560b4d4;
    { uint64_t ea = c->x[20] + 0xacull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x94ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700560b4d4;
    { uint64_t ea = c->x[19] + 0x100ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0xfffffull));
    if (COND_NE(c)) goto L_700560b4d4;
    { uint64_t ea = c->x[19] + 0x1c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0xfffffull));
    if (COND_NE(c)) goto L_700560b4d4;
    c->x[0] = (uint64_t)(c->x[19] + 0xc8ull);
    c->x[1] = (uint32_t)(0xe165ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x9a880000ull);
    c->x[30] = 0x700560b464ull; f_700560b000(c);
    if ((uint32_t)c->x[1] == 0) goto L_700560b4d4;
    { uint64_t ea = c->x[20] + 0x6cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700560b4d4;
    c->x[0] = (uint64_t)(c->x[19] + 0xc8ull);
    c->x[1] = (uint32_t)(0x37d1ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0xbd8f0000ull);
    c->x[30] = 0x700560b484ull; f_700560b000(c);
    if ((uint32_t)c->x[1] == 0) goto L_700560b4d4;
    { uint64_t ea = c->x[20] + 0x70ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700560b4d4;
    c->x[0] = (uint64_t)(c->x[19] + 0x188ull);
    c->x[1] = (uint32_t)(0x29b8ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0xc5fd0000ull);
    c->x[30] = 0x700560b4a4ull; f_700560b000(c);
    if ((uint32_t)c->x[1] == 0) goto L_700560b4d4;
    { uint64_t ea = c->x[20] + 0x74ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700560b4d4;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700560b4d4:;
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005703000(Cpu *c) {
    if (c->x[0] == 0) goto L_7005703288;
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_7005703270;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_7005703270;
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005703270;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(0x7005703000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x2beull);
L_7005703040:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_7005703270;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0xcull));
    if (COND_NE(c)) goto L_7005703040;
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_7005703270;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005703070ull; rt_dispatch(c); c->pc = 0;
    if (c->x[0] == 0) goto L_7005703270;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005703270;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x7005703090ull; rt_dispatch(c); c->pc = 0;
    if (c->x[0] == 0) goto L_7005703270;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x70057030a0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)((uint32_t)c->x[0] - 0x1ull);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 4) & 0xfffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x270ull));
    if (COND_HI(c)) goto L_70057030d8;
    (void)(subs32(c, (uint32_t)c->x[0], 0x64ull));
    c->x[8] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)((COND_LS(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    (void)(subs32(c, (uint32_t)c->x[0], 0x96ull));
    c->x[8] = (uint32_t)((COND_LS(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    (void)(subs32(c, (uint32_t)c->x[0], 0xc8ull));
    c->x[8] = (uint32_t)((COND_LS(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    (void)(subs32(c, (uint32_t)c->x[0], 0xfaull));
    c->x[25] = (uint32_t)((COND_LS(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    goto L_70057030dc;
L_70057030d8:;
    c->x[25] = (uint32_t)(0u | 0u);
L_70057030dc:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x70057030e8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x70057030f8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x7005703108ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[23], 0x5ull));
    { uint64_t ea = c->x[19] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[26] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)((uint32_t)c->x[23] + 1));
    (void)(subs32(c, (uint32_t)c->x[24], 0x5ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[23] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)((uint32_t)c->x[24] + 1));
    c->pc = c->x[8]; c->x[30] = 0x7005703128ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0xdull));
    if (COND_HI(c)) goto L_7005703144;
    c->x[24] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)(0x2014ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[24] << ((uint32_t)c->x[0] & 31));
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005703148;
L_7005703144:;
    c->x[24] = (uint32_t)(0u | 0u);
L_7005703148:;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x7005703154ull; rt_dispatch(c); c->pc = 0;
    /* hint */
    c->x[8] = (uint64_t)(0x7005703298ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[25] - 0x1ull);
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint64_t)(0x20ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffff0000ffffull) | 0x672a0000ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[25] + 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x5ull));
    c->x[8] = (uint64_t)((c->x[8] & 0xffff0000ffffffffull) | 0x77e500000000ull);
    c->x[9] = (uint32_t)(0x3full);
    c->x[11] = (uint32_t)((uint32_t)c->x[26] + 0x30ull);
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    c->x[12] = (uint32_t)((uint32_t)c->x[23] - 0x1ull);
    { uint64_t ea = c->sp + 62; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    c->x[10] = (uint32_t)((uint32_t)c->x[26] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x5ull));
    c->x[10] = (uint32_t)((uint32_t)c->x[22] - 0x1ull);
    { uint64_t ea = c->sp + 0x22ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[11] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[10], 0x5ull));
    c->x[10] = (uint32_t)((uint32_t)c->x[22] + 0x30ull);
    c->x[8] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[22], 0x0ull));
    c->x[10] = (uint32_t)(0x2dull);
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[12], 0x5ull));
    c->x[12] = (uint32_t)((uint32_t)c->x[23] + 0x30ull);
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[12] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[24], 0x0ull));
    { uint64_t ea = c->sp + 0x32ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    { uint64_t ea = c->sp + 0x2aull; ST16(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->sp + 0x3aull; ST16(ea, (uint32_t)c->x[8]); }
    if (COND_GT(c)) goto L_70057031fc;
    if ((uint32_t)c->x[0] == 0) goto L_7005703218;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_NE(c)) goto L_7005703234;
    c->x[8] = (uint32_t)(0x5c0full);
    c->x[9] = (uint32_t)(0x80c6ull);
    goto L_700570322c;
L_70057031fc:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_EQ(c)) goto L_7005703224;
    (void)(subs32(c, (uint32_t)c->x[0], 0x3ull));
    if (COND_NE(c)) goto L_7005703234;
    c->x[9] = (uint32_t)(0x2dull);
    c->x[8] = (uint32_t)(0x2dull);
    goto L_700570322c;
L_7005703218:;
    c->x[8] = (uint32_t)(0x987aull);
    c->x[9] = (uint32_t)(0x6e29ull);
    goto L_700570322c;
L_7005703224:;
    c->x[8] = (uint32_t)(0x8e81ull);
    c->x[9] = (uint32_t)(0x6025ull);
L_700570322c:;
    { uint64_t ea = c->sp + 0x40ull; ST16(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x42ull; ST16(ea, (uint32_t)c->x[8]); }
L_7005703234:;
    c->x[8] = (uint64_t)(0x7005703000ull);
    c->x[9] = (uint64_t)(c->sp + 0x20ull);
    /* hint */
    c->x[1] = (uint64_t)(0x70057032cbull);
    { uint64_t ea = c->x[8] + 0x290ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    c->pc = c->x[9]; c->x[30] = 0x7005703270ull; rt_dispatch(c); c->pc = 0;
L_7005703270:;
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
L_7005703288:;
    c->pc = 0; return;
}

void f_7005802800(Cpu *c) {
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    if (c->x[1] == 0) goto L_70058028ac;
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_70058028ac;
    { uint64_t ea = c->x[23] + 0x30ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70058028ac;
    { uint64_t ea = c->x[2] + 0x51ull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    c->x[30] = 0x70058028acull; f_7005804000(c);
L_70058028ac:;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7000732dc4ull; return;
}

void f_7005805000(Cpu *c) {
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    if (c->x[1] == 0) goto L_70058050ac;
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_70058050ac;
    { uint64_t ea = c->x[23] + 0x30ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70058050ac;
    { uint64_t ea = c->x[2] + 0x51ull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    c->x[30] = 0x70058050acull; f_7005804000(c);
L_70058050ac:;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x700091bb38ull; return;
}

void f_7005807000(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x51ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_70058071f0;
    c->sp = (uint64_t)(c->sp - 0x360ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[16] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x340ull; ST64(ea, c->x[16]); }
    c->x[16] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[16]); }
    c->x[30] = 0x70058070a8ull; f_7005808000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700580714c;
    { uint64_t ea = c->sp + 0x340ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpcr = c->x[16] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpsr = c->x[16] & 0xf800009full;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x360ull);
    c->pc = 0x70007362c4ull; return;
L_700580714c:;
    { uint64_t ea = c->sp + 0x340ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpcr = c->x[16] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpsr = c->x[16] & 0xf800009full;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x360ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_70058071f0:;
    c->pc = 0x70007362c4ull; return;
}

void f_7005901800(Cpu *c) {
    { uint64_t ea = c->x[20] + 16; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    c->sp = (uint64_t)(c->sp - 0x360ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[16] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x340ull; ST64(ea, c->x[16]); }
    c->x[16] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x9ccull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x70059018acull; f_7005904000(c);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x9ccull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x5ull);
    c->x[30] = 0x70059018c4ull; f_7005905000(c);
    { uint64_t ea = c->sp + 0x340ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpcr = c->x[16] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->fpsr = c->x[16] & 0xf800009full;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x360ull);
    c->pc = 0x70003f4788ull; return;
}

void f_7005902c00(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005902c58;
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    if (c->x[19] == 0) goto L_7005902c58;
    { uint64_t ea = c->x[0] + 0x48ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_7005902c58;
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->sp + 0x34ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005902c30ull; f_7005904400(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005902c38;
    { uint64_t ea = c->sp + 0x34ull; ST32(ea, (uint32_t)c->x[1]); }
L_7005902c38:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(c->sp + 0x30ull);
    c->x[30] = 0x7005902c44ull; f_7005903000(c);
    c->x[0] = (uint32_t)(0xbull);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x1dull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005902c58ull; f_7005905000(c);
L_7005902c58:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005903000(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x44ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[21] = (uint32_t)(0x4ull);
    if (c->x[19] == 0) goto L_700590316c;
    c->x[1] = (uint64_t)(0x7005907000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x0ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x700590303cull; f_7005909800(c);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    if (c->x[20] == 0) goto L_700590316c;
    { uint64_t ea = c->x[20] + 0x48ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[20] + 0x58ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x10ull);
    { uint64_t ea = c->x[20] + 0x58ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[21] = (uint32_t)(0x3ull);
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x2e70ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3a80000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    if (c->x[22] == 0) goto L_700590316c;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0xf208ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2180000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005903094ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(c->x[22] + 0x660ull);
    c->x[9] = (uint64_t)(c->x[22] + 0x6acull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint64_t)((COND_NE(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x7f800000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_700590316c;
    c->x[11] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_700590316c;
    c->v[0] = (uint32_t)c->x[8];
    c->v[1] = (uint32_t)c->x[9];
    c->v[2] = VS32(0) & ~0x80000000u;
    c->v[3] = VS32(1) & ~0x80000000u;
    c->x[10] = (uint32_t)(0x48000000ull);
    c->v[4] = (uint32_t)c->x[10];
    c->nzcv = cmp_s(c, VSF32(2), VSF32(4));
    if (COND_HI(c)) goto L_700590316c;
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    if (COND_HI(c)) goto L_700590316c;
    fp_op_s(c, FOP_SUB, 0, 1, 0);
    { uint64_t ea = c->sp + 0x44ull; ST32(ea, VS32(0)); }
    c->x[21] = (uint32_t)(0x2ull);
    c->v[1] = 0x41200000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GT(c)) goto L_700590312c;
    c->v[1] = VS32(1) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GE(c)) goto L_700590316c;
    c->x[21] = (uint32_t)(0x1ull);
    goto L_7005903130;
L_700590312c:;
    c->x[21] = (uint32_t)(0u | 0u);
L_7005903130:;
    { uint64_t ea = c->x[19] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[1] = VS32(0) & ~0x80000000u;
    c->v[4] = (uint32_t)c->x[10];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(4));
    if (COND_HI(c)) goto L_7005903168;
    c->v[0] = 0u;
    if ((uint32_t)c->x[21] == 0) goto L_7005903158;
    c->x[8] = (uint32_t)(0x43340000ull);
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_ADD, 0, 0, 1);
L_7005903158:;
    { uint64_t ea = c->x[20] + 0x44ull; ST32(ea, VS32(0)); }
    c->v[0] = 0x3f800000ull;
    { uint64_t ea = c->x[20] + 72; ST32(ea, VS32(0)); ST32(ea + 4, VS32(0)); }
    goto L_700590316c;
L_7005903168:;
    c->x[21] = (uint32_t)(0x3ull);
L_700590316c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[21]);
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x44ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005903180ull; f_7005905000(c);
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005905000(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[20] = (uint64_t)(0x700590e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + (c->x[19] << 2));
L_700590501c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[10] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_700590501c;
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint64_t)(c->x[20] + 0x40ull);
    c->x[8] = (uint64_t)(c->x[8] + (c->x[19] << 4));
    { uint64_t ea = c->x[8] + 0; ST32(ea, (uint32_t)c->x[1]); ST32(ea + 4, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[8] + 8; ST32(ea, (uint32_t)c->x[3]); ST32(ea + 4, (uint32_t)c->x[10]); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x4ull));
    if (COND_LS(c)) goto L_7005905054;
    c->x[9] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[10] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700590507c;
L_7005905054:;
    c->x[8] = (uint64_t)(0x7005907000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x80ull);
    { uint64_t ea = c->x[8] + (c->x[19] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x7005900000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x0ull);
    c->x[0] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x700590507cull; rt_dispatch(c); c->pc = 0;
L_700590507c:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005908c00(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005908c14ull; f_7005909800(c);
    if (c->x[0] == 0) goto L_7005908c34;
    c->x[8] = (uint32_t)(0x3f800000ull);
    (void)(subs32(c, (uint32_t)c->x[19], 0x0ull));
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u));
    { uint64_t ea = c->x[0] + 72; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0x58ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x10ull);
    { uint64_t ea = c->x[0] + 0x58ull; ST8(ea, (uint32_t)c->x[8]); }
L_7005908c34:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005909800(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x6f80ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x10d0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005909834ull; rt_dispatch(c); c->pc = 0;
    if (c->x[0] != 0) goto L_70059098fc;
    c->x[21] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    if (c->x[22] == 0) goto L_70059098e8;
    { uint64_t ea = c->x[22] + 0x100ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x190ull);
L_7005909858:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[9]));
    if ((uint32_t)c->x[10] != 0) goto L_70059098a4;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[9], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005909858;
    c->x[21] = (uint64_t)(0ull | c->x[9]);
    { uint64_t ea = c->x[21] + 0x8ull; ST64(ea, c->x[19]); }
    { uint64_t ea = c->x[21] + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 32; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->x[19] + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0xc0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 48; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->x[21] + 0x40ull; ST64(ea, c->x[12]); }
    { uint64_t ea = c->x[20] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 88; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->x[21] + 0x68ull; ST64(ea, c->x[12]); }
L_70059098a4:;
    c->x[24] = (uint64_t)(0x700590e000ull);
    c->x[24] = (uint64_t)(c->x[24] + 0x148ull);
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    (void)(logic64(c, c->x[23] & 0x3ull));
    if (COND_NE(c)) goto L_70059098e8;
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[24])));
    if (COND_CC(c)) goto L_70059098e8;
    c->x[9] = (uint32_t)(0x9c00ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    c->x[9] = (uint64_t)(c->x[24] + c->x[9]);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[9])));
    if (COND_CS(c)) goto L_70059098e8;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x1ull);
    c->pc = c->x[23]; c->x[30] = 0x70059098e4ull; rt_dispatch(c); c->pc = 0;
    goto L_70059098ec;
L_70059098e8:;
    c->x[0] = (uint64_t)(0ull | 0ull);
L_70059098ec:;
    if (c->x[21] == 0) goto L_70059098fc;
    { uint64_t ea = c->x[21] + 0x48ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint32_t)(0x2ull);
    stl32(c->x[21], c->x[8]);
L_70059098fc:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700590a000(Cpu *c) {
    goto L_7005918000;
L_7005918000:;
    { uint64_t ea = c->sp - 80; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(0x700591a000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x0ull);
    c->x[9] = (uint64_t)(c->x[19] - c->x[8]);
    (void)(logic64(c, c->x[9] & 0x1full));
    if (COND_NE(c)) goto L_7005918158;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 5) & 0x7ffffffffffffffull);
    (void)(subs64(c, c->x[9], 0x1ccull));
    if (COND_CS(c)) goto L_7005918158;
    c->x[21] = (uint64_t)(0x7005916000ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x0ull);
    c->x[21] = (uint64_t)(c->x[21] + (c->x[9] << 4));
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x66b0ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_7005918158;
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, 0u); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_700591807c;
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CS(c)) goto L_70059180a0;
L_700591807c:;
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x561cull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x40000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x700591809cull; rt_dispatch(c); c->pc = 0;
    goto L_70059180c0;
L_70059180a0:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x6c98ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2ab0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x70059180c0ull; rt_dispatch(c); c->pc = 0;
L_70059180c0:;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005918158;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD8(ea); c->x[1] = (uint64_t)(v); }
    if ((uint32_t)c->x[1] != 0) goto L_7005918150;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 8) & 0x3ull);
    if ((uint32_t)c->x[8] == 0) goto L_7005918144;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->x[21] + 0x4ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005918114;
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x561cull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x40000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005918108ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005918158;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    goto L_7005918138;
L_7005918114:;
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0xf57cull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3c0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005918130ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005918158;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_7005918138:;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005918158;
L_7005918144:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[1] = (uint32_t)(0u | 0u);
    goto L_7005918160;
L_7005918150:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005918160;
L_7005918158:;
    c->x[0] = (uint32_t)(0x2ull);
    c->x[1] = (uint32_t)(0u | 0u);
L_7005918160:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 80; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005a01400(Cpu *c) {
    c->x[1] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[27]);
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x398ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0x7005a0b000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x820ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_EQ(c)) goto L_7005a014e0;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a014e0;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x423full);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xf0000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005a014e0;
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x14ull);
    c->x[30] = 0x7005a014e0ull; f_7005a0b000(c);
L_7005a014e0:;
    /* hint */
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7000921a10ull; return;
}

void f_7005a01c00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4f8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x310ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a01d80;
    { uint64_t ea = c->x[0] + 0x218ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a01d80;
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x100ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a01cbcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint64_t)(0x7005a0e000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x110ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a01d80;
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x108ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a01ce4ull; rt_dispatch(c); c->pc = 0;
    c->x[2] = (uint32_t)((uint32_t)c->x[0] & 0x1ull);
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x120ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a01d08ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] != 0) goto L_7005a01d2c;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] ^ 0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x120ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a01d2cull; rt_dispatch(c); c->pc = 0;
L_7005a01d2c:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_CC(c)) goto L_7005a01d68;
    (void)(subs32(c, (uint32_t)c->x[0], 0xbull));
    if (COND_HI(c)) goto L_7005a01d68;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4f8ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[8] + 0x4fcull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x9ull);
    c->x[30] = 0x7005a01d64ull; f_7005a0b000(c);
    goto L_7005a01d80;
L_7005a01d68:;
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0xbull);
    c->x[30] = 0x7005a01d80ull; f_7005a0b000(c);
L_7005a01d80:;
    /* hint */
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    { uint64_t ea = c->x[0] + 0x4f8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x700209ea0cull; return;
}

void f_7005a02c00(Cpu *c) {
    { uint64_t ea = c->sp + 0x168ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x141cull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x76980000ull);
    (void)(subs32(c, (uint32_t)c->x[1], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a02cc0;
    c->x[2] = (uint32_t)(0xec02ull);
    c->x[2] = (uint32_t)((c->x[2] & 0xffffffff0000ffffull) | 0x18180000ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x19ull);
    c->x[30] = 0x7005a02cc0ull; f_7005a0b000(c);
L_7005a02cc0:;
    /* hint */
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7002156b40ull; return;
}

void f_7005a04000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x140ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a0409cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[0], 16) & 0xffffull);
    c->x[18] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[18])));
    if (COND_EQ(c)) goto L_7005a040b4;
    goto L_7005a040d0;
L_7005a040b4:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x4ull);
    c->x[30] = 0x7005a040ccull; f_7005a0b000(c);
    goto L_7005a041f4;
L_7005a040d0:;
    (void)(adds32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_LT(c)) goto L_7005a041cc;
    c->x[8] = (uint32_t)(0xfffeull);
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[8])));
    if (COND_GT(c)) goto L_7005a041cc;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005a041d4;
    { uint64_t ea = c->x[8] + 0x2f8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005a041d4;
    { uint64_t ea = c->x[8] + 0x1830ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005a041d4;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    if (COND_LE(c)) goto L_7005a041d4;
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x1840ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005a041d4;
    { uint64_t ea = c->sp + 0x320ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    if (COND_LT(c)) goto L_7005a041d4;
    { uint64_t ea = c->sp + 0x30cull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint32_t)(adds32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005a041d4;
    (void)(subs32(c, (uint32_t)c->x[11], 0x0ull));
    if (COND_LE(c)) goto L_7005a041d4;
    { uint64_t ea = c->sp + 0x310ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[12] = (uint32_t)(0x3fffffffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_HI(c)) goto L_7005a041d4;
    c->x[1] = (uint32_t)(adds32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005a041d4;
    { uint64_t ea = c->sp + 0x314ull; ST32(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[2] - 0x20ull);
    c->x[3] = (uint32_t)(0xedbeull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x54d0000ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x138ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a0417cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005a041dc;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->x[9] = (uint32_t)(0xa5d00000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x4c8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x320ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x314ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + 0x8ull);
    stl32(c->x[10], c->x[11]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] + (uint32_t)c->x[3]);
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[0] = (uint32_t)(0x3ull);
    c->x[30] = 0x7005a041c8ull; f_7005a0b000(c);
    goto L_7005a041f4;
L_7005a041cc:;
    c->x[1] = (uint32_t)(0x1ull);
    goto L_7005a041e0;
L_7005a041d4:;
    c->x[1] = (uint32_t)(0x2ull);
    goto L_7005a041e0;
L_7005a041dc:;
    c->x[1] = (uint32_t)(0x3ull);
L_7005a041e0:;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x5ull);
    c->x[30] = 0x7005a041f4ull; f_7005a0b000(c);
L_7005a041f4:;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xdf34ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x700209df34ull; return;
}

void f_7005a06000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[8], 16) & 0xffffull);
    c->x[18] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[18])));
    if (COND_EQ(c)) goto L_7005a060a4;
    goto L_7005a060ac;
L_7005a060a4:;
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    goto L_7005a060bc;
L_7005a060ac:;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)(~0u));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
L_7005a060bc:;
    /* hint */
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7000282a5cull; return;
}

void f_7005a06800(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4c8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[9], 16) & 0xffffull);
    c->x[10] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (COND_NE(c)) goto L_7005a068b4;
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    c->x[10] = (uint32_t)(0xa5d00000ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[10]);
L_7005a068b4:;
    { uint64_t ea = c->x[8] + 0x4c8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7000b21a50ull; return;
}

void f_7005a08400(Cpu *c) {
    { uint64_t ea = c->x[19] + 252; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[8]); }
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xfcull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x100ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | c->x[8]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x16ull);
    c->x[30] = 0x7005a084acull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x70023bcd30ull; return;
}

void f_7005a09000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[1], 0x0ull));
    if (COND_LE(c)) goto L_7005a0913c;
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x11ull);
    c->x[30] = 0x7005a090acull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x70020b2a98ull; return;
L_7005a0913c:;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    if (COND_GT(c)) goto L_7005a091d0;
    c->pc = 0x70020b2a3cull; return;
L_7005a091d0:;
    c->pc = 0x70020b2a98ull; return;
}

void f_7005a0a000(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x7002a9f6fcull; f_7002a9f6f8(c); c->pc = 0; return;
}

void f_7005a0a100(Cpu *c) {
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[8], 16) & 0xffffull);
    c->x[10] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005a0a1b0;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
L_7005a0a1b0:;
    /* hint */
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x7002176450ull; return;
}

void f_7005a0b000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x1c0ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->x[23] = (uint64_t)(0ull | c->x[4]);
    c->x[26] = (uint64_t)(0x7005a0e000ull);
    c->x[26] = (uint64_t)(c->x[26] + 0x180ull);
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[26] + 0xfcull);
L_7005a0b03c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[9] != 0) goto L_7005a0b03c;
    c->x[9] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005a0b03c;
    c->x[9] = (uint64_t)(c->x[26] + (c->x[19] << 2));
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[25] = (uint64_t)(v); }
    c->x[25] = (uint32_t)((uint32_t)c->x[25] + 0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[25]); }
    c->x[10] = (uint64_t)(c->x[26] + 0x100ull);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[19] << 5));
    { uint64_t ea = c->x[10] + 0; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->x[10] + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    stl32(c->x[8], 0ull);
    (void)(subs32(c, (uint32_t)c->x[25], 0x4ull));
    if (COND_LS(c)) goto L_7005a0b088;
    c->x[9] = (uint32_t)((uint32_t)c->x[25] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[25] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a0b15c;
L_7005a0b088:;
    c->x[8] = (uint64_t)(0x7005a0f000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x0ull);
    { uint64_t ea = c->x[8] + (c->x[19] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0x7005a00000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x0ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[1] = (uint64_t)(c->sp + 0x80ull);
L_7005a0b0a4:;
    { uint64_t ea = c->x[8]; uint64_t v = LD8(ea); c->x[8] = c->x[8] + 1; c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005a0b0b4;
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[9]); c->x[1] = c->x[1] + 1; }
    goto L_7005a0b0a4;
L_7005a0b0b4:;
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    c->x[30] = 0x7005a0b0bcull; f_7005a0b178(c);
    c->x[8] = (uint32_t)(0x20ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x61ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x3dull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005a0b0dcull; f_7005a0b178(c);
    c->x[8] = (uint32_t)(0x20ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x62ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x3dull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005a0b0fcull; f_7005a0b178(c);
    c->x[8] = (uint32_t)(0x20ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x63ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x3dull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005a0b11cull; f_7005a0b178(c);
    c->x[8] = (uint32_t)(0x20ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x64ull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[8] = (uint32_t)(0x3dull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x7005a0b13cull; f_7005a0b178(c);
    c->x[8] = (uint32_t)(0xaull);
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[8]); c->x[1] = c->x[1] + 1; }
    { uint64_t ea = c->x[1] + 0x0ull; ST8(ea, 0u); }
    c->x[0] = (uint64_t)(c->sp + 0x80ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a0b15cull; rt_dispatch(c); c->pc = 0;
L_7005a0b15c:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x1c0ull);
    c->pc = 0; return;
}

void f_7005a0b178(Cpu *c) {
    c->x[2] = (uint32_t)(0x10ull);
L_7005a0b17c:;
    c->x[3] = (uint64_t)(ROR64(c->x[0], 60) & 0xfull);
    c->x[4] = (uint32_t)((uint32_t)c->x[3] + 0x30ull);
    c->x[5] = (uint32_t)((uint32_t)c->x[3] + 0x57ull);
    (void)(subs32(c, (uint32_t)c->x[3], 0x9ull));
    c->x[4] = (uint32_t)((COND_LS(c)) ? (uint32_t)c->x[4] : (uint32_t)((uint32_t)c->x[5]));
    { uint64_t ea = c->x[1]; ST8(ea, (uint32_t)c->x[4]); c->x[1] = c->x[1] + 1; }
    c->x[0] = (uint64_t)(ROR64(c->x[0], 60) & 0xfffffffffffffff0ull);
    c->x[2] = (uint32_t)(subs32(c, (uint32_t)c->x[2], 0x1ull));
    if (COND_NE(c)) goto L_7005a0b17c;
    c->pc = 0; return;
}

void f_7005a0b300(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    { uint64_t ea = c->x[19] + 0x308ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005a0b3b0;
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x40ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x4ull; ST32(ea, (uint32_t)c->x[9]); }
L_7005a0b3b0:;
    /* hint */
    { uint64_t ea = c->x[19] + 0x308ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x800ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005a0b3f0;
    { uint64_t ea = c->x[8] + 0x800ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[8] + 0x808ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x258ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | c->x[10]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x25ull);
    c->x[30] = 0x7005a0b3f0ull; f_7005a0b000(c);
L_7005a0b3f0:;
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    c->pc = 0x700216feccull; return;
}

void f_7005a1097c(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[23]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[12] = (uint32_t)(0x4000000ull);
    c->x[10] = (uint32_t)(0x4240ull);
    c->x[15] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xf0000ull);
    c->x[11] = (uint64_t)(c->x[2] + 0x40ull);
    c->x[12] = (uint64_t)(c->x[0] + c->x[12]);
    c->x[13] = (uint32_t)(0x1cull);
    /* hint */
    c->x[14] = (uint64_t)(0x7005a10f08ull);
    c->x[15] = (uint64_t)((c->x[15] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[16] = (uint32_t)(0x200ull);
    c->x[17] = (uint64_t)(0ull | 0x7fffff0000ull);
L_7005a109c0:;
    c->x[18] = (uint64_t)(c->x[14] + c->x[9] * c->x[13]);
    { uint64_t ea = c->x[18] + 0x0ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[3] + c->x[1]);
    { uint64_t ea = c->x[3] + 0x8ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0x24ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[3] = (uint64_t)(a); c->x[6] = (uint64_t)(b); }
    c->x[7] = (uint32_t)((uint32_t)c->x[4] - 0x1ull);
    c->x[19] = (uint32_t)((uint32_t)c->x[5] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[7], (uint32_t)((uint32_t)c->x[10])));
    c->x[7] = (uint64_t)(c->x[6] - 0x10000ull);
    if (COND_CC(c)) (void)subs32(c, (uint32_t)c->x[19], (uint32_t)c->x[10]); else c->nzcv = 0x20000000ull;
    c->x[19] = (uint64_t)(c->x[3] - 0x10000ull);
    if (COND_CC(c)) (void)subs64(c, c->x[7], c->x[15]); else c->nzcv = 0x20000000ull;
    if (COND_LS(c)) (void)subs64(c, c->x[19], c->x[15]); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_7005a10af8;
    { uint64_t ea = c->x[18] + 0x4ull; uint64_t v = LD32(ea); c->x[19] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[5], 0x200ull));
    c->x[7] = (uint32_t)(0u | 0u);
    c->x[21] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[5] : (uint32_t)((uint32_t)c->x[16]));
    c->x[20] = (uint32_t)(udiv32((uint32_t)c->x[19], (uint32_t)c->x[5]));
    c->x[20] = (uint32_t)((uint32_t)c->x[19] - (uint32_t)c->x[20] * (uint32_t)c->x[5]);
L_7005a10a14:;
    c->x[22] = (uint32_t)((uint32_t)c->x[7] + (uint32_t)c->x[20]);
    c->x[23] = (uint32_t)(udiv32((uint32_t)c->x[22], (uint32_t)c->x[5]));
    c->x[22] = (uint32_t)((uint32_t)c->x[22] - (uint32_t)c->x[23] * (uint32_t)c->x[5]);
    c->x[22] = (uint64_t)(c->x[6] + ((uint64_t)(uint32_t)c->x[22] << 3));
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    if ((uint32_t)c->x[23] == 0) goto L_7005a10af8;
    (void)(subs32(c, (uint32_t)c->x[23], (uint32_t)((uint32_t)c->x[19])));
    if (COND_EQ(c)) goto L_7005a10a44;
    c->x[21] = (uint32_t)(subs32(c, (uint32_t)c->x[21], 0x1ull));
    c->x[7] = (uint32_t)((uint32_t)c->x[7] + 0x1ull);
    if (COND_NE(c)) goto L_7005a10a14;
    goto L_7005a10af8;
L_7005a10a44:;
    { uint64_t ea = c->x[22] + 0x4ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[5], (uint32_t)((uint32_t)c->x[4])));
    if (COND_CS(c)) goto L_7005a10af8;
    { uint64_t ea = c->x[18] + 0x8ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[3] + (uint64_t)(uint32_t)c->x[4] * (uint64_t)(uint32_t)c->x[5]);
    { uint64_t ea = c->x[11] + (c->x[9] << 3); ST64(ea, c->x[3]); }
    { uint64_t ea = c->x[3] + 0x0ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    (void)(subs64(c, c->x[4], (uint64_t)(c->x[0])));
    if (COND_CS(c)) (void)subs64(c, c->x[4], c->x[12]); else c->nzcv = 0x20000000ull;
    if (COND_CS(c)) goto L_7005a10af8;
    { uint64_t ea = c->x[18] + 0x18ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x20ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[5] = (uint64_t)(c->x[5] + c->x[0]);
    (void)(subs64(c, c->x[4], (uint64_t)(c->x[5])));
    if (COND_NE(c)) goto L_7005a10af8;
    { uint64_t ea = c->x[3] + 0x10ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x14ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[4], (uint32_t)((uint32_t)c->x[5])));
    if (COND_NE(c)) goto L_7005a10af8;
    { uint64_t ea = c->x[3] + 0x14ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    if ((uint32_t)c->x[4] != 0) goto L_7005a10af8;
    { uint64_t ea = c->x[18] + 12; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->x[3] + c->x[4]; uint64_t v = LD32(ea); c->x[18] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[18], (uint32_t)((uint32_t)c->x[5])));
    if (COND_NE(c)) goto L_7005a10af8;
    c->x[5] = (uint32_t)((uint32_t)c->x[4] + 0x10ull);
    { uint64_t ea = c->x[3] + (uint64_t)(uint32_t)c->x[5]; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[5], (uint32_t)((uint32_t)c->x[18])));
    if (COND_NE(c)) goto L_7005a10af8;
    c->x[18] = (uint32_t)((uint32_t)c->x[4] + 0x8ull);
    { uint64_t ea = c->x[3] + (uint64_t)(uint32_t)c->x[18]; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + (c->x[9] << 3); ST64(ea, c->x[18]); }
    c->x[5] = (uint64_t)(c->x[18] - 0x10000ull);
    (void)(subs64(c, c->x[5], (uint64_t)(c->x[15])));
    if (COND_HI(c)) goto L_7005a10af8;
    c->x[18] = (uint32_t)((uint32_t)c->x[4] + 0x18ull);
    { uint64_t ea = c->x[3] + (uint64_t)(uint32_t)c->x[18]; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    c->x[18] = (uint64_t)(c->x[18] - 0x10000ull);
    (void)(subs64(c, c->x[18], (uint64_t)(c->x[17])));
    if (COND_CS(c)) goto L_7005a10af8;
    (void)(subs64(c, c->x[9], 0x6ull));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[8] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x8ull));
    if (COND_NE(c)) goto L_7005a109c0;
L_7005a10af8:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[0] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[23] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005a10d50(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x40ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x70ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x78ull));
    if (COND_NE(c)) goto L_7005a10dc0;
    c->x[8] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[13] = (uint32_t)(0x70ull);
    c->x[10] = (uint64_t)(0x7005a10000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0xf34ull);
    c->x[12] = (uint64_t)(0ull | c->x[0]);
L_7005a10d78:;
    c->x[13] = (uint32_t)((uint32_t)c->x[13] + 0x8ull);
    { uint64_t ea = c->x[11] + (uint64_t)(uint32_t)c->x[13]; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[12]; uint64_t v = LD64(ea); c->x[12] = c->x[12] + 8; c->x[13] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a10dc4;
    (void)(subs64(c, c->x[9], 0x6ull));
    c->x[8] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x7ull));
    if (COND_EQ(c)) goto L_7005a10dc4;
    { uint64_t ea = c->x[10] - 4; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[13] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->x[0] + 0x48ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + 0x1cull);
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[0] = (uint64_t)(0ull | c->x[12]);
    { uint64_t ea = c->x[11] + c->x[13]; uint64_t v = LD32(ea); c->x[14] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[15])));
    if (COND_EQ(c)) goto L_7005a10d78;
    goto L_7005a10dc4;
L_7005a10dc0:;
    c->x[8] = (uint32_t)(0u | 0u);
L_7005a10dc4:;
    c->x[0] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->pc = 0; return;
}

void f_7005a1c000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x340ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[2]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[4]); ST64(ea + 8, c->x[5]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[6]); ST64(ea + 8, c->x[7]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[16]); ST64(ea + 8, c->x[17]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[18]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[24]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[26]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[29]); }
    { uint64_t ea = c->sp + 0xf0ull; ST64(ea, c->x[30]); }
    c->x[16] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0xf8ull; ST64(ea, c->x[16]); }
    { uint64_t ea = c->sp + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005a0e000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x148ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005a00000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x0ull);
    c->x[2] = (uint64_t)(0x7005a0e000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x180ull);
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[2] + 0x10000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x40ull);
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005a1c0bcull; f_7005a10234(c);
    { uint64_t ea = c->sp + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->nzcv = c->x[16] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[4] = (uint64_t)(a); c->x[5] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[6] = (uint64_t)(a); c->x[7] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[16] = (uint64_t)(a); c->x[17] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[18] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[29] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x340ull);
    { uint64_t ea = c->sp - 112; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); c->sp = ea; }
    c->pc = 0x7000896194ull; return;
}

static uint64_t g_ascend_owner = 0;
static float g_ascend_player_pos[3] = {0.0f, 0.0f, 0.0f};
static int g_ascend_player_valid = 0;

static int wxlm_ascend_plausible(float v) {
    return (v == v) && (v > -100000.0f) && (v < 100000.0f);
}

static float wxlm_ascend_read_f32(uint64_t addr) {
    uint32_t bits = LD32(addr);
    float f = 0.0f;
    __builtin_memcpy(&f, &bits, sizeof(f));
    return f;
}

static uint32_t wxlm_ascend_f32_bits(float f) {
    uint32_t bits = 0;
    __builtin_memcpy(&bits, &f, sizeof(bits));
    return bits;
}

void f_7005c01000(Cpu *c) {
    c->x[8] = 0x461c3e00ull;
    { uint64_t ea = c->x[24] + 0x2b4ull; c->v[10] = LD32(ea); }
    c->pc = 0x7001d4c7f4ull; return;
}

void f_7005c01010(Cpu *c) {
    c->x[27] = 0x461c3e00ull;
    c->x[28] = 0x1f75ull;
    c->pc = 0x7001d4ca18ull; return;
}

void f_7005c01020(Cpu *c) {
    c->v[0] = 0x461c4000ull;
    c->pc = 0; return;
}

void f_7005c01030(Cpu *c) {
    c->v[3] = 0x461c38ccull;
    { uint64_t ea = c->sp + 0x140ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x700085e464ull; return;
}

void f_7005c01040(Cpu *c) {
    uint64_t mgr = c->x[0];
    c->sp = (uint64_t)(c->sp - 0x120ull);
    c->pc = 0x7001d4c78cull;
    f_7001d4c788(c);
    c->pc = 0;
    if ((c->x[0] & 0xffu) == 0 && mgr) {
        uint16_t reason = LD16(mgr + 0x7cull);
        uint16_t rejection = (uint16_t)(reason & ~0x0040u);
        if ((rejection & 0x0408u) != 0 && (rejection & ~0x0408u) == 0) {
            ST16(mgr + 0x7cull, (uint16_t)(reason & ~0x0408u));
            c->x[0] = 1ull;
        }
    }
}

void f_7005c01050(Cpu *c) {
    uint64_t mgr = c->x[0];
    uint64_t uctx = c->x[1];
    g_ascend_owner = 0;
    g_ascend_player_valid = 0;
    if (mgr && uctx) {
        uint64_t actor = LD64(uctx + 8ull);
        if (actor) {
            float px = wxlm_ascend_read_f32(actor + 0x2b4ull);
            float py = wxlm_ascend_read_f32(actor + 0x2b8ull);
            float pz = wxlm_ascend_read_f32(actor + 0x2bcull);
            if (wxlm_ascend_plausible(px) && wxlm_ascend_plausible(py) && wxlm_ascend_plausible(pz)) {
                g_ascend_player_pos[0] = px;
                g_ascend_player_pos[1] = py;
                g_ascend_player_pos[2] = pz;
                g_ascend_player_valid = 1;
                g_ascend_owner = mgr;
            }
        }
    }
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x700085dffcull;
    f_700085dff8(c);
    c->pc = 0;
    if (g_ascend_owner == mgr) {
        g_ascend_owner = 0;
    }
    g_ascend_player_valid = 0;
}

void f_7005c01060(Cpu *c) {
    uint64_t handle = c->x[0];
    uint64_t pos = c->x[1];
    { uint64_t ea = c->x[0] + 0x2ull; uint64_t v = (uint64_t)(int64_t)(int16_t)LD16(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x70006d25f8ull;
    f_70006d25f4(c);
    c->pc = 0;
    uint64_t ret_x0 = c->x[0];
    if (handle && pos && g_ascend_player_valid && g_ascend_owner) {
        if (handle == g_ascend_owner + 0x3cull || handle == g_ascend_owner + 0x4cull ||
            handle == g_ascend_owner + 0x5cull || handle == g_ascend_owner + 0x6cull) {
            float dx = wxlm_ascend_read_f32(pos) - g_ascend_player_pos[0];
            float dy = wxlm_ascend_read_f32(pos + 4ull) - g_ascend_player_pos[1];
            float dz = wxlm_ascend_read_f32(pos + 8ull) - g_ascend_player_pos[2];
            if (wxlm_ascend_plausible(dx) && wxlm_ascend_plausible(dy) && wxlm_ascend_plausible(dz)) {
                float dist = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
                float scale = 1.0f;
                if ((dist == dist) && dist > 40.0f && dist <= 10000.0f) {
                    scale = 1.0f + (dist - 40.0f) / 240.0f;
                    if (scale > 4.0f) scale = 4.0f;
                }
                uint32_t sbits = wxlm_ascend_f32_bits(scale);
                uint64_t scale_ea = c->sp - 16ull;
                c->sp = scale_ea;
                ST32(scale_ea, sbits);
                ST32(scale_ea + 4ull, sbits);
                ST32(scale_ea + 8ull, sbits);
                c->x[0] = handle;
                c->x[1] = pos;
                c->x[2] = scale_ea;
                f_70024382c4(c);
                c->sp = scale_ea + 16ull;
                c->x[0] = ret_x0;
                c->pc = 0;
            }
        }
    }
}
