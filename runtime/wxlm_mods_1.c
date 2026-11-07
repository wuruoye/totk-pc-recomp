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
    c->v[0] = 0x3f0000003f000000ull;
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
    c->v[0] = 0x3f0000003f000000ull;
    c->x[8] = (uint32_t)(0x3f000000ull);
    c->x[1] = (uint64_t)(c->sp + 0x470ull);
    { uint64_t ea = c->x[20] + 0x21f8ull; ST32(ea, (uint32_t)c->x[8]); }
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
    c->x[8] = (uint32_t)(0x1ull);
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

void f_700530a400(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    FP_SETD(0, simd_s2d(c, VSF32(0)));
    FP_SETD(1, simd_s2d(c, VSF32(1)));
    fp_op_d(c, FOP_MUL, 0, 0, 1);
    FP_SETD(1, simd_s2d(c, VSF32(2)));
    fp_op_d(c, FOP_ADD, 0, 0, 1);
    FP_SETS(0, simd_d2s(c, VSF64(0)));
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700530a428(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[9] = (uint32_t)(VS32(0));
    c->x[8] = (uint32_t)(0x7f800000ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)~(uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700530a450;
    fp_op_s(c, FOP_MUL, 1, 0, 0);
    fp_op_s(c, FOP_ADD, 0, 1, 0);
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700530a450:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_LT(c)) goto L_700530a468;
    (void)(subs32(c, (uint32_t)c->x[9], 0x800000ull));
    if (COND_CC(c)) goto L_700530a47c;
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[9], 23) & 0x1ffull);
    goto L_700530a498;
L_700530a468:;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_NE(c)) goto L_700530a478;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700530a478:;
    if (((c->x[9] >> 31) & 1) != 0) goto L_700530a838;
L_700530a47c:;
    c->x[8] = (uint32_t)(clz32((uint32_t)c->x[9]));
    c->x[11] = (uint32_t)(0x17ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[8] ^ 0x1full);
    c->x[10] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[10]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] << ((uint32_t)c->x[10] & 31));
    c->x[10] = (uint32_t)(0x9ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[8]);
L_700530a498:;
    c->x[10] = (uint32_t)(0x800000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x7full);
    c->x[11] = (uint32_t)(0x2000000ull);
    c->x[10] = (uint32_t)(((uint32_t)c->x[10] & 0xff800000ull) | ((((uint32_t)c->x[10] & 0xff800000ull) | ((uint32_t)c->x[9] & 0x7fffffull)) & 0x7fffffull));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->x[12] = (uint32_t)(0xfc000000ull);
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 10) & 0xffc00000ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[10] << ((uint32_t)c->x[9] & 31));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xff800000ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[9], 21) & 0x7ffull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x9ull));
    c->x[10] = (uint32_t)(0xfd800000ull);
    c->x[10] = (uint32_t)((COND_CC(c)) ? 0u : (uint32_t)((uint32_t)c->x[10]));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] + ((uint32_t)c->x[9] << 2));
    c->x[10] = (uint32_t)(0x3000000ull);
    c->x[10] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)((uint32_t)c->x[10]));
    c->x[11] = (uint32_t)((uint32_t)c->x[12] + ((uint32_t)c->x[9] << 1));
    c->x[9] = (uint32_t)(0x1800000ull);
    c->x[12] = (uint32_t)(0x1000000ull);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] | 0x400000ull);
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[12] : (uint32_t)((uint32_t)c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[11])));
    c->x[12] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[13] = (uint32_t)((uint32_t)c->x[10] | 0x800000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[12]);
    c->x[12] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[13]));
    c->x[10] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[11], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((uint32_t)c->x[12] | 0x200000ull);
    c->x[14] = (uint32_t)((uint32_t)c->x[12] | 0x400000ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] << 22));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[11])));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[12] : (uint32_t)((uint32_t)c->x[14]));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[13]);
    c->x[14] = (uint32_t)((uint32_t)c->x[12] | 0x100000ull);
    c->x[15] = (uint32_t)((uint32_t)c->x[12] | 0x200000ull);
    c->x[13] = (uint32_t)(ROR32((uint32_t)c->x[11], 31) & 0xfffffffeull);
    c->x[11] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[11] << 21));
    (void)(subs32(c, (uint32_t)c->x[14], (uint32_t)((uint32_t)c->x[13])));
    c->x[14] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[14]));
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - (uint32_t)c->x[14]);
    c->x[14] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[12] : (uint32_t)((uint32_t)c->x[15]));
    c->x[12] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[13] = (uint32_t)(ROR32((uint32_t)c->x[13], 31) & 0xfffffffeull);
    c->x[15] = (uint32_t)((uint32_t)c->x[14] + 0x80000ull);
    c->x[16] = (uint32_t)((uint32_t)c->x[14] + 0x100000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | ((uint32_t)c->x[12] << 20));
    (void)(subs32(c, (uint32_t)c->x[15], (uint32_t)((uint32_t)c->x[13])));
    c->x[15] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[15]));
    c->x[14] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[14] : (uint32_t)((uint32_t)c->x[16]));
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - (uint32_t)c->x[15]);
    c->x[16] = (uint32_t)((uint32_t)c->x[14] + 0x40000ull);
    c->x[17] = (uint32_t)((uint32_t)c->x[14] + 0x80000ull);
    c->x[15] = (uint32_t)(ROR32((uint32_t)c->x[13], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | ((uint32_t)c->x[13] << 19));
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[15])));
    c->x[16] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[16]));
    c->x[15] = (uint32_t)((uint32_t)c->x[15] - (uint32_t)c->x[16]);
    c->x[16] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[14] : (uint32_t)((uint32_t)c->x[17]));
    c->x[14] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[15] = (uint32_t)(ROR32((uint32_t)c->x[15], 31) & 0xfffffffeull);
    c->x[17] = (uint32_t)((uint32_t)c->x[16] + 0x20000ull);
    c->x[18] = (uint32_t)((uint32_t)c->x[16] + 0x40000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | ((uint32_t)c->x[14] << 18));
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[15])));
    c->x[17] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[17]));
    c->x[16] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[16] : (uint32_t)((uint32_t)c->x[18]));
    c->x[15] = (uint32_t)((uint32_t)c->x[15] - (uint32_t)c->x[17]);
    c->x[18] = (uint32_t)((uint32_t)c->x[16] + 0x10000ull);
    c->x[0] = (uint32_t)((uint32_t)c->x[16] + 0x20000ull);
    c->x[17] = (uint32_t)(ROR32((uint32_t)c->x[15], 31) & 0xfffffffeull);
    c->x[15] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | ((uint32_t)c->x[15] << 17));
    (void)(subs32(c, (uint32_t)c->x[18], (uint32_t)((uint32_t)c->x[17])));
    c->x[18] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[18]));
    c->x[17] = (uint32_t)((uint32_t)c->x[17] - (uint32_t)c->x[18]);
    c->x[18] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[16] : (uint32_t)((uint32_t)c->x[0]));
    c->x[16] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[17] = (uint32_t)(ROR32((uint32_t)c->x[17], 31) & 0xfffffffeull);
    c->x[0] = (uint32_t)((uint32_t)c->x[18] + 0x8000ull);
    c->x[1] = (uint32_t)((uint32_t)c->x[18] + 0x10000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[16] << 16));
    (void)(subs32(c, (uint32_t)c->x[0], (uint32_t)((uint32_t)c->x[17])));
    c->x[0] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[0]));
    c->x[18] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[18] : (uint32_t)((uint32_t)c->x[1]));
    c->x[17] = (uint32_t)((uint32_t)c->x[17] - (uint32_t)c->x[0]);
    c->x[1] = (uint32_t)((uint32_t)c->x[18] + 0x4000ull);
    c->x[2] = (uint32_t)((uint32_t)c->x[18] + 0x8000ull);
    c->x[0] = (uint32_t)(ROR32((uint32_t)c->x[17], 31) & 0xfffffffeull);
    c->x[17] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[17] << 15));
    (void)(subs32(c, (uint32_t)c->x[1], (uint32_t)((uint32_t)c->x[0])));
    c->x[1] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[1]));
    c->x[0] = (uint32_t)((uint32_t)c->x[0] - (uint32_t)c->x[1]);
    c->x[1] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[18] : (uint32_t)((uint32_t)c->x[2]));
    c->x[18] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[0] = (uint32_t)(ROR32((uint32_t)c->x[0], 31) & 0xfffffffeull);
    c->x[2] = (uint32_t)((uint32_t)c->x[1] + 0x2000ull);
    c->x[3] = (uint32_t)((uint32_t)c->x[1] + 0x4000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[18] << 14));
    (void)(subs32(c, (uint32_t)c->x[2], (uint32_t)((uint32_t)c->x[0])));
    c->x[2] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[2]));
    c->x[1] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[1] : (uint32_t)((uint32_t)c->x[3]));
    c->x[0] = (uint32_t)((uint32_t)c->x[0] - (uint32_t)c->x[2]);
    c->x[3] = (uint32_t)((uint32_t)c->x[1] + 0x1000ull);
    c->x[4] = (uint32_t)((uint32_t)c->x[1] + 0x2000ull);
    c->x[2] = (uint32_t)(ROR32((uint32_t)c->x[0], 31) & 0xfffffffeull);
    c->x[0] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[0] << 13));
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[2])));
    c->x[3] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[3]));
    c->x[2] = (uint32_t)((uint32_t)c->x[2] - (uint32_t)c->x[3]);
    c->x[3] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[1] : (uint32_t)((uint32_t)c->x[4]));
    c->x[1] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[2] = (uint32_t)(ROR32((uint32_t)c->x[2], 31) & 0xfffffffeull);
    c->x[4] = (uint32_t)((uint32_t)c->x[3] + 0x800ull);
    c->x[5] = (uint32_t)((uint32_t)c->x[3] + 0x1000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[1] << 12));
    (void)(subs32(c, (uint32_t)c->x[4], (uint32_t)((uint32_t)c->x[2])));
    c->x[4] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[4]));
    c->x[3] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[3] : (uint32_t)((uint32_t)c->x[5]));
    c->x[2] = (uint32_t)((uint32_t)c->x[2] - (uint32_t)c->x[4]);
    c->x[5] = (uint32_t)((uint32_t)c->x[3] + 0x400ull);
    c->x[6] = (uint32_t)((uint32_t)c->x[3] + 0x800ull);
    c->x[4] = (uint32_t)(ROR32((uint32_t)c->x[2], 31) & 0xfffffffeull);
    c->x[2] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[2] << 11));
    (void)(subs32(c, (uint32_t)c->x[5], (uint32_t)((uint32_t)c->x[4])));
    c->x[5] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[5]));
    c->x[4] = (uint32_t)((uint32_t)c->x[4] - (uint32_t)c->x[5]);
    c->x[5] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[3] : (uint32_t)((uint32_t)c->x[6]));
    c->x[3] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[4] = (uint32_t)(ROR32((uint32_t)c->x[4], 31) & 0xfffffffeull);
    c->x[6] = (uint32_t)((uint32_t)c->x[5] + 0x200ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[3] << 10));
    (void)(subs32(c, (uint32_t)c->x[6], (uint32_t)((uint32_t)c->x[4])));
    c->x[6] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[6]));
    c->x[9] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[4] = (uint32_t)((uint32_t)c->x[4] - (uint32_t)c->x[6]);
    c->x[6] = (uint32_t)((uint32_t)c->x[5] + 0x400ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[9] << 9));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[5] : (uint32_t)((uint32_t)c->x[6]));
    c->x[4] = (uint32_t)(ROR32((uint32_t)c->x[4], 31) & 0xfffffffeull);
    c->x[5] = (uint32_t)((uint32_t)c->x[10] + 0x100ull);
    (void)(subs32(c, (uint32_t)c->x[5], (uint32_t)((uint32_t)c->x[4])));
    c->x[5] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[5]));
    c->x[12] = (uint32_t)((uint32_t)c->x[4] - (uint32_t)c->x[5]);
    c->x[4] = (uint32_t)((uint32_t)c->x[10] + 0x200ull);
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[4]));
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 31) & 0xfffffffeull);
    c->x[4] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x80ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[4] << 8));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[14] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x100ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[14] << 7));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x40ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[15] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x80ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[15] << 6));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x20ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[16] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x40ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[16] << 5));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[12])));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    c->x[13] = (uint32_t)((uint32_t)c->x[10] + 0x20ull);
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[13]));
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 31) & 0xfffffffeull);
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] + 0x8ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[13] << 4));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[11] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[11]));
    c->x[14] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[11]);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] + 0x10ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[14] << 3));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[12]));
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[11], 31) & 0xfffffffeull);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] + 0x4ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    c->x[12] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[12]));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[12]);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] + 0x8ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[13] << 2));
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[12]));
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[11], 31) & 0xfffffffeull);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] + 0x2ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    c->x[12] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)((uint32_t)c->x[12]));
    c->x[13] = (uint32_t)((COND_GT(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - (uint32_t)c->x[12]);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] + 0x4ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[13] << 1));
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[11], 31) & 0xfffffffeull);
    c->x[10] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[12]));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - 0x1ull);
    c->x[10] = (uint32_t)((COND_LT(c)) ? (uint32_t)c->x[10] : (uint32_t)(~0u));
    c->x[9] = (uint32_t)((COND_GE(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[9] + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & (uint32_t)c->x[9]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[10]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + ((uint32_t)c->x[9] >> 1));
    c->x[9] = (uint32_t)(0x3f000000ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    c->v[0] = (uint32_t)c->x[8];
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700530a838:;
    c->x[8] = (uint32_t)(0x7fc00000ull);
    c->v[0] = (uint32_t)c->x[8];
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_70053124b0(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    c->x[24] = (uint64_t)(0x700531c000ull);
    c->x[8] = (uint32_t)(0x4000ull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    { uint64_t ea = c->x[24] + 0xf50ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x2000ull);
    c->v[8] = VS32(0);
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[8]));
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[0], 20) & 0xfffff000ull);
    c->x[13] = (uint32_t)(0xc200ull);
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[22] = (uint64_t)(c->x[21] + c->x[9]);
    c->x[9] = (uint32_t)(0xc300ull);
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[25] = (uint64_t)(c->x[22] + c->x[9]);
    if (c->x[8] == 0) goto L_7005312590;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 6) & 1) != 0) goto L_70053128a8;
    if (((c->x[9] >> 7) & 1) != 0) goto L_7005312a44;
L_7005312520:;
    if (((c->x[9] >> 8) & 1) == 0) goto L_7005312584;
L_7005312524:;
    { uint64_t ea = c->x[8] + 0x50ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x104ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x51ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x105ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x52ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x106ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x53ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x107ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x54ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x108ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x55ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x109ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x56ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10aull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x57ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x58ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10cull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x59ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10dull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x5aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10eull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x5bull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10full; ST8(ea, (uint32_t)c->x[8]); }
L_7005312584:;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x60ull; ST64(ea, 0ull); }
    goto L_7005312594;
L_7005312590:;
    c->x[8] = (uint64_t)(0ull | c->x[21]);
L_7005312594:;
    c->x[9] = (uint64_t)(c->x[8] + ((uint64_t)(uint32_t)c->x[0] << 2));
    c->x[10] = (uint32_t)(0xa464ull);
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_70053125c0;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[20] << 2));
    c->x[9] = (uint32_t)(0xa46cull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005312640;
L_70053125c0:;
    c->x[0] = (uint64_t)(0x700531d000ull);
    c->x[1] = (uint64_t)(c->x[22] + c->x[13]);
    c->x[2] = (uint64_t)(c->x[19] + 0x98ull);
    { uint64_t ea = c->x[0] + 0x5e8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053125dcull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0x700531d000ull);
    c->x[23] = (uint32_t)(0xc1a0ull);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[0] + 0x5f0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[22] + c->x[23]);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053125fcull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + c->x[23]; c->v[0] = LD64(ea); }
    c->x[8] = (uint32_t)(0xc1a8ull);
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + c->x[8]; c->v[1] = LD32(ea); }
    c->x[10] = (uint32_t)(0x1ull);
    sv_fcvtl(c, 1, 0, 0, 0);
    c->x[8] = (uint64_t)(c->x[9] + (c->x[20] << 2));
    c->x[9] = (uint32_t)(0xa464ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    FP_SETD(1, simd_s2d(c, VSF32(1)));
    { uint64_t ea = c->x[8] + c->x[9]; ST32(ea, (uint32_t)c->x[10]); }
    c->x[10] = (uint32_t)(0xa46cull);
    c->x[9] = (uint32_t)(0xc220ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[22] + 0xc210ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + c->x[9]; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[8] + c->x[10]; ST32(ea, 0u); }
L_7005312640:;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 152; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    { uint64_t ea = c->x[19] + 168; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    c->x[8] = (uint32_t)(0xc304ull);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[9] = (uint32_t)(0xc308ull);
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    c->x[1] = (uint64_t)(c->x[21] + 0x10000ull);
    { uint64_t ea = c->x[22] + 0xc300ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[25] + 0x0ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[19] + 184; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[3] = b; }
    c->x[8] = (uint64_t)(c->x[22] + c->x[9]);
    { uint64_t ea = c->x[22] + 0xc310ull; ST128(ea, c->v[0]); }
    c->x[9] = (uint32_t)(0xc320ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[24] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[9] = (uint32_t)(0xc324ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0x620ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xc30cull);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, VS32(1)); }
    c->x[8] = (uint32_t)(0xc310ull);
    { uint64_t ea = c->x[19] + 0x624ull; c->v[1] = LD32(ea); }
    c->x[28] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[8] = (uint32_t)(0xc314ull);
    { uint64_t ea = c->x[22] + 0xc320ull; ST128(ea, c->v[0]); }
    c->x[27] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[8] = (uint32_t)(0xc318ull);
    c->x[23] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[26] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[8] = (uint32_t)(0xc31cull);
    c->x[9] = (uint32_t)(0xc32cull);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0xa0ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xc378ull);
    { uint64_t ea = c->x[22] + 0xc370ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[24] + 0x0ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0xb0ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[22] + c->x[8]; ST64(ea, c->x[10]); }
    c->x[8] = (uint32_t)(0xc3acull);
    c->x[10] = (uint32_t)(0x3f800000ull);
    { uint64_t ea = c->x[23] + 0x0ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0x628ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[22] + c->x[9]; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[19] + 0xc0ull; c->v[1] = LD32(ea); }
    c->x[9] = (uint32_t)(0xc328ull);
    { uint64_t ea = c->x[22] + 0xc3a0ull; ST128(ea, c->v[0]); }
    c->x[20] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[9] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint32_t)(0xa00ull);
    { uint64_t ea = c->x[29] - 8; ST64(ea, c->x[25]); }
    { uint64_t ea = c->x[28] + 0x0ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[27] + 0x0ull; ST32(ea, VS32(4)); }
    { uint64_t ea = c->x[22] + 0xc330ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + 0xc340ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + 0xc350ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + 0xc360ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + 0xc380ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[22] + 0xc390ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[26] + 0x0ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[22] + 0xc3b0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[20] + 0x0ull; ST32(ea, VS32(1)); }
