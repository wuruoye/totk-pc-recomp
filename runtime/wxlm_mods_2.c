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

void f_7005203800(Cpu *c) {
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
    if ((uint32_t)c->x[22] != 0) goto L_7005203a90;
    c->x[8] = (uint32_t)(0xedbeull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x54d0000ull);
    (void)(subs32(c, (uint32_t)c->x[3], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005203a90;
    c->x[8] = (uint64_t)(c->sp + 0x578ull);
    (void)(subs64(c, c->x[2], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005203a90;
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[24])));
    if (COND_NE(c)) goto L_7005203a90;
    { uint64_t ea = c->sp + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0x700520e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] - c->x[9]);
    c->x[9] = (uint32_t)(0xdd00ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2090000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_7005203a90;
    { uint64_t ea = c->sp + 0x3b8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005203904;
    { uint64_t ea = c->sp + 0x3e8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005203a90;
    { uint64_t ea = c->x[9] + 0x134ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_7005203904:;
    /* hint */
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[8], 16) & 0xffffull);
    c->x[10] = (uint32_t)(0xa5d0ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005203a90;
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_LT(c)) goto L_7005203a90;
    c->x[9] = (uint32_t)(0xfffeull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_GT(c)) goto L_7005203a90;
    { uint64_t ea = c->sp + 0x3ccull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    if (COND_LE(c)) goto L_7005203a90;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    if (COND_LT(c)) goto L_7005203a90;
    c->x[11] = (uint32_t)(adds32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005203a90;
    c->x[12] = (uint32_t)(0x3fffffffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    if (COND_HI(c)) goto L_7005203a90;
    c->x[2] = (uint32_t)(adds32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[10])));
    if (COND_VS(c)) goto L_7005203a90;
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[3] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->x[9] = (uint32_t)(0xa5d00000ull);
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | (uint32_t)c->x[9]);
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[3]); }
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x7005203984ull; f_7005204000(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005203a90;
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_EQ(c)) goto L_7005203b48;
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
    c->x[30] = 0x70052039bcull; f_7005206000(c);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x3b8ull; ST32(ea, (uint32_t)c->x[8]); }
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
L_7005203a90:;
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
    c->x[17] = (uint64_t)(0xab14ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[30] = (uint64_t)(c->x[30] + c->x[17]);
    c->pc = 0; f_700016fdcc(c); c->pc = 0x700209ab14ull; return;
L_7005203b48:;
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

void f_7005301b00(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x70023bc078ull; f_70023bc074(c); c->pc = 0; return;
}

void f_7005301c00(Cpu *c) {
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
    c->x[3] = (uint64_t)(c->x[3] + 0xf00ull);
    c->x[30] = 0x7005301cb0ull; f_7005305664(c);
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

void f_7005302b00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    c->pc = 0x7001d23a50ull; f_7001d23a4c(c); c->pc = 0; return;
}

void f_7005302c00(Cpu *c) {
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005302ee0;
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
    c->x[3] = (uint64_t)(c->x[3] + 0xf00ull);
    c->x[30] = 0x7005302cb4ull; f_70053058ec(c);
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
    c->pc = 0x7001d2529cull; return;
L_7005302ee0:;
    c->pc = 0x7001d251b4ull; return;
}

void f_7005304548(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, VS64(10)); c->sp = ea; }
    { uint64_t ea = c->sp + 8; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 24; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->x[0] + 36; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[0] = b; }
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[1] + 0x1cull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x30ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005304578ull; f_700530a400(c);
    { uint64_t ea = c->x[19] + 0x28ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x24ull; ST32(ea, VS32(0)); }
    c->nzcv = cmp_s(c, VSF32(1), 0);
    if (COND_PL(c)) goto L_700530459c;
    { uint64_t ea = c->x[19] + 0x2cull; c->v[2] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    if (COND_PL(c)) goto L_700530459c;
    c->v[0] = VS32(2);
    { uint64_t ea = c->x[19] + 0x24ull; ST32(ea, VS32(2)); }
L_700530459c:;
    c->nzcv = cmp_s(c, VSF32(1), 0);
    if (COND_LE(c)) goto L_70053045b8;
    { uint64_t ea = c->x[19] + 0x2cull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_70053045b8;
    c->v[0] = VS32(1);
    { uint64_t ea = c->x[19] + 0x24ull; ST32(ea, VS32(1)); }
L_70053045b8:;
    { uint64_t ea = c->x[19] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    { uint64_t ea = c->x[19] + 0x20ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 10, 3, 0);
    fp_op_s(c, FOP_MUL, 8, 1, 0);
    fp_op_s(c, FOP_MUL, 9, 2, 0);
    if ((uint32_t)c->x[8] == 0) goto L_7005304644;
    c->x[8] = (uint32_t)(0x44610000ull);
    { uint64_t ea = c->x[20] + 0x14ull; c->v[0] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    { uint64_t ea = c->x[20] + 0x1cull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 9, 0, 1, 9);
    fp_op_s(c, FOP_MUL, 0, 9, 9);
    fp_fma_s(c, 0, 0, 0, 8, 8, 0);
    fp_fma_s(c, 0, 0, 0, 10, 10, 0);
    c->x[30] = 0x70053045fcull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->v[1] = 0x0ull;
    c->v[3] = 0x0ull;
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[2] = 0x0ull;
    if (COND_LE(c)) goto L_7005304630;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 2, 9, 0);
    fp_op_s(c, FOP_MUL, 3, 10, 0);
L_7005304630:;
    { uint64_t ea = c->x[19] + 24; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[19] + 0x20ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[21] != 0) goto L_7005304760;
    goto L_700530477c;
L_7005304644:;
    { uint64_t ea = c->x[19] + 60; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[19] + 0x48ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[19] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    { uint64_t ea = c->x[19] + 0xcull; c->v[6] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 0, 1);
    fp_op_s(c, FOP_MUL, 2, 2, 1);
    fp_op_s(c, FOP_ADD, 0, 3, 0);
    { uint64_t ea = c->x[19] + 0x44ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 2, 6, 2);
    fp_op_s(c, FOP_MUL, 1, 3, 1);
    { uint64_t ea = c->x[19] + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[3] = b; }
    fp_op_s(c, FOP_SUB, 0, 0, 5);
    { uint64_t ea = c->x[19] + 0x0ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_ADD, 1, 4, 1);
    fp_op_s(c, FOP_SUB, 2, 2, 5);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x7005304694ull; f_700530a428(c);
    { uint64_t ea = c->x[19] + 0x38ull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(1), 0);
    if (COND_GT(c)) goto L_70053046a4;
    { uint64_t ea = c->x[20] + 0x18ull; c->v[1] = LD32(ea); }
L_70053046a4:;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LT(c)) goto L_7005304758;
    { uint64_t ea = c->x[19] + 0x34ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70053046c4;
    c->v[0] = 0x3f000000ull;
    { uint64_t ea = c->x[20] + 0x20ull; c->v[1] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_LS(c)) goto L_700530476c;
L_70053046c4:;
    c->v[0] = 0x41a00000ull;
    { uint64_t ea = c->x[20] + 0x18ull; c->v[1] = LD32(ea); }
    c->v[3] = 0xbf800000ull;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x30ull; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    { uint64_t ea = c->x[20] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
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
    { uint64_t ea = c->x[19] + 40; ST32(ea, VS32(2)); ST32(ea + 4, VS32(0)); }
    if (COND_HI(c)) goto L_7005304720;
    { uint64_t ea = c->x[19] + 0x24ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x2cull; ST32(ea, VS32(0)); }
L_7005304720:;
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[2] = 0x3400000034000000ull;
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    if (COND_HI(c)) goto L_7005304758;
    c->x[8] = (uint32_t)(0x44610000ull);
    { uint64_t ea = c->x[20] + 0x14ull; c->v[0] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_MI(c) ? VS32(1) : VS32(0);
    { uint64_t ea = c->x[19] + 0x2cull; ST32(ea, VS32(0)); }
L_7005304758:;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[21] == 0) goto L_700530477c;
L_7005304760:;
    if ((uint32_t)c->x[8] == 0) goto L_7005304798;
L_7005304764:;
    { uint64_t ea = c->x[20] + 0x1cull; c->v[0] = LD32(ea); }
    goto L_70053047dc;
L_700530476c:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x34ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[21] != 0) goto L_7005304760;
L_700530477c:;
    if ((uint32_t)c->x[8] == 0) goto L_7005304798;
    { uint64_t ea = c->x[19] + 0x58ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005304764;
    { uint64_t ea = c->x[19] + 76; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->x[19] + 0x54ull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1cull; c->v[0] = LD32(ea); }
    goto L_70053047dc;
L_7005304798:;
    { uint64_t ea = c->x[19] + 0x48ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x1cull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(1), 0);
    if (COND_LE(c)) goto L_70053047dc;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    { uint64_t ea = c->x[19] + 60; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[5] = b; }
    { uint64_t ea = c->x[19] + 0x44ull; c->v[6] = LD32(ea); }
    c->v[2] = COND_MI(c) ? VS32(0) : VS32(1);
    fp_op_s(c, FOP_DIV, 3, 2, 0);
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    { uint64_t ea = c->x[19] + 0x48ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_MUL, 4, 4, 3);
    fp_op_s(c, FOP_MUL, 5, 5, 3);
    fp_op_s(c, FOP_MUL, 3, 6, 3);
    fp_op_s(c, FOP_ADD, 8, 8, 4);
    fp_op_s(c, FOP_ADD, 9, 9, 5);
    fp_op_s(c, FOP_ADD, 10, 10, 3);
L_70053047dc:;
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 2, 9, 0);
    { uint64_t ea = c->x[19] + 0x14ull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 10, 0);
    { uint64_t ea = c->x[19] + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 76; ST32(ea, VS32(8)); ST32(ea + 4, VS32(9)); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x54ull; ST32(ea, VS32(10)); }
    { uint64_t ea = c->sp + 24; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    fp_op_s(c, FOP_ADD, 1, 3, 1);
    fp_op_s(c, FOP_ADD, 2, 4, 2);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, (uint32_t)c->x[8]); }
    fp_op_s(c, FOP_ADD, 0, 5, 0);
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->x[19] + 12; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[19] + 0x14ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[10] = LD64(ea); c->sp = c->sp + 64; }
    c->pc = 0; return;
}

void f_70053054f8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | c->x[2]);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[3]); }
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[30] = 0x7005305520ull; f_7005305558(c);
    c->x[8] = (uint64_t)(c->x[20] + 0x8ull);
L_7005305524:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005305524;
    c->x[8] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[9] = (uint32_t)(0x1ull);
    stl32(c->x[8], c->x[9]);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = c->x[1]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005305558(Cpu *c) {
    c->x[9] = (uint64_t)(lda32(c->x[1]));
    c->x[8] = (uint32_t)(0x5441ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x31520000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_EQ(c)) goto L_7005305638;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xcb4ull);
    c->x[10] = (uint32_t)(0x14000000ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xe2d0000ull);
    c->x[14] = (uint32_t)(0x3a4cull);
    c->x[13] = (uint32_t)(0x390ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[0] - (uint32_t)c->x[9]);
    c->x[14] = (uint32_t)((c->x[14] & 0xffffffff0000ffffull) | 0x1d20000ull);
    c->x[15] = (uint64_t)(0xffffffffffff4a00ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[12] + (uint32_t)c->x[11]);
    c->x[12] = (uint64_t)(0x700530a000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x8c4ull);
    c->x[10] = (uint32_t)(((uint32_t)c->x[10] & 0xfc000000ull) | ((((uint32_t)c->x[10] & 0x3c000000ull) | (ROR32((uint32_t)c->x[11], 2) & 0xc3ffffffull)) & 0x3ffffffull));
    c->x[11] = (uint32_t)(0x1ull);
    goto L_70053055bc;
L_70053055a8:;
    c->x[17] = (uint32_t)(0u | 0u);
L_70053055ac:;
    c->x[13] = (uint64_t)(subs64(c, c->x[13], 0x18ull));
    c->x[11] = (uint32_t)((uint32_t)c->x[17] & (uint32_t)c->x[11]);
    c->x[12] = (uint64_t)(c->x[12] + 0x18ull);
    if (COND_EQ(c)) goto L_700530562c;
L_70053055bc:;
    { uint64_t ea = c->x[12] - 12; uint64_t v = LD64(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] - 4; uint64_t v = LD32(ea); c->x[18] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(c->x[17] + c->x[9]);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[2], (uint32_t)((uint32_t)c->x[18])));
    if (COND_NE(c)) goto L_7005305608;
L_70053055d4:;
    { uint64_t ea = c->x[16] + 0x4ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD32(ea); c->x[18] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[18])));
    if (COND_NE(c)) goto L_70053055a8;
    { uint64_t ea = c->x[16] + 0x8ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x4ull; uint64_t v = LD32(ea); c->x[18] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[18])));
    if (COND_NE(c)) goto L_70053055a8;
    { uint64_t ea = c->x[16] + 0xcull; uint64_t v = LD32(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + 0x8ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[17])));
    c->x[17] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_70053055ac;
L_7005305608:;
    (void)(subs64(c, c->x[17], (uint64_t)(c->x[14])));
    c->x[17] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_70053055ac;
    (void)(subs32(c, (uint32_t)c->x[2], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_70053055ac;
    { uint64_t ea = c->x[0] + c->x[15]; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[18])));
    if (COND_NE(c)) goto L_70053055a8;
    goto L_70053055d4;
L_700530562c:;
    c->x[9] = (uint64_t)(c->x[1] + 0x4ull);
    stl32(c->x[9], c->x[11]);
    stl32(c->x[1], c->x[8]);
L_7005305638:;
    c->pc = 0; return;
}

void f_70053058ec(Cpu *c) {
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700530598c;
    { uint64_t ea = c->sp - 128; ST64(ea, VS64(10)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x20ull);
    c->x[9] = (uint64_t)(c->x[2] + 0x1d000ull);
    c->x[23] = (uint64_t)(c->x[9] + 0x690ull);
    c->x[9] = (uint64_t)(c->x[23] + 0x4ull);
    c->x[9] = (uint64_t)(lda32(c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    if (COND_NE(c)) goto L_700530596c;
    c->x[9] = (uint64_t)(lda32(c->x[23]));
    (void)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_NE(c)) goto L_700530596c;
    { uint64_t ea = c->x[8] + 0x98ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[19], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700530596c;
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[21], 0x3ffull));
    if (COND_HI(c)) goto L_700530596c;
    c->x[9] = (uint64_t)(c->x[2] + 0x34000ull);
    c->x[20] = (uint64_t)(c->x[9] + 0xc80ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005305990;
L_700530596c:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp; c->v[10] = LD64(ea); c->sp = c->sp + 128; }
L_700530598c:;
    c->pc = 0; return;
L_7005305990:;
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[19] - 0x10000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_700530596c;
    c->x[9] = (uint64_t)(c->x[19] & 0x7ull);
    if (c->x[9] != 0) goto L_700530596c;
    { uint64_t ea = c->x[8] + 0xa0ull; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[24] - 0x10000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_700530596c;
    c->x[9] = (uint64_t)(c->x[24] & 0x7ull);
    if (c->x[9] != 0) goto L_700530596c;
    { uint64_t ea = c->x[8] + 0xe8ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[22] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700530596c;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700530596c;
    c->x[8] = (uint64_t)(ROR64(c->x[22], 8) & 0xffffffffffffffull);
    (void)(subs64(c, c->x[8], 0x101ull));
    if (COND_CC(c)) goto L_700530596c;
    c->x[25] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x7005305a00ull; f_7005305bc0(c);
    { uint64_t ea = c->x[23] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700530596c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint32_t)(0x228ull);
    c->x[30] = 0x7005305a20ull; f_7005305bc0(c);
    { uint64_t ea = c->x[23] + 0x38ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700530596c;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x120ull);
    c->x[30] = 0x7005305a44ull; f_7005305bc8(c);
    c->v[9] = VS32(0);
    c->v[10] = VS32(1);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->v[8] = VS32(2);
    c->x[1] = (uint32_t)(0x114ull);
    c->x[27] = (uint32_t)(VS32(10));
    c->x[28] = (uint32_t)(VS32(9));
    c->x[26] = (uint32_t)(VS32(8));
    c->x[30] = 0x7005305a68ull; f_7005305bc8(c);
    c->x[8] = (uint32_t)((uint32_t)c->x[27] & 0x7fffffffull);
    c->x[9] = (uint32_t)(0x7f800000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[26] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    c->x[10] = (uint32_t)((uint32_t)c->x[28] & 0x7fffffffull);
    c->x[0] = (uint64_t)(0ull | c->x[25]);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[9])));
    c->x[11] = (uint32_t)(0x7f7fffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_GT(c)) goto L_700530596c;
    if ((uint32_t)c->x[8] == 0) goto L_700530596c;
    if ((uint32_t)c->x[9] == 0) goto L_700530596c;
    c->x[9] = (uint32_t)(VS32(1));
    c->x[11] = (uint32_t)(VS32(2));
    c->x[10] = (uint32_t)(0x7f800000ull);
    c->x[8] = (uint32_t)(VS32(0));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    c->x[9] = (uint32_t)((uint32_t)c->x[11] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_700530596c;
    if ((uint32_t)c->x[8] == 0) goto L_700530596c;
    if ((uint32_t)c->x[9] == 0) goto L_700530596c;
    { uint64_t ea = c->x[24] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x7fffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[9] - 0x800000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[9] - 0x1ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[10], 24) & 0xffull);
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[12])));
    c->x[12] = (uint32_t)(0x7f800000ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], 0x7full));
    c->x[10] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    c->x[10] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[10]));
    c->x[11] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[11]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[12])));
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[11] : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((COND_LE(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[10]);
    if (((c->x[9] >> 0) & 1) != 0) goto L_700530596c;
    c->x[9] = (uint32_t)(0x42c80000ull);
    c->v[3] = (uint32_t)c->x[8];
    c->v[4] = (uint32_t)c->x[9];
    c->nzcv = cmp_s(c, VSF32(3), VSF32(4));
    if (COND_GT(c)) goto L_700530596c;
    { uint64_t ea = c->x[22] - 52; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] - 56; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] - 72; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    { uint64_t ea = c->x[22] - 60; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    { uint64_t ea = c->x[22] - 64; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[11] | ((uint32_t)c->x[10] << 1));
    c->x[13] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[22] - 68; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    { uint64_t ea = c->x[20] + 40; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, 0u); }
    c->x[8] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[10] | ((uint32_t)c->x[13] << 2));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[11], 0x0ull));
    { uint64_t ea = c->x[20] + 0; ST32(ea, 0u); ST32(ea + 4, (uint32_t)c->x[21]); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] << 3));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], 0x0ull));
    { uint64_t ea = c->x[20] + 16; ST32(ea, VS32(9)); ST32(ea + 4, VS32(10)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] << 4));
    c->x[10] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[20] + 24; ST32(ea, VS32(8)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[20] + 32; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[10] << 5));
    { uint64_t ea = c->x[20] + 8; ST32(ea, (uint32_t)c->x[9]); ST32(ea + 4, (uint32_t)c->x[23]); }
    stl32(c->x[20], c->x[8]);
    goto L_700530596c;
}

void f_7005307b40(Cpu *c) {
    { uint64_t ea = c->sp - 144; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x2000ull);
    c->sp = (uint64_t)(c->sp - 0x4f0ull);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[22] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x20ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x28ull; uint64_t v = LD32(ea); c->x[5] = (uint64_t)(v); }
    c->x[27] = (uint64_t)(c->sp + 0x2000ull);
    c->x[28] = (uint64_t)(c->sp + 0x40ull);
    c->x[27] = (uint64_t)(c->x[27] + 0x40ull);
    c->pc = c->x[20]; c->x[30] = 0x7005307ba4ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(c->x[19] + 0x28ull);
L_7005307ba8:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005307ba8;
    c->x[8] = (uint64_t)(c->x[19] + 0x4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    if ((uint32_t)c->x[8] == 0) goto L_7005308310;
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[9] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_7005308310;
    c->x[8] = (uint64_t)(c->x[8] & 0x3ull);
    if (c->x[8] != 0) goto L_7005308310;
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_7005308310;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_7005308310;
    c->x[25] = (uint64_t)(c->x[19] + 0x10ull);
    c->x[8] = (uint32_t)(0x1ull);
L_7005307c04:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[25]));
    if ((uint32_t)c->x[9] != 0) goto L_7005307de0;
    { uint32_t st = stx32(c, c->x[25], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005307c04;
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700530830c;
    { uint64_t ea = c->x[19] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    c->x[11] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[19] + 0xf0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[27] + 0x450ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 0x440ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 0x490ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[27] + 0x430ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 208; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 0x420ull; ST128(ea, c->v[2]); }
    { uint64_t ea = c->x[27] + 0x480ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 0xc0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x470ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 0x460ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 0x400ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 0x410ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[2] = b; }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[1] = LD32(ea); }
    c->x[10] = (uint32_t)(VS32(1));
    c->x[9] = (uint32_t)(VS32(2));
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
    if (COND_GT(c)) goto L_700530830c;
    if ((uint32_t)c->x[8] == 0) goto L_700530830c;
    if ((uint32_t)c->x[9] == 0) goto L_700530830c;
    { uint64_t ea = c->x[29] - 184; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[0]); }
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    fp_op_s(c, FOP_SUB, 0, 0, 3);
    { uint64_t ea = c->x[29] - 176; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 2, 2, 2);
    fp_fma_s(c, 0, 0, 0, 0, 0, 2);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x7005307cd0ull; f_700530a428(c);
    c->v[1] = 0x41000000ull;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GE(c)) goto L_700530830c;
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005307de8;
    { uint64_t ea = c->x[27] + 0x470ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] != 0) goto L_7005307de8;
    { uint64_t ea = c->x[29] - 100; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005307de8;
    { uint64_t ea = c->x[19] + 0x2208ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700530830c;
    { uint64_t ea = c->x[19] + 0x220cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700530830c;
    c->x[8] = (uint32_t)(0x2200ull);
    c->x[20] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[8] = (uint64_t)(lda32(c->x[20]));
    if ((uint32_t)c->x[8] != 0) goto L_700530830c;
    c->x[8] = (uint32_t)(0x2200ull);
    c->x[22] = (uint32_t)(0x1ull);
    c->x[0] = (uint64_t)(c->sp + 0xd8ull);
    c->x[8] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x648ull);
    stl32(c->x[8], c->x[22]);
    c->x[8] = (uint64_t)(c->x[19] + 0x10ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST32(ea, 0u); }
    stl32(c->x[8], 0ull);
    c->x[30] = 0x7005307d50ull; f_70053040b4(c);
    c->x[2] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[3] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005307d64ull; f_7005308448(c);
L_7005307d64:;
    c->x[8] = (uint64_t)(ldx32(c, c->x[25]));
    if ((uint32_t)c->x[8] != 0) goto L_70053082c4;
    { uint32_t st = stx32(c, c->x[25], c->x[22]); c->x[8] = (uint32_t)(st); }
    if ((uint32_t)c->x[8] != 0) goto L_7005307d64;
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053082ec;
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_70053082ec;
    c->x[8] = (uint64_t)(c->x[19] + 0xcull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[29] - 220; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[9]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_HI(c)) goto L_70053082ec;
    c->v[0] = 0x41f00000ull;
    { uint64_t ea = c->x[29] - 92; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0x2090ull);
    c->x[0] = (uint64_t)(c->sp + 0xd8ull);
    c->x[1] = (uint64_t)(c->x[19] + c->x[8]);
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    c->x[30] = 0x7005307dc0ull; f_7005304e84(c);
    c->x[0] = (uint64_t)(c->x[19] + 0xf8ull);
    c->x[1] = (uint64_t)(c->sp + 0xd8ull);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005307dd0ull; f_7005304000(c);
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x21fcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x2210ull);
    goto L_70053082f0;
L_7005307de0:;
    c->excl_addr = ~0ull;
    goto L_7005308310;
L_7005307de8:;
    c->x[8] = (uint64_t)(c->x[19] + 0x10ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST32(ea, 0u); }
    stl32(c->x[8], 0ull);
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005307e20;
    c->x[8] = (uint64_t)(c->x[19] + 0xcull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[29] - 220; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[9]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CC(c)) goto L_7005307e38;
L_7005307e20:;
    c->x[8] = (uint64_t)(c->x[19] + 0x50ull);
L_7005307e24:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005307e24;
    goto L_7005308310;
L_7005307e38:;
    { uint64_t ea = c->x[22] + 0x10ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->sp + 0x2000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x240ull);
    c->x[9] = (uint64_t)(c->x[8] - c->x[21]);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_7005307e6c;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_7005307e54:;
    { uint64_t ea = c->x[21] + c->x[9]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; ST8(ea, (uint32_t)c->x[10]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x200ull));
    if (COND_NE(c)) goto L_7005307e54;
    goto L_7005307eec;
L_7005307e6c:;
    { uint64_t ea = c->x[21] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[27] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[2] = b; }
    { uint64_t ea = c->x[27] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[2]); }
    { uint64_t ea = c->x[21] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 576; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 608; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 640; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 672; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 704; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 736; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 768; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 800; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 832; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 864; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 896; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 928; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 960; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[21] + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[27] + 992; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
L_7005307eec:;
    c->x[0] = (uint64_t)(c->sp + 0x2000ull);
    c->x[1] = (uint32_t)(0x60ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x240ull);
    c->x[30] = 0x7005307efcull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(c->x[21] + 0x128ull);
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_70053082b0;
    c->x[0] = (uint64_t)(c->sp + 0xd8ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x1f68ull);
    c->x[30] = 0x7005307f18ull; f_70053040b4(c);
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    if ((uint32_t)c->x[0] == 0) goto L_70053082a0;
    c->x[8] = (uint64_t)(c->sp + 0x2000ull);
    c->v[12] = 0x3f000000ull;
    c->v[13] = 0x3f800000ull;
    c->x[8] = (uint64_t)(c->x[8] + 0x40ull);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(c->x[19] + 0x38ull);
    c->x[9] = (uint64_t)(c->x[19] + 0x58ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x128ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    goto L_7005307f68;
L_7005307f4c:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[22] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[0])));
    if (COND_CS(c)) goto L_70053082a0;
L_7005307f68:;
    { uint64_t ea = c->x[27] + 0x460ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x470ull; c->v[1] = LD128(ea); }
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[23]);
    { uint64_t ea = c->x[27] + 0x480ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x490ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 96; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[27] + 0x420ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x430ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[28] + 0x80ull; ST128(ea, c->v[2]); }
    { uint64_t ea = c->x[27] + 0x440ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->sp + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[27] + 0x450ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x400ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[28] + 0x90ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 128; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[27] + 0x410ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[29] - 152; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 64; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[29] - 160; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[30] = 0x7005307fbcull; f_7005304da4(c);
    c->x[9] = (uint32_t)(0x648ull);
    c->x[8] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(c->sp + 0x40ull);
    c->x[22] = (uint64_t)(c->x[8] + c->x[23] * c->x[9]);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0x88ull; ST32(ea, VS32(2)); }
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005307fe0ull; f_700530482c(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x2ull));
    if (COND_CC(c)) goto L_70053082bc;
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_7005307f4c;
    c->x[8] = (uint64_t)(c->x[22] + 0x14ull);
    c->x[26] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[8]); }
L_7005308004:;
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_70053082d4;
    { uint64_t ea = c->x[27] + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint32_t)(0xcull);
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[9] + c->x[26] * c->x[8]);
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x2000ull);
    c->x[4] = (uint32_t)(0x20ull);
    c->x[5] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[28] + 0x2000ull; ST128(ea, c->v[0]); }
    c->x[2] = (uint64_t)(c->x[2] + 0x40ull);
    { uint64_t ea = c->x[28] + 0x2010ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[24] = (uint64_t)(c->x[23] - 0xcull);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->x[28] + 0x2020ull; ST128(ea, c->v[0]); }
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    { uint64_t ea = c->x[28] + 0x2030ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[27] + 0x20ull; ST8(ea, 0u); }
    { uint64_t ea = c->x[28] + 0x2040ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2050ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x2060ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2070ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x2060ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    { uint64_t ea = c->x[28] + 0x2080ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2090ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x20a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x20b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x20c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x20d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x20e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x20f0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 768; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x2100ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2110ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 800; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x2120ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2130ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 832; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[27] + 0x120ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[29] - 0xe0ull);
    c->x[3] = (uint64_t)(c->x[8] + 0x20ull);
    { uint64_t ea = c->x[28] + 0x2140ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2150ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 864; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x2160ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2170ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 896; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[27] + 0x170ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[28] + 0x2180ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x2190ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 928; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x21a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x21b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 960; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x21c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x21d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[27] + 992; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[28] + 0x21e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0x21f0ull; ST128(ea, c->v[1]); }
    c->pc = c->x[20]; c->x[30] = 0x7005308124ull; rt_dispatch(c); c->pc = 0;
L_7005308124:;
    c->x[8] = (uint64_t)(ldx64(c, c->x[21]));
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint32_t st = stx64(c, c->x[21], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005308124;
    { uint64_t ea = c->x[27] + 0x20ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005308154;
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[26] = (uint64_t)(c->x[26] + 0x1ull);
    (void)(subs64(c, c->x[26], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_7005308004;
    goto L_7005307f4c;
L_7005308154:;
    c->x[0] = (uint64_t)(c->sp + 0x2000ull);
    c->x[1] = (uint32_t)(0x24ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[30] = 0x7005308164ull; f_7005305bc8(c);
    c->x[0] = (uint64_t)(c->sp + 0x2000ull);
    c->x[1] = (uint32_t)(0x30ull);
    { uint64_t ea = c->sp + 52; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    { uint64_t ea = c->sp + 0x3cull; ST32(ea, VS32(2)); }
    c->x[30] = 0x700530817cull; f_7005305bc8(c);
    c->x[2] = (uint64_t)(c->sp + 0x34ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    c->v[8] = VS32(0);
    c->v[9] = VS32(1);
    c->v[10] = VS32(2);
    c->x[30] = 0x7005308198ull; f_70053052a0(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053082bc;
    c->x[8] = (uint32_t)(VS32(9));
    c->x[9] = (uint32_t)(VS32(10));
    c->x[11] = (uint32_t)(0x7f800000ull);
    c->x[10] = (uint32_t)(VS32(8));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[11])));
    c->x[11] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_GT(c)) goto L_70053082bc;
    if ((uint32_t)c->x[9] == 0) goto L_70053082bc;
    if ((uint32_t)c->x[8] == 0) goto L_70053082bc;
    fp_op_s(c, FOP_MUL, 0, 9, 9);
    fp_fma_s(c, 0, 0, 0, 8, 8, 0);
    fp_fma_s(c, 0, 0, 11, 10, 10, 0);
    c->v[0] = VS32(11);
    c->x[30] = 0x70053081f0ull; f_700530a428(c);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(12));
    if (COND_MI(c)) goto L_70053082bc;
    c->v[0] = VS32(11);
    { uint64_t ea = c->sp + 52; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x3cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[26] + 0x1ull);
    { uint64_t ea = c->x[23] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005308218ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->v[1] = 0x0ull;
    c->v[3] = 0x0ull;
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[2] = 0x0ull;
    if (COND_LE(c)) goto L_7005308248;
    fp_op_s(c, FOP_DIV, 0, 13, 0);
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 2, 9, 0);
    fp_op_s(c, FOP_MUL, 3, 10, 0);
L_7005308248:;
    { uint64_t ea = c->x[29] - 100; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x5ull);
    c->x[0] = (uint64_t)(c->sp + 0x2000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x40ull);
    c->x[1] = (uint32_t)(0x120ull);
    { uint64_t ea = c->x[22] + 0x620ull; ST32(ea, VS32(1)); }
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9])));
    { uint64_t ea = c->x[22] + 0x624ull; ST32(ea, VS32(2)); }
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[22] + 0x628ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[22] + 0xcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005308278ull; f_7005305bc0(c);
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x630ull; ST64(ea, c->x[0]); }
L_7005308280:;
    c->x[8] = (uint64_t)(ldx64(c, c->x[10]));
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint32_t st = stx64(c, c->x[10], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] != 0) goto L_7005308280;
    goto L_7005307f4c;
