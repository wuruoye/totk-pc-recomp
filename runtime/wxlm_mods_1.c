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

void f_7005203000(Cpu *c) {
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
    if ((uint32_t)c->x[22] != 0) goto L_7005203274;
    c->x[8] = (uint32_t)(0xedbeull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x54d0000ull);
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005203274;
    c->x[8] = (uint64_t)(c->sp + 0x578ull);
    (void)(subs64(c, c->x[2], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005203274;
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[24])));
    if (COND_NE(c)) goto L_7005203274;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x700520e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] - c->x[9]);
    c->x[9] = (uint32_t)(0xdd00ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2090000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_7005203274;
    { uint64_t ea = c->sp + 0x3b8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[8], 16) & 0xffffull);
    c->x[10] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005203274;
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_LT(c)) goto L_7005203274;
    c->x[9] = (uint32_t)(0xfffeull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_GT(c)) goto L_7005203274;
    { uint64_t ea = c->sp + 0x3ccull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    if (COND_LE(c)) goto L_7005203274;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    if (COND_LT(c)) goto L_7005203274;
    c->x[11] = (uint32_t)(adds32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005203274;
    c->x[12] = (uint32_t)(0x3fffffffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_HI(c)) goto L_7005203274;
    c->x[2] = (uint32_t)(adds32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005203274;
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[3] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->x[9] = (uint32_t)(0xa5d00000ull);
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[3]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x700520316cull; f_7005204000(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005203274;
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_EQ(c)) goto L_700520332c;
    { uint64_t ea = c->sp + 0x3ccull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[1] = (uint32_t)((uint32_t)c->x[1] + (uint32_t)c->x[2]);
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x3ccull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] + (uint32_t)c->x[8]);
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x8ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x5ull);
    c->x[30] = 0x70052031a4ull; f_7005206000(c);
    /* hint */
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x9c3aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xee190000ull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
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
    c->x[30] = (uint64_t)(0x700520e000ull);
    c->x[30] = (uint64_t)(c->x[30] + 0x148ull);
    { uint64_t ea = c->x[30] + 0x0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xa978ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[30] = (uint64_t)(c->x[30] + c->x[17]);
    c->pc = 0x700209a978ull; return;
L_7005203274:;
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
    c->x[30] = (uint64_t)(0x700520e000ull);
    c->x[30] = (uint64_t)(c->x[30] + 0x148ull);
    { uint64_t ea = c->x[30] + 0x0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xa95cull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[30] = (uint64_t)(c->x[30] + c->x[17]);
    c->pc = 0; f_700016fdcc(c); c->pc = 0x700209a95cull; return;
L_700520332c:;
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
    c->pc = 0x70027ea690ull; return;
}

void f_7005301700(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    c->pc = 0x70023bb684ull; f_70023bb680(c); c->pc = 0; return;
}

void f_7005301800(Cpu *c) {
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
    c->x[3] = (uint64_t)(c->x[3] + 0xb00ull);
    c->x[30] = 0x70053018b0ull; f_700530563c(c);
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

void f_7005302700(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x160ull);
    c->pc = 0x70007a9110ull; f_70007a910c(c); c->pc = 0; return;
}

void f_7005302800(Cpu *c) {
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
    c->x[3] = (uint64_t)(c->x[3] + 0xb00ull);
    c->x[30] = 0x70053028b0ull; f_7005305bd8(c);
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

void f_70053044b0(Cpu *c) {
    c->v[0] = 0x41a00000ull;
    { uint64_t ea = c->x[1] + 0x18ull; c->v[1] = LD32(ea); }
    c->v[3] = 0xbf800000ull;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[0] + 0x30ull; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    { uint64_t ea = c->x[1] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
    c->v[4] = VS32(2) ^ 0x80000000u;
    fp_op_s(c, FOP_ADD, 0, 1, 0);
    fp_op_s(c, FOP_ADD, 0, 0, 3);
    c->v[3] = 0x0ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[1] = COND_GT(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(3) : VS32(1);
    c->nzcv = cmp_s(c, VSF32(2), 0);
    c->v[1] = 0x3400000034000000ull;
    c->v[2] = COND_MI(c) ? VS32(4) : VS32(2);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(1));
    { uint64_t ea = c->x[0] + 40; ST32(ea, VS32(2)); ST32(ea + 4, VS32(0)); }
    if (COND_HI(c)) goto L_700530450c;
    { uint64_t ea = c->x[0] + 0x24ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x2cull; ST32(ea, VS32(0)); }
L_700530450c:;
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[2] = 0x3400000034000000ull;
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    if (COND_HI(c)) goto L_7005304544;
    c->x[8] = (uint32_t)(0x44610000ull);
    { uint64_t ea = c->x[1] + 0x14ull; c->v[0] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    { uint64_t ea = c->x[0] + 0x2cull; ST32(ea, VS32(0)); }
L_7005304544:;
    c->pc = 0; return;
}

void f_7005304da4(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_CC(c)) goto L_7005304e80;
    if ((uint32_t)c->x[1] == 0) goto L_7005304e80;
    c->x[9] = (uint32_t)(0xfa35ull);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[0], 1) & 0x7fffffffull);
    (void)(logic32(c, (uint32_t)c->x[1] & 0x1ull));
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3c8e0000ull);
    c->v[18] = 0x41c00000ull;
    c->v[19] = 0x3f800000ull;
    c->v[4] = (uint32_t)c->x[9];
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->v[20] = 0xbf000000ull;
    fp_op_s(c, FOP_MUL, 3, 3, 4);
    FP_SETS(4, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
    c->x[8] = (uint32_t)((uint32_t)c->x[1] + 0x1ull);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 1) & 0x7fffffffull);
    fp_op_s(c, FOP_DIV, 3, 3, 4);
    FP_SETS(4, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
    c->x[8] = (uint32_t)(0x42f00000ull);
    c->v[7] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x8000ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xc59d0000ull);
    c->v[17] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0xc4340000ull);
    fp_op_s(c, FOP_MUL, 5, 3, 4);
    fp_op_s(c, FOP_NMUL, 3, 3, 4);
    c->v[3] = COND_EQ(c) ? VS32(5) : VS32(3);
    c->v[5] = 0xc0c00000ull;
    fp_op_s(c, FOP_MUL, 4, 3, 3);
    fp_op_s(c, FOP_DIV, 5, 4, 5);
    fp_op_s(c, FOP_MUL, 6, 4, 4);
    fp_op_s(c, FOP_MUL, 16, 4, 6);
    fp_op_s(c, FOP_DIV, 7, 6, 7);
    fp_op_s(c, FOP_ADD, 5, 5, 19);
    fp_op_s(c, FOP_DIV, 17, 16, 17);
    fp_op_s(c, FOP_ADD, 5, 5, 7);
    fp_op_s(c, FOP_DIV, 6, 6, 18);
    c->v[18] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x8000ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x471d0000ull);
    fp_op_s(c, FOP_ADD, 5, 5, 17);
    fp_op_s(c, FOP_MUL, 3, 3, 5);
    fp_op_s(c, FOP_DIV, 18, 16, 18);
    fp_op_s(c, FOP_MUL, 16, 4, 16);
    fp_op_s(c, FOP_MUL, 4, 4, 20);
    c->v[20] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_MUL, 5, 2, 3);
    fp_op_s(c, FOP_NMUL, 3, 3, 0);
    fp_op_s(c, FOP_ADD, 4, 4, 19);
    fp_op_s(c, FOP_ADD, 4, 4, 6);
    fp_op_s(c, FOP_DIV, 16, 16, 20);
    fp_op_s(c, FOP_ADD, 4, 4, 18);
    fp_op_s(c, FOP_ADD, 4, 4, 16);
    fp_fma_s(c, 0, 0, 0, 4, 0, 5);
    fp_fma_s(c, 0, 0, 2, 4, 2, 3);
L_7005304e80:;
    c->pc = 0; return;
}

void f_70053052a0(Cpu *c) {
    { uint64_t ea = c->x[2] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[2] = b; }
    c->x[11] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[2] + 0x8ull; c->v[1] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(2));
    c->x[10] = (uint32_t)(VS32(1));
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    c->x[11] = (uint32_t)(0x7f7fffffull);
    c->x[10] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_GT(c)) goto L_70053053d0;
    if ((uint32_t)c->x[9] == 0) goto L_70053053d0;
    if ((uint32_t)c->x[10] == 0) goto L_70053053d0;
    { uint64_t ea = c->x[1] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[4] = b; }
    c->x[8] = (uint32_t)(0xe6ffull);
    { uint64_t ea = c->x[0] + 0x4ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x8ull; c->v[16] = LD32(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2edb0000ull);
    c->v[18] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_SUB, 6, 4, 3);
    { uint64_t ea = c->x[0] + 0x0ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 7, 5, 4);
    { uint64_t ea = c->x[0] + 0x8ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 17, 6, 6);
    fp_op_s(c, FOP_SUB, 16, 16, 5);
    fp_fma_s(c, 0, 0, 17, 7, 7, 17);
    fp_fma_s(c, 0, 0, 17, 16, 16, 17);
    c->nzcv = cmp_s(c, VSF32(17), VSF32(18));
    if (COND_PL(c)) goto L_7005305334;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005305334:;
    fp_op_s(c, FOP_SUB, 18, 2, 3);
    fp_op_s(c, FOP_SUB, 19, 0, 4);
    c->x[8] = (uint32_t)(0x126full);
    fp_op_s(c, FOP_SUB, 20, 1, 5);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xba830000ull);
    fp_op_s(c, FOP_MUL, 18, 18, 6);
    fp_fma_s(c, 0, 0, 18, 19, 7, 18);
    fp_fma_s(c, 0, 0, 18, 20, 16, 18);
    fp_op_s(c, FOP_DIV, 17, 18, 17);
    c->v[18] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x20c5ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f800000ull);
    c->nzcv = cmp_s(c, VSF32(17), VSF32(18));
    c->v[18] = (uint32_t)c->x[8];
    c->nzcv = COND_PL(c) ? cmp_s(c, VSF32(17), VSF32(18)) : 0x0ull;
    if (COND_LE(c)) goto L_700530537c;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700530537c:;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    fp_op_s(c, FOP_MUL, 6, 6, 17);
    fp_op_s(c, FOP_MUL, 7, 7, 17);
    fp_op_s(c, FOP_ADD, 3, 3, 6);
    fp_op_s(c, FOP_MUL, 6, 16, 17);
    fp_op_s(c, FOP_ADD, 4, 4, 7);
    fp_op_s(c, FOP_SUB, 2, 2, 3);
    fp_op_s(c, FOP_ADD, 3, 5, 6);
    fp_op_s(c, FOP_SUB, 0, 0, 4);
    fp_op_s(c, FOP_MUL, 2, 2, 2);
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x70053053b8ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d4c0000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->x[8] = (uint32_t)((COND_PL(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
L_70053053d0:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_70053053d8(Cpu *c) {
    { uint64_t ea = c->x[2] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[0] = b; }
    c->x[10] = (uint32_t)(0x126full);
    { uint64_t ea = c->x[0] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[1] = b; }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3a830000ull);
    { uint64_t ea = c->x[0] + 0x4ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[2] + 0x8ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x24ull; c->v[6] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    fp_op_s(c, FOP_MUL, 2, 2, 0);
    fp_op_s(c, FOP_MUL, 0, 0, 6);
    { uint64_t ea = c->x[0] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[6] = a; c->v[16] = b; }
    fp_fma_s(c, 0, 0, 1, 4, 3, 1);
    { uint64_t ea = c->x[0] + 0x0ull; c->v[4] = LD32(ea); }
    fp_fma_s(c, 0, 0, 2, 4, 3, 2);
    { uint64_t ea = c->x[0] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[7] = a; c->v[4] = b; }
    fp_fma_s(c, 0, 0, 1, 7, 5, 1);
    { uint64_t ea = c->x[0] + 0x20ull; c->v[7] = LD32(ea); }
    fp_fma_s(c, 0, 0, 2, 6, 5, 2);
    fp_fma_s(c, 0, 0, 0, 7, 3, 0);
    { uint64_t ea = c->x[1] + 0x34ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 4, 1);
    { uint64_t ea = c->x[0] + 40; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[6] = b; }
    fp_op_s(c, FOP_ADD, 2, 2, 16);
    fp_fma_s(c, 0, 0, 0, 4, 5, 0);
    { uint64_t ea = c->x[1] + 0x30ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 3, 1, 3);
    fp_op_s(c, FOP_ADD, 0, 6, 0);
    fp_fma_s(c, 0, 0, 3, 4, 2, 3);
    { uint64_t ea = c->x[1] + 56; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[5] = b; }
    fp_fma_s(c, 0, 0, 3, 4, 0, 3);
    c->v[4] = (uint32_t)c->x[10];
    fp_op_s(c, FOP_ADD, 3, 5, 3);
    c->x[8] = (uint32_t)(VS32(3));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)(0x7f800000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    if (COND_HI(c)) (void)subs32(c, (uint32_t)c->x[9], 0x0ull); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_7005305480;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005305480:;
    { uint64_t ea = c->x[1] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[4] = b; }
    c->x[11] = (uint32_t)(VS32(0));
    fp_op_s(c, FOP_MUL, 4, 1, 4);
    fp_fma_s(c, 0, 0, 4, 5, 2, 4);
    { uint64_t ea = c->x[1] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[6] = b; }
    fp_fma_s(c, 0, 0, 4, 5, 0, 4);
    { uint64_t ea = c->x[1] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[7] = b; }
    fp_op_s(c, FOP_MUL, 1, 1, 7);
    fp_op_s(c, FOP_ADD, 4, 6, 4);
    fp_fma_s(c, 0, 0, 1, 5, 2, 1);
    fp_op_s(c, FOP_DIV, 2, 4, 3);
    { uint64_t ea = c->x[1] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[5] = b; }
    fp_fma_s(c, 0, 0, 1, 4, 0, 1);
    fp_op_s(c, FOP_ADD, 1, 5, 1);
    fp_op_s(c, FOP_DIV, 1, 1, 3);
    c->v[3] = VS32(0) ^ 0x80000000u;
    c->x[9] = (uint32_t)(VS32(2));
    { uint64_t ea = c->x[3] + 0x8ull; ST32(ea, VS32(3)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    c->x[10] = (uint32_t)(VS32(1));
    { uint64_t ea = c->x[3] + 0; ST32(ea, VS32(2)); ST32(ea + 4, VS32(1)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    if (COND_LT(c)) (void)subs32(c, (uint32_t)c->x[9], (uint32_t)c->x[8]); else c->nzcv = 0x0ull;
    c->x[9] = (uint32_t)((uint32_t)c->x[11] & 0x7fffffffull);
    if (COND_LT(c)) (void)subs32(c, (uint32_t)c->x[9], (uint32_t)c->x[8]); else c->nzcv = 0x0ull;
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->x[0] = (uint32_t)((COND_PL(c)) ? 0u : (uint32_t)((uint32_t)c->x[8]));
    c->pc = 0; return;
}

void f_700530563c(Cpu *c) {
    c->x[8] = (uint64_t)(c->x[2] + 0x8ull);
L_7005305640:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005305640;
    c->x[8] = (uint64_t)(c->x[2] + 0x18ull);
    c->x[9] = (uint32_t)(0x1ull);
    stl32(c->x[8], c->x[9]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[3]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005305664(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x6f0ull);
    c->x[8] = (uint64_t)(c->x[2] + 0x4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    if ((uint32_t)c->x[8] == 0) goto L_70053058a8;
    c->x[8] = (uint64_t)(c->x[2] + 0x1e000ull);
    c->x[9] = (uint64_t)(c->x[2] + 0x1d000ull);
    c->x[23] = (uint64_t)(c->x[29] - 0x90ull);
    c->x[10] = (uint64_t)(c->x[8] + 0xc70ull);
    c->x[21] = (uint64_t)(c->x[9] + 0x690ull);
    c->x[20] = (uint64_t)(c->x[2] + 0x10ull);
    c->x[8] = (uint32_t)(0x1ull);
L_70053056ac:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[20]));
    if ((uint32_t)c->x[9] != 0) goto L_7005305888;
    { uint32_t st = stx32(c, c->x[20], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_70053056ac;
    { uint64_t ea = c->x[2] + 104; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0xc0ull; c->v[2] = LD128(ea); }
    c->x[24] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[2] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xd0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->x[23] + 96; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[2] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[2] + 96; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    c->x[25] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(c->x[2] + 0xf8ull);
    { uint64_t ea = c->x[23] + 64; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[2] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[2] + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[10]); ST64(ea + 8, c->x[3]); }
    { uint64_t ea = c->x[2] + 216; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[22] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->x[23] + 32; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[2] + 0xe0ull; c->v[0] = LD128(ea); }
    c->x[2] = (uint32_t)(0x648ull);
    { uint64_t ea = c->x[29] - 128; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[23] + 0x0ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005305718ull; f_7005304000(c);
    (void)(subs32(c, (uint32_t)c->x[22], 0x1ull));
    if (COND_NE(c)) goto L_7005305890;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    if (c->x[26] != 0) goto L_70053058a0;
    c->x[2] = (uint64_t)(0ull | c->x[25]);
    if ((uint32_t)c->x[19] != 0) goto L_70053058a4;
    c->x[8] = (uint64_t)(c->x[2] + 0x8ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[28], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_70053058a4;
    c->x[8] = (uint64_t)(c->x[2] + 0xcull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[27]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_HI(c)) goto L_70053058a4;
    { uint64_t ea = c->x[2] + 0x2208ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053058a4;
    { uint64_t ea = c->x[2] + 0x220cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[2] + 0x10ull);
    stl32(c->x[9], 0ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[28])));
    if (COND_NE(c)) goto L_70053058a8;
    c->x[8] = (uint32_t)(0x1ull);
L_7005305778:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[21]));
    if ((uint32_t)c->x[9] != 0) goto L_7005305888;
    { uint32_t st = stx32(c, c->x[21], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005305778;
    c->x[26] = (uint64_t)(c->x[21] + 0x4ull);
    c->x[9] = (uint64_t)(c->x[2] + 0xcull);
    c->x[1] = (uint32_t)(0x228ull);
    stl32(c->x[26], 0ull);
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; ST32(ea, 0u); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[21] + 12; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, 0u); }
    c->x[8] = (uint64_t)(lda32(c->x[9]));
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 40; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[21] + 20; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[21] + 0x20ull; ST64(ea, c->x[19]); }
    c->x[30] = 0x70053057c4ull; f_7005305bc0(c);
    c->x[8] = (uint32_t)(0xd6d8ull);
    { uint64_t ea = c->x[23] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[9] = (uint64_t)(c->x[25] + 0x1d000ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[25] + c->x[8]; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[23] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    c->x[8] = (uint64_t)(c->x[9] + 0x6f0ull);
    c->x[9] = (uint64_t)(0x700530a000ull);
    { uint64_t ea = c->x[21] + 0x38ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[8] + 0x40ull; ST128(ea, c->v[1]); }
    c->x[1] = (uint64_t)(c->sp + 0x18ull);
    c->x[2] = (uint32_t)(0x648ull);
    { uint64_t ea = c->x[8] + 32; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[23] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[21] + 64; ST32(ea, (uint32_t)c->x[28]); ST32(ea + 4, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[21] + 0x58ull; ST64(ea, c->x[19]); }
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[9] + 0x8a8ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint64_t)(c->x[25] + 0x1d000ull);
    { uint64_t ea = c->x[29] - 128; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x750ull);
    { uint64_t ea = c->x[21] + 0xb0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[21] + 0xb8ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[23] + 0x0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x10ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[8] + 0x0ull; ST128(ea, c->v[0]); }
    c->x[8] = (uint64_t)(c->x[25] + 0x1d000ull);
    c->x[0] = (uint64_t)(c->x[8] + 0x768ull);
    c->x[30] = 0x700530583cull; f_7005304000(c);
    { uint64_t ea = c->sp + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[9] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[25] + 0x34000ull);
    (void)(logic64(c, c->x[20] & 0x7ull));
    c->x[10] = (uint64_t)(0ull | 0x7fffff0000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xc80ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[2] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, 0u); }
    c->x[9] = (uint64_t)(c->x[20] - 0x10000ull);
    c->x[20] = (uint64_t)(0ull | c->x[21]);
    if (COND_EQ(c)) (void)subs64(c, c->x[9], c->x[10]); else c->nzcv = 0x20000000ull;
    c->x[9] = (uint32_t)(0x5ull);
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x20ull; ST128(ea, c->v[0]); }
    c->x[8] = (uint32_t)((COND_CS(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u + 1));
    stl32(c->x[26], c->x[8]);
    goto L_70053058a4;
L_7005305888:;
    c->excl_addr = ~0ull;
    goto L_70053058a8;
L_7005305890:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[25]);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    goto L_70053058a4;
L_70053058a0:;
    c->x[2] = (uint64_t)(0ull | c->x[25]);
L_70053058a4:;
    stl32(c->x[20], 0ull);
L_70053058a8:;
    c->x[8] = (uint64_t)(c->x[2] + 0x8ull);
L_70053058ac:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053058ac;
    c->x[8] = (uint64_t)(c->x[2] + 0x18ull);
    c->x[9] = (uint32_t)(0x1ull);
    stl32(c->x[8], c->x[9]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x6f0ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = c->x[3]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005306ec0(Cpu *c) {
    { uint64_t ea = c->sp - 160; ST64(ea, VS64(14)); c->sp = ea; }
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
    c->sp = (uint64_t)(c->sp - 0xf70ull);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->pc = c->x[3]; c->x[30] = 0x7005306f04ull; rt_dispatch(c); c->pc = 0;
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005306f14ull; f_7005305558(c);
    c->x[8] = (uint64_t)(c->x[20] + 0x20ull);
L_7005306f18:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005306f18;
    c->x[8] = (uint64_t)(c->x[20] + 0x4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    if ((uint32_t)c->x[8] == 0) goto L_7005306ffc;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[29] - 80; ST64(ea, 0ull); }
    c->x[25] = (uint64_t)(c->x[20] + 0x8ull);
    c->x[8] = (uint64_t)(c->x[20] + 0xcull);
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    { uint64_t ea = c->x[29] - 208; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 176; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 144; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 112; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 224; ST128(ea, c->v[0]); }
    c->x[9] = (uint64_t)(lda32(c->x[25]));
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[29] - 224; ST32(ea, (uint32_t)c->x[9]); ST32(ea + 4, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x6ull);
    stl32(c->x[8], c->x[9]);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[10] = (uint64_t)(c->x[23] - 0x10000ull);
    { uint64_t ea = c->x[20] + 0x740ull; ST64(ea, c->x[23]); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_7005306fc0;
    c->x[10] = (uint64_t)(c->x[23] & 0x7ull);
    if (c->x[10] != 0) goto L_7005306fc0;
    { uint64_t ea = c->x[23] + 0xf0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x760ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[23] + 0xf4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x764ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[23] + 0xf8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x768ull; ST32(ea, (uint32_t)c->x[8]); }
    if ((uint32_t)c->x[10] == 0) goto L_7005307050;
L_7005306fb8:;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x1ull);
L_7005306fc0:;
    stl32(c->x[8], c->x[9]);
L_7005306fc4:;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
L_7005306fcc:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[25]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[25], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005306fcc;
    c->x[9] = (uint64_t)(c->x[20] + 0x18ull);
    stl32(c->x[9], c->x[8]);
    c->x[8] = (uint64_t)(c->x[20] + 0x48ull);
L_7005306fe8:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005306fe8;
    goto L_700530701c;
L_7005306ffc:;
    c->x[8] = (uint64_t)(c->x[20] + 0x8ull);
L_7005307000:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005307000;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x6ull);
L_7005307018:;
    stl32(c->x[8], c->x[9]);
L_700530701c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->sp = (uint64_t)(c->sp + 0xf70ull);
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp; c->v[14] = LD64(ea); c->sp = c->sp + 160; }
    c->pc = 0; return;
L_7005307050:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_HI(c)) goto L_7005306fb8;
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_7005306fb8;
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x6bc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x918ull);
    c->pc = c->x[8]; c->x[30] = 0x7005307078ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    { uint64_t ea = c->x[20] + 0x748ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005306fc4;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306fc4;
    { uint64_t ea = c->x[0] + 0x218ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005306fc4;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    /* hint */
    c->x[10] = (uint64_t)(0x700530b2ccull);
L_70053070b0:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_7005306fc4;
    if ((uint32_t)c->x[12] == 0) goto L_70053070dc;
    (void)(subs64(c, c->x[9], 0x3full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x40ull));
    if (COND_NE(c)) goto L_70053070b0;
    goto L_7005306fc4;
L_70053070dc:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_7005306fc4;
    c->x[8] = (uint32_t)(0x3ull);
    c->x[11] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0x324ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x328ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x320ull; c->v[0] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(1));
    c->x[10] = (uint32_t)(VS32(2));
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_700530735c;
    if ((uint32_t)c->x[8] == 0) goto L_700530735c;
    if ((uint32_t)c->x[9] == 0) goto L_700530735c;
    fp_op_s(c, FOP_MUL, 1, 1, 1);
    { uint64_t ea = c->x[0] + 0x280ull; c->v[8] = LD32(ea); }
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    fp_fma_s(c, 0, 0, 0, 0, 0, 1);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x700530714cull; f_700530a428(c);
    c->x[8] = (uint32_t)(0x42c80000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GT(c)) goto L_700530735c;
    c->x[8] = (uint32_t)(VS32(8));
    c->x[11] = (uint32_t)(0x7full);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[9] - 0x800000ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[10], 24) & 0xffull);
    if (COND_GT(c)) (void)subs32(c, (uint32_t)c->x[10], (uint32_t)c->x[11]); else c->nzcv = 0x20000000ull;
    c->x[10] = (uint32_t)(0x7fffffull);
    if (COND_CS(c)) (void)subs32(c, (uint32_t)c->x[8], (uint32_t)c->x[10]); else c->nzcv = 0x0ull;
    if (COND_CS(c)) (void)subs32(c, (uint32_t)c->x[9], 0x0ull); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_700530735c;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x228ull);
    c->x[30] = 0x7005307198ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005306fc4;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306fc4;
    c->x[1] = (uint32_t)(0x230ull);
    c->x[30] = 0x70053071bcull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005306fc4;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306fc4;
    c->x[1] = (uint32_t)(0x18ull);
    { uint64_t ea = c->x[29] - 56; ST64(ea, c->x[0]); }
    c->x[30] = 0x70053071e4ull; f_7005305bc0(c);
    { uint64_t ea = c->x[29] - 56; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005306fc4;
    c->x[8] = (uint32_t)(0x4ull);
    c->x[27] = (uint32_t)(0xfbe4ull);
    c->x[0] = (uint64_t)(c->x[9] + 0x68ull);
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[27] = (uint32_t)((c->x[27] & 0xffffffff0000ffffull) | 0x1a0000ull);
    c->x[26] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[27]);
    c->x[8] = (uint64_t)(c->sp + 0x470ull);
    c->pc = c->x[10]; c->x[30] = 0x7005307218ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x470ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[25] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005307340;
    c->x[8] = (uint64_t)(c->x[25] & 0x7ull);
    if (c->x[8] != 0) goto L_7005307340;
    c->x[8] = (uint32_t)(0x5ull);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    c->x[1] = (uint32_t)(0x228ull);
    { uint64_t ea = c->x[20] + 0x750ull; ST64(ea, c->x[25]); }
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005307250ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint32_t)(0x2ull);
    if (COND_HI(c)) goto L_7005307338;
    c->x[9] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[9] != 0) goto L_7005307338;
    c->x[1] = (uint32_t)(0x150ull);
    c->x[30] = 0x7005307278ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint32_t)(0x2ull);
    if (COND_HI(c)) goto L_7005307338;
    c->x[24] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[9] != 0) goto L_7005307338;
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x70053072a8ull; f_7005305bc0(c);
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[25])));
    if (COND_NE(c)) goto L_7005307334;
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    c->x[30] = 0x70053072b8ull; f_7005309a08(c);
    c->x[30] = 0x70053072bcull; f_7005309a10(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005307334;
    { uint64_t ea = c->x[24] + 0x650ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_HI(c)) goto L_7005307334;
    { uint64_t ea = c->x[24] + 0x654ull; uint64_t v = LD8(ea); c->x[28] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[8] = (uint32_t)((COND_HI(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u + 1));
    (void)(logic32(c, (uint32_t)c->x[28] & 0x1ull));
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[29] - 104; ST32(ea, (uint32_t)c->x[8]); }
    if (((c->x[28] >> 1) & 1) == 0) goto L_70053072f4;
    { uint64_t ea = c->x[29] - 100; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x4ull);
    { uint64_t ea = c->x[29] - 100; ST32(ea, (uint32_t)c->x[9]); }
L_70053072f4:;
    c->v[0] = 0x0ull;
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_700530731c;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x7d84ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x1b00000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[8] = (uint64_t)(c->x[8] + 0x170ull);
    c->pc = c->x[8]; c->x[30] = 0x700530731cull; rt_dispatch(c); c->pc = 0;
L_700530731c:;
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)(0x7f7fffffull);
    { uint64_t ea = c->x[29] - 96; ST32(ea, VS32(0)); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LE(c)) goto L_7005307368;
L_7005307334:;
    c->x[8] = (uint32_t)(0x2ull);
L_7005307338:;
    c->x[9] = (uint64_t)(c->x[20] + 0x18ull);
    stl32(c->x[9], c->x[8]);
L_7005307340:;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0xc7b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x9ecull);
L_700530734c:;
    c->x[0] = (uint64_t)(c->sp + 0x470ull);
    c->pc = c->x[8]; c->x[30] = 0x7005307354ull; rt_dispatch(c); c->pc = 0;
    c->x[25] = (uint64_t)(0ull | c->x[26]);
    goto L_7005306fc4;