L_7005312744:;
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x20ull));
    { uint64_t ea = c->x[9]; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); c->x[9] = ea + 32; }
    if (COND_NE(c)) goto L_7005312744;
    c->x[8] = (uint32_t)(0xc240ull);
    c->x[9] = (uint32_t)(0xc180ull);
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    c->x[21] = (uint64_t)(c->x[22] + c->x[9]);
    c->x[9] = (uint32_t)(0x2ull);
    { uint64_t ea = c->x[1] + 0x38ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0xc354ull);
    c->x[25] = (uint32_t)(0xc270ull);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint32_t)(0xc380ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, (uint32_t)c->x[9]); }
    c->x[8] = (uint32_t)(0xc278ull);
    c->x[9] = (uint64_t)(0x447a000000000000ull);
    { uint64_t ea = c->x[1] + 0x150ull; ST64(ea, c->x[21]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    c->x[3] = (uint64_t)(c->x[19] + 0x104ull);
    { uint64_t ea = c->x[22] + c->x[25]; ST64(ea, VS64(0)); }
    c->x[2] = (uint64_t)(0ull | 0x8000000000000001ull);
    c->x[4] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + c->x[8]; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[0] + 0x5f8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053127b0ull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[0] = 0x41f00000ull;
    { uint64_t ea = c->x[19] + 0xf8ull; c->v[1] = LD64(ea); }
    c->x[8] = (uint32_t)(0xc188ull);
    c->x[10] = (uint32_t)(0xc190ull);
    c->x[9] = (uint32_t)(0xc18cull);
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[21] + 0x0ull; ST64(ea, VS64(1)); }
    c->x[3] = (uint64_t)(c->x[22] + c->x[10]);
    c->x[2] = (uint64_t)(c->x[22] + c->x[25]);
    fp_op_s(c, FOP_DIV, 0, 8, 0);
    { uint64_t ea = c->x[19] + 0x100ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + c->x[9]; ST32(ea, 0u); }
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, (uint32_t)c->x[11]); }
    c->x[8] = (uint32_t)(0xc194ull);
    c->x[25] = (uint32_t)(0xc200ull);
    c->x[4] = (uint64_t)(c->x[22] + c->x[25]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[22] + c->x[8]; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[3] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0x600ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005312804ull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0x700531d000ull);
    c->x[2] = (uint64_t)(c->x[22] + c->x[25]);
    c->x[3] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[0] + 0x608ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 8; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005312824ull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[28] + 0x0ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xc330ull);
    { uint64_t ea = c->x[24] + 0x0ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x60ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x10ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->x[19] + 152; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[22] + c->x[8]; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->x[8] + 0x0ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xc334ull);
    { uint64_t ea = c->x[19] + 160; ST32(ea, VS32(2)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[27] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[23] + 0x0ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 168; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[22] + c->x[8]; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->x[8] + 0x0ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0xc338ull);
    { uint64_t ea = c->x[19] + 176; ST32(ea, VS32(2)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[26] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x0ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 184; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[22] + c->x[8]; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 192; ST32(ea, VS32(2)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
    c->pc = 0; return;
L_70053128a8:;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xa46cull);
    c->x[12] = (uint32_t)(0x1ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[19] + 0x98ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x9ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x99ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xaull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9aull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xbull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9bull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9cull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xdull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9dull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xeull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9eull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0xfull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x9full; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa0ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa1ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x12ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa2ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x13ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa3ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x14ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa4ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x15ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa5ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x16ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa6ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x17ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa7ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa8ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x19ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa9ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xaaull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xabull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1cull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xacull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1dull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xadull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1eull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xaeull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x1full; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xafull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb0ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x21ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb1ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x22ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb2ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x23ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb3ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x24ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb4ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x25ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb5ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x26ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb6ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x27ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb7ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb8ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x29ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb9ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbaull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbbull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2cull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbcull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2dull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbdull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2eull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbeull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2full; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xbfull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x30ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc0ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x31ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc1ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x32ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc2ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x33ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc3ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x34ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc4ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x35ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc5ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x36ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc6ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x37ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xc7ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] + ((uint64_t)(uint32_t)c->x[0] << 2));
    { uint64_t ea = c->x[10] + c->x[11]; ST32(ea, (uint32_t)c->x[12]); }
    if (((c->x[9] >> 7) & 1) == 0) goto L_7005312520;
L_7005312a44:;
    { uint64_t ea = c->x[8] + 0x44ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf8ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x45ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf9ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x46ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfaull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x47ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfbull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfcull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x49ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfdull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfeull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xffull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4cull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4dull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x101ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4eull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x102ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x4full; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x103ull; ST8(ea, (uint32_t)c->x[10]); }
    if (((c->x[9] >> 8) & 1) != 0) goto L_7005312524;
    goto L_7005312584;
}

void f_7005312da4(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x4000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_NE(c)) (void)subs64(c, c->x[8], c->x[1]); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_7005312dd0;
    { uint64_t ea = c->x[1] + 0x60ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005312de8;
    c->pc = 0; return;
L_7005312dd0:;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
L_7005312de8:;
    c->v[0] = 0x0ull;
    c->v[1] = ((u128)0x3f8000003f800000ull << 64 | 0x3f8000003f800000ull);
    c->x[8] = (uint64_t)(c->x[1] + 0x268ull);
    c->x[0] = (uint64_t)(c->x[1] + 0x200ull);
    { uint64_t ea = c->x[1] + 0x60ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[1] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 576; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 608; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 640; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 672; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[1] + 704; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->v[0] = 0x3f8000003f800000ull;
    { uint64_t ea = c->x[8] + 0x0ull; ST128(ea, c->v[1]); }
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[1] + 0x2bcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x3f800000ull);
    { uint64_t ea = c->x[1] + 0x280ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(0x1000000000ull);
    { uint64_t ea = c->x[1] + 0x2c8ull; ST64(ea, c->x[1]); }
    { uint64_t ea = c->x[1] + 0x278ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[1] + 0x288ull; ST64(ea, c->x[8]); }
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

void f_70053145c4(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->sp = (uint64_t)(c->sp - 0x220ull);
    { uint64_t ea = c->x[1] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[16] = a; c->v[7] = b; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[1] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[6] = a; c->v[5] = b; }
    c->nzcv = cmp_s(c, VSF32(16), VSF32(16));
    { uint64_t ea = c->x[1] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[3] = b; }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[1] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(7), VSF32(7));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(6), VSF32(6));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(5), VSF32(5));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(4), VSF32(4));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(3), VSF32(3));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(2), VSF32(2));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(1));
    if (COND_VS(c)) goto L_7005314658;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_7005314658;
    if (((c->x[8] >> 8) & 1) != 0) goto L_70053146c0;
    { uint64_t ea = c->x[2] + 0x60ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_70053146e0;
L_7005314644:;
    c->x[3] = (uint64_t)(c->x[2] + 0x78ull);
    c->sp = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    goto L_7005314718;
L_7005314658:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005314670ull; f_700531c720(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x20ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005314694ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531cea0ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x42eull);
    c->x[3] = (uint64_t)(LD64(0x700531ce18ull));
    c->x[3] = (uint64_t)(c->x[3] + 0xbbdull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x70053146b0ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->sp = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_70053146c0:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[2] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xd0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x8ull);
    goto L_7005314644;
L_70053146e0:;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[2] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[1]); }
    c->x[1] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xd0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x700531470cull; f_700531c350(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    goto L_7005314644;
L_7005314718:;
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x7005314740ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) == 0) goto L_70053147a4;
    { uint64_t ea = c->x[21] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0xcull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x8ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x10ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0xcull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x18ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x14ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x20ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x18ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x28ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x1cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x2cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x20ull; c->v[0] = LD32(ea); }
L_700531478c:;
    { uint64_t ea = c->x[20] + 0x30ull; ST32(ea, VS32(0)); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_700531c7e0(c); return;
L_70053147a4:;
    { uint64_t ea = c->x[21] + 0x0ull; c->v[3] = LD32(ea); }
    c->x[8] = (uint64_t)(c->x[20] + 0xd4ull);
    { uint64_t ea = c->x[22] + 0xa4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0xb4ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0xc4ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[21] + 0x4ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0xcull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[21] + 0x8ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[20] + 16; ST32(ea, VS32(3)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[21] + 0xcull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x18ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x14ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 32; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[21] + 0x18ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x28ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x1cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x2cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[21] + 0x20ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x34ull; ST32(ea, VS32(2)); }
L_70053147fc:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x40ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053147fc;
    goto L_700531478c;
}

void f_7005314aec(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, VS64(12)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[28]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x250ull);
    { uint64_t ea = c->x[2] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[12] = a; c->v[9] = b; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[2] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[11] = b; }
    c->nzcv = cmp_s(c, VSF32(9), VSF32(9));
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = COND_VC(c) ? cmp_s(c, VSF32(10), VSF32(10)) : 0x10000000ull;
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = COND_VC(c) ? cmp_s(c, VSF32(11), VSF32(11)) : 0x10000000ull;
    c->nzcv = COND_VC(c) ? cmp_s(c, VSF32(12), VSF32(12)) : 0x10000000ull;
    if (COND_VS(c)) goto L_7005314e80;
    { uint64_t ea = c->x[8] + 0x28ull; c->v[8] = LD32(ea); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 23) & 1) != 0) goto L_7005314f2c;
L_7005314b4c:;
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_7005314b5c;
    { uint64_t ea = c->x[21] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) != 0) goto L_7005314dd0;
L_7005314b5c:;
    { uint64_t ea = c->x[0] + 152; c->v[3] = LD128(ea); }
    { uint64_t ea = c->x[0] + 168; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[0] + 184; c->v[4] = LD128(ea); }
L_7005314b68:;
    c->v[1] = ((sa32 *)&c->v[3])[1];
    FP_SETD(7, simd_s2d(c, VSF32(2)));
    FP_SETD(0, simd_s2d(c, VSF32(3)));
    FP_SETD(17, simd_s2d(c, VSF32(4)));
    c->v[5] = 0x3ff0000000000000ull;
    c->v[19] = 0x3fd0000000000000ull;
    c->v[22] = 0xbfe0000000000000ull;
    FP_SETD(6, simd_s2d(c, VSF32(1)));
    c->v[1] = ((sa32 *)&c->v[3])[2];
    FP_SETD(16, simd_s2d(c, VSF32(1)));
    c->v[1] = ((sa32 *)&c->v[2])[1];
    FP_SETD(1, simd_s2d(c, VSF32(1)));
    c->v[2] = ((sa32 *)&c->v[2])[2];
    FP_SETD(3, simd_s2d(c, VSF32(2)));
    c->v[2] = ((sa32 *)&c->v[4])[1];
    fp_op_d(c, FOP_ADD, 21, 0, 1);
    c->v[4] = ((sa32 *)&c->v[4])[2];
    FP_SETD(20, simd_s2d(c, VSF32(4)));
    FP_SETD(18, simd_s2d(c, VSF32(2)));
    fp_op_d(c, FOP_ADD, 2, 21, 20);
    fp_op_d(c, FOP_ADD, 1, 1, 20);
    fp_op_d(c, FOP_ADD, 0, 0, 20);
    fp_op_d(c, FOP_ADD, 2, 2, 5);
    fp_op_d(c, FOP_MUL, 2, 2, 19);
    fp_fma_d(c, 0, 0, 4, 1, 22, 2);
    fp_fma_d(c, 0, 0, 0, 0, 22, 2);
    fp_fma_d(c, 0, 0, 1, 21, 22, 2);
    c->nzcv = cmp_d(c, VSF64(2), VSF64(4));
    if (COND_GT(c)) goto L_7005314d70;
    c->nzcv = cmp_d(c, VSF64(4), VSF64(0));
    if (COND_GT(c)) goto L_7005314fb4;
L_7005314be4:;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_LE(c)) goto L_7005315014;
    fp_op_d(c, FOP_SQRT, 2, 0, 0);
    c->nzcv = cmp_d(c, VSF64(2), VSF64(2));
    if (COND_VS(c)) goto L_7005314e04;
L_7005314bf8:;
    fp_op_d(c, FOP_DIV, 4, 19, 2);
    fp_op_d(c, FOP_SUB, 0, 16, 17);
    fp_op_d(c, FOP_MUL, 1, 0, 4);
    fp_op_d(c, FOP_ADD, 0, 3, 18);
    fp_op_d(c, FOP_ADD, 3, 6, 7);
    fp_op_d(c, FOP_MUL, 0, 0, 4);
    fp_op_d(c, FOP_MUL, 3, 3, 4);
L_7005314c14:;
    fp_op_d(c, FOP_MUL, 17, 3, 3);
    fp_fma_d(c, 0, 0, 17, 1, 1, 17);
    c->x[8] = (uint64_t)(0x3cb0000000000000ull);
    c->v[18] = c->x[8];
    FP_SETD(7, simd_s2d(c, VSF32(10)));
    FP_SETD(4, simd_s2d(c, VSF32(11)));
    FP_SETD(6, simd_s2d(c, VSF32(12)));
    FP_SETD(16, simd_s2d(c, VSF32(9)));
    fp_fma_d(c, 0, 0, 17, 2, 2, 17);
    fp_fma_d(c, 0, 0, 17, 0, 0, 17);
    c->nzcv = cmp_d(c, VSF64(17), VSF64(18));
    if (COND_LE(c)) goto L_7005314f6c;
    fp_op_d(c, FOP_DIV, 19, 5, 17);
    fp_op_d(c, FOP_MUL, 1, 1, 19);
    fp_op_d(c, FOP_NMUL, 17, 3, 19);
    fp_op_d(c, FOP_NMUL, 18, 2, 19);
    fp_op_d(c, FOP_NMUL, 19, 0, 19);
L_7005314c58:;
    fp_op_d(c, FOP_NMUL, 0, 7, 17);
    fp_fma_d(c, 0, 0, 0, 16, 1, 0);
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    fp_op_d(c, FOP_MUL, 21, 1, 7);
    fp_fma_d(c, 0, 0, 21, 16, 17, 21);
    fp_op_d(c, FOP_NMUL, 2, 7, 19);
    fp_fma_d(c, 0, 0, 2, 16, 18, 2);
    fp_op_d(c, FOP_MUL, 7, 18, 7);
    fp_fma_d(c, 0, 0, 7, 16, 19, 7);
    fp_fma_d(c, 0, 1, 0, 4, 18, 0);
    fp_fma_d(c, 0, 0, 21, 4, 19, 21);
    fp_fma_d(c, 0, 0, 2, 4, 1, 2);
    fp_fma_d(c, 0, 1, 0, 6, 19, 0);
    fp_fma_d(c, 0, 1, 3, 6, 18, 21);
    fp_fma_d(c, 0, 0, 2, 6, 17, 2);
    fp_fma_d(c, 0, 1, 21, 4, 17, 7);
    fp_fma_d(c, 0, 0, 1, 6, 1, 21);
    fp_op_d(c, FOP_MUL, 4, 3, 3);
    fp_fma_d(c, 0, 0, 4, 0, 0, 4);
    fp_fma_d(c, 0, 0, 4, 2, 2, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 6, 4, 4);
    { uint64_t ea = c->x[8] + 0x340ull; c->v[4] = LD64(ea); }
    c->nzcv = cmp_d(c, VSF64(6), VSF64(4));
    if (COND_LS(c)) goto L_7005314ce0;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[7] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(6), VSF64(7));
    if (COND_EQ(c)) goto L_7005314f84;
L_7005314ccc:;
    fp_op_d(c, FOP_DIV, 6, 5, 6);
    fp_op_d(c, FOP_MUL, 0, 0, 6);
    fp_op_d(c, FOP_MUL, 3, 3, 6);
    fp_op_d(c, FOP_MUL, 2, 2, 6);
    fp_op_d(c, FOP_MUL, 1, 1, 6);
L_7005314ce0:;
    fp_op_d(c, FOP_MUL, 6, 2, 2);
    fp_fma_d(c, 0, 0, 6, 3, 3, 6);
    c->nzcv = cmp_d(c, VSF64(0), 0);
    fp_fma_d(c, 0, 0, 6, 1, 1, 6);
    fp_op_d(c, FOP_SQRT, 6, 6, 6);
    if (COND_MI(c)) goto L_7005314ed0;
    c->v[9] = 0x0ull;
    c->nzcv = cmp_d(c, VSF64(6), VSF64(4));
    c->v[10] = 0x0ull;
    c->v[11] = 0x0ull;
    if (COND_HI(c)) goto L_7005314dac;
L_7005314d0c:;
    c->v[1] = 0xbff0000000000000ull;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_MI(c)) goto L_7005314f20;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(5));
    if (COND_GT(c)) goto L_7005314f7c;
L_7005314d20:;
    c->x[30] = 0x7005314d24ull; f_700531c7d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_d(c, FOP_ADD, 0, 0, 0);
L_7005314d28:;
    FP_SETD(1, simd_s2d(c, VSF32(8)));
    fp_op_d(c, FOP_MUL, 2, 0, 1);
    fp_op_d(c, FOP_MUL, 0, 9, 2);
    fp_op_d(c, FOP_MUL, 1, 10, 2);
    fp_op_d(c, FOP_MUL, 2, 11, 2);
    FP_SETS(0, simd_d2s(c, VSF64(0)));
    FP_SETS(1, simd_d2s(c, VSF64(1)));
    { uint64_t ea = c->x[19] + 0; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    FP_SETS(0, simd_d2s(c, VSF64(2)));
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(0)); }
L_7005314d50:;
    c->sp = (uint64_t)(c->sp + 0x250ull);
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[12] = LD64(ea); c->sp = c->sp + 96; }
    c->pc = 0; return;
L_7005314d70:;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(0));
    if (COND_LE(c)) goto L_7005314be4;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(1));
    if (COND_LE(c)) goto L_7005315014;
    fp_op_d(c, FOP_SQRT, 1, 2, 2);
    c->nzcv = cmp_d(c, VSF64(1), VSF64(1));
    if (COND_VS(c)) goto L_7005314e40;
L_7005314d8c:;
    fp_op_d(c, FOP_DIV, 0, 19, 1);
    fp_op_d(c, FOP_SUB, 2, 18, 3);
    fp_op_d(c, FOP_SUB, 4, 7, 6);
    fp_op_d(c, FOP_MUL, 3, 2, 0);
    fp_op_d(c, FOP_SUB, 2, 16, 17);
    fp_op_d(c, FOP_MUL, 2, 2, 0);
    fp_op_d(c, FOP_MUL, 0, 4, 0);
    goto L_7005314c14;
L_7005314dac:;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[4] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(6), VSF64(4));
    if (COND_EQ(c)) goto L_7005315070;
    fp_op_d(c, FOP_DIV, 4, 5, 6);
L_7005314dc0:;
    fp_op_d(c, FOP_MUL, 9, 3, 4);
    fp_op_d(c, FOP_MUL, 10, 2, 4);
    fp_op_d(c, FOP_MUL, 11, 1, 4);
    goto L_7005314d0c;
L_7005314dd0:;
    c->x[20] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005314ddcull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 8; c->v[1] = LD128(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[21] + 24; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 40; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005314df8ull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 0x10ull; c->v[4] = LD128(ea); }
    goto L_7005314b68;
L_7005314e04:;
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(7)); ST64(ea + 8, VS64(6)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(3)); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(17)); }
    { uint64_t ea = c->x[29] - 40; ST64(ea, VS64(18)); }
    c->x[30] = 0x7005314e1cull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 40; c->v[18] = LD64(ea); }
    c->v[19] = 0x3fd0000000000000ull;
    c->v[5] = 0x3ff0000000000000ull;
    { uint64_t ea = c->sp + 0x30ull; c->v[17] = LD64(ea); }
    c->v[2] = VS64(0);
    { uint64_t ea = c->sp + 0x0ull; c->v[7] = LD64(ea); }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[6] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 0x20ull; c->v[16] = LD64(ea); }
    goto L_7005314bf8;