L_7005308294:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[25], c->x[8]); c->x[9] = (uint32_t)(st); }
    if ((uint32_t)c->x[9] == 0) goto L_7005308340;
L_70053082a0:;
    c->x[8] = (uint64_t)(ldx32(c, c->x[25]));
    if ((uint32_t)c->x[8] == 0) goto L_7005308294;
    c->excl_addr = ~0ull;
    goto L_70053082bc;
L_70053082b0:;
    c->x[8] = (uint64_t)(c->x[19] + 0x18ull);
    c->x[9] = (uint32_t)(0x8ull);
    stl32(c->x[8], c->x[9]);
L_70053082bc:;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005308310;
L_70053082c4:;
    c->excl_addr = ~0ull;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    stl32(c->x[20], 0ull);
    goto L_7005308310;
L_70053082d4:;
    c->x[8] = (uint64_t)(c->x[19] + 0x50ull);
L_70053082d8:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053082d8;
    goto L_7005308310;
L_70053082ec:;
    c->x[8] = (uint32_t)(0x2218ull);
L_70053082f0:;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[19] + c->x[8]);
L_70053082f8:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053082f8;
    stl32(c->x[20], 0ull);
L_700530830c:;
    stl32(c->x[25], 0ull);
L_7005308310:;
    c->sp = (uint64_t)(c->sp + 0x2000ull);
    c->sp = (uint64_t)(c->sp + 0x4f0ull);
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; c->sp = ea + 144; }
    c->pc = 0; return;
L_7005308340:;
    c->x[8] = (uint64_t)(c->x[19] + 0x8ull);
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005308440;
    c->x[8] = (uint64_t)(c->x[19] + 0xcull);
    c->x[9] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[29] - 220; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - (uint32_t)c->x[8]);
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    if (COND_HI(c)) goto L_7005308440;
    c->x[20] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[29] - 224; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 248; uint64_t v = LD32(ea); c->x[20] = ea; c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700530838c;
    { uint64_t ea = c->x[19] + 0xfcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_CC(c)) goto L_7005308440;
L_700530838c:;
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005308424;
    c->v[8] = 0x41f00000ull;
    { uint64_t ea = c->x[29] - 92; c->v[0] = LD32(ea); }
    c->x[8] = (uint32_t)(0x2090ull);
    c->x[0] = (uint64_t)(c->sp + 0xd8ull);
    c->x[1] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[21] = (uint64_t)(c->sp + 0xd8ull);
    fp_op_s(c, FOP_DIV, 0, 0, 8);
    c->x[30] = 0x70053083b4ull; f_7005304e84(c);
    c->x[1] = (uint64_t)(c->sp + 0xd8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x70053083c4ull; f_7005304000(c);
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_7005308424;
    c->x[8] = (uint32_t)(0x20d8ull);
    c->x[20] = (uint64_t)(c->x[19] + 0x770ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x648ull);
    c->x[22] = (uint64_t)(c->x[19] + c->x[8]);
    c->x[23] = (uint32_t)(0x1ull);
L_70053083e4:;
    { uint64_t ea = c->x[29] - 92; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    fp_op_s(c, FOP_DIV, 0, 0, 8);
    c->x[30] = 0x70053083f8ull; f_7005304e84(c);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005308408ull; f_7005304000(c);
    { uint64_t ea = c->x[29] - 104; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x648ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x48ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x648ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_70053083e4;
L_7005308424:;
    { uint64_t ea = c->sp + 0xe4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x21fcull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0x18ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[9] = (uint32_t)(0xaull);
    c->x[9] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    stl32(c->x[8], c->x[9]);
L_7005308440:;
    stl32(c->x[25], 0ull);
    goto L_70053082bc;
}

void f_70053099d4(Cpu *c) {
    { uint64_t ea = c->x[0] + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[0] + 0x28ull; c->v[2] = LD32(ea); }
    c->pc = 0; return;
}

void f_70053099e0(Cpu *c) {
    c->x[8] = (uint64_t)(c->x[1] + 0x38ull);
L_70053099e4:;
    c->x[9] = (uint64_t)(ldx64(c, c->x[8]));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    { uint32_t st = stx64(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70053099e4;
    { uint64_t ea = c->x[1] + 0x2c80ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[8] + 0x195000ull);
    c->x[2] = (uint64_t)(c->x[8] + 0x2a4ull);
    c->pc = c->x[2]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005309a08(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x218ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005309a10(Cpu *c) {
    if (c->x[0] == 0) goto L_7005309a98;
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x57ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x65ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x61ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x3ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x70ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6full));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x5ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6eull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x6ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5full));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x7ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x42ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6full));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0x9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x77ull));
    if (COND_NE(c)) goto L_7005309a9c;
    { uint64_t ea = c->x[0] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5full));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
L_7005309a98:;
    c->pc = 0; return;
L_7005309a9c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005309aa4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005309ce0;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_7005309ce0;
    { uint64_t ea = c->x[1] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_EQ(c)) goto L_7005309cbc;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[8] = (uint64_t)(c->x[8] + 0x1af000ull);
    c->x[9] = (uint64_t)(c->x[8] + 0xbe4ull);
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    c->pc = c->x[9]; c->x[30] = 0x7005309b08ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[9] = (uint64_t)(c->x[8] - 0x10000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_HI(c)) goto L_7005309cc8;
    c->x[10] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[10] != 0) goto L_7005309cc8;
    { uint64_t ea = c->x[21] + 0x70ull; ST64(ea, c->x[8]); }
    c->x[9] = (uint64_t)(0ull | c->x[21]);
    c->x[23] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[8] + 0x22aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x22bull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x22cull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(ROR64(c->x[10], 48) & 0xffffffffffff0000ull);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 24));
    c->x[10] = (uint64_t)(c->x[10] | (c->x[12] << 32));
    c->x[12] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[12] = (uint64_t)((c->x[12] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[11] = (uint64_t)(c->x[10] - 0x10000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_HI(c)) goto L_7005309cc8;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[11] & 0x7ull);
    if (c->x[12] != 0) goto L_7005309cc8;
    { uint64_t ea = c->x[8] + 0x229ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[11] = (uint64_t)(c->x[11] | (c->x[12] << 8));
    c->x[10] = (uint64_t)(c->x[11] | c->x[10]);
    { uint64_t ea = c->x[10] + 0x122ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x123ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x124ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(ROR64(c->x[11], 48) & 0xffffffffffff0000ull);
    c->x[11] = (uint64_t)(c->x[11] | (c->x[12] << 24));
    c->x[11] = (uint64_t)(c->x[11] | (c->x[13] << 32));
    c->x[13] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[13] = (uint64_t)((c->x[13] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[12] = (uint64_t)(c->x[11] - 0x10000ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[13])));
    if (COND_HI(c)) goto L_7005309cc8;
    { uint64_t ea = c->x[10] + 0x120ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint64_t)(c->x[12] & 0x7ull);
    if (c->x[13] != 0) goto L_7005309cc8;
    { uint64_t ea = c->x[10] + 0x121ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[12] | (c->x[10] << 8));
    c->x[20] = (uint64_t)(c->x[10] | c->x[11]);
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005309cc4;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x5c90ull);
    c->x[22] = (uint32_t)(0x428cull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x1b20000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[22] = (uint32_t)((c->x[22] & 0xffffffff0000ffffull) | 0x1b20000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    c->x[24] = (uint64_t)(0ull | c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x7005309bf4ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(VS32(0));
    c->v[1] = 0x40a00000ull;
    { uint64_t ea = c->x[24] + 0x64ull; c->v[2] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x27ull);
    fp_op_s(c, FOP_MUL, 2, 0, 2);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - 0x800000ull);
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[9], 24) & 0xffull);
    { uint64_t ea = c->x[24] + 0x64ull; ST32(ea, VS32(2)); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x7full));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    if (COND_CC(c)) (void)subs32(c, (uint32_t)c->x[8], 0x0ull); else c->nzcv = 0x80000000ull;
    c->x[8] = (uint32_t)(0x7fffffull);
    if (COND_LT(c)) (void)subs32(c, (uint32_t)c->x[9], (uint32_t)c->x[8]); else c->nzcv = 0x0ull;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->x[23] = (uint32_t)((COND_HI(c)) ? 0u : (uint32_t)((uint32_t)c->x[8]));
    c->x[8] = (uint64_t)(c->x[9] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005309c48ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005309c58;
    { uint64_t ea = c->x[21] + 0x7cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x1ull);
    { uint64_t ea = c->x[21] + 0x7cull; ST32(ea, (uint32_t)c->x[9]); }
L_7005309c58:;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x2bull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005309c6cull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005309c7c;
    { uint64_t ea = c->x[21] + 0x7cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x2ull);
    { uint64_t ea = c->x[21] + 0x7cull; ST32(ea, (uint32_t)c->x[9]); }
L_7005309c7c:;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x16ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005309c90ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005309cac;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x42ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[22]);
    c->pc = c->x[8]; c->x[30] = 0x7005309ca8ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005309cc8;
L_7005309cac:;
    { uint64_t ea = c->x[21] + 0x7cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x4ull);
    { uint64_t ea = c->x[21] + 0x7cull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005309cc8;
L_7005309cbc:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005309ce0;
L_7005309cc4:;
    c->x[23] = (uint32_t)(0u | 0u);
L_7005309cc8:;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xc7b000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x9ecull);
    c->pc = c->x[8]; c->x[30] = 0x7005309cdcull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[23]);
L_7005309ce0:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
}

void f_7005309ee4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x130ull);
    { uint64_t ea = c->sp + 144; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); }
    { uint64_t ea = c->sp + 160; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 176; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 192; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 208; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 240; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0xd0ull);
    { uint64_t ea = c->x[2] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[5]); }
    { uint64_t ea = c->sp + 24; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[1]); }
    if (COND_CC(c)) goto L_700530a3c8;
    c->x[9] = (uint32_t)(0xcccdull);
    c->v[0] = 0x0ull;
    c->x[19] = (uint32_t)(0x126full);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xbd4c0000ull);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[21] = (uint64_t)(0ull | c->x[4]);
    c->v[11] = (uint32_t)c->x[9];
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->x[25] = (uint64_t)(0ull | c->x[0]);
    c->x[24] = (uint32_t)(0u | 0u);
    c->x[26] = (uint64_t)(c->x[2] + 0x14ull);
    c->x[27] = (uint32_t)(0x1ull);
    c->x[28] = (uint32_t)(0xcull);
    c->x[19] = (uint32_t)((c->x[19] & 0xffffffff0000ffffull) | 0x3a830000ull);
    c->x[23] = (uint32_t)(0x3d800000ull);
    { uint64_t ea = c->sp + 0x30ull; ST32(ea, VS32(0)); }
L_7005309f6c:;
    c->x[9] = (uint64_t)(c->x[26] + c->x[27] * c->x[28]);
    { uint64_t ea = c->x[22] + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[0] = b; }
    { uint64_t ea = c->x[9] - 12; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 88; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 88; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 0x68ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[9] - 4; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 104; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[14] = b; }
    fp_op_s(c, FOP_MUL, 1, 0, 12);
    { uint64_t ea = c->x[29] - 80; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[29] - 80; c->v[15] = LD32(ea); }
    { uint64_t ea = c->sp + 0x70ull; ST32(ea, (uint32_t)c->x[9]); }
    fp_op_s(c, FOP_MUL, 0, 0, 14);
    { uint64_t ea = c->sp + 0x70ull; c->v[9] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 2, 8, 1);
    fp_fma_s(c, 0, 0, 0, 2, 10, 0);
    { uint64_t ea = c->x[22] + 40; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[2] = b; }
    fp_fma_s(c, 0, 0, 1, 3, 15, 1);
    fp_fma_s(c, 0, 0, 0, 3, 9, 0);
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_ADD, 0, 2, 0);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(11));
    c->nzcv = COND_GT(c) ? cmp_s(c, VSF32(0), VSF32(11)) : 0x40000000ull;
    if (COND_GT(c)) goto L_700530a3b0;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(11));
    if (COND_LE(c)) goto L_700530a024;
    c->x[8] = (uint32_t)(0xcccdull);
    fp_op_s(c, FOP_SUB, 2, 1, 0);
    fp_op_s(c, FOP_SUB, 3, 14, 12);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d4c0000ull);
    fp_op_s(c, FOP_SUB, 4, 9, 15);
    c->v[13] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_ADD, 1, 1, 13);
    fp_op_s(c, FOP_DIV, 1, 1, 2);
    fp_op_s(c, FOP_SUB, 2, 10, 8);
    fp_op_s(c, FOP_MUL, 2, 2, 1);
    fp_op_s(c, FOP_MUL, 3, 3, 1);
    fp_op_s(c, FOP_MUL, 1, 4, 1);
    fp_op_s(c, FOP_ADD, 8, 8, 2);
    fp_op_s(c, FOP_ADD, 12, 12, 3);
    fp_op_s(c, FOP_ADD, 15, 15, 1);
    { uint64_t ea = c->x[29] - 88; ST32(ea, VS32(8)); ST32(ea + 4, VS32(12)); }
    { uint64_t ea = c->x[29] - 80; ST32(ea, VS32(15)); }
    goto L_700530a028;
L_700530a024:;
    c->v[13] = VS32(1) ^ 0x80000000u;
L_700530a028:;
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(11));
    if (COND_LE(c)) goto L_700530a080;
    c->x[8] = (uint32_t)(0xcccdull);
    fp_op_s(c, FOP_SUB, 1, 1, 13);
    fp_op_s(c, FOP_SUB, 3, 14, 12);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3d4c0000ull);
    fp_op_s(c, FOP_SUB, 4, 9, 15);
    c->v[0] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_SUB, 2, 0, 13);
    { uint64_t ea = c->sp + 0x34ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_DIV, 1, 2, 1);
    fp_op_s(c, FOP_SUB, 2, 10, 8);
    fp_op_s(c, FOP_MUL, 2, 1, 2);
    fp_op_s(c, FOP_MUL, 3, 1, 3);
    fp_op_s(c, FOP_MUL, 1, 1, 4);
    fp_op_s(c, FOP_ADD, 10, 8, 2);
    fp_op_s(c, FOP_ADD, 14, 12, 3);
    fp_op_s(c, FOP_ADD, 9, 15, 1);
    { uint64_t ea = c->sp + 104; ST32(ea, VS32(10)); ST32(ea + 4, VS32(14)); }
    { uint64_t ea = c->sp + 0x70ull; ST32(ea, VS32(9)); }
    goto L_700530a084;
L_700530a080:;
    { uint64_t ea = c->sp + 0x34ull; ST32(ea, VS32(1)); }
L_700530a084:;
    c->x[2] = (uint64_t)(c->x[29] - 0x58ull);
    c->x[3] = (uint64_t)(c->sp + 0x5cull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700530a098ull; f_70053053d8(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_700530a3ac;
    c->x[2] = (uint64_t)(c->sp + 0x68ull);
    c->x[3] = (uint64_t)(c->sp + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700530a0b0ull; f_70053053d8(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_700530a3ac;
    { uint64_t ea = c->sp + 92; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[2] = b; }
    { uint64_t ea = c->sp + 0x28ull; ST32(ea, VS32(13)); }
    { uint64_t ea = c->sp + 80; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(2)); ST32(ea + 4, VS32(3)); }
    fp_op_s(c, FOP_SUB, 13, 0, 3);
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    { uint64_t ea = c->sp + 0x18ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 13, 13);
    { uint64_t ea = c->sp + 0x4ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_MUL, 1, 1, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 2);
    fp_fma_s(c, 0, 0, 0, 0, 2, 1);
    c->x[30] = 0x700530a0e8ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0x44070000ull);
    c->x[9] = (uint32_t)(0x7f800000ull);
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    c->v[0] = (uint32_t)c->x[19];
    c->x[8] = (uint32_t)(VS32(1));
    { uint64_t ea = c->sp + 0x2cull; ST32(ea, VS32(1)); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    if (COND_MI(c)) goto L_700530a3ac;
    if ((uint32_t)c->x[8] == 0) goto L_700530a3ac;
    c->v[0] = VS32(13) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(13), 0);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->v[0] = COND_MI(c) ? VS32(0) : VS32(13);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_700530a16c;
    { uint64_t ea = c->sp + 0xcull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(0x6666ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f860000ull);
    c->v[0] = VS32(1) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(1), 0);
    c->v[0] = COND_MI(c) ? VS32(0) : VS32(1);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_700530a38c;
    c->v[0] = 0x0ull;
    c->v[1] = 0x3f800000ull;
    goto L_700530a1c4;
L_700530a16c:;
    c->x[8] = (uint32_t)(0x6666ull);
    { uint64_t ea = c->sp + 0xcull; c->v[2] = LD32(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xbf860000ull);
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x6666ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f860000ull);
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    fp_op_s(c, FOP_SUB, 1, 1, 2);
    fp_op_s(c, FOP_DIV, 0, 0, 13);
    fp_op_s(c, FOP_DIV, 1, 1, 13);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[2] = COND_GT(c) ? VS32(1) : VS32(0);
    c->v[1] = COND_GT(c) ? VS32(0) : VS32(1);
    c->v[0] = 0x0ull;
    c->nzcv = cmp_s(c, VSF32(2), 0);
    c->v[0] = COND_MI(c) ? VS32(0) : VS32(2);
    c->v[2] = 0x3f800000ull;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    c->v[1] = COND_GT(c) ? VS32(2) : VS32(1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_700530a38c;
L_700530a1c4:;
    { uint64_t ea = c->sp + 0x4ull; c->v[5] = LD32(ea); }
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[2] = VS32(5) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(5), 0);
    c->v[3] = (uint32_t)c->x[8];
    c->v[2] = COND_MI(c) ? VS32(2) : VS32(5);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_PL(c)) goto L_700530a210;
    { uint64_t ea = c->sp + 0x8ull; c->v[3] = LD32(ea); }
    c->x[8] = (uint32_t)(0x6666ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f860000ull);
    c->v[2] = VS32(3) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(3), 0);
    c->v[2] = COND_MI(c) ? VS32(2) : VS32(3);
    c->v[3] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_LS(c)) goto L_700530a260;
    goto L_700530a38c;
L_700530a210:;
    c->x[8] = (uint32_t)(0x6666ull);
    { uint64_t ea = c->sp + 0x8ull; c->v[4] = LD32(ea); }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xbf860000ull);
    c->v[2] = (uint32_t)c->x[8];
    c->x[8] = (uint32_t)(0x6666ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f860000ull);
    c->v[3] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    fp_op_s(c, FOP_SUB, 3, 3, 4);
    fp_op_s(c, FOP_DIV, 2, 2, 5);
    fp_op_s(c, FOP_DIV, 3, 3, 5);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    c->v[4] = COND_GT(c) ? VS32(3) : VS32(2);
    c->v[2] = COND_GT(c) ? VS32(2) : VS32(3);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(4));
    c->v[0] = COND_GT(c) ? VS32(0) : VS32(4);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    c->v[1] = COND_MI(c) ? VS32(1) : VS32(2);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_700530a38c;
L_700530a260:;
    { uint64_t ea = c->sp + 0x2cull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 0, 2, 0);
    fp_op_s(c, FOP_MUL, 13, 2, 1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(13));
    if (COND_PL(c)) goto L_700530a38c;
    fp_op_s(c, FOP_SUB, 2, 10, 8);
    fp_op_s(c, FOP_SUB, 1, 14, 12);
    fp_op_s(c, FOP_SUB, 9, 9, 15);
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
L_700530a284:;
    { uint64_t ea = c->sp + 0x30ull; c->v[1] = LD32(ea); }
    c->v[2] = (uint32_t)c->x[23];
    c->v[3] = 0x41800000ull;
    c->v[4] = 0x40c00000ull;
    fp_op_s(c, FOP_ADD, 1, 1, 0);
    fp_op_s(c, FOP_MUL, 2, 1, 2);
    FP_SETS(2, frint_s(c, VSF32(2), 2));
    fp_fma_s(c, 0, 1, 1, 2, 3, 1);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(4));
    c->v[2] = COND_MI(c) ? VS32(4) : VS32(3);
    c->v[3] = (uint32_t)c->x[19];
    fp_op_s(c, FOP_SUB, 2, 2, 1);
    fp_op_s(c, FOP_ADD, 3, 0, 3);
    fp_op_s(c, FOP_ADD, 2, 0, 2);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    c->v[14] = COND_LS(c) ? VS32(3) : VS32(2);
    c->nzcv = cmp_s(c, VSF32(14), VSF32(13));
    c->v[10] = COND_MI(c) ? VS32(14) : VS32(13);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(4));
    if (COND_PL(c)) goto L_700530a378;
    fp_op_s(c, FOP_SUB, 1, 10, 0);
    c->v[2] = (uint32_t)c->x[19];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    if (COND_LE(c)) goto L_700530a378;
    { uint64_t ea = c->sp + 40; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[1] = b; }
    c->v[3] = 0x3f800000ull;
    { uint64_t ea = c->sp + 0x34ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x44ull);
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x38ull);
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    fp_op_s(c, FOP_DIV, 1, 10, 1);
    fp_op_s(c, FOP_MUL, 2, 4, 0);
    fp_op_s(c, FOP_SUB, 0, 3, 0);
    fp_fma_s(c, 0, 0, 0, 5, 0, 2);
    fp_op_s(c, FOP_DIV, 0, 2, 0);
    fp_op_s(c, FOP_MUL, 2, 4, 1);
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    fp_fma_s(c, 0, 0, 1, 5, 1, 2);
    { uint64_t ea = c->sp + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[4] = b; }
    fp_op_s(c, FOP_DIV, 1, 2, 1);
    fp_op_s(c, FOP_MUL, 2, 0, 4);
    fp_op_s(c, FOP_MUL, 3, 0, 5);
    fp_op_s(c, FOP_MUL, 0, 0, 9);
    fp_op_s(c, FOP_ADD, 2, 8, 2);
    fp_op_s(c, FOP_ADD, 3, 12, 3);
    fp_op_s(c, FOP_ADD, 0, 15, 0);
    { uint64_t ea = c->sp + 68; ST32(ea, VS32(2)); ST32(ea + 4, VS32(3)); }
    { uint64_t ea = c->sp + 0x4cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x1cull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 4, 1, 4);
    fp_op_s(c, FOP_MUL, 5, 1, 5);
    fp_op_s(c, FOP_MUL, 1, 1, 9);
    fp_op_s(c, FOP_ADD, 4, 8, 4);
    fp_op_s(c, FOP_ADD, 5, 12, 5);
    fp_op_s(c, FOP_ADD, 1, 15, 1);
    { uint64_t ea = c->sp + 56; ST32(ea, VS32(4)); ST32(ea + 4, VS32(5)); }
    { uint64_t ea = c->sp + 0x40ull; ST32(ea, VS32(1)); }
    c->pc = c->x[25]; c->x[30] = 0x700530a374ull; rt_dispatch(c); c->pc = 0;
    c->x[24] = (uint32_t)((uint32_t)c->x[24] + 0x1ull);
L_700530a378:;
    c->nzcv = cmp_s(c, VSF32(14), VSF32(13));
    if (COND_PL(c)) goto L_700530a38c;
    c->v[0] = VS32(10);
    (void)(subs32(c, (uint32_t)c->x[24], 0x200ull));
    if (COND_CC(c)) goto L_700530a284;
L_700530a38c:;
    { uint64_t ea = c->sp + 44; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    c->v[2] = 0xc1800000ull;
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    c->v[1] = (uint32_t)c->x[23];
    fp_op_s(c, FOP_MUL, 1, 0, 1);
    FP_SETS(1, frint_s(c, VSF32(1), 2));
    fp_fma_s(c, 0, 0, 0, 1, 2, 0);
    { uint64_t ea = c->sp + 0x30ull; ST32(ea, VS32(0)); }
L_700530a3ac:;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_700530a3b0:;
    c->x[27] = (uint64_t)(c->x[27] + 0x1ull);
    (void)(subs64(c, c->x[27], (uint64_t)(c->x[8])));
    if (COND_CS(c)) goto L_700530a3cc;
    (void)(subs32(c, (uint32_t)c->x[24], 0x200ull));
    if (COND_CC(c)) goto L_7005309f6c;
    goto L_700530a3cc;
L_700530a3c8:;
    c->x[24] = (uint32_t)(0u | 0u);
L_700530a3cc:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[24]);
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 240; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 192; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 176; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 160; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 144; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; }
    c->sp = (uint64_t)(c->sp + 0x130ull);
    c->pc = 0; return;
}