L_700530735c:;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x5ull);
    goto L_7005306fc0;
L_7005307368:;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->x[8] = (uint32_t)(0x2ull);
    if (COND_MI(c)) goto L_7005307338;
    c->x[9] = (uint32_t)(0x42340000ull);
    c->v[1] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GT(c)) goto L_7005307338;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[25] = (uint32_t)(0xaa94ull);
    { uint64_t ea = c->x[29] - 56; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[25] = (uint32_t)((c->x[25] & 0xffffffff0000ffffull) | 0x4d0000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->pc = c->x[8]; c->x[30] = 0x700530739cull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[10] = (uint32_t)(0x6ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[0]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint32_t)(0x3ull);
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[10]); }
    if (COND_HI(c)) goto L_7005307338;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[9] != 0) goto L_7005307338;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 56; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[25] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x3ecull);
    c->pc = c->x[8]; c->x[30] = 0x70053073e0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005307340;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_7005307340;
    c->x[8] = (uint32_t)(0x7ull);
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[27]);
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->pc = c->x[9]; c->x[30] = 0x7005307414ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[0] - 0x10000ull);
    { uint64_t ea = c->x[20] + 0x758ull; ST64(ea, c->x[0]); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_70053075e4;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_70053075e4;
    c->x[30] = 0x700530743cull; f_7005309a08(c);
    if (c->x[0] == 0) goto L_70053075e4;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0x1ull);
    c->x[9] = (uint64_t)(0x700530b000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x2c0ull);
L_7005307450:;
    { uint64_t ea = c->x[0] + c->x[8]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_70053075e4;
    if ((uint32_t)c->x[11] == 0) goto L_700530747c;
    (void)(subs64(c, c->x[8], 0x3full));
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    c->x[10] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[8], 0x40ull));
    if (COND_NE(c)) goto L_7005307450;
    goto L_70053075e4;
L_700530747c:;
    if (((c->x[10] >> 0) & 1) == 0) goto L_70053075e4;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[27] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xda70ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x3950000ull);
    c->x[0] = (uint64_t)(0ull | c->x[27]);
    c->x[30] = 0x7005307494ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_70053075f4;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_70053075f4;
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053074b8ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_70053075f4;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_70053075f4;
    c->x[25] = (uint32_t)(0xcbd0ull);
    c->x[8] = (uint32_t)(0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[25] = (uint32_t)((c->x[25] & 0xffffffff0000ffffull) | 0x1b20000ull);
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[9] = (uint64_t)(c->x[27] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[9] + 0x25cull);
    c->pc = c->x[8]; c->x[30] = 0x70053074fcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[8] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x634ull);
    c->pc = c->x[8]; c->x[30] = 0x7005307514ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[9] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x670ull);
    c->pc = c->x[8]; c->x[30] = 0x700530752cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[10] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x6acull);
    c->pc = c->x[8]; c->x[30] = 0x7005307544ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[11] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x6e8ull);
    c->pc = c->x[8]; c->x[30] = 0x700530755cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[12] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0xdd0ull);
    c->pc = c->x[8]; c->x[30] = 0x7005307574ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x7d84ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x1b00000ull);
    c->v[13] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x7005307590ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->v[14] = VS32(0);
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[8] = (uint64_t)(c->x[8] + 0x72cull);
    c->pc = c->x[8]; c->x[30] = 0x70053075a8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 0, 14, 0);
    c->x[10] = (uint32_t)(0x7f7fffffull);
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x10ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 148; ST32(ea, VS32(8)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->x[29] - 140; ST32(ea, VS32(10)); ST32(ea + 4, VS32(11)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    { uint64_t ea = c->x[29] - 132; ST32(ea, VS32(12)); ST32(ea + 4, VS32(13)); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    { uint64_t ea = c->x[29] - 124; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[29] - 92; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_LE(c)) goto L_7005307614;
    c->x[27] = (uint32_t)(0u | 0u);
    goto L_700530765c;
L_70053075e4:;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x4ull);
    stl32(c->x[8], c->x[9]);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[27] = (uint64_t)(v); }
L_70053075f4:;
    c->x[22] = (uint32_t)(0xb9ecull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0xc70000ull);
    c->x[8] = (uint64_t)(c->x[27] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005307608ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    goto L_700530734c;
L_7005307614:;
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint64_t)(0x700530a000ull);
    c->x[9] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[8] + 0x860ull; c->v[2] = LD128(ea); }
    c->x[8] = (uint32_t)(VS32(1));
    ((sa32 *)&c->v[0])[1] = ((sa32 *)&c->v[1])[0];
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    VW(vu64, 1, 0, SHUF(VREG(vu64, 0), VREG(vu64, 0), 0, 0));
    VW(vu32, 1, 3, vcmp_s(c, 1, VREG(vf32, 2), VREG(vf32, 0)));
    VW(vu32, 1, 0, vcmp_s(c, 2, VREG(vf32, 0), VREG(vf32, 2)));
    sl_gen(c, LOP_XTN, 1, 4, 2, 1, 0, 0, 3, 2, 0, -1, 0, 0, -1, 0x0ull);
    sl_gen(c, LOP_XTN, 1, 4, 0, 1, 0, 0, 0, 2, 0, -1, 0, 0, -1, 0x0ull);
    ((sa32 *)&c->v[2])[1] = ((sa32 *)&c->v[0])[1];
    sl_across(c, 3, 1, 0, 1, 0, 2);
    c->x[9] = (uint32_t)(VS32(0));
    c->x[27] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
L_700530765c:;
    {
        uint32_t u = LD32(c->x[25] + 0x10ull);
        float dt; memcpy(&dt, &u, 4);
        if (!(dt >= 0.05f && dt <= 1.0f)) {
            u = LD32(c->x[29] - 92);
            memcpy(&dt, &u, 4);
            if (!(dt >= 0.05f && dt <= 1.0f)) dt = 0.5f;
        }
        memcpy(&u, &dt, 4);
        c->v[0] = (uint64_t)u | ((uint64_t)u << 32);
    }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x2b4ull);
    { uint64_t ea = c->x[29] - 120; ST64(ea, VS64(0)); }
    c->x[30] = 0x7005307670ull; f_7005305bc8(c);
    { uint64_t ea = c->sp + 0x470ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x2b4ull);
    { uint64_t ea = c->x[29] - 184; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[29] - 216; ST64(ea, c->x[23]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint32_t)(0x9ull);
    { uint64_t ea = c->x[29] - 176; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[29] - 200; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005307698ull; f_7005305bc8(c);
    c->x[8] = (uint64_t)(0x700530a000ull);
    { uint64_t ea = c->x[29] - 172; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    c->x[9] = (uint32_t)(0xcbd0ull);
    { uint64_t ea = c->x[8] + 0x8b0ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x1b20000ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->x[29] - 164; ST32(ea, VS32(2)); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[29] - 0xe0ull);
    { uint64_t ea = c->x[29] - 88; ST64(ea, VS64(0)); }
    c->x[1] = (uint64_t)(c->x[9] + 0x40ull);
    c->x[2] = (uint64_t)(c->x[9] + 0x88ull);
    { uint64_t ea = c->x[29] - 80; ST32(ea, 0u); }
    c->pc = c->x[8]; c->x[30] = 0x70053076d4ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[28] >> 0) & 1) == 0) goto L_7005307764;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xcbd0ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x1b20000ull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x298ull);
    c->pc = c->x[8]; c->x[30] = 0x70053076f4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[29] - 156; u128 a = LD32(ea), b = LD32(ea + 4); c->v[6] = a; c->v[4] = b; }
    { uint64_t ea = c->x[29] - 160; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 16, 5, 1);
    fp_op_s(c, FOP_MUL, 7, 0, 4);
    fp_op_s(c, FOP_MUL, 17, 2, 6);
    fp_fma_s(c, 0, 1, 16, 0, 6, 16);
    fp_fma_s(c, 0, 1, 7, 2, 5, 7);
    fp_fma_s(c, 0, 1, 17, 1, 4, 17);
    fp_op_s(c, FOP_ADD, 16, 16, 16);
    fp_op_s(c, FOP_ADD, 7, 7, 7);
    fp_op_s(c, FOP_ADD, 17, 17, 17);
    fp_op_s(c, FOP_MUL, 19, 0, 16);
    fp_op_s(c, FOP_MUL, 18, 2, 7);
    fp_op_s(c, FOP_MUL, 20, 1, 17);
    fp_fma_s(c, 0, 1, 2, 2, 17, 19);
    fp_fma_s(c, 0, 1, 1, 1, 16, 18);
    fp_op_s(c, FOP_MUL, 18, 3, 17);
    fp_op_s(c, FOP_MUL, 17, 3, 7);
    fp_op_s(c, FOP_MUL, 3, 3, 16);
    fp_fma_s(c, 0, 1, 0, 0, 7, 20);
    fp_op_s(c, FOP_ADD, 1, 18, 1);
    fp_op_s(c, FOP_ADD, 2, 2, 17);
    fp_op_s(c, FOP_ADD, 0, 3, 0);
    fp_op_s(c, FOP_ADD, 1, 5, 1);
    fp_op_s(c, FOP_ADD, 2, 6, 2);
    fp_op_s(c, FOP_ADD, 0, 4, 0);
    { uint64_t ea = c->x[29] - 160; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[29] - 152; ST32(ea, VS32(0)); }
L_7005307764:;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005307774ull; f_7005309aa4(c);
    { uint64_t ea = c->x[29] - 112; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[0]);
    if (c->x[8] != 0) goto L_7005307794;
    { uint64_t ea = c->x[29] - 56; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x15d0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[23] = (uint32_t)((uint32_t)c->x[23] & (uint32_t)c->x[8]);
L_7005307794:;
    if ((uint32_t)c->x[27] == 0) goto L_7005307978;
    c->x[8] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[0] = (uint64_t)(c->x[8] + 0x4cull);
    c->x[30] = 0x70053077a4ull; f_7005304148(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005307978;
    { uint64_t ea = c->x[29] - 172; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[29] - 164; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x7f800000ull);
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[25] = (uint32_t)(0x9ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005307980;
    if ((uint32_t)c->x[8] == 0) goto L_7005307980;
    if ((uint32_t)c->x[9] == 0) goto L_7005307980;
    { uint64_t ea = c->x[29] - 160; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[29] - 152; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005307980;
    if ((uint32_t)c->x[8] == 0) goto L_7005307980;
    if ((uint32_t)c->x[9] == 0) goto L_7005307980;
    { uint64_t ea = c->x[29] - 88; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[2] = b; }
    c->x[24] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[29] - 80; c->v[1] = LD32(ea); }
    c->x[9] = (uint32_t)(VS32(2));
    c->x[10] = (uint32_t)(VS32(1));
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005307980;
    if ((uint32_t)c->x[8] == 0) goto L_7005307980;
    if ((uint32_t)c->x[9] == 0) goto L_7005307980;
    { uint64_t ea = c->x[29] - 184; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    fp_op_s(c, FOP_SUB, 0, 0, 3);
    { uint64_t ea = c->x[29] - 176; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 2, 2, 2);
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x7005307894ull; f_700530a428(c);
    c->v[8] = 0x40a00000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(8));
    if (COND_PL(c)) goto L_7005307b38;
    { uint64_t ea = c->x[29] - 168; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[4] = b; }
    { uint64_t ea = c->x[29] - 88; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[29] - 84; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    fp_op_s(c, FOP_SUB, 0, 1, 0);
    { uint64_t ea = c->x[29] - 172; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x70053078ccull; f_700530a428(c);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(8));
    if (COND_PL(c)) goto L_7005307b38;
    { uint64_t ea = c->x[29] - 180; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[4] = b; }
    { uint64_t ea = c->x[29] - 172; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[29] - 168; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    fp_op_s(c, FOP_SUB, 0, 1, 0);
    { uint64_t ea = c->x[29] - 184; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005307900ull; f_700530a428(c);
    c->v[1] = 0x40a00000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->x[8] = (uint32_t)((COND_MI(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)~(uint32_t)c->x[23]);
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005307b38;
    { uint64_t ea = c->x[29] - 160; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    { uint64_t ea = c->x[29] - 152; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x700530792cull; f_700530a428(c);
    { uint64_t ea = c->x[29] - 148; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xd70aull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3c230000ull);
    fp_op_s(c, FOP_SUB, 0, 0, 1);
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_7005307b38;
    c->x[8] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[30] = 0x7005307968ull; f_7005309cf8(c);
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[25] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[25] : (uint32_t)((uint32_t)c->x[25] + 1));
    goto L_7005307980;
L_7005307978:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[25] = (uint32_t)(0x9ull);
L_7005307980:;
    { uint64_t ea = c->x[20] + 0x76cull; ST32(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0xb9ecull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0xc70000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x700530799cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x470ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x70053079acull; rt_dispatch(c); c->pc = 0;
    c->x[25] = (uint64_t)(0ull | c->x[26]);
    if (((c->x[24] >> 0) & 1) == 0) goto L_7005306fc4;
    c->x[0] = (uint64_t)(c->sp + 0x470ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0xa60ull);
    c->x[30] = 0x70053079c4ull; f_70053040b4(c);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x460ull);
    c->x[30] = 0x70053079d4ull; f_70053040b4(c);
    c->x[1] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[2] = (uint64_t)(c->sp + 0x470ull);
    c->x[3] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x70053079e8ull; f_70053061ac(c);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[8] = (uint64_t)(c->x[20] + 0x10ull);
    c->x[9] = (uint32_t)(0x1ull);
L_70053079f4:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[10] != 0) goto L_7005307b28;
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053079f4;
    c->x[9] = (uint32_t)(0x2200ull);
    c->x[9] = (uint64_t)(c->x[20] + c->x[9]);
    c->x[9] = (uint64_t)(lda32(c->x[9]));
    if ((uint32_t)c->x[9] != 0) goto L_7005307b20;
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 216; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[20] + 0x70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 208; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[20] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 200; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[20] + 0xd0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 112; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[20] + 0xd8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[20] + 0xdcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 100; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005307a7c;
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[22] = (uint64_t)(v); }
    goto L_7005307a98;
L_7005307a7c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[26]));
    c->x[22] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[26], c->x[22]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005307a7c;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    stl32(c->x[8], 0ull);
    { uint64_t ea = c->x[29] - 224; ST32(ea, (uint32_t)c->x[22]); }
L_7005307a98:;
    {
        uint32_t r_frame = LD32(c->x[29] - 220);
        uint32_t last_pred_frame = LD32(c->x[20] + 0x1cull);
        uint32_t raw_dt_u = LD32(c->x[29] - 116);
        float live_dt; memcpy(&live_dt, &raw_dt_u, 4);
        if (!(live_dt >= 0.05f && live_dt <= 1.0f)) live_dt = 0.5f;
        uint32_t avg_u = LD32(c->x[20] + 0x21f8ull);
        float avg_dt; memcpy(&avg_dt, &avg_u, 4);
        int new_epoch = (LD32(c->x[20] + 248ull) != (uint32_t)c->x[22]) || (r_frame - last_pred_frame > 30u);
        if (new_epoch || !(avg_dt >= 0.05f && avg_dt <= 1.0f)) {
            avg_dt = live_dt;
        } else if (r_frame - last_pred_frame > 3u || live_dt < avg_dt) {
            avg_dt = avg_dt * 0.65f + live_dt * 0.35f;
        }
        uint32_t prev_step_u = LD32(c->x[20] + 96ull + 0x68ull);
        float act_dt; memcpy(&act_dt, &prev_step_u, 4);
        if (new_epoch || !(act_dt >= 0.05f && act_dt <= 1.0f) || avg_dt - act_dt > 0.008f || act_dt - avg_dt > 0.008f) {
            act_dt = avg_dt;
        }
        uint32_t new_avg_u, act_u;
        memcpy(&new_avg_u, &avg_dt, 4);
        memcpy(&act_u, &act_dt, 4);
        ST32(c->x[20] + 0x21f8ull, new_avg_u);
        c->v[0] = (uint64_t)act_u | ((uint64_t)act_u << 32);
    }
    c->x[1] = (uint64_t)(c->sp + 0x470ull);
    c->x[8] = (uint32_t)(0x2220ull);
    c->x[2] = (uint32_t)(0xa60ull);
    c->x[0] = (uint64_t)(c->x[20] + c->x[8]);
    { uint64_t ea = c->x[29] - 120; ST64(ea, VS64(0)); }
    c->x[30] = 0x7005307abcull; f_7005304000(c);
    c->x[8] = (uint32_t)(0x2c80ull);
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    c->x[2] = (uint32_t)(0x460ull);
    c->x[0] = (uint64_t)(c->x[20] + c->x[8]);
    c->x[30] = 0x7005307ad0ull; f_7005304000(c);
    { uint64_t ea = c->x[29] - 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint32_t)((uint32_t)c->x[21] & 0x1ull);
    { uint64_t ea = c->x[29] - 96; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[20] + 0x2208ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[29] - 80; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x220cull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->x[20] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[29] - 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[20] + 224; ST128(ea, c->v[2]); }
    { uint64_t ea = c->x[20] + 240; ST64(ea, c->x[8]); }
    {
        uint32_t r_frame = LD32(c->x[29] - 220);
        uint32_t last_pred_frame = LD32(c->x[20] + 0x1cull);
        uint32_t prev_step_u = LD32(c->x[20] + 96ull + 0x68ull);
        uint32_t act_u = LD32(c->x[29] - 120);
        uint32_t need_pred = 1u;
        if (LD32(c->x[20] + 264ull) != 0u && LD32(c->x[20] + 248ull) == (uint32_t)c->x[22] &&
            LD32(c->x[20] + 0x21fcull) == LD32(c->x[29] - 104) && act_u == prev_step_u &&
            (r_frame - last_pred_frame) < 12u) {
            float ox, oy, oz, cx, cy, cz, vx, vy, vz, dx, dy, dz;
            uint32_t u;
            u = LD32(c->x[29] - 172); memcpy(&ox, &u, 4);
            u = LD32(c->x[29] - 168); memcpy(&oy, &u, 4);
            u = LD32(c->x[29] - 164); memcpy(&oz, &u, 4);
            u = LD32(c->x[20] + 268ull); memcpy(&cx, &u, 4);
            u = LD32(c->x[20] + 272ull); memcpy(&cy, &u, 4);
            u = LD32(c->x[20] + 276ull); memcpy(&cz, &u, 4);
            float do2 = (ox - cx)*(ox - cx) + (oy - cy)*(oy - cy) + (oz - cz)*(oz - cz);
            u = LD32(c->x[29] - 160); memcpy(&vx, &u, 4);
            u = LD32(c->x[29] - 156); memcpy(&vy, &u, 4);
            u = LD32(c->x[29] - 152); memcpy(&vz, &u, 4);
            u = LD32(c->x[20] + 1840ull); memcpy(&dx, &u, 4);
            u = LD32(c->x[20] + 1844ull); memcpy(&dy, &u, 4);
            u = LD32(c->x[20] + 1848ull); memcpy(&dz, &u, 4);
            float v2 = vx*vx + vy*vy + vz*vz;
            float dot = vx*dx + vy*dy + vz*dz;
            if (do2 < 1e-4f && dot > 0.0f && (v2 - dot*dot) <= v2 * 2e-7f) {
                need_pred = 0u;
            }
        }
        if (need_pred) {
            uint32_t avg_u = LD32(c->x[20] + 0x21f8ull);
            ST64(c->x[29] - 120, (uint64_t)avg_u | ((uint64_t)avg_u << 32));
            ST32(c->x[20] + 192ull + 0x10ull, avg_u);
            ST32(c->x[20] + 192ull + 0x14ull, avg_u);
            ST32(c->x[20] + 0x1cull, r_frame);
        } else {
            ST32(c->x[20] + 252ull, r_frame);
            for (uint32_t si = 0; si < 4u; si++) {
                ST32(c->x[20] + 1904ull + si * 1608ull + 4ull, r_frame);
            }
        }
        c->x[8] = need_pred;
    }
    { uint64_t ea = c->x[20] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[29] - 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[20] + 0x14ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->x[20] + 0x10ull);
    { uint64_t ea = c->x[20] + 160; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[20] + 96; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    stl32(c->x[8], 0ull);
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
L_7005307b20:;
    stl32(c->x[8], 0ull);
    goto L_700530701c;
L_7005307b28:;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x7ull);
    c->excl_addr = ~0ull;
    goto L_7005307018;
L_7005307b38:;
    c->x[24] = (uint32_t)(0u | 0u);
    goto L_7005307980;
}

void f_7005309cf8(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x22aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x22bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    { uint64_t ea = c->x[1] + 0x22cull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 48) & 0xffffffffffff0000ull);
    c->x[9] = (uint64_t)(c->x[9] | (c->x[10] << 24));
    { uint64_t ea = c->x[1] + 0x228ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] | (c->x[11] << 32));
    c->x[12] = (uint64_t)(c->x[10] & 0x7ull);
    c->x[11] = (uint64_t)(c->x[9] - 0x10000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs64(c, c->x[12], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309d38;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309d38:;
    { uint64_t ea = c->x[1] + 0x229ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 8));
    c->x[9] = (uint64_t)(c->x[10] | c->x[9]);
    { uint64_t ea = c->x[9] + 0x52ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x53ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x54ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(ROR64(c->x[10], 48) & 0xffffffffffff0000ull);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 24));
    { uint64_t ea = c->x[9] + 0x50ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] | (c->x[12] << 32));
    c->x[13] = (uint64_t)(c->x[11] & 0x7ull);
    c->x[12] = (uint64_t)(c->x[10] - 0x10000ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs64(c, c->x[13], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309d7c;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309d7c:;
    { uint64_t ea = c->x[9] + 0x51ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[11] | (c->x[8] << 8));
    c->x[9] = (uint64_t)(c->x[8] | c->x[10]);
    { uint64_t ea = c->x[9] + 0x22ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x23ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(ROR64(c->x[8], 48) & 0xffffffffffff0000ull);
    c->x[8] = (uint64_t)(c->x[8] | (c->x[10] << 24));
    c->x[10] = (uint64_t)(c->x[8] | (c->x[11] << 32));
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[12] = (uint64_t)(c->x[10] - 0x10000ull);
    c->x[13] = (uint64_t)(c->x[11] & 0x7ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs64(c, c->x[13], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309dc8;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309dc8:;
    { uint64_t ea = c->x[9] + 0x21ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[11] | (c->x[9] << 8));
    c->x[9] = (uint64_t)(c->x[9] | c->x[10]);
    { uint64_t ea = c->x[9] + 0x12ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x13ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x14ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(ROR64(c->x[10], 48) & 0xffffffffffff0000ull);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 24));
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] | (c->x[12] << 32));
    c->x[13] = (uint64_t)(c->x[11] & 0x7ull);
    c->x[12] = (uint64_t)(c->x[10] - 0x10000ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs64(c, c->x[13], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309e0c;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309e0c:;
    { uint64_t ea = c->x[9] + 0x11ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[11] | (c->x[8] << 8));
    c->x[9] = (uint64_t)(c->x[8] | c->x[10]);
    { uint64_t ea = c->x[9] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xbull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xcull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(ROR64(c->x[8], 48) & 0xffffffffffff0000ull);
    c->x[8] = (uint64_t)(c->x[8] | (c->x[10] << 24));
    c->x[10] = (uint64_t)(c->x[8] | (c->x[11] << 32));
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[12] = (uint64_t)(c->x[10] - 0x10000ull);
    c->x[13] = (uint64_t)(c->x[11] & 0x7ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs64(c, c->x[13], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309e58;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309e58:;
    { uint64_t ea = c->x[9] + 0x9ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[11] | (c->x[9] << 8));
    c->x[9] = (uint64_t)(c->x[9] | c->x[10]);
    { uint64_t ea = c->x[9] + 0x1aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x1bull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x1cull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(ROR64(c->x[10], 48) & 0xffffffffffff0000ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7ull);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 24));
    c->x[10] = (uint64_t)(c->x[10] | (c->x[12] << 32));
    c->x[10] = (uint64_t)(c->x[10] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_LS(c)) (void)subs32(c, (uint32_t)c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) goto L_7005309e9c;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005309e9c:;
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xb0d0ull);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x1cf0000ull);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[8] = (uint64_t)(c->x[29] + 0x18ull);
    c->pc = c->x[9]; c->x[30] = 0x7005309ec8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[29] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic64(c, c->x[8] & 0xff00000000ull));
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700530a8c4(Cpu *c) {
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x1f8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005310000(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053100c0;
    { uint64_t ea = c->x[0] + 0x168ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053100c0;
    { uint64_t ea = c->x[0] + 0x118ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 3) & 1) == 0) goto L_700531005c;
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x978000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xfd0ull);
    c->pc = c->x[8]; c->x[30] = 0x7005310048ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    if ((uint32_t)c->x[8] == 0) goto L_70053100c0;
L_700531005c:;
    { uint64_t ea = c->x[0] + 0x3cull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LT(c)) goto L_70053100c0;
    c->v[1] = 0x3f800000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_70053100c0;
    { uint64_t ea = c->x[0] + 0x24ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0x9680ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x4b180000ull);
    c->v[0] = VS32(0) & ~0x80000000u;
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_70053100c8;
    { uint64_t ea = c->x[0] + 0x28ull; c->v[0] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    c->v[0] = VS32(0) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_70053100c8;
    { uint64_t ea = c->x[0] + 0x2cull; c->v[0] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    c->v[0] = VS32(0) & ~0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_70053100c8;
    c->x[8] = (uint32_t)(0x1ull);
L_70053100c0:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
L_70053100c8:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_70053100d0(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x978000ull);
    c->x[1] = (uint64_t)(c->x[8] + 0xfd0ull);
    c->pc = c->x[1]; rt_dispatch(c); c->pc = 0; return;
}

void f_70053100f0(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[0])));
    if (COND_EQ(c)) goto L_7005310118;
L_7005310104:;
    c->x[11] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[11] + 0xf58ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
L_700531010c:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
L_7005310118:;
    { uint64_t ea = c->x[9] + 0x120ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint32_t)(0x8ull);
    { uint64_t ea = c->x[8] + 0x598ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x480ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[9] + 0x128ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x8ull));
    { uint64_t ea = c->x[8] + 0x488ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[10] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[13] : (uint32_t)((uint32_t)c->x[11]));
    if ((uint32_t)c->x[13] == 0) goto L_7005310104;
    c->x[14] = (uint32_t)(0x126full);
    c->x[11] = (uint64_t)(c->x[8] + 0x484ull);
    c->x[12] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x3a830000ull);
    { uint64_t ea = c->x[11] + 0x0ull; c->v[2] = LD64(ea); }
    c->x[11] = (uint64_t)(0x700531c000ull);
    VW(vu32, 0, 0, (vu32){} + (uint32_t)c->x[14]);
    c->v[3] = (uint32_t)c->x[14];
    { uint64_t ea = c->x[8] + 0x480ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[11] + 0xf58ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + 0x498ull);
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - 0x1ull);
    goto L_7005310180;
L_7005310174:;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - 0x1ull);
    if ((uint32_t)c->x[10] == 0) goto L_700531010c;
L_7005310180:;
    c->x[14] = (uint32_t)((uint32_t)c->x[13] & 0x7ull);
    c->x[14] = (uint64_t)(c->x[12] + (c->x[14] << 5));
    { uint64_t ea = c->x[14] + 0x0ull; c->v[4] = LD32(ea); }
    FP_SETS(4, op_s(c, FOP_ABD, VSF32(4), VSF32(1), 0));
    c->nzcv = cmp_s(c, VSF32(4), VSF32(3));
    if (COND_PL(c)) goto L_7005310174;
    { uint64_t ea = c->x[14] + 4; c->v[4] = LD64(ea); }
    SV_FOP_S(FOP_ABD, 0, 4, VQ(vf32, 0, 4), VQ(vf32, 0, 2), (vf32){});
    VW(vu32, 0, 4, vcmp_s(c, 2, VQ(vf32, 0, 0), VQ(vf32, 0, 4)));
    c->x[15] = (uint32_t)(VS32(4));
    if (((c->x[15] >> 0) & 1) == 0) goto L_7005310174;
    c->x[15] = (uint32_t)(((sa32 *)&c->v[4])[1]);
    if (((c->x[15] >> 0) & 1) == 0) goto L_7005310174;
    c->x[9] = (uint64_t)(c->x[9] + 0x1a000ull);
    { uint64_t ea = c->x[14] + 0x14ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 12; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x48cull);
    { uint64_t ea = c->x[14] + 0x18ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[11] = (uint64_t)(c->x[8] + 0x47cull);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[8] + 0x5a0ull; ST64(ea, c->x[12]); }
    goto L_700531010c;
}