L_7005314e40:;
    c->v[0] = VS64(2);
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(7)); ST64(ea + 8, VS64(6)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(3)); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(17)); }
    { uint64_t ea = c->x[29] - 40; ST64(ea, VS64(18)); }
    c->x[30] = 0x7005314e5cull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 40; c->v[18] = LD64(ea); }
    c->v[19] = 0x3fd0000000000000ull;
    c->v[5] = 0x3ff0000000000000ull;
    { uint64_t ea = c->sp + 0x30ull; c->v[17] = LD64(ea); }
    c->v[1] = VS64(0);
    { uint64_t ea = c->sp + 0x0ull; c->v[7] = LD64(ea); }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[6] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 0x20ull; c->v[16] = LD64(ea); }
    goto L_7005314d8c;
L_7005314e80:;
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[30] = 0x7005314e8cull; f_700531c720(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x40ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x50ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005314eb0ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531cea0ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x42eull);
    c->x[3] = (uint64_t)(LD64(0x700531ce40ull));
    c->x[3] = (uint64_t)(c->x[3] + 0xed3ull);
    c->x[0] = (uint64_t)(c->sp + 0x40ull);
    c->x[30] = 0x7005314eccull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005314d50;
L_7005314ed0:;
    c->nzcv = cmp_d(c, VSF64(6), VSF64(4));
    if (COND_LS(c)) goto L_700531509c;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[4] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(6), VSF64(4));
    if (COND_EQ(c)) goto L_70053150c8;
    fp_op_d(c, FOP_DIV, 4, 5, 6);
    c->v[3] = VS64(3) ^ 0x8000000000000000ull;
    c->v[2] = VS64(2) ^ 0x8000000000000000ull;
    c->v[1] = VS64(1) ^ 0x8000000000000000ull;
    fp_op_d(c, FOP_MUL, 9, 4, 3);
    fp_op_d(c, FOP_MUL, 10, 4, 2);
    fp_op_d(c, FOP_MUL, 11, 4, 1);
L_7005314f04:;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(5));
    if (COND_GT(c)) goto L_7005314f20;
    c->v[1] = 0xbff0000000000000ull;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_MI(c)) goto L_7005314f7c;
    c->v[0] = VS64(0) ^ 0x8000000000000000ull;
    goto L_7005314d20;
L_7005314f20:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x440ull; c->v[0] = LD64(ea); }
    goto L_7005314d28;
L_7005314f2c:;
    c->x[8] = (uint64_t)(c->sp + 0x40ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x50ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005314f50ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531ce88ull));
    c->x[1] = (uint64_t)(c->x[1] + 0xcb5ull);
    c->x[0] = (uint64_t)(c->sp + 0x40ull);
    c->x[30] = 0x7005314f64ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005314b4c;
L_7005314f6c:;
    c->v[17] = VS64(3) ^ 0x8000000000000000ull;
    c->v[18] = VS64(2) ^ 0x8000000000000000ull;
    c->v[19] = VS64(0) ^ 0x8000000000000000ull;
    goto L_7005314c58;
L_7005314f7c:;
    c->v[0] = 0x0ull;
    goto L_7005314d28;
L_7005314f84:;
    c->x[8] = (uint64_t)(0x1fe0000000000000ull);
    c->v[6] = c->x[8];
    fp_op_d(c, FOP_MUL, 0, 0, 6);
    fp_op_d(c, FOP_MUL, 3, 3, 6);
    fp_op_d(c, FOP_MUL, 2, 2, 6);
    fp_op_d(c, FOP_MUL, 1, 1, 6);
    fp_op_d(c, FOP_MUL, 6, 3, 3);
    fp_fma_d(c, 0, 0, 6, 0, 0, 6);
    fp_fma_d(c, 0, 0, 6, 2, 2, 6);
    fp_fma_d(c, 0, 0, 6, 1, 1, 6);
    fp_op_d(c, FOP_SQRT, 6, 6, 6);
    goto L_7005314ccc;
L_7005314fb4:;
    c->nzcv = cmp_d(c, VSF64(4), VSF64(1));
    if (COND_LE(c)) goto L_7005315014;
    { uint64_t ea = c->sp + 8; ST64(ea, VS64(6)); ST64(ea + 8, VS64(3)); }
    fp_op_d(c, FOP_SQRT, 3, 4, 4);
    { uint64_t ea = c->x[29] - 40; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(17)); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, VS64(7)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(16)); }
    c->nzcv = cmp_d(c, VSF64(3), VSF64(3));
    if (COND_VS(c)) goto L_70053150b8;
L_7005314fdc:;
    c->v[0] = 0x3fd0000000000000ull;
    { uint64_t ea = c->x[29] - 40; c->v[1] = LD64(ea); }
    fp_op_d(c, FOP_DIV, 5, 0, 3);
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->sp + 0x20ull; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_SUB, 0, 1, 0);
    fp_op_d(c, FOP_MUL, 1, 0, 5);
    { uint64_t ea = c->sp + 0; u128 a = LD64(ea), b = LD64(ea + 8); c->v[2] = a; c->v[0] = b; }
    fp_op_d(c, FOP_ADD, 0, 0, 2);
    fp_op_d(c, FOP_MUL, 2, 0, 5);
    { uint64_t ea = c->sp + 0x30ull; c->v[0] = LD64(ea); }
    fp_op_d(c, FOP_ADD, 0, 4, 0);
    fp_op_d(c, FOP_MUL, 0, 0, 5);
    goto L_7005315068;
L_7005315014:;
    fp_op_d(c, FOP_SQRT, 0, 1, 1);
    { uint64_t ea = c->x[29] - 40; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(17)); }
    { uint64_t ea = c->sp + 8; ST64(ea, VS64(6)); ST64(ea + 8, VS64(3)); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, VS64(7)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(16)); }
    c->nzcv = cmp_d(c, VSF64(0), VSF64(0));
    if (COND_VS(c)) goto L_70053150ac;
L_7005315034:;
    c->v[1] = 0x3fd0000000000000ull;
    { uint64_t ea = c->sp + 0x20ull; c->v[3] = LD64(ea); }
    fp_op_d(c, FOP_DIV, 5, 1, 0);
    { uint64_t ea = c->sp + 0; u128 a = LD64(ea), b = LD64(ea + 8); c->v[2] = a; c->v[1] = b; }
    { uint64_t ea = c->x[29] - 40; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_SUB, 1, 2, 1);
    { uint64_t ea = c->sp + 0x30ull; c->v[2] = LD64(ea); }
    fp_op_d(c, FOP_ADD, 2, 3, 2);
    fp_op_d(c, FOP_MUL, 3, 2, 5);
    { uint64_t ea = c->sp + 0x10ull; c->v[2] = LD64(ea); }
    fp_op_d(c, FOP_MUL, 1, 1, 5);
    fp_op_d(c, FOP_ADD, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 5);
L_7005315068:;
    c->v[5] = 0x3ff0000000000000ull;
    goto L_7005314c14;
L_7005315070:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x2d8ull; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
    fp_op_d(c, FOP_MUL, 4, 2, 2);
    fp_fma_d(c, 0, 0, 4, 3, 3, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    fp_op_d(c, FOP_DIV, 4, 5, 4);
    goto L_7005314dc0;
L_700531509c:;
    c->v[9] = 0x0ull;
    c->v[10] = 0x0ull;
    c->v[11] = 0x0ull;
    goto L_7005314f04;
L_70053150ac:;
    c->v[0] = VS64(1);
    c->x[30] = 0x70053150b4ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005315034;
L_70053150b8:;
    c->v[0] = VS64(4);
    c->x[30] = 0x70053150c0ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[3] = VS64(0);
    goto L_7005314fdc;
L_70053150c8:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x3c0ull; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
    fp_op_d(c, FOP_MUL, 4, 2, 2);
    fp_fma_d(c, 0, 0, 4, 3, 3, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    fp_op_d(c, FOP_DIV, 4, 5, 4);
    fp_op_d(c, FOP_MUL, 9, 3, 4);
    fp_op_d(c, FOP_MUL, 10, 2, 4);
    fp_op_d(c, FOP_MUL, 11, 1, 4);
    goto L_7005314f04;
}

void f_70053156f4(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[21]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x220ull);
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 23) & 1) != 0) goto L_7005315754;
L_7005315710:;
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005315720;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 6) & 1) != 0) goto L_700531579c;
L_7005315720:;
    { uint64_t ea = c->x[0] + 152; c->v[0] = LD128(ea); }
    c->x[8] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[1] + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[0] + 168; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[1] + 0x10ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[0] + 184; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[1] + 0x20ull; ST128(ea, c->v[0]); }
L_700531573c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->sp = (uint64_t)(c->sp + 0x220ull);
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005315754:;
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x20ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[0]); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531577cull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531ce88ull));
    c->x[1] = (uint64_t)(c->x[1] + 0xcb5ull);
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x7005315790ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    goto L_7005315710;
L_700531579c:;
    c->x[19] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[8]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053157b0ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 8; c->v[0] = LD128(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[20] + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[21] + 24; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[20] + 0x10ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[21] + 40; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[20] + 0x20ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x70053157d0ull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x1ull);
    goto L_700531573c;
}

void f_70053157d8(Cpu *c) {
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[9] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[1] >> 31) & 1)) & 0xfffffffc00000000ull) | (ROR64(c->x[1], 62) & 0x3fffffffcull));
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[2] & 0x1ull));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)(~(uint32_t)c->x[8]));
    { uint64_t ea = c->x[0] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
}

void f_7005315804(Cpu *c) {
    c->pc = 0; return;
}

void f_7005315808(Cpu *c) {
    c->pc = 0; return;
}

void f_700531580c(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x14ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xffff0fffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] << 12));
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x94ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x98ull; ST8(ea, (uint32_t)c->x[8]); }
    c->pc = 0; return;
}

void f_7005315848(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    if (c->x[8] == 0) goto L_700531585c;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 10) & 1) != 0) goto L_700531586c;
L_700531585c:;
    { uint64_t ea = c->x[2] + 0x70ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->pc = c->x[3]; rt_dispatch(c); c->pc = 0; return;
L_700531586c:;
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(c->x[2] + 0x78ull);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[8]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005315890ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[21] + 0x40ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_700531c7e0(c); return;
}

void f_7005315ca0(Cpu *c) {
    { uint64_t ea = c->x[2] + 0x0ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xae0ull);
    { uint64_t ea = c->x[1] + 0x0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[3] + 0x0ull; c->v[3] = LD128(ea); }
    VW(vu8, 1, 6, SHUF(VREG(vu8, 3), VREG(vu8, 3), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    ((sa64 *)&c->v[0])[1] = ((sa64 *)&c->v[0])[0];
    { uint64_t ea = c->x[8] + 0x150ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x400ull; c->v[5] = LD64(ea); }
    VW(vu64, 1, 2, SHUF(VREG(vu64, 2), VREG(vu64, 2), 0, 0));
    { uint64_t ea = c->x[8] + 0x3f0ull; c->v[7] = LD64(ea); }
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 0), VREG(vf32, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 1), VREG(vf32, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 2, VREG(vf32, 1), VREG(vf32, 1), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 4, SHUF(VQ(vf32, 0, 2), VQ(vf32, 0, 2), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 2), VQ(vf32, 0, 2), 1, 5, 2, 2), (vf32){});
    VW(vu32, 0, 2, SHUF(VREG(vu32, 2), VREG(vu32, 2), 2, 2, 2, 2));
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 4), (vf32){});
    VW(vu8, 0, 4, SHUF(VREG(vu8, 3), VREG(vu8, 6), 4, 5, 6, 7, 16, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0));
    VW(vu8, 1, 6, SHUF(VREG(vu8, 1), VREG(vu8, 1), 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19));
    ((sa64 *)&c->v[4])[1] = ((sa64 *)&c->v[3])[0];
    ((sa64 *)&c->v[6])[1] = ((sa64 *)&c->v[1])[0];
    SV_FOP_S(FOP_MUL, 0, 5, VQ(vf32, 0, 5), VQ(vf32, 0, 2), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 5, VQ(vf32, 0, 7), VQ(vf32, 0, 5), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 1), VREG(vf32, 4), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 6, VREG(vf32, 6), VREG(vf32, 3), (vf32){});
    SV_FOP_S(FOP_MUL, 0, 5, VQ(vf32, 0, 2), VQ(vf32, 0, 5), (vf32){});
    SV_FOP_S(FOP_SUB, 1, 4, VREG(vf32, 6), VREG(vf32, 4), (vf32){});
    { uint64_t ea = c->x[8] + 0x3e0ull; c->v[6] = LD64(ea); }
    SV_FOP_S(FOP_ADD, 0, 5, VQ(vf32, 0, 6), VQ(vf32, 0, 5), (vf32){});
    VW(vu8, 1, 6, SHUF(VREG(vu8, 4), VREG(vu8, 4), 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19));
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 5), (vf32){});
    ((sa32 *)&c->v[4])[1] = (uint32_t)0ull;
    { uint64_t ea = c->x[8] + 0x60ull; c->v[5] = LD64(ea); }
    ((sa64 *)&c->v[6])[1] = ((sa64 *)&c->v[4])[0];
    SV_FOP_S(FOP_ADD, 0, 2, VQ(vf32, 0, 5), VQ(vf32, 0, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 1), VREG(vf32, 3), (vf32){});
    VW(vu64, 1, 5, VREG(vu64, 2) | VREG(vu64, 2));
    SV_FOP_S(FOP_MADD, 1, 6, VREG(vf32, 6), VREG(vf32, 1), vsplat_s(VREG(vf32, 3), 3, 1));
    SV_FOP_S(FOP_ADD, 0, 1, SHUF(VQ(vf32, 0, 4), VQ(vf32, 0, 4), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 4), VQ(vf32, 0, 4), 1, 5, 2, 2), (vf32){});
    VW(vu8, 1, 4, SHUF(VREG(vu8, 4), VREG(vu8, 4), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    ((sa64 *)&c->v[5])[1] = ((sa64 *)&c->v[2])[0];
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), vsplat_s(VREG(vf32, 3), 3, 0), (vf32){});
    SV_FOP_S(FOP_ADD, 0, 1, VQ(vf32, 0, 1), VQ(vf32, 0, 4), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 6, VREG(vf32, 6), VREG(vf32, 3), VREG(vf32, 5));
    SV_FOP_S(FOP_SUB, 0, 1, VQ(vf32, 0, 2), VQ(vf32, 0, 1), (vf32){});
    { uint64_t ea = c->x[3] + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[4] = a; c->v[5] = b; }
    ((sa32 *)&c->v[6])[3] = ((sa32 *)&c->v[1])[0];
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 6), VREG(vf32, 6), (vf32){});
    VW(vu8, 1, 2, SHUF(VREG(vu8, 1), VREG(vu8, 1), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    SV_FOP_S(FOP_ADD, 0, 1, SHUF(VQ(vf32, 0, 1), VQ(vf32, 0, 2), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 1), VQ(vf32, 0, 2), 1, 5, 2, 2), (vf32){});
    { uint64_t ea = c->x[0] + 0x0ull; c->v[2] = LD128(ea); }
    SV_FOP_S(FOP_ADD, 0, 1, SHUF(VQ(vf32, 0, 1), VQ(vf32, 0, 1), 0, 4, 2, 2), SHUF(VQ(vf32, 0, 1), VQ(vf32, 0, 1), 1, 5, 2, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 0, VREG(vf32, 0), VREG(vf32, 2), (vf32){});
    SV_FOP_S(FOP_SQRT, 0, 1, VQ(vf32, 0, 1), VQ(vf32, 0, 1), (vf32){});
    c->v[2] = ((sa32 *)&c->v[0])[1];
    FP_SETD(2, simd_s2d(c, VSF32(2)));
    c->v[3] = ((sa32 *)&c->v[0])[2];
    FP_SETD(0, simd_s2d(c, VSF32(0)));
    FP_SETD(3, simd_s2d(c, VSF32(3)));
    fp_op_d(c, FOP_ADD, 0, 4, 0);
    ((sa64 *)&c->v[1])[1] = ((sa64 *)&c->v[1])[0];
    SV_FOP_S(FOP_DIV, 1, 1, VREG(vf32, 6), VREG(vf32, 1), (vf32){});
    { uint64_t ea = c->x[3] + 0x20ull; c->v[6] = LD64(ea); }
    { uint64_t ea = c->x[3] + 0x0ull; ST128(ea, c->v[1]); }
    fp_op_d(c, FOP_ADD, 1, 5, 2);
    { uint64_t ea = c->x[3] + 16; ST64(ea, VS64(0)); ST64(ea + 8, VS64(1)); }
    fp_op_d(c, FOP_ADD, 0, 6, 3);
    { uint64_t ea = c->x[3] + 0x20ull; ST64(ea, VS64(0)); }
    c->pc = 0; return;
}

void f_7005315f68(Cpu *c) {
    { uint64_t ea = c->x[1] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[3] = b; }
    { uint64_t ea = c->x[0] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[2] = b; }
    fp_op_s(c, FOP_SUB, 5, 3, 2);
    { uint64_t ea = c->x[0] + 0x8ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 6, 1, 4);
    { uint64_t ea = c->x[1] + 0x8ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 7, 1, 3);
    fp_op_s(c, FOP_MUL, 1, 5, 5);
    fp_fma_s(c, 0, 0, 1, 6, 6, 1);
    fp_fma_s(c, 0, 0, 1, 7, 7, 1);
    fp_op_s(c, FOP_SQRT, 1, 1, 1);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_HI(c)) goto L_7005315fb0;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[8]); }
    goto L_7005315fd8;