void f_7005311f58(Cpu *c) {
    if (c->x[0] == 0) goto L_7005311fa0;
    c->v[1] = 0x40000000ull;
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_7005311fa0;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_7005311fa0;
    if (c->x[1] == 0) goto L_7005311fa0;
    c->x[9] = (uint64_t)(c->x[8] + 0x1a000ull);
    c->x[11] = (uint32_t)(0x3008ull);
    { uint64_t ea = c->x[9] + 0x478ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x81340000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005311fa0;
    { uint64_t ea = c->x[9] + 0x47cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005311fa4;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005311fa0:;
    c->pc = 0; return;
L_7005311fa4:;
    { uint64_t ea = c->sp - 64; ST64(ea, VS64(8)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[19] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0xf60ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
L_7005311fc4:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[19]));
    { uint32_t st = stx32(c, c->x[19], c->x[9]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005311fc4;
    if ((uint32_t)c->x[10] == 0) goto L_7005311fdc;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_700531209c;
L_7005311fdc:;
    c->v[1] = 0x0ull;
    c->v[2] = 0x0ull;
    c->x[20] = (uint64_t)(0x700531c000ull);
    c->x[21] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[20] + 0xf50ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x7fffffull);
    { uint64_t ea = c->x[21] + 0xf58ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[21] + 0x0ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[1] + 0; ST128(ea, c->v[1]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[1] + 32; ST128(ea, c->v[1]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[1] + 0x40ull; ST64(ea, VS64(2)); }
    { uint64_t ea = c->x[8] + 0x1280ull; c->v[1] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(1));
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
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005312078;
    c->nzcv = cmp_s(c, VSF32(1), 0);
    c->v[2] = 0x3f800000ull;
    c->v[1] = COND_EQ(c) ? VS32(2) : VS32(1);
    fp_op_s(c, FOP_DIV, 8, 0, 1);
    c->v[1] = 0x40000000ull;
    c->nzcv = cmp_s(c, VSF32(8), 0);
    c->nzcv = COND_GT(c) ? cmp_s(c, VSF32(8), VSF32(1)) : 0x20000000ull;
    if (COND_LS(c)) goto L_70053120b0;
L_7005312078:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xa474ull);
    c->x[8] = (uint32_t)(0x1ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[21] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + c->x[10]; ST32(ea, (uint32_t)c->x[8]); }
L_7005312098:;
    stl32(c->x[19], 0ull);
L_700531209c:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[8] = LD64(ea); c->sp = c->sp + 64; }
    c->pc = 0; return;
L_70053120b0:;
    c->v[3] = 0x41f00000ull;
    fp_op_s(c, FOP_DIV, 2, 2, 8);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0xa224ull);
    c->x[9] = (uint32_t)(VS32(8));
    c->x[2] = (uint64_t)(c->x[1] + c->x[2]);
    c->x[8] = (uint64_t)(c->x[1] + 0x9000ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[9], 8) & 0xffffffull);
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[9]); }
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[9], 16) & 0xffffull);
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[9], 24) & 0xffull);
    { uint64_t ea = c->x[8] + 0x10ull; ST8(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint32_t)(0xc080ull);
    { uint64_t ea = c->x[8] + 0x1ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x2ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x3ull; ST8(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[8] + 0x11ull; ST8(ea, (uint32_t)c->x[10]); }
    fp_op_s(c, FOP_DIV, 1, 8, 3);
    { uint64_t ea = c->x[8] + 0x12ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x13ull; ST8(ea, (uint32_t)c->x[12]); }
    c->x[13] = (uint32_t)(VS32(2));
    c->x[14] = (uint32_t)(ROR32((uint32_t)c->x[13], 8) & 0xffffffull);
    c->x[15] = (uint32_t)(ROR32((uint32_t)c->x[13], 16) & 0xffffull);
    c->x[16] = (uint32_t)(ROR32((uint32_t)c->x[13], 24) & 0xffull);
    { uint64_t ea = c->x[8] + 0x4ull; ST8(ea, (uint32_t)c->x[13]); }
    { uint64_t ea = c->x[8] + 0x5ull; ST8(ea, (uint32_t)c->x[14]); }
    { uint64_t ea = c->x[8] + 0x6ull; ST8(ea, (uint32_t)c->x[15]); }
    fp_op_s(c, FOP_DIV, 3, 3, 8);
    { uint64_t ea = c->x[8] + 0x7ull; ST8(ea, (uint32_t)c->x[16]); }
    { uint64_t ea = c->x[8] + 0x14ull; ST8(ea, (uint32_t)c->x[13]); }
    { uint64_t ea = c->x[8] + 0x15ull; ST8(ea, (uint32_t)c->x[14]); }
    c->x[17] = (uint32_t)(VS32(1));
    { uint64_t ea = c->x[8] + 0x16ull; ST8(ea, (uint32_t)c->x[15]); }
    { uint64_t ea = c->x[8] + 0x17ull; ST8(ea, (uint32_t)c->x[16]); }
    c->x[18] = (uint32_t)(ROR32((uint32_t)c->x[17], 8) & 0xffffffull);
    c->x[0] = (uint32_t)(ROR32((uint32_t)c->x[17], 16) & 0xffffull);
    c->x[3] = (uint32_t)(ROR32((uint32_t)c->x[17], 24) & 0xffull);
    { uint64_t ea = c->x[8] + 0x8ull; ST8(ea, (uint32_t)c->x[17]); }
    { uint64_t ea = c->x[8] + 0x9ull; ST8(ea, (uint32_t)c->x[18]); }
    { uint64_t ea = c->x[8] + 0xaull; ST8(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[8] + 0xbull; ST8(ea, (uint32_t)c->x[3]); }
    { uint64_t ea = c->x[8] + 0x18ull; ST8(ea, (uint32_t)c->x[17]); }
    { uint64_t ea = c->x[8] + 0x19ull; ST8(ea, (uint32_t)c->x[18]); }
    { uint64_t ea = c->x[2] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(3)); }
    c->x[2] = (uint32_t)(VS32(3));
    { uint64_t ea = c->x[8] + 0x1aull; ST8(ea, (uint32_t)c->x[0]); }
    c->x[0] = (uint64_t)(0x700531d000ull);
    { uint64_t ea = c->x[8] + 0x1bull; ST8(ea, (uint32_t)c->x[3]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint32_t)(ROR32((uint32_t)c->x[2], 8) & 0xffffffull);
    c->x[5] = (uint32_t)(ROR32((uint32_t)c->x[2], 16) & 0xffffull);
    c->x[6] = (uint32_t)(ROR32((uint32_t)c->x[2], 24) & 0xffull);
    { uint64_t ea = c->x[8] + 0xcull; ST8(ea, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[8] + 0x1cull; ST8(ea, (uint32_t)c->x[2]); }
    c->x[2] = (uint64_t)(c->x[1] + c->x[9]);
    { uint64_t ea = c->x[8] + 0xdull; ST8(ea, (uint32_t)c->x[4]); }
    { uint64_t ea = c->x[8] + 0xeull; ST8(ea, (uint32_t)c->x[5]); }
    { uint64_t ea = c->x[8] + 0xfull; ST8(ea, (uint32_t)c->x[6]); }
    { uint64_t ea = c->x[8] + 0x1dull; ST8(ea, (uint32_t)c->x[4]); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[8] + 0x1eull; ST8(ea, (uint32_t)c->x[5]); }
    { uint64_t ea = c->x[8] + 0x1full; ST8(ea, (uint32_t)c->x[6]); }
    { uint64_t ea = c->x[2] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0x5e0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053121b8ull; f_7005313760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + 0x1a000ull);
    if ((uint32_t)c->x[9] == 0) goto L_70053121d8;
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[10] + 0x474ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, 0ull); }
    goto L_7005312098;
L_70053121d8:;
    { uint64_t ea = c->x[10] + 0x47cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_70053122c4;
    c->x[9] = (uint32_t)(0xa480ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[22] + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, 0ull); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[11] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 12; ST64(ea, c->x[10]); }
    c->x[10] = (uint64_t)(c->x[11] + 0x48cull);
    { uint64_t ea = c->x[22] + 20; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 60; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[22] + 52; ST64(ea, c->x[10]); }
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x5a0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x30ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[22] + 0x40ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x114ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], 0x0ull));
    { uint64_t ea = c->x[22] + 0x18ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x115ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x19ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x116ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1aull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x117ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1bull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x118ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1cull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x119ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1dull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1eull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1full; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11cull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x20ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11dull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x21ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11eull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x22ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x11full; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x23ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 0x108ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x474ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[22] + 0x24ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0x28ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_70053124a4;
L_70053122c4:;
    c->v[0] = VS32(8);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[30] = 0x70053122d0ull; f_70053124b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xa460ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005312310;
    c->x[9] = (uint32_t)(0x2098ull);
    c->x[10] = (uint32_t)(0x4098ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    { uint64_t ea = c->x[9] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[9] + 0x20ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0x20ull; ST128(ea, c->v[2]); }
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4060ull; ST64(ea, 0ull); }
    goto L_7005312320;
L_7005312310:;
    c->v[0] = VS32(8);
    c->x[0] = (uint32_t)(0x1ull);
    c->x[30] = 0x700531231cull; f_70053124b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_7005312320:;
    { uint64_t ea = c->x[8] + 0x20b4ull; c->v[0] = LD32(ea); }
    c->x[9] = (uint32_t)(0x20c4ull);
    { uint64_t ea = c->x[8] + 0x20a8ull; c->v[1] = LD64(ea); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[10] = (uint32_t)(0x20b0ull);
    { uint64_t ea = c->x[8] + 0x2098ull; c->v[3] = LD64(ea); }
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 1, 0, ea); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    { uint64_t ea = c->x[8] + 0x20a0ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[10]; sl_lds(c, 2, 1, 2, 1, ea); }
    c->x[9] = (uint32_t)(0x20b8ull);
    c->x[10] = (uint32_t)(0x12ccull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    { uint64_t ea = c->x[8] + 0x12c8ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[8] + 0x20a4ull; c->v[2] = LD32(ea); }
    ((sa64 *)&c->v[0])[1] = ((sa64 *)&c->v[3])[0];
    { uint64_t ea = c->x[8] + 0x20bcull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 3, 1, ea); }
    c->x[9] = (uint64_t)(c->x[8] + 0x1000ull);
    { uint64_t ea = c->x[8] + 0x12b4ull; ST32(ea, VS32(2)); }
    c->x[11] = (uint64_t)(c->x[9] + 0x2b8ull);
    { uint64_t ea = c->x[8] + 0x12dcull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[8] + 0x20c0ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[8] + c->x[10]; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[8] + 0x20f8ull; c->v[1] = LD64(ea); }
    { uint64_t ea = c->x[11] + 0x0ull; ST128(ea, c->v[0]); }
    c->x[11] = (uint32_t)(VS32(2));
    { uint64_t ea = c->x[8] + 0x2100ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x12e0ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[8] + 0x1320ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[8] + 0x1328ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[10] = (uint32_t)(0x40a4ull);
    { uint64_t ea = c->x[22] + 0x0ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[9] + 0x2b5ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2b6ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x2ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2b7ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x3ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2b8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x4ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2b9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x5ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2baull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x6ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2bbull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x7ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2bcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2bdull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x9ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + 0x2beull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0xaull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x2bfull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; ST64(ea, 0ull); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    { uint64_t ea = c->x[22] + 0xbull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[10] + 0x0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0xcull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[10] + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0x10ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[10] + 0x20ull; c->v[0] = LD32(ea); }
    c->x[10] = (uint32_t)(0xa474ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[22] + 0x14ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[8] + 0x114ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x18ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x115ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x19ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x116ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1aull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x117ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x118ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1cull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x119ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1dull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1eull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11bull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x1full; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11cull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x20ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x21ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x22ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x11full; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x23ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x108ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[8] + c->x[10]; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[8] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    { uint64_t ea = c->x[22] + 0x24ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 40; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
L_70053124a4:;
    stl32(c->x[19], 0ull);
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700531209c;
}

void f_7005312aac(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[20] = (uint64_t)(0x700531c000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[20] + 0xf50ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005312be0;
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->pc = c->x[8]; c->x[30] = 0x7005312ae0ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005312be8;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005312be8;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xa598ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[10] & 0x7ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    { uint64_t ea = c->x[8] + c->x[9]; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint64_t)(c->x[8] + (c->x[11] << 5));
    { uint64_t ea = c->x[19] + 0x24ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[11] + 0x1a000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x498ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x25ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x1ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x26ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x2ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x27ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x3ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x29ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x5ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x6ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2bull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x7ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2cull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x8ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x9ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xaull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x2full; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xbull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xcull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x31ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xdull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x32ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xeull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x33ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xfull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x34ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x10ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x35ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x11ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x36ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x12ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x37ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x13ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x14ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x39ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x15ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x3aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x16ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x3bull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x17ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0x120ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; ST64(ea, c->x[9]); }
    goto L_7005312be8;
L_7005312be0:;
    c->x[0] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->x[19] + 0x20ull; ST8(ea, 0u); }
L_7005312be8:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005312cf8(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x4000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[0])));
    if (COND_NE(c)) (void)subs64(c, c->x[8], c->x[0]); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_7005312d90;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x104ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x105ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x106ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x3ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x107ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x108ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x5ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x109ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x6ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10aull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x7ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10bull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10cull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10dull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10eull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0xbull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10full; ST8(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_7005312da0;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfffffeffull);
    { uint64_t ea = c->x[8] + 0xd4ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
L_7005312d90:;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
L_7005312da0:;
    c->pc = 0; return;
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

void f_7005313174(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x4000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[0])));
    if (COND_NE(c)) (void)subs64(c, c->x[8], c->x[0]); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_700531320c;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xf8ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xf9ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfaull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x3ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfbull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfcull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x5ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfdull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x6ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xfeull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x7ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0xffull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x100ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0x9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x101ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[1] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x102ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0xbull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x103ull; ST8(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_700531321c;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xffffff7full);
    { uint64_t ea = c->x[8] + 0xd4ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
L_700531320c:;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
L_700531321c:;
    c->pc = 0; return;
}

void f_7005313220(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x2000ull);
    c->pc = 0; return;
}

void f_700531324c(Cpu *c) {
    c->x[9] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint32_t)(0xa018ull);
    c->v[0] = 0x100000001ull;
    { uint64_t ea = c->x[9] + 0xf50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x4ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
}

void f_7005313290(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0x1ull);
    /* hint */
    c->x[11] = (uint64_t)(0x700531c8a3ull);
L_70053132a4:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_70053132dc;
    if ((uint32_t)c->x[12] == 0) goto L_70053132d0;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[10] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_70053132a4;
    goto L_70053132dc;
L_70053132d0:;
    if (((c->x[10] >> 0) & 1) == 0) goto L_70053132dc;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_70053132dc:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x875ull);
L_70053132ec:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_7005313324;
    if ((uint32_t)c->x[12] == 0) goto L_7005313318;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_70053132ec;
    goto L_7005313324;
L_7005313318:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_7005313324;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_7005313324:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x859ull);
L_7005313334:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_700531336c;
    if ((uint32_t)c->x[12] == 0) goto L_7005313360;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_7005313334;
    goto L_700531336c;
L_7005313360:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_700531336c;
    c->x[0] = (uint32_t)(0x2ull);
    c->pc = 0; return;
L_700531336c:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x810ull);
L_700531337c:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_70053133b4;
    if ((uint32_t)c->x[12] == 0) goto L_70053133a8;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_700531337c;
    goto L_70053133b4;
L_70053133a8:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_70053133b4;
    c->x[0] = (uint32_t)(0x3ull);
    c->pc = 0; return;
L_70053133b4:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x88aull);
L_70053133c4:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_70053133fc;
    if ((uint32_t)c->x[12] == 0) goto L_70053133f0;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_70053133c4;
    goto L_70053133fc;
L_70053133f0:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_70053133fc;
    c->x[0] = (uint32_t)(0x4ull);
    c->pc = 0; return;
L_70053133fc:;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(0x700531c000ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x830ull);
L_700531340c:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_7005313444;
    if ((uint32_t)c->x[12] == 0) goto L_7005313438;
    (void)(subs64(c, c->x[9], 0x5full));
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[11] = (uint32_t)((COND_CS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[9], 0x60ull));
    if (COND_NE(c)) goto L_700531340c;
    goto L_7005313444;
L_7005313438:;
    if (((c->x[11] >> 0) & 1) == 0) goto L_7005313444;
    c->x[0] = (uint32_t)(0x5ull);
    c->pc = 0; return;
L_7005313444:;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[0] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
}

void f_7005313694(Cpu *c) {
    c->x[9] = (uint64_t)(0x7005313694ull);
    c->x[10] = (uint64_t)(LD64(0x7005313750ull));
    c->x[9] = (uint64_t)(c->x[9] - c->x[10]);
    c->x[11] = (uint64_t)(0x700531c000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x8d8ull);
    c->x[11] = (uint64_t)(c->x[11] - c->x[9]);
    c->x[11] = (uint64_t)(c->x[11] + c->x[0]);
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    if (c->x[12] != 0) goto L_7005313740;
    /* hint */
    c->x[13] = (uint64_t)(0x700531cf50ull);
    /* hint */
    c->x[14] = (uint64_t)(0x700531d610ull);
    c->x[13] = (uint64_t)(c->x[13] - c->x[9]);
    c->x[14] = (uint64_t)(c->x[14] - c->x[9]);
    c->x[13] = (uint64_t)(c->x[13] + c->x[0]);
    c->x[14] = (uint64_t)(c->x[14] + c->x[0]);
    c->x[15] = (uint64_t)(LD64(0x7005313758ull));
L_70053136dc:;
    (void)(subs64(c, c->x[13], (uint64_t)(c->x[14])));
    if (COND_CS(c)) goto L_70053136fc;
    { uint64_t ea = c->x[13] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    (void)(subs64(c, c->x[16], (uint64_t)(c->x[15])));
    c->x[17] = (uint64_t)((COND_CS(c)) ? c->x[0] : (uint64_t)(c->x[9]));
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    { uint64_t ea = c->x[13]; ST64(ea, c->x[16]); c->x[13] = c->x[13] + 8; }
    goto L_70053136dc;
L_70053136fc:;
    c->x[12] = (uint64_t)(0x700531c8c0ull);
    c->x[12] = (uint64_t)(c->x[12] - c->x[9]);
    c->x[12] = (uint64_t)(c->x[12] + c->x[0]);
    c->x[13] = (uint64_t)(0x700531c8e0ull);
    c->x[13] = (uint64_t)(c->x[13] - c->x[9]);
    c->x[13] = (uint64_t)(c->x[13] + c->x[0]);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(0x700531c8c8ull);
    c->x[12] = (uint64_t)(c->x[12] - c->x[9]);
    c->x[12] = (uint64_t)(c->x[12] + c->x[0]);
    c->x[13] = (uint64_t)(0x700531c8e8ull);
    c->x[13] = (uint64_t)(c->x[13] - c->x[9]);
    c->x[13] = (uint64_t)(c->x[13] + c->x[0]);
    { uint64_t ea = c->x[13] + 0x0ull; ST64(ea, c->x[12]); }
    { uint64_t ea = c->x[11] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[0] = (uint64_t)(0x1ull);
    c->pc = 0; return;
L_7005313740:;
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    c->x[0] = (uint64_t)((COND_NE(c)) ? 0ull : (uint64_t)(0ull + 1));
    c->pc = 0; return;
}

void f_7005313838(Cpu *c) {
    { uint64_t ea = c->sp - 144; ST64(ea, VS64(14)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x260ull);
    { uint64_t ea = c->x[3] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[21] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(1));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    if (COND_VS(c)) goto L_7005314230;
L_7005313888:;
    { uint64_t ea = c->x[21] + 0x8ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005314238;
L_7005313898:;
    { uint64_t ea = c->x[21] + 0xcull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314240;
L_70053138a8:;
    { uint64_t ea = c->x[21] + 0x10ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005314248;
L_70053138b8:;
    { uint64_t ea = c->x[21] + 0x14ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314250;
L_70053138c8:;
    { uint64_t ea = c->x[21] + 0x18ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005314258;
L_70053138d8:;
    { uint64_t ea = c->x[21] + 0x1cull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314260;
L_70053138e8:;
    { uint64_t ea = c->x[21] + 0x20ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005314268;
L_70053138f8:;
    { uint64_t ea = c->x[21] + 0x24ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314270;
L_7005313908:;
    { uint64_t ea = c->x[21] + 0x28ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005314278;
L_7005313918:;
    { uint64_t ea = c->x[21] + 0x2cull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314280;
L_7005313928:;
    c->x[24] = (uint64_t)(LD64(0x700531cf48ull));
    c->x[24] = (uint64_t)(c->x[24] + 0x7c8ull);
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0xc8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005314288;
    { uint64_t ea = c->x[0] + 0x28ull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 23) & 1) != 0) goto L_70053142c8;
L_700531394c:;
    { uint64_t ea = c->x[20] + 0x60ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    if (c->x[25] != 0) goto L_7005313ed0;
L_7005313954:;
    { uint64_t ea = c->x[20] + 152; c->v[21] = LD128(ea); }
    { uint64_t ea = c->x[20] + 168; c->v[20] = LD128(ea); }
    { uint64_t ea = c->x[20] + 184; c->v[19] = LD128(ea); }
L_7005313960:;
    c->v[9] = ((sa32 *)&c->v[21])[1];
    c->nzcv = cmp_s(c, VSF32(9), VSF32(9));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    c->nzcv = cmp_s(c, VSF32(21), VSF32(21));
    if (COND_VS(c)) goto L_7005314304;
L_7005313974:;
    c->v[10] = ((sa32 *)&c->v[21])[2];
    c->nzcv = cmp_s(c, VSF32(10), VSF32(10));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531430c;
L_7005313984:;
    c->v[11] = ((sa32 *)&c->v[21])[3];
    c->nzcv = cmp_s(c, VSF32(11), VSF32(11));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314314;
L_7005313994:;
    c->nzcv = cmp_s(c, VSF32(20), VSF32(20));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531431c;
L_70053139a0:;
    c->v[12] = ((sa32 *)&c->v[20])[1];
    c->nzcv = cmp_s(c, VSF32(12), VSF32(12));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314324;
L_70053139b0:;
    c->v[13] = ((sa32 *)&c->v[20])[2];
    c->nzcv = cmp_s(c, VSF32(13), VSF32(13));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531432c;
L_70053139c0:;
    c->v[14] = ((sa32 *)&c->v[20])[3];
    c->nzcv = cmp_s(c, VSF32(14), VSF32(14));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314334;
L_70053139d0:;
    c->nzcv = cmp_s(c, VSF32(19), VSF32(19));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531433c;
L_70053139dc:;
    c->v[0] = ((sa32 *)&c->v[19])[1];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314344;
L_70053139ec:;
    c->v[1] = ((sa32 *)&c->v[19])[2];
    c->nzcv = cmp_s(c, VSF32(1), VSF32(1));
    c->x[9] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531434c;
L_70053139fc:;
    c->v[2] = ((sa32 *)&c->v[19])[3];
    c->nzcv = cmp_s(c, VSF32(2), VSF32(2));
    c->x[8] = (uint32_t)((COND_VC(c)) ? 0u : (uint32_t)(0u + 1));
    if (((c->x[9] >> 0) & 1) != 0) goto L_7005314354;
L_7005313a0c:;
    if ((uint32_t)c->x[8] != 0) goto L_700531435c;
    { uint64_t ea = c->x[20] + 0x60ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    if (c->x[25] != 0) goto L_7005313f0c;
L_7005313a18:;
    { uint64_t ea = c->x[20] + 0x70ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(LD64(0x700531cf28ull));
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x450ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_70053143b0;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053143e8;
    { uint64_t ea = c->x[8] + 0x20ull; c->v[3] = LD128(ea); }
    c->x[8] = (uint64_t)(c->sp + 0x40ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x8ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, VS64(3)); }
    { uint64_t ea = c->x[8]; sl_sts(c, 2, 1, 2, 3, ea); }
L_7005313a50:;
    { uint64_t ea = c->sp + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    { uint64_t ea = c->sp + 0x48ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->x[21] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[6] = a; c->v[7] = b; }
    fp_op_s(c, FOP_MUL, 18, 4, 7);
    { uint64_t ea = c->x[21] + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[7] = a; c->v[16] = b; }
    fp_fma_s(c, 0, 0, 6, 6, 3, 18);
    fp_fma_s(c, 0, 0, 6, 7, 5, 6);
    fp_op_s(c, FOP_ADD, 6, 16, 6);
    { uint64_t ea = c->x[21] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[7] = a; c->v[16] = b; }
    fp_op_s(c, FOP_MUL, 23, 4, 16);
    { uint64_t ea = c->x[21] + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[16] = a; c->v[17] = b; }
    fp_fma_s(c, 0, 0, 7, 7, 3, 23);
    fp_fma_s(c, 0, 0, 7, 16, 5, 7);
    fp_op_s(c, FOP_ADD, 7, 17, 7);
    { uint64_t ea = c->x[21] + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[16] = a; c->v[17] = b; }
    fp_op_s(c, FOP_MUL, 22, 4, 17);
    { uint64_t ea = c->x[21] + 40; u128 a = LD32(ea), b = LD32(ea + 4); c->v[17] = a; c->v[18] = b; }
    fp_fma_s(c, 0, 0, 16, 16, 3, 22);
    fp_fma_s(c, 0, 0, 16, 17, 5, 16);
    fp_op_s(c, FOP_MUL, 17, 9, 4);
    fp_fma_s(c, 0, 0, 17, 21, 3, 17);
    fp_op_s(c, FOP_MUL, 21, 0, 4);
    fp_fma_s(c, 0, 0, 21, 19, 3, 21);
    fp_fma_s(c, 0, 0, 17, 10, 5, 17);
    fp_fma_s(c, 0, 0, 21, 1, 5, 21);
    fp_op_s(c, FOP_ADD, 16, 18, 16);
    fp_op_s(c, FOP_MUL, 18, 12, 4);
    fp_fma_s(c, 0, 0, 18, 20, 3, 18);
    c->v[12] = 0x3ff0000000000000ull;
    fp_fma_s(c, 0, 0, 18, 13, 5, 18);
    fp_op_s(c, FOP_ADD, 17, 11, 17);
    fp_op_s(c, FOP_ADD, 0, 2, 21);
    c->v[13] = 0x3fd0000000000000ull;
    fp_op_s(c, FOP_SUB, 1, 6, 17);
    fp_op_s(c, FOP_SUB, 0, 16, 0);
    fp_op_s(c, FOP_ADD, 18, 14, 18);
    c->v[14] = 0xbfe0000000000000ull;
    fp_op_s(c, FOP_MUL, 1, 8, 1);
    fp_op_s(c, FOP_MUL, 0, 8, 0);
    fp_op_s(c, FOP_SUB, 2, 7, 18);
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_MUL, 2, 8, 2);
    { uint64_t ea = c->x[22] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[21] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    FP_SETD(4, simd_s2d(c, VSF32(1)));
    { uint64_t ea = c->x[21] + 0x8ull; c->v[1] = LD32(ea); }
    FP_SETD(0, simd_s2d(c, VSF32(0)));
    FP_SETD(5, simd_s2d(c, VSF32(1)));
    { uint64_t ea = c->x[21] + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    FP_SETD(6, simd_s2d(c, VSF32(1)));
    FP_SETD(1, simd_s2d(c, VSF32(2)));
    { uint64_t ea = c->x[21] + 0x18ull; c->v[2] = LD32(ea); }
    FP_SETD(7, simd_s2d(c, VSF32(2)));
    { uint64_t ea = c->x[21] + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_d(c, FOP_ADD, 19, 0, 1);
    FP_SETD(17, simd_s2d(c, VSF32(3)));
    FP_SETD(16, simd_s2d(c, VSF32(2)));
    { uint64_t ea = c->x[21] + 0x28ull; c->v[2] = LD32(ea); }
    FP_SETD(18, simd_s2d(c, VSF32(2)));
    fp_op_d(c, FOP_ADD, 2, 19, 18);
    fp_op_d(c, FOP_ADD, 1, 1, 18);
    fp_op_d(c, FOP_ADD, 0, 0, 18);
    fp_op_d(c, FOP_ADD, 2, 2, 12);
    fp_op_d(c, FOP_MUL, 2, 2, 13);
    fp_fma_d(c, 0, 0, 3, 1, 14, 2);
    fp_fma_d(c, 0, 0, 1, 0, 14, 2);
    fp_fma_d(c, 0, 0, 0, 19, 14, 2);
    c->nzcv = cmp_d(c, VSF64(2), VSF64(3));
    if (COND_LE(c)) goto L_7005313ba0;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(1));
    if (COND_LE(c)) goto L_7005313ba8;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(0));
    if (COND_LE(c)) goto L_7005313fb8;
    fp_op_d(c, FOP_SQRT, 8, 2, 2);
    c->nzcv = cmp_d(c, VSF64(8), VSF64(8));
    if (COND_VS(c)) goto L_70053140b8;
L_7005313b80:;
    fp_op_d(c, FOP_DIV, 0, 13, 8);
    fp_op_d(c, FOP_SUB, 1, 17, 7);
    fp_op_d(c, FOP_MUL, 10, 1, 0);
    fp_op_d(c, FOP_SUB, 1, 5, 16);
    fp_op_d(c, FOP_MUL, 9, 1, 0);
    fp_op_d(c, FOP_SUB, 1, 6, 4);
    fp_op_d(c, FOP_MUL, 11, 1, 0);
    goto L_7005313bd8;
L_7005313ba0:;
    c->nzcv = cmp_d(c, VSF64(3), VSF64(1));
    if (COND_GT(c)) goto L_7005313e70;
L_7005313ba8:;
    c->nzcv = cmp_d(c, VSF64(1), VSF64(0));
    if (COND_LE(c)) goto L_7005313fb8;
    fp_op_d(c, FOP_SQRT, 9, 1, 1);
    c->nzcv = cmp_d(c, VSF64(9), VSF64(9));
    if (COND_VS(c)) goto L_7005314078;
L_7005313bbc:;
    fp_op_d(c, FOP_DIV, 0, 13, 9);
    fp_op_d(c, FOP_SUB, 1, 5, 16);
    fp_op_d(c, FOP_MUL, 8, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 7, 17);
    fp_op_d(c, FOP_MUL, 11, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 4, 6);
    fp_op_d(c, FOP_MUL, 10, 1, 0);
L_7005313bd8:;
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 23) & 1) != 0) goto L_70053143f4;
L_7005313be0:;
    { uint64_t ea = c->x[20] + 0x60ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    if (c->x[22] != 0) goto L_7005313f50;
L_7005313be8:;
    { uint64_t ea = c->x[20] + 152; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[20] + 168; c->v[4] = LD128(ea); }
    { uint64_t ea = c->x[20] + 184; c->v[3] = LD128(ea); }
L_7005313bf4:;
    c->v[0] = ((sa32 *)&c->v[2])[1];
    FP_SETD(1, simd_s2d(c, VSF32(2)));
    c->v[2] = ((sa32 *)&c->v[2])[2];
    FP_SETD(17, simd_s2d(c, VSF32(3)));
    FP_SETD(7, simd_s2d(c, VSF32(4)));
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    FP_SETD(16, simd_s2d(c, VSF32(2)));
    c->v[2] = ((sa32 *)&c->v[4])[2];
    FP_SETD(6, simd_s2d(c, VSF32(0)));
    c->v[0] = ((sa32 *)&c->v[4])[1];
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x28ull; c->v[5] = LD32(ea); }
    FP_SETD(19, simd_s2d(c, VSF32(2)));
    c->v[2] = ((sa32 *)&c->v[3])[1];
    FP_SETD(0, simd_s2d(c, VSF32(0)));
    fp_op_d(c, FOP_ADD, 20, 1, 0);
    FP_SETD(18, simd_s2d(c, VSF32(2)));
    c->v[2] = ((sa32 *)&c->v[3])[2];
    FP_SETD(3, simd_s2d(c, VSF32(2)));
    fp_op_d(c, FOP_ADD, 2, 20, 3);
    fp_op_d(c, FOP_ADD, 0, 0, 3);
    fp_op_d(c, FOP_ADD, 2, 2, 12);
    fp_op_d(c, FOP_MUL, 2, 2, 13);
    fp_fma_d(c, 0, 0, 4, 0, 14, 2);
    fp_op_d(c, FOP_ADD, 0, 1, 3);
    fp_fma_d(c, 0, 0, 1, 20, 14, 2);
    fp_fma_d(c, 0, 0, 0, 0, 14, 2);
    c->nzcv = cmp_d(c, VSF64(2), VSF64(4));
    if (COND_LE(c)) goto L_7005313e34;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(0));
    if (COND_LE(c)) goto L_7005313e3c;
    c->nzcv = cmp_d(c, VSF64(2), VSF64(1));
    if (COND_LE(c)) goto L_7005313f8c;
    fp_op_d(c, FOP_SQRT, 1, 2, 2);
    c->nzcv = cmp_d(c, VSF64(1), VSF64(1));
    if (COND_VS(c)) goto L_70053140f8;
L_7005313c88:;
    fp_op_d(c, FOP_DIV, 0, 13, 1);
    fp_op_d(c, FOP_SUB, 2, 18, 19);
    fp_op_d(c, FOP_SUB, 4, 7, 6);
    fp_op_d(c, FOP_MUL, 3, 2, 0);
    fp_op_d(c, FOP_SUB, 2, 16, 17);
L_7005313c9c:;
    fp_op_d(c, FOP_MUL, 2, 2, 0);
    fp_op_d(c, FOP_MUL, 0, 4, 0);
L_7005313ca4:;
    fp_op_d(c, FOP_MUL, 4, 3, 3);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    c->x[8] = (uint64_t)(0x3cb0000000000000ull);
    c->v[6] = c->x[8];
    fp_fma_d(c, 0, 0, 4, 2, 2, 4);
    fp_fma_d(c, 0, 0, 4, 0, 0, 4);
    c->nzcv = cmp_d(c, VSF64(4), VSF64(6));
    if (COND_LE(c)) goto L_7005314430;
    fp_op_d(c, FOP_DIV, 7, 12, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 7);
    fp_op_d(c, FOP_NMUL, 4, 3, 7);
    fp_op_d(c, FOP_NMUL, 6, 2, 7);
    fp_op_d(c, FOP_NMUL, 7, 0, 7);
L_7005313cd8:;
    fp_op_d(c, FOP_NMUL, 0, 10, 4);
    fp_fma_d(c, 0, 0, 0, 8, 1, 0);
    c->x[8] = (uint64_t)(0ull | 0x9999999999999999ull);
    fp_op_d(c, FOP_MUL, 17, 10, 1);
    fp_fma_d(c, 0, 0, 17, 8, 4, 17);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x9532ull);
    fp_op_d(c, FOP_NMUL, 2, 10, 7);
    fp_fma_d(c, 0, 0, 2, 8, 6, 2);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x2309000000000000ull);
    fp_fma_d(c, 0, 1, 0, 9, 6, 0);
    fp_fma_d(c, 0, 0, 17, 9, 7, 17);
    fp_fma_d(c, 0, 0, 2, 9, 1, 2);
    fp_fma_d(c, 0, 1, 0, 11, 7, 0);
    fp_fma_d(c, 0, 1, 3, 11, 6, 17);
    fp_op_d(c, FOP_MUL, 17, 10, 6);
    fp_fma_d(c, 0, 0, 17, 8, 7, 17);
    fp_fma_d(c, 0, 0, 2, 11, 4, 2);
    c->v[6] = c->x[8];
    fp_fma_d(c, 0, 1, 17, 9, 4, 17);
    fp_fma_d(c, 0, 0, 1, 11, 1, 17);
    fp_op_d(c, FOP_MUL, 4, 3, 3);
    fp_fma_d(c, 0, 0, 4, 0, 0, 4);
    fp_fma_d(c, 0, 0, 4, 2, 2, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    c->nzcv = cmp_d(c, VSF64(4), VSF64(6));
    if (COND_LS(c)) goto L_7005313d68;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[6] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(4), VSF64(6));
    if (COND_EQ(c)) goto L_7005314440;
L_7005313d54:;
    fp_op_d(c, FOP_DIV, 4, 12, 4);
    fp_op_d(c, FOP_MUL, 0, 0, 4);
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
L_7005313d68:;
    fp_op_d(c, FOP_MUL, 4, 2, 2);
    fp_fma_d(c, 0, 0, 4, 3, 3, 4);
    FP_SETD(8, simd_s2d(c, VSF32(5)));
    c->nzcv = cmp_d(c, VSF64(0), 0);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    if (COND_MI(c)) goto L_7005313fe4;
    c->x[8] = (uint64_t)(0ull | 0x9999999999999999ull);
    c->v[9] = 0x0ull;
    c->v[10] = 0x0ull;
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x9532ull);
    c->v[11] = 0x0ull;
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x2309000000000000ull);
    c->v[5] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(4), VSF64(5));
    if (COND_LS(c)) goto L_7005313dc8;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[5] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(4), VSF64(5));
    if (COND_EQ(c)) goto L_7005314490;
L_7005313db8:;
    fp_op_d(c, FOP_DIV, 4, 12, 4);
    fp_op_d(c, FOP_MUL, 9, 3, 4);
    fp_op_d(c, FOP_MUL, 10, 2, 4);
    fp_op_d(c, FOP_MUL, 11, 1, 4);
L_7005313dc8:;
    c->v[1] = 0xbff0000000000000ull;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_MI(c)) goto L_7005314478;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(12));
    if (COND_GT(c)) goto L_7005314470;
L_7005313ddc:;
    c->x[30] = 0x7005313de0ull; f_700531c7d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_d(c, FOP_ADD, 0, 0, 0);
L_7005313de4:;
    fp_op_d(c, FOP_MUL, 2, 0, 8);
    fp_op_d(c, FOP_MUL, 0, 9, 2);
    fp_op_d(c, FOP_MUL, 1, 10, 2);
    fp_op_d(c, FOP_MUL, 2, 11, 2);
    FP_SETS(0, simd_d2s(c, VSF64(0)));
    FP_SETS(1, simd_d2s(c, VSF64(1)));
    { uint64_t ea = c->x[19] + 0; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    FP_SETS(0, simd_d2s(c, VSF64(2)));
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(0)); }
L_7005313e08:;
    c->sp = (uint64_t)(c->sp + 0x260ull);
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[14] = LD64(ea); c->sp = c->sp + 144; }
    c->pc = 0; return;
L_7005313e34:;
    c->nzcv = cmp_d(c, VSF64(4), VSF64(0));
    if (COND_GT(c)) goto L_7005313ea4;
L_7005313e3c:;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_LE(c)) goto L_7005313f8c;
    fp_op_d(c, FOP_SQRT, 2, 0, 0);
    c->nzcv = cmp_d(c, VSF64(2), VSF64(2));
    if (COND_VS(c)) goto L_700531403c;