void f_70053101dc(Cpu *c) {
    c->x[8] = (uint32_t)(0u | 0u);
    if (c->x[0] == 0) goto L_7005310a04;
    if (c->x[1] == 0) goto L_7005310a04;
    if (c->x[2] == 0) goto L_7005310a04;
    if (c->x[3] == 0) goto L_7005310a04;
    { uint64_t ea = c->x[3] + 0x30ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_7005310a04;
    c->v[1] = 0x40000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_7005310a04;
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    c->x[11] = (uint64_t)(0x700531c000ull);
    c->x[12] = (uint64_t)(c->x[0] + 0x1a000ull);
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[11] + 0xf60ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
L_700531023c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[11]));
    { uint32_t st = stx32(c, c->x[11], c->x[8]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_700531023c;
    if ((uint32_t)c->x[9] == 0) goto L_7005310254;
    c->x[8] = (uint32_t)(0u | 0u);
    goto L_70053109e8;
L_7005310254:;
    c->x[28] = (uint64_t)(0x700531c000ull);
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[28] + 0xf50ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xa5a0ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[0] + 0x10ull);
    { uint64_t ea = c->x[28] + 0x0ull; ST64(ea, c->x[0]); }
L_700531027c:;
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x20ull));
    { uint64_t ea = c->x[8] - 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x20ull);
    if (COND_NE(c)) goto L_700531027c;
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[0] + 0x15000ull);
    c->x[8] = (uint64_t)(c->x[8] - c->x[1]);
    c->x[8] = (uint64_t)(c->x[8] + 0x5000ull);
    (void)(subs64(c, c->x[8], 0x20ull));
    { uint64_t ea = c->x[12] + 0x5a0ull; ST128(ea, c->v[0]); }
    if (COND_CS(c)) goto L_70053102c4;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_70053102ac:;
    { uint64_t ea = c->x[1] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + c->x[8]; ST8(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x460ull));
    if (COND_NE(c)) goto L_70053102ac;
    goto L_70053102e4;
L_70053102c4:;
    c->x[8] = (uint64_t)(c->x[1] + 0x10ull);
    c->x[9] = (uint32_t)(0x460ull);
    c->x[10] = (uint64_t)(0ull | c->x[12]);
L_70053102d0:;
    { uint64_t ea = c->x[8] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x20ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x20ull);
    { uint64_t ea = c->x[10]; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); c->x[10] = ea + 32; }
    if (COND_NE(c)) goto L_70053102d0;
L_70053102e4:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] - c->x[2]);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_7005310310;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_70053102f8:;
    { uint64_t ea = c->x[2] + c->x[9]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; ST8(ea, (uint32_t)c->x[10]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x240ull));
    if (COND_NE(c)) goto L_70053102f8;
    goto L_70053103a0;
L_7005310310:;
    { uint64_t ea = c->x[2] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 224; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 320; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 384; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 416; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 448; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 480; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[2] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_70053103a0:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 8; ST64(ea, c->x[3]); }
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[12]); ST64(ea + 8, c->x[0]); }
    c->x[9] = (uint64_t)(c->x[8] - c->x[2]);
    c->x[9] = (uint64_t)(c->x[9] + 0xdc0ull);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_70053103e0;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1000ull);
    c->x[10] = (uint64_t)(c->x[2] + 0x240ull);
L_70053103c8:;
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x340ull));
    if (COND_NE(c)) goto L_70053103c8;
    goto L_7005310548;
L_70053103e0:;
    { uint64_t ea = c->x[2] + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1000ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1010ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1020ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1030ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1040ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1050ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1060ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1070ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1080ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1090ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x10a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x10b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 768; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x10c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x10d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 800; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x10e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x10f0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 832; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1100ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1110ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 864; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1120ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1130ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 896; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1140ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1150ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 928; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1160ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1170ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 960; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x1180ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1190ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 992; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x11a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x11b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x400ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x410ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x11c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x11d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x420ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x430ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x11e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x11f0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x440ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x450ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1200ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1210ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x460ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x470ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1220ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1230ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x480ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x490ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1240ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1250ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x4a0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x4b0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1260ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1270ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x4c0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x4d0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1280ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1290ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x4e0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x4f0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x12a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x12b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x500ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x510ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x12c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x12d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x520ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x530ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x12e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x12f0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x540ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x550ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1300ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1310ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[2] + 0x560ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[2] + 0x570ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x1320ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x1330ull; ST128(ea, c->v[1]); }