L_7005315fb0:;
    c->v[16] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 16, 16, 1);
    fp_op_s(c, FOP_MUL, 6, 6, 16);
    fp_op_s(c, FOP_MUL, 5, 5, 16);
    fp_op_s(c, FOP_MUL, 7, 7, 16);
    fp_fma_s(c, 0, 0, 4, 0, 6, 4);
    fp_fma_s(c, 0, 0, 2, 0, 5, 2);
    fp_fma_s(c, 0, 0, 5, 0, 7, 3);
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(4)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(5)); }
L_7005315fd8:;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    c->x[0] = (uint32_t)((COND_HI(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = 0; return;
}

void f_7005315fe4(Cpu *c) {
    { uint64_t ea = c->x[2] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[6] = a; c->v[7] = b; }
    { uint64_t ea = c->x[1] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    fp_op_s(c, FOP_MUL, 26, 1, 7);
    { uint64_t ea = c->x[2] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[4] = b; }
    fp_op_s(c, FOP_MUL, 16, 1, 4);
    { uint64_t ea = c->x[2] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_MUL, 19, 1, 6);
    { uint64_t ea = c->x[1] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[20] = b; }
    fp_fma_s(c, 0, 0, 16, 0, 2, 16);
    { uint64_t ea = c->x[1] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[23] = a; c->v[24] = b; }
    fp_op_s(c, FOP_MUL, 27, 6, 24);
    { uint64_t ea = c->x[1] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[17] = a; c->v[18] = b; }
    fp_fma_s(c, 0, 0, 19, 0, 3, 19);
    fp_fma_s(c, 0, 0, 0, 0, 5, 26);
    fp_op_s(c, FOP_MUL, 22, 7, 24);
    fp_fma_s(c, 0, 0, 22, 23, 5, 22);
    fp_op_s(c, FOP_MUL, 21, 4, 1);
    fp_fma_s(c, 0, 0, 21, 18, 2, 21);
    fp_op_s(c, FOP_MUL, 25, 6, 1);
    fp_fma_s(c, 0, 0, 25, 18, 3, 25);
    fp_op_s(c, FOP_MUL, 1, 7, 1);
    fp_fma_s(c, 0, 0, 1, 18, 5, 1);
    fp_op_s(c, FOP_MUL, 4, 4, 24);
    fp_fma_s(c, 0, 0, 2, 23, 2, 4);
    { uint64_t ea = c->x[2] + 0x20ull; c->v[6] = LD32(ea); }
    { uint64_t ea = c->x[2] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[18] = b; }
    { uint64_t ea = c->x[1] + 0x20ull; c->v[7] = LD32(ea); }
    fp_fma_s(c, 0, 0, 3, 23, 3, 27);
    fp_fma_s(c, 0, 0, 19, 17, 18, 19);
    fp_fma_s(c, 0, 0, 16, 17, 4, 16);
    fp_fma_s(c, 0, 0, 0, 17, 6, 0);
    fp_fma_s(c, 0, 0, 17, 20, 4, 21);
    fp_fma_s(c, 0, 0, 21, 20, 18, 25);
    fp_fma_s(c, 0, 0, 1, 20, 6, 1);
    fp_fma_s(c, 0, 0, 2, 7, 4, 2);
    fp_fma_s(c, 0, 0, 3, 7, 18, 3);
    { uint64_t ea = c->x[0] + 8; ST32(ea, VS32(0)); ST32(ea + 4, VS32(17)); }
    fp_fma_s(c, 0, 0, 0, 7, 6, 22);
    { uint64_t ea = c->x[0] + 0; ST32(ea, VS32(16)); ST32(ea + 4, VS32(19)); }
    { uint64_t ea = c->x[0] + 16; ST32(ea, VS32(21)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->x[0] + 24; ST32(ea, VS32(2)); ST32(ea + 4, VS32(3)); }
    { uint64_t ea = c->x[0] + 0x20ull; ST32(ea, VS32(0)); }
    c->pc = 0; return;
}

void f_7005316090(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(c->x[3] & 0xffffffffull);
    c->x[2] = (uint64_t)(0ull | c->x[4]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053160bcull; f_700531c258(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[9] = (uint64_t)(0xffffffffffffffffull);
    c->x[20] = (uint64_t)(c->x[19] + 0x128ull);
    { uint64_t ea = c->x[19] + 312; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(LD64(0x700531ced8ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x4e0ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x150ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint64_t)(LD64(0x700531ced0ull));
    c->x[9] = (uint64_t)(c->x[9] + 0xc58ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint64_t)(0ull | 0xffffffff00000000ull);
    c->x[1] = (uint64_t)(c->sp + 0x4ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x148ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x158ull; ST32(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 4; ST32(ea, (uint32_t)c->x[22]); ST32(ea + 4, (uint32_t)c->x[21]); }
    { uint64_t ea = c->x[19] + 296; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x80ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316114ull; f_700531beb0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    (void)(subs32(c, (uint32_t)c->x[22], 0x17ull));
    if (COND_NE(c)) goto L_7005316120;
    { uint64_t ea = c->x[19] + 0x134ull; ST32(ea, 0u); }
L_7005316120:;
    { uint64_t ea = c->x[19] + 0x60ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_70053161f8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005316210ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531623c;
    c->x[8] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005316220ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x7005316228ull; f_700531c308(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005316254;
L_700531622c:;
    c->x[19] = (uint32_t)(0u | 0u);
L_7005316230:;
    c->x[0] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x7005316238ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005316240;
L_700531623c:;
    c->x[19] = (uint32_t)(0u | 0u);
L_7005316240:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[19]);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
L_7005316254:;
    c->x[8] = (uint64_t)(LD64(0x700531cf38ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x6a0ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xacull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    if (c->x[0] == 0) goto L_70053162c8;
    c->x[1] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x7005316274ull; f_700531c750(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_700531622c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053162cc;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_70053162cc;
    { uint64_t ea = c->x[9] + 0x280ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, c->x[9]); }
    if (c->x[9] == 0) goto L_70053162d0;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x700531629cull; f_700531c4d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[1] = 0x3f000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_MI(c)) goto L_700531622c;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x70053162b0ull; f_700531c4e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_700531622c;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x70053162bcull; f_700531c4e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531622c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    goto L_70053162cc;
L_70053162c8:;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_70053162cc:;
    if (c->x[8] == 0) goto L_700531632c;
L_70053162d0:;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x440ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] != 0) goto L_700531622c;
    { uint64_t ea = c->x[9] + 0x1c8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, c->x[9]); }
    if (c->x[9] == 0) goto L_70053162fc;
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x70053162f0ull; f_700531c5a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_700531622c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700531632c;
L_70053162fc:;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700531632c;
    { uint64_t ea = c->x[9] + 0xf0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, c->x[9]); }
    if (c->x[9] == 0) goto L_7005316330;
    c->x[8] = (uint64_t)(c->sp + 0xcull);
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x700531631cull; f_700531c450(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x9ull));
    if (COND_EQ(c)) goto L_700531622c;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_700531632c:;
    if (c->x[8] == 0) goto L_7005316354;
L_7005316330:;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316354;
    { uint64_t ea = c->x[8] + 0x158ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, c->x[8]); }
    if (c->x[8] == 0) goto L_7005316354;
    c->x[1] = (uint32_t)(0x2dull);
    c->x[0] = (uint64_t)(c->x[29] + 0x18ull);
    c->x[30] = 0x7005316350ull; f_700531c598(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_700531622c;
L_7005316354:;
    c->x[19] = (uint32_t)(0x1ull);
    goto L_7005316230;
}

void f_7005316fcc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xc0ull);
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x60ull);
    { uint64_t ea = c->x[1] + 0x10ull; uint64_t v = LD32(ea); c->x[24] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[24], 0x1ull));
    if (COND_LT(c)) goto L_7005317060;
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[25] = (uint64_t)(0ull | 0ull);
    c->x[26] = (uint32_t)(0xc8ull);
    c->x[22] = (uint32_t)(0x24ull);
    c->x[27] = (uint32_t)(0x30ull);
    c->x[28] = (uint64_t)(LD64(0x700531cec8ull));
    c->x[28] = (uint64_t)(c->x[28] + 0x150ull);
L_700531701c:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[25], (uint64_t)(c->x[9])));
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)((COND_CC(c)) ? c->x[25] : (uint64_t)(0ull));
    c->x[10] = (uint64_t)(0ull + c->x[9] * c->x[26]);
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x13ull));
    if (COND_HI(c)) goto L_7005317050;
    c->x[11] = (uint64_t)(LD64(0x700531ce08ull));
    { uint64_t ea = c->x[28] + c->x[10]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] + (c->x[12] << 2));
    c->pc = c->x[11]; rt_dispatch(c); c->pc = 0; return;
L_7005317050:;
    c->x[25] = (uint64_t)(c->x[25] + 0x1ull);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[25])));
    if (COND_NE(c)) goto L_700531701c;
    goto L_7005317060;
L_7005317060:;
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xc0ull);
    c->pc = 0; return;
}

void f_7005317080(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xc0ull);
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x90ull);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053170a0ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053170d4;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->x[29] - 48; ST64(ea, c->x[8]); }
    c->x[2] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[30] = 0x70053170d0ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_70053170e8;
L_70053170d4:;
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xc0ull);
    c->pc = 0; return;