L_7005313e50:;
    fp_op_d(c, FOP_DIV, 3, 13, 2);
    fp_op_d(c, FOP_SUB, 0, 16, 17);
    fp_op_d(c, FOP_ADD, 4, 6, 7);
    fp_op_d(c, FOP_MUL, 1, 0, 3);
    fp_op_d(c, FOP_ADD, 0, 19, 18);
    fp_op_d(c, FOP_MUL, 0, 0, 3);
    fp_op_d(c, FOP_MUL, 3, 4, 3);
    goto L_7005313ca4;
L_7005313e70:;
    c->nzcv = cmp_d(c, VSF64(3), VSF64(0));
    if (COND_LE(c)) goto L_7005313fb8;
    fp_op_d(c, FOP_SQRT, 10, 3, 3);
    c->nzcv = cmp_d(c, VSF64(10), VSF64(10));
    if (COND_VS(c)) goto L_7005314138;
L_7005313e84:;
    fp_op_d(c, FOP_DIV, 0, 13, 10);
    fp_op_d(c, FOP_SUB, 1, 17, 7);
    fp_op_d(c, FOP_MUL, 8, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 4, 6);
    fp_op_d(c, FOP_MUL, 9, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 5, 16);
    fp_op_d(c, FOP_MUL, 11, 1, 0);
    goto L_7005313bd8;
L_7005313ea4:;
    c->nzcv = cmp_d(c, VSF64(4), VSF64(1));
    if (COND_LE(c)) goto L_7005313f8c;
    fp_op_d(c, FOP_SQRT, 3, 4, 4);
    c->nzcv = cmp_d(c, VSF64(3), VSF64(3));
    if (COND_VS(c)) goto L_7005314178;
L_7005313eb8:;
    fp_op_d(c, FOP_DIV, 0, 13, 3);
    fp_op_d(c, FOP_SUB, 1, 18, 19);
    fp_op_d(c, FOP_ADD, 2, 6, 7);
    fp_op_d(c, FOP_ADD, 4, 16, 17);
    fp_op_d(c, FOP_MUL, 1, 1, 0);
    goto L_7005313c9c;
L_7005313ed0:;
    { uint64_t ea = c->x[25] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) == 0) goto L_7005313954;
    c->x[23] = (uint64_t)(c->x[20] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x7005313ee4ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[25] + 8; c->v[1] = LD128(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->x[25] + 24; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 16; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[25] + 40; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x30ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005313f00ull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[21] = a; c->v[20] = b; }
    { uint64_t ea = c->sp + 0x30ull; c->v[19] = LD128(ea); }
    goto L_7005313960;
L_7005313f0c:;
    { uint64_t ea = c->x[25] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 10) & 1) == 0) goto L_7005313a18;
    c->x[23] = (uint64_t)(c->x[20] + 0x78ull);
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(0)); }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x0ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[21]); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[20]); ST128(ea + 16, c->v[19]); }
    c->x[30] = 0x7005313f34ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[25] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[25] + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x48ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005313f4cull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053143d0;
L_7005313f50:;
    { uint64_t ea = c->x[22] + 0xd4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) == 0) goto L_7005313be8;
    c->x[21] = (uint64_t)(c->x[20] + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005313f64ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 8; c->v[1] = LD128(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[22] + 24; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[22] + 40; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005313f80ull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[4] = a; c->v[2] = b; }
    { uint64_t ea = c->sp + 0x10ull; c->v[3] = LD128(ea); }
    goto L_7005313bf4;
L_7005313f8c:;
    fp_op_d(c, FOP_SQRT, 0, 1, 1);
    c->nzcv = cmp_d(c, VSF64(0), VSF64(0));
    if (COND_VS(c)) goto L_70053141b8;
L_7005313f98:;
    fp_op_d(c, FOP_DIV, 2, 13, 0);
    fp_op_d(c, FOP_SUB, 1, 7, 6);
    fp_op_d(c, FOP_ADD, 3, 16, 17);
    fp_op_d(c, FOP_ADD, 4, 19, 18);
    fp_op_d(c, FOP_MUL, 1, 1, 2);
    fp_op_d(c, FOP_MUL, 3, 3, 2);
    fp_op_d(c, FOP_MUL, 2, 4, 2);
    goto L_7005313ca4;
L_7005313fb8:;
    fp_op_d(c, FOP_SQRT, 11, 0, 0);
    c->nzcv = cmp_d(c, VSF64(11), VSF64(11));
    if (COND_VS(c)) goto L_70053141f4;
L_7005313fc4:;
    fp_op_d(c, FOP_DIV, 0, 13, 11);
    fp_op_d(c, FOP_SUB, 1, 6, 4);
    fp_op_d(c, FOP_MUL, 8, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 5, 16);
    fp_op_d(c, FOP_MUL, 10, 1, 0);
    fp_op_d(c, FOP_ADD, 1, 7, 17);
    fp_op_d(c, FOP_MUL, 9, 1, 0);
    goto L_7005313bd8;
L_7005313fe4:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x340ull; c->v[5] = LD64(ea); }
    c->nzcv = cmp_d(c, VSF64(4), VSF64(5));
    if (COND_LS(c)) goto L_70053144b8;
    c->x[8] = (uint64_t)(0x7ff0000000000000ull);
    c->v[5] = c->x[8];
    c->nzcv = cmp_d(c, VSF64(4), VSF64(5));
    if (COND_EQ(c)) goto L_70053144c8;
    fp_op_d(c, FOP_DIV, 4, 12, 4);
    c->v[3] = VS64(3) ^ 0x8000000000000000ull;
    c->v[2] = VS64(2) ^ 0x8000000000000000ull;
    c->v[1] = VS64(1) ^ 0x8000000000000000ull;
    fp_op_d(c, FOP_MUL, 9, 4, 3);
    fp_op_d(c, FOP_MUL, 10, 4, 2);
    fp_op_d(c, FOP_MUL, 11, 4, 1);
L_7005314020:;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(12));
    if (COND_GT(c)) goto L_7005314500;
    c->v[1] = 0xbff0000000000000ull;
    c->nzcv = cmp_d(c, VSF64(0), VSF64(1));
    if (COND_MI(c)) goto L_7005314470;
    c->v[0] = VS64(0) ^ 0x8000000000000000ull;
    goto L_7005313ddc;
L_700531403c:;
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(5)); }
    c->v[14] = VS64(6);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(19)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(17)); ST64(ea + 8, VS64(7)); }
    c->x[30] = 0x7005314058ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[7] = a; c->v[18] = b; }
    c->v[6] = VS64(14);
    { uint64_t ea = c->sp + 0x0ull; c->v[17] = LD64(ea); }
    c->v[2] = VS64(0);
    { uint64_t ea = c->sp + 0x20ull; c->v[19] = LD64(ea); }
    { uint64_t ea = c->sp + 0x30ull; c->v[16] = LD64(ea); }
    { uint64_t ea = c->x[29] - 52; c->v[5] = LD32(ea); }
    goto L_7005313e50;
L_7005314078:;
    c->v[0] = VS64(1);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(4)); }
    c->v[11] = VS64(5);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(6)); }
    c->v[8] = VS64(7);
    c->v[10] = VS64(16);
    c->v[9] = VS64(17);
    c->x[30] = 0x7005314098ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x20ull; c->v[6] = LD64(ea); }
    c->v[17] = VS64(9);
    c->v[16] = VS64(10);
    { uint64_t ea = c->sp + 0x30ull; c->v[4] = LD64(ea); }
    c->v[7] = VS64(8);
    c->v[5] = VS64(11);
    c->v[9] = VS64(0);
    goto L_7005313bbc;
L_70053140b8:;
    c->v[0] = VS64(2);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(4)); }
    c->v[11] = VS64(5);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(6)); }
    c->v[8] = VS64(7);
    c->v[10] = VS64(16);
    c->v[9] = VS64(17);
    c->x[30] = 0x70053140d8ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x20ull; c->v[6] = LD64(ea); }
    c->v[17] = VS64(9);
    c->v[16] = VS64(10);
    { uint64_t ea = c->sp + 0x30ull; c->v[4] = LD64(ea); }
    c->v[7] = VS64(8);
    c->v[5] = VS64(11);
    c->v[8] = VS64(0);
    goto L_7005313b80;
L_70053140f8:;
    c->v[0] = VS64(2);
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(5)); }
    c->v[14] = VS64(6);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(19)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(17)); ST64(ea + 8, VS64(7)); }
    c->x[30] = 0x7005314118ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[7] = a; c->v[18] = b; }
    c->v[6] = VS64(14);
    { uint64_t ea = c->sp + 0x0ull; c->v[17] = LD64(ea); }
    c->v[1] = VS64(0);
    { uint64_t ea = c->sp + 0x20ull; c->v[19] = LD64(ea); }
    { uint64_t ea = c->sp + 0x30ull; c->v[16] = LD64(ea); }
    { uint64_t ea = c->x[29] - 52; c->v[5] = LD32(ea); }
    goto L_7005313c88;
L_7005314138:;
    c->v[0] = VS64(3);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(4)); }
    c->v[11] = VS64(5);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(6)); }
    c->v[8] = VS64(7);
    c->v[10] = VS64(16);
    c->v[9] = VS64(17);
    c->x[30] = 0x7005314158ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x20ull; c->v[6] = LD64(ea); }
    c->v[17] = VS64(9);
    c->v[16] = VS64(10);
    { uint64_t ea = c->sp + 0x30ull; c->v[4] = LD64(ea); }
    c->v[7] = VS64(8);
    c->v[5] = VS64(11);
    c->v[10] = VS64(0);
    goto L_7005313e84;
L_7005314178:;
    c->v[0] = VS64(4);
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(5)); }
    c->v[14] = VS64(6);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(19)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(17)); ST64(ea + 8, VS64(7)); }
    c->x[30] = 0x7005314198ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[7] = a; c->v[18] = b; }
    c->v[6] = VS64(14);
    { uint64_t ea = c->sp + 0x0ull; c->v[17] = LD64(ea); }
    c->v[3] = VS64(0);
    { uint64_t ea = c->sp + 0x20ull; c->v[19] = LD64(ea); }
    { uint64_t ea = c->sp + 0x30ull; c->v[16] = LD64(ea); }
    { uint64_t ea = c->x[29] - 52; c->v[5] = LD32(ea); }
    goto L_7005313eb8;
L_70053141b8:;
    c->v[0] = VS64(1);
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(5)); }
    c->v[14] = VS64(6);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(16)); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(19)); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, VS64(18)); }
    { uint64_t ea = c->sp + 0; ST64(ea, VS64(17)); ST64(ea + 8, VS64(7)); }
    c->x[30] = 0x70053141d8ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 8; u128 a = LD64(ea), b = LD64(ea + 8); c->v[7] = a; c->v[18] = b; }
    c->v[6] = VS64(14);
    { uint64_t ea = c->sp + 0x0ull; c->v[17] = LD64(ea); }
    { uint64_t ea = c->sp + 0x20ull; c->v[19] = LD64(ea); }
    { uint64_t ea = c->sp + 0x30ull; c->v[16] = LD64(ea); }
    { uint64_t ea = c->x[29] - 52; c->v[5] = LD32(ea); }
    goto L_7005313f98;
L_70053141f4:;
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, VS64(4)); }
    c->v[11] = VS64(5);
    c->v[8] = VS64(7);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, VS64(6)); }
    c->v[10] = VS64(16);
    c->v[9] = VS64(17);
    c->x[30] = 0x7005314210ull; f_700531c7c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x20ull; c->v[6] = LD64(ea); }
    c->v[17] = VS64(9);
    c->v[16] = VS64(10);
    { uint64_t ea = c->sp + 0x30ull; c->v[4] = LD64(ea); }
    c->v[7] = VS64(8);
    c->v[5] = VS64(11);
    c->v[11] = VS64(0);
    goto L_7005313fc4;
L_7005314230:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313888;
L_7005314238:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_7005313898;
L_7005314240:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053138a8;
L_7005314248:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053138b8;
L_7005314250:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053138c8;
L_7005314258:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053138d8;
L_7005314260:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053138e8;
L_7005314268:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053138f8;
L_7005314270:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313908;
L_7005314278:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_7005313918;
L_7005314280:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313928;
L_7005314288:;
    c->x[30] = 0x700531428cull; f_700531c720(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x50ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x60ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053142b0ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531cea0ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x42eull);
    c->x[3] = (uint64_t)(LD64(0x700531ce70ull));
    c->x[3] = (uint64_t)(c->x[3] + 0xac0ull);
    goto L_70053143a4;
L_70053142c8:;
    c->x[8] = (uint64_t)(c->sp + 0x50ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x60ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053142ecull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531ce88ull));
    c->x[1] = (uint64_t)(c->x[1] + 0xcb5ull);
    c->x[0] = (uint64_t)(c->sp + 0x50ull);
    c->x[30] = 0x7005314300ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_700531394c;
L_7005314304:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313974;
L_700531430c:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_7005313984;
L_7005314314:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313994;
L_700531431c:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053139a0;
L_7005314324:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053139b0;
L_700531432c:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053139c0;
L_7005314334:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053139d0;
L_700531433c:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053139dc;
L_7005314344:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_70053139ec;
L_700531434c:;
    c->x[9] = (uint32_t)(0x1ull);
    goto L_70053139fc;
L_7005314354:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005313a0c;
L_700531435c:;
    { uint64_t ea = c->x[20] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x700531436cull; f_700531c720(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x50ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x60ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005314390ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531cea0ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x42eull);
    c->x[3] = (uint64_t)(LD64(0x700531ce58ull));
    c->x[3] = (uint64_t)(c->x[3] + 0x136ull);
L_70053143a4:;
    c->x[0] = (uint64_t)(c->sp + 0x50ull);
    c->x[30] = 0x70053143acull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005313e08;
L_70053143b0:;
    c->x[1] = (uint64_t)(c->sp + 0x40ull);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->sp + 0x0ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[21]); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[20]); ST128(ea + 16, c->v[19]); }
    c->pc = c->x[8]; c->x[30] = 0x70053143d0ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053143d0:;
    { uint64_t ea = c->sp + 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[21] = a; c->v[20] = b; }
    { uint64_t ea = c->sp + 0x30ull; c->v[19] = LD128(ea); }
    { uint64_t ea = c->sp + 0x0ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0x8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 52; c->v[0] = LD32(ea); }
    goto L_7005313a50;
L_70053143e8:;
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x48ull; ST32(ea, 0u); }
    goto L_7005313a50;
L_70053143f4:;
    c->x[8] = (uint64_t)(c->sp + 0x50ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x60ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x7005314418ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531ce88ull));
    c->x[1] = (uint64_t)(c->x[1] + 0xcb5ull);
    c->x[0] = (uint64_t)(c->sp + 0x50ull);
    c->x[30] = 0x700531442cull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005313be0;
L_7005314430:;
    c->v[4] = VS64(3) ^ 0x8000000000000000ull;
    c->v[6] = VS64(2) ^ 0x8000000000000000ull;
    c->v[7] = VS64(0) ^ 0x8000000000000000ull;
    goto L_7005313cd8;
L_7005314440:;
    c->x[8] = (uint64_t)(0x1fe0000000000000ull);
    c->v[4] = c->x[8];
    fp_op_d(c, FOP_MUL, 0, 0, 4);
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
    fp_op_d(c, FOP_MUL, 4, 3, 3);
    fp_fma_d(c, 0, 0, 4, 0, 0, 4);
    fp_fma_d(c, 0, 0, 4, 2, 2, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    goto L_7005313d54;
L_7005314470:;
    c->v[0] = 0x0ull;
    goto L_7005313de4;
L_7005314478:;
    c->x[8] = (uint64_t)(0x2d18ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffff0000ffffull) | 0x54440000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffff0000ffffffffull) | 0x21fb00000000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x4019000000000000ull);
    c->v[0] = c->x[8];
    goto L_7005313de4;
L_7005314490:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x2d8ull; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
    fp_op_d(c, FOP_MUL, 4, 2, 2);
    fp_fma_d(c, 0, 0, 4, 3, 3, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    goto L_7005313db8;
L_70053144b8:;
    c->v[9] = 0x0ull;
    c->v[10] = 0x0ull;
    c->v[11] = 0x0ull;
    goto L_7005314020;
L_70053144c8:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x3c0ull; c->v[4] = LD64(ea); }
    fp_op_d(c, FOP_MUL, 3, 3, 4);
    fp_op_d(c, FOP_MUL, 2, 2, 4);
    fp_op_d(c, FOP_MUL, 1, 1, 4);
    fp_op_d(c, FOP_MUL, 4, 2, 2);
    fp_fma_d(c, 0, 0, 4, 3, 3, 4);
    fp_fma_d(c, 0, 0, 4, 1, 1, 4);
    fp_op_d(c, FOP_SQRT, 4, 4, 4);
    fp_op_d(c, FOP_DIV, 4, 12, 4);
    fp_op_d(c, FOP_MUL, 9, 3, 4);
    fp_op_d(c, FOP_MUL, 10, 2, 4);
    fp_op_d(c, FOP_MUL, 11, 1, 4);
    goto L_7005314020;
L_7005314500:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb0ull));
    { uint64_t ea = c->x[8] + 0x440ull; c->v[0] = LD64(ea); }
    goto L_7005313de4;
}

void f_7005315db4(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005315f64;
    { uint64_t ea = c->x[0] + 0xa0ull; c->v[0] = LD128(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce18ull));
    c->v[19] = 0x3f800000ull;
    { uint64_t ea = c->x[1] + 0x0ull; c->v[2] = LD128(ea); }
    VW(vu32, 1, 1, VREG(vu32, 0) ^ 0x80000000u);
    VW(vu32, 1, 0, SHUF(VREG(vu32, 0), VREG(vu32, 0), 3, 3, 3, 3));
    ((sa32 *)&c->v[1])[3] = ((sa32 *)&c->v[0])[1];
    { uint64_t ea = c->x[8] + 0x70ull; c->v[0] = LD128(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce10ull));
    { uint64_t ea = c->x[8] + 0xed0ull; c->v[3] = LD128(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce18ull));
    { uint64_t ea = c->x[8] + 0x4b0ull; c->v[4] = LD128(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce10ull));
    sv_tbl(c, 1, 0, 0, 3, 2, 3);
    sv_tbl(c, 1, 0, 0, 2, 2, 4);
    { uint64_t ea = c->x[8] + 0xb90ull; c->v[4] = LD128(ea); }
    c->x[8] = (uint64_t)(LD64(0x700531ce10ull));
    { uint64_t ea = c->x[8] + 0xc50ull; c->v[5] = LD128(ea); }
    sv_tbl(c, 1, 0, 0, 0, 1, 0);
    sv_tbl(c, 1, 0, 0, 1, 1, 4);
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 2), VREG(vf32, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 4, VREG(vf32, 4), vneg_s(VREG(vf32, 3)), VREG(vf32, 0));
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 3), VREG(vf32, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 1, VREG(vf32, 1), VREG(vf32, 2), VREG(vf32, 0));
    sv_tbl(c, 1, 0, 0, 4, 4, 5);
    SV_FOP_S(FOP_SUB, 1, 0, VREG(vf32, 4), VREG(vf32, 1), (vf32){});
    VW(vu32, 1, 3, VREG(vu32, 0) ^ 0x80000000u);
    VW(vu32, 1, 1, SHUF(VREG(vu32, 0), VREG(vu32, 0), 3, 3, 3, 3));
    VW(vu64, 1, 2, VREG(vu64, 3) | VREG(vu64, 3));
    ((sa32 *)&c->v[2])[3] = ((sa32 *)&c->v[1])[1];
    SV_FOP_S(FOP_ADD, 1, 4, VREG(vf32, 2), VREG(vf32, 2), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 1, VREG(vf32, 4), vsplat_s(VREG(vf32, 3), 0, 1), (vf32){});
    fp_op_s(c, FOP_SUB, 20, 19, 1);
    SV_FOP_S(FOP_MUL, 1, 2, VREG(vf32, 4), vsplat_s(VREG(vf32, 0), 3, 1), (vf32){});
    SV_FOP_S(FOP_MUL, 1, 16, VREG(vf32, 4), vsplat_s(VREG(vf32, 3), 1, 1), (vf32){});
    c->v[5] = ((sa32 *)&c->v[1])[2];
    c->v[6] = ((sa32 *)&c->v[2])[1];
    fp_op_s(c, FOP_ADD, 7, 5, 6);
    c->v[17] = ((sa32 *)&c->v[16])[2];
    fp_op_s(c, FOP_SUB, 18, 17, 2);
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 3), VREG(vf32, 4), (vf32){});
    fp_op_s(c, FOP_SUB, 5, 5, 6);
    c->v[16] = ((sa32 *)&c->v[16])[1];
    VW(vu64, 1, 0, VREG(vu64, 7) | VREG(vu64, 7));
    c->v[3] = ((sa32 *)&c->v[3])[2];
    fp_op_s(c, FOP_SUB, 3, 19, 3);
    ((sa32 *)&c->v[7])[1] = ((sa32 *)&c->v[18])[0];
    fp_op_s(c, FOP_SUB, 4, 3, 16);
    c->v[19] = ((sa32 *)&c->v[2])[2];
    VW(vu64, 1, 21, VREG(vu64, 4) | VREG(vu64, 4));
    ((sa32 *)&c->v[0])[1] = ((sa32 *)&c->v[18])[0];
    fp_op_s(c, FOP_SUB, 18, 20, 16);
    c->v[16] = ((sa32 *)&c->v[1])[1];
    { uint64_t ea = c->x[0] + 0x20ull; c->v[20] = LD128(ea); }
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    ((sa32 *)&c->v[7])[2] = ((sa32 *)&c->v[18])[0];
    SV_FOP_S(FOP_MUL, 1, 7, VREG(vf32, 7), vsplat_s(VREG(vf32, 20), 3, 1), (vf32){});
    fp_op_s(c, FOP_ADD, 20, 16, 19);
    ((sa32 *)&c->v[4])[1] = ((sa32 *)&c->v[20])[0];
    ((sa32 *)&c->v[21])[1] = ((sa32 *)&c->v[20])[0];
    { uint64_t ea = c->x[0] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[6] = a; c->v[20] = b; }
    ((sa32 *)&c->v[4])[2] = ((sa32 *)&c->v[5])[0];
    SV_FOP_S(FOP_MUL, 1, 4, VREG(vf32, 4), vsplat_s(VREG(vf32, 6), 3, 1), (vf32){});
    fp_op_s(c, FOP_SUB, 6, 16, 19);
    VW(vu64, 1, 3, VREG(vu64, 6) | VREG(vu64, 6));
    ((sa32 *)&c->v[6])[1] = ((sa32 *)&c->v[1])[0];
    ((sa32 *)&c->v[3])[1] = ((sa32 *)&c->v[1])[0];
    fp_op_s(c, FOP_ADD, 1, 17, 2);
    ((sa32 *)&c->v[6])[2] = ((sa32 *)&c->v[1])[0];
    SV_FOP_S(FOP_MUL, 1, 2, VREG(vf32, 6), vsplat_s(VREG(vf32, 20), 3, 1), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 2, VREG(vf32, 2), VREG(vf32, 4), (vf32){});
    { uint64_t ea = c->x[1] + 0x20ull; c->v[4] = LD64(ea); }
    SV_FOP_S(FOP_ADD, 1, 2, VREG(vf32, 7), VREG(vf32, 2), (vf32){});
    { uint64_t ea = c->x[1] + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[16] = a; c->v[7] = b; }
    { uint64_t ea = c->x[0] + 0x18ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[0] + 0x20ull; ST64(ea, VS64(0)); }
    { uint64_t ea = c->x[0] + 0x10ull; ST64(ea, VS64(3)); }
    { uint64_t ea = c->x[0] + 0x8ull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, VS64(21)); }
    { uint64_t ea = c->x[0] + 0x28ull; ST32(ea, VS32(18)); }
    c->v[6] = ((sa32 *)&c->v[2])[2];
    FP_SETD(6, simd_s2d(c, VSF32(6)));
    fp_op_d(c, FOP_SUB, 4, 4, 6);
    c->v[6] = ((sa32 *)&c->v[2])[1];
    FP_SETD(2, simd_s2d(c, VSF32(2)));
    fp_op_d(c, FOP_SUB, 2, 16, 2);
    FP_SETS(5, simd_d2s(c, VSF64(4)));
    FP_SETD(6, simd_s2d(c, VSF32(6)));
    FP_SETS(0, simd_d2s(c, VSF64(2)));
    { uint64_t ea = c->x[0] + 0x38ull; ST32(ea, VS32(5)); }
    fp_op_d(c, FOP_SUB, 6, 7, 6);
    FP_SETD(7, simd_s2d(c, VSF32(5)));
    FP_SETD(3, simd_s2d(c, VSF32(0)));
    FP_SETS(1, simd_d2s(c, VSF64(6)));
    fp_op_d(c, FOP_SUB, 2, 2, 3);
    FP_SETS(2, simd_d2s(c, VSF64(2)));
    ((sa32 *)&c->v[0])[1] = ((sa32 *)&c->v[1])[0];
    FP_SETD(1, simd_s2d(c, VSF32(1)));
    fp_op_d(c, FOP_SUB, 1, 6, 1);
    { uint64_t ea = c->x[0] + 0x30ull; ST64(ea, VS64(0)); }
    FP_SETS(1, simd_d2s(c, VSF64(1)));
    ((sa32 *)&c->v[2])[1] = ((sa32 *)&c->v[1])[0];
    fp_op_d(c, FOP_SUB, 1, 4, 7);
    FP_SETS(0, simd_d2s(c, VSF64(1)));
    { uint64_t ea = c->x[0] + 0x40ull; ST64(ea, VS64(2)); }
    { uint64_t ea = c->x[0] + 0x48ull; ST32(ea, VS32(0)); }
L_7005315f64:;
    c->pc = 0; return;
}

void f_7005316138(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x0ull; ST64(ea, c->x[1]); }
    c->pc = 0; return;
}