L_7005310548:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xb100ull);
    c->x[10] = (uint64_t)(c->x[1] + 0x420ull);
    c->x[16] = (uint32_t)(0x4200ull);
    c->x[21] = (uint32_t)(0x4211ull);
    c->x[20] = (uint32_t)(0x4212ull);
    c->x[12] = (uint64_t)(c->x[9] + 0x1000ull);
    c->x[11] = (uint64_t)(c->x[9] + c->x[11]);
    c->x[19] = (uint32_t)(0x4213ull);
    { uint64_t ea = c->x[9] + 0x18ull; ST64(ea, c->x[12]); }
    c->x[3] = (uint32_t)(0x4215ull);
    c->x[12] = (uint32_t)(0x4216ull);
    { uint64_t ea = c->x[9] + 0x50ull; ST64(ea, c->x[11]); }
    c->x[9] = (uint32_t)(0x4210ull);
    c->x[11] = (uint32_t)(0x4214ull);
    c->x[13] = (uint32_t)(0x4217ull);
    c->x[14] = (uint32_t)(0x4218ull);
    c->x[17] = (uint32_t)(0x4219ull);
    c->x[18] = (uint32_t)(0x421aull);
    c->x[1] = (uint32_t)(0x421bull);
    c->x[4] = (uint32_t)(0x421cull);
    c->x[5] = (uint32_t)(0x421dull);
    c->x[6] = (uint32_t)(0x421eull);
    c->x[7] = (uint32_t)(0x421full);
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint64_t)(c->x[2] + 0x580ull);
    c->x[24] = (uint32_t)(0x1ull);
    c->x[15] = (uint64_t)(0xfffffffffffffd90ull);
    c->x[16] = (uint32_t)((c->x[16] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[21] = (uint32_t)((c->x[21] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[20] = (uint32_t)((c->x[20] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[19] = (uint32_t)((c->x[19] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[18] = (uint32_t)((c->x[18] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[4] = (uint32_t)((c->x[4] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[5] = (uint32_t)((c->x[5] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[6] = (uint32_t)((c->x[6] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[7] = (uint32_t)((c->x[7] & 0xffffffff0000ffffull) | 0x10000ull);
    goto L_7005310868;
L_7005310600:;
    { uint64_t ea = c->x[26] + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 576; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 608; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 640; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 672; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 704; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_7005310638:;
    { uint64_t ea = c->x[26] + 0x26cull; uint64_t v = LD32(ea); c->x[28] = (uint64_t)(v); }
    c->x[30] = (uint64_t)(c->x[25] + 0x400ull);
    c->x[24] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[25] + 0x70ull; ST64(ea, c->x[30]); }
    c->x[30] = (uint64_t)(c->x[25] + 0x500ull);
    (void)(subs32(c, (uint32_t)c->x[28], 0x0ull));
    c->x[28] = (uint64_t)(c->x[25] + 0x600ull);
    { uint64_t ea = c->x[25] + 0x400ull; ST64(ea, c->x[30]); }
    c->x[27] = (uint64_t)((COND_EQ(c)) ? 0ull : (uint64_t)(c->x[27]));
    { uint64_t ea = c->x[25] + 0x410ull; ST64(ea, c->x[28]); }
    c->x[28] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[25] + 0x60ull; ST64(ea, c->x[27]); }
    c->x[27] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[27] + 0xf68ull; uint64_t v = LD64(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x528ull; ST64(ea, c->x[27]); }
    { uint64_t ea = c->x[26] + 0x260ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x620ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x261ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x621ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x262ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x622ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x263ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x623ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x264ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x624ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x265ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x625ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x266ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x626ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x267ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x627ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x268ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x628ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x269ull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x629ull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x26aull; uint64_t v = LD8(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x62aull; ST8(ea, (uint32_t)c->x[27]); }
    { uint64_t ea = c->x[26] + 0x26bull; uint64_t v = LD8(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x62bull; ST8(ea, (uint32_t)c->x[26]); }
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[22] = (uint32_t)(0x4201ull);
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[26] = (uint64_t)(c->x[26] + (c->x[0] << 6));
    c->x[0] = (uint64_t)(c->x[10] + (c->x[0] << 5));
    c->x[27] = (uint64_t)(c->x[26] + c->x[16]);
    { uint64_t ea = c->x[25] + 0x148ull; ST64(ea, c->x[27]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[16]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4202ull);
    { uint64_t ea = c->x[0] + 0x2ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4203ull);
    { uint64_t ea = c->x[0] + 0x3ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4204ull);
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4205ull);
    { uint64_t ea = c->x[0] + 0x5ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4206ull);
    { uint64_t ea = c->x[0] + 0x6ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4207ull);
    { uint64_t ea = c->x[0] + 0x7ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4208ull);
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x4209ull);
    { uint64_t ea = c->x[0] + 0x9ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420aull);
    { uint64_t ea = c->x[0] + 0xaull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420bull);
    { uint64_t ea = c->x[0] + 0xbull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420cull);
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420dull);
    { uint64_t ea = c->x[0] + 0xdull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420eull);
    { uint64_t ea = c->x[0] + 0xeull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    c->x[22] = (uint32_t)(0x420full);
    { uint64_t ea = c->x[0] + 0xfull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[26] + c->x[22]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[9]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x11ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[21]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x12ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[20]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x13ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[19]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x14ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[11]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x15ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[3]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x16ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[12]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x17ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[13]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[14]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x19ull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[17]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1aull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[18]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1bull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[1]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1cull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[4]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1dull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[5]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1eull; uint64_t v = LD8(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[6]; ST8(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[0] + 0x1full; uint64_t v = LD8(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[7]; ST8(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint32_t)(0x1ull);
    if (((c->x[23] >> 0) & 1) == 0) goto L_700531095c;
L_7005310868:;
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[24]);
    (void)(logic32(c, (uint32_t)c->x[24] & 0x1ull));
    c->x[22] = (uint32_t)(0x4000ull);
    c->x[24] = (uint32_t)(0x2000ull);
    c->x[25] = (uint64_t)((COND_NE(c)) ? c->x[24] : (uint64_t)(c->x[22]));
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[28]);
    c->x[27] = (uint64_t)(c->x[25] - c->x[2]);
    c->x[26] = (uint64_t)(c->x[27] + c->x[24]);
    c->x[28] = (uint64_t)(c->x[26] + c->x[0] * c->x[15]);
    c->x[25] = (uint64_t)(c->x[24] + c->x[25]);
    c->x[26] = (uint32_t)(0x270ull);
    c->x[26] = (uint64_t)(c->x[8] + c->x[0] * c->x[26]);
    c->x[28] = (uint64_t)(c->x[28] - 0x580ull);
    (void)(subs64(c, c->x[28], 0x1full));
    if (COND_HI(c)) goto L_70053108c4;
    c->x[28] = (uint64_t)(0ull | 0ull);
L_70053108ac:;
    { uint64_t ea = c->x[26] + c->x[28]; uint64_t v = LD8(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + c->x[28]; ST8(ea, (uint32_t)c->x[30]); }
    c->x[28] = (uint64_t)(c->x[28] + 0x1ull);
    (void)(subs64(c, c->x[28], 0x180ull));
    if (COND_NE(c)) goto L_70053108ac;
    goto L_7005310924;
L_70053108c4:;
    { uint64_t ea = c->x[26] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 224; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 320; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[26] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_7005310924:;
    c->x[24] = (uint64_t)(c->x[27] + c->x[24]);
    c->x[27] = (uint64_t)(c->x[25] + 0x200ull);
    c->x[24] = (uint64_t)(c->x[24] + c->x[0] * c->x[15]);
    c->x[24] = (uint64_t)(c->x[24] - 0x500ull);
    (void)(subs64(c, c->x[24], 0x1full));
    if (COND_HI(c)) goto L_7005310600;
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[28] = (uint64_t)(c->x[26] + 0x180ull);
L_7005310944:;
    { uint64_t ea = c->x[28] + c->x[24]; uint64_t v = LD8(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->x[27] + c->x[24]; ST8(ea, (uint32_t)c->x[30]); }
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    (void)(subs64(c, c->x[24], 0xe0ull));
    if (COND_NE(c)) goto L_7005310944;
    goto L_7005310638;
L_700531095c:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x7fffffull);
    { uint64_t ea = c->x[29] - 8; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x1280ull; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[9] - 0x800000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[10], 24) & 0xffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], 0x7full));
    c->x[10] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint32_t)(0x7f800000ull);
    c->x[10] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[10]));
    c->x[11] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[11]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[11] : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((COND_LE(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[10]);
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005310a0c;
L_70053109b4:;
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[10] + 0xf58ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
L_70053109c8:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xa474ull);
    { uint64_t ea = c->x[28] + 0x0ull; ST64(ea, 0ull); }
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[10] + c->x[11]; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + 0xf60ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    stl32(c->x[9], 0ull);
L_70053109e8:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
L_7005310a04:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
L_7005310a0c:;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[1] = 0x3f800000ull;
    c->v[0] = COND_EQ(c) ? VS32(1) : VS32(0);
    { uint64_t ea = c->x[26] + 0x30ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_70053109b4;
    c->v[1] = 0x40000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_70053109b4;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0x5000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[8] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint64_t)(c->x[9] + c->x[13]);
    c->x[9] = (uint64_t)(c->x[9] + 0x15000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1000ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2d00000ull);
    c->x[10] = (uint64_t)(c->x[10] + c->x[8]);
    c->x[10] = (uint64_t)(c->x[10] + 0xc5c000ull);
    c->x[11] = (uint64_t)(c->x[11] - c->x[10]);
    (void)(subs64(c, c->x[11], 0x20ull));
    if (COND_CS(c)) goto L_7005310a88;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005310a70:;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x1000ull));
    if (COND_NE(c)) goto L_7005310a70;
    goto L_7005310aa4;
L_7005310a88:;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(0x1000ull);
L_7005310a90:;
    { uint64_t ea = c->x[10] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    { uint64_t ea = c->x[9]; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005310a90;
L_7005310aa4:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint64_t)(c->x[13] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0x16000ull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] + 0xc5e000ull);
    c->x[11] = (uint64_t)(c->x[11] - c->x[10]);
    c->x[11] = (uint64_t)(c->x[11] + 0x1000ull);
    (void)(subs64(c, c->x[11], 0x20ull));
    if (COND_CS(c)) goto L_7005310aec;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005310ad4:;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x1000ull));
    if (COND_NE(c)) goto L_7005310ad4;
    goto L_7005310b08;
L_7005310aec:;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(0x1000ull);
L_7005310af4:;
    { uint64_t ea = c->x[10] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    { uint64_t ea = c->x[9]; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005310af4;
L_7005310b08:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint64_t)(c->x[13] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0x17000ull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] + 0xc87000ull);
    c->x[11] = (uint64_t)(c->x[11] - c->x[10]);
    c->x[11] = (uint64_t)(c->x[11] + 0x2000ull);
    (void)(subs64(c, c->x[11], 0x20ull));
    if (COND_CS(c)) goto L_7005310b50;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005310b38:;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x1000ull));
    if (COND_NE(c)) goto L_7005310b38;
    goto L_7005310b6c;
L_7005310b50:;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(0x1000ull);
L_7005310b58:;
    { uint64_t ea = c->x[10] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    { uint64_t ea = c->x[9]; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005310b58;
L_7005310b6c:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x18000ull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] + 0xdd1000ull);
    c->x[11] = (uint64_t)(c->x[9] - c->x[10]);
    (void)(subs64(c, c->x[11], 0x20ull));
    if (COND_CS(c)) goto L_7005310bac;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005310b94:;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x1000ull));
    if (COND_NE(c)) goto L_7005310b94;
    goto L_7005310bc8;
L_7005310bac:;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(0x1000ull);
L_7005310bb4:;
    { uint64_t ea = c->x[10] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    { uint64_t ea = c->x[9]; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005310bb4;
L_7005310bc8:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint64_t)(c->x[13] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0x19000ull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] + 0xc60000ull);
    c->x[11] = (uint64_t)(c->x[11] - c->x[10]);
    c->x[11] = (uint64_t)(c->x[11] + 0x4000ull);
    (void)(subs64(c, c->x[11], 0x20ull));
    if (COND_CS(c)) goto L_7005310c10;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005310bf8:;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x1000ull));
    if (COND_NE(c)) goto L_7005310bf8;
    goto L_7005310c2c;
L_7005310c10:;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(0x1000ull);
L_7005310c18:;
    { uint64_t ea = c->x[10] - 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[11] = (uint64_t)(subs64(c, c->x[11], 0x20ull));
    c->x[10] = (uint64_t)(c->x[10] + 0x20ull);
    { uint64_t ea = c->x[9]; ST128(ea, c->v[1]); ST128(ea + 16, c->v[2]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005310c18;
L_7005310c2c:;
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x9300ull);
    c->x[11] = (uint32_t)(0xa100ull);
    c->x[16] = (uint32_t)(0xa300ull);
    c->x[17] = (uint32_t)(0x48e0ull);
    c->x[4] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[12] = (uint64_t)(c->x[9] + 0x9000ull);
    c->x[13] = (uint64_t)(c->x[9] + 0x15000ull);
    c->x[14] = (uint64_t)(c->x[9] + c->x[11]);
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint32_t)(0xa200ull);
    c->x[12] = (uint64_t)(c->x[13] + 0x988ull);
    c->x[13] = (uint64_t)(c->x[9] + 0x14000ull);
    c->x[15] = (uint64_t)(c->x[10] + 0xd00ull);
    { uint64_t ea = c->x[12] + 0x138ull; ST64(ea, c->x[15]); }
    c->x[15] = (uint64_t)(c->x[9] + c->x[11]);
    c->x[11] = (uint64_t)(c->x[13] + 0x48ull);
    c->x[13] = (uint64_t)(c->x[9] + c->x[16]);
    { uint64_t ea = c->x[10] + 0xec8ull; ST64(ea, c->x[15]); }
    c->x[15] = (uint64_t)(c->x[9] + 0x14000ull);
    { uint64_t ea = c->x[12] + 0x128ull; ST64(ea, c->x[13]); }
    c->x[13] = (uint64_t)(c->x[9] + 0xe000ull);
    c->x[16] = (uint32_t)(0x48c0ull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[13] = (uint64_t)(c->x[15] + 0x400ull);
    c->x[15] = (uint32_t)(0xa020ull);
    { uint64_t ea = c->x[12] + 0xe18ull; ST64(ea, c->x[13]); }
    c->x[13] = (uint32_t)(0xa030ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[12] + 0xe8ull; ST64(ea, c->x[10]); }
    c->x[12] = (uint32_t)(0x87c8ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x4810ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[15]; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[9] + c->x[12]; ST64(ea, c->x[14]); }
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa040ull);
    c->x[12] = (uint64_t)(c->x[11] + 0x7b8ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[12] + 0x0ull; ST128(ea, c->v[1]); }
    c->x[15] = (uint32_t)(0x4880ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa050ull);
    { uint64_t ea = c->x[10] + 0xd00ull; ST64(ea, c->x[14]); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[14] = (uint32_t)(0x4820ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x4830ull);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[14]; ST128(ea, c->v[1]); }
    c->x[14] = (uint32_t)(0x4840ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa060ull);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[16] = (uint32_t)((c->x[16] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa070ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[14]; ST128(ea, c->v[1]); }
    c->x[14] = (uint32_t)(0x4860ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x4850ull);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[12] = (uint32_t)(0x4910ull);
    c->x[0] = (uint32_t)(0x4bd0ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa080ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[0] = (uint32_t)((c->x[0] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[6] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa090ull);
    c->x[1] = (uint32_t)(0x4be0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[14]; ST128(ea, c->v[1]); }
    c->x[14] = (uint64_t)(c->x[9] + 0x19000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x4870ull);
    c->x[14] = (uint64_t)(c->x[14] + 0xba8ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[19] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa0a0ull);
    c->x[22] = (uint32_t)(0x4448ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[21] = (uint64_t)(0x700531c000ull);
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa0b0ull);
    c->x[24] = (uint64_t)(0x700531c000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[15]; ST128(ea, c->v[1]); }
    c->x[15] = (uint32_t)(0x48a0ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x4890ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[25] = (uint32_t)(0xe020ull);
    c->x[5] = (uint64_t)(0x7005312000ull);
    c->x[5] = (uint64_t)(c->x[5] + 0xaacull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa0c0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[7] = (uint64_t)(0x7005312000ull);
    c->x[7] = (uint64_t)(c->x[7] + 0xbf4ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa0d0ull);
    c->x[20] = (uint64_t)(0x7005312000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0xc04ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[15]; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x48b0ull);
    { uint64_t ea = c->x[14] + 0x458ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[23] = (uint64_t)(0x7005312000ull);
    c->x[23] = (uint64_t)(c->x[23] + 0xcf8ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa0e0ull);
    c->v[3] = 0x41f00000ull;
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa0f0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[16]; ST128(ea, c->v[1]); }
    c->x[16] = (uint32_t)(0x6ae0ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x48d0ull);
    c->x[16] = (uint32_t)((c->x[16] & 0xffffffff0000ffffull) | 0x2cf0000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[15] = (uint64_t)(c->x[15] + c->x[16]);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0xa100ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[15]); }
    c->x[14] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[1] = LD128(ea); }
    c->x[13] = (uint32_t)(0xa110ull);
    { uint64_t ea = c->x[11] + 0x3c8ull; ST32(ea, (uint32_t)c->x[14]); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[17]; ST128(ea, c->v[1]); }
    c->x[15] = (uint32_t)(0x4bc0ull);
    { uint64_t ea = c->x[9] + c->x[13]; c->v[2] = LD128(ea); }
    c->x[13] = (uint32_t)(0x48f0ull);
    c->x[14] = (uint64_t)(0x700531c000ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x14000ull);
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xe18ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint64_t)(c->x[13] + 0x1a000ull);
    c->x[10] = (uint64_t)(c->x[13] + 0x14000ull);
    { uint64_t ea = c->x[9] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; c->x[9] = ea; }
    c->x[10] = (uint64_t)(c->x[10] + 0x58ull);
    c->x[11] = (uint64_t)(c->x[10] + 0x8a8ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x4920ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[9] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x4930ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x4940ull);
    { uint64_t ea = c->x[9] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x4950ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x4960ull);
    { uint64_t ea = c->x[9] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x4970ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x4980ull);
    { uint64_t ea = c->x[9] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x4990ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x49a0ull);
    { uint64_t ea = c->x[9] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x49b0ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x49c0ull);
    { uint64_t ea = c->x[9] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    c->x[12] = (uint32_t)(0x49d0ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x49e0ull);
    { uint64_t ea = c->x[9] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)(0x49f0ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[13] + c->x[12]; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[13] + c->x[9]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4a10ull);
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[12] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[10] = (uint64_t)(c->x[9] + 0x14000ull);
    { uint64_t ea = c->x[12] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; c->x[12] = ea; }
    c->x[10] = (uint64_t)(c->x[10] + 0x68ull);
    c->x[11] = (uint64_t)(c->x[10] + 0x998ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4a20ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[12] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4a30ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4a40ull);
    { uint64_t ea = c->x[12] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4a50ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4a60ull);
    { uint64_t ea = c->x[12] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4a70ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4a80ull);
    { uint64_t ea = c->x[12] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4a90ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4aa0ull);
    { uint64_t ea = c->x[12] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4ab0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4ac0ull);
    { uint64_t ea = c->x[12] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint32_t)(0x4ad0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[2]); }
    c->x[13] = (uint32_t)(0x4ae0ull);
    { uint64_t ea = c->x[12] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[12] = (uint32_t)(0x4af0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[13]; ST128(ea, c->v[1]); }
    c->x[13] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[9] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint32_t)(0x4bb0ull);
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[9] = (uint64_t)(c->x[17] + 0x1a000ull);
    c->x[10] = (uint64_t)(c->x[9] + 0x320ull);
    c->x[9] = (uint64_t)(c->x[17] + 0x14000ull);
    { uint64_t ea = c->x[10] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[16] = (uint64_t)(c->x[9] + 0x78ull);
    c->x[9] = (uint32_t)(0x4b10ull);
    c->x[18] = (uint64_t)(c->x[16] + 0xa88ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[18] + 0x0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[2]); }
    c->x[9] = (uint32_t)(0x4b20ull);
    { uint64_t ea = c->x[10] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[1]); }
    c->x[9] = (uint32_t)(0x4b30ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[2]); }
    c->x[9] = (uint32_t)(0x4b40ull);
    { uint64_t ea = c->x[10] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[1]); }
    c->x[9] = (uint32_t)(0x4b50ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[2]); }
    c->x[9] = (uint32_t)(0x4b60ull);
    { uint64_t ea = c->x[10] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[1]); }
    c->x[9] = (uint32_t)(0x4b70ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[2]); }
    c->x[9] = (uint32_t)(0x4b80ull);
    { uint64_t ea = c->x[10] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[1]); }
    c->x[9] = (uint32_t)(0x4b90ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[2]); }
    { uint64_t ea = c->x[10] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    c->x[9] = (uint32_t)(0x4ba0ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[17] + c->x[9]; ST128(ea, c->v[1]); }
    c->x[9] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[11] + 0xfa0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xfb0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + c->x[12]; ST128(ea, c->v[2]); }
    c->x[12] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[12] + 0xfb8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0xfa8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    { uint64_t ea = c->x[14] + 0xf98ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0xf70ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + c->x[15]; ST128(ea, c->v[1]); }
    c->x[15] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[15] + 0xfc0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + c->x[0]; ST128(ea, c->v[2]); }
    c->x[0] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[6] + 0xf78ull; uint64_t v = LD64(ea); c->x[6] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[2] = b; }
    { uint64_t ea = c->x[0] + 0xfc8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0x7005312000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0xbfcull);
    { uint64_t ea = c->x[17] + c->x[1]; ST128(ea, c->v[1]); }
    c->x[1] = (uint32_t)(0x4bf0ull);
    c->v[1] = 0x3f8000003f800000ull;
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[19] + 0xf80ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + c->x[1]; ST128(ea, c->v[2]); }
    c->x[17] = (uint64_t)(0x700531c000ull);
    c->x[1] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[17] + 0xfd0ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0xfd8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[18]); }
    c->x[16] = (uint64_t)(0x700531c000ull);
    c->x[18] = (uint64_t)(0x700531c000ull);
    c->x[2] = (uint64_t)(c->x[3] + 0x14000ull);
    { uint64_t ea = c->x[16] + 0xfe0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0xfe8ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[2] + 0x500ull);
    { uint64_t ea = c->x[21] + 0xf88ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0xf90ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + c->x[22]; ST64(ea, c->x[2]); }
    c->x[2] = (uint64_t)(0x700531c000ull);
    c->x[22] = (uint64_t)(0x7005312000ull);
    c->x[22] = (uint64_t)(c->x[22] + 0xda4ull);
    { uint64_t ea = c->x[2] + 0xff0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + c->x[25]; ST32(ea, VS32(1)); }
    c->x[25] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[25] + 0xff8ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x0ull; ST64(ea, c->x[5]); }
    c->x[5] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[6] + 0x0ull; ST64(ea, c->x[7]); }
    c->x[7] = (uint64_t)(0x700531d000ull);
    c->x[4] = (uint64_t)(0x7005312000ull);
    c->x[4] = (uint64_t)(c->x[4] + 0xe44ull);
    { uint64_t ea = c->x[5] + 0x0ull; uint64_t v = LD64(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->x[21] + 0x0ull; ST64(ea, c->x[23]); }
    c->x[6] = (uint64_t)(0x7005312000ull);
    c->x[6] = (uint64_t)(c->x[6] + 0xf60ull);
    { uint64_t ea = c->x[7] + 0x8ull; uint64_t v = LD64(ea); c->x[7] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; ST64(ea, c->x[22]); }
    c->x[19] = (uint64_t)(0x7005312000ull);
    c->x[19] = (uint64_t)(c->x[19] + 0xf6cull);
    { uint64_t ea = c->x[25] + 0x0ull; ST64(ea, c->x[4]); }
    c->x[4] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[4] + 0x10ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[5] + 0x0ull; ST64(ea, c->x[6]); }
    c->x[6] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[7] + 0x0ull; ST64(ea, c->x[19]); }
    c->x[5] = (uint64_t)(0x7005313000ull);
    c->x[5] = (uint64_t)(c->x[5] + 0x174ull);
    { uint64_t ea = c->x[6] + 0x18ull; uint64_t v = LD64(ea); c->x[6] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x0ull; ST64(ea, c->x[5]); }
    c->x[4] = (uint64_t)(0x700531d000ull);
    c->x[5] = (uint64_t)(0x7005310000ull);
    c->x[5] = (uint64_t)(c->x[5] + 0xd0ull);
    { uint64_t ea = c->x[4] + 0x20ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[6] + 0x0ull; ST64(ea, c->x[5]); }
    c->x[6] = (uint64_t)(0x700531d000ull);
    c->x[5] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[6] + 0x28ull; uint64_t v = LD64(ea); c->x[6] = (uint64_t)(v); }
    { uint64_t ea = c->x[5] + 0x800ull; c->v[1] = LD128(ea); }
    c->x[5] = (uint64_t)(0x7005313000ull);
    c->x[5] = (uint64_t)(c->x[5] + 0x234ull);
    c->x[7] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[6] + 0x0ull; ST64(ea, c->x[5]); }
    c->x[5] = (uint64_t)(0x700531d000ull);
    c->x[6] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[5] + 0x38ull; uint64_t v = LD64(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0xe000ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[6] + 0x40ull; uint64_t v = LD64(ea); c->x[6] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0xe010ull; ST128(ea, c->v[1]); }
    c->x[3] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[3] + 0x48ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x50ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x58ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x60ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x68ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x70ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x78ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x80ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x90ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x98ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0xa0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[4] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[4] + 0xa8ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[5] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[5] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[5] + 0xb0ull; uint64_t v = LD64(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[6] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[6] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[6] + 0xb8ull; uint64_t v = LD64(ea); c->x[6] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[3] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[3] + 0xc0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[11] = (uint64_t)(0x7005313000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x220ull);
    { uint64_t ea = c->x[7] + 0x30ull; uint64_t v = LD64(ea); c->x[7] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->v[1] = 0x3f800000ull;
    { uint64_t ea = c->x[12] + 0xc8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0xd0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    fp_op_s(c, FOP_DIV, 2, 1, 0);
    { uint64_t ea = c->x[14] + 0xd8ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0xe0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0xf0ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0xe8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x100ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x108ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0xf8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[4] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x110ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[5] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[5] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[4] + 0x118ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[6] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[6] = (uint64_t)(0x7005313000ull);
    c->x[6] = (uint64_t)(c->x[6] + 0x24cull);
    { uint64_t ea = c->x[5] + 0x120ull; uint64_t v = LD64(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[3] = (uint64_t)(0x700531d000ull);
    fp_op_s(c, FOP_DIV, 1, 0, 3);
    { uint64_t ea = c->x[3] + 0x128ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[7] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x130ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[13] = (uint64_t)(0x7005313000ull);
    c->x[13] = (uint64_t)(c->x[13] + 0x274ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x138ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x140ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x7005313000ull);
    c->x[17] = (uint64_t)(c->x[17] + 0x27cull);
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x148ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x150ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x158ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0x160ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x168ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[4] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[4] = (uint64_t)(0x7005313000ull);
    c->x[4] = (uint64_t)(c->x[4] + 0x290ull);
    { uint64_t ea = c->x[5] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[5] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[5] + 0x170ull; uint64_t v = LD64(ea); c->x[5] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0x0ull; ST64(ea, c->x[6]); }
    c->x[3] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[3] + 0x178ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x180ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x188ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[17]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x190ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x198ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x1a0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x1a8ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x1b0ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[4]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x1b8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[5] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0x1c0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[3] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x1c8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x1d0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x1d8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x1e0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x1e8ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x1f0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x1f8ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x200ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x208ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0x210ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x218ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x220ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x228ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x230ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x238ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x240ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x248ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x250ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x258ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[1] + 0x260ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x268ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x270ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x278ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x280ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x288ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x290ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x298ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x2a0ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x2a8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[1] = (uint64_t)(0x7005313000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x45cull);
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[2] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[2] + 0x2b0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x7005313000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x478ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x2b8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x2c0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x2c8ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x2d0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x2d8ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x2e0ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[1]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x2e8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x2f0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x2f8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x300ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x308ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x310ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x318ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x320ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x328ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x330ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x338ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x340ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x7005313000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x48cull);
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x348ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x350ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x358ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[0] + 0x360ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x368ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x370ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[15]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x378ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x380ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x388ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x390ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x398ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x3a0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x3a8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x3b0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x3b8ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x3c0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x3c8ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x3d0ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x3d8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x3e0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x3e8ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x3f0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x3f8ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[17] + 0x400ull; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[18] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[18] + 0x408ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x410ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x418ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x7005313000ull);
    c->x[14] = (uint64_t)(c->x[14] + 0x4a8ull);
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[15] + 0x420ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x428ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[17] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x430ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[18] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[17] = (uint64_t)(0x7005313000ull);
    c->x[17] = (uint64_t)(c->x[17] + 0x4bcull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x438ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[14]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x440ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x448ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[15] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[16] + 0x0ull; ST64(ea, c->x[17]); }
    c->x[11] = (uint64_t)(0x7005313000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x4e0ull);
    { uint64_t ea = c->x[15] + 0x450ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[12] = (uint64_t)(0x7005313000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x504ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x458ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x460ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x468ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[13] = (uint64_t)(0x7005313000ull);
    c->x[13] = (uint64_t)(c->x[13] + 0x528ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[9] + 0x470ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x478ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[14] = (uint64_t)(0x700531d000ull);
    c->x[15] = (uint32_t)(VS32(2));
    { uint64_t ea = c->x[12] + 0x480ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[10] = (uint64_t)(0x7005313000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x54cull);
    { uint64_t ea = c->x[11] + 0x498ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(0x7005313000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x5e0ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[0] = (uint32_t)(VS32(1));
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(c->x[9] + 0x1a000ull);
    c->x[11] = (uint32_t)(0x2bf4ull);
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x1d20000ull);
    { uint64_t ea = c->x[12] + 0x4a0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[16] = (uint32_t)(ROR32((uint32_t)c->x[15], 8) & 0xffffffull);
    c->x[17] = (uint32_t)(ROR32((uint32_t)c->x[15], 16) & 0xffffull);
    c->x[18] = (uint32_t)(ROR32((uint32_t)c->x[15], 24) & 0xffull);
    c->x[11] = (uint64_t)(c->x[10] + c->x[11]);
    c->x[8] = (uint64_t)(c->x[10] + c->x[8]);
    c->x[1] = (uint32_t)(ROR32((uint32_t)c->x[0], 8) & 0xffffffull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint32_t)(0x6000ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x2be0000ull);
    { uint64_t ea = c->x[12] + 0x4a8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x488ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[10] + c->x[11]);
    c->x[2] = (uint32_t)(ROR32((uint32_t)c->x[0], 16) & 0xffffull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x1000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0x4000ull);
    { uint64_t ea = c->x[12] + 0x4b0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x490ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x14000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0x15000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x4b8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x4c0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x1d000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint32_t)(0x2c10000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x4c8ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[10] + c->x[12]);
    { uint64_t ea = c->x[14] + 0x4d0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x2e000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0x36000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x4d8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x4e0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x54000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0x57000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x4e8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x4f0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x65000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0x75000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x4f8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x500ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0x91000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0xb2000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x508ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x510ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0xb7000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0xc0000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x518ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x520ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0xcb000ull);
    c->x[13] = (uint64_t)(c->x[11] + 0xd0000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[14] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x528ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0x530ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[13]); }
    c->x[12] = (uint64_t)(c->x[11] + 0xdb000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531d000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x110000ull);
    { uint64_t ea = c->x[12] + 0x540ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x538ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[12] = (uint64_t)(c->x[8] + 0x1000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x548ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x550ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[8] + 0x9000ull);
    c->x[12] = (uint64_t)(c->x[8] + 0x924000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x558ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x560ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[8] + 0xc28000ull);
    c->x[12] = (uint64_t)(c->x[8] + 0xc3b000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x568ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x570ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[9] + 0x15000ull);
    c->x[12] = (uint64_t)(c->x[8] + 0xc5d000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x578ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x580ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[9] + 0x16000ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint32_t)(0x3960000ull);
    c->x[13] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x588ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + c->x[11]);
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x598ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(c->x[9] + 0x19000ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(0x700531d000ull);
    c->x[11] = (uint64_t)(c->x[8] + 0xc6e000ull);
    { uint64_t ea = c->x[10] + 0x5a8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x5a0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[10] = (uint64_t)(c->x[8] + 0xc78000ull);
    c->x[11] = (uint64_t)(c->x[9] + 0x17000ull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(0x700531d000ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[10] + 0x5b0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x5b8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[10] = (uint64_t)(c->x[8] + 0xc88000ull);
    c->x[11] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[10]); }
    c->x[12] = (uint64_t)(c->x[8] + 0xd50000ull);
    c->x[10] = (uint64_t)(c->x[9] + 0x9000ull);
    { uint64_t ea = c->x[11] + 0x5c0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[13] + 0x590ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[11] = (uint64_t)(c->x[8] + 0xd6e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xdcb000ull);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[11]); }
    c->x[11] = (uint64_t)(0x700531d000ull);
    c->x[12] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[11] + 0x5c8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x5d0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[11] = (uint32_t)(VS32(0));
    fp_op_s(c, FOP_DIV, 0, 3, 0);
    c->x[8] = (uint64_t)(c->x[9] + 0x18000ull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0xa224ull);
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[11], 8) & 0xffffffull);
    c->x[13] = (uint32_t)(ROR32((uint32_t)c->x[11], 16) & 0xffffull);
    c->x[14] = (uint32_t)(ROR32((uint32_t)c->x[11], 24) & 0xffull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[0], 24) & 0xffull);
    { uint64_t ea = c->x[10] + 0x0ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[10] + 0x1ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[10] + 0x2ull; ST8(ea, (uint32_t)c->x[13]); }
    { uint64_t ea = c->x[10] + 0x3ull; ST8(ea, (uint32_t)c->x[14]); }
    { uint64_t ea = c->x[10] + 0x4ull; ST8(ea, (uint32_t)c->x[15]); }
    { uint64_t ea = c->x[10] + 0x5ull; ST8(ea, (uint32_t)c->x[16]); }
    { uint64_t ea = c->x[10] + 0x6ull; ST8(ea, (uint32_t)c->x[17]); }
    { uint64_t ea = c->x[10] + 0x7ull; ST8(ea, (uint32_t)c->x[18]); }
    { uint64_t ea = c->x[10] + 0x8ull; ST8(ea, (uint32_t)c->x[0]); }
    c->x[3] = (uint32_t)(VS32(0));
    { uint64_t ea = c->x[10] + 0x9ull; ST8(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->x[10] + 0xaull; ST8(ea, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[8] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    c->x[4] = (uint32_t)(ROR32((uint32_t)c->x[3], 8) & 0xffffffull);
    c->x[5] = (uint32_t)(ROR32((uint32_t)c->x[3], 16) & 0xffffull);
    c->x[6] = (uint32_t)(ROR32((uint32_t)c->x[3], 24) & 0xffull);
    { uint64_t ea = c->x[10] + 0xbull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[10] + 0xcull; ST8(ea, (uint32_t)c->x[3]); }
    { uint64_t ea = c->x[10] + 0xdull; ST8(ea, (uint32_t)c->x[4]); }
    { uint64_t ea = c->x[10] + 0xeull; ST8(ea, (uint32_t)c->x[5]); }
    { uint64_t ea = c->x[10] + 0xfull; ST8(ea, (uint32_t)c->x[6]); }
    { uint64_t ea = c->x[10] + 0x10ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[10] + 0x11ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[10] + 0x12ull; ST8(ea, (uint32_t)c->x[13]); }
    { uint64_t ea = c->x[10] + 0x13ull; ST8(ea, (uint32_t)c->x[14]); }
    { uint64_t ea = c->x[10] + 0x14ull; ST8(ea, (uint32_t)c->x[15]); }
    { uint64_t ea = c->x[10] + 0x15ull; ST8(ea, (uint32_t)c->x[16]); }
    { uint64_t ea = c->x[10] + 0x16ull; ST8(ea, (uint32_t)c->x[17]); }
    { uint64_t ea = c->x[10] + 0x17ull; ST8(ea, (uint32_t)c->x[18]); }
    { uint64_t ea = c->x[10] + 0x18ull; ST8(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[10] + 0x19ull; ST8(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->x[10] + 0x1aull; ST8(ea, (uint32_t)c->x[2]); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[10] + 0x1bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[10] + 0x1cull; ST8(ea, (uint32_t)c->x[3]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[10] + 0x1dull; ST8(ea, (uint32_t)c->x[4]); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[10] + 0x1eull; ST8(ea, (uint32_t)c->x[5]); }
    { uint64_t ea = c->x[10] + 0x1full; ST8(ea, (uint32_t)c->x[6]); }
    { uint64_t ea = c->x[26] + 0xcull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe58ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0xdull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe59ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0xeull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5aull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0xfull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x10ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5cull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x11ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5dull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x12ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5eull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x13ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe5full; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x14ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe60ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x15ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe61ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x16ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe62ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x17ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xe63ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0xb000ull);
    { uint64_t ea = c->x[8] + 0xa0ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa1ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa2ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x3ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa3ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa4ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x5ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa5ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x6ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa6ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x7ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa7ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa8ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x9ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xa9ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0xaull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xaaull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0xbull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xabull; ST8(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0x9ull);
    { uint64_t ea = c->x[8] + 0xf4ull; ST8(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0x6ull);
    { uint64_t ea = c->x[8] + 0x520ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[8] + 0xc00ull);
    { uint64_t ea = c->x[8] + 0x528ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[26] + 0x18ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc00ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x19ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc01ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc02ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1bull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc03ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1cull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc04ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc05ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc06ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x1full; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc07ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x20ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc08ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x21ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc09ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x22ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0aull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x23ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x24ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0cull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x25ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0dull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x26ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0eull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x27ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc0full; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x28ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc10ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x29ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc11ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc12ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2bull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc13ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2cull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc14ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc15ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc16ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[26] + 0x2full; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc17ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[28] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x5d8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005311f2cull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    if ((uint32_t)c->x[9] != 0) goto L_70053109c8;
    c->x[10] = (uint32_t)(0x3008ull);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x81340000ull);
    { uint64_t ea = c->x[11] + 0x478ull; ST32(ea, (uint32_t)c->x[10]); }
    goto L_70053109c8;
}

void f_70053179c4(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x1edull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053179d0;
L_70053179cc:;
    c->pc = 0; return;
L_70053179d0:;
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053179ecull; f_700531c748(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317af0;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(LD64(0x700531cef8ull));
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[9] + 0x798ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[0] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    c->x[30] = 0x7005317a18ull; f_700531c448(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317ac0;
    { uint64_t ea = c->x[0] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317af0;
    { uint64_t ea = c->x[8] + 0x120ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317af0;
    { uint64_t ea = c->x[8] + 0x420ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x4ull));
    if (COND_NE(c)) goto L_7005317af0;
    { uint64_t ea = c->x[8] + 0x438ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_7005317ae8;
    { uint64_t ea = c->x[8] + 0x440ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_7005317ae8;
    { uint64_t ea = c->x[8] + 0x2b4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 10) & 1) != 0) goto L_7005317a64;
    { uint64_t ea = c->x[8] + 0x2b8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x400000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x800ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    if ((uint32_t)c->x[8] == 0) goto L_7005317ac0;
L_7005317a64:;
    c->x[8] = (uint64_t)(LD64(0x700531ce38ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x7c5ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x2ull);
    c->x[30] = 0x7005317a84ull; f_700531c3c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 432; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005317ae8;
    c->x[8] = (uint64_t)(LD64(0x700531ce30ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xf7ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x2ull);
    c->x[30] = 0x7005317ab4ull; f_700531c3c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 448; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    goto L_7005317ae8;
L_7005317ac0:;
    c->x[8] = (uint64_t)(LD64(0x700531ce80ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xe35ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x2ull);
    c->x[30] = 0x7005317ae0ull; f_700531c3c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 432; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
L_7005317ae8:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x1edull; ST8(ea, (uint32_t)c->x[8]); }
L_7005317af0:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    goto L_70053179cc;
}

void f_7005317cd4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 96; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x70ull);
    c->v[9] = VS32(1);
    c->v[8] = VS32(0);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005317cfcull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317e80;
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005317d0cull; f_700531c4a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317e80;
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->x[29] - 32; ST64(ea, c->x[8]); }
    c->x[2] = (uint64_t)(c->x[29] - 0x20ull);
    c->x[30] = 0x7005317d3cull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317e80;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005317d48ull; f_700531c070(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_s(c, FOP_MUL, 4, 1, 1);
    fp_fma_s(c, 0, 0, 0, 0, 0, 4);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_DIV, 1, 9, 8);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[9] = (uint64_t)(c->x[8] + 0x2b4ull);
    { uint64_t ea = c->x[8] + 0x2bcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[20] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    fp_op_s(c, FOP_MUL, 0, 1, 0);
    c->v[1] = 0x41f00000ull;
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    fp_op_s(c, FOP_MUL, 9, 0, 8);
    if (COND_NE(c)) goto L_7005317e98;
    { uint64_t ea = c->x[20] + 0x1a4ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[20] + 240; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    c->x[21] = (uint64_t)(c->x[20] + 0x1a4ull);
    { uint64_t ea = c->x[20] + 0x1a8ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 0, 1, 0);
    { uint64_t ea = c->x[20] + 0xf8ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1acull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 2, 3);
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_ADD, 0, 4, 5);
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005317dc8ull; f_700531c3b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[20] + 0x1a0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[20] + 0xf8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 0, 0, 8);
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xab0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x7005317df0ull; f_7005315f68(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x114ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->x[29] - 0x20ull);
    c->x[2] = (uint64_t)(c->x[29] - 0x2cull);
    { uint64_t ea = c->sp + 56; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    c->x[3] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->x[20] + 0x118ull; c->v[1] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    fp_fma_s(c, 0, 0, 0, 9, 0, 2);
    { uint64_t ea = c->x[20] + 0x11cull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x40ull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 9, 1, 3);
    { uint64_t ea = c->x[20] + 0x1a4ull; c->v[3] = LD32(ea); }
    fp_fma_s(c, 0, 0, 7, 9, 4, 2);
    { uint64_t ea = c->x[20] + 0x1a8ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1acull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[8]); }
    fp_op_s(c, FOP_ADD, 0, 0, 3);
    { uint64_t ea = c->x[19] + 0xa0ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 4);
    { uint64_t ea = c->x[19] + 0xb0ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 2, 7, 5);
    { uint64_t ea = c->sp + 16; ST32(ea, VS32(3)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[19] + 0xc0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 32; ST32(ea, VS32(4)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 48; ST32(ea, VS32(0)); ST32(ea + 4, VS32(2)); }
    c->x[30] = 0x7005317e6cull; f_7005313838(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0x20ull);
    c->x[2] = (uint64_t)(c->x[29] - 0x2cull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005317e80ull; f_700531c378(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005317e80:;
    { uint64_t ea = c->sp + 96; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
L_7005317e98:;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005317ea0ull; f_700531c6a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005317e80;
    { uint64_t ea = c->x[20] + 0x1a0ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[0] = (uint64_t)(c->x[20] + 0x1a4ull);
    { uint64_t ea = c->x[1] + 0xab0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 0, 0, 8);
    c->x[30] = 0x7005317ebcull; f_7005315f68(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x38ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317ec8ull; f_700531bfa0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x114ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x38ull);
    { uint64_t ea = c->x[20] + 0x118ull; c->v[1] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[20] + 0x1a8ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 56; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_fma_s(c, 0, 0, 0, 9, 0, 2);
    { uint64_t ea = c->x[20] + 0x11cull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 9, 1, 3);
    { uint64_t ea = c->sp + 0x40ull; c->v[3] = LD32(ea); }
    fp_fma_s(c, 0, 0, 5, 9, 2, 3);
    { uint64_t ea = c->x[20] + 0x1a4ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 1, 4);
    fp_op_s(c, FOP_ADD, 0, 0, 3);
    { uint64_t ea = c->sp + 56; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[20] + 0x1acull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 0, 5, 0);
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005317f18ull; f_700531c0dc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005317f28ull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317e80;
}

void f_7005318714(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 64; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 80; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 96; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x70ull);
    c->v[8] = VS32(1);
    c->v[9] = VS32(0);
    { uint64_t ea = c->x[0] + 0x110ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x108ull; c->v[0] = LD32(ea); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    fp_fma_s(c, 0, 0, 0, 1, 9, 0);
    c->nzcv = cmp_s(c, VSF32(1), 0);
    { uint64_t ea = c->x[0] + 0x108ull; ST32(ea, VS32(0)); }
    if (COND_PL(c)) goto L_700531886c;
    { uint64_t ea = c->x[19] + 0x10cull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
L_7005318764:;
    { uint64_t ea = c->x[19] + 0x108ull; ST32(ea, VS32(0)); }
L_7005318768:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->sp + 0x30ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005318790ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531884c;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_70053187b0;
    c->x[1] = (uint64_t)(c->x[19] + 0xf0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053187b0ull; f_700531c3b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053187b0:;
    { uint64_t ea = c->x[19] + 0x108ull; c->v[12] = LD32(ea); }
    c->x[22] = (uint64_t)(c->x[19] + 0x70ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053187c0ull; f_70053161f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005318880;
    { uint64_t ea = c->x[19] + 0x108ull; c->v[0] = LD32(ea); }
    c->v[11] = 0x3f000000ull;
    c->v[13] = 0x40a00000ull;
    c->x[21] = (uint64_t)(c->x[19] + 0x178ull);
    fp_op_s(c, FOP_MUL, 12, 0, 11);
    { uint64_t ea = c->x[19] + 0x178ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(13));
    if (COND_GT(c)) goto L_70053188a4;
L_70053187e4:;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x70053187ecull; f_700531c328(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053187ec:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053187f8ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005318898;
L_70053187fc:;
    fp_op_s(c, FOP_DIV, 0, 9, 8);
    { uint64_t ea = c->x[19] + 0x114ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[3] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0u | 0u);
    fp_op_s(c, FOP_MUL, 1, 12, 1);
    fp_op_s(c, FOP_MUL, 2, 12, 2);
    fp_op_s(c, FOP_MUL, 3, 12, 3);
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    fp_op_s(c, FOP_MUL, 2, 0, 2);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    c->v[3] = 0x41f00000ull;
    fp_op_s(c, FOP_MUL, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 2, 2, 3);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    { uint64_t ea = c->sp + 48; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531884cull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531884c:;
    { uint64_t ea = c->sp + 96; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 80; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 64; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
L_700531886c:;
    if (COND_LE(c)) goto L_7005318768;
    { uint64_t ea = c->x[19] + 0x10cull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[0] = COND_GT(c) ? VS32(1) : VS32(0);
    goto L_7005318764;
L_7005318880:;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005318888ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053187ec;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005318894ull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053187ec;
L_7005318898:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053188a0ull; f_700531c678(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053187fc;
L_70053188a4:;
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x28ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, 0ull); }
    c->x[30] = 0x70053188c0ull; f_700531bfa0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053188d0ull; f_700531c670(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531892c;
    { uint64_t ea = c->sp + 48; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint64_t)(c->sp + 0x14ull);
    { uint64_t ea = c->sp + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    { uint64_t ea = c->sp + 0x38ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x28ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->sp + 20; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_SUB, 0, 4, 5);
    { uint64_t ea = c->sp + 0x1cull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005318900ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_EQ(c)) goto L_70053187e4;
    c->v[10] = VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(13));
    if (COND_PL(c)) goto L_7005318944;
    { uint64_t ea = c->sp + 20; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[19] + 0x114ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    goto L_70053187e4;
L_700531892c:;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005318934ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053187e4;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005318940ull; f_700531c318(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053187e4;
L_7005318944:;
    { uint64_t ea = c->x[19] + 0x114ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 20; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 3, 4);
    { uint64_t ea = c->sp + 0x1cull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[6] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 2, 0, 1);
    fp_op_s(c, FOP_NMUL, 7, 5, 4);
    fp_fma_s(c, 0, 0, 7, 3, 6, 7);
    fp_op_s(c, FOP_NMUL, 17, 2, 6);
    fp_fma_s(c, 0, 0, 1, 5, 6, 1);
    fp_fma_s(c, 0, 0, 5, 5, 0, 17);
    fp_op_s(c, FOP_NMUL, 0, 3, 0);
    fp_fma_s(c, 0, 0, 0, 2, 4, 0);
    fp_op_s(c, FOP_MUL, 2, 5, 5);
    fp_fma_s(c, 0, 0, 2, 7, 7, 2);
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    c->x[30] = 0x7005318990ull; f_700531c7a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[1] = 0xb4000000b4000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[1] = 0x3400000034000000ull;
    c->nzcv = COND_GE(c) ? cmp_s(c, VSF32(0), VSF32(1)) : 0x20000000ull;
    if (COND_LS(c)) goto L_70053187e4;
    c->x[30] = 0x70053189a8ull; f_700531c7b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_s(c, FOP_ADD, 0, 0, 0);
    { uint64_t ea = c->x[19] + 0x118ull; c->v[1] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->sp + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[2] = b; }
    fp_op_s(c, FOP_DIV, 0, 10, 0);
    { uint64_t ea = c->x[19] + 0x11cull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x14ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x114ull; c->v[7] = LD32(ea); }
    fp_op_s(c, FOP_NMUL, 6, 3, 4);
    fp_fma_s(c, 0, 0, 6, 1, 2, 6);
    fp_op_s(c, FOP_NMUL, 2, 7, 2);
    fp_fma_s(c, 0, 0, 2, 3, 5, 2);
    fp_op_s(c, FOP_NMUL, 1, 1, 5);
    fp_fma_s(c, 0, 0, 1, 7, 4, 1);
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(6)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_DIV, 10, 12, 0);
    c->x[30] = 0x70053189f0ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_s(c, FOP_MUL, 0, 10, 9);
    fp_op_s(c, FOP_MUL, 10, 0, 11);
    c->v[0] = VS32(10);
    c->x[30] = 0x7005318a00ull; f_700531c798(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[11] = VS32(0);
    c->v[0] = VS32(10);
    c->x[30] = 0x7005318a0cull; f_700531c7b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    fp_op_s(c, FOP_MUL, 2, 0, 2);
    { uint64_t ea = c->sp + 0x10ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x11cull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x118ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x114ull; c->v[6] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    fp_op_s(c, FOP_NMUL, 16, 2, 6);
    fp_op_s(c, FOP_NMUL, 18, 2, 5);
    fp_op_s(c, FOP_NMUL, 3, 0, 5);
    fp_fma_s(c, 0, 0, 3, 2, 4, 3);
    fp_op_s(c, FOP_MUL, 7, 0, 6);
    fp_fma_s(c, 0, 1, 7, 1, 4, 7);
    fp_fma_s(c, 0, 0, 16, 1, 5, 16);
    fp_fma_s(c, 0, 1, 18, 1, 6, 18);
    fp_fma_s(c, 0, 0, 3, 11, 6, 3);
    fp_fma_s(c, 0, 0, 7, 11, 5, 7);
    fp_fma_s(c, 0, 0, 6, 11, 4, 16);
    fp_fma_s(c, 0, 1, 4, 0, 4, 18);
    fp_op_s(c, FOP_NMUL, 5, 0, 7);
    fp_fma_s(c, 0, 0, 5, 3, 11, 5);
    fp_op_s(c, FOP_MUL, 17, 11, 7);
    fp_fma_s(c, 0, 0, 17, 3, 0, 17);
    fp_op_s(c, FOP_MUL, 16, 1, 7);
    fp_fma_s(c, 0, 1, 16, 3, 2, 16);
    fp_fma_s(c, 0, 0, 5, 6, 2, 5);
    fp_fma_s(c, 0, 1, 7, 6, 1, 17);
    fp_fma_s(c, 0, 0, 16, 6, 11, 16);
    fp_fma_s(c, 0, 1, 1, 4, 1, 5);
    fp_fma_s(c, 0, 1, 17, 4, 2, 7);
    fp_fma_s(c, 0, 1, 0, 4, 0, 16);
    { uint64_t ea = c->x[19] + 0x114ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0x118ull; ST32(ea, VS32(17)); }
    { uint64_t ea = c->x[19] + 0x11cull; ST32(ea, VS32(0)); }
    goto L_70053187e4;
}

void f_70053197dc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x70053197fcull; f_7005315100(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005319808ull; f_700531be78(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531981c;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x7005319818ull; f_700531c5c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005319858;
L_700531981c:;
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005319824ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 7) & 1) != 0) goto L_7005319860;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0xe7eull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffff0000ffffull) | 0xc3e50000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffff0000ffffffffull) | 0xefc000000000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffffull) | 0x3000000000000ull);
    c->x[9] = (uint32_t)(0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x32ull));
    c->x[8] = (uint64_t)(c->x[10] >> (c->x[8] & 63));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->x[0] = (uint32_t)((COND_HI(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[8]));
    goto L_7005319864;
L_7005319858:;
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005319860ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005319860:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005319864:;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
}

void f_700531be78(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[8]);
    if (c->x[0] == 0) goto L_700531bea8;
    c->x[30] = 0x700531be94ull; f_700531c560(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
L_700531be98:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_7005316138(c); return;
L_700531bea8:;
    c->x[1] = (uint64_t)(0ull | 0ull);
    goto L_700531be98;
}

void f_700531beb0(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xffffffc0ull) | ((((uint32_t)c->x[9] & 0xffffffc0ull) | ((uint32_t)c->x[8] & 0x3full)) & 0x3full));
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfffff000ull) | ((((uint32_t)c->x[9] & 0xfffff03full) | (ROR32((uint32_t)c->x[8], 26) & 0xfc0ull)) & 0xfffull));
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x68ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x90ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = 0; return;
}

void f_700531bef8(Cpu *c) {
    c->pc = 0; return;
}

void f_700531befc(Cpu *c) {
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[1] >> 31) & 1)) & 0xfffffffc00000000ull) | (ROR64(c->x[1], 62) & 0x3fffffffcull));
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[2] & 0x1ull));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)(~(uint32_t)c->x[8]));
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
}

void f_700531bf28(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    if (c->x[21] == 0) goto L_700531bf4c;
    { uint64_t ea = c->x[21] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 8) & 1) != 0) goto L_700531bf70;
L_700531bf4c:;
    c->x[8] = (uint64_t)(c->x[0] + 0x104ull);
    { uint64_t ea = c->x[0] + 0x10cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700531bf70:;
    c->x[20] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531bf7cull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[21] + 0x58ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_700531c7e0(c); return;
}

void f_700531c070(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, VS64(10)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_700531c094;
    { uint64_t ea = c->x[20] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 7) & 1) != 0) goto L_700531c0bc;
L_700531c094:;
    { uint64_t ea = c->x[0] + 248; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->x[0] + 0x100ull; c->v[10] = LD32(ea); }
L_700531c09c:;
    c->v[0] = VS32(8);
    c->v[1] = VS32(9);
    c->v[2] = VS32(10);
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[10] = LD64(ea); c->sp = c->sp + 64; }
    c->pc = 0; return;
L_700531c0bc:;
    c->x[19] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531c0c8ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 68; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[20] + 0x4cull; c->v[10] = LD32(ea); }
    c->x[30] = 0x700531c0d8ull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531c09c;
}

void f_700531c258(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[8] = (uint32_t)(0xbf800000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[0] + 72; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[0] + 0x38ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x18ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[0] + 0x20ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[0] + 60; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0x100000000ull);
    { uint64_t ea = c->x[0] + 0x58ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x5cull; ST8(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x80ull; ST32(ea, (uint32_t)c->x[1]); }
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[0] + 132; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 140; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 8; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[0] + 96; ST64(ea, 0ull); ST64(ea + 8, c->x[2]); }
    c->x[2] = (uint32_t)(0x7cull);
    { uint64_t ea = c->x[0] + 112; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[0] = (uint64_t)(c->x[0] + 0x98ull);
    c->x[30] = 0x700531c2b8ull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x118ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x94ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x114ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee0ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xa78ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700531c2e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c8f0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c2e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c8f8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c2f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c900ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c2f8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c908ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c300(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c910ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c308(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c918ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c310(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c920ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c318(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c928ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c320(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c930ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c328(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c938ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c330(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c940ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c338(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c948ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c340(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c950ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c348(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c958ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c350(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c960ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c358(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c968ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c360(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c970ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c368(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c978ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c370(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c980ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c378(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c988ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c380(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c990ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c388(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c998ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c390(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9a0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3a0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9b0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3b0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9c0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3c0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9d0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3d0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9e0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9f0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca00ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c400(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca10ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c410(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca20ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c420(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca30ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c430(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca40ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c440(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca50ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c450(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca60ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c460(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca70ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c470(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca80ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c480(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca90ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c490(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531caa0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4a0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cab0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4b0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cac0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4c0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cad0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4d0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cae0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531caf0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb00ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c500(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb10ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c510(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb20ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c520(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb30ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c530(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb40ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c540(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb50ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c550(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb60ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c560(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb70ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c570(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb80ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c580(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb90ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c590(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cba0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5a0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbb0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5b0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbc0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5c0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbd0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5d0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbe0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbf0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc00ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c600(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc10ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c618(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc28ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c628(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc38ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c638(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc48ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c648(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc58ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c658(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc68ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c670(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc80ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c680(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc90ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c698(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cca8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6a8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccb8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6b8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccc8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6c8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccd8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6d8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cce8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccf8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6f8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd08ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c708(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd18ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c718(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd28ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c728(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd38ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c738(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd48ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c748(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd58ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c758(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd68ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c770(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd80ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c788(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd98ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7a0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdb0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7b8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdc8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7d0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cde0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdf8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005401000(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x364ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x0ull);
    c->x[30] = 0x70054010a0ull; f_7005409000(c);
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
    c->sp = (uint64_t)(c->sp + 0xa000ull);
    c->pc = 0x70008a48a8ull; return;
}

void f_7005401c00(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    if (c->x[1] == 0) goto L_7005401cb0;
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_7005401cb0;
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_7005401cb0:;
    c->x[0] = (uint32_t)(0xbull);
    c->x[30] = 0x7005401cb8ull; f_7005409000(c);
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
    c->sp = (uint64_t)(c->sp - 0x160ull);
    c->pc = 0x7001d4320cull; return;
}

void f_7005402800(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[3] = (uint64_t)(b); }
    c->x[0] = (uint32_t)(0xeull);
    c->x[30] = 0x700540289cull; f_7005409000(c);
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
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x7001d3cfccull; return;
}

void f_7005404000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x20ull);
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
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x340ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x5ull);
    c->x[30] = 0x70054040b4ull; f_7005409000(c);
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
    c->x[16] = (uint64_t)(0x700540e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x160ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005404150ull; rt_dispatch(c); c->pc = 0;
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
    { uint64_t ea = c->sp + 0x340ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    if (c->x[3] == 0) goto L_70054041f8;
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70054041f8;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
L_70054041f8:;
    c->x[0] = (uint32_t)(0x6ull);
    c->x[30] = 0x7005404200ull; f_7005409000(c);
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
    c->sp = (uint64_t)(c->sp + 0x20ull);
    c->x[30] = (uint64_t)(0x700540e000ull);
    c->x[30] = (uint64_t)(c->x[30] + 0x148ull);
    { uint64_t ea = c->x[30] + 0x0ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->x[30] = (uint64_t)(c->x[30] + 0x9a6000ull);
    c->x[30] = (uint64_t)(c->x[30] + 0xa20ull);
    c->pc = 0x70009a6a20ull; return;
}

void f_7005502200(Cpu *c) {
    { uint64_t ea = c->x[19] + 0x16eull; ST8(ea, (uint32_t)c->x[8]); }
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x2ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055022bcull; f_7005505000(c);
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    c->pc = 0x70001fcc30ull; return;
}

void f_7005502600(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x4ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055026b8ull; f_7005505000(c);
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x700216fd1cull; return;
}

void f_7005502c00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x7ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005502cb8ull; f_7005505000(c);
    { uint64_t ea = c->sp + 0x310ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005502d68;
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x7002179bd0ull; return;
L_7005502d68:;
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    c->pc = 0; return;
}

void f_7005503200(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xaull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055032b8ull; f_7005505000(c);
    { uint64_t ea = c->sp + 0x310ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = c->x[8] & 0xf0000000ull;
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005503368;
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    c->pc = 0x700216fd80ull; return;
L_7005503368:;
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    c->pc = 0; return;
}

void f_7005503800(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xdull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055038b8ull; f_7005505000(c);
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->pc = 0x7000b4ce94ull; return;
}

void f_7005503e00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 272; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 304; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 336; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 368; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 400; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 432; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 464; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 496; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 528; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 560; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 592; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 624; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 656; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 688; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 720; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 752; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0x7005500000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xe40ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x10ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005503eb8ull; f_7005505000(c);
    { uint64_t ea = c->sp + 272; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 304; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 336; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 368; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 400; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 432; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 464; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 496; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 528; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 560; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 592; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 624; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 656; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 688; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 720; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 752; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    { uint64_t ea = c->x[19] + 0x175ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x70001fb758ull; return;
}

void f_700550577c(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(0xffffffffffffedd0ull);
L_700550579c:;
    c->x[10] = (uint64_t)(c->x[19] + c->x[9]);
    c->x[9] = (uint64_t)(adds64(c, c->x[9], 0x10ull));
    { uint64_t ea = c->x[10] + 0x1230ull; ST128(ea, c->v[0]); }
    if (COND_NE(c)) goto L_700550579c;
    c->x[9] = (uint64_t)(0x700550f000ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[4] + 0x3ull);
    { uint64_t ea = c->x[19] + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[2]); }
    { uint64_t ea = c->x[9] + 0xff0ull; c->v[0] = LD64(ea); }
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0xfffffffcull);
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, c->x[19]); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    /* hint */
    c->x[10] = (uint64_t)(0x700550593cull);
    { uint64_t ea = c->x[19] + 0xf38ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint32_t)(0xb840ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3980000ull);
    { uint64_t ea = c->x[19] + 256; ST64(ea, c->x[19]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->x[20] + c->x[9]; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, VS64(0)); }
    c->x[10] = (uint64_t)(c->x[9] + c->x[11]);
    c->x[11] = (uint64_t)(0ull | 0xffffff800001ffffull);
    { uint64_t ea = c->x[19] + 0x40ull; ST64(ea, c->x[9]); }
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0x0ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    /* hint */
    c->x[10] = (uint64_t)(0x7005505984ull);
    { uint64_t ea = c->x[19] + 0x110ull; ST64(ea, c->x[10]); }
    if (COND_CC(c)) goto L_700550591c;
    c->x[10] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[10] != 0) goto L_700550591c;
    c->x[11] = (uint64_t)(0xd068ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffff0000ffffull) | 0xd53b0000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffff0000ffffffffull) | 0xfd0000000000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffffull) | 0xf940000000000000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_700550591c;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x3c0ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xd65f0000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550591c;
    /* hint */
    c->x[9] = (uint64_t)(0x70055059a4ull);
    /* hint */
    c->x[10] = (uint64_t)(0x7005505ac4ull);
    { uint64_t ea = c->sp + 24; ST64(ea, c->x[19]); ST64(ea + 8, c->x[9]); }
    /* hint */
    c->x[9] = (uint64_t)(0x7005505a94ull);
    c->x[21] = (uint64_t)(c->x[19] + 0x2f0ull);
    c->x[3] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->sp + 40; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    /* hint */
    c->x[9] = (uint64_t)(0x7005505accull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[4]);
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[9]); }
    c->x[30] = 0x700550588cull; f_7005509828(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505934;
    /* hint */
    c->x[8] = (uint64_t)(0x7005510050ull);
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[8] + 0x0ull; c->v[0] = LD128(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x70055058acull; f_7005509c04(c);
    c->v[0] = 0ull;
    c->x[8] = (uint64_t)(0x700550f000ull);
    /* hint */
    c->x[9] = (uint64_t)(0x7005505ad4ull);
    { uint64_t ea = c->x[8] + 0xfe8ull; c->v[1] = LD64(ea); }
    c->x[8] = (uint64_t)(c->x[19] + 0x3d8ull);
    { uint64_t ea = c->x[19] + 0x400ull; ST64(ea, c->x[9]); }
    /* hint */
    c->x[9] = (uint64_t)(0x7005505b5cull);
    ((sa64 *)&c->v[0])[1] = ((sa64 *)&c->v[0])[0];
    { uint64_t ea = c->x[19] + 0x3f0ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[19] + 0x3d0ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->x[19] + 0x3e8ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[19] + 0x3f8ull; ST64(ea, c->x[19]); }
    { uint64_t ea = c->x[8] + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0x408ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x420ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0x440ull);
    { uint64_t ea = c->x[19] + 0x430ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x4345ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x36520000ull);
    { uint64_t ea = c->x[19] + 0x410ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 0x438ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x10ull);
    { uint64_t ea = c->x[19] + 0xc0ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005505924;
L_700550591c:;
    c->x[8] = (uint32_t)(0x5ull);
L_7005505920:;
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
L_7005505924:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
L_7005505934:;
    c->x[8] = (uint32_t)(0x4ull);
    goto L_7005505920;
}

void f_7005505a94(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x510ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005505ac0;
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[0] + 0x51cull);
    c->x[9] = (uint64_t)(0x100000000ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[8] = (uint32_t)(0x11e8ull);
    { uint64_t ea = c->x[0] + 0x510ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[0] + 0x2e8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[0] + c->x[8]; ST128(ea, c->v[0]); }
L_7005505ac0:;
    c->pc = 0; return;
}

void f_7005505ac4(Cpu *c) {
    c->x[0] = (uint64_t)(c->x[0] + 0x3d0ull);
    f_70055093e8(c); return;
}

void f_7005505acc(Cpu *c) {
    c->x[0] = (uint64_t)(c->x[0] + 0x3d0ull);
    goto L_70055094d0;
L_70055094d0:;
    if (c->x[3] == 0) goto L_7005509804;
    c->sp = (uint64_t)(c->sp - 0xd0ull);
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[30]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x70055094fcull; f_7005509468(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550950cull; f_700550934c(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005509518ull; f_7005509080(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005509528ull; f_700550a414(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005509540ull; f_700550a48c(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005509554ull; f_70055093e8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x5a40ull);
    /* hint */
    c->x[8] = (uint64_t)(0x70055111f5ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x2190000ull);
    c->x[0] = (uint64_t)(c->sp + 0x8cull);
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[8]); ST64(ea + 8, c->x[20]); }
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[1] = (uint64_t)(c->sp + 0x98ull);
    { uint64_t ea = c->sp + 136; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[8]); }
    c->pc = c->x[9]; c->x[30] = 0x7005509588ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005509814;
    { uint64_t ea = c->sp + 0x8cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_HI(c)) goto L_7005509814;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint64_t)(0ull | c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x70055095b8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    { uint64_t ea = c->x[19] + 40; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70055095ccull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005509814;
    c->x[9] = (uint64_t)(0x7005510000ull);
    c->x[10] = (uint64_t)(0x7005510000ull);
    c->x[8] = (uint32_t)(0x98ull);
    { uint64_t ea = c->x[9] + 0x140ull; c->v[0] = LD128(ea); }
    c->x[9] = (uint32_t)(0x8ull);
    c->x[11] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[10] + 0x130ull; c->v[1] = LD128(ea); }
    c->x[10] = (uint64_t)(0x7005510000ull);
    VW(vu64, 1, 2, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 3, (vu64){} + (uint64_t)c->x[9]);
    { uint64_t ea = c->x[11] + 0xe0ull; c->v[4] = LD128(ea); }
    { uint64_t ea = c->x[10] + 0xc0ull; c->v[5] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0ull);
L_7005509608:;
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 2) > VREG(vu64, 5)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[0]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005509624;
    { uint64_t ea = c->x[23] + c->x[9]; ST8(ea, 0u); }
L_7005509624:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 5)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[1]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005509648;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x1ull; ST8(ea, 0u); }
L_7005509648:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[2]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_700550966c;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x2ull; ST8(ea, 0u); }
L_700550966c:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 6), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[3]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005509690;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x3ull; ST8(ea, 0u); }
L_7005509690:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 1)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[4]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055096b4;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x4ull; ST8(ea, 0u); }
L_70055096b4:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 1)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 6), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[5]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055096d8;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x5ull; ST8(ea, 0u); }
L_70055096d8:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[6]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70055096fc;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x6ull; ST8(ea, 0u); }
L_70055096fc:;
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[8]);
    VW(vu64, 1, 6, (vu64)(VREG(vu64, 6) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 6, 2, 0, 0, 6, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 6, SHUF(VREG(vu16, 0), VREG(vu16, 6), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 6, SHUF(VREG(vu8, 0), VREG(vu8, 6), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[6])[7]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005509720;
    c->x[10] = (uint64_t)(c->x[23] + c->x[9]);
    { uint64_t ea = c->x[10] + 0x7ull; ST8(ea, 0u); }
L_7005509720:;
    VW(vu64, 1, 1, VREG(vu64, 1) + VREG(vu64, 3));
    VW(vu64, 1, 4, VREG(vu64, 4) + VREG(vu64, 3));
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
    VW(vu64, 1, 5, VREG(vu64, 5) + VREG(vu64, 3));
    VW(vu64, 1, 0, VREG(vu64, 0) + VREG(vu64, 3));
    (void)(subs64(c, c->x[9], 0x98ull));
    if (COND_NE(c)) goto L_7005509608;
    { uint64_t ea = c->x[23] + 0; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    c->x[9] = (uint64_t)(c->tpidrro);
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8cull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[23] + 16; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[23] + 0x48ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[23] + 0x54ull; ST32(ea, (uint32_t)c->x[9]); }
L_7005509760:;
    { uint64_t ea = c->x[20] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[23] + c->x[8]);
    { uint64_t ea = c->x[10] + 0x58ull; ST8(ea, (uint32_t)c->x[9]); }
    if ((uint32_t)c->x[9] == 0) goto L_700550977c;
    (void)(subs64(c, c->x[8], 0x3full));
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    if (COND_NE(c)) goto L_7005509760;
L_700550977c:;
    { uint64_t ea = c->x[19] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[8] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(c->sp + 0x98ull);
    VW(vu64, 1, 0, (vu64){} + (uint64_t)c->x[8]);
    c->x[11] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[11] + 0x90ull; c->v[1] = LD128(ea); }
    c->x[11] = (uint64_t)(0x7005510000ull);
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->sp + 0x8cull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->sp + 0x90ull);
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    c->v[0] = ((u128)0xffffffffffffffffull << 64 | 0xffffffffffffffffull);
    { uint64_t ea = c->x[11] + 0x60ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    c->x[9] = (uint64_t)(c->sp + 0x88ull);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[9]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint32_t)(0x86b0ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[8] = (uint64_t)(c->x[12] + c->x[8]);
    { uint64_t ea = c->sp + 64; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x60ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 0x80ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70055097e0ull; f_700550ff68(c);
    { uint64_t ea = c->x[23] + 0x50ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700550980c;
    c->x[8] = (uint32_t)(0x2ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[23] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x70055097fcull; f_70055091ac(c);
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005509814;
L_7005509804:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550980c:;
    { uint64_t ea = c->x[23] + 0x54ull; ST32(ea, 0u); }
    c->x[0] = (uint32_t)(0x2ull);
L_7005509814:;
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xd0ull);
    c->pc = 0; return;
}

void f_7005506014(Cpu *c) {
    if (c->x[1] == 0) goto L_7005506088;
    c->x[8] = (uint64_t)(c->x[0] + 0xfb8ull);
    c->x[8] = (uint64_t)(lda64(c->x[8]));
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005506088;
    { uint64_t ea = c->x[0] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005506088;
    { uint64_t ea = c->x[0] + 0xf80ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005506088;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_700550608c;
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[9] != 0) goto L_700550608c;
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550608c;
L_7005506088:;
    c->x[8] = (uint32_t)(0u | 0u);
L_700550608c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_7005506094(Cpu *c) {
    { uint64_t ea = c->x[0] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_70055060f0;
    { uint64_t ea = c->x[0] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_70055060f0;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_70055060f4;
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[9] != 0) goto L_70055060f4;
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_70055060f4;
L_70055060f0:;
    c->x[8] = (uint32_t)(0u | 0u);
L_70055060f4:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_70055060fc(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x5c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_7005506198;
    c->sp = (uint64_t)(c->sp - 0xe0ull);
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0xf08ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0xdf8ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[23] - 0x24ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x23ull));
    if (COND_CC(c)) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0x2f4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005506154ull; f_7005506014(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506180;
    c->x[22] = (uint64_t)(c->x[19] + 0x650ull);
L_700550615c:;
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_7005506170;
    { uint64_t ea = c->x[22] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70055061a0;
L_7005506170:;
    c->x[23] = (uint64_t)(subs64(c, c->x[23], 0x1ull));
    c->x[22] = (uint64_t)(c->x[22] + 0x38ull);
    if (COND_NE(c)) goto L_700550615c;
L_700550617c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005506180:;
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xe0ull);
    c->pc = 0; return;
L_7005506198:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_70055061a0:;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x90ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[8]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 112; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70055061c0ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; c->v[0] = LD128(ea); }
    c->x[2] = (uint64_t)(c->sp + 0x70ull);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[0]); }
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[19]); }
    /* hint */
    c->x[8] = (uint64_t)(0x7005506094ull);
    { uint64_t ea = c->sp + 0x40ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[8]); ST64(ea + 8, c->x[8]); }
    c->x[30] = 0x70055061f0ull; f_700550ac54(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005506180;
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_7005506180;
    { uint64_t ea = c->sp + 0x80ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->pc = c->x[8]; c->x[30] = 0x7005506234ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005506180;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xff30ull);
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550626cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005506180;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x79f0ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x2100000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550617c;
    c->x[23] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[24] = (uint32_t)(0xa000ull);
    c->x[21] = (uint32_t)(0x28ull);
    c->x[22] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[24] = (uint32_t)((c->x[24] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    c->x[25] = (uint32_t)(0x3a00000ull);
L_70055062a8:;
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[20] + c->x[21]);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint64_t)(c->x[9] + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->pc = c->x[8]; c->x[30] = 0x70055062c8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550617c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] + c->x[22]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550617c;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x70055062f8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550617c;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)(c->x[9] + c->x[24]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_7005506180;
    c->x[9] = (uint64_t)(c->x[9] + c->x[25]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CS(c)) goto L_7005506180;
    c->x[21] = (uint64_t)(c->x[21] + 0x8ull);
    (void)(subs64(c, c->x[21], 0x78ull));
    if (COND_CC(c)) goto L_70055062a8;
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[22] = (uint32_t)(0u | 0u);
    /* hint */
    c->x[24] = (uint64_t)(0x7005510170ull);
    /* hint */
    c->x[25] = (uint64_t)(0x700551017cull);
L_7005506344:;
    { uint64_t ea = c->x[24] + (c->x[23] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    c->x[21] = (uint64_t)(c->x[8] + c->x[20]);
    { uint64_t ea = c->sp + 0x0ull; ST32(ea, 0u); }
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[9]; c->x[30] = 0x700550636cull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_70055063c0;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[21] + 0xcull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_70055063c0;
    { uint64_t ea = c->x[19] + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[21] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x4ull);
    c->pc = c->x[8]; c->x[30] = 0x7005506398ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_70055063c0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + (c->x[23] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_70055063c0;
    (void)(subs64(c, c->x[23], 0x1ull));
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    c->x[22] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[23], 0x3ull));
    if (COND_NE(c)) goto L_7005506344;
L_70055063c0:;
    c->x[0] = (uint32_t)((uint32_t)c->x[22] & 0x1ull);
    goto L_7005506180;
}

void f_7005506bec(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005506c00ull; f_7005507d50(c);
    { uint64_t ea = c->x[20] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005506c38;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005506c14ull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506c3c;
    { uint64_t ea = c->x[20] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x890ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005506c38;
    { uint64_t ea = c->x[8] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005506c3c;
L_7005506c38:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005506c3c:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005506d44(Cpu *c) {
    { uint64_t ea = c->x[2] + 0x0ull; ST64(ea, 0ull); }
    c->x[8] = (uint32_t)(0x7ull);
    { uint64_t ea = c->x[2] + 8; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, 0u); }
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
}

void f_7005507020(Cpu *c) {
    if (c->x[3] == 0) goto L_70055072f0;
    c->sp = (uint64_t)(c->sp - 0x170ull);
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 336; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 352; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->v[0] = 0x0ull;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    { uint64_t ea = c->x[3] + 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[3] + 48; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[3] + 0x0ull; ST128(ea, c->v[0]); }
    if (COND_HI(c)) goto L_70055072e4;
    c->x[8] = (uint64_t)(c->x[21] & 0xfffull);
    if (c->x[8] != 0) goto L_70055072e4;
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005507084ull; f_7005507c54(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072e4;
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint64_t)(0x7005510000ull);
    c->x[25] = (uint64_t)(c->x[25] + 0x548ull);
    /* hint */
    c->x[26] = (uint64_t)(0x7005510540ull);
L_700550709c:;
    c->x[8] = (uint64_t)(c->x[26] + c->x[24]);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[8] + 0; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[9] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->x[1] = (uint64_t)(c->x[9] + c->x[21]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[23]);
    c->x[30] = 0x70055070b8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072f8;
    if ((uint32_t)c->x[23] == 0) goto L_70055070e0;
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[9] = (uint64_t)(0ull | c->x[25]);
L_70055070c8:;
    { uint64_t ea = c->x[8]; uint64_t v = LD8(ea); c->x[8] = c->x[8] + 1; c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9]; uint64_t v = LD8(ea); c->x[9] = c->x[9] + 1; c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_70055072f8;
    c->x[23] = (uint64_t)(subs64(c, c->x[23], 0x1ull));
    if (COND_NE(c)) goto L_70055070c8;
L_70055070e0:;
    c->x[24] = (uint64_t)(c->x[24] + 0xa8ull);
    c->x[25] = (uint64_t)(c->x[25] + 0xa8ull);
    (void)(subs64(c, c->x[24], 0xa80ull));
    if (COND_NE(c)) goto L_700550709c;
    c->x[23] = (uint32_t)(0xdc70ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[23] = (uint32_t)((c->x[23] & 0xffffffff0000ffffull) | 0x3950000ull);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(c->x[21] + c->x[23]);
    c->x[1] = (uint64_t)(c->x[8] + 0x388ull);
    c->x[30] = 0x7005507114ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072f8;
    c->x[8] = (uint32_t)(0xa558ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    (void)(subs64(c, c->x[26], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055072f8;
    c->x[1] = (uint64_t)(c->x[21] + c->x[23]);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507144ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072f8;
    c->x[28] = (uint32_t)(0xd238ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    c->x[28] = (uint32_t)((c->x[28] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[28]);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055072f8;
    c->x[8] = (uint32_t)(0x1e8ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3960000ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[30] = 0x700550717cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072f8;
    c->x[8] = (uint32_t)(0x1678ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3a80000ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055072f8;
    c->x[8] = (uint32_t)(0xf7a8ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3960000ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[30] = 0x70055071b4ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055072f8;
    c->x[8] = (uint32_t)(0xcda0ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ac0000ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    (void)(subs64(c, c->x[25], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055072f8;
    c->x[8] = (uint64_t)(c->x[28] + c->x[21]);
    c->x[27] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x150ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[27] = (uint64_t)((c->x[27] & 0xffffffffffff0000ull) | 0x0ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    c->x[30] = 0x70055071f4ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550721c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_700550721c;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550721c;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x44ull; ST32(ea, (uint32_t)c->x[8]); }
L_700550721c:;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[26]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 256; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x7005507238ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507324;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507324;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507324;
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550726cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507324;
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[26]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507284ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055075fc;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_70055075fc;
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x70055072acull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055075fc;
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_70055075fc;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 16; ST64(ea, c->x[9]); ST64(ea + 8, c->x[8]); }
    c->x[9] = (uint32_t)((uint32_t)c->x[10] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    if (c->x[8] != 0) goto L_7005507330;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005507330;
L_70055072e4:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005507300;
L_70055072f0:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_70055072f8:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint32_t)(0x2ull);
L_7005507300:;
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005507304:;
    { uint64_t ea = c->sp + 352; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 336; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x170ull);
    c->pc = 0; return;
L_7005507324:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x4ull);
L_700550732c:;
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005507330:;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 256; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 240; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 224; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0xd0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xc0ull; ST8(ea, 0u); }
    c->x[30] = 0x700550735cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_70055076ac;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_70055076ac;
    c->x[1] = (uint64_t)(c->x[8] + 0x468ull);
    c->x[2] = (uint64_t)(c->sp + 0xc0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005507390ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x1e8ull);
    c->x[30] = 0x70055073acull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_70055076ac;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_70055076ac;
    c->x[1] = (uint64_t)(c->x[8] + 0x50ull);
    c->x[2] = (uint64_t)(c->sp + 0xd4ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[30] = 0x70055073e0ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x101ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0xe3ull));
    if (COND_CC(c)) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[30] = 0x700550740cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_70055076ac;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_70055076ac;
    c->x[1] = (uint64_t)(c->x[8] + 0xe8ull);
    c->x[2] = (uint64_t)(c->sp + 0xf8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507440ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_70055076ac;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 5) & 1) != 0) goto L_7005507608;
L_7005507468:;
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507478ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550785c;
    c->x[9] = (uint32_t)(0x7b68ull);
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x36d0000ull);
    c->x[9] = (uint64_t)(c->x[21] + c->x[9]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550785c;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xe8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[30] = 0x70055074acull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550785c;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550785c;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xd0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x78ull);
    c->x[30] = 0x70055074d8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550785c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xe0ull);
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->x[19] + 32; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 0xd0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[19] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0xd8ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0xb0ull; ST8(ea, 0u); }
    c->x[30] = 0x7005507514ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507a20;
    c->x[1] = (uint64_t)(c->x[8] + 0x1e8ull);
    c->x[2] = (uint64_t)(c->sp + 0xe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550753cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507a20;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0xe8ull);
    c->x[30] = 0x7005507568ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507a20;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x468ull);
    c->x[30] = 0x7005507594ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x78ull);
    c->x[30] = 0x70055075c0ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507a20;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xd0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507a20;
    (void)(subs32(c, (uint32_t)c->x[8], 0x40ull));
    if (COND_CS(c)) goto L_7005507c48;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x2ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    if ((uint32_t)c->x[8] != 0) goto L_70055076b8;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x2ull);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_70055076b8;
L_70055075fc:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x40ull);
    goto L_700550732c;
L_7005507608:;
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[25]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0xd8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xb0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xc4ull; ST32(ea, 0u); }
    c->x[30] = 0x7005507628ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_70055076ac;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_70055076ac;
    c->x[1] = (uint64_t)(c->x[8] + 0x48ull);
    c->x[2] = (uint64_t)(c->sp + 0xc4ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[30] = 0x700550765cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x428ull);
    c->x[30] = 0x7005507678ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055076ac;
    c->x[8] = (uint32_t)(0x74c0ull);
    { uint64_t ea = c->sp + 0xc4ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    c->x[8] = (uint64_t)(c->x[21] + c->x[8]);
    c->pc = c->x[8]; c->x[30] = 0x7005507698ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055076ac;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    goto L_7005507468;
L_70055076ac:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x8ull);
L_70055076b4:;
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
L_70055076b8:;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 256; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 240; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 224; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 208; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0xccull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0xc8ull; ST8(ea, 0u); }
    c->x[30] = 0x70055076e8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507abc;
    c->x[1] = (uint64_t)(c->x[8] + 0x480ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507728ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507abc;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550775cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507abc;
    c->x[1] = (uint64_t)(c->x[8] + 0x218ull);
    c->x[2] = (uint64_t)(c->sp + 0xf8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507790ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(ROR64(c->x[1], 16) & 0xffffffffffffull);
    if (c->x[8] == 0) goto L_7005507abc;
    c->x[2] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x7ull);
    c->x[25] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x70055077b4ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    c->x[8] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[24] = (uint64_t)(0x7005510fd5ull);
L_70055077c4:;
    { uint64_t ea = c->x[25] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005507abc;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x7ull));
    if (COND_NE(c)) goto L_70055077c4;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xf0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x228ull);
    c->x[30] = 0x70055077f8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005507868;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507abc;
    c->x[1] = (uint64_t)(c->x[8] + 0x158ull);
    c->x[2] = (uint64_t)(c->sp + 0xe8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507830ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055078fc;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    goto L_7005507874;
L_700550785c:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x10ull);
    goto L_70055076b4;
L_7005507868:;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055078fc;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_7005507874:;
    c->x[1] = (uint64_t)(c->x[8] + 0x1c8ull);
    c->x[2] = (uint64_t)(c->sp + 0xe0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507888ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xd4ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[30] = 0x70055078a4ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005507a2c;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_7005507abc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005507abc;
    c->x[1] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0xd0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[30] = 0x70055078dcull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xd0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0xc000ull);
    (void)(logic32(c, (uint32_t)c->x[8] & 0xeull));
    c->x[8] = (uint32_t)(0x4000ull);
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[9], (uint32_t)c->x[8]); else c->nzcv = 0x40000000ull;
    c->x[25] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005507a30;
L_70055078fc:;
    c->x[26] = (uint32_t)(0u | 0u);
L_7005507900:;
    c->x[25] = (uint32_t)(0u | 0u);
L_7005507904:;
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 0xc0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xbcull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0xb8ull; ST8(ea, 0u); }
    c->x[30] = 0x7005507924ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    c->x[1] = (uint64_t)(c->x[8] + 0x480ull);
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550794cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507974ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    c->x[1] = (uint64_t)(c->x[8] + 0x218ull);
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550799cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[1], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005507c3c;
    c->x[2] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x7ull);
    c->x[30] = 0x70055079c0ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x228ull);
    c->x[30] = 0x70055079dcull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    if (c->x[8] == 0) goto L_7005507af4;
    c->x[1] = (uint64_t)(c->x[8] + 0x158ull);
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507a08ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_7005507af8;
    goto L_7005507c3c;
L_7005507a20:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x40ull);
    goto L_70055076b4;
L_7005507a2c:;
    c->x[25] = (uint32_t)(0x1ull);
L_7005507a30:;
    { uint64_t ea = c->sp + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x16a8ull);
    c->x[2] = (uint64_t)(c->sp + 0xccull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3aull));
    c->x[26] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u));
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[26], 28) & 0xfffffff0ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[30] = 0x7005507a60ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xccull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[9] >> 1) & 1) == 0) goto L_7005507a90;
    c->x[9] = (uint32_t)(0x26a8ull);
    c->x[2] = (uint64_t)(c->sp + 0xc8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005507a88ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507abc;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_7005507a90:;
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[25]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005507900;
    { uint64_t ea = c->sp + 0xccull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 1) & 1) == 0) goto L_7005507900;
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    c->x[25] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005507904;
L_7005507abc:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x20ull);
L_7005507ac4:;
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005507ac8:;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005507ad8ull; f_7005507c54(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507ae4;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005507304;
L_7005507ae4:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, 0ull); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x40ull);
    goto L_7005507300;
L_7005507af4:;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_7005507af8:;
    if (c->x[8] == 0) goto L_7005507bbc;
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x1c8ull);
    c->x[30] = 0x7005507b14ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 216; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xc4ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[30] = 0x7005507b3cull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xc4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[26], 28) & 0xfffffff0ull);
    c->x[10] = (uint32_t)(0x16a8ull);
    c->x[2] = (uint64_t)(c->sp + 0xbcull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[1] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[30] = 0x7005507b74ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xbcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xccull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
    if (((c->x[8] >> 1) & 1) == 0) goto L_7005507bbc;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x26a8ull);
    c->x[2] = (uint64_t)(c->sp + 0xb8ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[30] = 0x7005507ba8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
L_7005507bbc:;
    { uint64_t ea = c->sp + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005507bec;
    c->x[1] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0xc0ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[30] = 0x7005507bd8ull; f_7005507cf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507c3c;
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xd0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005507c3c;
L_7005507bec:;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->sp + 0xb0ull);
L_7005507bf4:;
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + c->x[8]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005507c3c;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x7ull));
    if (COND_NE(c)) goto L_7005507bf4;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x40ull; ST32(ea, (uint32_t)c->x[25]); }
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[9] | 0x4ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    if (((c->x[25] >> 0) & 1) != 0) goto L_7005507ac8;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x4ull);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005507ac8;
L_7005507c3c:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x40ull);
    goto L_7005507ac4;
L_7005507c48:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    goto L_70055076b4;
}

void f_700550a48c(Cpu *c) {
    if (c->x[0] == 0) goto L_700550a540;
    c->x[8] = (uint32_t)(0u | 0u);
    if (c->x[2] == 0) goto L_700550a544;
    if (c->x[1] == 0) goto L_700550a544;
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550a544;
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_700550a540;
    { uint64_t ea = c->x[0] + 0x88ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_700550a540;
    { uint64_t ea = c->x[0] + 0x90ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[3])));
    if (COND_NE(c)) goto L_700550a540;
    { uint64_t ea = c->x[0] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[3])));
    if (COND_NE(c)) goto L_700550a540;
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x98ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0x19ull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(c->x[0] + (c->x[8] << 2));
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[10] + 0x14ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[11] + c->x[8]);
    { uint64_t ea = c->x[10] + 0x34ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[12] * (uint32_t)c->x[13]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[10]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + ((uint32_t)c->x[8] << 1));
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 29) & 0xfffffff8ull);
    c->x[8] = (uint64_t)(c->x[11] + c->x[8]);
    { uint64_t ea = c->x[8] + 0xa0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[11] + c->x[8]);
L_700550a518:;
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + c->x[9]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_700550a540;
    if ((uint32_t)c->x[8] == 0) goto L_700550a54c;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[8] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], 0x40ull));
    if (COND_NE(c)) goto L_700550a518;
    goto L_700550a544;
L_700550a540:;
    c->x[8] = (uint32_t)(0u | 0u);
L_700550a544:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
L_700550a54c:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_700550a544;
}

void f_700550aae0(Cpu *c) {
    if (c->x[0] == 0) goto L_700550abf4;
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[20] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[20] = (uint64_t)((c->x[20] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[20])));
    if (COND_CC(c)) goto L_700550abec;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550abec;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[20])));
    if (COND_CC(c)) goto L_700550abec;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550abec;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550abe8;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550abe8;
    c->x[30] = 0x700550ab4cull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550abe8;
    { uint64_t ea = c->x[19] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550abe8;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550abe8;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_CC(c)) goto L_700550abec;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550abec;
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ab9cull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550abec;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550abe8;
    { uint64_t ea = c->x[19] + 56; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->pc = c->x[8]; c->x[30] = 0x700550abc8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550abec;
    { uint64_t ea = c->x[19] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700550abdcull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550abec;
L_700550abe8:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550abec:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
L_700550abf4:;
    c->pc = 0; return;
}

void f_700550ac54(Cpu *c) {
    if (c->x[2] == 0) goto L_700550aec4;
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[30]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550ac78ull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[22] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    { uint64_t ea = c->sp + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (COND_CC(c)) goto L_700550aed0;
    c->x[8] = (uint64_t)(c->x[20] & 0x7ull);
    if (c->x[8] != 0) goto L_700550aed0;
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550acc0ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xd5a0ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550aed0;
    c->x[23] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[23]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ad0cull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550aed0;
    c->x[8] = (uint64_t)(c->x[23] + c->x[20]);
    c->x[8] = (uint64_t)(c->x[8] + 0x8ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[20] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ad48ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[23] + c->x[8]);
    c->x[9] = (uint64_t)(c->x[9] + 0x68ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[8] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ad80ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550aecc;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[23]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550adc4ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550addcull; f_700550aee4(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550aed0;
    c->x[8] = (uint64_t)(c->x[23] + c->x[20]);
    c->x[8] = (uint64_t)(c->x[8] + 0xa0ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[20] + 0xb8ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ae0cull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550aed0;
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ae40ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xff30ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550aecc;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[23]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550aed0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550aed0;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550ae90ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aed0;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550aecc;
    c->v[0] = 0xffffffffull;
    { uint64_t ea = c->sp + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[10] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0; ST64(ea, c->x[20]); ST64(ea + 8, c->x[8]); }
    { uint64_t ea = c->x[19] + 16; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->x[19] + 0x20ull; ST64(ea, VS64(0)); }
    goto L_700550aed0;
L_700550aec4:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550aecc:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550aed0:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700550b148(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x110ull);
    { uint64_t ea = c->sp + 0xc0ull; ST64(ea, c->x[29]); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 240; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[2] == 0) goto L_700550b18c;
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    if (c->x[3] == 0) goto L_700550b18c;
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[4]);
    (void)(subs32(c, (uint32_t)c->x[4], 0x98ull));
    if (COND_HI(c)) goto L_700550b18c;
    { uint64_t ea = c->x[19] + ((uint64_t)(uint32_t)c->x[21] << 1); uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550b1a8;
L_700550b188:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550b18c:;
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0xc0ull; uint64_t v = LD64(ea); c->x[29] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 240; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x110ull);
    c->pc = 0; return;
L_700550b1a8:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[23] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x700550b1b8ull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x700550b1ccull; f_700550aee4(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[23] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    { uint64_t ea = c->sp + 0xc8ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    { uint64_t ea = c->sp + 176; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0xa8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xa4ull; ST16(ea, 0u); }
    if (COND_CC(c)) goto L_700550b18c;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700550b18c;
    c->x[2] = (uint64_t)(c->sp + 0xc8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b218ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xb118ull);
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3910000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[9] + 0xde8ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_EQ(c)) goto L_700550b244;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550b188;
L_700550b244:;
    c->x[24] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0xd8ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    c->x[9] = (uint64_t)(c->x[9] + 0xc8ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550b18c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550b18c;
    c->x[1] = (uint64_t)(c->x[8] + 0x1a0ull);
    c->x[2] = (uint64_t)(c->sp + 0xb8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b27cull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[8] + 0x74a000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x390ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550b18c;
    c->x[8] = (uint64_t)(c->x[22] + c->x[24]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550b18c;
    c->x[1] = (uint64_t)(c->x[22] + 0xd8ull);
    c->x[2] = (uint64_t)(c->sp + 0xb0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b2bcull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550b18c;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550b18c;
    c->x[8] = (uint64_t)(c->x[24] + c->x[22]);
    c->x[8] = (uint64_t)(c->x[8] + 0x18ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550b18c;
    c->x[1] = (uint64_t)(c->x[22] + 0xf0ull);
    c->x[2] = (uint64_t)(c->sp + 0xa8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b304ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550b18c;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550b18c;
    c->x[8] = (uint64_t)(0ull | 0x7fffff0000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xfeedull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_700550b18c;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550b18c;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[22] + 0x110ull);
    c->x[2] = (uint64_t)(c->sp + 0xa4ull);
    c->x[3] = (uint32_t)(0x2ull);
    c->pc = c->x[8]; c->x[30] = 0x700550b358ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    { uint64_t ea = c->sp + 0xa4ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[8], 0x800ull));
    if (COND_HI(c)) goto L_700550b18c;
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[21])));
    if (COND_LS(c)) goto L_700550b18c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xc298ull);
    c->x[9] = (uint64_t)(0xffffffffffffffffull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x28f0000ull);
    c->x[1] = (uint64_t)(c->sp + 0x88ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[3] = (uint32_t)(0xffffffffull);
    c->x[4] = (uint32_t)(0x1ull);
    c->x[5] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x88ull; ST64(ea, c->x[19]); }
    { uint64_t ea = c->sp + 144; ST32(ea, (uint32_t)c->x[21]); ST32(ea + 4, 0u); }
    { uint64_t ea = c->sp + 0x98ull; ST64(ea, c->x[9]); }
    c->pc = c->x[8]; c->x[30] = 0x700550b3b0ull; rt_dispatch(c); c->pc = 0;
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550b3bcull; f_700550aae0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[22], (uint32_t)((uint32_t)c->x[21])));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_700550b18c;
    if ((uint32_t)c->x[8] == 0) goto L_700550b18c;
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    c->x[25] = (uint32_t)(0x40ull);
L_700550b3e0:;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - (uint32_t)c->x[22]);
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x40ull));
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[25]));
    c->x[1] = (uint64_t)(c->x[9] + (c->x[22] << 1));
    c->x[3] = (uint32_t)(ROR32((uint32_t)c->x[8], 31) & 0xfffffffeull);
    c->x[24] = (uint64_t)(0ull | c->x[8]);
    c->x[30] = 0x700550b408ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b18c;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->sp + 0x8ull);
L_700550b414:;
    { uint64_t ea = c->x[9] + (c->x[8] << 1); uint64_t v = LD16(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + (c->x[8] << 1); uint64_t v = LD16(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_700550b188;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_CC(c)) goto L_700550b414;
    c->x[22] = (uint64_t)(c->x[22] + 0x40ull);
    c->x[19] = (uint64_t)(c->x[19] + 0x80ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[23])));
    if (COND_LS(c)) goto L_700550b3e0;
    goto L_700550b18c;
}

void f_700550c0d0(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550c0f0ull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c194;
    c->x[25] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[20] = (uint32_t)(0u | 0u);
    /* hint */
    c->x[22] = (uint64_t)(0x700551192cull);
    /* hint */
    c->x[23] = (uint64_t)(0x70055116fcull);
    c->x[24] = (uint32_t)(0x14ull);
    c->x[25] = (uint64_t)((c->x[25] & 0xffffffffffff0000ull) | 0xffefull);
    c->x[26] = (uint64_t)(c->sp + 0x0ull);
L_700550c11c:;
    { uint64_t ea = c->x[22] + c->x[21]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[27] = (uint64_t)(c->x[23] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[24]);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[27] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[25])));
    if (COND_HI(c)) goto L_700550c190;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c190;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c154ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c190;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[27] + 0x4ull);
L_700550c160:;
    { uint64_t ea = c->x[26] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_700550c190;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_700550c160;
    (void)(subs64(c, c->x[21], 0x5ull));
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    c->x[20] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[21], 0x7ull));
    if (COND_NE(c)) goto L_700550c11c;
L_700550c190:;
    c->x[0] = (uint32_t)((uint32_t)c->x[20] & 0x1ull);
L_700550c194:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700550c34c(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[23] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (COND_CS(c)) goto L_700550c44c;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c44c;
    { uint64_t ea = c->x[21] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c448;
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c3b0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c44c;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + (uint64_t)(uint32_t)c->x[22]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550c448;
    c->x[8] = (uint64_t)(0xffffffffffff0018ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550c448;
    { uint64_t ea = c->x[21] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c448;
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c3f4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c44c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c448;
    c->x[8] = (uint64_t)(0xffffffffffff0020ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CS(c)) goto L_700550c448;
    { uint64_t ea = c->x[21] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c448;
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[20] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c434ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c44c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550c44c;
L_700550c448:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c44c:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
}

void f_700550c698(Cpu *c) {
    c->x[9] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(c->x[1] + 0xb0ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550c720;
    c->x[9] = (uint64_t)(c->x[9] + 0xc8ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550c724;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_700550c724;
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c720;
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x18ull);
    c->x[20] = (uint64_t)(c->sp + 0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c6f0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c72c;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550c6f8:;
    { uint64_t ea = c->x[20] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550c718;
    if ((uint32_t)c->x[9] == 0) goto L_700550c728;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x18ull));
    if (COND_NE(c)) goto L_700550c6f8;
L_700550c718:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_700550c72c;
L_700550c720:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c724:;
    c->pc = 0; return;
L_700550c728:;
    c->x[0] = (uint32_t)(0x1ull);
L_700550c72c:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_700550cd14(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[2], (uint32_t)((uint32_t)c->x[3])));
    if (COND_CS(c)) goto L_700550ce00;
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(c->x[1] + (uint64_t)(uint32_t)c->x[2]);
    c->x[21] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[25] = (uint32_t)(0xa000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)((c->x[21] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[24] = (uint64_t)(c->x[20] & 0x7ull);
    c->x[25] = (uint32_t)((c->x[25] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    c->x[26] = (uint32_t)(0x3a00000ull);
L_700550cd5c:;
    c->x[8] = (uint64_t)(c->x[20] - 0x10000ull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (COND_CS(c)) goto L_700550ce08;
    if (c->x[24] != 0) goto L_700550ce08;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ce08;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550cd90ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ce08;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_700550ce08;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550ce08;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ce08;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550cdc4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550ce08;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[9] + c->x[25]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_700550ce08;
    c->x[9] = (uint64_t)(c->x[9] + c->x[26]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700550ce08;
    c->x[22] = (uint64_t)(c->x[22] + 0x8ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x8ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550cd5c;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550ce0c;
L_700550ce00:;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_700550ce08:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550ce0c:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700550ce28(Cpu *c) {
    if (c->x[0] == 0) goto L_700550ce44;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_700550ce44;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[0] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[0] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
L_700550ce44:;
    c->pc = 0; return;
}

void f_700550d630(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(c->x[1] + 0xb0ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x18ull);
    c->x[20] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x700550d654ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d688;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550d65c:;
    { uint64_t ea = c->x[20] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550d67c;
    if ((uint32_t)c->x[9] == 0) goto L_700550d684;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x18ull));
    if (COND_NE(c)) goto L_700550d65c;
L_700550d67c:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_700550d688;
L_700550d684:;
    c->x[0] = (uint32_t)(0x1ull);
L_700550d688:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_700550d698(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x150ull);
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[29]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[22] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[24] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[25] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[23] = (uint64_t)(c->sp + 0x0ull);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[25] = (uint64_t)((c->x[25] & 0xffffffffffff0000ull) | 0x0ull);
L_700550d6d8:;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] - 0x10000ull);
    c->x[10] = (uint64_t)(c->x[8] & 0x7ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_LS(c)) (void)subs64(c, c->x[10], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) (void)subs64(c, c->x[21], 0x1full); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_700550d74c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_EQ(c)) goto L_700550d76c;
    if (c->x[21] == 0) goto L_700550d71c;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_700550d704:;
    { uint64_t ea = c->x[23] + (c->x[9] << 3); uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_700550d74c;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550d704;
L_700550d71c:;
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    { uint64_t ea = c->x[23] + (c->x[21] << 3); ST64(ea, c->x[8]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[25])));
    if (COND_CC(c)) goto L_700550d74c;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    c->x[30] = 0x700550d744ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550d6d8;
    goto L_700550d750;
L_700550d74c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550d750:;
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[29] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x150ull);
    c->pc = 0; return;
L_700550d76c:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550d750;
}

void f_700550d8dc(Cpu *c) {
    if (c->x[0] == 0) goto L_700550d928;
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_700550d92c;
    { uint64_t ea = c->x[0] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550d92c;
    c->x[10] = (uint64_t)(c->x[1] + (uint64_t)(uint32_t)c->x[3]);
    c->x[8] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550d92c;
    c->x[10] = (uint64_t)(ROR64(c->x[10], 39) & 0x1ffffffull);
    if (c->x[10] != 0) goto L_700550d92c;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[9]; c->x[30] = 0x700550d918ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    goto L_700550d92c;
L_700550d928:;
    c->x[8] = (uint32_t)(0u | 0u);
L_700550d92c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_700550d934(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 24; ST64(ea, 0ull); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->sp + 8; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, 0ull); }
    if (c->x[0] == 0) goto L_700550db80;
    { uint64_t ea = c->x[0] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if (c->x[8] == 0) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550db80;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x700550d974ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[21] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[21] = (uint64_t)((c->x[21] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_CC(c)) goto L_700550db80;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550db80;
    c->x[8] = (uint64_t)(0ull | 0x7fffff0000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xfff7ull);
    (void)(subs64(c, c->x[1], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550d9ccull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550db80;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550db80;
    { uint64_t ea = c->x[19] + 56; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->pc = c->x[8]; c->x[30] = 0x700550d9f8ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[20] == 0) goto L_700550db84;
    if ((uint32_t)c->x[8] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x7e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550db80;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550db80;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550db80;
    c->x[22] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[22]);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CC(c)) goto L_700550db84;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550db84;
    c->x[1] = (uint64_t)(c->x[8] + 0x28ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550da68ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550db80;
    c->x[9] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[9] + 0x68ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CC(c)) goto L_700550db84;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550db84;
    c->x[1] = (uint64_t)(c->x[8] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550daacull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550db80;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[22]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CC(c)) goto L_700550db84;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550db84;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550daf0ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005510fc0ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db08ull; f_700550d630(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xcfull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db20ull; f_700550d630(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xffull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db38ull; f_700550d630(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db4cull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db60ull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550db84;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550db74ull; f_700550d698(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550db84;
L_700550db80:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550db84:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
}

void f_700550e020(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x1a0ull);
    { uint64_t ea = c->sp + 288; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 304; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 336; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 352; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 368; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 384; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 400; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550e050ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550e05cull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0xbull);
    c->x[30] = 0x700550e06cull; f_700550d560(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    { uint64_t ea = c->x[19] + 0x7e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x809ull; ST8(ea, 0u); }
    if ((uint32_t)c->x[8] == 0) goto L_700550e4fc;
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[24] = (uint64_t)(c->x[19] + 0x38ull);
    c->x[25] = (uint32_t)(0x38ull);
    c->x[27] = (uint64_t)(c->sp + 0x18ull);
L_700550e090:;
    c->x[8] = (uint64_t)(c->x[24] + c->x[23] * c->x[25]);
    c->x[28] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0x30ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550e0b8;
    c->x[21] = (uint64_t)(0ull | c->x[28]);
L_700550e0a4:;
    { uint64_t ea = c->x[19] + 0x7e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_700550e090;
    goto L_700550e1a4;
L_700550e0b8:;
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[26] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[29] = (uint32_t)(0u | 0u);
    c->x[21] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x118ull; ST64(ea, c->x[8]); }
L_700550e0d0:;
    { uint64_t ea = c->sp + 0x118ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_LS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) (void)subs64(c, c->x[22], 0x1full); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_700550e4fc;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xc4ull);
    c->x[30] = 0x700550e104ull; f_700550d630(c);
    { uint64_t ea = c->sp + 0x118ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[29] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[29] : (uint32_t)((uint32_t)c->x[29] + 1));
    c->x[21] = (uint64_t)((COND_NE(c)) ? c->x[8] : (uint64_t)(c->x[21]));
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[26])));
    if (COND_EQ(c)) goto L_700550e184;
    if (c->x[22] == 0) goto L_700550e13c;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_700550e124:;
    { uint64_t ea = c->x[27] + (c->x[9] << 3); uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_700550e4fc;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550e124;
L_700550e13c:;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[10] = (uint64_t)(0ull | 0xffffff800001ffffull);
    { uint64_t ea = c->x[27] + (c->x[22] << 3); ST64(ea, c->x[8]); }
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_700550e4fc;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550e4fc;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x1ull);
    c->x[30] = 0x700550e17cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550e0d0;
    goto L_700550e4fc;
L_700550e184:;
    (void)(subs32(c, (uint32_t)c->x[29], 0x1ull));
    if (COND_NE(c)) goto L_700550e4fc;
    if (c->x[21] == 0) goto L_700550e4fc;
    if (c->x[28] == 0) goto L_700550e0a4;
    (void)(subs64(c, c->x[28], (uint64_t)(c->x[21])));
    c->x[21] = (uint64_t)(0ull | c->x[28]);
    if (COND_EQ(c)) goto L_700550e0a4;
    goto L_700550e4fc;
L_700550e1a4:;
    if (c->x[21] == 0) goto L_700550e4fc;
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xf3ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550e1bcull; f_700550d774(c);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x10aull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550e1d4ull; f_700550d774(c);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550e1e8ull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550e1fcull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint64_t)(c->sp + 0x14ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    c->x[30] = 0x700550e218ull; f_700550e528(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550e230ull; f_700550e528(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    { uint64_t ea = c->sp + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[9] = a; c->v[8] = b; }
    c->nzcv = cmp_s(c, VSF32(8), VSF32(9));
    if (COND_LS(c)) goto L_700550e4fc;
    { uint64_t ea = c->x[19] + 0x7e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550e4fc;
    c->v[10] = 0x3e800000ull;
    c->x[8] = (uint64_t)(c->sp + 0x18ull);
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint32_t)(0u | 0u);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[26] = (uint64_t)(c->x[19] + 0x38ull);
    c->x[28] = (uint64_t)(c->x[19] + 0x810ull);
    c->x[29] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[27] = (uint32_t)(0x38ull);
    c->x[21] = (uint64_t)(0x7005511000ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x1e7ull);
L_700550e274:;
    c->x[22] = (uint64_t)(c->x[26] + c->x[24] * c->x[27]);
    { uint64_t ea = c->x[22] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550e294;
L_700550e280:;
    { uint64_t ea = c->x[19] + 0x7e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_700550e274;
    goto L_700550e3d0;
L_700550e294:;
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint64_t)(c->sp + 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, 0u); }
    c->x[30] = 0x700550e2acull; f_700550e528(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e4fc;
    { uint64_t ea = c->x[22] + 0x28ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550e2c4ull; f_700550d630(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e4fc;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550e2d8ull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e4fc;
    (void)(subs32(c, (uint32_t)c->x[23], 0x7ull));
    if (COND_EQ(c)) goto L_700550e4fc;
    if ((uint32_t)c->x[23] == 0) goto L_700550e30c;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[23]);
    c->x[10] = (uint64_t)(0ull | c->x[28]);
    c->x[9] = (uint64_t)(0ull | c->x[8]);
L_700550e2f4:;
    { uint64_t ea = c->x[10]; uint64_t v = LD64(ea); c->x[10] = c->x[10] + 8; c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[22])));
    if (COND_EQ(c)) goto L_700550e4fc;
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x1ull));
    if (COND_NE(c)) goto L_700550e2f4;
    goto L_700550e310;
L_700550e30c:;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550e310:;
    { uint64_t ea = c->sp + 0xcull; c->v[11] = LD32(ea); }
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    { uint64_t ea = c->x[28] + (c->x[8] << 3); ST64(ea, c->x[22]); }
    c->nzcv = cmp_s(c, VSF32(11), VSF32(8));
    if (COND_GE(c)) goto L_700550e280;
    c->nzcv = cmp_s(c, VSF32(11), VSF32(9));
    if (COND_LS(c)) goto L_700550e280;
    c->x[1] = (uint64_t)(c->x[22] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x8ull; ST8(ea, 0u); }
    c->x[30] = 0x700550e344ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e4fc;
    if ((uint32_t)c->x[25] == 0) goto L_700550e3ac;
    c->x[10] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[25]);
    c->x[9] = (uint32_t)(0xffffffffull);
    c->x[11] = (uint64_t)(0ull | c->x[29]);
L_700550e35c:;
    { uint64_t ea = c->x[11]; c->v[0] = LD32(ea); c->x[11] = c->x[11] + 16; }
    FP_SETS(0, op_s(c, FOP_ABD, VSF32(11), VSF32(0), 0));
    c->nzcv = cmp_s(c, VSF32(0), VSF32(10));
    c->x[9] = (uint32_t)((COND_MI(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550e35c;
    (void)(adds32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_EQ(c)) goto L_700550e3a4;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) == 0) goto L_700550e280;
    c->x[8] = (uint64_t)(c->sp + 0x18ull);
    c->x[8] = (uint64_t)(c->x[8] + ((uint64_t)(uint32_t)c->x[9] << 4));
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_700550e280;
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[22]); }
    c->x[9] = (uint32_t)(0x1ull);
    goto L_700550e3c4;
L_700550e3a4:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x7ull));
    if (COND_EQ(c)) goto L_700550e4fc;
L_700550e3ac:;
    c->x[8] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + ((uint64_t)(uint32_t)c->x[25] << 4));
    c->x[25] = (uint32_t)((uint32_t)c->x[25] + 0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x1ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[22]); }
L_700550e3c4:;
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, VS32(11)); }
    { uint64_t ea = c->x[8] + 0xcull; ST32(ea, (uint32_t)c->x[9]); }
    goto L_700550e280;
L_700550e3d0:;
    (void)(subs32(c, (uint32_t)c->x[25], 0x5ull));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_700550e500;
    c->x[9] = (uint32_t)((uint32_t)c->x[23] - 0x8ull);
    (void)(adds32(c, (uint32_t)c->x[9], 0x3ull));
    if (COND_CC(c)) goto L_700550e500;
    c->x[9] = (uint64_t)(c->sp + 0x18ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(c->x[9] + 0x10ull);
L_700550e3f4:;
    c->x[12] = (uint64_t)(c->x[9] + (c->x[11] << 4));
    c->x[15] = (uint64_t)(0ull | c->x[10]);
    c->x[14] = (uint64_t)(0ull | c->x[11]);
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x8ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[12] + 0xcull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
L_700550e40c:;
    { uint64_t ea = c->x[15] - 8; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_PL(c)) goto L_700550e430;
    c->x[16] = (uint64_t)(c->x[15] - 0x10ull);
    c->x[14] = (uint64_t)(c->x[14] - 0x1ull);
    { uint64_t ea = c->x[16] + 0x0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[15] + 0x0ull; ST128(ea, c->v[1]); }
    c->x[15] = (uint64_t)(0ull | c->x[16]);
    if (c->x[14] != 0) goto L_700550e40c;
L_700550e430:;
    c->x[14] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[14] << 4));
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    (void)(subs64(c, c->x[11], 0x5ull));
    { uint64_t ea = c->x[14] + 0x0ull; ST64(ea, c->x[13]); }
    { uint64_t ea = c->x[14] + 0x8ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[14] + 0xcull; ST32(ea, (uint32_t)c->x[12]); }
    if (COND_NE(c)) goto L_700550e3f4;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(c->x[19] + 0x7f0ull);
    c->x[11] = (uint64_t)(c->x[19] + 0x68ull);
    c->x[12] = (uint64_t)(c->sp + 0x18ull);
L_700550e460:;
    c->x[13] = (uint64_t)(c->x[12] + (c->x[9] << 4));
    c->x[14] = (uint64_t)(c->x[9] + (c->x[9] << 2));
    c->x[15] = (uint64_t)(0ull | 0ull);
L_700550e46c:;
    if ((uint32_t)c->x[8] == 0) goto L_700550e4fc;
    { uint64_t ea = c->x[13] + 0x0ull; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0ull | 0ull);
    c->x[16] = (uint32_t)(0xffffffffull);
    c->x[0] = (uint64_t)(0ull | c->x[11]);
L_700550e480:;
    { uint64_t ea = c->x[0] - 8; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[1], (uint64_t)(c->x[18])));
    if (COND_NE(c)) goto L_700550e4a4;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[15], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_700550e4a4;
    (void)(adds32(c, (uint32_t)c->x[16], 0x1ull));
    if (COND_NE(c)) goto L_700550e4fc;
    c->x[16] = (uint32_t)(0u | (uint32_t)c->x[17]);
L_700550e4a4:;
    c->x[17] = (uint64_t)(c->x[17] + 0x1ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x38ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[17])));
    if (COND_NE(c)) goto L_700550e480;
    (void)(adds32(c, (uint32_t)c->x[16], 0x1ull));
    if (COND_EQ(c)) goto L_700550e4fc;
    c->x[17] = (uint64_t)(c->x[15] + c->x[14]);
    c->x[15] = (uint64_t)(c->x[15] + 0x1ull);
    (void)(subs64(c, c->x[15], 0x5ull));
    { uint64_t ea = c->x[10] + c->x[17]; ST8(ea, (uint32_t)c->x[16]); }
    if (COND_NE(c)) goto L_700550e46c;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x5ull));
    if (COND_NE(c)) goto L_700550e460;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550e4e8ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550e500;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x84full; ST8(ea, (uint32_t)c->x[23]); }
    { uint64_t ea = c->x[19] + 0x809ull; ST8(ea, (uint32_t)c->x[0]); }
    goto L_700550e500;
L_700550e4fc:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550e500:;
    { uint64_t ea = c->sp + 400; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 384; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 368; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 352; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 336; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 288; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    c->sp = (uint64_t)(c->sp + 0x1a0ull);
    c->pc = 0; return;
}

void f_700550f1e4(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[1], 0x18ull));
    if (COND_LS(c)) goto L_700550f1f4;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550f1f4:;
    { uint64_t ea = c->sp - 80; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x210ull);
    { uint64_t ea = c->x[0] + 0x859ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_700550f32c;
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x14ull);
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[30] = 0x700550f230ull; f_700550fbd8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x15ull);
    c->x[30] = 0x700550f240ull; f_700550fbd8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    c->x[8] = (uint64_t)(c->x[19] + (uint64_t)(uint32_t)c->x[21]);
    c->x[9] = (uint32_t)(0x38ull);
    c->v[0] = 0x0ull;
    c->x[24] = (uint64_t)(c->sp + 0xf0ull);
    c->x[2] = (uint64_t)(c->sp + 0x1e0ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[8] + 0x840ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x110ull; ST64(ea, 0ull); }
    c->x[21] = (uint64_t)(c->x[19] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    { uint64_t ea = c->x[24] + 240; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 136; uint64_t v = LD64(ea); c->x[21] = ea; c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x700550f274ull; f_700550ac54(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[24] + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550f32c;
    { uint64_t ea = c->x[24] + 0xf8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550f32c;
    (void)(subs64(c, c->x[20], 0x0ull));
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[22] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[30] = 0x700550f2b8ull; f_700550b96c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x3ba0ull);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x20f0000ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550f2d8ull; rt_dispatch(c); c->pc = 0;
    /* hint */
    c->x[1] = (uint64_t)(0x7005512018ull);
    c->x[0] = (uint64_t)(c->sp + 0x120ull);
    c->x[2] = (uint32_t)(0xc0ull);
    c->x[30] = 0x700550f2ecull; f_700550ff34(c);
    c->v[0] = 0x0ull;
    c->v[1] = 0x0ull;
    { uint64_t ea = c->x[24] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[24] + 0x8ull; ST32(ea, 0u); }
    if (c->x[20] == 0) goto L_700550f364;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->v[1] = 0x3f800000ull;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700550f364;
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_EQ(c)) goto L_700550f34c;
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_NE(c)) goto L_700550f354;
    c->v[1] = 0x40400000ull;
    goto L_700550f364;
L_700550f32c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550f330:;
    c->sp = (uint64_t)(c->sp + 0x210ull);
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 80; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700550f34c:;
    c->v[1] = 0x40000000ull;
    goto L_700550f364;
L_700550f354:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    c->x[8] = (uint32_t)(0x4ull);
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u + 1));
    FP_SETS(1, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
L_700550f364:;
    (void)(subs64(c, c->x[20], 0x0ull));
    c->x[9] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[24] + 0xcull; ST32(ea, VS32(1)); }
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[23], 0x0ull); else c->nzcv = 0x40000000ull;
    { uint64_t ea = c->x[9] + 0x160ull; c->v[4] = LD128(ea); }
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    VW(vu16, 0, 2, (vu16){} + (uint16_t)c->x[8]);
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x100ull; c->v[3] = LD128(ea); }
    c->x[8] = (uint64_t)(0x700550f000ull);
    sl_gen(c, LOP_SHLLI | LOP_U, 1, 4, 2, 2, 0, 0, 2, 1, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu32, 1, 2, VREG(vu32, 2) << 31);
    VW(vu32, 1, 2, (vu32)(VREG(vs32, 2) < 0));
    VW(vu64, 1, 2, (VREG(vu64, 2) & VREG(vu64, 4)) | (~VREG(vu64, 2) & VREG(vu64, 3)));
    { uint64_t ea = c->x[8] + 0xfe0ull; c->v[3] = LD64(ea); }
    c->x[8] = (uint32_t)(0x428c0000ull);
    { uint64_t ea = c->x[24] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[24] + 0x10ull; ST64(ea, VS64(3)); }
    { uint64_t ea = c->x[24] + 28; ST128(ea, c->v[2]); }
    if (c->x[20] == 0) goto L_700550f3c8;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550f3c8;
    { uint64_t ea = c->x[19] + 0x944ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    FP_SETS(0, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
L_700550f3c8:;
    c->x[25] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[24] + 0x2cull; ST32(ea, VS32(0)); }
    c->x[23] = (uint64_t)(c->sp + 0x120ull);
    c->x[26] = (uint64_t)(c->sp + 0xf0ull);
    /* hint */
    c->x[24] = (uint64_t)(0x7005511061ull);
L_700550f3e0:;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + c->x[25]; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[24]);
    c->x[3] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x700550f3f8ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    c->x[25] = (uint64_t)(c->x[25] + 0x4ull);
    c->x[23] = (uint64_t)(c->x[23] + 0x10ull);
    (void)(subs64(c, c->x[25], 0x30ull));
    if (COND_NE(c)) goto L_700550f3e0;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x166ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[30] = 0x700550f42cull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1aaull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[30] = 0x700550f450ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    /* hint */
    c->x[1] = (uint64_t)(0x70055120d8ull);
    c->x[0] = (uint64_t)(c->sp + 0x18ull);
    c->x[2] = (uint32_t)(0xd8ull);
    c->x[23] = (uint64_t)(c->sp + 0x18ull);
    c->x[30] = 0x700550f46cull; f_700550ff34(c);
    c->x[24] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[22] = (uint64_t)(0x7005511061ull);
L_700550f478:;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[23] + c->x[24]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550f48cull; f_700550fcf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    c->x[24] = (uint64_t)(c->x[24] + 0x18ull);
    (void)(subs64(c, c->x[24], 0xd8ull));
    if (COND_NE(c)) goto L_700550f478;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_700550f4c8;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700550f4c8;
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffeull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    if (COND_NE(c)) goto L_700550f5d8;
    c->x[4] = (uint32_t)(0x1ull);
    goto L_700550f4cc;
L_700550f4c8:;
    c->x[4] = (uint32_t)(0u | 0u);
L_700550f4cc:;
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x137ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f4e4ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    if (c->x[20] == 0) goto L_700550f5b4;
    { uint64_t ea = c->x[20] + 0x24ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x2ull);
    c->x[30] = 0x700550f4f8ull; f_700550fe20(c);
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550f50cull; f_700550b000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x7005511000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x80ull);
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint64_t)(0x7005511000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x18full);
    c->x[3] = (uint64_t)((COND_EQ(c)) ? c->x[8] : (uint64_t)(c->x[9]));
    c->x[4] = (uint64_t)(c->sp + 0x2ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f544ull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x80ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x700550f570ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1b5ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f590ull; f_700550fcf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f330;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x2cull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x159ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    goto L_700550f5d0;
L_700550f5b4:;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x159ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0u | 0u);
L_700550f5d0:;
    c->x[30] = 0x700550f5d4ull; f_700550fd48(c);
    goto L_700550f330;
L_700550f5d8:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    c->x[4] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550f4cc;
}

void f_7005601000(Cpu *c) {
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
    c->x[0] = (uint64_t)(0ull | c->x[10]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[11]);
    c->x[3] = (uint32_t)(VS32(0));
    c->x[30] = 0x7005601054ull; f_7005607400(c);
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
    { uint64_t ea = c->x[10] + 0x158ull; ST32(ea, (uint32_t)c->x[11]); }
    c->pc = 0x7001b2e458ull; return;
}

void f_7005602800(Cpu *c) {
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
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005602850ull; f_7005608800(c);
    if ((uint32_t)c->x[0] != 0) goto L_70056028a0;
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
    { uint64_t ea = c->x[20] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x7000306590ull; return;
L_70056028a0:;
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
    c->pc = 0x7000306594ull; return;
}

void f_7005605200(Cpu *c) {
    if (c->x[0] == 0) goto L_700560524c;
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700560524c;
    { uint64_t ea = c->x[0] + 0x1acull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xe165ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x9a880000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700560524c;
    { uint64_t ea = c->x[0] + 0x1b0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x37d1ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xbd8f0000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700560524c;
    { uint64_t ea = c->x[0] + 0x1b4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x29b8ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xc5fd0000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = 0; return;
L_700560524c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005605e00(Cpu *c) {
    c->x[9] = (uint64_t)(c->x[0] + 0x48ull);
L_7005605e04:;
    c->x[8] = (uint64_t)(ldx32(c, c->x[9]));
    if ((uint32_t)c->x[8] != 0) goto L_7005605e04;
    c->x[8] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[9], c->x[8]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005605e04;
    c->pc = 0; return;
}

void f_7005606400(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x47ull));
    if (COND_CS(c)) goto L_7005606464;
    c->x[9] = (uint64_t)(c->x[1] + 0x100ull);
    c->x[9] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[8] << 4));
    { uint64_t ea = c->x[0] + 0x158ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x1ull));
    if (COND_LT(c)) goto L_7005606468;
    { uint64_t ea = c->x[0] + 0x15cull; c->v[0] = LD32(ea); }
    c->x[11] = (uint32_t)(0x34000000ull);
    c->v[1] = (uint32_t)c->x[11];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_7005606468;
    c->x[11] = (uint32_t)(VS32(0));
    c->x[12] = (uint32_t)((uint32_t)c->x[11] & 0x7f800000ull);
    c->x[13] = (uint32_t)(0x7f800000ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_EQ(c)) goto L_7005606468;
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[12] = (uint64_t)(c->x[0] + 0x15cull);
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 4; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[0] + 0x164ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xcull; ST32(ea, (uint32_t)c->x[10]); }
L_7005606464:;
    c->pc = 0; return;
L_7005606468:;
    { uint64_t ea = c->x[9] + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->pc = 0; return;
}

void f_7005606c00(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005606c24ull; f_7005605200(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005606d90;
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0x700560e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x66b0ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005606d90;
    { uint64_t ea = c->x[8] + 0xcc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005606d90;
    { uint64_t ea = c->x[8] + 0x78ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 1) & 1) != 0) goto L_7005606d90;
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005606c68ull; f_7005605a00(c);
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    c->x[24] = (uint64_t)(0ull | c->x[1]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606c78ull; f_7005605e00(c);
    if (c->x[23] == 0) goto L_7005606d70;
    c->x[27] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005606ca4;
    if ((uint32_t)c->x[9] != 0) goto L_7005606ca4;
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005606d08;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606ca0ull; f_7005606800(c);
    goto L_7005606d08;
L_7005606ca4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606cacull; f_7005606800(c);
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    c->x[21] = (uint32_t)(0x1ull);
    c->x[22] = (uint64_t)(c->x[20] + 0x110ull);
L_7005606cb8:;
    { uint64_t ea = c->x[23] + ((uint64_t)(uint32_t)c->x[21] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_LT(c)) goto L_7005606cf8;
    { uint64_t ea = c->x[24] + ((uint64_t)(uint32_t)c->x[21] << 2); c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_7005606cf8;
    c->x[9] = (uint32_t)(VS32(0));
    c->x[10] = (uint32_t)((uint32_t)c->x[9] & 0x7f800000ull);
    c->x[11] = (uint32_t)(0x7f800000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_7005606cf8;
    { uint64_t ea = c->x[22] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0x4ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint32_t)(0xbf800000ull);
    { uint64_t ea = c->x[22] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
L_7005606cf8:;
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x48ull));
    if (COND_CC(c)) goto L_7005606cb8;
L_7005606d08:;
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, c->x[19]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0xcull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x30ull; ST32(ea, 0u); }
    (void)(subs32(c, (uint32_t)c->x[27], 0x1ull));
    if (COND_EQ(c)) goto L_7005606d30;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606d30ull; f_7005606400(c);
L_7005606d30:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606d3cull; f_7005606000(c);
    { uint64_t ea = c->x[20] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x24ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x158ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x15cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 108; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x74ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x78ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606d6cull; f_7005605f00(c);
    goto L_7005606d90;
L_7005606d70:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606d78ull; f_7005606800(c);
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x28ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005606d90ull; f_7005605f00(c);
L_7005606d90:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700560a000(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560a148;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560a038ull; f_7005605e00(c);
    { uint64_t ea = c->x[20] + 0x4cull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x47ull));
    if (COND_CS(c)) goto L_700560a0b4;
    c->x[22] = (uint64_t)(c->x[20] + ((uint64_t)(uint32_t)c->x[21] << 4));
    c->x[22] = (uint64_t)(c->x[22] + 0x100ull);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560a0b4;
    { uint64_t ea = c->x[22] + 0x4ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_700560a0b4;
    c->x[8] = (uint64_t)(0x700560e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xa848ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700560a0fc;
    { uint64_t ea = c->x[8] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x50ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    { uint64_t ea = c->x[20] + 0x50ull; ST32(ea, VS32(0)); }
    c->x[8] = (uint32_t)(0x42b40000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LT(c)) goto L_700560a0fc;
    { uint64_t ea = c->x[20] + 0x50ull; ST32(ea, 0u); }
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x48ull));
    c->x[21] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[21] : (uint32_t)(0u + 1));
    goto L_700560a0bc;
L_700560a0b4:;
    c->x[21] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x50ull; ST32(ea, 0u); }
L_700560a0bc:;
    c->x[23] = (uint32_t)(0x47ull);
L_700560a0c0:;
    c->x[22] = (uint64_t)(c->x[20] + ((uint64_t)(uint32_t)c->x[21] << 4));
    c->x[22] = (uint64_t)(c->x[22] + 0x100ull);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560a0dc;
    { uint64_t ea = c->x[22] + 0x4ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_HI(c)) goto L_700560a0fc;
L_700560a0dc:;
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x48ull));
    c->x[21] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[21] : (uint32_t)(0u + 1));
    c->x[23] = (uint32_t)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    if (COND_NE(c)) goto L_700560a0c0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560a0f8ull; f_7005605f00(c);
    goto L_700560a148;
L_700560a0fc:;
    { uint64_t ea = c->x[20] + 0x4cull; ST32(ea, (uint32_t)c->x[21]); }
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[21]);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD32(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x4ull; uint64_t v = LD32(ea); c->x[26] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x54ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560a120ull; f_7005605f00(c);
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[25]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[26]);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700560a148:;
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700560b800(Cpu *c) {
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
    c->x[2] = (uint32_t)(VS32(0));
    c->x[30] = 0x700560b84cull; f_700560bc00(c);
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
    c->x[10] = (uint32_t)(0xff00000ull);
    c->pc = 0x700031d8b8ull; return;
}

void f_7005701600(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x320ull);
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
    { uint64_t ea = c->sp + 0x100ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpcr);
    { uint64_t ea = c->sp + 0x108ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->fpsr);
    { uint64_t ea = c->sp + 0x110ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 320; ST128(ea, c->v[2]); ST128(ea + 16, c->v[3]); }
    { uint64_t ea = c->sp + 352; ST128(ea, c->v[4]); ST128(ea + 16, c->v[5]); }
    { uint64_t ea = c->sp + 384; ST128(ea, c->v[6]); ST128(ea + 16, c->v[7]); }
    { uint64_t ea = c->sp + 416; ST128(ea, c->v[8]); ST128(ea + 16, c->v[9]); }
    { uint64_t ea = c->sp + 448; ST128(ea, c->v[10]); ST128(ea + 16, c->v[11]); }
    { uint64_t ea = c->sp + 480; ST128(ea, c->v[12]); ST128(ea + 16, c->v[13]); }
    { uint64_t ea = c->sp + 512; ST128(ea, c->v[14]); ST128(ea + 16, c->v[15]); }
    { uint64_t ea = c->sp + 544; ST128(ea, c->v[16]); ST128(ea + 16, c->v[17]); }
    { uint64_t ea = c->sp + 576; ST128(ea, c->v[18]); ST128(ea + 16, c->v[19]); }
    { uint64_t ea = c->sp + 608; ST128(ea, c->v[20]); ST128(ea + 16, c->v[21]); }
    { uint64_t ea = c->sp + 640; ST128(ea, c->v[22]); ST128(ea + 16, c->v[23]); }
    { uint64_t ea = c->sp + 672; ST128(ea, c->v[24]); ST128(ea + 16, c->v[25]); }
    { uint64_t ea = c->sp + 704; ST128(ea, c->v[26]); ST128(ea + 16, c->v[27]); }
    { uint64_t ea = c->sp + 736; ST128(ea, c->v[28]); ST128(ea + 16, c->v[29]); }
    { uint64_t ea = c->sp + 768; ST128(ea, c->v[30]); ST128(ea + 16, c->v[31]); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0x7005707000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x100ull);
    c->x[30] = 0x70057016b0ull; f_7005703000(c);
    { uint64_t ea = c->sp + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->sp + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->sp + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[16] = a; c->v[17] = b; }
    { uint64_t ea = c->sp + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[19] = b; }
    { uint64_t ea = c->sp + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[20] = a; c->v[21] = b; }
    { uint64_t ea = c->sp + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[22] = a; c->v[23] = b; }
    { uint64_t ea = c->sp + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[24] = a; c->v[25] = b; }
    { uint64_t ea = c->sp + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[26] = a; c->v[27] = b; }
    { uint64_t ea = c->sp + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[28] = a; c->v[29] = b; }
    { uint64_t ea = c->sp + 768; u128 a = LD128(ea), b = LD128(ea + 16); c->v[30] = a; c->v[31] = b; }
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpcr = c->x[8] & 0x7c00000ull; rt_fpcr_sync(c);
    { uint64_t ea = c->sp + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->fpsr = c->x[8] & 0xf800009full;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
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
    c->sp = (uint64_t)(c->sp + 0x320ull);
    { uint64_t ea = c->x[19] + 0x210ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = 0x700213dc18ull; return;
}

void f_7005801800(Cpu *c) {
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
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
    c->x[9] = (uint64_t)(0x700580e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf678ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3a60000ull);
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005801914;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005801914;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005801914;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005801914;
    c->x[13] = (uint32_t)(0x30ull);
    c->x[11] = (uint64_t)(c->x[11] + (uint64_t)(uint32_t)c->x[3] * (uint64_t)(uint32_t)c->x[13]);
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    c->x[0] = (uint32_t)((uint32_t)c->x[13] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_HI(c)) goto L_7005801914;
    c->x[0] = (uint32_t)((uint32_t)c->x[0] + 0x1ull);
    { uint64_t ea = c->sp + 0x318ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x0ull);
    c->x[30] = 0x7005801900ull; f_7005803800(c);
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[30] = 0x7005801914ull; f_7005803000(c);
L_7005801914:;
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
    c->pc = 0x700073644cull; return;
}

void f_7005803800(Cpu *c) {
    c->x[8] = (uint64_t)(0x700580e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x30ull);
L_7005803810:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[9]));
    if ((uint32_t)c->x[10] != 0) goto L_7005803810;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[9], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005803810;
    c->x[10] = (uint64_t)(ROR64(c->x[1], 4) & 0xfffffffffffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7ffull);
    c->x[8] = (uint64_t)(c->x[8] + 0x100ull);
    c->x[11] = (uint32_t)(0x800ull);
L_7005803834:;
    c->x[12] = (uint64_t)(c->x[8] + (c->x[10] << 4));
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs64(c, c->x[13], (uint64_t)(c->x[1])));
    if (COND_EQ(c)) goto L_700580386c;
    if (c->x[13] == 0) goto L_7005803860;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7ffull);
    c->x[11] = (uint32_t)(subs32(c, (uint32_t)c->x[11], 0x1ull));
    if (COND_NE(c)) goto L_7005803834;
    c->x[0] = (uint32_t)(0xffffffffull);
    goto L_700580389c;
L_7005803860:;
    if ((uint32_t)c->x[0] != 0) goto L_7005803898;
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[1]); }
    goto L_7005803880;