L_70053170e8:;
    c->x[1] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[1] + 0x988ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x24ull);
    c->x[0] = (uint64_t)(c->sp + 0x3cull);
    c->x[30] = 0x7005317100ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x3cull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317110ull; f_7005318d80(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 60; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 72; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x0ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531cec0ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x7bcull);
    c->x[8] = (uint64_t)((COND_VC(c)) ? c->x[22] : (uint64_t)(c->x[8]));
    { uint64_t ea = c->sp + 88; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->sp + 80; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 40; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[8] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[4] = b; }
    { uint64_t ea = c->sp + 0x44ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 32; ST32(ea, VS32(0)); ST32(ea + 4, VS32(4)); }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 16; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 48; ST32(ea, VS32(3)); ST32(ea + 4, VS32(0)); }
    if (COND_VS(c)) goto L_70053171f8;
    c->x[1] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[2] = (uint64_t)(c->x[29] - 0xcull);
    c->x[3] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317170ull; f_7005313838(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[2] = (uint64_t)(c->x[29] - 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005317184ull; f_700531c378(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005317184:;
    { uint64_t ea = c->x[20] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053171b8;
    c->x[0] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x7005317198ull; f_70053154cc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0xcull);
    c->x[2] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053171a8ull; f_7005314aec(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053171b4ull; f_700531c348(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053170d4;
L_70053171b8:;
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x20ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 40; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x30ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 48; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[29] - 36; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[29] - 28; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[29] - 24; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[29] - 16; ST32(ea, VS32(0)); }
    c->x[30] = 0x70053171f4ull; f_70053145c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053170d4;
L_70053171f8:;
    c->x[0] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x7005317204ull; f_70053154cc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0xcull);
    c->x[2] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317214ull; f_7005314aec(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317220ull; f_700531c348(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317184;
}

void f_70053175c4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x1f0ull);
    { uint64_t ea = c->sp + 0x190ull; ST64(ea, VS64(10)); }
    { uint64_t ea = c->sp + 416; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 432; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 448; ST64(ea, c->x[28]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 464; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 480; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x1b0ull);
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_70053175fc;
    { uint64_t ea = c->x[0] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[8] + 0x340ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 4) & 1) != 0) goto L_7005317624;
L_70053175fc:;
    c->x[19] = (uint32_t)(0u | 0u);
L_7005317600:;
    { uint64_t ea = c->sp + 416; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    c->x[0] = (uint32_t)((uint32_t)c->x[19] & 0x1ull);
    { uint64_t ea = c->sp + 0x190ull; c->v[10] = LD64(ea); }
    { uint64_t ea = c->sp + 480; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 464; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 448; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 432; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x1f0ull);
    c->pc = 0; return;
L_7005317624:;
    c->x[0] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[8] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x7005317630ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_70053177bc;
    c->x[30] = 0x700531763cull; f_700531c488(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 24; ST64(ea, c->x[0]); }
    if (c->x[0] == 0) goto L_70053177bc;
    c->x[0] = (uint64_t)(c->x[29] - 0x18ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x2cull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005317654ull; f_700531c3a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053177bc;
    { uint64_t ea = c->x[29] - 44; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->x[29] - 36; c->v[10] = LD32(ea); }
    c->x[20] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x700531766cull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->nzcv = cmp_s(c, VSF32(8), VSF32(8));
    if (COND_VS(c)) goto L_70053175fc;
    c->x[8] = (uint32_t)(0xbf800000ull);
    c->x[22] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, 0ull); }
    c->x[0] = (uint64_t)(c->x[20] + 0x98ull);
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, 0u); }
    c->x[2] = (uint32_t)(0x7cull);
    c->x[23] = (uint64_t)(c->x[21] + 0x2b4ull);
    { uint64_t ea = c->sp + 0x28ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 80; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 68; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x60ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x64ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x90ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x98ull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->sp + 112; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 128; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[30] = 0x70053176bcull; f_700531c7e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[9] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->sp + 0x120ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x11cull; ST32(ea, (uint32_t)c->x[22]); }
    c->x[20] = (uint64_t)(c->x[20] + 0x128ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x9cull; ST32(ea, 0u); }
    c->x[1] = (uint32_t)(0x20ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(LD64(0x700531cf20ull));
    c->x[9] = (uint32_t)(0x11ull);
    { uint64_t ea = c->sp + 0x150ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x158ull; ST64(ea, c->x[22]); }
    { uint64_t ea = c->sp + 0x160ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x68ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->sp + 0x178ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->sp + 360; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[8] + 0x990ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 16; ST32(ea, VS32(8)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->sp + 0x18ull; ST32(ea, VS32(10)); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 28; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[21] + 0x2bcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x24ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531773cull; f_70053157d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x138ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x181ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x13cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(((uint32_t)c->x[8] & 0xfffff000ull) | ((((uint32_t)c->x[8] & 0xfffff000ull) | ((uint32_t)c->x[10] & 0xfffull)) & 0xfffull));
    { uint64_t ea = c->sp + 0x138ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0xfff4ffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[8]);
    { uint64_t ea = c->sp + 0x13cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005317764ull; f_700531c758(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x700531776cull; f_700531c490(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005317778ull; f_700531580c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x120ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x8cull; ST32(ea, (uint32_t)c->x[22]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    { uint64_t ea = c->sp + 0x120ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005317794ull; f_700531c300(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->x[8] + 0x998ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70053177b0ull; f_7005315808(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x70053177b8ull; f_7005315804(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317600;
L_70053177bc:;
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x70053177c4ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053175fc;
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

void f_700531c398(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9a8ull));
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

void f_700531c768(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd78ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c778(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd88ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c790(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cda0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7a8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdb8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7c0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdd0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7d8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cde8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ce00ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005401800(Cpu *c) {
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
    if (c->x[1] == 0) goto L_70054018b0;
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70054018b0;
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_70054018b0:;
    c->x[0] = (uint32_t)(0xaull);
    c->x[30] = 0x70054018b8ull; f_7005409000(c);
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
    c->sp = (uint64_t)(c->sp - 0x140ull);
    c->pc = 0x7001d3c0d8ull; return;
}

void f_7005402400(Cpu *c) {
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
    if (c->x[1] == 0) goto L_70054024b0;
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70054024b0;
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_70054024b0:;
    c->x[0] = (uint32_t)(0xdull);
    c->x[30] = 0x70054024b8ull; f_7005409000(c);
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
    c->sp = (uint64_t)(c->sp - 0x90ull);
    c->pc = 0x70009a84c8ull; return;
}

void f_7005403000(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x340ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    c->x[30] = 0x70054030b4ull; f_7005409000(c);
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
    c->x[16] = (uint64_t)(c->x[16] + 0x150ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005403150ull; rt_dispatch(c); c->pc = 0;
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
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    if (c->x[2] == 0) goto L_70054031fc;
    if (c->x[1] == 0) goto L_70054031fc;
    { uint64_t ea = c->x[1] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_70054031fc:;
    c->x[0] = (uint32_t)(0x2ull);
    c->x[30] = 0x7005403204ull; f_7005409000(c);
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
    c->x[30] = (uint64_t)(c->x[30] + 0x9a3000ull);
    c->x[30] = (uint64_t)(c->x[30] + 0x6c8ull);
    c->pc = 0x70009a36c8ull; return;
}

void f_7005409000(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[20] = (uint64_t)(0x700540e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + 0x80ull);
L_7005409020:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[9] != 0) goto L_7005409020;
    c->x[9] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005409020;
    c->x[9] = (uint64_t)(c->x[20] + (c->x[19] << 2));
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[21]); }
    c->x[10] = (uint64_t)(c->x[20] + 0x100ull);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[19] << 5));
    { uint64_t ea = c->x[10] + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[2]); }
    { uint64_t ea = c->x[10] + 16; ST64(ea, c->x[3]); ST64(ea + 8, c->x[21]); }
    stl32(c->x[8], 0ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_LS(c)) goto L_700540906c;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[21])));
    if (COND_NE(c)) goto L_7005409094;
L_700540906c:;
    c->x[8] = (uint64_t)(0x700540e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x800ull);
    { uint64_t ea = c->x[8] + (c->x[19] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x7005400000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x0ull);
    c->x[0] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[16] = (uint64_t)(0x700540e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005409094ull; rt_dispatch(c); c->pc = 0;
L_7005409094:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005502000(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x1ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055020b8ull; f_7005505000(c);
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
    { uint64_t ea = c->x[0] + 0x171ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x70001fb4c4ull; return;
}

void f_7005502400(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x3ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055024bcull; f_7005505000(c);
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
    c->pc = 0x70001fce98ull; return;
}

void f_7005502a00(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x6ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005502ab8ull; f_7005505000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_7005502b68;
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
    { uint64_t ea = c->x[0] + 0x308ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x7002177f1cull; return;
L_7005502b68:;
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

void f_7005503000(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x9ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055030b8ull; f_7005505000(c);
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
    (void)(subs32(c, (uint32_t)c->x[24], 0x9ull));
    c->pc = 0x700047afb0ull; return;
}

void f_7005503600(Cpu *c) {
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
    c->x[1] = (uint32_t)(0xcull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055036b8ull; f_7005505000(c);
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
    c->sp = (uint64_t)(c->sp - 0x90ull);
    c->pc = 0x7000b4c698ull; return;
}

void f_7005503c00(Cpu *c) {
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
    c->x[1] = (uint32_t)(0xfull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005503cb8ull; f_7005505000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_7005503d68;
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
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->pc = 0x70001fb6b4ull; return;
L_7005503d68:;
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
    { uint64_t ea = c->x[24] + 0x8ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    c->pc = 0x70001fb6a4ull; return;
}

void f_7005505000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xd0ull);
    { uint64_t ea = c->sp + 0x70ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[19] == 0) goto L_7005505054;
    c->x[8] = (uint32_t)((uint32_t)c->x[1] - 0x12ull);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[1]);
    (void)(adds32(c, (uint32_t)c->x[8], 0x11ull));
    if (COND_CC(c)) goto L_7005505054;
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005505050;
    { uint64_t ea = c->x[19] + 0x3cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005505074;
L_7005505050:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005505054:;
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x70ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xd0ull);
    c->pc = 0; return;
L_7005505074:;
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    c->x[23] = (uint64_t)(0ull | c->x[2]);
    (void)(subs32(c, (uint32_t)c->x[21], 0xeull));
    if (COND_GT(c)) goto L_70055050b8;
    (void)(subs32(c, (uint32_t)c->x[21], 0x8ull));
    if (COND_EQ(c)) goto L_7005505258;
    (void)(subs32(c, (uint32_t)c->x[21], 0x9ull));
    if (COND_NE(c)) goto L_7005505100;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70055050a4ull; f_7005505bb8(c);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70055050b4ull; f_7005505d70(c);
    goto L_7005505050;
L_70055050b8:;
    (void)(subs32(c, (uint32_t)c->x[21], 0xfull));
    if (COND_EQ(c)) goto L_7005505278;
    (void)(subs32(c, (uint32_t)c->x[21], 0x11ull));
    if (COND_NE(c)) goto L_7005505100;
    c->x[8] = (uint64_t)(c->x[19] + 0xfb8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[20] = (uint64_t)(lda64(c->x[8]));
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70055050dcull; f_7005506014(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505054;
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[20] + 0x890ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005505050;
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
L_70055050f8:;
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005505054;
L_7005505100:;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0xdull);
    c->x[27] = (uint32_t)((uint32_t)c->x[21] & 0x1eull);
    c->x[28] = (uint64_t)(0ull | 0xffffff800001ffffull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    c->x[8] = (uint32_t)(0x98ull);
    c->x[28] = (uint64_t)((c->x[28] & 0xffffffffffff0000ull) | 0x0ull);
    if (COND_CS(c)) (void)subs32(c, (uint32_t)c->x[21], 0x10ull); else c->nzcv = 0x40000000ull;
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[27], 0x2ull); else c->nzcv = 0x40000000ull;
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[8] : (uint64_t)(0ull));
    { uint64_t ea = c->x[23] + c->x[8]; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[28])));
    if (COND_CC(c)) goto L_7005505054;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_7005505054;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505050;
    (void)(subs32(c, (uint32_t)c->x[27], 0x2ull));
    if (COND_NE(c)) goto L_7005505180;
    { uint64_t ea = c->x[19] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005505180;
    c->x[30] = 0x7005505174ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505374;
L_7005505180:;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0x5ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CC(c)) goto L_7005505320;
    (void)(subs32(c, (uint32_t)c->x[27], 0xaull));
    if (COND_EQ(c)) goto L_7005505320;
    c->x[26] = (uint64_t)(c->x[19] + 0xf18ull);
    c->x[25] = (uint64_t)(c->x[19] + 0xcull);
    c->x[8] = (uint32_t)(0x1ull);
L_70055051a0:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[25]));
    if ((uint32_t)c->x[9] != 0) goto L_7005505344;
    { uint32_t st = stx32(c, c->x[25], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_70055051a0;
    c->x[24] = (uint32_t)(subs32(c, (uint32_t)c->x[21], 0x1ull));
    if (COND_NE(c)) goto L_70055053a8;
    { uint64_t ea = c->x[19] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005505414;
    c->x[30] = 0x70055051c4ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x128ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_7005505414;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70055053dc;
    { uint64_t ea = c->x[19] + 0x130ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70055053dc;
    { uint64_t ea = c->x[19] + 0x120ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_70055053dc;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055051f8ull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055053dc;
    { uint64_t ea = c->x[19] + 0x180ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x118ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_70055053dc;
    { uint64_t ea = c->x[19] + 0x494ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_70055053dc;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x10000ull);
    c->x[30] = 0x700550522cull; f_7005506474(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055053dc;
    c->x[30] = 0x7005505234ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x510ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x178ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[19] + 0x128ull; ST64(ea, c->x[0]); }
    if (c->x[8] == 0) goto L_7005505248;
    { uint64_t ea = c->x[19] + 0xf98ull; ST64(ea, c->x[0]); }
L_7005505248:;
    { uint64_t ea = c->x[19] + 0x11e0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x11e0ull; ST64(ea, c->x[8]); }
    goto L_7005505414;
L_7005505258:;
    { uint64_t ea = c->x[23] + 0xe8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0xc0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[19] + 0x3d0ull);
    { uint64_t ea = c->x[23] + 0xb0ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0xd8ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005505274ull; f_7005508e48(c);
    goto L_7005505050;
L_7005505278:;
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005505050;
    { uint64_t ea = c->x[23] + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005505050;
    c->x[10] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0x0ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_CC(c)) goto L_7005505054;
    c->x[10] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[10] != 0) goto L_7005505054;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[12] = (uint64_t)(c->x[10] + c->x[12]);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_NE(c)) goto L_7005505050;
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[10]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70055052dcull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[23] + 0xa0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[0]); }
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[19]); }
    /* hint */
    c->x[8] = (uint64_t)(0x7005506094ull);
    { uint64_t ea = c->sp + 0x40ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[8]); ST64(ea + 8, c->x[8]); }
    c->x[30] = 0x7005505308ull; f_700550c460(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505398;
    { uint64_t ea = c->x[23] + 0xa0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005505318ull; f_70055060fc(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    goto L_70055050f8;
L_7005505320:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550532cull; f_7005506014(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505364;
    { uint64_t ea = c->x[19] + 0xe0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0xe0ull; ST64(ea, c->x[8]); }
    goto L_7005505054;
L_7005505344:;
    c->x[8] = (uint64_t)(c->x[19] + 0x18ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->excl_addr = ~0ull;
L_7005505350:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005505350;
    goto L_7005505054;
L_7005505364:;
    { uint64_t ea = c->x[19] + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0xe8ull; ST64(ea, c->x[8]); }
    goto L_7005505054;
L_7005505374:;
    c->x[30] = 0x7005505378ull; f_7005507d50(c);
    c->x[8] = (uint64_t)(c->x[19] + 0xfa8ull);
    { uint64_t ea = c->x[19] + 0xfa0ull; ST64(ea, c->x[0]); }
    c->x[0] = (uint32_t)(0u | 0u);
L_7005505384:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005505384;
    goto L_7005505054;
L_7005505398:;
    { uint64_t ea = c->x[23] + 0x98ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055053a4ull; f_7005506014(c);
    goto L_7005505054;
L_70055053a8:;
    (void)(subs32(c, (uint32_t)c->x[21], 0xbull));
    if (COND_LE(c)) goto L_70055053cc;
    (void)(subs32(c, (uint32_t)c->x[21], 0xdull));
    if (COND_GT(c)) goto L_7005505404;
    (void)(subs32(c, (uint32_t)c->x[21], 0xcull));
    if (COND_EQ(c)) goto L_700550545c;
    (void)(subs32(c, (uint32_t)c->x[21], 0xdull));
    if (COND_EQ(c)) goto L_70055054b8;
    goto L_700550563c;
L_70055053cc:;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0x2ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CC(c)) goto L_7005505414;
    goto L_700550563c;
L_70055053dc:;
    c->x[30] = 0x70055053e0ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0xfa8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0xfa0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[9] = (uint64_t)(c->x[19] + 0xcull);
    { uint64_t ea = c->x[19] + 0xfa8ull; ST64(ea, c->x[8]); }
    stl32(c->x[9], 0ull);
    goto L_7005505054;
L_7005505404:;
    (void)(subs32(c, (uint32_t)c->x[21], 0xeull));
    if (COND_EQ(c)) goto L_7005505568;
    (void)(subs32(c, (uint32_t)c->x[21], 0x10ull));
    if (COND_NE(c)) goto L_700550563c;
L_7005505414:;
    { uint64_t ea = c->x[19] + 0xf08ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005505444;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505444;
    { uint64_t ea = c->x[19] + 0xf70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005505444;
    c->x[30] = 0x700550543cull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0xf90ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[19] + 0x5e0ull; ST64(ea, c->x[0]); }
L_7005505444:;
    (void)(subs32(c, (uint32_t)c->x[21], 0xeull));
    if (COND_EQ(c)) goto L_7005505568;
    (void)(subs32(c, (uint32_t)c->x[21], 0xdull));
    if (COND_EQ(c)) goto L_70055054b8;
    (void)(subs32(c, (uint32_t)c->x[21], 0xcull));
    if (COND_NE(c)) goto L_700550563c;
L_700550545c:;
    { uint64_t ea = c->x[19] + 0x5c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550563c;
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[28])));
    if (COND_CC(c)) goto L_700550563c;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550563c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0u | 0x18000ull);
    c->x[30] = 0x7005505490ull; f_7005506474(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf40ull; ST64(ea, c->x[22]); }
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf48ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70055054a4ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf50ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0xf58ull; ST64(ea, c->x[8]); }
    goto L_700550563c;
L_70055054b8:;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf50ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[30] = 0x70055054ccull; f_7005507d50(c);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[0])));
    if (COND_NE(c)) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550563c;
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0xf60ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0xf50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0u | 0x18000ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[10]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    /* hint */
    c->x[9] = (uint64_t)(0x700550662cull);
    { uint64_t ea = c->sp + 0x40ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[19]); }
    /* hint */
    c->x[8] = (uint64_t)(0x700550656cull);
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0xf48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    /* hint */
    c->x[8] = (uint64_t)(0x700550e73cull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005505540ull; f_7005506474(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505630;
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x588ull);
    c->x[30] = 0x7005505554ull; f_700550bca8(c);
    if ((uint32_t)c->x[0] != 0) goto L_7005505638;
    { uint64_t ea = c->x[19] + 0x5c4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[8] = (uint32_t)((COND_HI(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u + 1));
    goto L_7005505634;
L_7005505568:;
    { uint64_t ea = c->x[19] + 0x5c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0xa0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550563c;
    { uint64_t ea = c->x[19] + 0xf50ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    c->x[30] = 0x7005505598ull; f_7005507d50(c);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[0])));
    if (COND_NE(c)) goto L_700550563c;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf50ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0xf60ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    VW(vu8, 1, 0, SHUF(VREG(vu8, 0), VREG(vu8, 0), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[9]); ST64(ea + 8, c->x[22]); }
    /* hint */
    c->x[9] = (uint64_t)(0x700550662cull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[19]); }
    /* hint */
    c->x[8] = (uint64_t)(0x700550656cull);
    { uint64_t ea = c->x[19] + 0x100ull; c->v[1] = LD128(ea); }
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0xf48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    c->x[2] = (uint32_t)(0u | 0x18000ull);
    { uint64_t ea = c->sp + 48; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    /* hint */
    c->x[8] = (uint64_t)(0x700550e73cull);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005505604ull; f_7005506474(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505630;
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x588ull);
    c->x[30] = 0x7005505618ull; f_700550c73c(c);
    if ((uint32_t)c->x[0] != 0) goto L_7005505638;
    { uint64_t ea = c->x[19] + 0x5c4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xbull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[8]));
    goto L_7005505634;
L_7005505630:;
    c->x[8] = (uint32_t)(0xaull);
L_7005505634:;
    { uint64_t ea = c->x[19] + 0xf64ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005505638:;
    { uint64_t ea = c->x[19] + 0xf60ull; ST32(ea, 0u); }
L_700550563c:;
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_EQ(c)) goto L_700550564c;
    (void)(subs32(c, (uint32_t)c->x[27], 0x2ull));
    if (COND_NE(c)) goto L_70055056f8;
L_700550564c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005505654ull; f_7005506668(c);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(c->x[19] + 0x100ull);
    c->x[4] = (uint64_t)(c->x[19] + 0x118ull);
    c->x[5] = (uint64_t)(c->x[19] + 0x138ull);
    c->x[6] = (uint64_t)(c->x[19] + 0x2f0ull);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[24]);
    c->x[3] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005505678ull; f_7005508b88(c);
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_NE(c)) goto L_70055056e8;
    c->x[8] = (uint64_t)(c->x[19] + 0xfb8ull);
    c->x[9] = (uint32_t)(0x1200ull);
    c->x[0] = (uint64_t)(c->x[19] + 0x588ull);
    stl64(c->x[8], 0ull);
    c->x[8] = (uint64_t)(c->x[19] + c->x[9]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    stl64(c->x[8], 0ull);
    c->x[30] = 0x70055056a0ull; f_700550ce28(c);
    c->v[0] = 0x0ull;
    c->x[8] = (uint32_t)(0x5c8ull);
L_70055056a8:;
    { uint64_t ea = c->x[19] + c->x[8]; ST128(ea, c->v[0]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    (void)(subs64(c, c->x[8], 0xf18ull));
    if (COND_NE(c)) goto L_70055056a8;
    c->v[0] = 0x0ull;
    c->x[8] = (uint64_t)(c->x[19] + 0xf68ull);
    { uint64_t ea = c->x[19] + 0xf50ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0xf64ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0xf88ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x520ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[8] + 0x0ull; ST128(ea, c->v[0]); }
    c->x[8] = (uint64_t)(c->x[19] + 0xf78ull);
    { uint64_t ea = c->x[26] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[19] + 0xf40ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 0xf90ull; ST128(ea, c->v[0]); }
L_70055056e8:;
    { uint64_t ea = c->x[19] + 0x510ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x51cull; ST32(ea, 0u); }
    if ((uint32_t)c->x[23] == 0) goto L_70055056f8;
    { uint64_t ea = c->x[19] + 0x524ull; ST32(ea, 0u); }
L_70055056f8:;
    (void)(subs32(c, (uint32_t)c->x[21], 0x1ull));
    if (COND_NE(c)) goto L_7005505710;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550570cull; f_70055066cc(c);
    goto L_7005505730;
L_7005505710:;
    (void)(subs32(c, (uint32_t)c->x[21], 0x10ull));
    if (COND_NE(c)) goto L_7005505730;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505730;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005505730ull; f_7005506a64(c);
L_7005505730:;
    { uint64_t ea = c->x[19] + 0x5c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf64ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xdf8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf40ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[19] + 88; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0xe21ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf08ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x70ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 96; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0xe00ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 104; ST32(ea, (uint32_t)c->x[9]); ST32(ea + 4, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0x10ull);
L_7005505760:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005505760;
    c->x[0] = (uint32_t)(0u | 0u);
    stl32(c->x[25], 0ull);
    goto L_7005505054;
}

void f_70055063c8(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x2e0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550646c;
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x130ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_700550645c;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[19] + 0x100ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005506404ull; f_70055080f8(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005506460;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005506460;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x148ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550645c;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x150ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550645c;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x158ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550645c;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x160ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005506460;
L_700550645c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005506460:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
L_700550646c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005506474(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[22] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[30] = 0x7005506498ull; f_7005507d50(c);
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550654c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550654c;
    { uint64_t ea = c->x[8] + 0x1f8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550654c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550654c;
    { uint64_t ea = c->x[8] + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_70055064e4;
    { uint64_t ea = c->x[8] + 0x48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
L_70055064e4:;
    { uint64_t ea = c->x[8] + 0x40ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x3ull));
    if (COND_NE(c)) goto L_7005506548;
    c->x[10] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[22])));
    if (COND_CC(c)) goto L_700550654c;
    c->x[10] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[10] != 0) goto L_700550654c;
    { uint64_t ea = c->x[8] + 0x58ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0xfffffffffeffffffull);
    c->x[12] = (uint64_t)(0xffffffffff00ffffull);
    c->x[11] = (uint64_t)(c->x[10] + c->x[11]);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_CC(c)) goto L_700550654c;
    c->x[10] = (uint64_t)(c->x[10] + c->x[9]);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[21])));
    if (COND_CC(c)) goto L_700550654c;
    c->x[11] = (uint64_t)(subs64(c, c->x[21], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550654c;
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550654c;
    (void)(subs64(c, c->x[11], (uint64_t)((uint64_t)(uint32_t)c->x[20])));
    if (COND_CS(c)) goto L_700550655c;
L_7005506548:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550654c:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
L_700550655c:;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 136; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 152; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    goto L_700550654c;
}

void f_700550662c(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005506638ull; f_700550656c(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506648;
    { uint64_t ea = c->x[19] + 0xf60ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005506650;
    c->x[0] = (uint32_t)(0x1ull);
L_7005506648:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005506650:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005506658ull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506648;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    f_7005506b70(c); return;
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

void f_700550934c(Cpu *c) {
    if (c->x[0] == 0) goto L_70055093e4;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x4345ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x344e0000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055093dc;
    c->x[2] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x7full);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[9] & (uint32_t)~(uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_70055093dc;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70055093bcull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_70055093e0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x58ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[19] + 0x40ull);
    c->x[30] = 0x70055093d0ull; f_7005507d58(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_70055093e0;
L_70055093dc:;
    c->x[0] = (uint32_t)(0u | 0u);
L_70055093e0:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
L_70055093e4:;
    c->pc = 0; return;
}

void f_70055093e8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x7005509408ull; f_7005509468(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509458;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005509418ull; f_700550934c(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509458;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005509428ull; f_700550a414(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509458;
    { uint64_t ea = c->x[20] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[0] = (uint64_t)(b); }
    c->x[9] = (uint32_t)(0xe25cull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x20a0000ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[19]); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x7005509454ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint32_t)((uint32_t)c->x[0] & 0x1ull);
L_7005509458:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
}

void f_7005509b34(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x1cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[1])));
    if (COND_HI(c)) goto L_7005509b58;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[1])));
    if (COND_LS(c)) goto L_7005509b58;
    if (((c->x[1] >> 0) & 1) == 0) goto L_7005509b60;
    if ((uint32_t)c->x[2] == 0) goto L_7005509b60;
L_7005509b58:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005509b60:;
    (void)(subs32(c, (uint32_t)c->x[2], 0x0ull));
    c->x[11] = (uint32_t)(0x1ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[11] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[11] : (uint32_t)((uint32_t)c->x[11] + 1));
    if ((uint32_t)c->x[3] == 0) goto L_7005509bf8;
    c->x[12] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[1]);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[9])));
    if (COND_HI(c)) goto L_7005509bf8;
    c->x[12] = (uint32_t)(0u | 0u);
    c->x[13] = (uint32_t)(0x5full);
    c->x[14] = (uint32_t)(0u | (uint32_t)c->x[1]);
L_7005509b90:;
    { uint64_t ea = c->x[8] + (uint64_t)(uint32_t)c->x[14]; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    if ((uint32_t)c->x[15] == 0) goto L_7005509bc4;
    c->x[14] = (uint32_t)((uint32_t)c->x[15] & 0xffffffdfull);
    (void)(subs32(c, (uint32_t)c->x[2], 0x0ull));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    c->x[14] = (uint32_t)((uint32_t)c->x[14] - 0x41ull);
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[15], (uint32_t)c->x[13]); else c->nzcv = 0x40000000ull;
    c->x[15] = (uint32_t)((uint32_t)c->x[15] - 0x30ull);
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[14], 0x19ull); else c->nzcv = 0x0ull;
    if (COND_HI(c)) (void)subs32(c, (uint32_t)c->x[15], 0x9ull); else c->nzcv = 0x0ull;
    if (COND_LS(c)) (void)subs32(c, (uint32_t)c->x[12], (uint32_t)c->x[3]); else c->nzcv = 0x20000000ull;
    if (COND_CC(c)) goto L_7005509be0;
    goto L_7005509b58;
L_7005509bc4:;
    if ((uint32_t)c->x[2] == 0) goto L_7005509bfc;
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + 0x1ull);
    { uint64_t ea = c->x[8] + (uint64_t)(uint32_t)c->x[14]; uint64_t v = LD8(ea); c->x[14] = (uint64_t)(v); }
    if ((uint32_t)c->x[14] == 0) goto L_7005509bfc;
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[3])));
    if (COND_CS(c)) goto L_7005509b58;
L_7005509be0:;
    c->x[14] = (uint32_t)((uint32_t)c->x[12] << ((uint32_t)c->x[10] & 31));
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + (uint32_t)c->x[1]);
    c->x[15] = (uint32_t)((uint32_t)c->x[14] + (uint32_t)c->x[11]);
    (void)(subs32(c, (uint32_t)c->x[15], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LS(c)) goto L_7005509b90;
L_7005509bf8:;
    c->pc = 0; return;
L_7005509bfc:;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
}