void f_7005316140(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700531615cull; f_700531c468(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005316168ull; f_700531c3c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[20] == 0) goto L_70053161e8;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    if (c->x[0] == 0) goto L_70053161e8;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531617cull; f_700531c5e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_70053161d4;
    c->x[1] = (uint32_t)(0xffffffffull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531618cull; f_700531c5e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053161d4;
    { uint64_t ea = c->x[21] + 0xadull; uint64_t v = (uint64_t)(int64_t)(int8_t)LD8(ea); c->x[8] = (uint32_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_GT(c)) goto L_70053161e8;
    { uint64_t ea = c->x[19] + 0x0ull; c->v[0] = LD32(ea); }
    c->v[1] = 0x3400000034000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LS(c)) goto L_70053161e8;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053161b4ull; f_700531c328(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x0ull; c->v[0] = LD32(ea); }
    c->v[1] = 0x3400000034000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_70053161e8;
    c->x[1] = (uint32_t)(0xaull);
    c->x[2] = (uint32_t)(0xffffffffull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053161d4ull; f_700531c470(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053161d4:;
    c->x[8] = (uint64_t)(0x43960000ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffffull) | 0x4396000000000000ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint32_t)(0xbf800000ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
L_70053161e8:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700531635c(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x48ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053163b8;
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x700531637cull; f_700531c4b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053163b8;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[19] + 0x20ull);
    if ((uint32_t)c->x[8] != 0) goto L_70053163ac;
    c->x[8] = (uint64_t)(0x100000000ull);
    c->x[9] = (uint64_t)(0x3f80000000000000ull);
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 32; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint32_t)(0x16ull);
    { uint64_t ea = c->x[19] + 0x38ull; ST16(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x40ull; ST8(ea, 0u); }
L_70053163ac:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    goto L_700531c608;
L_70053163b8:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700531c608:;
    c->x[16] = (uint64_t)(LD64(0x700531cc18ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_70053163c4(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x50ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x70053163e0ull; f_700531c618(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053163fc;
L_70053163e4:;
    { uint64_t ea = c->x[0] + 0xdaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] >> ((uint32_t)c->x[19] & 31));
    c->x[0] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
L_70053163f0:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_70053163fc:;
    { uint64_t ea = c->x[20] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x340ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 3) & 1) != 0) goto L_7005316410;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_70053163f0;
L_7005316410:;
    c->x[0] = (uint64_t)(c->x[8] + 0x248ull);
    goto L_70053163e4;
}

void f_7005316eb0(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x1f2ull; ST8(ea, 0u); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316ed4ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005316fc0;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005316ee8ull; f_700531c448(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005316fc0;
    { uint64_t ea = c->x[0] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005316fc0;
    { uint64_t ea = c->x[8] + 0x120ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    if (c->x[20] == 0) goto L_7005316fc0;
    c->x[1] = (uint32_t)(0x16ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005316f08ull; f_700531c5d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x27ull);
    c->x[8] = (uint32_t)(((uint32_t)c->x[8] & 0xfffffffeull) | ((((uint32_t)c->x[8] & 0xfffffffeull) | ((uint32_t)c->x[0] & 0x1ull)) & 0x1ull));
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x1f2ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316f20ull; f_700531c5d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[9] = (uint32_t)(0x2ull);
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    c->x[1] = (uint32_t)(0x2bull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffdull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->x[19] + 0x1f2ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316f48ull; f_700531c5d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[9] = (uint32_t)(0x4ull);
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    c->x[1] = (uint32_t)(0x42ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffbull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->x[19] + 0x1f2ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316f70ull; f_700531c5d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[9] = (uint32_t)(0x10ull);
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    c->x[1] = (uint32_t)(0x13ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffffefull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->x[19] + 0x1f2ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316f98ull; f_700531c5d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[0] & 0x1ull));
    c->x[9] = (uint32_t)(0x8ull);
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffff7ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[9]);
    { uint64_t ea = c->x[19] + 0x1f2ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005316fbcull; f_700531c5d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x174ull; ST32(ea, VS32(0)); }
L_7005316fc0:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005317224(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, VS64(8)); }
    { uint64_t ea = c->sp + 0x78ull; ST64(ea, c->x[23]); }
    { uint64_t ea = c->sp + 104; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x68ull);
    { uint64_t ea = c->x[0] + 0x170ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[23], 0x4ull));
    if (COND_NE(c)) goto L_7005317394;
L_7005317254:;
    { uint64_t ea = c->sp + 0x30ull; ST32(ea, 0u); }
    c->x[1] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->x[1] + 0x988ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x14ull);
    c->x[2] = (uint32_t)(0x24ull);
    c->x[21] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[30] = 0x7005317278ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x70053172a4ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053172b0ull; f_700531bfa0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[22] + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 52; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0xa0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[22] + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0xa8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x3cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0xb0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 76; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x48ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[22] + 0xc0ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x54ull; ST32(ea, VS32(0)); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x70053172f0ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531732c;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005317304ull; f_700531c448(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x3cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[0]); }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->sp + 0x48ull; c->v[1] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0x54ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005317328ull; f_700531c640(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, VS32(0)); }
L_700531732c:;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700531734c;
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317340ull; f_70053175c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_700531734c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531734cull; f_70053177c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531734c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317354ull; f_70053179c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531735cull; f_7005317b00(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317368ull; f_700531c648(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70053173bc;
L_7005317370:;
    c->x[8] = (uint32_t)(0x1ull);
L_7005317374:;
    { uint64_t ea = c->x[19] + 0x170ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005317378:;
    { uint64_t ea = c->sp + 0x60ull; c->v[8] = LD64(ea); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 104; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
L_7005317394:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053173a0ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053173b0;
    { uint64_t ea = c->x[19] + 0x18cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_EQ(c)) goto L_7005317254;
L_70053173b0:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053173b8ull; f_700531635c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317254;
L_70053173bc:;
    c->v[8] = 0x3f800000ull;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005317438;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053173d0ull; f_700531c618(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[0] = VS32(8);
    if (c->x[0] == 0) goto L_70053173ec;
    { uint64_t ea = c->x[0] + 0xf4ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->v[0] = 0x3f800000ull;
    c->v[1] = 0x40e00000ull;
    (void)(subs32(c, (uint32_t)c->x[8], 0x9ull));
    c->v[0] = COND_EQ(c) ? VS32(1) : VS32(0);
L_70053173ec:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 240; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    { uint64_t ea = c->x[8] + 0x2b4ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2b8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    { uint64_t ea = c->x[8] + 0x2bcull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 2, 4);
    { uint64_t ea = c->x[19] + 0xf8ull; c->v[4] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 3, 3, 4);
    { uint64_t ea = c->x[19] + 0x1a4ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_MUL, 5, 2, 2);
    fp_fma_s(c, 0, 0, 1, 1, 1, 5);
    { uint64_t ea = c->x[19] + 0x1a8ull; ST32(ea, VS32(2)); }
    fp_fma_s(c, 0, 0, 1, 3, 3, 1);
    { uint64_t ea = c->x[19] + 0x1acull; ST32(ea, VS32(3)); }
    fp_op_s(c, FOP_SQRT, 1, 1, 1);
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    { uint64_t ea = c->x[19] + 0x1a0ull; ST32(ea, VS32(0)); }
    goto L_700531743c;
L_7005317438:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
L_700531743c:;
    { uint64_t ea = c->x[8] + 0x280ull; c->v[0] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[8] = COND_EQ(c) ? VS32(8) : VS32(0);
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_DIV, 0, 0, 8);
    c->x[30] = 0x700531745cull; f_700531c650(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005317478;
L_7005317460:;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005317370;
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005317378;
    c->x[8] = (uint32_t)(0x2ull);
    goto L_7005317374;
L_7005317478:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317480ull; f_700531c658(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053174c8;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x7005317490ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x70053174acull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[1] = (uint32_t)(0xcull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053174bcull; f_700531c578(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x70053174c4ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317460;
L_70053174c8:;
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    fp_op_s(c, FOP_DIV, 1, 0, 8);
    c->x[30] = 0x70053174d8ull; f_7005317c20(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    fp_op_s(c, FOP_DIV, 1, 0, 8);
    c->x[30] = 0x70053174e8ull; f_7005317cd4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[20] + 0x0ull; c->v[0] = LD32(ea); }
    (void)(subs32(c, (uint32_t)c->x[23], 0x3ull));
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[8], 0x3ull); else c->nzcv = 0x0ull;
    fp_op_s(c, FOP_DIV, 1, 0, 8);
    c->x[2] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[30] = 0x700531750cull; f_7005317f2c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_700531751c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700531751cull; f_70053177c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531751c:;
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 4) & 1) == 0) goto L_7005317574;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 240; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    { uint64_t ea = c->x[8] + 0x2b4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x2b8ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 2, 0);
    { uint64_t ea = c->x[8] + 0x2bcull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    { uint64_t ea = c->x[19] + 0xf8ull; c->v[3] = LD32(ea); }
    c->x[8] = (uint32_t)(0x43100000ull);
    fp_op_s(c, FOP_SUB, 2, 3, 2);
    fp_op_s(c, FOP_MUL, 4, 1, 1);
    fp_fma_s(c, 0, 0, 0, 0, 0, 4);
    c->v[1] = (uint32_t)c->x[8];
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_MI(c)) goto L_7005317574;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005317570ull; f_70053184b4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317460;
L_7005317574:;
    c->x[8] = (uint32_t)(0x7fc00000ull);
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317588ull; f_7005317080(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[19] + 0x1d0ull);
    c->x[30] = 0x7005317594ull; f_7005316140(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[23], 0x3ull));
    if (COND_EQ(c)) goto L_70053175b8;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x3ull));
    if (COND_NE(c)) goto L_70053175b8;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x4ull);
L_70053175b0:;
    { uint64_t ea = c->x[19] + 0x1f1ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_7005317460;
L_70053175b8:;
    if (((c->x[8] >> 2) & 1) == 0) goto L_7005317460;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfffffffbull);
    goto L_70053175b0;
}

void f_7005317b00(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005317b24ull; f_700531c4c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317bc0;
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317b34ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317bb4;
    { uint64_t ea = c->x[0] + 0x208ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317bb4;
    { uint64_t ea = c->x[8] + 0x34ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LS(c)) goto L_7005317bb4;
    c->x[8] = (uint32_t)((COND_LE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[22] = (uint64_t)(c->x[21] + 0x1e8ull);
    if (COND_LE(c)) goto L_7005317bbc;
    { uint64_t ea = c->x[21] + 0x1e8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005317bbc;
    { uint64_t ea = c->x[21] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(c->x[8] + 0x70ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317b70ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005317bd4;
    c->x[8] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005317b80ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317c18;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317c18;
    { uint64_t ea = c->x[8] + 0x378ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 8; ST64(ea, c->x[8]); }
    if (c->x[8] == 0) goto L_7005317c18;
    c->x[0] = (uint64_t)(c->x[29] - 0x8ull);
    c->x[30] = 0x7005317ba4ull; f_700531c5b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[0]);
L_7005317ba8:;
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x7005317bb0ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317bd8;
L_7005317bb4:;
    c->x[8] = (uint32_t)(0u | 0u);
    c->x[22] = (uint64_t)(c->x[21] + 0x1e8ull);
L_7005317bbc:;
    { uint64_t ea = c->x[22] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
L_7005317bc0:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
L_7005317bd4:;
    c->x[21] = (uint32_t)(0xffffffffull);
L_7005317bd8:;
    c->x[8] = (uint32_t)(0x200ull);
    { uint64_t ea = c->x[20] + 0x2bcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x3f800000ull);
    { uint64_t ea = c->sp + 0x8ull; ST16(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(c->x[20] + 0x2b4ull);
    c->x[0] = (uint64_t)(c->x[19] + 0x20ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    { uint64_t ea = c->sp + 12; ST32(ea, (uint32_t)c->x[10]); ST32(ea + 4, (uint32_t)c->x[21]); }
    { uint64_t ea = c->sp + 0x20ull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 0x24ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x1cull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 20; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005317c10ull; f_700531c3a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005317bbc;
L_7005317c18:;
    c->x[21] = (uint32_t)(0xffffffffull);
    goto L_7005317ba8;
}

void f_7005317c20(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CC(c)) goto L_7005317c4c;
    if (COND_EQ(c)) goto L_7005317cb8;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005317c4c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317c54ull; f_7005318714(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317c5cull; f_7005318a9c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005317ca8;
    { uint64_t ea = c->x[19] + 0x1f0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005317ca0;
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_7005317ca0;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005317c80ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005317ca0;
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    c->v[1] = 0x3f000000ull;
    { uint64_t ea = c->x[8] + 0xa70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x10ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LS(c)) goto L_7005317cc8;
L_7005317ca0:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005317ca8ull; f_7005318b88(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005317ca8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_7005316eb0(c); return;
L_7005317cb8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    f_7005318c70(c); return;
L_7005317cc8:;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x1f0ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_7005317ca8;
}

void f_7005317f2c(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[28]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x200ull);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->v[8] = VS32(1);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->v[9] = VS32(0);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005317f68ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005317f98;
    { uint64_t ea = c->x[19] + 0x18cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_EQ(c)) goto L_7005317f98;
L_7005317f78:;
    c->sp = (uint64_t)(c->sp + 0x200ull);
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; c->sp = ea + 96; }
    c->pc = 0; return;
L_7005317f98:;
    { uint64_t ea = c->x[19] + 0x1f1ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005317fe0;
    { uint64_t ea = c->x[19] + 0x1efull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_70053180ac;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005317fc0ull; f_700531c448(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317fd0;
    c->x[1] = (uint32_t)(0x10ull);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005317fd0ull; f_700531c570(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005317fd0:;
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_7005317f78;
L_7005317fe0:;
    c->v[0] = VS32(9);
    c->v[1] = VS32(8);
    c->x[8] = (uint32_t)((uint32_t)c->x[21] & 0x1ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x34ull);
    c->x[2] = (uint64_t)(c->x[29] - 0x38ull);
    c->x[3] = (uint64_t)(c->x[29] - 0x3cull);
    c->x[4] = (uint64_t)(c->x[29] - 0x40ull);
    c->x[5] = (uint64_t)(c->x[29] - 0x44ull);
    { uint64_t ea = c->x[29] - 52; ST8(ea, 0u); }
    c->x[6] = (uint64_t)(c->x[29] - 0x48ull);
    c->x[7] = (uint64_t)(c->x[29] - 0x58ull);
    { uint64_t ea = c->x[29] - 56; ST8(ea, 0u); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[29] - 60; ST8(ea, 0u); }
    { uint64_t ea = c->x[29] - 64; ST8(ea, 0u); }
    { uint64_t ea = c->x[29] - 68; ST8(ea, 0u); }
    { uint64_t ea = c->x[29] - 72; ST8(ea, 0u); }
    { uint64_t ea = c->x[29] - 80; ST32(ea, 0u); }
    { uint64_t ea = c->x[29] - 88; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->sp + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005318038ull; f_7005319874(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005318048;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(c->x[29] - 0x58ull);
    f_70053137f8(c); return;
L_7005318048:;
    { uint64_t ea = c->x[29] - 68; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70053183d4;
L_7005318050:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005318058ull; f_700531c440(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317f78;
    c->x[8] = (uint64_t)(LD64(0x700531ce20ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xbd4ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[29] - 68; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->x[29] - 72; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (COND_NE(c)) (void)subs32(c, (uint32_t)c->x[8], 0x0ull); else c->nzcv = 0x40000000ull;
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[29] - 136; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005318094ull; f_700531c498(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 31) & 1) != 0) goto L_7005317f78;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[2] = (uint64_t)(c->x[29] - 0x88ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053180a8ull; f_700531c478(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005317f78;
L_70053180ac:;
    if (((c->x[8] >> 1) & 1) != 0) goto L_70053180f0;
L_70053180b0:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053180bcull; f_700531c6a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005318108;
    c->x[1] = (uint64_t)(c->x[19] + 0x88ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[3] = (uint32_t)(0u | 0u);
    c->sp = (uint64_t)(c->sp + 0x200ull);
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; c->sp = ea + 96; }
    goto L_7005318fa4;
L_70053180f0:;
    c->v[0] = VS32(9);
    c->v[1] = VS32(8);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005318100ull; f_700531c6b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005317f78;
    goto L_70053180b0;
L_7005318108:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->sp = (uint64_t)(c->sp + 0x200ull);
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; c->sp = ea + 96; }
    f_70053184b4(c); return;
L_70053183d4:;
    c->v[0] = VS32(9);
    c->v[1] = VS32(8);
    c->x[8] = (uint64_t)(c->x[19] + 0x1a4ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[19] + 0x1acull; ST32(ea, 0u); }
    c->x[30] = 0x70053183f0ull; f_7005317cd4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005318050;
L_7005318fa4:;
    c->sp = (uint64_t)(c->sp - 0x1d0ull);
    { uint64_t ea = c->sp + 352; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 368; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 384; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 400; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 416; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 432; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 448; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x170ull);
    { uint64_t ea = c->x[0] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005318fe4ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005319184;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[24] = (uint64_t)(c->x[29] - 0x88ull);
    c->x[30] = 0x7005318ff4ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_700531904c;
    c->x[8] = (uint64_t)(c->x[29] - 0x60ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x7005319004ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->x[29] - 0x60ull);
    c->x[30] = 0x700531900cull; f_700531c740(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005319154;
    c->x[0] = (uint64_t)(c->x[29] - 0x60ull);
    c->x[30] = 0x7005319018ull; f_700531c738(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005319154;
    { uint64_t ea = c->x[24] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005319044;
    { uint64_t ea = c->x[8] + 0x228ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005319044;
    { uint64_t ea = c->x[8] + 0x1c8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xb0ull; ST64(ea, c->x[8]); }
    if (c->x[8] == 0) goto L_7005319044;
    c->x[0] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x7005319040ull; f_700531c5a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) != 0) goto L_7005319154;
L_7005319044:;
    c->x[0] = (uint64_t)(c->x[29] - 0x60ull);
    c->x[30] = 0x700531904cull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531904c:;
    c->x[25] = (uint64_t)(c->x[20] & 0xffffffffull);
    (void)(subs64(c, c->x[25], 0x5ull));
    if (COND_NE(c)) goto L_70053190e0;
L_7005319058:;
    c->x[1] = (uint64_t)(LD64(0x700531cef0ull));
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[23] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[29] - 0x60ull);
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x30ull);
    c->x[30] = 0x7005319070ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[29] - 0x60ull);
    c->x[30] = 0x700531907cull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x120ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    { uint64_t ea = c->x[24] + 0x18ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0x128ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 104; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[29] - 112; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[29] - 68; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[29] - 84; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[29] - 104; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[29] - 52; ST32(ea, VS32(0)); }
    c->x[30] = 0x70053190a8ull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_70053191b0;
    c->x[30] = 0x70053190b8ull; f_700531c778(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_70053191f0;
L_70053190bc:;
    { uint64_t ea = c->sp + 352; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 448; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 432; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 416; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 400; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 384; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 368; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x1d0ull);
    c->pc = 0; return;
L_70053190e0:;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053190e8ull; f_700531c618(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053190f4;
    { uint64_t ea = c->x[0] + 0xd9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 4) & 1) != 0) goto L_7005319058;
L_70053190f4:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053190fcull; f_700531c680(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x7005319108ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700531911cull; f_700531c4a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_70053193e8;
L_7005319120:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005319128ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053190bc;
    c->x[20] = (uint64_t)(LD64(0x700531cee8ull));
    c->x[2] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[20] + 0xab0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005319144ull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005319150ull; f_700531c348(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053190bc;
L_7005319154:;
    if (((c->x[21] >> 0) & 1) == 0) goto L_7005319230;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005319160ull; f_700531c680(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005319168ull; f_700531c688(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x7005319174ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_700531923c;
L_7005319184:;
    { uint64_t ea = c->sp + 352; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 448; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 432; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 416; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 400; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 384; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 368; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x1d0ull);
    f_70053184b4(c); return;
L_70053191b0:;
    c->x[30] = 0x70053191b4ull; f_700531c4a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005319208;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(c->x[29] - 0x80ull);
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053191c8ull; f_700531c310(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] != 0) goto L_7005319248;
L_70053191d0:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x70053191dcull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
L_70053191e8:;
    c->x[0] = (uint64_t)(c->x[29] - 0x80ull);
    goto L_7005319240;
L_70053191f0:;
    c->x[1] = (uint64_t)(c->x[29] - 0x70ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053191fcull; f_700531c3b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005319208ull; f_700531c458(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005319208:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005319210ull; f_700531c6b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700531921cull; f_700531c6c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[23] >> 0) & 1) != 0) goto L_7005319308;
L_7005319220:;
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_70053190bc;
L_7005319230:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700531923cull; f_70053184b4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531923c:;
    c->x[0] = (uint64_t)(c->x[29] - 0x60ull);
L_7005319240:;
    c->x[30] = 0x7005319244ull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053190bc;
L_7005319248:;
    c->x[30] = 0x700531924cull; f_700531c488(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x0ull; ST64(ea, c->x[0]); }
    c->x[1] = (uint64_t)(LD64(0x700531cef0ull));
    c->x[0] = (uint64_t)(c->sp + 0xb0ull);
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x30ull);
    c->x[30] = 0x7005319264ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[26] = (uint64_t)(LD64(0x700531ce18ull));
    c->x[27] = (uint64_t)(LD64(0x700531ce18ull));
    c->x[28] = (uint64_t)(LD64(0x700531ce10ull));
    if (((c->x[23] >> 0) & 1) != 0) goto L_70053192b4;
    (void)(subs64(c, c->x[25], 0x5ull));
    if (COND_NE(c)) goto L_7005319318;
    c->x[0] = (uint64_t)(c->x[20] + 0x70ull);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x700531928cull; f_700531c320(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[24] + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->x[20] + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
    if (c->x[0] != 0) goto L_70053194a0;
    { uint64_t ea = c->x[28] + 0xfa0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[27] + 0x690ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[26] + 0x170ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->sp + 176; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 0xd0ull; ST128(ea, c->v[2]); }
    goto L_70053194a8;
L_70053192b4:;
    { uint64_t ea = c->x[26] + 0x170ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[27] + 0x690ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x30ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[28] + 0xfa0ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 0x40ull; ST128(ea, c->v[0]); }
L_70053192cc:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053192d4ull; f_700531c778(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005319494;
    { uint64_t ea = c->x[24] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    if (c->x[8] != 0) goto L_7005319404;
    c->v[0] = 0x0ull;
    c->v[1] = 0x0ull;
    { uint64_t ea = c->x[24] + 0x58ull; ST64(ea, 0ull); }
    c->v[2] = 0x0ull;
    c->v[3] = 0x0ull;
    { uint64_t ea = c->x[29] - 40; ST32(ea, 0u); }
    c->v[4] = 0x0ull;
    c->v[5] = 0x0ull;
    goto L_7005319438;
L_7005319308:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x7005319314ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005319220;
L_7005319318:;
    c->x[0] = (uint64_t)(c->x[29] - 0x88ull);
    c->x[1] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x7005319324ull; f_700531c768(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005319574;
    c->x[0] = (uint64_t)(c->x[20] + 0x70ull);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005319338ull; f_700531c320(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0xffffffffull);
    c->x[0] = (uint64_t)(c->x[29] - 0x80ull);
    { uint64_t ea = c->x[20] + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x700531934cull; f_700531c410(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(LD64(0x700531cef0ull));
    c->x[0] = (uint64_t)(c->sp + 0x70ull);
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0x30ull);
    c->x[30] = 0x7005319360ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x70ull);
    c->x[1] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x700531936cull; f_700531c380(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 112; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->v[5] = 0x0ull;
    VW(vu64, 1, 6, VREG(vu64, 5) | VREG(vu64, 5));
    { uint64_t ea = c->sp + 0x90ull; c->v[2] = LD128(ea); }
    { uint64_t ea = c->x[24] + 40; c->v[3] = LD128(ea); }
    VW(vu64, 1, 16, VREG(vu64, 5) | VREG(vu64, 5));
    { uint64_t ea = c->x[24] + 56; c->v[4] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 1, 17, VREG(vf32, 3), vsplat_s(VREG(vf32, 1), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 17, VREG(vf32, 17), VREG(vf32, 4), vsplat_s(VREG(vf32, 1), 1, 1));
    SV_FOP_S(FOP_MUL, 1, 7, VREG(vf32, 3), vsplat_s(VREG(vf32, 0), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 7, VREG(vf32, 7), VREG(vf32, 4), vsplat_s(VREG(vf32, 0), 1, 1));
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 3), vsplat_s(VREG(vf32, 2), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 3, VREG(vf32, 3), VREG(vf32, 4), vsplat_s(VREG(vf32, 2), 1, 1));
    VW(vu32, 1, 4, SHUF(VREG(vu32, 0), VREG(vu32, 0), 3, 3, 3, 3));
    ((sa32 *)&c->v[6])[3] = ((sa32 *)&c->v[4])[1];
    VW(vu32, 1, 4, SHUF(VREG(vu32, 1), VREG(vu32, 1), 3, 3, 3, 3));
    ((sa32 *)&c->v[16])[3] = ((sa32 *)&c->v[4])[1];
    VW(vu32, 1, 4, SHUF(VREG(vu32, 2), VREG(vu32, 2), 3, 3, 3, 3));
    ((sa32 *)&c->v[5])[3] = ((sa32 *)&c->v[4])[1];
    { uint64_t ea = c->x[24] + 72; c->v[4] = LD128(ea); }
    SV_FOP_S(FOP_MADD, 1, 7, VREG(vf32, 7), VREG(vf32, 4), vsplat_s(VREG(vf32, 0), 2, 1));
    SV_FOP_S(FOP_MADD, 1, 17, VREG(vf32, 17), VREG(vf32, 4), vsplat_s(VREG(vf32, 1), 2, 1));
    SV_FOP_S(FOP_MADD, 1, 3, VREG(vf32, 3), VREG(vf32, 4), vsplat_s(VREG(vf32, 2), 2, 1));
    SV_FOP_S(FOP_ADD, 1, 0, VREG(vf32, 6), VREG(vf32, 7), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 1, VREG(vf32, 16), VREG(vf32, 17), (vf32){});
    { uint64_t ea = c->sp + 48; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[20] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    SV_FOP_S(FOP_ADD, 1, 0, VREG(vf32, 5), VREG(vf32, 3), (vf32){});
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[20] + 0x60ull; ST128(ea, c->v[0]); }
    goto L_70053192cc;
L_70053193e8:;
    c->x[1] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x9dbull);
    c->x[2] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[2] = (uint64_t)(c->x[2] + 0xdc2ull);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005319400ull; f_700531c610(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005319120;
L_7005319404:;
    { uint64_t ea = c->x[8] + 0x320ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x70ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[8] + 0x328ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 112; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[1] = b; }
    { uint64_t ea = c->sp + 0x78ull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[8] + 0x32cull);
    { uint64_t ea = c->x[8] + 0x334ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x78ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[29] - 40; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[24] + 0x58ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[29] - 44; u128 a = LD32(ea), b = LD32(ea + 4); c->v[5] = a; c->v[4] = b; }
    { uint64_t ea = c->x[29] - 48; c->v[3] = LD32(ea); }
L_7005319438:;
    { uint64_t ea = c->sp + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[18] = a; c->v[17] = b; }
    c->v[6] = VS32(4) ^ 0x80000000u;
    c->v[7] = VS32(3) ^ 0x80000000u;
    c->v[16] = VS32(5) ^ 0x80000000u;
    c->x[1] = (uint64_t)(c->sp + 0x70ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0u | 0u);
    FP_SETS(6, op_s(c, FOP_MUL, VSF32(6), VREG(vf32, 17)[3], 0));
    FP_SETS(6, op_s(c, FOP_MADD, VSF32(6), VSF32(5), VREG(vf32, 18)[3]));
    FP_SETS(5, op_s(c, FOP_MUL, VSF32(7), VREG(vf32, 18)[3], 0));
    { uint64_t ea = c->sp + 0x40ull; c->v[7] = LD128(ea); }
    FP_SETS(5, op_s(c, FOP_MADD, VSF32(5), VSF32(4), VREG(vf32, 7)[3]));
    FP_SETS(4, op_s(c, FOP_MUL, VSF32(16), VREG(vf32, 7)[3], 0));
    FP_SETS(4, op_s(c, FOP_MADD, VSF32(4), VSF32(3), VREG(vf32, 17)[3]));
    fp_op_s(c, FOP_ADD, 2, 2, 6);
    fp_op_s(c, FOP_ADD, 1, 1, 5);
    fp_op_s(c, FOP_ADD, 0, 0, 4);
    { uint64_t ea = c->sp + 112; ST32(ea, VS32(2)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0x78ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005319488ull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005319494ull; f_700531c348(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_7005319494:;
    c->x[0] = (uint64_t)(c->x[29] - 0x80ull);
    c->x[30] = 0x700531949cull; f_700531c4b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005319208;
L_70053194a0:;
    c->x[1] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x70053194a8ull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053194a8:;
    c->x[0] = (uint64_t)(c->x[29] - 0x88ull);
    c->x[1] = (uint64_t)(c->sp + 0xa0ull);
    { uint64_t ea = c->sp + 0xa8ull; ST32(ea, 0u); }
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0xa0ull; ST64(ea, 0ull); }
    c->x[30] = 0x70053194c0ull; f_700531c3a0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 92; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x70ull);
    { uint64_t ea = c->x[29] - 76; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 60; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 0xb4ull; c->v[16] = LD32(ea); }
    { uint64_t ea = c->sp + 0xc4ull; c->v[7] = LD32(ea); }
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[16]); }
    { uint64_t ea = c->sp + 0xd4ull; c->v[6] = LD32(ea); }
    { uint64_t ea = c->sp + 160; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    { uint64_t ea = c->sp + 0xbcull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->sp + 0xccull; ST32(ea, VS32(4)); }
    fp_op_s(c, FOP_NMUL, 3, 2, 7);
    fp_fma_s(c, 0, 0, 3, 1, 6, 3);
    fp_op_s(c, FOP_NMUL, 4, 0, 6);
    fp_fma_s(c, 0, 0, 2, 2, 16, 4);
    fp_op_s(c, FOP_NMUL, 4, 1, 16);
    fp_fma_s(c, 0, 0, 0, 0, 7, 4);
    { uint64_t ea = c->sp + 112; ST32(ea, VS32(3)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0xa8ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->sp + 0xdcull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->sp + 0x78ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 48; ST128(ea, c->v[7]); ST128(ea + 16, c->v[6]); }
    c->x[30] = 0x700531951cull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x70ull; c->v[0] = LD32(ea); }
    c->v[1] = 0xb4000000b4000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LT(c)) goto L_7005319584;
    c->v[1] = 0x3400000034000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_7005319584;
    { uint64_t ea = c->sp + 116; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
    c->v[3] = 0xb4000000b4000000ull;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(3));
    if (COND_LT(c)) goto L_7005319588;
    c->v[3] = 0x3400000034000000ull;
    c->nzcv = cmp_s(c, VSF32(1), VSF32(3));
    if (COND_HI(c)) goto L_7005319588;
    c->v[3] = 0xb4000000b4000000ull;
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_LT(c)) goto L_7005319588;
    c->v[3] = 0x3400000034000000ull;
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    if (COND_HI(c)) goto L_7005319588;
    if (((c->x[21] >> 0) & 1) != 0) goto L_70053191d0;
    goto L_70053197cc;
L_7005319574:;
    if (((c->x[21] >> 0) & 1) == 0) goto L_70053197cc;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005319580ull; f_700531c680(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053191d0;
L_7005319584:;
    { uint64_t ea = c->sp + 116; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[2] = b; }
L_7005319588:;
    { uint64_t ea = c->sp + 48; u128 a = LD128(ea), b = LD128(ea + 16); c->v[5] = a; c->v[4] = b; }
    c->x[22] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[0] = (uint64_t)(c->x[29] - 0x30ull);
    c->x[21] = (uint32_t)(0xdull);
    c->x[21] = (uint32_t)((c->x[21] & 0xffffffff0000ffffull) | 0x75e90000ull);
    { uint64_t ea = c->sp + 0x20ull; c->v[6] = LD128(ea); }
    c->x[25] = (uint64_t)(c->x[22] + 0x4ull);
    c->x[26] = (uint64_t)(c->x[22] + 0x8ull);
    fp_op_s(c, FOP_NMUL, 3, 4, 1);
    fp_fma_s(c, 0, 0, 3, 5, 2, 3);
    fp_op_s(c, FOP_NMUL, 2, 6, 2);
    fp_fma_s(c, 0, 0, 2, 4, 0, 2);
    fp_op_s(c, FOP_NMUL, 0, 5, 0);
    fp_fma_s(c, 0, 0, 0, 6, 1, 0);
    { uint64_t ea = c->x[29] - 48; ST32(ea, VS32(3)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->x[29] - 40; ST32(ea, VS32(0)); }
    c->x[30] = 0x70053195ccull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x70ull; c->v[1] = LD64(ea); }
    c->x[1] = (uint64_t)(LD64(0x700531cef0ull));
    c->x[0] = (uint64_t)(c->sp + 0x70ull);
    { uint64_t ea = c->sp + 116; c->v[0] = LD64(ea); }
    c->x[2] = (uint32_t)(0x30ull);
    VW(vu64, 1, 2, VREG(vu64, 0) | VREG(vu64, 0));
    { uint64_t ea = c->x[22]; sl_lds(c, 2, 1, 1, 1, ea); }
    { uint64_t ea = c->sp + 0x20ull; c->v[3] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2b4ull);
    VW(vu32, 1, 0, SHUF(VREG(vu32, 0), VREG(vu32, 0), 1, 1, 1, 1));
    { uint64_t ea = c->x[25]; sl_lds(c, 2, 1, 1, 2, ea); }
    { uint64_t ea = c->x[26]; sl_lds(c, 2, 1, 1, 0, ea); }
    ((sa32 *)&c->v[1])[2] = ((sa32 *)&c->v[3])[0];
    { uint64_t ea = c->sp + 0x30ull; c->v[3] = LD128(ea); }
    ((sa32 *)&c->v[2])[2] = ((sa32 *)&c->v[3])[0];
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 3, 1, ea); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2b8ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x2bcull);
    { uint64_t ea = c->x[9]; sl_lds(c, 2, 1, 3, 2, ea); }
    { uint64_t ea = c->sp + 16; ST128(ea, c->v[2]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->sp + 0x40ull; c->v[1] = LD128(ea); }
    ((sa32 *)&c->v[0])[2] = ((sa32 *)&c->v[1])[0];
    { uint64_t ea = c->x[8]; sl_lds(c, 2, 1, 3, 0, ea); }
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x7005319638ull; f_700531c7f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x70ull);
    c->x[1] = (uint64_t)(c->sp + 0xb0ull);
    c->x[30] = 0x7005319644ull; f_700531c380(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 112; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->v[4] = 0x0ull;
    c->x[0] = (uint64_t)(c->x[29] - 0x88ull);
    c->x[1] = (uint64_t)(c->sp + 0x60ull);
    { uint64_t ea = c->sp + 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[7] = a; c->v[6] = b; }
    VW(vu64, 1, 5, VREG(vu64, 4) | VREG(vu64, 4));
    c->x[2] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x68ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x0ull; c->v[16] = LD128(ea); }
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, 0ull); }
    VW(vu32, 1, 3, SHUF(VREG(vu32, 0), VREG(vu32, 0), 3, 3, 3, 3));
    { uint64_t ea = c->sp + 0x90ull; c->v[2] = LD128(ea); }
    ((sa32 *)&c->v[5])[3] = ((sa32 *)&c->v[3])[1];
    SV_FOP_S(FOP_MUL, 1, 3, VREG(vf32, 6), vsplat_s(VREG(vf32, 0), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 3, VREG(vf32, 3), VREG(vf32, 7), vsplat_s(VREG(vf32, 0), 1, 1));
    SV_FOP_S(FOP_MADD, 1, 3, VREG(vf32, 3), VREG(vf32, 16), vsplat_s(VREG(vf32, 0), 2, 1));
    SV_FOP_S(FOP_MUL, 1, 0, VREG(vf32, 6), vsplat_s(VREG(vf32, 1), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 0, VREG(vf32, 0), VREG(vf32, 7), vsplat_s(VREG(vf32, 1), 1, 1));
    SV_FOP_S(FOP_MADD, 1, 0, VREG(vf32, 0), VREG(vf32, 16), vsplat_s(VREG(vf32, 1), 2, 1));
    VW(vu32, 1, 1, SHUF(VREG(vu32, 2), VREG(vu32, 2), 3, 3, 3, 3));
    SV_FOP_S(FOP_ADD, 1, 3, VREG(vf32, 5), VREG(vf32, 3), (vf32){});
    SV_FOP_S(FOP_ADD, 1, 0, VREG(vf32, 0), VREG(vf32, 4), (vf32){});
    ((sa32 *)&c->v[4])[3] = ((sa32 *)&c->v[1])[1];
    c->v[8] = ((sa32 *)&c->v[3])[3];
    { uint64_t ea = c->sp + 48; ST128(ea, c->v[0]); ST128(ea + 16, c->v[3]); }
    SV_FOP_S(FOP_MUL, 1, 0, VREG(vf32, 6), vsplat_s(VREG(vf32, 2), 0, 1), (vf32){});
    SV_FOP_S(FOP_MADD, 1, 0, VREG(vf32, 0), VREG(vf32, 7), vsplat_s(VREG(vf32, 2), 1, 1));
    SV_FOP_S(FOP_MADD, 1, 0, VREG(vf32, 0), VREG(vf32, 16), vsplat_s(VREG(vf32, 2), 2, 1));
    SV_FOP_S(FOP_ADD, 1, 0, VREG(vf32, 4), VREG(vf32, 0), (vf32){});
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    c->v[9] = ((sa32 *)&c->v[0])[3];
    c->x[30] = 0x70053196c4ull; f_700531c770(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x60ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x54ull);
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x68ull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 8, 0);
    { uint64_t ea = c->sp + 0x54ull; ST32(ea, VS32(0)); }
    fp_op_s(c, FOP_SUB, 0, 9, 1);
    { uint64_t ea = c->sp + 0x5cull; ST32(ea, VS32(0)); }
    c->x[30] = 0x70053196e8ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(LD64(0x700531cf40ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xea8ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70053196f8ull; f_700531c4c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint32_t)(0x3f800000ull);
    c->v[1] = 0xbf800000ull;
    { uint64_t ea = c->sp + 0x68ull; c->v[4] = LD32(ea); }
    c->x[8] = (uint32_t)(((uint32_t)c->x[8] & 0xff800000ull) | ((((uint32_t)c->x[8] & 0x0ull) | (ROR32((uint32_t)c->x[0], 9) & 0xffffffffull)) & 0x7fffffull));
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[29] - 0x80ull);
    c->v[0] = (uint32_t)c->x[8];
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x6d0ull);
    fp_op_s(c, FOP_ADD, 0, 0, 1);
    c->v[1] = 0x3e800000ull;
    fp_op_s(c, FOP_MUL, 3, 0, 1);
    c->v[1] = 0x0ull;
    fp_op_s(c, FOP_ADD, 0, 3, 1);
    { uint64_t ea = c->sp + 0x54ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->sp + 92; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_MUL, 1, 1, 0);
    fp_op_s(c, FOP_MUL, 0, 2, 0);
    fp_op_s(c, FOP_ADD, 1, 3, 1);
    { uint64_t ea = c->sp + 0x40ull; c->v[3] = LD128(ea); }
    fp_op_s(c, FOP_ADD, 0, 4, 0);
    ((sa32 *)&c->v[3])[3] = ((sa32 *)&c->v[1])[0];
    { uint64_t ea = c->sp + 0x30ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8]; sl_lds(c, 2, 1, 3, 1, ea); }
    { uint64_t ea = c->sp + 0x40ull; ST128(ea, c->v[3]); }
    { uint64_t ea = c->sp + 0x30ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->sp + 0x20ull; c->v[1] = LD128(ea); }
    ((sa32 *)&c->v[1])[3] = ((sa32 *)&c->v[0])[0];
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[1]); }
    c->x[30] = 0x7005319770ull; f_700531c410(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x40ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->sp + 0x30ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[20] + 64; ST128(ea, c->v[1]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x20ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[20] + 0x60ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 0xb0ull; ST32(ea, (uint32_t)c->x[21]); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x378ull);
    { uint64_t ea = c->x[24] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xa8ull; ST64(ea, c->x[0]); }
    if (c->x[8] != 0) goto L_70053197a4;
    c->x[8] = (uint32_t)(0xffffffffull);
    goto L_70053197a8;
L_70053197a4:;
    { uint64_t ea = c->x[8] + 0x380ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
L_70053197a8:;
    c->x[3] = (uint64_t)(c->x[19] + 0xb8ull);
    c->x[2] = (uint64_t)(c->x[29] - 0x30ull);
    { uint64_t ea = c->x[29] - 40; ST8(ea, 0u); }
    { uint64_t ea = c->x[29] - 48; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[21]); }
    c->x[30] = 0x70053197bcull; f_700531c3b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    (void)(adds32(c, (uint32_t)c->x[0], 0x1ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[19] + 0xb4ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_70053192cc;
L_70053197cc:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[30] = 0x70053197d8ull; f_70053184b4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053191e8;
}

void f_700531c760(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd70ull));
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

void f_7005402000(Cpu *c) {
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
    if (c->x[1] == 0) goto L_70054020b0;
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70054020b0;
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_70054020b0:;
    c->x[0] = (uint32_t)(0xcull);
    c->x[30] = 0x70054020b8ull; f_7005409000(c);
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
    { uint64_t ea = c->x[0] + 0x3c50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->pc = 0x7001d43668ull; return;
}

void f_7005403800(Cpu *c) {
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
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x348ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x3ull);
    c->x[30] = 0x70054038b4ull; f_7005409000(c);
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
    c->x[16] = (uint64_t)(c->x[16] + 0x158ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005403950ull; rt_dispatch(c); c->pc = 0;
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
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x4ull);
    c->x[30] = 0x70054039f0ull; f_7005409000(c);
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
    c->x[30] = (uint64_t)(c->x[30] + 0x718ull);
    c->pc = 0x70009a3718ull; return;
}

void f_7005404800(Cpu *c) {
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
    c->x[0] = (uint32_t)(0x7ull);
    c->x[30] = 0x70054048b4ull; f_7005409000(c);
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
    c->pc = c->x[16]; c->x[30] = 0x7005404950ull; rt_dispatch(c); c->pc = 0;
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
    if (c->x[3] == 0) goto L_70054049f8;
    { uint64_t ea = c->sp + 0x348ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70054049f8;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
L_70054049f8:;
    c->x[0] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005404a00ull; f_7005409000(c);
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
    c->x[30] = (uint64_t)(c->x[30] + 0xb04ull);
    c->pc = 0x70009a6b04ull; return;
}

void f_7005502800(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x5ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055028b8ull; f_7005505000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_7005502968;
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
    c->pc = 0x7002176bd8ull; return;
L_7005502968:;
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

void f_7005502e00(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005502eb8ull; f_7005505000(c);
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
    { uint64_t ea = c->sp + 0x70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x700209a2ccull; return;
}

void f_7005503400(Cpu *c) {
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
    c->x[1] = (uint32_t)(0xbull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055034b8ull; f_7005505000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_7005503568;
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
    { uint64_t ea = c->sp - 64; ST64(ea, VS64(8)); c->sp = ea; }
    c->pc = 0x700217b600ull; return;
L_7005503568:;
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

void f_7005503a00(Cpu *c) {
    { uint64_t ea = c->x[19] + 0x428ull; ST64(ea, c->x[0]); }
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
    c->x[1] = (uint32_t)(0xeull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x7005503abcull; f_7005505000(c);
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
    c->pc = 0x7000aa5ac4ull; return;
}

void f_7005504000(Cpu *c) {
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
    c->x[1] = (uint32_t)(0x11ull);
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint64_t)(c->sp + 0x320ull);
    c->x[30] = 0x70055040b8ull; f_7005505000(c);
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
    if ((uint32_t)c->x[8] != 0) goto L_7005504168;
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
    c->sp = (uint64_t)(c->sp - 0x80ull);
    c->pc = 0x70028f6e18ull; return;
L_7005504168:;
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

void f_700550593c(Cpu *c) {
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_7005505980;
    (void)(subs32(c, (uint32_t)c->x[3], 0x100ull));
    if (COND_HI(c)) goto L_7005505980;
    c->x[8] = (uint64_t)(adds64(c, c->x[1], (uint64_t)((uint64_t)(uint32_t)c->x[3])));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_CS(c)) goto L_7005505980;
    c->x[8] = (uint64_t)(ROR64(c->x[8], 39) & 0x1ffffffull);
    if (c->x[8] != 0) goto L_7005505980;
    if ((uint32_t)c->x[3] == 0) goto L_700550597c;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[3]);
L_700550596c:;
    { uint64_t ea = c->x[1]; uint64_t v = LD8(ea); c->x[1] = c->x[1] + 1; c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    { uint64_t ea = c->x[2]; ST8(ea, (uint32_t)c->x[9]); c->x[2] = c->x[2] + 1; }
    if (COND_NE(c)) goto L_700550596c;
L_700550597c:;
    c->x[0] = (uint32_t)(0x1ull);
L_7005505980:;
    c->pc = 0; return;
}

void f_7005505984(Cpu *c) {
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[1] == 0) goto L_70055059a0;
    (void)(subs32(c, (uint32_t)c->x[3], 0x1ull));
    if (COND_NE(c)) goto L_70055059a0;
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[1] + 0x0ull; ST8(ea, (uint32_t)c->x[8]); }
L_70055059a0:;
    c->pc = 0; return;
}

void f_70055059a4(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005505a7c;
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x170ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005505a84;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x70055059d4ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505a84;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055059e8ull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505a88;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055059f4ull; f_7005506b70(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505a88;
    { uint64_t ea = c->x[19] + 0x2e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005505a84;
    { uint64_t ea = c->x[19] + 0x508ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005505a0cull; f_7005506bec(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505a88;
    { uint64_t ea = c->x[19] + 0xf88ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005505a84;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_7005505a84;
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005505a84;
    { uint64_t ea = c->x[19] + 0x178ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0xf78ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->x[19] + 0xf80ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0xf98ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint32_t)(0x1200ull);
    c->x[9] = (uint64_t)(c->x[19] + c->x[9]);
    { uint64_t ea = c->x[19] + 0x510ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[19] + 0x520ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0x2e8ull; ST32(ea, (uint32_t)c->x[0]); }
    stl64(c->x[9], 0ull);
    { uint64_t ea = c->x[19] + 0x1208ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0x4f4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    { uint64_t ea = c->x[19] + 0x1218ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[19] + 0xfb8ull);
    { uint64_t ea = c->x[19] + 0x1210ull; ST64(ea, 0ull); }
    stl64(c->x[9], c->x[20]);
    stl64(c->x[8], c->x[20]);
    goto L_7005505a88;
L_7005505a7c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_7005505a84:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005505a88:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005505ad4(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x160ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005505b4c;
    { uint64_t ea = c->x[0] + 0x170ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005505b4c;
    { uint64_t ea = c->x[20] + 0x510ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005505b4c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005505b4c;
    c->x[30] = 0x7005505b10ull; f_7005507d50(c);
    { uint64_t ea = c->x[20] + 0x178ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005505b4c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005505b24ull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505b4c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005505b30ull; f_7005506b70(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505b4c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint32_t)(0x10000ull);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    f_7005506474(c); return;
L_7005505b4c:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005505b5c(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x494ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_CC(c)) goto L_7005505ba8;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(c->x[0] + 0x2f0ull);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[3] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005505b8cull; f_700550a48c(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505ba8;
    { uint64_t ea = c->x[20] + 0x160ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    f_7005505ad4(c); return;
L_7005505ba8:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005505bb8(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] - 0x11ull);
    (void)(adds64(c, c->x[8], 0x10ull));
    if (COND_CC(c)) goto L_7005505c70;
    { uint64_t ea = c->x[1] + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x4ull));
    if (COND_HI(c)) goto L_7005505c70;
    { uint64_t ea = c->x[1] + 0xc0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x8ull));
    if (COND_HI(c)) goto L_7005505c70;
    { uint64_t ea = c->x[1] + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[2] + 0x30ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005505c70;
    { uint64_t ea = c->x[1] + 0xb0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_CC(c)) goto L_7005505c70;
    c->x[9] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[9] != 0) goto L_7005505c70;
    { uint64_t ea = c->x[8] - 4; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[9] & 0xffffffdfull));
    if (COND_NE(c)) goto L_7005505c70;
    c->x[8] = (uint64_t)(c->x[0] + 0x4d8ull);
    c->x[10] = (uint32_t)(0x1ull);
L_7005505c28:;
    c->x[11] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[11] != 0) goto L_7005505c6c;
    { uint32_t st = stx32(c, c->x[8], c->x[10]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_7005505c28;
    { uint64_t ea = c->x[1] + 0xb0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x20ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    if (((c->x[11] >> 0) & 1) != 0) goto L_7005505c74;
    { uint64_t ea = c->x[0] + 0x4f4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005505d68;
    c->x[11] = (uint64_t)(c->x[0] + 0x4dcull);
L_7005505c54:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[11]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[11], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005505c54;
    { uint64_t ea = c->x[0] + 0x4f0ull; ST32(ea, 0u); }
    goto L_7005505d58;
L_7005505c6c:;
    c->excl_addr = ~0ull;
L_7005505c70:;
    c->pc = 0; return;
L_7005505c74:;
    { uint64_t ea = c->x[0] + 0x4f0ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    if (((c->x[11] >> 0) & 1) == 0) goto L_7005505c88;
    { uint64_t ea = c->x[0] + 0x4f4ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[11], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005505d68;
L_7005505c88:;
    c->x[11] = (uint64_t)(c->x[0] + 0xfb8ull);
    c->x[11] = (uint64_t)(lda64(c->x[11]));
    { uint64_t ea = c->x[0] + 0xfc0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_7005505cac;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[0] + 0xfc0ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->x[0] + 0x11d0ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[0] + 0x11c8ull; ST64(ea, VS64(0)); }
L_7005505cac:;
    { uint64_t ea = c->x[0] + 0x4f0ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    if (((c->x[12] >> 0) & 1) == 0) goto L_7005505cd0;
    { uint64_t ea = c->x[0] + 0x4f4ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005505cd0;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4e0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[13])));
    if (COND_LS(c)) goto L_7005505d68;
L_7005505cd0:;
    if (c->x[11] == 0) goto L_7005505d24;
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4e8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_EQ(c)) goto L_7005505d24;
    { uint64_t ea = c->x[0] + 0x11c8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x11ccull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[12] - (uint32_t)c->x[13]);
    (void)(subs32(c, (uint32_t)c->x[13], 0x3full));
    if (COND_HI(c)) goto L_7005505d10;
    c->x[13] = (uint64_t)(c->x[12] & 0x3full);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    c->x[13] = (uint64_t)(c->x[0] + (c->x[13] << 3));
    { uint64_t ea = c->x[0] + 0x11c8ull; ST32(ea, (uint32_t)c->x[12]); }
    { uint64_t ea = c->x[13] + 0xfc8ull; ST64(ea, c->x[11]); }
    goto L_7005505d24;
L_7005505d10:;
    { uint64_t ea = c->x[0] + 0x11d4ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[0] + 0x11d0ull; ST32(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] + 0x1ull);
    { uint64_t ea = c->x[0] + 0x11d4ull; ST32(ea, (uint32_t)c->x[11]); }
L_7005505d24:;
    c->x[11] = (uint64_t)(c->x[0] + 0x4dcull);
L_7005505d28:;
    c->x[12] = (uint64_t)(ldx32(c, c->x[11]));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    { uint32_t st = stx32(c, c->x[11], c->x[12]); c->x[13] = (uint32_t)(st); }
    if ((uint32_t)c->x[13] != 0) goto L_7005505d28;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4e0ull; ST64(ea, c->x[12]); }
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4e8ull; ST64(ea, c->x[12]); }
    c->x[12] = (uint64_t)(c->x[0] + 0x4f4ull);
    { uint64_t ea = c->x[10] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x4f0ull; ST32(ea, (uint32_t)c->x[10]); }
    stl32(c->x[12], c->x[9]);
L_7005505d58:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[11]));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint32_t st = stx32(c, c->x[11], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005505d58;
L_7005505d68:;
    stl32(c->x[8], 0ull);
    c->pc = 0; return;
}

void f_7005505d70(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] - 0x11ull);
    (void)(adds64(c, c->x[8], 0x10ull));
    if (COND_CC(c)) goto L_7005506010;
    { uint64_t ea = c->x[1] + 0xb8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x4ull));
    if (COND_HI(c)) goto L_7005506010;
    { uint64_t ea = c->x[1] + 0xc0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], 0x8ull));
    if (COND_HI(c)) goto L_7005506010;
    { uint64_t ea = c->x[1] + 0xe8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[2] + 0x30ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005506010;
    { uint64_t ea = c->x[1] + 0x98ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[12] = (uint64_t)(c->x[11] + c->x[12]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_7005506010;
    c->x[12] = (uint64_t)(c->x[11] & 0x7ull);
    if (c->x[12] != 0) goto L_7005506010;
    { uint64_t ea = c->x[1] + 0xb0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[13] = (uint64_t)(c->x[12] + c->x[13]);
    (void)(subs64(c, c->x[13], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_7005506010;
    c->x[13] = (uint64_t)(c->x[12] & 0x7ull);
    if (c->x[13] != 0) goto L_7005506010;
    c->x[13] = (uint32_t)(0xe98ull);
    c->x[10] = (uint64_t)(c->x[11] + c->x[10] * c->x[13]);
    c->x[10] = (uint64_t)(c->x[10] + 0x58ull);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005506010;
    c->x[10] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0x280ull);
    c->x[10] = (uint64_t)(c->x[12] + c->x[10]);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_CC(c)) goto L_7005506010;
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->x[8] - 4; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[10] & 0xffffffdfull));
    if (COND_NE(c)) goto L_7005506008;
    c->x[8] = (uint64_t)(c->x[0] + 0x4f4ull);
    c->x[8] = (uint64_t)(lda32(c->x[8]));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005506008;
    c->x[8] = (uint32_t)(0x1200ull);
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
    c->x[8] = (uint64_t)(lda64(c->x[8]));
    { uint64_t ea = c->x[0] + 0x1208ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005506008;
    { uint64_t ea = c->x[0] + 0xf40ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[12])));
    if (COND_NE(c)) goto L_7005506008;
    { uint64_t ea = c->x[0] + 0xf58ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_NE(c)) goto L_7005506008;
    c->x[12] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[12] = (uint64_t)(c->x[8] + c->x[12]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_7005506008;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005506008;
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[13]);
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005506008;
    { uint64_t ea = c->x[8] + 0x16dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005506008;
    { uint64_t ea = c->x[8] + 0x16eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    if (COND_NE(c)) goto L_7005506008;
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[1]); }
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[11]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005505ec4ull; f_7005506014(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005505ee4;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[10] = (uint32_t)(0x1210ull);
    { uint64_t ea = c->x[9] + 0x1218ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[9] + 0x4e0ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[8] = (uint64_t)(lda64(c->x[8]));
    stl64(c->x[9], c->x[8]);
L_7005505ee4:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[8] = (uint32_t)(0x1210ull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8]);
    c->x[8] = (uint64_t)(lda64(c->x[8]));
    { uint64_t ea = c->x[9] + 0x1218ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[13] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[0] : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[10])));
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    if (COND_NE(c)) goto L_7005506008;
    if ((uint32_t)c->x[13] == 0) goto L_7005506008;
    c->x[13] = (uint32_t)(0x1200ull);
    c->x[13] = (uint64_t)(c->x[9] + c->x[13]);
    c->x[13] = (uint64_t)(lda64(c->x[13]));
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005506008;
    { uint64_t ea = c->x[9] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005506008;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005505fec;
    c->x[10] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)(0u | 0u);
    c->x[12] = (uint32_t)(0x1ull);
    c->x[13] = (uint32_t)(0x1ull);
L_7005505f4c:;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    { uint64_t ea = c->x[14] + 0xb0ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->x[14] = (uint64_t)(c->x[14] + (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->x[14] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    (void)(subs64(c, c->x[15], (uint64_t)(c->x[8])));
    c->x[13] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)((uint32_t)c->x[13]));
    if ((uint32_t)c->x[0] != 0) goto L_7005505f6c;
    if (COND_HI(c)) goto L_7005505f90;
L_7005505f6c:;
    { uint64_t ea = c->x[14] + 0x20ull; uint64_t v = LD8(ea); c->x[15] = (uint64_t)(v); }
    if (((c->x[15] >> 0) & 1) == 0) goto L_7005505f90;
    { uint64_t ea = c->x[14] + 0x8ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    if (((c->x[15] >> 1) & 1) == 0) goto L_7005505f90;
    c->x[11] = (uint64_t)(c->x[15] & 0xfffffffffffffffdull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint64_t ea = c->x[14] + 0x8ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
L_7005505f90:;
    (void)(subs64(c, c->x[11], (uint64_t)((uint64_t)(uint32_t)c->x[12])));
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x28ull);
    if (COND_HI(c)) goto L_7005505f4c;
    (void)(subs32(c, (uint32_t)c->x[13], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    if ((uint32_t)c->x[9] == 0) goto L_7005505ff0;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x1220ull);
    c->x[10] = (uint64_t)(c->x[10] + c->x[11]);
L_7005505fb8:;
    c->x[11] = (uint64_t)(ldx64(c, c->x[10]));
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    { uint32_t st = stx64(c, c->x[10], c->x[11]); c->x[12] = (uint32_t)(st); }
    if ((uint32_t)c->x[12] != 0) goto L_7005505fb8;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x1228ull);
    c->x[9] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->x[10] = (uint64_t)(c->x[10] + c->x[11]);
L_7005505fd8:;
    c->x[11] = (uint64_t)(ldx64(c, c->x[10]));
    c->x[11] = (uint64_t)(c->x[11] + c->x[9]);
    { uint32_t st = stx64(c, c->x[10], c->x[11]); c->x[12] = (uint32_t)(st); }
    if ((uint32_t)c->x[12] != 0) goto L_7005505fd8;
    goto L_7005505ff0;
L_7005505fec:;
    c->x[8] = (uint32_t)(0x1ull);
L_7005505ff0:;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[0] != 0) goto L_7005506008;
    if ((uint32_t)c->x[8] == 0) goto L_7005506008;
    c->x[8] = (uint32_t)(0x1200ull);
    c->x[8] = (uint64_t)(c->x[9] + c->x[8]);
    stl64(c->x[8], 0ull);
L_7005506008:;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
L_7005506010:;
    c->pc = 0; return;
}

void f_700550656c(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(c->x[1] + c->x[8]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_7005506624;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_7005506624;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005506620;
    { uint64_t ea = c->x[19] + 0xf40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf60ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if ((uint32_t)c->x[9] == 0) goto L_70055065ec;
    if (COND_NE(c)) goto L_7005506620;
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005506620;
    c->x[30] = 0x70055065d8ull; f_7005507d50(c);
    c->x[19] = (uint64_t)(c->x[19] + 0xf50ull);
L_70055065dc:;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005506624;
L_70055065ec:;
    if (COND_NE(c)) goto L_7005506620;
    { uint64_t ea = c->x[19] + 0xf68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_7005506620;
    { uint64_t ea = c->x[19] + 0xf70ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005506620;
    { uint64_t ea = c->x[19] + 0xf90ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005506620;
    c->x[19] = (uint64_t)(c->x[19] + 0xf90ull);
    c->x[30] = 0x700550661cull; f_7005507d50(c);
    goto L_70055065dc;
L_7005506620:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005506624:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005506a64(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x2e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005506b6c;
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0xf08ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_7005506b64;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x7005506a8cull; f_70055063c8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506b64;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint32_t)(0x10000ull);
    c->x[30] = 0x7005506aa0ull; f_7005506474(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005506b64;
    c->x[30] = 0x7005506aa8ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0xf38ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf90ull; ST64(ea, c->x[0]); }
    c->x[1] = (uint64_t)(c->x[19] + 0x2f0ull);
    { uint64_t ea = c->x[19] + 0x5e0ull; ST64(ea, c->x[0]); }
    c->x[0] = (uint64_t)(c->x[19] + 0x5c8ull);
    c->x[3] = (uint64_t)(c->x[19] + 0xf18ull);
    c->x[30] = 0x7005506ac4ull; f_700550edb0(c);
    if ((uint32_t)c->x[0] != 0) goto L_7005506b40;
    { uint64_t ea = c->x[19] + 0xf08ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xdfcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 1));
    { uint64_t ea = c->x[19] + 0xe21ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 2));
    { uint64_t ea = c->x[19] + 0xdf8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 8));
    { uint64_t ea = c->x[19] + 0x2f4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[20] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 16));
    c->x[30] = 0x7005506af0ull; f_7005507d50(c);
    { uint64_t ea = c->x[19] + 0xf90ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x2e4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xfb4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x1ull);
    c->x[0] = (uint64_t)(c->x[19] + 0x2f0ull);
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[19] + 0xfb4ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[20] | ((uint32_t)c->x[8] << 24));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | ((uint32_t)c->x[9] << 25));
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x524ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0xfb0ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005506b2cull; f_7005509c8c(c);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005506b34ull; f_7005506668(c);
    { uint64_t ea = c->x[19] + 0xc0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    { uint64_t ea = c->x[19] + 0xc0ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005506b40:;
    { uint64_t ea = c->x[19] + 0x490ull; c->v[0] = LD64(ea); }
    c->x[8] = (uint64_t)(c->x[19] + 0x2f4ull);
    { uint64_t ea = c->x[19] + 0x34cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; c->v[1] = LD64(ea); }
    { uint64_t ea = c->x[19] + 0x2e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    VW(vu8, 0, 0, SHUF(VREG(vu8, 0), VREG(vu8, 0), 4, 5, 6, 7, 0, 1, 2, 3, 12, 13, 14, 15, 8, 9, 10, 11));
    { uint64_t ea = c->x[19] + 0xc8ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[19] + 208; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[19] + 0xd8ull; ST64(ea, VS64(0)); }
L_7005506b64:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
L_7005506b6c:;
    c->pc = 0; return;
}

void f_7005507c54(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); }
    c->v[0] = 0x0ull;
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    if (c->x[2] == 0) goto L_7005507ce8;
    { uint64_t ea = c->x[2] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if ((uint32_t)c->x[8] == 0) goto L_7005507ce8;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_7005507ce8;
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005507c90ull; f_70055080f8(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005507cec;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005507cec;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507ce8;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507ce8;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005507ce8;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005507cec;
L_7005507ce8:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005507cec:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
}

void f_7005507d50(Cpu *c) {
    c->x[0] = (uint64_t)(c->tpidrro);
    c->pc = 0; return;
}

void f_7005507d58(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005507e78;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[8] = (uint64_t)(c->x[1] & 0xfffull);
    if (c->x[8] != 0) goto L_7005507e78;
    c->x[8] = (uint32_t)(0x5a40ull);
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x210ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2190000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[3] = (uint32_t)(0x10ull);
    c->x[30] = 0x7005507db8ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    c->x[8] = (uint32_t)(0x86b0ull);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x224ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x10ull);
    c->x[1] = (uint64_t)(c->x[21] + c->x[8]);
    c->x[30] = 0x7005507ddcull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    c->x[24] = (uint32_t)(0xe25cull);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x1fcull);
    c->x[24] = (uint32_t)((c->x[24] & 0xffffffff0000ffffull) | 0x20a0000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x10ull);
    c->x[20] = (uint64_t)(c->x[21] + c->x[24]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005507e04ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e10;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005507e78;
L_7005507e10:;
    c->x[2] = (uint64_t)(c->sp + 0x4cull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x4ull);
    { uint64_t ea = c->sp + 0x4cull; ST32(ea, 0u); }
    c->x[30] = 0x7005507e28ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x4cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(ROR64(c->x[8], 26) & 0x3full);
    (void)(subs32(c, (uint32_t)c->x[9], 0x5ull));
    if (COND_NE(c)) goto L_7005507e74;
    c->x[9] = (uint64_t)(c->x[8] & 0x3ffffffull);
    c->x[10] = (uint64_t)(0ull | 0xfffffffff0000000ull);
    c->x[11] = (uint64_t)(ROR64(c->x[9], 25) & 0x7full);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 62) & 0xfffffffffffffffcull);
    c->x[10] = (uint64_t)((c->x[10] & 0xfffffffff0000000ull) | (((c->x[10] & 0xfffffffff0000003ull) | (ROR64(c->x[8], 62) & 0xffffffcull)) & 0xfffffffull));
    (void)(subs32(c, (uint32_t)c->x[11], 0x0ull));
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[9] : (uint64_t)(c->x[10]));
    c->x[20] = (uint64_t)(c->x[8] + c->x[20]);
    c->x[8] = (uint64_t)(c->x[20] - 0x73000ull);
    c->x[8] = (uint64_t)(c->x[8] - 0xdd0ull);
    c->x[23] = (uint64_t)(c->x[8] + 0x10000ull);
    if (c->x[22] == 0) goto L_7005507e90;
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[22])));
    if (COND_EQ(c)) goto L_7005507e90;
L_7005507e74:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005507e78:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
    c->pc = 0; return;
L_7005507e90:;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005507e78;
    if (((c->x[20] >> 2) & 1) != 0) goto L_7005507e78;
    c->x[8] = (uint64_t)(c->x[23] & 0xffcull);
    if (c->x[8] != 0) goto L_7005507e78;
    c->x[8] = (uint64_t)(c->x[24] + c->x[21]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x200ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x4ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0xcull);
    c->x[30] = 0x7005507eccull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    c->x[8] = (uint64_t)(c->x[20] - 0x63000ull);
    c->x[2] = (uint64_t)(c->sp + 0x48ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(c->x[8] - 0xdccull);
    c->x[3] = (uint32_t)(0x4ull);
    { uint64_t ea = c->sp + 0x48ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    c->x[30] = 0x7005507ef4ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x189000ull));
    if (COND_NE(c)) goto L_7005507e78;
    c->x[8] = (uint64_t)(c->x[20] + 0x125000ull);
    /* hint */
    c->x[2] = (uint64_t)(0x700551134cull);
    c->x[1] = (uint64_t)(c->x[8] + 0x230ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1cull);
    c->x[30] = 0x7005507f28ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x24ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1cull);
    c->x[1] = (uint64_t)(c->x[23] + c->x[8]);
    c->x[30] = 0x7005507f44ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x3cull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = (uint64_t)(int64_t)(int32_t)LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[8] = (uint64_t)(c->x[23] + c->x[8]);
    c->x[22] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[1] = (uint64_t)(c->x[22] + 0x28ull);
    c->x[30] = 0x7005507f70ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    c->x[1] = (uint64_t)(c->x[22] + 0x30ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507f88ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_NE(c)) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[23] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[21]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005507e74;
    /* hint */
    c->x[2] = (uint64_t)(0x7005511368ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x100ull);
    c->x[30] = 0x7005507fd0ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    c->x[8] = (uint64_t)(c->x[20] + 0x250000ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(c->x[8] + 0x158ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005507fecull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005507e78;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(logic64(c, c->x[8] & 0x7ull));
    c->x[8] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x0ull);
    if (COND_EQ(c)) (void)subs64(c, c->x[9], c->x[8]); else c->nzcv = 0x0ull;
    c->x[8] = (uint32_t)(0x2ull);
    c->x[0] = (uint32_t)((COND_CC(c)) ? 0u : (uint32_t)((uint32_t)c->x[8]));
    goto L_7005507e78;
}

void f_7005508a38(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[19] == 0) goto L_7005508b78;
    c->x[22] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_7005508b78;
    c->x[8] = (uint64_t)(c->tpidrro);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508b74;
    { uint64_t ea = c->x[19] + 0x1a8ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    if ((uint32_t)c->x[12] == 0) goto L_7005508a80;
    { uint64_t ea = c->x[19] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508b74;
L_7005508a80:;
    if (c->x[20] == 0) goto L_7005508b68;
    if (c->x[21] == 0) goto L_7005508b68;
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005508b68;
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005508b68;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_7005508b68;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005508b68;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005508b68;
    if ((uint32_t)c->x[12] == 0) goto L_7005508b20;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[21])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x40ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs64(c, c->x[12], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005508b0c;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_7005508b48;
L_7005508b0c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[4]);
    c->x[30] = 0x7005508b18ull; f_7005508758(c);
    { uint64_t ea = c->x[19] + 0x1a8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005508b48;
L_7005508b20:;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_7005508b74;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(adds64(c, c->x[8], 0x1ull));
    if (COND_CS(c)) goto L_7005508b74;
    { uint64_t ea = c->x[19] + 56; ST64(ea, c->x[8]); ST64(ea + 8, c->x[22]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x48ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->x[19] + 0x1a8ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005508b48:;
    { uint64_t ea = c->x[20] + 16; u128 a = LD128(ea), b = LD128(ea + 16); c->v[2] = a; c->v[0] = b; }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x0ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 16; ST128(ea, c->v[2]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->x[19] + 0x0ull; ST128(ea, c->v[1]); }
    goto L_7005508b78;
L_7005508b68:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[4]);
    c->x[30] = 0x7005508b74ull; f_7005508758(c);
L_7005508b74:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005508b78:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_7005508b88(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[2] - 0x4ull);
    c->x[24] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(adds32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_CC(c)) goto L_7005508d74;
    c->x[19] = (uint64_t)(0ull | c->x[4]);
    if (c->x[4] == 0) goto L_7005508d74;
    c->x[21] = (uint64_t)(0ull | c->x[5]);
    if (c->x[5] == 0) goto L_7005508d74;
    c->x[26] = (uint64_t)(c->tpidrro);
    { uint64_t ea = c->sp + 0x58ull; ST64(ea, 0ull); }
    if (c->x[26] == 0) goto L_7005508d70;
    { uint64_t ea = c->x[21] + 0x1a8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[20] = (uint64_t)(0ull | c->x[6]);
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->x[25] = (uint64_t)(0ull | c->x[1]);
    if ((uint32_t)c->x[8] == 0) goto L_7005508bf4;
    { uint64_t ea = c->x[21] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[26])));
    if (COND_NE(c)) goto L_7005508d70;
L_7005508bf4:;
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005508c1c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[26])));
    if (COND_EQ(c)) goto L_7005508c1c;
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    if (COND_NE(c)) goto L_7005508d70;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] != 0) goto L_7005508d70;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005508d70;
L_7005508c1c:;
    c->x[8] = (uint32_t)((uint32_t)c->x[23] + 0xaull);
    c->x[9] = (uint32_t)(0x14ull);
    /* hint */
    c->x[10] = (uint64_t)(0x70055111f8ull);
    c->x[2] = (uint64_t)(c->x[10] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[3] = (uint32_t)(0x10ull);
    { uint64_t ea = c->x[2]; uint64_t v = LD32(ea); c->x[2] = c->x[2] + 4; c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[30] = 0x7005508c44ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508d74;
    c->x[2] = (uint64_t)(c->sp + 0x58ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005508c5cull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508d74;
    c->x[9] = (uint32_t)(0xf150ull);
    { uint64_t ea = c->sp + 0x58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3720000ull);
    c->x[9] = (uint64_t)(c->x[25] + c->x[9]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005508d70;
    (void)(subs32(c, (uint32_t)c->x[23], 0x3ull));
    if (COND_NE(c)) goto L_7005508ca8;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508d70;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005508c98ull; f_7005508758(c);
    { uint64_t ea = c->x[19] + 0x18ull; ST32(ea, 0u); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST64(ea, 0ull); }
    goto L_7005508d74;
L_7005508ca8:;
    c->v[0] = 0x0ull;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[1] = (uint64_t)(0ull | c->x[25]);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0xcull; ST8(ea, 0u); }
    { uint64_t ea = c->sp + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005508cccull; f_70055080f8(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005508d74;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508d74;
    c->x[1] = (uint64_t)(c->x[22] + 0x16eull);
    c->x[2] = (uint64_t)(c->sp + 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[24]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005508cf8ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508d74;
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[23], 0x1ull));
    if (COND_NE(c)) goto L_7005508d40;
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_7005508d70;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(adds64(c, c->x[8], 0x1ull));
    if (COND_EQ(c)) goto L_7005508d70;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005508d28ull; f_7005508758(c);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; ST64(ea, c->x[26]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[22]); }
    c->x[8] = (uint32_t)(0x1ull);
    goto L_7005508d64;
L_7005508d40:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_NE(c)) goto L_7005508d70;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_7005508d70;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005508d60ull; f_7005508758(c);
    c->x[8] = (uint32_t)(0u | 0u);
L_7005508d64:;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005508d74;
L_7005508d70:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005508d74:;
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
}

void f_7005508e48(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[5]);
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[4]);
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    c->x[23] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005508e78ull; f_7005509080(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509048;
    { uint64_t ea = c->x[21] + 0x60ull; uint64_t v = LD64(ea); c->x[25] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x54ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005509044;
    { uint64_t ea = c->x[25] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->tpidrro);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509044;
    { uint64_t ea = c->x[25] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509044;
    { uint64_t ea = c->x[25] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509044;
    { uint64_t ea = c->x[25] + 0x48ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[24])));
    if (COND_NE(c)) goto L_7005509044;
    c->x[8] = (uint32_t)(0xd3b0ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_NE(c)) goto L_7005509048;
    c->x[8] = (uint32_t)(0xd410ull);
    { uint64_t ea = c->x[25] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[22] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509048;
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[1] = (uint64_t)(c->x[23] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x38ull);
    c->x[3] = (uint32_t)(0x8ull);
    { uint64_t ea = c->sp + 48; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 32; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x1cull; ST32(ea, 0u); }
    c->x[30] = 0x7005508f10ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509044;
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[1] = (uint64_t)(c->x[22] + 0x90ull);
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005508f38ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005509044;
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[1] = (uint64_t)(c->x[22] + 0x9cull);
    c->x[2] = (uint64_t)(c->sp + 0x1cull);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[30] = 0x7005508f60ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005509048;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x66b0ull);
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[2] = (uint64_t)(c->sp + 0x20ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[1] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[30] = 0x7005508f98ull; f_70055080a0(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_7005509048;
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[1] = (uint64_t)(c->x[22] + 0x328ull);
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x7005508fc4ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[21] + 0x40ull);
    c->x[2] = (uint64_t)(c->x[25] + 0x58ull);
    c->x[30] = 0x7005508fd8ull; f_7005509134(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509048;
    c->x[1] = (uint64_t)(c->x[22] + 0x218ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_7005509048;
    { uint64_t ea = c->x[21] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509048;
    c->x[9] = (uint64_t)(c->x[22] + 0x228ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_7005509048;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_7005509048;
    { uint64_t ea = c->x[21] + 64; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550901cull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_7005509048;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005509048;
    { uint64_t ea = c->x[25] + 0x50ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005509060;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[8] = (uint32_t)(0x2ull);
    goto L_7005509078;
L_7005509044:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005509048:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
    c->pc = 0; return;
L_7005509060:;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[25] + 0x20ull; ST64(ea, c->x[20]); }
    { uint64_t ea = c->x[25] + 0x4cull; ST32(ea, (uint32_t)c->x[19]); }
    { uint64_t ea = c->x[25] + 56; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    c->x[8] = (uint32_t)(0x1ull);
L_7005509078:;
    { uint64_t ea = c->x[25] + 0x50ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005509048;
}

void f_7005509468(Cpu *c) {
    if (c->x[0] == 0) goto L_70055094b8;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_7005509470:;
    { uint64_t ea = c->x[0] + c->x[9]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5full));
    if (COND_EQ(c)) goto L_70055094a8;
    if ((uint32_t)c->x[8] == 0) goto L_70055094c0;
    c->x[10] = (uint32_t)((uint32_t)c->x[8] & 0xffffffdfull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x3aull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x5bull);
    (void)(adds32(c, (uint32_t)c->x[10], 0x1aull));
    if (COND_CC(c)) (void)adds32(c, (uint32_t)c->x[8], 0xaull); else c->nzcv = 0x20000000ull;
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_70055094c8;
    (void)(subs32(c, (uint32_t)c->x[9], 0x3eull));
    if (COND_LS(c)) goto L_70055094b0;
    goto L_70055094c8;
L_70055094a8:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x3eull));
    if (COND_HI(c)) goto L_70055094b8;
L_70055094b0:;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    goto L_7005509470;
L_70055094b8:;
    c->x[8] = (uint32_t)(0u | 0u);
    goto L_70055094c8;
L_70055094c0:;
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
L_70055094c8:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
}

void f_7005509828(Cpu *c) {
    if (c->x[0] == 0) goto L_70055099a0;
    c->sp = (uint64_t)(c->sp - 0x70ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x4345ull);
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x34430000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005509880;
    { uint64_t ea = c->x[19] + 0x4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005509980;
    { uint64_t ea = c->x[19] + 0x88ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_7005509980;
    { uint64_t ea = c->x[19] + 0x60ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005509980;
L_7005509880:;
    c->v[0] = 0x0ull;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_7005509888:;
    { uint64_t ea = c->x[19] + c->x[9]; ST128(ea, c->v[0]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[9], 0xe0ull));
    if (COND_NE(c)) goto L_7005509888;
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)(0x7ull);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[9]); }
    if (c->x[21] == 0) goto L_7005509984;
    (void)(subs32(c, (uint32_t)c->x[2], 0xa0ull));
    if (COND_CC(c)) goto L_7005509984;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x120000ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005509980;
    { uint64_t ea = c->x[21] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_7005509980;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[2])));
    if (COND_NE(c)) goto L_7005509980;
    c->x[8] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 16; uint64_t v = LD32(ea); c->x[8] = ea; c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x8ull));
    if (COND_NE(c)) goto L_7005509980;
    { uint64_t ea = c->x[21] + 0x14ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x177ull));
    if (COND_NE(c)) goto L_7005509980;
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0xa0ull));
    if (COND_NE(c)) goto L_7005509980;
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[2], 3) & 0x1fffffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[9], 0x479ull));
    if (COND_CC(c)) goto L_7005509984;
    { uint64_t ea = c->x[21] + 0x1cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x23c8ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005509984;
    { uint64_t ea = c->x[21] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(0x8320ull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[22] = (uint64_t)(0ull | c->x[19]);
    c->x[11] = (uint32_t)((uint32_t)c->x[2] - 0x10ull);
    c->x[12] = (uint32_t)(0xffffffffull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0xedb80000ull);
    { uint64_t ea = c->x[22] + 152; ST64(ea, c->x[21]); c->x[22] = ea; }
    { uint64_t ea = c->x[22] + 8; ST32(ea, (uint32_t)c->x[2]); ST32(ea + 4, (uint32_t)c->x[10]); }
L_7005509948:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[14] = (uint64_t)(v); }
    c->x[12] = (uint32_t)((uint32_t)c->x[12] ^ (uint32_t)c->x[14]);
    c->x[14] = (uint32_t)(0x8ull);
L_7005509954:;
    c->x[15] = (uint32_t)(((uint32_t)(-(int32_t)(((uint32_t)c->x[12] >> 0) & 1)) & 0xfffffffeull) | ((uint32_t)c->x[12] & 0x1ull));
    c->x[14] = (uint32_t)(subs32(c, (uint32_t)c->x[14], 0x1ull));
    c->x[15] = (uint32_t)((uint32_t)c->x[15] & (uint32_t)c->x[13]);
    c->x[12] = (uint32_t)((uint32_t)c->x[15] ^ ((uint32_t)c->x[12] >> 1));
    if (COND_NE(c)) goto L_7005509954;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_7005509948;
    c->x[8] = (uint32_t)((uint32_t)c->x[12] ^ (uint32_t)c->x[10]);
    (void)(adds32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_EQ(c)) goto L_70055099a4;
L_7005509980:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005509984:;
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x70ull);
L_70055099a0:;
    c->pc = 0; return;
L_70055099a4:;
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[24] = (uint64_t)(c->x[21] + 0x20ull);
    c->x[25] = (uint64_t)(c->x[21] + 0x28ull);
    c->x[26] = (uint32_t)(0x8ull);
L_70055099b4:;
    { uint64_t ea = c->x[25] - 8; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[23])));
    if (COND_NE(c)) goto L_7005509980;
    { uint64_t ea = c->x[25] - 4; uint64_t v = LD32(ea); c->x[27] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[27] - 0x52ull);
    (void)(adds32(c, (uint32_t)c->x[8], 0x51ull));
    if (COND_CC(c)) goto L_7005509980;
    { uint64_t ea = c->x[25] + 0x0ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint32_t)(0x40ull);
    c->x[30] = 0x70055099e4ull; f_7005509b34(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509984;
    c->x[26] = (uint64_t)(subs64(c, c->x[26], 0x1ull));
    c->x[23] = (uint32_t)((uint32_t)c->x[27] + (uint32_t)c->x[23]);
    c->x[25] = (uint64_t)(c->x[25] + 0x10ull);
    if (COND_NE(c)) goto L_70055099b4;
    (void)(subs32(c, (uint32_t)c->x[23], 0x177ull));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[24]); }
    if (COND_NE(c)) goto L_7005509980;
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint64_t)(c->x[21] + 0xa0ull);
    c->x[25] = (uint64_t)(c->x[21] + 0xa4ull);
    c->x[9] = (uint32_t)(0x18ull);
    c->x[26] = (uint32_t)(0x40ull);
    c->x[27] = (uint32_t)(0x99ull);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
L_7005509a20:;
    c->x[8] = (uint64_t)(c->x[8] + c->x[24] * c->x[9]);
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD32(ea); c->x[28] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[28], 0x7ull));
    if (COND_HI(c)) goto L_7005509980;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[23] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint32_t)(0x40ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[23]);
    c->x[30] = 0x7005509a48ull; f_7005509b34(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509984;
    c->x[29] = (uint64_t)(0ull | 0ull);
L_7005509a50:;
    { uint64_t ea = c->x[25] + c->x[29]; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[29], 0x8ull));
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[27] : (uint32_t)((uint32_t)c->x[26]));
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005509a68ull; f_7005509b34(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509984;
    c->x[29] = (uint64_t)(c->x[29] + 0x4ull);
    (void)(subs64(c, c->x[29], 0x8ull));
    if (COND_LS(c)) goto L_7005509a50;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + (c->x[28] << 4));
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_7005509980;
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + (uint32_t)c->x[9]);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[8])));
    if (COND_CS(c)) goto L_7005509980;
    if (c->x[24] == 0) goto L_7005509aec;
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[21] + c->x[23]);
L_7005509aa8:;
    c->x[11] = (uint32_t)(0x18ull);
    c->x[10] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(0ull + c->x[8] * c->x[11]);
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + c->x[12]; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[21] + c->x[11]);
L_7005509ac0:;
    { uint64_t ea = c->x[9] + c->x[10]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + c->x[10]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_7005509ae0;
    if ((uint32_t)c->x[12] == 0) goto L_7005509980;
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[10], 0x40ull));
    if (COND_NE(c)) goto L_7005509ac0;
L_7005509ae0:;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_NE(c)) goto L_7005509aa8;
L_7005509aec:;
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[25] = (uint64_t)(c->x[25] + 0x18ull);
    (void)(subs64(c, c->x[24], 0x177ull));
    c->x[9] = (uint32_t)(0x18ull);
    if (COND_NE(c)) goto L_7005509a20;
    if (c->x[20] == 0) goto L_7005509b1c;
    { uint64_t ea = c->x[20] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xd8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 200; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[19] + 184; ST128(ea, c->v[1]); }
L_7005509b1c:;
    c->x[8] = (uint32_t)(0x78ull);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, 0u); }
    { uint64_t ea = c->x[19] + 0xb0ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x68ull; ST32(ea, (uint32_t)c->x[0]); }
    goto L_7005509984;
}

void f_700550a9d8(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550a9f8ull; f_700550aae0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550aac4;
    c->x[8] = (uint64_t)(c->sp + 0x0ull);
    c->x[24] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[20] = (uint32_t)(0u | 0u);
    c->x[25] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint32_t)(0x14ull);
    c->x[22] = (uint64_t)(c->x[8] | 0x1ull);
    /* hint */
    c->x[23] = (uint64_t)(0x70055114ccull);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0xffefull);
L_700550aa20:;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[8] == 0) goto L_700550aac4;
    c->x[26] = (uint64_t)(c->x[23] + c->x[25] * c->x[21]);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[9] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[24])));
    if (COND_HI(c)) goto L_700550aac4;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550aa58ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550aac4;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[26] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550aac0;
    c->x[8] = (uint64_t)(c->x[23] + c->x[25] * c->x[21]);
    c->x[10] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[8] + 0x5ull);