L_700580386c:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_EQ(c)) goto L_7005803890;
    if ((uint32_t)c->x[0] == 0) goto L_7005803880;
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] & (uint32_t)c->x[10]);
L_7005803880:;
    c->x[2] = (uint32_t)((uint32_t)c->x[2] & 0x1ull);
    { uint64_t ea = c->x[12] + 0x8ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[2]);
    goto L_700580389c;
L_7005803890:;
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    goto L_700580389c;
L_7005803898:;
    c->x[0] = (uint32_t)(0xffffffffull);
L_700580389c:;
    stl32(c->x[9], 0ull);
    c->pc = 0; return;
}

void f_7005806000(Cpu *c) {
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
    if (COND_NE(c)) goto L_7005806100;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x51ull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    if (((c->x[2] >> 0) & 1) == 0) goto L_7005806190;
    c->x[9] = (uint64_t)(0x700580e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf678ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3a60000ull);
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005806190;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005806190;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005806190;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005806190;
    c->x[13] = (uint32_t)(0x30ull);
    c->x[11] = (uint64_t)(c->x[11] + (uint64_t)(uint32_t)c->x[3] * (uint64_t)(uint32_t)c->x[13]);
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x2ull));
    if (COND_HI(c)) goto L_7005806190;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x7ull);
    c->x[30] = 0x7005806100ull; f_7005803000(c);