void f_7005509c8c(Cpu *c) {
    if (c->x[0] == 0) goto L_7005509cfc;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x4345ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x34430000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005509cf8;
    { uint64_t ea = c->x[19] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005509cf8;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_7005509ccc;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x60ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005509ccc:;
    { uint64_t ea = c->x[19] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509ce4;
    { uint64_t ea = c->x[19] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509ce4;
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005509ce4ull; rt_dispatch(c); c->pc = 0;
L_7005509ce4:;
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x58ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 112; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[19] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005509cf8:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
L_7005509cfc:;
    c->pc = 0; return;
}

void f_7005509d84(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); ST64(ea + 8, c->x[23]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    if (c->x[0] == 0) goto L_7005509e8c;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x54ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    if ((uint32_t)c->x[9] == 0) goto L_7005509e9c;
    { uint64_t ea = c->x[20] + 0x14ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x1full);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[12] & (uint32_t)~(uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005509e58;
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0x60ull);
    if ((uint32_t)c->x[11] == 0) goto L_7005509e58;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x78ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[2], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005509e58;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x70ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_NE(c)) goto L_7005509e58;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0xfull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[12] & (uint32_t)~(uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005509e58;
    { uint64_t ea = c->x[19] + 0x58ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    if ((uint32_t)c->x[12] == 0) goto L_7005509f60;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)~(uint32_t)c->x[10]);
    if (((c->x[8] >> 1) & 1) != 0) goto L_7005509f70;
    (void)(subs32(c, (uint32_t)c->x[9], 0x3ull));
    if (COND_EQ(c)) goto L_7005509fc4;
    (void)(subs32(c, (uint32_t)c->x[9], 0x5ull));
    if (COND_EQ(c)) goto L_7005509fb4;
    (void)(subs32(c, (uint32_t)c->x[9], 0x4ull));
    if (COND_NE(c)) goto L_700550a138;
    { uint64_t ea = c->x[19] + 0x64ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    { uint64_t ea = c->x[19] + 0x64ull; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_CC(c)) goto L_7005509e8c;
    c->x[8] = (uint64_t)(0x7005510000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x0ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x60ull; ST32(ea, (uint32_t)c->x[9]); }
    goto L_700550a1f4;
L_7005509e58:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x4ull));
    if (COND_NE(c)) goto L_7005509e68;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x60ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005509e68:;
    { uint64_t ea = c->x[19] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509e84;
    { uint64_t ea = c->x[19] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509e84;
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x78ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
L_7005509e80:;
    c->pc = c->x[8]; c->x[30] = 0x7005509e84ull; rt_dispatch(c); c->pc = 0;
L_7005509e84:;
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x58ull; ST64(ea, 0ull); }
L_7005509e8c:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005509e9c:;
    { uint64_t ea = c->x[19] + 0xa8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    if ((uint32_t)c->x[11] == 0) goto L_7005509ec8;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0u | 0u);
    if (((c->x[12] >> 7) & 1) == 0) goto L_7005509ecc;
    c->x[8] = (uint32_t)((uint32_t)c->x[11] & (uint32_t)c->x[8]);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005509ecc;
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[11] & (uint32_t)~(uint32_t)c->x[10])));
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005509ecc;
L_7005509ec8:;
    c->x[9] = (uint32_t)(0u | 0u);
L_7005509ecc:;
    { uint64_t ea = c->x[20] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509ee8;
    { uint64_t ea = c->x[20] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[8] & 0x20ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] >> 5));
    if (((c->x[9] >> 0) & 1) == 0) goto L_7005509e8c;
    goto L_7005509ef0;
L_7005509ee8:;
    if ((uint32_t)c->x[9] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_7005509ef0:;
    c->x[9] = (uint32_t)(0x1full);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[9] & (uint32_t)~(uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005509e8c;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x60ull);
    if ((uint32_t)c->x[8] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xfull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[9] & (uint32_t)~(uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0xc0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005509f34ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD128(ea); }
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x8ull; c->v[1] = LD64(ea); }
    c->x[8] = (uint64_t)(0x7005510000ull);
    VW(vu8, 1, 0, SHUF(VREG(vu8, 0), VREG(vu8, 0), 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
    { uint64_t ea = c->x[8] + 0x10ull; c->v[2] = LD64(ea); }
    { uint64_t ea = c->x[19] + 4; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[19] + 0x58ull; ST64(ea, VS64(2)); }
    { uint64_t ea = c->x[19] + 0x70ull; ST128(ea, c->v[0]); }
    goto L_7005509e8c;
L_7005509f60:;
    if ((uint32_t)c->x[8] != 0) goto L_7005509e8c;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005509e8c;
L_7005509f70:;
    c->x[8] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CS(c)) goto L_7005509f88;
    { uint64_t ea = c->x[19] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005509fa0;
    goto L_7005509e84;
L_7005509f88:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x4ull));
    if (COND_NE(c)) goto L_700550a12c;
    { uint64_t ea = c->x[19] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x60ull; ST32(ea, (uint32_t)c->x[9]); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509e84;
L_7005509fa0:;
    { uint64_t ea = c->x[19] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509e84;
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[2]);
    goto L_7005509e80;
L_7005509fb4:;
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005509e8c;
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x8ull; c->v[0] = LD64(ea); }
    goto L_700550a1f4;
L_7005509fc4:;
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550a1ec;
    c->x[8] = (uint32_t)((uint32_t)c->x[11] & 0x7full);
    (void)(subs32(c, (uint32_t)c->x[8], 0x7full));
    if (COND_NE(c)) goto L_700550a1ec;
    { uint64_t ea = c->x[19] + 0xd0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550a1ec;
    { uint64_t ea = c->x[19] + 0xd8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550a1ec;
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(c->x[19] + 0x14ull);
    c->x[13] = (uint32_t)(0x19ull);
    c->x[23] = (uint64_t)(c->x[19] + 0x34ull);
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[9], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[22] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[10] + c->x[11]);
    { uint64_t ea = c->x[11] + 0x20ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[12] * (uint32_t)c->x[13]);
    c->x[9] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[9]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[9] << 1));
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[9], 29) & 0xfffffff8ull);
    c->x[9] = (uint64_t)(c->x[10] + c->x[9]);
    { uint64_t ea = c->x[9] + 0xa0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[10] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550a038ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550a234;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_NE(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x78ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x80ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x19ull);
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x64ull; ST32(ea, 0u); }
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[20] = (uint64_t)(c->x[8] + 0x1ull);
    c->x[8] = (uint64_t)(0x700550f000ull);
    { uint64_t ea = c->x[19] + 0x90ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[8] + 0xff8ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[9], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[19] + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->x[22] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 4; ST64(ea, VS64(0)); }
    c->x[8] = (uint64_t)(c->x[10] + c->x[8]);
    c->x[3] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[11] * (uint32_t)c->x[12]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    { uint64_t ea = c->x[19] + 0xd8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + ((uint32_t)c->x[8] << 1));
    c->x[8] = (uint32_t)(ROR32((uint32_t)c->x[8], 29) & 0xfffffff8ull);
    c->x[8] = (uint64_t)(c->x[10] + c->x[8]);
    { uint64_t ea = c->x[8] + 0xa0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[10] + c->x[8]);
    c->pc = c->x[9]; c->x[30] = 0x700550a0e0ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 0x88ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x90ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_NE(c)) goto L_7005509e8c;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_EQ(c)) goto L_7005509e8c;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_7005509e8c;
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    c->x[8] = (uint32_t)(0x5ull);
    { uint64_t ea = c->x[19] + 0x88ull; ST64(ea, 0ull); }
    c->x[9] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[10] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    { uint64_t ea = c->x[19] + 0x60ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 4; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    goto L_7005509e8c;
L_700550a12c:;
    c->x[8] = (uint32_t)(0x2ull);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005509e8c;
L_700550a138:;
    if (((c->x[8] >> 6) & 1) != 0) goto L_700550a1e0;
    if (((c->x[8] >> 7) & 1) != 0) goto L_700550a1fc;
    if (((c->x[8] >> 10) & 1) != 0) goto L_700550a210;
    if (((c->x[8] >> 11) & 1) != 0) goto L_700550a21c;
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(c->x[19] + 0x34ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[8] & 0x3cull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x4ull));
    { uint64_t ea = c->x[20] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    if (COND_NE(c)) goto L_700550a240;
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_GT(c)) goto L_700550a240;
    c->x[22] = (uint64_t)(c->x[19] + 0x14ull);
    { uint64_t ea = c->x[22] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700550a308;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0xffffffffull);
    c->x[30] = 0x700550a180ull; f_700550a39c(c);
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0xffffffe7ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[8], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[22] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[10] = (uint32_t)(0x19ull);
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[11] * (uint32_t)c->x[12]);
    (void)(subs32(c, (uint32_t)c->x[9], 0x19ull));
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[10]));
    c->x[10] = (uint32_t)(0xcccdull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xcccc0000ull);
    c->x[10] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[10]);
    c->x[11] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[21]);
    c->x[10] = (uint64_t)(ROR64(c->x[10], 34) & 0x3fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + ((uint32_t)c->x[10] << 2));
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[9]);
    c->x[10] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[9]));
L_700550a1d8:;
    { uint64_t ea = c->x[20] + (c->x[8] << 2); ST32(ea, (uint32_t)c->x[9]); }
    goto L_7005509e8c;
L_700550a1e0:;
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    goto L_700550a204;
L_700550a1ec:;
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x30ull; c->v[0] = LD64(ea); }
L_700550a1f4:;
    { uint64_t ea = c->x[19] + 4; ST64(ea, VS64(0)); }
    goto L_7005509e8c;
L_700550a1fc:;
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
L_700550a204:;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7ull);
    { uint64_t ea = c->x[19] + 8; ST32(ea, 0u); ST32(ea + 4, (uint32_t)c->x[8]); }
    goto L_7005509e8c;
L_700550a210:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0xffffffffull);
    goto L_700550a224;
L_700550a21c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x1ull);
L_700550a224:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[30] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    f_700550a39c(c); return;
L_700550a234:;
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x28ull; c->v[0] = LD64(ea); }
    goto L_700550a1f4;
L_700550a240:;
    (void)(subs32(c, (uint32_t)c->x[10], 0x8ull));
    if (COND_NE(c)) goto L_700550a300;
    c->x[22] = (uint64_t)(c->x[19] + 0x14ull);
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[9], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[22] + (c->x[9] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0xffffffe7ull);
    c->x[14] = (uint32_t)(0x19ull);
    c->x[10] = (uint64_t)(c->x[10] + c->x[12]);
    { uint64_t ea = c->x[10] + 0x24ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + (uint32_t)c->x[11] * (uint32_t)c->x[13]);
    c->x[10] = (uint32_t)((uint32_t)c->x[21] + 0x5ull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x19ull));
    c->x[13] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[13] : (uint32_t)((uint32_t)c->x[14]));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[13])));
    if (COND_CC(c)) goto L_700550a310;
    c->x[13] = (uint32_t)(0x851full);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x18ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x51eb0000ull);
    c->x[12] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[12] * (uint64_t)(uint32_t)c->x[13]);
    c->x[12] = (uint64_t)(ROR64(c->x[12], 35) & 0x1fffffffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_CS(c)) goto L_700550a30c;
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xcccc0000ull);
    c->x[8] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[21] * (uint64_t)(uint32_t)c->x[8]);
    c->x[8] = (uint64_t)(ROR64(c->x[8], 34) & 0x3fffffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + ((uint32_t)c->x[8] << 2));
    c->x[21] = (uint32_t)((uint32_t)c->x[21] - (uint32_t)c->x[8]);
    c->x[30] = 0x700550a2c4ull; f_700550a39c(c);
    { uint64_t ea = c->x[19] + 0xcull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0xffffffe7ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[8], 28) & 0xfffffff0ull);
    { uint64_t ea = c->x[22] + (c->x[8] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[10] = (uint32_t)(0x19ull);
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[11] * (uint32_t)c->x[12]);
    (void)(subs32(c, (uint32_t)c->x[9], 0x19ull));
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[10]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[21], (uint32_t)((uint32_t)c->x[9])));
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[21] : (uint32_t)((uint32_t)c->x[9]));
    goto L_700550a1d8;
L_700550a300:;
    (void)(subs32(c, (uint32_t)c->x[10], 0x4ull));
    if (COND_NE(c)) goto L_700550a358;
L_700550a308:;
    c->x[10] = (uint32_t)((uint32_t)c->x[21] - 0x5ull);
L_700550a30c:;
    if (((c->x[10] >> 31) & 1) != 0) goto L_700550a348;
L_700550a310:;
    c->x[11] = (uint64_t)(c->x[19] + (c->x[9] << 2));
    { uint64_t ea = c->x[19] + 0x98ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(ROR32((uint32_t)c->x[9], 28) & 0xfffffff0ull);
    c->x[14] = (uint32_t)(0xffffffe7ull);
    { uint64_t ea = c->x[11] + 0x14ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + c->x[13]);
    { uint64_t ea = c->x[12] + 0x24ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[12] + (uint32_t)c->x[11] * (uint32_t)c->x[14]);
    c->x[12] = (uint32_t)(0x19ull);
    (void)(subs32(c, (uint32_t)c->x[11], 0x19ull));
    c->x[11] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)((uint32_t)c->x[12]));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_CS(c)) goto L_700550a348;
    { uint64_t ea = c->x[20] + (c->x[9] << 2); ST32(ea, (uint32_t)c->x[10]); }
L_700550a348:;
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005509e8c;
    c->x[8] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[8] + 0x20ull; c->v[0] = LD64(ea); }
    goto L_700550a1f4;
L_700550a358:;
    c->x[11] = (uint32_t)(0x6667ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x10ull));
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x66660000ull);
    c->x[11] = (uint64_t)(0ull + (uint64_t)((int64_t)(int32_t)(uint32_t)c->x[21] * (int64_t)(int32_t)(uint32_t)c->x[11]));
    c->x[12] = (uint64_t)(ROR64(c->x[11], 63) & 0x1ull);
    c->x[11] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[11] >> 63) & 1)) & 0xffffffff80000000ull) | (ROR64(c->x[11], 33) & 0x7fffffffull));
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + (uint32_t)c->x[12]);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + ((uint32_t)c->x[11] << 2));
    c->x[11] = (uint32_t)((uint32_t)c->x[21] - (uint32_t)c->x[11]);
    if (COND_NE(c)) goto L_700550a38c;
    if ((uint32_t)c->x[11] == 0) goto L_700550a38c;
    c->x[10] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    goto L_700550a30c;
L_700550a38c:;
    (void)(subs32(c, (uint32_t)c->x[10], 0x20ull));
    if (COND_EQ(c)) (void)subs32(c, (uint32_t)c->x[11], 0x4ull); else c->nzcv = 0x0ull;
    c->x[10] = (uint32_t)((COND_GE(c)) ? (uint32_t)c->x[21] : (uint32_t)((uint32_t)c->x[21] + 1));
    goto L_700550a30c;
}

void f_700550b96c(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[3], 0x1ull));
    if (COND_LS(c)) goto L_700550b97c;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550b97c:;
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550b99cull; f_700550aae0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ba08;
    { uint64_t ea = c->x[21] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550ba04;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550b9b8ull; f_700550aee4(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ba08;
    c->x[1] = (uint64_t)(c->x[19] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0xcull; ST8(ea, 0u); }
    c->x[30] = 0x700550b9d4ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550ba08;
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[19] + 0x58ull);
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0xcull);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfeull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[20]);
    { uint64_t ea = c->sp + 0xcull; ST8(ea, (uint32_t)c->x[8]); }
    c->pc = c->x[9]; c->x[30] = 0x700550ba00ull; rt_dispatch(c); c->pc = 0;
    goto L_700550ba08;
L_700550ba04:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550ba08:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_700550bc40(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[1] = (uint64_t)(c->x[1] + 0xb0ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x18ull);
    c->x[20] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x700550bc64ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550bc98;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550bc6c:;
    { uint64_t ea = c->x[20] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550bc8c;
    if ((uint32_t)c->x[9] == 0) goto L_700550bc94;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x18ull));
    if (COND_NE(c)) goto L_700550bc6c;
L_700550bc8c:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_700550bc98;
L_700550bc94:;
    c->x[0] = (uint32_t)(0x1ull);
L_700550bc98:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_700550bca8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[20] == 0) goto L_700550c0a4;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550c0a4;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_700550c0a4;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700550bcecull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0028ull);
    c->x[22] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[22] = (uint64_t)((c->x[22] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)(0x2ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[10]); }
    if (COND_CS(c)) goto L_700550c0a4;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c0a4;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c0a0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x28ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550bd44ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0080ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[22])));
    if (COND_CS(c)) goto L_700550c0a4;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c0a4;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c0a0;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550bd84ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[2], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550c0a0;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550be40;
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_700550c0a0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_700550c0a0;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c0a0;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c0a0;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550bde8ull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550be00ull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    c->x[8] = (uint32_t)(0x8e0ull);
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)((uint32_t)c->x[8] + 0x1e8ull);
    c->x[30] = 0x700550be20ull; f_700550c34c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x8e0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[30] = 0x700550be3cull; f_700550c34c(c);
    goto L_700550c0a4;
L_700550be40:;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[25] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[25] = (uint64_t)((c->x[25] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)(0x3ull);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[9]); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[25])));
    if (COND_CC(c)) goto L_700550c0a4;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c0a4;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c0a0;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x200000ull);
    c->x[4] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550be88ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    /* hint */
    c->x[24] = (uint64_t)(0x7005511061ull);
    c->x[26] = (uint32_t)(0xcf10ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x406000ull);
    c->x[1] = (uint64_t)(0ull | c->x[24]);
    c->x[26] = (uint32_t)((c->x[26] & 0xffffffff0000ffffull) | 0xb40000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xaccull);
    c->pc = c->x[8]; c->x[30] = 0x700550beb4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005510000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0xfe3ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[26]);
    c->pc = c->x[8]; c->x[30] = 0x700550bed0ull; rt_dispatch(c); c->pc = 0;
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint32_t)(0x4ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[2] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700550beecull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550bf04ull; f_700550c1b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550bf10ull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0a4;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0xf8ull);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 40; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[2] = (uint32_t)(0x8ull);
    { uint64_t ea = c->x[19] + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[9] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[19] + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->x[9] + 0x18ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x20ull; ST64(ea, c->x[22]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, VS64(0)); }
    c->x[8] = (uint64_t)(c->x[8] + 0x6a000ull);
    c->x[24] = (uint64_t)(c->x[8] + 0x920ull);
    c->pc = c->x[24]; c->x[30] = 0x700550bf58ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    { uint64_t ea = c->x[19] + 0x28ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[25])));
    if (COND_CC(c)) goto L_700550c0c0;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c0c0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->x[8] = (uint64_t)(c->x[26] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x43cull);
    c->pc = c->x[8]; c->x[30] = 0x700550bf88ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[26] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x210ull);
    c->pc = c->x[8]; c->x[30] = 0x700550bfa0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x6ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700550bfb0ull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0c0;
    c->x[8] = (uint32_t)(0x8e0ull);
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[2] = (uint64_t)(0ull | c->x[23]);
    c->x[3] = (uint32_t)((uint32_t)c->x[8] + 0x1e8ull);
    c->x[30] = 0x700550bfd0ull; f_700550c34c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0c0;
    { uint64_t ea = c->x[21] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[8] = (uint32_t)(0x7ull);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x4000ull);
    c->x[4] = (uint32_t)(0x8ull);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[23] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550bff8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c0c4;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0xa8ull);
    c->x[2] = (uint32_t)(0x8ull);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[23]); }
    c->pc = c->x[24]; c->x[30] = 0x700550c010ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[25])));
    if (COND_CC(c)) goto L_700550c0c0;
    c->x[8] = (uint64_t)(c->x[0] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c0c0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0xec88ull);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[23] = (uint32_t)((c->x[23] & 0xffffffff0000ffffull) | 0xc80000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[23]);
    c->pc = c->x[8]; c->x[30] = 0x700550c044ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + 0x6cull);
    c->pc = c->x[8]; c->x[30] = 0x700550c05cull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0x9ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700550c06cull; f_700550c0d0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0c0;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x8e0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[30] = 0x700550c088ull; f_700550c34c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550c0c0;
    c->x[8] = (uint64_t)(0x7005510000ull);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x38ull; c->v[0] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, VS64(0)); }
    goto L_700550c0a4;