L_700550aa78:;
    c->x[8] = (uint64_t)(0ull | c->x[10]);
    (void)(subs64(c, c->x[10], 0xfull));
    if (COND_EQ(c)) goto L_700550aa98;
    { uint64_t ea = c->x[22] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    c->x[10] = (uint64_t)(c->x[8] + 0x1ull);
    if (COND_EQ(c)) goto L_700550aa78;
L_700550aa98:;
    (void)(subs64(c, c->x[8], 0xeull));
    c->x[10] = (uint32_t)((uint32_t)c->x[20] ^ 0x1ull);
    c->x[20] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[25] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[10]);
    if (((c->x[9] >> 0) & 1) != 0) goto L_700550aa20;
    (void)(subs64(c, c->x[8], 0xeull));
    c->x[0] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550aac4;
L_700550aac0:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550aac4:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700550abf8(Cpu *c) {
    if (c->x[0] == 0) goto L_700550ac18;
    (void)(subs64(c, c->x[1], 0x10000ull));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_CC(c)) goto L_700550ac1c;
    { uint64_t ea = c->x[0] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550ac1c;
    c->x[10] = (uint64_t)(adds64(c, c->x[1], (uint64_t)((uint64_t)(uint32_t)c->x[3])));
    if (COND_CC(c)) goto L_700550ac24;
L_700550ac18:;
    c->x[8] = (uint32_t)(0u | 0u);
L_700550ac1c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->pc = 0; return;
L_700550ac24:;
    (void)(subs32(c, (uint32_t)c->x[3], 0x100ull));
    c->x[8] = (uint32_t)(0u | 0u);
    if (COND_HI(c)) goto L_700550ac1c;
    c->x[10] = (uint64_t)(ROR64(c->x[10], 39) & 0x1ffffffull);
    if (c->x[10] != 0) goto L_700550ac1c;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[9]; c->x[30] = 0x700550ac44ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[8] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    goto L_700550ac1c;
}