L_7005806100:;
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
    c->pc = 0x70007363b4ull; return;
L_7005806190:;
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
    c->pc = 0x7000736450ull; return;
}

void f_7005808000(Cpu *c) {
    if (c->x[0] == 0) goto L_700580807c;
    if (c->x[1] == 0) goto L_700580807c;
    { uint64_t ea = c->x[1] + 0x51ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_700580807c;
    c->x[9] = (uint64_t)(0x700580e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf678ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3a60000ull);
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700580807c;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700580807c;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_700580807c;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_700580807c;
    c->x[13] = (uint32_t)(0x30ull);
    c->x[11] = (uint64_t)(c->x[11] + (uint64_t)(uint32_t)c->x[12] * (uint64_t)(uint32_t)c->x[13]);
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_HI(c)) goto L_700580807c;
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005808084;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = 0; return;
L_700580807c:;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_7005808084:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005901000(Cpu *c) {
    { uint64_t ea = c->x[8] + 48; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
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
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70059010a8ull; f_7005902c00(c);
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
    c->pc = 0x70020fc9a4ull; return;
}

void f_7005902000(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x4d0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x70059020a8ull; f_7005906600(c);
    if ((uint32_t)c->x[0] == 0) goto L_70059020b4;
    { uint64_t ea = c->sp + 0xd8ull; ST32(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->sp + 0xdcull; ST32(ea, 0u); }
L_70059020b4:;
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
    (void)(subs32(c, (uint32_t)c->x[27], 0x0ull));
    c->pc = 0x70003f42dcull; return;
}

void f_7005904000(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->x[15] = (uint64_t)(0x700590e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x148ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    c->x[14] = (uint64_t)(c->x[14] - c->x[15]);
    c->x[15] = (uint32_t)(0xdf98ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x3710000ull);
    (void)(subs64(c, c->x[14], (uint64_t)(c->x[15])));
    if (COND_EQ(c)) goto L_7005904044;
    c->x[15] = (uint32_t)(0xe540ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x3710000ull);
    (void)(subs64(c, c->x[14], (uint64_t)(c->x[15])));
    if (COND_NE(c)) goto L_7005904128;
    c->x[14] = (uint32_t)(0x1ull);
    goto L_7005904050;
L_7005904044:;
    c->x[14] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[3], 0x1000ull));
    if (COND_CS(c)) goto L_7005904128;
L_7005904050:;
    c->x[9] = (uint64_t)(0x700590e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x180ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(c->x[9] + 0x100ull);
L_7005904060:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[16]));
    if ((uint32_t)c->x[10] != 0) goto L_7005904060;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[16], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005904060;
    c->x[4] = (uint64_t)(ROR64(c->x[2], 32) & 0xffffffffull);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] ^ (uint32_t)c->x[2]);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] ^ (uint32_t)c->x[3]);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] & 0x7ffull);
    c->x[9] = (uint64_t)(c->x[9] + 0x200ull);
    c->x[7] = (uint32_t)(0x800ull);
    c->x[6] = (uint32_t)(0x18ull);