L_700550c0a0:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c0a4:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
L_700550c0c0:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c0c4:;
    c->x[8] = (uint32_t)(0x3ull);
    { uint64_t ea = c->x[19] + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_700550c0a4;
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

void f_7005603800(Cpu *c) {
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
    c->x[30] = 0x7005603848ull; f_7005606c00(c);
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
    c->pc = 0; return;
}

void f_7005605600(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70056056a0;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_70056056a0;
    c->x[10] = (uint32_t)(udiv32((uint32_t)c->x[1], (uint32_t)c->x[8]));
    c->x[10] = (uint32_t)((uint32_t)c->x[1] - (uint32_t)c->x[10] * (uint32_t)c->x[8]);
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[10]);
L_700560561c:;
    c->x[12] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[11] << 3));
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[1])));
    if (COND_EQ(c)) goto L_7005605648;
    if ((uint32_t)c->x[13] == 0) goto L_70056056a0;
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[8])));
    c->x[11] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)(0u));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700560561c;
    goto L_70056056a0;
L_7005605648:;
    { uint64_t ea = c->x[12] + 0x4ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_CS(c)) goto L_70056056a0;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[12] + (c->x[11] << 6));
    { uint64_t ea = c->x[12] + 0x10ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x48ull));
    if (COND_NE(c)) goto L_70056056a0;
    { uint64_t ea = c->x[12] + 0x14ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] != 0) goto L_70056056a0;
    { uint64_t ea = c->x[12] + 0x20ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x48ull));
    if (COND_NE(c)) goto L_70056056a0;
    { uint64_t ea = c->x[12] + 0x30ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x48ull));
    if (COND_NE(c)) goto L_70056056a0;
    { uint64_t ea = c->x[12] + 0x38ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_70056056a0;
    { uint64_t ea = c->x[12] + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[12]);
    c->pc = 0; return;
L_70056056a0:;
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->pc = 0; return;
}

void f_7005606800(Cpu *c) {
    c->x[8] = (uint64_t)(c->x[0] + 0x100ull);
    c->x[9] = (uint32_t)(0x48ull);
L_7005606808:;
    { uint64_t ea = c->x[8]; ST64(ea, 0ull); ST64(ea + 8, 0ull); c->x[8] = ea + 16; }
    c->x[9] = (uint32_t)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_NE(c)) goto L_7005606808;
    { uint64_t ea = c->x[0] + 0x2cull; ST32(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x30ull; ST32(ea, 0u); }
    c->pc = 0; return;
}

void f_7005607400(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[30] = 0x7005607430ull; f_7005605200(c);
    if ((uint32_t)c->x[0] == 0) goto L_70056074f8;
    c->x[8] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x47ull));
    if (COND_CS(c)) goto L_70056074f8;
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005607460;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_EQ(c)) goto L_7005607468;
L_7005607460:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005607468ull; f_7005606c00(c);
L_7005607468:;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70056074f8;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005607478ull; f_7005605e00(c);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005607484ull; f_7005606400(c);
    { uint64_t ea = c->x[20] + 0x6cull; ST32(ea, (uint32_t)c->x[21]); }
    { uint64_t ea = c->x[20] + 0x70ull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->x[20] + 0x74ull; ST32(ea, (uint32_t)c->x[23]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x78ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[21] = (uint64_t)(c->x[20] + ((uint64_t)(uint32_t)c->x[21] << 4));
    c->x[21] = (uint64_t)(c->x[21] + 0x100ull);
    { uint64_t ea = c->x[21] + 0x0ull; ST32(ea, (uint32_t)c->x[22]); }
    { uint64_t ea = c->x[21] + 0x4ull; ST32(ea, (uint32_t)c->x[23]); }
    { uint64_t ea = c->x[21] + 0x8ull; ST32(ea, (uint32_t)c->x[23]); }
    c->x[8] = (uint32_t)(0xbf800000ull);
    { uint64_t ea = c->x[21] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0xacull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    if ((uint32_t)c->x[8] != 0) goto L_70056074d0;
    c->x[8] = (uint32_t)(0x1ull);
L_70056074d0:;
    { uint64_t ea = c->x[20] + 0xacull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x80ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x74ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x84ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 108; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->x[20] + 136; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[11]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x90ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70056074f8ull; f_7005605f00(c);
L_70056074f8:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005609000(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 0x68ull; ST32(ea, (uint32_t)c->x[1]); }
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005609220;
    c->x[30] = 0x7005609038ull; f_7005605a00(c);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[25] = (uint64_t)(0ull | c->x[2]);
    c->x[26] = (uint64_t)(0ull | c->x[3]);
    c->x[27] = (uint64_t)(0ull | c->x[4]);
    c->x[28] = (uint64_t)(0ull | c->x[5]);
    c->x[19] = (uint64_t)(0ull | c->x[6]);
    if (c->x[21] == 0) goto L_7005609220;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005609060ull; f_7005605e00(c);
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005609218;
    { uint64_t ea = c->x[19] + 0xcc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005609218;
    { uint64_t ea = c->x[8] + 0x78ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 1) & 1) != 0) goto L_70056091fc;
    { uint64_t ea = c->x[19] + 0xd10ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70056091ec;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560908cull; f_700560b400(c);
    if ((uint32_t)c->x[0] == 0) goto L_700560920c;
    { uint64_t ea = c->x[19] + 0xd0cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LT(c)) goto L_7005609218;
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp + 0x60ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, 0u); }
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[24] = (uint64_t)(c->x[20] + 0x100ull);
L_70056090b0:;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[23] != 0) goto L_70056090c4;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)(0u | 0u);
L_70056090c4:;
    { uint64_t ea = c->x[21] + ((uint64_t)(uint32_t)c->x[23] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_70056090e0;
    { uint64_t ea = c->x[21] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | 0x1ull);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[10]); }
L_70056090e0:;
    { uint64_t ea = c->x[22] + ((uint64_t)(uint32_t)c->x[23] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_70056090fc;
    { uint64_t ea = c->x[22] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | 0x2ull);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[10]); }
L_70056090fc:;
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] != 0) goto L_700560913c;
    { uint64_t ea = c->x[25] + ((uint64_t)(uint32_t)c->x[23] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005609120;
    { uint64_t ea = c->x[25] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | 0x1ull);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[10]); }
L_7005609120:;
    { uint64_t ea = c->x[26] + ((uint64_t)(uint32_t)c->x[23] << 2); uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_700560913c;
    { uint64_t ea = c->x[26] + ((uint64_t)(uint32_t)c->x[23] << 2); ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | 0x2ull);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[10]); }
L_700560913c:;
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    c->x[24] = (uint64_t)(c->x[24] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x48ull));
    if (COND_CC(c)) goto L_70056090b0;
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700560916c;
    { uint64_t ea = c->x[27] + 0x18ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[28] + 0x18ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[20] + 0x60ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x60ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005609190;
L_700560916c:;
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    if (((c->x[10] >> 0) & 1) == 0) goto L_700560917c;
    { uint64_t ea = c->x[27] + 0x18ull; ST8(ea, (uint32_t)c->x[8]); }
L_700560917c:;
    if (((c->x[10] >> 1) & 1) == 0) goto L_7005609184;
    { uint64_t ea = c->x[28] + 0x18ull; ST8(ea, (uint32_t)c->x[8]); }
L_7005609184:;
    { uint64_t ea = c->x[20] + 0x58ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x58ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005609190:;
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    if (((c->x[10] >> 0) & 1) == 0) goto L_70056091b0;
    { uint64_t ea = c->x[27] + 0xcull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[27] + 0x8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x180ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | (uint32_t)c->x[12]);
    { uint64_t ea = c->x[19] + 0x180ull; ST32(ea, (uint32_t)c->x[11]); }
L_70056091b0:;
    if (((c->x[10] >> 1) & 1) == 0) goto L_70056091c8;
    { uint64_t ea = c->x[28] + 0xcull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[28] + 0x8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x240ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | (uint32_t)c->x[12]);
    { uint64_t ea = c->x[19] + 0x240ull; ST32(ea, (uint32_t)c->x[11]); }
L_70056091c8:;
    { uint64_t ea = c->x[20] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x1cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005609218;
    { uint64_t ea = c->x[20] + 0x64ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x64ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005609218;
L_70056091ec:;
    { uint64_t ea = c->x[20] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x5cull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005609218;
L_70056091fc:;
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x68ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005609218;
L_700560920c:;
    { uint64_t ea = c->x[20] + 0x7cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x7cull; ST32(ea, (uint32_t)c->x[8]); }
L_7005609218:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005609220ull; f_7005605f00(c);
L_7005609220:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700560bc00(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[8] = (uint32_t)(0x29b8ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xc5fd0000ull);
    (void)(subs32(c, (uint32_t)c->x[1], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700560bcac;
    c->x[8] = (uint64_t)(0x700560e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x66b0ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_700560bcac;
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560bc68ull; f_7005605e00(c);
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560bca4;
    { uint64_t ea = c->x[20] + 0x90ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700560bca4;
    { uint64_t ea = c->x[20] + 0x84ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[21])));
    if (COND_NE(c)) goto L_700560bca4;
    { uint64_t ea = c->x[20] + 0x80ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0xacull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700560bca4;
    { uint64_t ea = c->x[20] + 0x94ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0xb0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0xb0ull; ST32(ea, (uint32_t)c->x[8]); }
L_700560bca4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700560bcacull; f_7005605f00(c);
L_700560bcac:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005801000(Cpu *c) {
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
    c->x[1] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[2] = (uint32_t)((uint32_t)c->x[1] ^ 0x1ull);
    c->x[3] = (uint32_t)(0x0ull);
    c->x[0] = (uint32_t)(0x0ull);
    c->x[30] = 0x70058010a8ull; f_7005803000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_700580113c;
    c->pc = 0x70020fc85cull; return;
L_700580113c:;
    c->pc = 0x70020fc724ull; return;
}

void f_7005802000(Cpu *c) {
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
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
    if (c->x[9] == 0) goto L_7005802114;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005802114;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005802114;
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005802114;
    c->x[13] = (uint32_t)(0x30ull);
    c->x[11] = (uint64_t)(c->x[11] + (uint64_t)(uint32_t)c->x[3] * (uint64_t)(uint32_t)c->x[13]);
    { uint64_t ea = c->x[11] + 0x10ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    c->x[0] = (uint32_t)((uint32_t)c->x[13] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_HI(c)) goto L_7005802114;
    c->x[0] = (uint32_t)((uint32_t)c->x[0] + 0x1ull);
    { uint64_t ea = c->sp + 0x318ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005802100ull; f_7005803800(c);
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[30] = 0x7005802114ull; f_7005803000(c);
L_7005802114:;
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
    c->pc = 0x70007364fcull; return;
}

void f_7005805800(Cpu *c) {
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
    if ((uint32_t)c->x[8] == 0) goto L_70058058b4;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x51ull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    if (((c->x[2] >> 0) & 1) == 0) goto L_7005805944;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[8]);
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x6ull);
    c->x[30] = 0x70058058b4ull; f_7005803000(c);
L_70058058b4:;
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
    c->pc = 0x70020fc744ull; return;
L_7005805944:;
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
    c->pc = 0x70020fc724ull; return;
}

void f_7005807800(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x51ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_70058079f0;
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
    c->x[30] = 0x70058078a8ull; f_7005808000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700580794c;
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
    c->pc = 0x70020f9d94ull; return;
L_700580794c:;
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
L_70058079f0:;
    c->pc = 0x70020f9d94ull; return;
}

void f_7005902400(Cpu *c) {
    { uint64_t ea = c->sp + 0x170ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
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
    { uint64_t ea = c->sp + 0xb0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70059024a8ull; f_7005908000(c);
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
    c->pc = 0x70003f49a4ull; return;
}

void f_7005904400(Cpu *c) {
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
    if (COND_EQ(c)) goto L_7005904444;
    c->x[15] = (uint32_t)(0xe540ull);
    c->x[15] = (uint32_t)((c->x[15] & 0xffffffff0000ffffull) | 0x3710000ull);
    (void)(subs64(c, c->x[14], (uint64_t)(c->x[15])));
    if (COND_NE(c)) goto L_70059044f8;
    c->x[14] = (uint32_t)(0x1ull);
    goto L_7005904450;
L_7005904444:;
    c->x[14] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[3], 0x1000ull));
    if (COND_CS(c)) goto L_70059044f8;
L_7005904450:;
    c->x[9] = (uint64_t)(0x700590e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x180ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(c->x[9] + 0x100ull);
L_7005904460:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[16]));
    if ((uint32_t)c->x[10] != 0) goto L_7005904460;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[16], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005904460;
    c->x[4] = (uint64_t)(ROR64(c->x[2], 32) & 0xffffffffull);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] ^ (uint32_t)c->x[2]);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] ^ (uint32_t)c->x[3]);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] & 0x7ffull);
    c->x[9] = (uint64_t)(c->x[9] + 0x200ull);
    c->x[7] = (uint32_t)(0x800ull);
    c->x[6] = (uint32_t)(0x18ull);
L_7005904490:;
    c->x[12] = (uint64_t)(c->x[9] + (uint64_t)(uint32_t)c->x[4] * (uint64_t)(uint32_t)c->x[6]);
    { uint64_t ea = c->x[12] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70059044d8;
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_70059044c0;
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[3])));
    if (COND_NE(c)) goto L_70059044c0;
    { uint64_t ea = c->x[12] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[14])));
    if (COND_EQ(c)) goto L_70059044e0;
L_70059044c0:;
    c->x[4] = (uint32_t)((uint32_t)c->x[4] + 0x1ull);
    c->x[4] = (uint32_t)((uint32_t)c->x[4] & 0x7ffull);
    c->x[7] = (uint32_t)(subs32(c, (uint32_t)c->x[7], 0x1ull));
    if (COND_NE(c)) goto L_7005904490;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_70059044f0;
L_70059044d8:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_70059044f0;
L_70059044e0:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[12] + 0xcull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    goto L_70059044f0;
L_70059044f0:;
    stl32(c->x[16], 0ull);
    c->pc = 0; return;
L_70059044f8:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005906600(Cpu *c) {
    if (c->x[0] == 0) goto L_7005906690;
    (void)(subs32(c, (uint32_t)c->x[1], 0x0ull));
    if (COND_LE(c)) goto L_7005906690;
    (void)(subs32(c, (uint32_t)c->x[1], 0x1000ull));
    if (COND_HI(c)) goto L_7005906690;
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x100ull);
L_7005906624:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[9]));
    if ((uint32_t)c->x[10] != 0) goto L_7005906624;
    c->x[10] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[9], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005906624;
    c->x[10] = (uint64_t)(c->x[8] + 0x110ull);
    c->x[11] = (uint32_t)(0x8ull);
L_7005906640:;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[0])));
    if (COND_EQ(c)) goto L_7005906674;
    if (c->x[12] == 0) goto L_7005906674;
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    c->x[11] = (uint32_t)(subs32(c, (uint32_t)c->x[11], 0x1ull));
    if (COND_NE(c)) goto L_7005906640;
    { uint64_t ea = c->x[8] + 0x104ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[11] & 0x7ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    { uint64_t ea = c->x[8] + 0x104ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[10] = (uint64_t)(c->x[8] + 0x110ull);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[12] << 4));
L_7005906674:;
    c->x[11] = (uint32_t)((uint32_t)c->x[1] + 0x1ccull);
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->x[10] + 8; ST32(ea, (uint32_t)c->x[1]); ST32(ea + 4, (uint32_t)c->x[11]); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[11]);
    stl32(c->x[9], 0ull);
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_7005906690:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005909000(Cpu *c) {
    { uint64_t ea = c->sp - 128; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005909234;
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_7005909234;
    { uint64_t ea = c->x[19] + 0x58ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_7005909234;
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0xdf98ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005909234;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005909058ull; f_7005904c00(c);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[24] = (uint64_t)(0ull | c->x[1]);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[8] = (uint32_t)(0x7fc00000ull);
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[8]); }
    if ((uint32_t)c->x[22] == 0) goto L_7005909084;
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x14ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
    goto L_70059090ec;
L_7005909084:;
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0xf678ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3a60000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005909234;
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005909234;
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005909234;
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005909234;
    c->x[10] = (uint32_t)(0x30ull);
    c->x[8] = (uint64_t)(c->x[8] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_HI(c)) goto L_7005909234;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x70059090e4ull; f_7005904400(c);
    if ((uint32_t)c->x[0] == 0) goto L_70059090ec;
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, (uint32_t)c->x[1]); }
L_70059090ec:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x900ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x0ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x7005909104ull; f_7005908c00(c);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x920ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x700590911cull; f_7005908c00(c);
    if (c->x[0] == 0) goto L_7005909134;
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    if (COND_NE(c)) goto L_7005909134;
    { uint64_t ea = c->x[20] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) ^ 0x80000000u;
    { uint64_t ea = c->x[0] + 0x44ull; ST32(ea, VS32(0)); }
L_7005909134:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x940ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x2ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x700590914cull; f_7005908c00(c);
    if (c->x[0] == 0) goto L_7005909164;
    (void)(subs32(c, (uint32_t)c->x[23], 0x2ull));
    if (COND_NE(c)) goto L_7005909164;
    { uint64_t ea = c->x[20] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) ^ 0x80000000u;
    { uint64_t ea = c->x[0] + 0x44ull; ST32(ea, VS32(0)); }
L_7005909164:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x960ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x3ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x700590917cull; f_7005908c00(c);
    if (c->x[0] == 0) goto L_7005909194;
    (void)(subs32(c, (uint32_t)c->x[23], 0x3ull));
    if (COND_NE(c)) goto L_7005909194;
    { uint64_t ea = c->x[20] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) ^ 0x80000000u;
    { uint64_t ea = c->x[0] + 0x44ull; ST32(ea, VS32(0)); }
L_7005909194:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x980ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x4ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x70059091acull; f_7005908c00(c);
    if (c->x[0] == 0) goto L_70059091c4;
    (void)(subs32(c, (uint32_t)c->x[23], 0x4ull));
    if (COND_NE(c)) goto L_70059091c4;
    { uint64_t ea = c->x[20] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) ^ 0x80000000u;
    { uint64_t ea = c->x[0] + 0x44ull; ST32(ea, VS32(0)); }
L_70059091c4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0x700590b000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x9a0ull);
    (void)(subs32(c, (uint32_t)c->x[23], 0x5ull));
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x70059091dcull; f_7005908c00(c);
    if (c->x[0] == 0) goto L_70059091f4;
    (void)(subs32(c, (uint32_t)c->x[23], 0x5ull));
    if (COND_NE(c)) goto L_70059091f4;
    { uint64_t ea = c->x[20] + 0x44ull; c->v[0] = LD32(ea); }
    c->v[0] = VS32(0) ^ 0x80000000u;
    { uint64_t ea = c->x[0] + 0x44ull; ST32(ea, VS32(0)); }
L_70059091f4:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(c->sp + 0x60ull);
    c->x[30] = 0x7005909200ull; f_7005903000(c);
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    if (COND_HI(c)) goto L_7005909220;
    c->x[0] = (uint32_t)((uint32_t)c->x[22] + 0x6ull);
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x64ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[30] = 0x700590921cull; f_7005905000(c);
    goto L_7005909234;