void f_700550aee4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x160ull);
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[29]); ST64(ea + 8, c->x[1]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[30]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 336; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[24] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[26] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[27] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[22] = (uint32_t)(0u | 0u);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[21] = (uint64_t)(0x7005510000ull);
    c->x[21] = (uint64_t)(c->x[21] + 0xfc0ull);
    c->x[25] = (uint64_t)(c->sp + 0x0ull);
    c->x[26] = (uint64_t)((c->x[26] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[27] = (uint64_t)((c->x[27] & 0xffffffffffff0000ull) | 0x0ull);
L_700550af34:;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_LS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) (void)subs64(c, c->x[23], 0x1full); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_700550afd4;
    if (c->x[23] == 0) goto L_700550af70;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550af58:;
    { uint64_t ea = c->x[25] + (c->x[8] << 3); uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_EQ(c)) goto L_700550afd4;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550af58;
L_700550af70:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[25] + (c->x[23] << 3); ST64(ea, c->x[1]); }
    c->x[30] = 0x700550af80ull; f_700550bc40(c);
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[22] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[22] : (uint32_t)(0u + 1));
    c->x[30] = 0x700550af98ull; f_700550bc40(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550aff8;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[26]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[27])));
    if (COND_CC(c)) goto L_700550afd8;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550afd8;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[23] = (uint64_t)(c->x[23] + 0x1ull);
    c->x[30] = 0x700550afccull; f_700550abf8(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550af34;
    goto L_700550afd8;
L_700550afd4:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550afd8:;
    { uint64_t ea = c->sp + 336; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[29] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x160ull);
    c->pc = 0; return;
L_700550aff8:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[22]);
    goto L_700550afd8;
}

void f_700550b000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[2], 0x176ull));
    { uint64_t ea = c->sp + 0x28ull; ST64(ea, c->x[3]); }
    if (COND_HI(c)) goto L_700550b100;
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550b100;
    if (c->x[3] == 0) goto L_700550b100;
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550b034:;
    { uint64_t ea = c->x[3] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x5full));
    if (COND_EQ(c)) goto L_700550b070;
    if ((uint32_t)c->x[9] == 0) goto L_700550b080;
    c->x[10] = (uint32_t)((uint32_t)c->x[9] & 0xffffffdfull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] - 0x3aull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] - 0x5bull);
    (void)(adds32(c, (uint32_t)c->x[10], 0x1aull));
    if (COND_CC(c)) (void)adds32(c, (uint32_t)c->x[9], 0xaull); else c->nzcv = 0x20000000ull;
    if (COND_CC(c)) goto L_700550b100;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x40ull));
    if (COND_NE(c)) goto L_700550b034;
    goto L_700550b100;
L_700550b070:;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0x40ull));
    if (COND_NE(c)) goto L_700550b034;
    goto L_700550b0fc;
L_700550b080:;
    c->x[9] = (uint32_t)(0xffbfull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x7fff0000ull);
    (void)(logic64(c, (uint64_t)(c->x[8] & c->x[9])));
    if (COND_EQ(c)) goto L_700550b0fc;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[30] = 0x700550b0acull; f_700550ac54(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b100;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550b0fc;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550b0fc;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550b0fc;
    { uint64_t ea = c->x[19] + 0x24ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550b110;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[20])));
    if (COND_NE(c)) goto L_700550b110;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550b100;
L_700550b0fc:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550b100:;
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->pc = 0; return;
L_700550b110:;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x8258ull);
    c->x[1] = (uint64_t)(c->sp + 0x28ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2100000ull);
    c->x[2] = (uint32_t)(0u | 0u);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[8]; c->x[30] = 0x700550b130ull; rt_dispatch(c); c->pc = 0;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550b138ull; f_700550aae0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b100;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 32; ST32(ea, (uint32_t)c->x[20]); ST32(ea + 4, (uint32_t)c->x[0]); }
    goto L_700550b100;
}

void f_700550b444(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x360ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x38ull; ST64(ea, c->x[1]); }
    if (c->x[2] == 0) goto L_700550b888;
    c->x[19] = (uint64_t)(0ull | c->x[3]);
    if (c->x[3] == 0) goto L_700550b888;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x700550b488ull; f_700550aae0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550b49cull; f_700550b8b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x1920ull);
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x400000ull);
    c->x[1] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550b888;
    { uint64_t ea = c->x[21] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550b888;
    c->x[9] = (uint64_t)(c->x[10] + c->x[9]);
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550b888;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_700550b888;
    { uint64_t ea = c->x[21] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x28ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550b4f0ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | 0ull);
    if ((uint32_t)c->x[8] == 0) goto L_700550b888;
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0xfdull));
    if (COND_NE(c)) goto L_700550b888;
    c->x[9] = (uint64_t)(c->sp + 0x28ull);
    c->x[8] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[10] = (uint64_t)(0x70055114ccull);
    c->x[9] = (uint64_t)(c->x[9] | 0x1ull);
L_700550b51c:;
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_EQ(c)) goto L_700550b548;
    c->x[11] = (uint64_t)(c->x[10] + c->x[8]);
    { uint64_t ea = c->x[9] + c->x[8]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[11] + 0xe1ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_EQ(c)) goto L_700550b51c;
    c->x[8] = (uint64_t)(c->x[8] - 0x1ull);
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_CC(c)) goto L_700550b884;
L_700550b548:;
    c->x[22] = (uint32_t)(0u | 0u);
    c->x[23] = (uint64_t)(c->sp + 0x10ull);
L_700550b550:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550b884;
    c->x[24] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[20] + 0x1ull);
L_700550b560:;
    (void)(subs64(c, c->x[24], 0x16ull));
    if (COND_HI(c)) goto L_700550b590;
    (void)(subs32(c, (uint32_t)c->x[8], 0x2full));
    if (COND_EQ(c)) goto L_700550b590;
    { uint64_t ea = c->x[23] + c->x[24]; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[9] + c->x[24]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[28] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[24] = (uint64_t)(0ull | c->x[28]);
    if ((uint32_t)c->x[8] != 0) goto L_700550b560;
    { uint64_t ea = c->x[23] + c->x[28]; ST8(ea, 0u); }
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[28]);
    goto L_700550b59c;
L_700550b590:;
    { uint64_t ea = c->x[23] + c->x[24]; ST8(ea, 0u); }
    if (c->x[24] == 0) goto L_700550b884;
    c->x[28] = (uint64_t)(0ull | c->x[24]);
L_700550b59c:;
    { uint64_t ea = c->x[20] + c->x[28]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2full));
    if (COND_EQ(c)) goto L_700550b5ac;
    if ((uint32_t)c->x[8] != 0) goto L_700550b884;
L_700550b5ac:;
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[10] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x10ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0x0ull);
    { uint64_t ea = c->sp + 0x358ull; ST64(ea, 0ull); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[9] + 0x8ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_700550b884;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550b884;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x358ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b5f0ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->sp + 0x358ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550b604ull; f_700550aee4(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->sp + 0x358ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[10] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x10ull);
    c->x[10] = (uint64_t)((c->x[10] & 0xffffffffffff0000ull) | 0x0ull);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, (uint32_t)c->x[22]); }
    c->x[9] = (uint64_t)(c->x[9] + c->x[8]);
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, 0ull); }
    c->x[9] = (uint64_t)(c->x[9] + 0x18ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_CC(c)) goto L_700550b884;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550b884;
    c->x[1] = (uint64_t)(c->x[8] + 0x28ull);
    c->x[2] = (uint64_t)(c->sp + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b650ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->sp + 0x358ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[29] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint32_t)(0x1ull);
    c->x[25] = (uint32_t)(0x1ull);
    c->x[10] = (uint32_t)(0x18ull);
    { uint64_t ea = c->sp + 88; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 0x68ull; ST32(ea, 0u); }