L_7005904090:;
    c->x[12] = (uint64_t)(c->x[9] + (uint64_t)(uint32_t)c->x[4] * (uint64_t)(uint32_t)c->x[6]);
    { uint64_t ea = c->x[12] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70059040d8;
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_70059040c0;
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[3])));
    if (COND_NE(c)) goto L_70059040c0;
    { uint64_t ea = c->x[12] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[14])));
    if (COND_EQ(c)) goto L_70059040f4;
L_70059040c0:;
    c->x[4] = (uint32_t)((uint32_t)c->x[4] + 0x1ull);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] & 0x7ffull);
    c->x[7] = (uint32_t)(subs32(c, (uint32_t)c->x[7], 0x1ull));
    if (COND_NE(c)) goto L_7005904090;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_7005904120;
L_70059040d8:;
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[2]); }
    { uint64_t ea = c->x[12] + 8; ST32(ea, (uint32_t)c->x[3]); ST32(ea + 4, (uint32_t)c->x[1]); }
    { uint64_t ea = c->x[12] + 0x14ull; ST32(ea, (uint32_t)c->x[14]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[12] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005904120;
L_70059040f4:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005904108;
    { uint64_t ea = c->x[12] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[1])));
    if (COND_EQ(c)) goto L_7005904118;
L_7005904108:;
    c->x[10] = (uint32_t)(0x2ull);
    { uint64_t ea = c->x[12] + 0x10ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_7005904120;
L_7005904118:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005904120;
L_7005904120:;
    stl32(c->x[16], 0ull);
    c->pc = 0; return;
L_7005904128:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005908000(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x4f0ull; uint64_t v = LD32(ea); c->x[20] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[20], 0x1ccull));
    if (COND_LE(c)) goto L_70059081e0;
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x100ull);
L_7005908030:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[9]));
    if ((uint32_t)c->x[10] != 0) goto L_7005908030;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[9], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005908030;
    c->x[10] = (uint64_t)(c->x[8] + 0x110ull);
    c->x[11] = (uint32_t)(0x8ull);
L_700590804c:;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[19])));
    if (COND_EQ(c)) goto L_700590806c;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(subs32(c, (uint32_t)c->x[11], 0x1ull));
    if (COND_NE(c)) goto L_700590804c;
    stl32(c->x[9], 0ull);
    goto L_70059081e0;
L_700590806c:;
    { uint64_t ea = c->x[10] + 0xcull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    stl32(c->x[9], 0ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[20])));
    if (COND_NE(c)) goto L_70059081e0;
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    (void)(subs32(c, (uint32_t)c->x[12], 0x1ccull));
    if (COND_NE(c)) goto L_70059081e0;
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[13]);
    { uint64_t ea = c->x[19] + 0x4f8ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_70059081e0;
    c->x[8] = (uint32_t)(0x30ull);
    c->x[21] = (uint64_t)(c->x[21] + (uint64_t)(uint32_t)c->x[20] * (uint64_t)(uint32_t)c->x[8]);
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_70059081e0;
    { uint64_t ea = c->x[21] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70059081e0;
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0xf678ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3a60000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70059081e0;
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70059081e0;
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_70059081e0;
    c->x[22] = (uint64_t)(0x700591a000ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x0ull);
    c->x[23] = (uint32_t)(0u | 0u);
L_70059080f4:;
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CS(c)) goto L_70059081e0;
    c->x[12] = (uint32_t)(0x30ull);
    c->x[11] = (uint64_t)(c->x[10] + (uint64_t)(uint32_t)c->x[11] * (uint64_t)(uint32_t)c->x[12]);
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[11], 0x1ull));
    if (COND_HI(c)) goto L_70059081e0;
    c->x[22] = (uint64_t)(c->x[22] + 0x20ull);
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ccull));
    if (COND_CC(c)) goto L_70059080f4;
    c->x[22] = (uint64_t)(0x700591a000ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x0ull);
    c->x[23] = (uint32_t)(0u | 0u);