L_7005909220:;
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[1] = (uint32_t)(0x4ull);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005909234ull; f_700590a800(c);
L_7005909234:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 128; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005913000(Cpu *c) {
    if (c->x[0] == 0) goto L_7005913154;
    if (c->x[1] == 0) goto L_7005913154;
    if ((uint32_t)c->x[2] != 0) goto L_7005913154;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x700590e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xe540ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005913154;
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x7005915000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x0ull);
    c->x[11] = (uint32_t)(0x2dull);
    c->x[12] = (uint32_t)(0u | 0u);
L_7005913044:;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[2])));
    if (COND_EQ(c)) goto L_700591306c;
    c->x[9] = (uint64_t)(c->x[9] + 0x40ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    c->x[11] = (uint32_t)(subs32(c, (uint32_t)c->x[11], 0x1ull));
    if (COND_NE(c)) goto L_7005913044;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[1] = (uint32_t)(0xffffffffull);
    goto L_7005913800;
L_700591306c:;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_70059130e8;
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_70059130e8;
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_70059130e8;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[0] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] ^ 0x80000000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] ^ 0x80000000ull);
    { uint64_t ea = c->x[0] + 16; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[1] + 0x8ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005913148;
L_70059130e8:;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    { uint64_t ea = c->x[0] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x18ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] ^ 0x80000000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005913144;
    c->x[0] = (uint32_t)(0x4ull);
    goto L_7005913148;
L_7005913144:;
    c->x[0] = (uint32_t)(0x2ull);
L_7005913148:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[12]);
    { uint64_t ea = c->x[9] + 0x14ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    goto L_7005913800;
L_7005913154:;
    c->x[0] = (uint32_t)(0x3ull);
    c->x[1] = (uint32_t)(0xffffffffull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint32_t)(0u | 0u);
    goto L_7005913800;
L_7005913800:;
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[20] = (uint64_t)(0x700590e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + 0xc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xe00ull);
    c->x[8] = (uint64_t)(c->x[8] + (c->x[19] << 2));
L_7005913824:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[10] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005913824;
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint64_t)(c->x[20] + 0xc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xe20ull);
    { uint64_t ea = c->x[8] + 0; ST32(ea, (uint32_t)c->x[1]); ST32(ea + 4, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[8] + 8; ST32(ea, (uint32_t)c->x[19]); ST32(ea + 4, (uint32_t)c->x[3]); }
    (void)(subs32(c, (uint32_t)c->x[19], 0x1ull));
    if (COND_EQ(c)) goto L_7005913858;
    (void)(subs32(c, (uint32_t)c->x[19], 0x4ull));
    if (COND_NE(c)) goto L_70059138b4;
L_7005913858:;
    (void)(subs32(c, (uint32_t)c->x[1], 0x2dull));
    if (COND_CS(c)) goto L_70059138b4;
    c->x[8] = (uint64_t)(c->x[20] + 0xc000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xe40ull);
    c->x[8] = (uint64_t)(c->x[8] + (c->x[1] << 2));
L_700591386c:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[11] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[11]); c->x[12] = (uint32_t)(st); }
    if ((uint32_t)c->x[12] != 0) goto L_700591386c;
    (void)(subs32(c, (uint32_t)c->x[19], 0x1ull));
    if (COND_NE(c)) goto L_70059138b4;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x4ull));
    if (COND_LS(c)) goto L_700591389c;
    c->x[9] = (uint32_t)((uint32_t)c->x[10] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[10] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_70059138b4;
L_700591389c:;
    c->x[0] = (uint64_t)(0x7005913000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0xf00ull);
    c->x[16] = (uint64_t)(0x700590e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x70059138b4ull; rt_dispatch(c); c->pc = 0;
L_70059138b4:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005a01800(Cpu *c) {
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
    if (c->x[0] == 0) goto L_7005a01980;
    { uint64_t ea = c->x[0] + 0x218ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a01980;
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x100ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a018bcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint64_t)(0x7005a0e000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x110ull);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a01980;
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x108ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a018e4ull; rt_dispatch(c); c->pc = 0;
    c->x[2] = (uint32_t)((uint32_t)c->x[0] & 0x1ull);
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->x[0] + 0x0ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x118ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a01908ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] != 0) goto L_7005a0192c;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[2] = (uint32_t)((uint32_t)c->x[2] ^ 0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0x308ull);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x118ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a0192cull; rt_dispatch(c); c->pc = 0;
L_7005a0192c:;
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_CC(c)) goto L_7005a01968;
    (void)(subs32(c, (uint32_t)c->x[0], 0xbull));
    if (COND_HI(c)) goto L_7005a01968;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4f8ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[8] + 0x4fcull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005a01964ull; f_7005a0b000(c);
    goto L_7005a01980;
L_7005a01968:;
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0xbull);
    c->x[30] = 0x7005a01980ull; f_7005a0b000(c);
L_7005a01980:;
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
    c->pc = 0x700209e08cull; return;
}

void f_7005a02800(Cpu *c) {
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
    if (COND_NE(c)) goto L_7005a028c0;
    c->x[2] = (uint32_t)(0xec02ull);
    c->x[2] = (uint32_t)((c->x[2] & 0xffffffff0000ffffull) | 0x18180000ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x18ull);
    c->x[30] = 0x7005a028c0ull; f_7005a0b000(c);
L_7005a028c0:;
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
    c->pc = 0x70021569bcull; return;
}

void f_7005a03800(Cpu *c) {
    c->x[8] = (uint32_t)((uint32_t)c->x[0] + (uint32_t)c->x[25]);
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
    (void)(subs32(c, (uint32_t)c->x[8], 0x16ull));
    if (COND_LT(c)) goto L_7005a038b4;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[2] = (uint32_t)(0x2aull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1eull);
    c->x[30] = 0x7005a038b4ull; f_7005a0b000(c);
L_7005a038b4:;
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
    c->pc = 0x7001d6712cull; return;
}

void f_7005a05400(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x9c3aull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xee190000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a05540;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005a05540;
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] - 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[9] = (uint64_t)(a); c->x[10] = (uint64_t)(b); }
    c->x[11] = (uint64_t)(0x1fe5ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffff0000ffffull) | 0xb9000000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffff0000ffffffffull) | 0x84200000000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffffull) | 0xf940000000000000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005a05540;
    c->x[11] = (uint64_t)(0x5484ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffff0000ffffull) | 0xf9420000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffff0000ffffffffull) | 0x8000000000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffffull) | 0xd63f000000000000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005a05540;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x300ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, 0u); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x130ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a05508ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005a05540;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[9], 16) & 0xffffull);
    c->x[11] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005a05540;
    c->x[10] = (uint32_t)(0xa5d00000ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[10]); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[10]);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x7ull);
    c->x[30] = 0x7005a05540ull; f_7005a0b000(c);
L_7005a05540:;
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
    c->sp = (uint64_t)(c->sp - 0x40ull);
    c->pc = 0x700016fdd0ull; return;
}

void f_7005a06400(Cpu *c) {
    { uint64_t ea = c->x[19] + 0x4c8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
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
    if (COND_NE(c)) goto L_7005a064b0;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
L_7005a064b0:;
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
    c->pc = 0x7000b2274cull; return;
}

void f_7005a07000(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x4481ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x22340000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a07290;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a070cc;
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x180ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x10000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x40ull);
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x4ull; ST32(ea, (uint32_t)c->x[10]); }
    goto L_7005a07290;
L_7005a070cc:;
    /* hint */
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x320ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x304ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x130ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a07104ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_7005a07290;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a07290;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xbdc1ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xfff00000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_LE(c)) goto L_7005a07290;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005a0713cull; f_7005a0a000(c);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0x320ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x30cull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->sp + 0x30cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x130ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005a07170ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint32_t)(0xfull);
    { uint64_t ea = c->sp + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x8ce8ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x1b70000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[17]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005a071a0;
    c->x[0] = (uint32_t)(0xcull);
    goto L_7005a071ec;
L_7005a071a0:;
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x2a30ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20b0000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[17]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005a071c8;
    c->x[0] = (uint32_t)(0xdull);
    goto L_7005a071ec;
L_7005a071c8:;
    c->x[9] = (uint64_t)(0x7005a0e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3ad0ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20b0000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[17]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005a071ec;
    c->x[0] = (uint32_t)(0xeull);
L_7005a071ec:;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x30cull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[30] = 0x7005a07200ull; f_7005a0b000(c);
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
    c->pc = 0; return;
L_7005a07290:;
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
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x7002a9f6fcull; return;
}

void f_7005a09800(Cpu *c) {
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
    { uint64_t ea = c->x[8] - 20; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[1], 0x0ull));
    if (COND_LE(c)) goto L_7005a09968;
    { uint64_t ea = c->sp + 0x398ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0x7005a0b000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x820ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_EQ(c)) goto L_7005a09968;
    { uint64_t ea = c->sp + 0xd8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x423full);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xf0000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CS(c)) goto L_7005a09968;
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x13ull);
    c->x[30] = 0x7005a098d8ull; f_7005a0b000(c);
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
    c->pc = 0x70009219e0ull; return;
L_7005a09968:;
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
    if (COND_GT(c)) goto L_7005a099fc;
    c->pc = 0x7000921874ull; return;
L_7005a099fc:;
    c->pc = 0x70009219e0ull; return;
}

void f_7005a0a900(Cpu *c) {
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
    if (COND_LE(c)) goto L_7005a0abb8;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a0abb8;
    { uint64_t ea = c->sp + 0x4f8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0x7005a0e000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x148ull);
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x98e0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x890000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_EQ(c)) goto L_7005a0aae0;
    c->x[13] = (uint32_t)(0x858ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x20b0000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0aae0;
    { uint64_t ea = c->sp + 0x558ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x5d10ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x2510000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0aae0;
    { uint64_t ea = c->sp + 0x398ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x49ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x1ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x74ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x2ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x3ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x4ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x5ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x45ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x6ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6eull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x7ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x8ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0x9ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x79ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0xaull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0xbull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x31ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0xcull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x33ull));
    if (COND_NE(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0xdull; uint64_t v = LD8(ea); c->x[14] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[14] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x1ull));
    if (COND_HI(c)) goto L_7005a0ab74;
    { uint64_t ea = c->x[11] + 0xeull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] != 0) goto L_7005a0ab74;
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + 0x52ull);
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x308ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[1]);
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[14]);
    c->x[0] = (uint32_t)(0x26ull);
    c->x[30] = 0x7005a0aad8ull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
L_7005a0aae0:;
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
    c->pc = 0x700209c114ull; return;
L_7005a0ab74:;
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
    if (COND_NE(c)) goto L_7005a0abac;
    { uint64_t ea = c->sp + 0x558ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(c->x[4] - c->x[9]);
L_7005a0abac:;
    /* hint */
    c->x[0] = (uint32_t)(0x21ull);
    c->x[30] = 0x7005a0abb8ull; f_7005a0b000(c);
L_7005a0abb8:;
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
    if (COND_LE(c)) goto L_7005a0ac4c;
    c->pc = 0x700209c114ull; return;
L_7005a0ac4c:;
    c->pc = 0x700209c220ull; return;
}

void f_7005a10b0c(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[8] = (uint32_t)(0x3cull);
    { uint64_t ea = c->x[3] + 0x198ull; ST32(ea, 0u); }
    c->x[21] = (uint32_t)((uint32_t)c->x[2] + (uint32_t)c->x[1] * (uint32_t)c->x[8]);
    { uint64_t ea = c->x[0] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + ((uint64_t)(uint32_t)c->x[21] << 2); uint64_t v = LD32(ea); c->x[24] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[24], 0x1ull));
    { uint64_t ea = c->x[3] + 0x194ull; ST32(ea, (uint32_t)c->x[24]); }
    if (COND_LT(c)) goto L_7005a10b54;
    c->x[8] = (uint32_t)(0x4240ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xf0000ull);
    (void)(subs32(c, (uint32_t)c->x[24], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LS(c)) goto L_7005a10b6c;
L_7005a10b4c:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_7005a10b58;
L_7005a10b54:;
    c->x[0] = (uint32_t)(0x1ull);
L_7005a10b58:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005a10b6c:;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    c->x[30] = 0x7005a10b84ull; f_7005a10dcc(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005a10b58;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005a10b58;
    c->x[22] = (uint32_t)((uint32_t)c->x[21] + ((uint32_t)c->x[21] << 2));
    c->x[23] = (uint64_t)(c->x[19] + 0x40ull);
    c->x[25] = (uint32_t)(0x5ull);
L_7005a10ba4:;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[2] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x7005a10bb4ull; f_7005a10dcc(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a10b4c;
    c->x[25] = (uint64_t)(subs64(c, c->x[25], 0x1ull));
    c->x[23] = (uint64_t)(c->x[23] + 0x40ull);
    c->x[22] = (uint32_t)((uint32_t)c->x[22] + 0x1ull);
    if (COND_NE(c)) goto L_7005a10ba4;
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(c->x[20] + 0x18ull);
    { uint64_t ea = c->x[9] + (c->x[21] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x180ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[19] + 0x184ull);
L_7005a10be0:;
    { uint64_t ea = c->x[10] + (c->x[8] << 3); uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + (c->x[21] << 2); uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + (c->x[8] << 2); ST32(ea, (uint32_t)c->x[11]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x4ull));
    if (COND_NE(c)) goto L_7005a10be0;
    { uint64_t ea = c->x[20] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + (c->x[21] << 2); uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[24])));
    if (COND_NE(c)) goto L_7005a10b4c;
    c->x[8] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[19] + 0x40ull);
    c->x[10] = (uint32_t)(0x1ull);
L_7005a10c14:;
    c->x[11] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[10]);
L_7005a10c1c:;
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[11]);
    c->x[14] = (uint32_t)(0u | (uint32_t)c->x[12]);
    c->x[15] = (uint64_t)(0ull | 0ull);
    c->x[13] = (uint64_t)(c->x[9] + (c->x[13] << 6));
    c->x[14] = (uint64_t)(c->x[9] + (c->x[14] << 6));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - 0x1ull);
L_7005a10c34:;
    { uint64_t ea = c->x[13] + c->x[15]; uint64_t v = LD8(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + c->x[15]; uint64_t v = LD8(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[17])));
    if (COND_NE(c)) goto L_7005a10c58;
    if ((uint32_t)c->x[16] == 0) goto L_7005a10c84;
    (void)(subs64(c, c->x[15], 0x3full));
    c->x[15] = (uint64_t)(c->x[15] + 0x1ull);
    if (COND_NE(c)) goto L_7005a10c34;
    goto L_7005a10c84;
L_7005a10c58:;
    if (COND_CC(c)) goto L_7005a10c84;
    c->x[15] = (uint64_t)(0ull | 0ull);
L_7005a10c60:;
    { uint64_t ea = c->x[13] + c->x[15]; uint64_t v = LD8(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + c->x[15]; uint64_t v = LD8(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + c->x[15]; ST8(ea, (uint32_t)c->x[16]); }
    { uint64_t ea = c->x[13] + c->x[15]; ST8(ea, (uint32_t)c->x[17]); }
    c->x[15] = (uint64_t)(c->x[15] + 0x1ull);
    (void)(subs64(c, c->x[15], 0x40ull));
    if (COND_NE(c)) goto L_7005a10c60;
    c->x[11] = (uint32_t)((uint32_t)c->x[11] - 0x1ull);
    if ((uint32_t)c->x[12] != 0) goto L_7005a10c1c;
L_7005a10c84:;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[10], 0x5ull));
    if (COND_NE(c)) goto L_7005a10c14;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x198ull; ST32(ea, (uint32_t)c->x[0]); }
    goto L_7005a10b58;
}

void f_7005a10ca0(Cpu *c) {
    c->x[8] = (uint64_t)(0ull | 0ull);
L_7005a10ca4:;
    { uint64_t ea = c->x[0] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005a10d48;
    if ((uint32_t)c->x[9] == 0) goto L_7005a10cc4;
    (void)(subs64(c, c->x[8], 0x3full));
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    if (COND_NE(c)) goto L_7005a10ca4;
L_7005a10cc4:;
    { uint64_t ea = c->x[0] + 0x180ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x180ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005a10d48;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[0] + 0x184ull);
    c->x[10] = (uint64_t)(c->x[1] + 0x184ull);
L_7005a10ce0:;
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[8]; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_7005a10d48;
    c->x[8] = (uint64_t)(c->x[8] + 0x4ull);
    (void)(subs64(c, c->x[8], 0x10ull));
    if (COND_NE(c)) goto L_7005a10ce0;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[10] = (uint64_t)(c->x[1] + 0x40ull);
    c->x[0] = (uint32_t)(0x1ull);
L_7005a10d0c:;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_7005a10d10:;
    { uint64_t ea = c->x[9] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_7005a10d48;
    if ((uint32_t)c->x[12] == 0) goto L_7005a10d30;
    (void)(subs64(c, c->x[11], 0x3full));
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    if (COND_NE(c)) goto L_7005a10d10;
L_7005a10d30:;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x40ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x40ull);
    (void)(subs64(c, c->x[8], 0x5ull));
    if (COND_NE(c)) goto L_7005a10d0c;
    goto L_7005a10d4c;
L_7005a10d48:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005a10d4c:;
    c->pc = 0; return;
}

void f_7005b01000(Cpu *c) {
    { uint64_t ea = c->x[19] + 0x500ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(ROR32((uint32_t)c->x[0], 31) & 0xfffffffeull);
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); c->sp = ea; }
    c->x[8] = (uint64_t)(0x7005b0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[0], 1) & 0x7fffffffull);
    { uint64_t ea = c->x[8] + 0x4ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x8ull; ST32(ea, (uint32_t)c->x[0]); }
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->pc = 0x70009e79e0ull; return;
}

void f_7005b02000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    c->x[14] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[14]); }
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_NE(c)) goto L_7005b0204c;
    c->x[15] = (uint64_t)(0x7005b0e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x180ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x14ull; ST32(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005b0204c:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->nzcv = c->x[14] & 0xf0000000ull;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    { uint64_t ea = c->x[0] + 0x1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x7000cf7f60ull; return;
}

void f_7005b03000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    c->x[14] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[14]); }
    { uint64_t ea = c->x[3] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x6c73ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x746f0000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x5full));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x7ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x2full));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0x6f66ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffff0000ffffull) | 0x746f0000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffff0000ffffffffull) | 0x727000000000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffffull) | 0x6e69000000000000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x2e74ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x61730000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x14ull; uint64_t v = LD16(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x76ull));
    if (COND_NE(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x5ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[12], 0x9ull));
    if (COND_HI(c)) goto L_7005b030e4;
    { uint64_t ea = c->x[8] + 0x6ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[13] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x9ull));
    if (COND_HI(c)) goto L_7005b030e4;
    c->x[9] = (uint32_t)(0xaull);
    c->x[12] = (uint32_t)((uint32_t)c->x[13] + (uint32_t)c->x[12] * (uint32_t)c->x[9]);
    (void)(subs32(c, (uint32_t)c->x[12], 0x5ull));
    if (COND_HI(c)) goto L_7005b030e4;
    c->x[15] = (uint64_t)(0x7005b0e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x180ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x24ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x28ull; ST32(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[15] + 0x2cull; ST32(ea, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[15] + 0x48ull; ST64(ea, c->x[0]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[15] + 0x40ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005b030e4:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->nzcv = c->x[14] & 0xf0000000ull;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    { uint64_t ea = c->x[0] + 0xa8ull; ST64(ea, c->x[1]); }
    c->pc = 0x700089fc50ull; return;
}