L_700550b674:;
    c->x[8] = (uint32_t)((uint32_t)c->x[27] - 0x1ull);
    c->x[9] = (uint64_t)(c->sp + 0x58ull);
    c->x[26] = (uint64_t)(c->x[9] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->x[26] + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    c->x[9] = (uint64_t)(c->x[22] + 0x20ull);
    (void)(subs64(c, c->x[23], (uint64_t)(c->x[9])));
    if (COND_EQ(c)) goto L_700550b7d8;
    { uint64_t ea = c->x[26] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)(c->x[23] + c->x[9]);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[10] = (uint64_t)(c->x[23] & 0x7ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x80ull));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    if (COND_NE(c)) (void)subs64(c, c->x[9], c->x[11]); else c->nzcv = 0x0ull;
    { uint64_t ea = c->x[26] + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_CS(c)) (void)subs64(c, c->x[10], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_NE(c)) goto L_700550b884;
    (void)(subs32(c, (uint32_t)c->x[27], 0x20ull));
    if (COND_EQ(c)) goto L_700550b884;
    (void)(subs32(c, (uint32_t)c->x[25], 0x1000ull));
    if (COND_EQ(c)) goto L_700550b884;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    { uint64_t ea = c->sp + 64; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x10ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[23] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550b884;
    c->x[1] = (uint64_t)(c->x[23] + 0x10ull);
    c->x[2] = (uint64_t)(c->sp + 0x48ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b704ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[22])));
    if (COND_NE(c)) goto L_700550b884;
    c->x[1] = (uint64_t)(c->x[23] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x40ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b728ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x10ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550b884;
    c->x[1] = (uint64_t)(c->x[23] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b760ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[27]);
    c->x[25] = (uint32_t)((uint32_t)c->x[25] + 0x1ull);
    c->x[23] = (uint64_t)(c->x[23] - 0x8ull);
    c->x[8] = (uint64_t)(c->sp + 0x58ull);
    c->x[9] = (uint64_t)(0ull | c->x[22]);
L_700550b778:;
    { uint64_t ea = c->x[8]; uint64_t v = LD64(ea); c->x[8] = c->x[8] + 24; c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[23])));
    if (COND_EQ(c)) goto L_700550b884;
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x1ull));
    if (COND_NE(c)) goto L_700550b778;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->x[26] + 0x8ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x700550b7a4ull; f_700550bc40(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b7b4;
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    if (c->x[29] == 0) goto L_700550b7b8;
    goto L_700550b884;
L_700550b7b4:;
    c->x[0] = (uint64_t)(0ull | c->x[29]);
L_700550b7b8:;
    c->x[10] = (uint32_t)(0x18ull);
    c->x[8] = (uint64_t)(c->sp + 0x58ull);
    c->x[29] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)(c->x[8] + (uint64_t)(uint32_t)c->x[22] * (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0; ST64(ea, c->x[23]); ST64(ea + 8, c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[27] + 0x1ull);
    { uint64_t ea = c->x[9] + 0x10ull; ST32(ea, 0u); }
L_700550b7d8:;
    c->x[27] = (uint32_t)(0u | (uint32_t)c->x[8]);
    if ((uint32_t)c->x[8] != 0) goto L_700550b674;
    if (c->x[29] == 0) goto L_700550b884;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[29]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[23] = (uint64_t)(0ull | c->x[29]);
    c->x[30] = 0x700550b7f8ull; f_700550aee4(c);
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD32(ea); c->x[22] = (uint64_t)(v); }
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->x[20] + c->x[28]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550b8a8;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[9] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[0] = (uint64_t)(0ull | 0ull);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0x10ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + 0xd8ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550b888;
    c->x[10] = (uint64_t)(0ull | c->x[23]);
    c->x[8] = (uint64_t)(c->x[23] & 0x7ull);
    c->x[23] = (uint64_t)(c->sp + 0x10ull);
    if (c->x[8] != 0) goto L_700550b888;
    c->x[1] = (uint64_t)(c->x[10] + 0xe8ull);
    c->x[2] = (uint64_t)(c->sp + 0x38ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550b850ull; f_700550abf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550b864ull; f_700550b8b0(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550b884;
    c->x[22] = (uint32_t)((uint32_t)c->x[22] + 0x1ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[24] + 0x1ull);
    c->x[0] = (uint64_t)(0ull | 0ull);
    (void)(subs32(c, (uint32_t)c->x[22], 0x8ull));
    c->x[20] = (uint64_t)(c->x[20] + c->x[8]);
    if (COND_NE(c)) goto L_700550b550;
    goto L_700550b888;
L_700550b884:;
    c->x[0] = (uint64_t)(0ull | 0ull);
L_700550b888:;
    c->sp = (uint64_t)(c->sp + 0x360ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_700550b8a8:;
    c->x[0] = (uint64_t)(0ull | c->x[23]);
    goto L_700550b888;
}

void f_700550c460(Cpu *c) {
    if (c->x[0] == 0) goto L_700550c68c;
    c->sp = (uint64_t)(c->sp - 0x160ull);
    { uint64_t ea = c->sp + 0x110ull; ST64(ea, c->x[29]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 320; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 336; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if (c->x[8] == 0) goto L_700550c670;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[19] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700550c498ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c674;
    c->x[8] = (uint64_t)(0xffffffffffff0018ull);
    c->x[21] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[21] = (uint64_t)((c->x[21] & 0xffffffffffff0000ull) | 0xfff8ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    { uint64_t ea = c->sp + 0x118ull; ST64(ea, 0ull); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    { uint64_t ea = c->sp + 256; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    if (COND_CS(c)) goto L_700550c674;
    c->x[8] = (uint64_t)(c->x[20] & 0x7ull);
    if (c->x[8] != 0) goto L_700550c674;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[20] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c4e4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c674;
    { uint64_t ea = c->sp + 0x118ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c670;
    c->x[8] = (uint64_t)(0xffffffffffff0020ull);
    c->x[8] = (uint64_t)(c->x[20] + c->x[8]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[20] + 0x20ull);
    c->x[2] = (uint64_t)(c->sp + 0x108ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550c524ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c674;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0080ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_700550c674;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c674;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x80ull);
    c->x[2] = (uint64_t)(c->sp + 0x118ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c564ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c674;
    { uint64_t ea = c->sp + 0x118ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c670;
    { uint64_t ea = c->sp + 0x108ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0xffffffffffff0018ull);
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_700550c674;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c674;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c5b4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550c674;
    c->x[23] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[20] = (uint64_t)(0x7005510000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0xfc0ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[24] = (uint64_t)(c->sp + 0x0ull);
    c->x[25] = (uint64_t)(0xffffffffffff0018ull);
L_700550c5d4:;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_LS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_EQ(c)) (void)subs64(c, c->x[22], 0x1full); else c->nzcv = 0x20000000ull;
    if (COND_HI(c)) goto L_700550c670;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550c5fcull; f_700550c698(c);
    if ((uint32_t)c->x[0] != 0) goto L_700550c690;
    { uint64_t ea = c->sp + 0x100ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[22] == 0) goto L_700550c624;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_700550c60c:;
    { uint64_t ea = c->x[24] + (c->x[9] << 3); uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[8])));
    if (COND_EQ(c)) goto L_700550c670;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550c60c;
L_700550c624:;
    c->x[9] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[24] + (c->x[22] << 3); ST64(ea, c->x[8]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    if (COND_CS(c)) goto L_700550c674;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550c674;
    { uint64_t ea = c->x[19] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700550c670;
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x100ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x1ull);
    c->pc = c->x[9]; c->x[30] = 0x700550c660ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] != 0) goto L_700550c5d4;
    goto L_700550c674;
L_700550c670:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550c674:;
    { uint64_t ea = c->sp + 336; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x110ull; uint64_t v = LD64(ea); c->x[29] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 320; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x160ull);
L_700550c68c:;
    c->pc = 0; return;
L_700550c690:;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550c674;
}

void f_700550ce48(Cpu *c) {
    { uint64_t ea = c->sp - 96; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x8f0ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[20] == 0) goto L_700550d540;
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550d540;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_700550d540;
    { uint64_t ea = c->x[19] + 0x7e8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550d53c;
    { uint64_t ea = c->x[21] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_700550d53c;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550ceacull; f_700550a9d8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x3ull);
    c->x[30] = 0x700550cebcull; f_700550d560(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0x4ull);
    c->x[30] = 0x700550ceccull; f_700550d560(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[8] = (uint64_t)(c->sp + 0xa0ull);
    c->x[23] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[24] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[0] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x838ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x0ull);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0x18ull);
    c->x[30] = 0x700550cef4ull; f_700550ff50(c);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[20] + 8; c->v[0] = LD128(ea); }
    { uint64_t ea = c->sp + 144; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0xb0ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    { uint64_t ea = c->sp + 0xa0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 0xd0ull; ST64(ea, c->x[8]); }
    if (COND_CC(c)) goto L_700550d540;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d540;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x98ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550cf3cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d540;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d540;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x90ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550cf70ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[1]); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_700550d018;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d018;
    c->x[26] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[25] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[22] = (uint64_t)(0x7005510fc0ull);
    c->x[26] = (uint64_t)((c->x[26] & 0xffffffffffff0000ull) | 0xffffull);
L_700550cfac:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550cfb8ull; f_700550d630(c);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[0] != 0) goto L_700550d014;
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d53c;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550cfe8ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[1] - 0x10000ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[26])));
    if (COND_HI(c)) goto L_700550d018;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d018;
    (void)(subs64(c, c->x[25], 0x1eull));
    c->x[25] = (uint64_t)(c->x[25] + 0x1ull);
    if (COND_LS(c)) goto L_700550cfac;
    goto L_700550d018;
L_700550d014:;
    { uint64_t ea = c->sp + 0xb8ull; ST64(ea, c->x[8]); }
L_700550d018:;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if (c->x[1] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x90ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550d02cull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfc8ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550d044ull; f_700550d774(c);
    { uint64_t ea = c->sp + 0x88ull; ST64(ea, 0ull); }
    if (c->x[0] == 0) goto L_700550d540;
    c->x[8] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d540;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d540;
    c->x[2] = (uint64_t)(c->sp + 0x88ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d07cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xbf00ull);
    { uint64_t ea = c->sp + 0x88ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3910000ull);
    c->x[10] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[8] + 0x406000ull);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005511000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0xcfull);
    c->x[8] = (uint64_t)(c->x[8] + 0xaccull);
    c->pc = c->x[8]; c->x[30] = 0x700550d0b4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0x7005511000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0xffull);
    c->x[8] = (uint64_t)(c->x[8] + 0xb4c000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0xf10ull);
    c->pc = c->x[8]; c->x[30] = 0x700550d0d4ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(c->x[22] + c->x[24]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d540;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d540;
    c->x[8] = (uint64_t)(c->sp + 0xa0ull);
    c->x[1] = (uint64_t)(c->x[22] + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(c->x[8] + 0x20ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d108ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[8] = (uint64_t)(c->x[21] + c->x[24]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d540;
    c->x[8] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d540;
    c->x[22] = (uint64_t)(c->sp + 0xa0ull);
    c->x[1] = (uint64_t)(c->x[21] + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(c->x[22] + 0x28ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d13cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[8] = (uint64_t)(c->x[22] + 0x38ull);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[27] = (uint64_t)(0ull | 0xffffff8000000000ull);
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[29] = (uint64_t)(c->sp + 0x18ull);
    c->x[22] = (uint64_t)(0x7005511000ull);
    c->x[22] = (uint64_t)(c->x[22] + 0x9bull);
L_700550d160:;
    c->x[28] = (uint32_t)(0u | (uint32_t)c->x[9]);
    (void)(logic32(c, (uint32_t)c->x[9] & 0x1ull));
    c->x[9] = (uint32_t)(0x118ull);
    c->x[10] = (uint32_t)(0x100ull);
    c->x[2] = (uint64_t)(c->sp + 0x84ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[25] = (uint64_t)((COND_NE(c)) ? c->x[10] : (uint64_t)(c->x[9]));
    c->x[3] = (uint32_t)(0x4ull);
    { uint64_t ea = c->sp + 120; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[8] = (uint64_t)(c->x[25] + c->x[8]);
    c->x[1] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[30] = 0x700550d190ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x84ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x200ull));
    if (COND_HI(c)) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x80ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x4ull);
    c->x[8] = (uint64_t)(c->x[25] + c->x[8]);
    c->x[1] = (uint64_t)(c->x[8] + 0x14ull);
    c->x[30] = 0x700550d1bcull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x80ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x8ull));
    if (COND_NE(c)) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic64(c, c->x[8] & 0x7ull));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[8] + c->x[25]);
    c->x[9] = (uint64_t)(c->x[24] + c->x[8]);
    c->x[9] = (uint64_t)(c->x[9] - 0x10ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x78ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d200ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[25]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550d234;
    c->x[26] = (uint32_t)(0u | 0u);
L_700550d21c:;
    { uint64_t ea = c->sp + 0x84ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[26], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[9] = (uint32_t)(0u | 0u);
    if (((c->x[28] >> 0) & 1) != 0) goto L_700550d160;
    goto L_700550d460;
L_700550d234:;
    c->x[26] = (uint32_t)(0u | 0u);
L_700550d238:;
    { uint64_t ea = c->sp + 0x84ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[26] = (uint32_t)((uint32_t)c->x[26] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[26], (uint32_t)((uint32_t)c->x[8])));
    if (COND_HI(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[9] + c->x[27]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[9] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x80ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 104; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, 0ull); }
    c->x[21] = (uint64_t)(c->x[9] - c->x[8]);
    c->x[8] = (uint64_t)(c->x[21] + c->x[27]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d53c;
    c->x[2] = (uint64_t)(c->sp + 0x70ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d294ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[21] + c->x[24]);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[1] = (uint64_t)(c->x[21] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x68ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d2b8ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x68ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x78ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[24] + c->x[8]);
    c->x[9] = (uint64_t)(c->x[9] - 0x10ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d53c;
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x60ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d2fcull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xd5a0ull);
    { uint64_t ea = c->sp + 0x70ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3710000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[10]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550d444;
    c->v[0] = 0x0ull;
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 48; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[30] = 0x700550d338ull; f_700550ac54(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d444;
    { uint64_t ea = c->sp + 0x880ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550d364;
    (void)(subs32(c, (uint32_t)c->x[8], 0x23ull));
    if (COND_EQ(c)) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
L_700550d350:;
    { uint64_t ea = c->x[9]; uint64_t v = LD64(ea); c->x[9] = c->x[9] + 56; c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[21])));
    if (COND_EQ(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700550d350;
L_700550d364:;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, 0ull); }
    c->x[1] = (uint64_t)(c->x[9] + 0xb0ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550d53c;
    c->x[9] = (uint64_t)(c->x[9] + 0xc8ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[1])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[9] = (uint64_t)(ROR64(c->x[9], 39) & 0x1ffffffull);
    if (c->x[9] != 0) goto L_700550d53c;
    { uint64_t ea = c->x[20] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x18ull);
    c->pc = c->x[8]; c->x[30] = 0x700550d3a4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + c->x[24]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[23])));
    if (COND_CC(c)) goto L_700550d53c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d53c;
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d3d4ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d53c;
    c->x[8] = (uint64_t)(0ull | 0ull);
L_700550d3dc:;
    { uint64_t ea = c->x[29] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + c->x[8]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    (void)(subs64(c, c->x[8], 0xcull));
    if (COND_NE(c)) goto L_700550d3dc;
    { uint64_t ea = c->sp + 0x24ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x35ull);
    (void)(adds32(c, (uint32_t)c->x[9], 0x5ull));
    if (COND_CC(c)) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x25ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_700550d53c;
    { uint64_t ea = c->sp + 0x880ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x38ull);
    { uint64_t ea = c->sp + 48; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x30ull);
    c->x[10] = (uint64_t)(c->x[10] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[11]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x880ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 32; ST64(ea, c->x[9]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->x[10] + 48; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, 0u); }
L_700550d444:;
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[8] + c->x[25]);
    { uint64_t ea = c->sp + 0x78ull; ST64(ea, c->x[9]); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_700550d238;
    goto L_700550d21c;
L_700550d460:;
    { uint64_t ea = c->sp + 0x880ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[8], 0x19ull));
    if (COND_CC(c)) goto L_700550d540;
    c->x[9] = (uint32_t)(0xcccdull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0xcccc0000ull);
    c->x[9] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 34) & 0x3fffffffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + ((uint32_t)c->x[9] << 2));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[9]);
    if ((uint32_t)c->x[9] != 0) goto L_700550d540;
    c->x[10] = (uint64_t)(c->sp + 0xa0ull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0x38ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x68ull);
    c->x[12] = (uint32_t)(0x1ull);
L_700550d4a0:;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    c->x[14] = (uint32_t)(0u | 0u);
    c->x[13] = (uint32_t)(0u | 0u);
    c->x[15] = (uint64_t)(c->x[15] + c->x[9] * c->x[11]);
    c->x[16] = (uint64_t)(0ull | c->x[8]);
    c->x[17] = (uint64_t)(0ull | c->x[10]);
    { uint64_t ea = c->x[15] + 0x28ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
L_700550d4bc:;
    { uint64_t ea = c->x[17] - 8; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    (void)(subs64(c, c->x[18], (uint64_t)(c->x[15])));
    if (COND_NE(c)) goto L_700550d4e0;
    { uint64_t ea = c->x[17] + 0x0ull; uint64_t v = LD32(ea); c->x[18] = (uint64_t)(v); }
    c->x[18] = (uint32_t)((uint32_t)c->x[12] << ((uint32_t)c->x[18] & 31));
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[18] & (uint32_t)c->x[13])));
    if (COND_NE(c)) goto L_700550d53c;
    c->x[13] = (uint32_t)((uint32_t)c->x[18] | (uint32_t)c->x[13]);
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + 0x1ull);
L_700550d4e0:;
    c->x[16] = (uint64_t)(subs64(c, c->x[16], 0x1ull));
    c->x[17] = (uint64_t)(c->x[17] + 0x38ull);
    if (COND_NE(c)) goto L_700550d4bc;
    (void)(subs32(c, (uint32_t)c->x[14], 0x5ull));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_700550d540;
    (void)(subs32(c, (uint32_t)c->x[13], 0x1full));
    if (COND_NE(c)) goto L_700550d540;
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550d4a0;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->sp + 0xa0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x884ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x700550d520ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d540;
    c->x[1] = (uint64_t)(c->sp + 0xa0ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint32_t)(0x850ull);
    c->x[30] = 0x700550d534ull; f_700550ff34(c);
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550d540;
L_700550d53c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550d540:;
    c->sp = (uint64_t)(c->sp + 0x8f0ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 96; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700550eb08(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[21] == 0) goto L_700550eb78;
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    if (c->x[1] == 0) goto L_700550eb78;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    if (c->x[2] == 0) goto L_700550eb78;
    { uint64_t ea = c->x[19] + 0x940ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550eb6c;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550eb6c;
    { uint64_t ea = c->x[19] + 0x58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550eb6c;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_700550eb78;
L_700550eb6c:;
    { uint64_t ea = c->x[19] + 0x838ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550eb94;
L_700550eb74:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550eb78:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
L_700550eb94:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x950ull);
    c->x[30] = 0x700550eba4ull; f_700550ff50(c);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0x50ull);
    c->x[30] = 0x700550ebb4ull; f_700550ff34(c);
    { uint64_t ea = c->x[20] + 24; c->v[0] = LD128(ea); }
    c->x[2] = (uint64_t)(c->x[19] + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[19] + 0x8a0ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x700550ebccull; f_700550ce48(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550eb78;
    c->x[1] = (uint64_t)(c->x[19] + 0x50ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550ebdcull; f_700550e020(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550eb78;
    { uint64_t ea = c->x[19] + 0x830ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550ec30;
    c->x[24] = (uint64_t)(0ull | 0ull);
    /* hint */
    c->x[22] = (uint64_t)(0x7005511061ull);
    c->x[25] = (uint32_t)(0x98ull);
    c->x[23] = (uint64_t)(0x7005511000ull);
    c->x[23] = (uint64_t)(c->x[23] + 0xdfull);
L_700550ec00:;
    { uint64_t ea = c->x[19] + c->x[25]; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint64_t)(0ull | c->x[23]);
    c->x[4] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700550ec18ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550eb78;
    { uint64_t ea = c->x[19] + 0x830ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[24] = (uint64_t)(c->x[24] + 0x1ull);
    c->x[25] = (uint64_t)(c->x[25] + 0x38ull);
    (void)(subs64(c, c->x[24], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_700550ec00;
L_700550ec30:;
    c->x[26] = (uint32_t)(0xb30ull);
    c->x[25] = (uint64_t)(0xffffffffffffffb8ull);
    c->x[22] = (uint64_t)(0x7005511000ull);
    c->x[22] = (uint64_t)(c->x[22] + 0xbaull);
    c->x[26] = (uint32_t)((c->x[26] & 0xffffffff0000ffffull) | 0x3720000ull);
    /* hint */
    c->x[23] = (uint64_t)(0x7005511061ull);
L_700550ec4c:;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    (void)(logic64(c, c->x[8] & 0x7ull));
    if (COND_NE(c)) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[25] + c->x[8]);
    c->x[1] = (uint64_t)(c->x[8] + 0xa8ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[19] + c->x[25]);
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[24] = (uint64_t)(c->x[8] + 0x8f8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[2] = (uint64_t)(0ull | c->x[24]);
    c->pc = c->x[9]; c->x[30] = 0x700550ec88ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550eb74;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[1] & 0x7ull);
    if (c->x[8] != 0) goto L_700550eb74;
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550ecb0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550eb74;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[26]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_700550eb74;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x18ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550eb74;
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550ecf0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550eb74;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_700550eb74;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[8] + 0x20ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[8] != 0) goto L_700550eb74;
    c->x[8] = (uint64_t)(c->x[19] + c->x[25]);
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[24] = (uint64_t)(c->x[8] + 0x940ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[2] = (uint64_t)(0ull | c->x[24]);
    c->pc = c->x[9]; c->x[30] = 0x700550ed34ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550eb74;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint64_t)(0ull | c->x[23]);
    c->x[30] = 0x700550ed4cull; f_700550b444(c);
    if (c->x[0] == 0) goto L_700550eb78;
    c->x[25] = (uint64_t)(adds64(c, c->x[25], 0x8ull));
    if (COND_NE(c)) goto L_700550ec4c;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x940ull; ST32(ea, (uint32_t)c->x[0]); }
    goto L_700550eb78;
}

void f_700550f5e4(Cpu *c) {
    if (c->x[1] == 0) goto L_700550f7c4;
    { uint64_t ea = c->sp - 80; ST64(ea, VS64(8)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x380ull);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[0] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[23] = (uint64_t)(0x7005510000ull);
    c->x[23] = (uint64_t)(c->x[23] + 0xfe3ull);
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x198ull);
    c->x[3] = (uint64_t)(0ull | c->x[23]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550f62cull; f_700550b444(c);
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[24] = (uint64_t)(0ull | c->x[0]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x89ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->sp + 0x388ull; ST64(ea, 0ull); }
    c->x[30] = 0x700550f64cull; f_700550b444(c);
    { uint64_t ea = c->sp + 0x378ull; ST64(ea, 0ull); }
    if (c->x[24] == 0) goto L_700550f7cc;
    c->x[1] = (uint64_t)(c->x[24] + 0xe8ull);
    c->x[23] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550f7d0;
    c->x[8] = (uint64_t)(c->x[24] & 0x7ull);
    if (c->x[8] != 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x388ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550f680ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[23] == 0) goto L_700550f7d0;
    if ((uint32_t)c->x[8] == 0) goto L_700550f7d0;
    c->x[1] = (uint64_t)(c->x[23] + 0xe8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550f7d0;
    c->x[8] = (uint64_t)(c->x[23] & 0x7ull);
    if (c->x[8] != 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x378ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550f6b8ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x3f800000ull;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x11ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f6dcull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x69ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f700ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x3f800000ull;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x24ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f724ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x3f800000ull;
    { uint64_t ea = c->sp + 0x378ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x33ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f748ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->sp + 0x378ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1bull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f76cull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[20] + 0x28ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 0x388ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xfebull);
    FP_SETS(0, fromint_s(c, VS32(0), 32, 1, 0));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f794ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x388ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700550f7ec;
    { uint64_t ea = c->x[20] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_EQ(c)) goto L_700550f7f4;
    (void)(subs32(c, (uint32_t)c->x[8], 0x3ull));
    if (COND_NE(c)) goto L_700550f7fc;
    c->x[8] = (uint32_t)(0x2ull);
    goto L_700550f808;
L_700550f7c4:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550f7cc:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550f7d0:;
    c->sp = (uint64_t)(c->sp + 0x380ull);
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; c->v[8] = LD64(ea); c->sp = c->sp + 80; }
    c->pc = 0; return;
L_700550f7ec:;
    c->x[8] = (uint32_t)(0u | 0u);
    goto L_700550f808;
L_700550f7f4:;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_700550f808;
L_700550f7fc:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    c->x[8] = (uint32_t)(0x3ull);
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u));
L_700550f808:;
    FP_SETS(0, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x57ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f824ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->sp + 0x388ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xfdcull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->v[8] = 0x0ull;
    c->x[30] = 0x700550f84cull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x388ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550f868;
    { uint64_t ea = c->x[19] + 0x944ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    FP_SETS(8, fromint_s(c, (uint32_t)c->x[8], 32, 1, 0));
L_700550f868:;
    c->v[0] = VS32(8);
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x6ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f884ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xe8ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xfe3ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f8a4ull; f_700550b444(c);
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->sp + 0x370ull; ST64(ea, 0ull); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x3ull));
    if (COND_NE(c)) goto L_700550f8c8;
    { uint64_t ea = c->x[20] + 0x34ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    c->x[23] = (uint32_t)((COND_CC(c)) ? 0u : (uint32_t)((uint32_t)c->x[9]));
    goto L_700550f8cc;
L_700550f8c8:;
    c->x[23] = (uint32_t)(0u | 0u);
L_700550f8cc:;
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[8] == 0) goto L_700550f7d0;
    (void)(subs32(c, (uint32_t)c->x[23], 0x4ull));
    if (COND_HI(c)) goto L_700550f7d0;
    c->x[1] = (uint64_t)(c->x[8] + 0xe8ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550f7d0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550f7d0;
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x370ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550f908ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    FP_SETS(0, fromint_s(c, (uint32_t)c->x[23], 32, 1, 0));
    { uint64_t ea = c->sp + 0x370ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xff9ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f92cull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x3f800000ull;
    { uint64_t ea = c->sp + 0x370ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xff6ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f950ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->sp + 0x370ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x48ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f974ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    (void)(subs32(c, (uint32_t)c->x[23], 0x0ull));
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550f994ull; f_700550b96c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    (void)(subs32(c, (uint32_t)c->x[22], 0x3ull));
    if (COND_EQ(c)) goto L_700550f9d0;
    (void)(subs32(c, (uint32_t)c->x[22], 0x5ull));
    if (COND_EQ(c)) goto L_700550f9b8;
    (void)(subs32(c, (uint32_t)c->x[22], 0x4ull));
    if (COND_NE(c)) goto L_700550f9d8;
    c->x[8] = (uint32_t)(0x1ull);
    goto L_700550f9f4;
L_700550f9b8:;
    (void)(subs32(c, (uint32_t)c->x[21], 0x2ull));
    if (COND_EQ(c)) goto L_700550f9e0;
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_NE(c)) goto L_700550f9e8;
    c->x[8] = (uint32_t)(0x2ull);
    goto L_700550f9f4;
L_700550f9d0:;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_700550f9f4;
L_700550f9d8:;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    goto L_700550fa00;
L_700550f9e0:;
    c->x[8] = (uint32_t)(0x3ull);
    goto L_700550f9f4;
L_700550f9e8:;
    (void)(subs32(c, (uint32_t)c->x[21], 0x6ull));
    c->x[8] = (uint32_t)(0x4ull);
    c->x[8] = (uint64_t)((COND_EQ(c)) ? c->x[8] : (uint64_t)(c->x[8] + 1));
L_700550f9f4:;
    /* hint */
    c->x[9] = (uint64_t)(0x70055121b0ull);
    c->x[0] = (uint64_t)(c->x[9] + (c->x[8] << 7));
L_700550fa00:;
    c->x[1] = (uint64_t)(c->sp + 0x23eull);
    c->x[30] = 0x700550fa08ull; f_700550fe9c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1c9ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fa2cull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x12aull);
    c->x[4] = (uint64_t)(c->sp + 0x23eull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fa50ull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1c9ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550fa74ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x12aull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550fa98ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    /* hint */
    c->x[1] = (uint64_t)(0x70055124b0ull);
    c->x[0] = (uint64_t)(c->sp + 0x136ull);
    c->x[2] = (uint32_t)(0x108ull);
    c->x[22] = (uint64_t)(c->sp + 0x136ull);
    c->x[30] = 0x700550fab4ull; f_700550ff34(c);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(0x7005510000ull);
    c->x[21] = (uint64_t)(c->x[21] + 0xfe3ull);
L_700550fac0:;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[22] + c->x[23]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550fad4ull; f_700550fcf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->x[23] = (uint64_t)(c->x[23] + 0x18ull);
    (void)(subs64(c, c->x[23], 0x108ull));
    if (COND_NE(c)) goto L_700550fac0;
    { uint64_t ea = c->x[20] + 0x24ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x120ull);
    c->x[30] = 0x700550faf0ull; f_700550fe20(c);
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x171ull);
    c->x[4] = (uint64_t)(c->sp + 0x120ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fb10ull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x10ull; uint64_t v = LD64(ea); c->x[4] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xa8ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fb34ull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    /* hint */
    c->x[1] = (uint64_t)(0x70055125b8ull);
    c->x[0] = (uint64_t)(c->sp + 0x8ull);
    c->x[2] = (uint32_t)(0x118ull);
    c->x[22] = (uint64_t)(c->sp + 0x8ull);
    c->x[30] = 0x700550fb50ull; f_700550ff34(c);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(0x7005510000ull);
    c->x[21] = (uint64_t)(c->x[21] + 0xfe3ull);
L_700550fb5c:;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[3] = (uint64_t)(c->x[22] + c->x[23]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550fb70ull; f_700550fcf8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f7d0;
    c->x[23] = (uint64_t)(c->x[23] + 0x28ull);
    (void)(subs64(c, c->x[23], 0x118ull));
    if (COND_NE(c)) goto L_700550fb5c;
    { uint64_t ea = c->x[19] + 0x8a8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x2cull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0x7005510000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0xfe3ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x147ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fba0ull; f_700550fd48(c);
    goto L_700550f7d0;
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