L_7005908134:;
    { uint64_t ea = c->x[22] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[22] + 0x8ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[21] + 0x10ull; ST32(ea, VS32(0)); }
    c->v[2] = VS32(2) ^ 0x80000000u;
    { uint64_t ea = c->x[21] + 0x14ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x0ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xb1480000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[23]);
    { uint64_t ea = c->x[21] + 0x1cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[22] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x20ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(toint_s(c, VSF32(0), 3, 0, 32, 0));
    c->x[9] = (uint32_t)(toint_s(c, VSF32(2), 3, 0, 32, 0));
    c->x[10] = (uint32_t)(0xaull);
    c->x[8] = (uint32_t)(sdiv32((uint32_t)c->x[8], (uint32_t)c->x[10]));
    c->x[9] = (uint32_t)(sdiv32((uint32_t)c->x[9], (uint32_t)c->x[10]));
    { uint64_t ea = c->x[21] + 0x24ull; ST16(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[21] + 0x26ull; ST16(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[0] = (uint64_t)(c->sp + 0x50ull);
    c->x[1] = (uint32_t)(0x1ull);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x1ad0ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x400000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x70059081b4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[21] + 0x28ull; ST8(ea, (uint32_t)c->x[0]); }
    c->x[21] = (uint64_t)(c->x[21] + 0x30ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x20ull);
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ccull));
    if (COND_CC(c)) goto L_7005908134;
    c->x[0] = (uint32_t)(0x9ull);
    c->x[1] = (uint32_t)(0x1ccull);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x70059081e0ull; f_7005905000(c);
L_70059081e0:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700590a800(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700590a838;
    (void)(subs32(c, (uint32_t)c->x[1], 0x0ull));
    if (COND_EQ(c)) goto L_700590a848;
    (void)(subs32(c, (uint32_t)c->x[1], 0x4ull));
    if (COND_EQ(c)) goto L_700590a848;
    { uint64_t ea = c->x[0] + 0xcull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x8ull);
    (void)(subs32(c, (uint32_t)c->x[1], 0x3ull));
    c->x[3] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[3] = (uint32_t)(ROR32((uint32_t)c->x[3], 31) & 0xfffffffeull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[2] = (uint32_t)(0u | 0u);
    f_7005905000(c); return;
L_700590a838:;
    { uint64_t ea = c->x[2] + 0x1cull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] & 0xffffull);
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    goto L_700590b000;
L_700590a848:;
    c->pc = 0; return;
L_700590b000:;
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[19] = (uint32_t)(ROR32((uint32_t)c->x[0], 29) & 0xfffffff8ull);
    c->x[19] = (uint32_t)((uint32_t)c->x[19] + (uint32_t)c->x[1]);
    c->x[20] = (uint64_t)(0x700590e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + 0xc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x300ull);
    c->x[8] = (uint64_t)(c->x[8] + (c->x[19] << 2));
L_700590b02c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[10] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_700590b02c;
    c->x[8] = (uint64_t)(c->x[20] + 0xc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x400ull);
    c->x[8] = (uint64_t)(c->x[8] + (c->x[19] << 4));
    { uint64_t ea = c->x[8] + 0; ST32(ea, (uint32_t)c->x[2]); ST32(ea + 4, (uint32_t)c->x[3]); }
    { uint64_t ea = c->x[8] + 8; ST32(ea, (uint32_t)c->x[1]); ST32(ea + 4, (uint32_t)c->x[10]); }
    (void)(subs32(c, (uint32_t)c->x[1], 0x4ull));
    if (COND_EQ(c)) goto L_700590b068;
    c->x[8] = (uint64_t)(c->x[20] + 0xd000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x0ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[1] + 0x1ull);
    { uint64_t ea = c->x[8] + (c->x[2] << 2); ST32(ea, (uint32_t)c->x[9]); }
L_700590b068:;
    (void)(subs32(c, (uint32_t)c->x[10], 0x4ull));
    if (COND_LS(c)) goto L_700590b07c;
    c->x[9] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[10] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700590b0a4;
L_700590b07c:;
    c->x[8] = (uint64_t)(0x700590b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x800ull);
    { uint64_t ea = c->x[8] + (c->x[19] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x7005900000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x0ull);
    c->x[0] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x700590b0a4ull; rt_dispatch(c); c->pc = 0;
L_700590b0a4:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005a01000(Cpu *c) {
    c->x[9] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
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
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    if (COND_LE(c)) goto L_7005a01118;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005a01118;
    { uint64_t ea = c->x[10] + 0x228ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005a01118;
    { uint64_t ea = c->x[10] + 0x208ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a01118;
    { uint64_t ea = c->x[10] + 0x438ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] != 0) goto L_7005a010dc;
    { uint64_t ea = c->x[10] + 0x150ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] != 0) goto L_7005a010e4;
    { uint64_t ea = c->x[10] + 0x508ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a01118;
    c->x[0] = (uint32_t)(0x2ull);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[9]);
    goto L_7005a010f0;
L_7005a010dc:;
    c->x[0] = (uint32_t)(0x0ull);
    goto L_7005a010e8;
L_7005a010e4:;
    c->x[0] = (uint32_t)(0x1ull);
L_7005a010e8:;
    { uint64_t ea = c->sp + 0x48ull; ST64(ea, 0ull); }
    c->x[2] = (uint32_t)(0u | 0u);
L_7005a010f0:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[9]);
    { uint64_t ea = c->x[8] + 0x1830ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | 0u);
    if (c->x[10] == 0) goto L_7005a01104;
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
L_7005a01104:;
    { uint64_t ea = c->x[8] + 0x1840ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[4] = (uint32_t)(0u | 0u);
    if (c->x[10] == 0) goto L_7005a01114;
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
L_7005a01114:;
    c->x[30] = 0x7005a01118ull; f_7005a0b000(c);
L_7005a01118:;
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
    { uint64_t ea = c->x[19] + 0x18e8ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0x70004403a4ull; return;
}

void f_7005a02000(Cpu *c) {
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
    if (c->x[0] == 0) goto L_7005a02180;
    { uint64_t ea = c->x[0] + 0x218ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a02180;
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x100ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a020bcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint64_t)(0x7005a0e000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x110ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a02180;
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x108ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a020e4ull; rt_dispatch(c); c->pc = 0;
    c->x[2] = (uint32_t)((uint32_t)c->x[0] & 0x1ull);
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x128ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a02108ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] != 0) goto L_7005a0212c;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] ^ 0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x128ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a0212cull; rt_dispatch(c); c->pc = 0;
L_7005a0212c:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_CC(c)) goto L_7005a02168;
    (void)(subs32(c, (uint32_t)c->x[0], 0xbull));
    if (COND_HI(c)) goto L_7005a02168;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4f8ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[8] + 0x4fcull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0xaull);
    c->x[30] = 0x7005a02164ull; f_7005a0b000(c);
    goto L_7005a02180;
L_7005a02168:;
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0xbull);
    c->x[30] = 0x7005a02180ull; f_7005a0b000(c);
L_7005a02180:;
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
    c->pc = 0x700209ebdcull; return;
}

void f_7005a03000(Cpu *c) {
    { uint64_t ea = c->sp + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
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
    c->x[9] = (uint32_t)(0xc430ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x8a880000ull);
    (void)(subs32(c, (uint32_t)c->x[1], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a030c0;
    c->x[2] = (uint32_t)(0xec02ull);
    c->x[2] = (uint32_t)((c->x[2] & 0xffffffff0000ffffull) | 0x18180000ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1aull);
    c->x[30] = 0x7005a030c0ull; f_7005a0b000(c);
L_7005a030c0:;
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
    c->pc = 0x7002157800ull; return;
}

void f_7005a04400(Cpu *c) {
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
    c->x[8] = (uint64_t)(0x7005a0b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xc00ull);
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x4ull);
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x30cull; ST32(ea, 0u); }
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->sp + 0x310ull; ST64(ea, c->x[8]); }
    c->x[2] = (uint32_t)(0x1dull);
    c->x[3] = (uint64_t)(c->sp + 0x300ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3788ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2110000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a044d0ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint32_t)(0x3ull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3788ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2110000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04500ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x3ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3874ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2110000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04528ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x2ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3774ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2110000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a0454cull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x6ull);
    c->x[3] = (uint32_t)(0x2ull);
    c->x[4] = (uint32_t)(0x1dull);
    c->x[0] = (uint32_t)(0x22ull);
    c->x[30] = 0x7005a04564ull; f_7005a0b000(c);
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
    c->pc = 0x700217947cull; return;
}

void f_7005a05800(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x4ccull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4c8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[16] = (uint32_t)(ROR32((uint32_t)c->x[9], 16) & 0xffffull);
    c->x[17] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[17])));
    if (COND_NE(c)) goto L_7005a05820;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->pc = 0; return;
L_7005a05820:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[9] : (uint32_t)(~0u));
    c->pc = 0; return;
}

void f_7005a05c00(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[9], 16) & 0xffffull);
    c->x[18] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[18])));
    if (COND_EQ(c)) goto L_7005a05ca4;
    goto L_7005a05d68;
L_7005a05ca4:;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4c8ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[10] = (uint32_t)((uint32_t)c->x[9] & 0xffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    c->x[11] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[8] + 0x4ccull; ST8(ea, (uint32_t)c->x[11]); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->x[2] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[10] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[10] & 0xffffffffull));
    c->x[3] = (uint64_t)(0ull | c->x[8]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x6ull);
    c->x[30] = 0x7005a05cd8ull; f_7005a0b000(c);
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
    c->pc = 0x7000aab284ull; return;
L_7005a05d68:;
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
    if (((c->x[9] >> 31) & 1) == 0) goto L_7005a05dfc;
    c->pc = 0x7000aab27cull; return;
L_7005a05dfc:;
    c->pc = 0x7000aac4fcull; return;
}

void f_7005a06c00(Cpu *c) {
    c->x[8] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)((uint32_t)c->x[8]));
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
    if (COND_NE(c)) goto L_7005a06cc0;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->x[9] = (uint32_t)(0xa5d00000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
    goto L_7005a06cc4;
L_7005a06cc0:;
    /* hint */
L_7005a06cc4:;
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
    c->pc = 0x7000457308ull; return;
}

void f_7005a08800(Cpu *c) {
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
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x1cull; uint64_t v = LD8(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x17ull);
    c->x[30] = 0x7005a088a8ull; f_7005a0b000(c);
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
    c->x[8] = (uint32_t)(0x1ull);
    c->pc = 0x7001fa872cull; return;
}

void f_7005a09400(Cpu *c) {
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
    if (COND_LE(c)) goto L_7005a0953c;
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x12ull);
    c->x[30] = 0x7005a094acull; f_7005a0b000(c);
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
    c->pc = 0x70020a6ec0ull; return;
L_7005a0953c:;
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
    if (COND_GT(c)) goto L_7005a095d0;
    c->pc = 0x70020a760cull; return;
L_7005a095d0:;
    c->pc = 0x70020a6ec0ull; return;
}

void f_7005a0a500(Cpu *c) {
    c->x[1] = (uint32_t)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
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
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a0a7e8;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    if (COND_LE(c)) goto L_7005a0a7e8;
    { uint64_t ea = c->sp + 0x4f8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0x7005a0e000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x148ull);
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x98e0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x890000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_EQ(c)) goto L_7005a0a6e4;
    c->x[13] = (uint32_t)(0x858ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x20b0000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0a6e4;
    { uint64_t ea = c->sp + 0x558ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x5d10ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x2510000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0a6e4;
    { uint64_t ea = c->sp + 0x398ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x49ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x1ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x74ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x2ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x3ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x4ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x5ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x45ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x6ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6eull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x7ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x8ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0x9ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x79ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0xaull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0xbull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x31ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0xcull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x33ull));
    if (COND_NE(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0xdull; uint64_t v = LD8(ea); c->x[14] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[14] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x1ull));
    if (COND_HI(c)) goto L_7005a0a7a4;
    { uint64_t ea = c->x[11] + 0xeull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] != 0) goto L_7005a0a7a4;
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + 0x52ull);
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x308ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[1]);
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[14]);
    c->x[0] = (uint32_t)(0x26ull);
    c->x[30] = 0x7005a0a6dcull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
L_7005a0a6e4:;
    /* hint */
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[10]);
    { uint64_t ea = c->sp + 0x4f8ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(c->x[4] - c->x[9]);
    c->x[0] = (uint32_t)(0x1full);
    c->x[30] = 0x7005a0a714ull; f_7005a0b000(c);
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
    c->pc = 0x700209bba0ull; return;
L_7005a0a7a4:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x4f8ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[3] - c->x[9]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0x858ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x20b0000ull);
    (void)(subs64(c, c->x[3], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005a0a7dc;
    { uint64_t ea = c->sp + 0x558ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(c->x[4] - c->x[9]);
L_7005a0a7dc:;
    /* hint */
    c->x[0] = (uint32_t)(0x21ull);
    c->x[30] = 0x7005a0a7e8ull; f_7005a0b000(c);
L_7005a0a7e8:;
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
    if (COND_LE(c)) goto L_7005a0a87c;
    c->pc = 0x700209bba0ull; return;
L_7005a0a87c:;
    c->pc = 0x700209bec8ull; return;
}

void f_7005a10234(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x5a0ull);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005a10390;
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005a10390;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_7005a10390;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[3] - 0x10000ull);
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005a10390;
    c->x[8] = (uint64_t)(c->x[1] - c->x[23]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[24] = (uint32_t)(0u | 0u);
    (void)(logic64(c, c->x[8] & 0x3ull));
    if (COND_NE(c)) goto L_7005a10390;
    c->x[9] = (uint32_t)(0x7908ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x5560000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 28) & 0xfffffffffull);
    if (c->x[9] != 0) goto L_7005a10390;
    c->x[9] = (uint32_t)(0x7908ull);
    c->x[10] = (uint32_t)(0xf6f8ull);
    c->x[11] = (uint32_t)(0x14000000ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xd560000ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x2a90000ull);
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    { uint64_t ea = c->x[23] + c->x[10]; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(((uint32_t)c->x[11] & 0xfc000000ull) | ((((uint32_t)c->x[11] & 0x3c000000ull) | (ROR32((uint32_t)c->x[9], 2) & 0xc3ffffffull)) & 0x3ffffffull));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005a10390;
    c->x[9] = (uint32_t)(0x5068ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x5f50000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 28) & 0xfffffffffull);
    if (c->x[9] != 0) goto L_7005a10390;
    c->x[9] = (uint32_t)(0x5068ull);
    c->x[10] = (uint32_t)(0x3b98ull);
    c->x[11] = (uint32_t)(0x14000000ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xdf50000ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x20b0000ull);
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    { uint64_t ea = c->x[23] + c->x[10]; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(((uint32_t)c->x[11] & 0xfc000000ull) | ((((uint32_t)c->x[11] & 0x3c000000ull) | (ROR32((uint32_t)c->x[9], 2) & 0xc3ffffffull)) & 0x3ffffffull));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005a10390;
    c->x[9] = (uint32_t)(0xf9f4ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x76d0000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 28) & 0xfffffffffull);
    if (c->x[9] != 0) goto L_7005a10390;
    c->x[9] = (uint32_t)(0xf9f4ull);
    c->x[10] = (uint32_t)(0x1a0cull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xf6d0000ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x920000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    c->x[9] = (uint32_t)(0x14000000ull);
    { uint64_t ea = c->x[23] + c->x[10]; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(((uint32_t)c->x[9] & 0xfc000000ull) | ((((uint32_t)c->x[9] & 0x3c000000ull) | (ROR32((uint32_t)c->x[8], 2) & 0xc3ffffffull)) & 0x3ffffffull));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a1038c;
    c->x[8] = (uint32_t)(0x1678ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3a80000ull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005a1038c;
    c->x[8] = (uint32_t)(0xfcb4ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[22] + c->x[8]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a103b4;
L_7005a1038c:;
    c->x[24] = (uint32_t)(0u | 0u);
L_7005a10390:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->sp = (uint64_t)(c->sp + 0x5a0ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005a103b4:;
    { uint64_t ea = c->x[22] + 0x188ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[24] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[21], 0x1ull));
    if (COND_HI(c)) goto L_7005a10390;
    c->x[8] = (uint32_t)(0x66b0ull);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[25] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005a10390;
    c->x[8] = (uint64_t)(c->sp + 0x520ull);
    c->x[9] = (uint32_t)(0x1ull);
L_7005a103ec:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[19]));
    if ((uint32_t)c->x[10] != 0) goto L_7005a10888;
    { uint32_t st = stx32(c, c->x[19], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005a103ec;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005a10434;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[25])));
    if (COND_NE(c)) goto L_7005a10434;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[21])));
    if (COND_NE(c)) goto L_7005a10434;
    c->x[9] = (uint64_t)(c->x[19] + 0x4ull);
L_7005a10424:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[9]));
    { uint32_t st = stx32(c, c->x[9], 0ull); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005a10424;
    if ((uint32_t)c->x[10] == 0) goto L_7005a108bc;
L_7005a10434:;
    c->v[0] = 0x0ull;
    c->x[9] = (uint64_t)(0x7005a10000ull);
    c->x[2] = (uint64_t)(c->sp + 0x520ull);
    { uint64_t ea = c->x[9] + 0xf00ull; c->v[1] = LD64(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[1] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->x[19] + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->x[19] + 0x20ull; ST32(ea, (uint32_t)c->x[21]); }
    { uint64_t ea = c->x[19] + 4; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[8] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[8] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[8] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[30] = 0x7005a1046cull; f_7005a1097c(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10894;
    c->x[8] = (uint32_t)(0x60d0ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[25]); }
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint32_t)(0u | 0u);
    c->x[27] = (uint64_t)(c->x[19] + 0x40ull);
    c->x[28] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[19] + 0x1d8ull);
    c->x[29] = (uint32_t)(0x19cull);
    { uint64_t ea = c->sp + 56; ST64(ea, c->x[8]); ST64(ea + 8, c->x[21]); }
L_7005a10494:;
    c->x[26] = (uint64_t)(c->x[27] + c->x[24] * c->x[29]);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->x[3] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x7005a104acull; f_7005a10b0c(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a108a4;
    { uint64_t ea = c->x[28] + (c->x[24] << 2); ST32(ea, (uint32_t)c->x[24]); }
    { uint64_t ea = c->x[26] + 0x198ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a10510;
    c->x[25] = (uint32_t)((uint32_t)c->x[25] + 0x1ull);
    if (c->x[24] == 0) goto L_7005a10510;
    c->x[29] = (uint32_t)(0u | (uint32_t)c->x[25]);
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | 0ull);
L_7005a104d0:;
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a104e8;
    c->x[0] = (uint64_t)(c->x[25] - 0x198ull);
    c->x[1] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x7005a104e4ull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005a104fc;
L_7005a104e8:;
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    c->x[25] = (uint64_t)(c->x[25] + 0x19cull);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[21])));
    if (COND_NE(c)) goto L_7005a104d0;
    goto L_7005a10504;
L_7005a104fc:;
    { uint64_t ea = c->x[28] + (c->x[21] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[28] + (c->x[24] << 2); ST32(ea, (uint32_t)c->x[8]); }
L_7005a10504:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[25] = (uint32_t)(0u | (uint32_t)c->x[29]);
    c->x[29] = (uint32_t)(0x19cull);
L_7005a10510:;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    (void)(subs64(c, c->x[24], 0x3cull));
    if (COND_NE(c)) goto L_7005a10494;
    c->x[29] = (uint32_t)(0u | (uint32_t)c->x[25]);
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint64_t)(c->x[19] + 0x1d8ull);
L_7005a10528:;
    c->x[0] = (uint64_t)(c->sp + 0x384ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x19cull);
    c->x[30] = 0x7005a10538ull; f_7005a1001c(c);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[3] = (uint64_t)(c->sp + 0x384ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->x[30] = 0x7005a1054cull; f_7005a10b0c(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a108b0;
    { uint64_t ea = c->sp + 0x51cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a108b0;
    { uint64_t ea = c->sp + 0x518ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] - 4; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005a108b0;
    if ((uint32_t)c->x[8] == 0) goto L_7005a10584;
    c->x[1] = (uint64_t)(c->x[25] - 0x198ull);
    c->x[0] = (uint64_t)(c->sp + 0x384ull);
    c->x[30] = 0x7005a10580ull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a108b0;
L_7005a10584:;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[25] = (uint64_t)(c->x[25] + 0x19cull);
    (void)(subs64(c, c->x[24], 0x3cull));
    if (COND_NE(c)) goto L_7005a10528;
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[30] = 0x7005a1059cull; f_7005a10d50(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a108d4;
    c->x[8] = (uint32_t)(0x1678ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3a80000ull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005a108d4;
    c->x[8] = (uint32_t)(0x66b0ull);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005a108d4;
    { uint64_t ea = c->x[22] + 0x188ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a108d4;
    c->x[8] = (uint32_t)(0xb800ull);
    c->x[9] = (uint32_t)(0x61bcull);
    c->x[27] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    c->x[24] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x1cull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0x5f34ull);
    c->x[26] = (uint64_t)(c->x[19] + c->x[8]);
L_7005a10608:;
    { uint64_t ea = c->x[26] + 0x198ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a107d8;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[27] + 0x3bull);
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[8] + (c->x[27] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[8]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    { uint64_t ea = c->x[26] + 0x194ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[25] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[25])));
    if (COND_LE(c)) goto L_7005a107d8;
    c->x[0] = (uint64_t)(c->sp + 0x384ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x19cull);
    c->x[30] = 0x7005a10648ull; f_7005a1001c(c);
    c->x[0] = (uint64_t)(c->sp + 0x1e8ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x19cull);
    c->x[30] = 0x7005a10658ull; f_7005a1001c(c);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[30] = 0x7005a10660ull; f_7005a10d50(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10934;
    c->x[2] = (uint64_t)(c->x[27] + 0x3bull);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[3] = (uint64_t)(c->sp + 0x384ull);
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[30] = 0x7005a1067cull; f_7005a10b0c(c);
    c->x[28] = (uint32_t)(0x5ull);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10938;
    { uint64_t ea = c->sp + 0x51cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a10938;
    c->x[0] = (uint64_t)(c->sp + 0x384ull);
    c->x[1] = (uint64_t)(0ull | c->x[26]);
    c->x[30] = 0x7005a10698ull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10934;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_7005a106dc;
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[3] = (uint64_t)(c->sp + 0x1e8ull);
    { uint64_t ea = c->sp + 56; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[2] = (uint64_t)(a); c->x[1] = (uint64_t)(b); }
    c->x[30] = 0x7005a106bcull; f_7005a10b0c(c);
    c->x[28] = (uint32_t)(0x6ull);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10938;
    { uint64_t ea = c->sp + 0x380ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a10938;
    c->x[0] = (uint64_t)(c->sp + 0x1e8ull);
    c->x[1] = (uint64_t)(c->sp + 0x384ull);
    c->x[30] = 0x7005a106d8ull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10968;
L_7005a106dc:;
    { uint64_t ea = c->sp + 0x518ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[25] = (uint32_t)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[25])));
    if (COND_LE(c)) goto L_7005a107d8;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x6ull);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[25]);
    c->x[4] = (uint32_t)(0u | 0u);
    c->x[5] = (uint32_t)(0x3ull);
    c->pc = c->x[8]; c->x[30] = 0x7005a10708ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint64_t)(c->sp + 0x4cull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x19cull);
    c->x[30] = 0x7005a10718ull; f_7005a1001c(c);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[30] = 0x7005a10720ull; f_7005a10d50(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a1091c;
    c->x[8] = (uint32_t)(0x1678ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3a80000ull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005a1091c;
    c->x[8] = (uint32_t)(0x66b0ull);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005a1091c;
    { uint64_t ea = c->x[22] + 0x188ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a1091c;
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[3] = (uint64_t)(c->sp + 0x4cull);
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[30] = 0x7005a10774ull; f_7005a10b0c(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a1091c;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x1e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005a107b4;
    c->x[28] = (uint32_t)(0x8ull);
    if ((uint32_t)c->x[8] == 0) goto L_7005a10920;
    { uint64_t ea = c->sp + 0x1e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005a10920;
    c->x[0] = (uint64_t)(c->sp + 0x4cull);
    c->x[1] = (uint64_t)(c->sp + 0x384ull);
    c->x[30] = 0x7005a107acull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005a107c8;
    goto L_7005a10974;
L_7005a107b4:;
    if ((uint32_t)c->x[8] == 0) goto L_7005a107c8;
    c->x[0] = (uint64_t)(c->sp + 0x4cull);
    c->x[1] = (uint64_t)(c->sp + 0x384ull);
    c->x[30] = 0x7005a107c4ull; f_7005a10ca0(c);
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005a10974;
L_7005a107c8:;
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint32_t)((uint32_t)c->x[25] + (uint32_t)c->x[24]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->sp + 0x1cull; ST32(ea, (uint32_t)c->x[8]); }
L_7005a107d8:;
    c->x[27] = (uint64_t)(c->x[27] - 0x1ull);
    c->x[26] = (uint64_t)(c->x[26] - 0x19cull);
    (void)(adds64(c, c->x[27], 0x3cull));
    if (COND_NE(c)) goto L_7005a10608;
    if ((uint32_t)c->x[24] == 0) goto L_7005a10814;
    c->x[8] = (uint64_t)(c->x[23] + 0x924000ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x6ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x3b8ull);
    c->pc = c->x[8]; c->x[30] = 0x7005a10800ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 40; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[10]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[24]);
    { uint64_t ea = c->x[19] + 40; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
L_7005a10814:;
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[22] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 48; ST32(ea, (uint32_t)c->x[29]); ST32(ea + 4, 0u); }
L_7005a10820:;
    c->x[0] = (uint64_t)(c->sp + 0x384ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x19cull);
    c->x[30] = 0x7005a10830ull; f_7005a1001c(c);
    c->x[0] = (uint64_t)(c->sp + 0x520ull);
    c->x[3] = (uint64_t)(c->sp + 0x384ull);
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[30] = 0x7005a10844ull; f_7005a10b0c(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10858;
    { uint64_t ea = c->sp + 0x51cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a10858;
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x34ull; ST32(ea, (uint32_t)c->x[23]); }
L_7005a10858:;
    c->x[22] = (uint32_t)((uint32_t)c->x[22] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[22], 0x3cull));
    if (COND_NE(c)) goto L_7005a10820;
    { uint64_t ea = c->x[19] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xcull; ST32(ea, 0u); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x24ull; ST32(ea, (uint32_t)c->x[8]); }
    if ((uint32_t)c->x[24] == 0) goto L_7005a10914;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x27ull);
    c->x[28] = (uint32_t)(0u | (uint32_t)c->x[29]);
    goto L_7005a108fc;
L_7005a10888:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->excl_addr = ~0ull;
    goto L_7005a10390;
L_7005a10894:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[25] = (uint32_t)(0u | 0u);
    c->x[28] = (uint32_t)(0x1ull);
    goto L_7005a108e4;
L_7005a108a4:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[28] = (uint32_t)(0x2ull);
    goto L_7005a108e4;
L_7005a108b0:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[28] = (uint32_t)(0x3ull);
    goto L_7005a108e0;
L_7005a108bc:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005a10434;
    c->x[8] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    c->x[24] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005a10914;
L_7005a108d4:;
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[28] = (uint32_t)(0x4ull);
L_7005a108dc:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
L_7005a108e0:;
    c->x[25] = (uint32_t)(0u | (uint32_t)c->x[29]);
L_7005a108e4:;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[25]);
    { uint64_t ea = c->x[19] + 0xcull; ST32(ea, (uint32_t)c->x[28]); }
    c->x[0] = (uint32_t)(0x28ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005a108fc:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[28]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[23]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->x[8] = (uint64_t)(c->x[20] + 0xb000ull);
    c->x[4] = (uint64_t)(0ull | c->x[21]);
    c->pc = c->x[8]; c->x[30] = 0x7005a10914ull; rt_dispatch(c); c->pc = 0;
L_7005a10914:;
    stl32(c->x[19], 0ull);
    goto L_7005a10390;
L_7005a1091c:;
    c->x[28] = (uint32_t)(0x7ull);
L_7005a10920:;
    { uint64_t ea = c->x[19] + 0x3cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    if ((uint32_t)c->x[24] != 0) goto L_7005a1093c;
    goto L_7005a108dc;
L_7005a10934:;
    c->x[28] = (uint32_t)(0x5ull);
L_7005a10938:;
    if ((uint32_t)c->x[24] == 0) goto L_7005a108dc;
L_7005a1093c:;
    c->x[8] = (uint64_t)(c->x[23] + 0x924000ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x6ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x3b8ull);
    c->pc = c->x[8]; c->x[30] = 0x7005a10950ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 40; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[10]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[24]);
    { uint64_t ea = c->x[19] + 40; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    goto L_7005a108dc;
L_7005a10968:;
    c->x[28] = (uint32_t)(0x6ull);
    if ((uint32_t)c->x[24] != 0) goto L_7005a1093c;
    goto L_7005a108dc;
L_7005a10974:;
    c->x[28] = (uint32_t)(0x8ull);
    goto L_7005a10920;
}
