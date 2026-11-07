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

void f_7005312e44(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[8] + 0x2000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x4000ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[0])));
    if (COND_NE(c)) (void)subs64(c, c->x[8], c->x[0]); else c->nzcv = 0x40000000ull;
    if (COND_NE(c)) goto L_7005312f4c;
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
    if (c->x[8] == 0) goto L_7005312ed8;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xffffff7full);
    { uint64_t ea = c->x[8] + 0xd4ull; ST32(ea, (uint32_t)c->x[9]); }
L_7005312ed8:;
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x104ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x1ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x105ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x2ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x106ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x3ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x107ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x108ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x5ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x109ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x6ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10aull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x7ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10bull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10cull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10dull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10eull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[2] + 0xbull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10full; ST8(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_7005312f5c;
    { uint64_t ea = c->x[8] + 0xd4ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfffffeffull);
    { uint64_t ea = c->x[8] + 0xd4ull; ST32(ea, (uint32_t)c->x[9]); }
    c->pc = 0; return;
L_7005312f4c:;
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[8] + 0xf58ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; ST32(ea, (uint32_t)c->x[9]); }
L_7005312f5c:;
    c->pc = 0; return;
}

void f_7005313274(Cpu *c) {
    c->x[0] = (uint32_t)(0xffffffffull);
    c->pc = 0; return;
}

void f_700531327c(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x8000ull);
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

void f_700550d560(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if (c->x[9] == 0) goto L_700550d62c;
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[10] = (uint32_t)(0x14ull);
    /* hint */
    c->x[20] = (uint64_t)(0x7005511948ull);
    c->x[21] = (uint64_t)(c->x[20] + (uint64_t)(uint32_t)c->x[1] * (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[1]);
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[10] + c->x[11]);
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[1] - 0x10000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffefull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_700550d620;
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[3] = (uint32_t)(0x10ull);
    c->pc = c->x[9]; c->x[30] = 0x700550d5c0ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550d620;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x4ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550d61c;
    c->x[9] = (uint32_t)(0u | (uint32_t)c->x[19]);
    c->x[10] = (uint32_t)(0x14ull);
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(c->x[20] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[10]);
    c->x[10] = (uint64_t)(c->sp + 0x0ull);
    c->x[10] = (uint64_t)(c->x[10] | 0x1ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x5ull);
L_700550d5f0:;
    c->x[11] = (uint64_t)(0ull | c->x[8]);
    (void)(subs64(c, c->x[8], 0xfull));
    if (COND_EQ(c)) goto L_700550d610;
    { uint64_t ea = c->x[10] + c->x[11]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[12])));
    c->x[8] = (uint64_t)(c->x[11] + 0x1ull);
    if (COND_EQ(c)) goto L_700550d5f0;
L_700550d610:;
    (void)(subs64(c, c->x[11], 0xeull));
    c->x[0] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550d620;
L_700550d61c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550d620:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
L_700550d62c:;
    c->pc = 0; return;
}

void f_700550d774(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[23] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[24] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)(c->x[1] & 0x7ull);
    c->x[23] = (uint64_t)((c->x[23] & 0xffffffffffff0000ull) | 0x8ull);
    c->x[24] = (uint64_t)((c->x[24] & 0xffffffffffff0000ull) | 0x0ull);
    { uint64_t ea = c->sp + 16; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[8] = (uint64_t)(c->x[1] + c->x[23]);
    c->x[8] = (uint64_t)(c->x[8] + 0x20ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_CS(c)) (void)subs64(c, c->x[9], 0x0ull); else c->nzcv = 0x0ull;
    if (COND_NE(c)) goto L_700550d8ac;
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(c->x[1] + 0x28ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550d7d8ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d8ac;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[26] = (uint32_t)(0u | 0u);
    c->x[25] = (uint64_t)(0ull | 0ull);
    c->x[27] = (uint64_t)(c->x[20] + 0x20ull);
    c->x[28] = (uint32_t)(0x40ull);
    c->x[29] = (uint64_t)(0ull | 0xffffff8000000000ull);
L_700550d7f4:;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[27])));
    if (COND_EQ(c)) goto L_700550d8d0;
    c->x[9] = (uint64_t)(c->x[8] + c->x[29]);
    c->x[0] = (uint64_t)(0ull | 0ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[24])));
    if (COND_CC(c)) goto L_700550d8b0;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_700550d8b0;
    c->x[9] = (uint64_t)(c->x[8] + c->x[23]);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[24])));
    if (COND_CC(c)) goto L_700550d8b0;
    c->x[1] = (uint64_t)(c->x[8] + 0x8ull);
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d834ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d8ac;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD64(ea); c->x[22] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    c->x[8] = (uint64_t)(c->x[23] + c->x[22]);
    c->x[8] = (uint64_t)(c->x[8] + 0x8ull);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[24])));
    if (COND_CC(c)) goto L_700550d8ac;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_700550d8ac;
    c->x[1] = (uint64_t)(c->x[22] + 0x10ull);
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[3] = (uint32_t)(0x8ull);
    c->x[30] = 0x700550d86cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550d8ac;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[20])));
    if (COND_NE(c)) goto L_700550d8ac;
    c->x[22] = (uint64_t)(c->x[22] - 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x700550d890ull; f_700550d630(c);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[25] = (uint64_t)((COND_NE(c)) ? c->x[22] : (uint64_t)(c->x[25]));
    c->x[26] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[26] : (uint32_t)((uint32_t)c->x[26] + 1));
    c->x[28] = (uint32_t)(subs32(c, (uint32_t)c->x[28], 0x1ull));
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    if (COND_NE(c)) goto L_700550d7f4;
L_700550d8ac:;
    c->x[0] = (uint64_t)(0ull | 0ull);
L_700550d8b0:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
    c->pc = 0; return;
L_700550d8d0:;
    (void)(subs32(c, (uint32_t)c->x[26], 0x1ull));
    c->x[0] = (uint64_t)((COND_EQ(c)) ? c->x[25] : (uint64_t)(0ull));
    goto L_700550d8b0;
}

void f_700550db98(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[2], 0x1ull));
    if (COND_LS(c)) goto L_700550dba8;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550dba8:;
    c->sp = (uint64_t)(c->sp - 0xa0ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550dbd4ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550df6c;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550df68;
    if ((uint32_t)c->x[21] == 0) goto L_700550dc10;
    { uint64_t ea = c->x[20] + 0x809ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550df68;
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700550df68;
    { uint64_t ea = c->x[19] + 8; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[1] = (uint64_t)(a); c->x[2] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700550dc00ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550df6c;
    { uint64_t ea = c->x[20] + 0x84full; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    if (COND_CC(c)) goto L_700550df68;
L_700550dc10:;
    { uint64_t ea = c->x[20] + 24; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[20] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[23] = (uint64_t)(c->sp + 0x20ull);
    c->x[24] = (uint64_t)(c->sp + 0x4cull);
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[8]); }
L_700550dc30:;
    { uint64_t ea = c->x[23] + (c->x[22] << 3); uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[24] + c->x[22]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->x[30] = 0x700550dc48ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550df6c;
    c->x[22] = (uint64_t)(c->x[22] + 0x1ull);
    (void)(subs64(c, c->x[22], 0x3ull));
    if (COND_NE(c)) goto L_700550dc30;
    if ((uint32_t)c->x[21] == 0) goto L_700550dd50;
    { uint64_t ea = c->x[20] + 0x7eeull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700550dc84;
    { uint64_t ea = c->sp + 0x4dull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x4eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x1ull);
    { uint64_t ea = c->x[20] + 0x7ecull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x7edull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x7eeull; ST8(ea, (uint32_t)c->x[8]); }
L_700550dc84:;
    { uint64_t ea = c->x[20] + 0x84full; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 27; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 0x18ull; ST32(ea, 0u); }
    if ((uint32_t)c->x[8] == 0) goto L_700550dd88;
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[23] = (uint64_t)(c->x[20] + 0x38ull);
    c->x[24] = (uint64_t)(c->x[20] + 0x7f0ull);
    c->x[25] = (uint64_t)(c->x[20] + 0x810ull);
    c->x[26] = (uint32_t)(0x38ull);
    c->x[27] = (uint64_t)(c->sp + 0x18ull);
L_700550dcac:;
    { uint64_t ea = c->x[25] + (c->x[22] << 3); uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | 0ull);
    c->x[28] = (uint32_t)(0u | 0u);
L_700550dcb8:;
    { uint64_t ea = c->x[24] + c->x[8]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x5ull);
    c->x[9] = (uint64_t)(c->x[23] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[26]);
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[21])));
    c->x[28] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[28] : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[8], 0x19ull));
    if (COND_NE(c)) goto L_700550dcb8;
    { uint64_t ea = c->x[20] + 0x18ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700550dce8ull; f_700550d698(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550dd8c;
    c->x[1] = (uint64_t)(c->x[21] + 0x58ull);
    c->x[2] = (uint64_t)(c->x[27] + c->x[22]);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550dd00ull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550dd8c;
    { uint64_t ea = c->x[27] + c->x[22]; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[28] & 0xffull);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] & 0xfeull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[10]);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    { uint64_t ea = c->sp + 0x48ull; ST8(ea, (uint32_t)c->x[9]); }
    if (COND_EQ(c)) goto L_700550dd3c;
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[21] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x48ull);
    c->x[3] = (uint32_t)(0x1ull);
    c->pc = c->x[8]; c->x[30] = 0x700550dd38ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550dd8c;
L_700550dd3c:;
    { uint64_t ea = c->x[20] + 0x84full; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(c->x[22] + 0x1ull);
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_CC(c)) goto L_700550dcac;
    goto L_700550dd8c;
L_700550dd50:;
    { uint64_t ea = c->sp + 0x4cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x7eeull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[8] & 0xfeull);
    { uint64_t ea = c->sp + 0x4dull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x48ull; ST8(ea, (uint32_t)c->x[10]); }
    if ((uint32_t)c->x[9] == 0) goto L_700550df8c;
    { uint64_t ea = c->sp + 0x4eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x7ecull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfeull);
    { uint64_t ea = c->x[20] + 0x7edull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfffffffeull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | (uint32_t)c->x[10]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[11]);
    goto L_700550df90;
L_700550dd88:;
    c->x[22] = (uint32_t)(0u | 0u);
L_700550dd8c:;
    { uint64_t ea = c->x[20] + 0x84full; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[22], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_700550de48;
    { uint64_t ea = c->sp + 0x4cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x4dull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 0x4eull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    /* hint */
    c->x[23] = (uint64_t)(0x700551193cull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfeull);
    c->x[24] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 0x48ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[10] & 0xfeull);
    c->x[25] = (uint64_t)(c->sp + 0x48ull);
    { uint64_t ea = c->sp + 0x49ull; ST8(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp + 0x4aull; ST8(ea, (uint32_t)c->x[8]); }
L_700550ddd0:;
    { uint64_t ea = c->x[23] + c->x[21]; uint64_t v = LD32(ea); c->x[26] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x14ull; ST8(ea, 0u); }
    c->x[30] = 0x700550dde4ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550de9c;
    { uint64_t ea = c->x[24] + (c->x[26] << 3); uint64_t v = LD64(ea); c->x[27] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(c->x[25] + c->x[26]);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[27] + 0x58ull);
    c->pc = c->x[8]; c->x[30] = 0x700550de04ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550de9c;
    c->x[1] = (uint64_t)(c->x[27] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x14ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550de1cull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550de9c;
    { uint64_t ea = c->sp + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + c->x[26]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550de9c;
    c->x[21] = (uint64_t)(c->x[21] + 0x4ull);
    (void)(subs64(c, c->x[21], 0xcull));
    if (COND_NE(c)) goto L_700550ddd0;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x7e8ull; ST32(ea, (uint32_t)c->x[0]); }
    goto L_700550df6c;
L_700550de48:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550de54ull; f_700550d934(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550df6c;
    if ((uint32_t)c->x[22] == 0) goto L_700550df6c;
    c->x[21] = (uint64_t)(c->x[20] + 0x810ull);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[20] = (uint64_t)(c->sp + 0x18ull);
L_700550de70:;
    { uint64_t ea = c->x[21]; uint64_t v = LD64(ea); c->x[21] = c->x[21] + 8; c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[9] + 0x58ull);
    c->pc = c->x[8]; c->x[30] = 0x700550de8cull; rt_dispatch(c); c->pc = 0;
    c->x[22] = (uint64_t)(subs64(c, c->x[22], 0x1ull));
    c->x[20] = (uint64_t)(c->x[20] + 0x1ull);
    if (COND_NE(c)) goto L_700550de70;
    goto L_700550df68;
L_700550de9c:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550dea8ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550df18;
    { uint64_t ea = c->sp + 0x4cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x0ull; c->v[0] = LD128(ea); }
    c->x[2] = (uint64_t)(c->sp + 0x14ull);
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x1ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xfeull);
    { uint64_t ea = c->sp + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(VS64(0));
    c->x[1] = (uint64_t)(c->x[8] + 0x58ull);
    c->pc = c->x[9]; c->x[30] = 0x700550ded8ull; rt_dispatch(c); c->pc = 0;
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    c->x[9] = (uint64_t)(c->sp + 0x4cull);
    c->x[23] = (uint64_t)(0ull | 0ull);
    c->x[24] = (uint64_t)(c->x[8] | 0x8ull);
    c->x[21] = (uint64_t)(c->x[9] | 0x1ull);
L_700550deec:;
    { uint64_t ea = c->x[24] + c->x[23]; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[9] + 0x58ull);
    c->pc = c->x[8]; c->x[30] = 0x700550df08ull; rt_dispatch(c); c->pc = 0;
    c->x[23] = (uint64_t)(c->x[23] + 0x8ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    (void)(subs64(c, c->x[23], 0x10ull));
    if (COND_NE(c)) goto L_700550deec;
L_700550df18:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550df24ull; f_700550d934(c);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    if ((uint32_t)c->x[8] == 0) goto L_700550df6c;
    if ((uint32_t)c->x[22] == 0) goto L_700550df6c;
    c->x[21] = (uint64_t)(c->x[20] + 0x810ull);
    c->x[22] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[20] = (uint64_t)(c->sp + 0x18ull);
L_700550df40:;
    { uint64_t ea = c->x[21]; uint64_t v = LD64(ea); c->x[21] = c->x[21] + 8; c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[9] + 0x58ull);
    c->pc = c->x[8]; c->x[30] = 0x700550df5cull; rt_dispatch(c); c->pc = 0;
    c->x[22] = (uint64_t)(subs64(c, c->x[22], 0x1ull));
    c->x[20] = (uint64_t)(c->x[20] + 0x1ull);
    if (COND_NE(c)) goto L_700550df40;
L_700550df68:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550df6c:;
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xa0ull);
    c->pc = 0; return;
L_700550df8c:;
    { uint64_t ea = c->sp + 0x4eull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
L_700550df90:;
    c->x[22] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint64_t)(c->sp + 0x48ull);
    c->x[23] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 0x49ull; ST8(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x4aull; ST8(ea, (uint32_t)c->x[9]); }
L_700550dfa4:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->sp + 0x18ull; ST8(ea, 0u); }
    c->x[30] = 0x700550dfb4ull; f_700550d934(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550df68;
    { uint64_t ea = c->x[23] + c->x[22]; uint64_t v = LD64(ea); c->x[24] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[2] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x1ull);
    c->x[1] = (uint64_t)(c->x[24] + 0x58ull);
    c->pc = c->x[8]; c->x[30] = 0x700550dfd4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550df68;
    c->x[1] = (uint64_t)(c->x[24] + 0x58ull);
    c->x[2] = (uint64_t)(c->sp + 0x18ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550dfecull; f_700550d8dc(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550df68;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_700550df68;
    c->x[22] = (uint64_t)(c->x[22] + 0x8ull);
    c->x[21] = (uint64_t)(c->x[21] + 0x1ull);
    (void)(subs64(c, c->x[22], 0x18ull));
    if (COND_NE(c)) goto L_700550dfa4;
    { uint64_t ea = c->x[20] + 0x7e8ull; ST32(ea, 0u); }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x7eeull; ST8(ea, 0u); }
    goto L_700550df6c;
}

void f_700550ed64(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[4]);
    c->x[3] = (uint64_t)(0ull | c->x[20]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550ed84ull; f_700550b444(c);
    if (c->x[0] == 0) goto L_700550eda4;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[19]);
    c->x[30] = 0x700550ed9cull; f_700550b96c(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
L_700550eda4:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700550edb0(Cpu *c) {
    if (c->x[0] == 0) goto L_700550edd4;
    c->x[8] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint32_t)(0u | 0u);
    if (c->x[1] == 0) goto L_700550ee6c;
    { uint64_t ea = c->x[0] + 0x940ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_700550ee6c;
    { uint64_t ea = c->x[1] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x7ull));
    if (COND_LS(c)) goto L_700550eddc;
L_700550edd4:;
    c->x[2] = (uint32_t)(0u | 0u);
    goto L_700550ee6c;
L_700550eddc:;
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->x[1] + 0x98ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[1] + (c->x[9] << 2));
    { uint64_t ea = c->x[0] + 8; c->v[0] = LD128(ea); }
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    c->x[9] = (uint64_t)(c->x[10] + (c->x[9] << 4));
    { uint64_t ea = c->x[11] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x851full);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x51eb0000ull);
    { uint64_t ea = c->x[9] + 0x24ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x948ull; ST32(ea, (uint32_t)c->x[10]); }
    /* hint */
    c->x[10] = (uint64_t)(0x700550ee74ull);
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x18ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[0]); ST64(ea + 8, c->x[10]); }
    /* hint */
    c->x[10] = (uint64_t)(0x700550eec4ull);
    c->x[9] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[11]);
    /* hint */
    c->x[11] = (uint64_t)(0x700550eeb8ull);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[11]); ST64(ea + 8, c->x[10]); }
    /* hint */
    c->x[10] = (uint64_t)(0x700550f1e4ull);
    c->x[9] = (uint64_t)(ROR64(c->x[9], 35) & 0x1fffffffull);
    { uint64_t ea = c->x[0] + 0x94cull; ST32(ea, (uint32_t)c->x[9]); }
    /* hint */
    c->x[9] = (uint64_t)(0x700550f5e4ull);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[10]); ST64(ea + 8, c->x[9]); }
    c->x[30] = 0x700550ee60ull; f_700550a5fc(c);
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->sp = (uint64_t)(c->sp + 0x50ull);
L_700550ee6c:;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->pc = 0; return;
}

void f_700550ee74(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x940ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550eeb0;
    { uint64_t ea = c->x[0] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[1])));
    if (COND_NE(c)) goto L_700550eeb0;
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_NE(c)) goto L_700550eeb0;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 56; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->pc = c->x[8]; c->x[30] = 0x700550eea0ull; rt_dispatch(c); c->pc = 0;
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 16; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
L_700550eeb0:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_700550eeb8(Cpu *c) {
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[1] = (uint64_t)(c->x[0] + 0x50ull);
    f_700550db98(c); return;
}

void f_700550eec4(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[1], 0x7ull));
    if (COND_LS(c)) goto L_700550eed4;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550eed4:;
    c->sp = (uint64_t)(c->sp - 0xb0ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 144; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 160; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[1] = (uint32_t)(0x12ull);
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700550ef04ull; f_700550fbd8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x13ull);
    c->x[30] = 0x700550ef14ull; f_700550fbd8(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    c->v[0] = 0x40c00000ull;
    { uint64_t ea = c->x[19] + 0x8a0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x39ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550ef38ull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    c->v[0] = 0x0ull;
    { uint64_t ea = c->x[19] + 0x8a0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005510000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xffdull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550ef5cull; f_700550ba18(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    { uint64_t ea = c->x[19] + 0x8a0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x118ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700550ef80ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    { uint64_t ea = c->x[19] + 0x8a0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    /* hint */
    c->x[2] = (uint64_t)(0x7005511061ull);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0x1d3ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[4] = (uint32_t)(0x1ull);
    c->x[30] = 0x700550efa4ull; f_700550ed64(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1b8;
    { uint64_t ea = c->x[19] + 0x944ull; ST32(ea, (uint32_t)c->x[20]); }
    if (c->x[21] == 0) goto L_700550f1b4;
    c->x[11] = (uint64_t)(0ull | 0ull);
L_700550efb4:;
    { uint64_t ea = c->x[21] + (c->x[11] << 1); uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550efcc;
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x99ull));
    if (COND_NE(c)) goto L_700550efb4;
    goto L_700550f1b4;
L_700550efcc:;
    (void)(subs64(c, c->x[11], 0x14ull));
    if (COND_HI(c)) goto L_700550f1b4;
    { uint64_t ea = c->x[19] + 0x94cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x9ull));
    if (COND_HI(c)) goto L_700550f1b4;
    { uint64_t ea = c->x[19] + 0x948ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_CS(c)) goto L_700550f1b4;
    (void)(subs32(c, (uint32_t)c->x[11], 0x2ull));
    c->x[9] = (uint32_t)(0x2ull);
    c->x[9] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[11] : (uint32_t)((uint32_t)c->x[9]));
    if (c->x[11] == 0) goto L_700550f018;
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint64_t)(c->sp + 0x10ull);
L_700550f004:;
    { uint64_t ea = c->x[21] + (c->x[11] << 1); uint64_t v = LD16(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[12] + (c->x[11] << 1); ST16(ea, (uint32_t)c->x[13]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[9])));
    if (COND_CC(c)) goto L_700550f004;
L_700550f018:;
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + 0x31ull);
    c->x[12] = (uint64_t)(c->sp + 0x10ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint64_t ea = c->x[12] + (c->x[9] << 1); ST16(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[19] + 0x8f8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[13] = (uint32_t)(0x2full);
    { uint64_t ea = c->x[12] + ((uint64_t)(uint32_t)c->x[11] << 1); ST16(ea, (uint32_t)c->x[13]); }
    c->x[11] = (uint32_t)((uint32_t)c->x[9] + 0x2ull);
    c->x[1] = (uint64_t)(c->x[10] + 0x18ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x3ull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x30ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    { uint64_t ea = c->x[12] + ((uint64_t)(uint32_t)c->x[11] << 1); ST16(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[12] + ((uint64_t)(uint32_t)c->x[9] << 1); ST16(ea, 0u); }
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    if (COND_CC(c)) goto L_700550f1dc;
    c->x[8] = (uint64_t)(c->x[10] & 0x7ull);
    if (c->x[8] != 0) goto L_700550f1dc;
    c->x[28] = (uint64_t)(c->x[19] + 0x8f8ull);
    c->x[27] = (uint32_t)(0x9940ull);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[21] = (uint64_t)(0ull | 0ull);
    c->x[25] = (uint64_t)(c->x[19] + 0x8b0ull);
    c->x[26] = (uint32_t)(0u | (uint32_t)c->x[20]);
    c->x[27] = (uint32_t)((c->x[27] & 0xffffffff0000ffffull) | 0x2110000ull);
    /* hint */
    c->x[20] = (uint64_t)(0x7005511061ull);
    c->x[29] = (uint32_t)(0x1ull);
    c->x[22] = (uint64_t)(c->sp + 0x10ull);
    c->x[24] = (uint64_t)(0ull | c->x[28]);
L_700550f094:;
    { uint64_t ea = c->x[19] + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[0] = (uint64_t)(a); c->x[8] = (uint64_t)(b); }
    c->x[2] = (uint64_t)(c->sp + 0x8ull);
    c->x[3] = (uint32_t)(0x8ull);
    c->pc = c->x[8]; c->x[30] = 0x700550f0a4ull; rt_dispatch(c); c->pc = 0;
    if ((uint32_t)c->x[0] == 0) goto L_700550f1dc;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    (void)(subs64(c, c->x[21], 0x8ull));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550f0c0ull; f_700550b96c(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1dc;
    (void)(subs64(c, c->x[21], 0x8ull));
    if (COND_EQ(c)) goto L_700550f1d8;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    /* hint */
    c->x[9] = (uint64_t)(0x7005511b78ull);
    { uint64_t ea = c->x[25] + (c->x[21] << 3); uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + (c->x[21] << 2); uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + c->x[27]);
    c->pc = c->x[8]; c->x[30] = 0x700550f0e8ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + (c->x[21] << 3); uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[26])));
    c->x[1] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[29] : (uint32_t)((uint32_t)c->x[29] + 1));
    c->x[8] = (uint64_t)(c->x[27] + c->x[8]);
    c->x[8] = (uint64_t)(c->x[8] + 0x14ull);
    c->pc = c->x[8]; c->x[30] = 0x700550f104ull; rt_dispatch(c); c->pc = 0;
    (void)(subs64(c, c->x[21], (uint64_t)(c->x[26])));
    if (COND_NE(c)) goto L_700550f178;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint64_t)(0x7005511000ull);
    c->x[3] = (uint64_t)(c->x[3] + 0xbaull);
    c->x[30] = 0x700550f128ull; f_700550fc88(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1dc;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x70ull);
    c->x[3] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550f144ull; f_700550b444(c);
    if (c->x[0] == 0) goto L_700550f178;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[4] = (uint64_t)(0ull | 0ull);
L_700550f150:;
    { uint64_t ea = c->x[22] + (c->x[4] << 1); uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550f164;
    c->x[4] = (uint64_t)(c->x[4] + 0x1ull);
    (void)(subs64(c, c->x[4], 0x99ull));
    if (COND_NE(c)) goto L_700550f150;
L_700550f164:;
    c->x[3] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700550f174ull; f_700550b148(c);
    if ((uint32_t)c->x[0] == 0) goto L_700550f1dc;
L_700550f178:;
    c->x[8] = (uint64_t)(c->x[21] + 0x1ull);
    (void)(subs64(c, c->x[21], 0x7ull));
    c->x[23] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[8], 0x9ull));
    if (COND_EQ(c)) goto L_700550f1dc;
    c->x[24] = (uint64_t)(c->x[28] + (c->x[8] << 3));
    { uint64_t ea = c->sp + 0x8ull; ST64(ea, 0ull); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[9] + 0x18ull);
    (void)(subs64(c, c->x[1], 0x10000ull));
    if (COND_CC(c)) goto L_700550f1dc;
    c->x[9] = (uint64_t)(c->x[9] & 0x7ull);
    c->x[21] = (uint64_t)(0ull | c->x[8]);
    if (c->x[9] == 0) goto L_700550f094;
    goto L_700550f1dc;
L_700550f1b4:;
    c->x[0] = (uint32_t)(0u | 0u);
L_700550f1b8:;
    { uint64_t ea = c->sp + 160; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 144; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xb0ull);
    c->pc = 0; return;
L_700550f1d8:;
    c->x[23] = (uint32_t)(0x1ull);
L_700550f1dc:;
    c->x[0] = (uint32_t)((uint32_t)c->x[23] & 0x1ull);
    goto L_700550f1b8;
}

void f_700550fcf8(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[3] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x700550fd14ull; f_700550b444(c);
    if (c->x[0] == 0) goto L_700550fd38;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[19]);
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x700550fd2cull; f_700550b96c(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_700550fd3c;
L_700550fd38:;
    c->x[0] = (uint32_t)(0x1ull);
L_700550fd3c:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 32; c->x[30] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_700550fe20(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x20ull);
    c->x[10] = (uint32_t)(0xcccdull);
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[11] = (uint32_t)(0xaull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xcccc0000ull);
    c->x[12] = (uint64_t)(c->sp + 0xcull);
L_700550fe38:;
    c->x[13] = (uint64_t)(0ull + (uint64_t)(uint32_t)c->x[0] * (uint64_t)(uint32_t)c->x[10]);
    c->x[8] = (uint32_t)(0u | (uint32_t)c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[8], 0xaull));
    c->x[0] = (uint64_t)(ROR64(c->x[13], 35) & 0x1fffffffull);
    c->x[13] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[0] * (uint32_t)c->x[11]);
    c->x[8] = (uint64_t)(c->x[9] + 0x1ull);
    c->x[13] = (uint32_t)((uint32_t)c->x[13] | 0x30ull);
    { uint64_t ea = c->x[12] + (c->x[9] << 1); ST16(ea, (uint32_t)c->x[13]); }
    if (COND_CC(c)) goto L_700550fe68;
    (void)(subs64(c, c->x[9], 0x9ull));
    c->x[9] = (uint64_t)(0ull | c->x[8]);
    if (COND_CC(c)) goto L_700550fe38;
L_700550fe68:;
    c->x[9] = (uint64_t)(c->x[8] - 0x2ull);
    c->x[10] = (uint64_t)(c->x[8] - 0x1ull);
    c->x[11] = (uint64_t)(c->sp + 0xcull);
    c->x[12] = (uint64_t)(0ull | c->x[1]);
L_700550fe78:;
    { uint64_t ea = c->x[11] + ((uint64_t)(uint32_t)c->x[10] << 1); uint64_t v = LD16(ea); c->x[13] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] - 0x1ull);
    c->x[10] = (uint64_t)(c->x[10] - 0x1ull);
    (void)(adds64(c, c->x[9], 0x2ull));
    { uint64_t ea = c->x[12]; ST16(ea, (uint32_t)c->x[13]); c->x[12] = c->x[12] + 2; }
    if (COND_NE(c)) goto L_700550fe78;
    { uint64_t ea = c->x[1] + (c->x[8] << 1); ST16(ea, 0u); }
    c->sp = (uint64_t)(c->sp + 0x20ull);
    c->pc = 0; return;
}

void f_700550fe9c(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700550ff24;
    c->x[9] = (uint32_t)(0u | 0u);
    c->x[13] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint32_t)(0x1ull);
    c->x[11] = (uint32_t)(0xaull);
    c->x[12] = (uint32_t)(0x1ull);
L_700550feb8:;
    (void)(subs32(c, (uint32_t)c->x[8], 0x80ull));
    c->x[14] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[10] : (uint32_t)((uint32_t)c->x[10] + 1));
    (void)(subs32(c, (uint32_t)c->x[8], 0xaull));
    if (COND_EQ(c)) goto L_700550feec;
    c->x[15] = (uint32_t)((uint32_t)c->x[14] + (uint32_t)c->x[9]);
    (void)(subs32(c, (uint32_t)c->x[15], 0x2bull));
    if (COND_CC(c)) goto L_700550feec;
    (void)(subs64(c, c->x[13], 0x97ull));
    if (COND_HI(c)) goto L_700550ff1c;
    c->x[15] = (uint64_t)(c->x[13] + 0x1ull);
    c->x[9] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[1] + (c->x[13] << 1); ST16(ea, (uint32_t)c->x[11]); }
    c->x[13] = (uint64_t)(0ull | c->x[15]);
L_700550feec:;
    (void)(subs64(c, c->x[13], 0x97ull));
    if (COND_HI(c)) goto L_700550ff1c;
    { uint64_t ea = c->x[1] + (c->x[13] << 1); ST16(ea, (uint32_t)c->x[8]); }
    (void)(subs32(c, (uint32_t)c->x[8], 0xaull));
    c->x[15] = (uint64_t)(c->x[13] + 0x1ull);
    { uint64_t ea = c->x[0] + ((uint64_t)(uint32_t)c->x[12] << 1); uint64_t v = LD16(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + (uint32_t)c->x[14]);
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)((uint32_t)c->x[9]));
    c->x[13] = (uint64_t)(0ull | c->x[15]);
    if ((uint32_t)c->x[8] != 0) goto L_700550feb8;
    goto L_700550ff28;
L_700550ff1c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700550ff24:;
    c->x[15] = (uint64_t)(0ull | 0ull);
L_700550ff28:;
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[1] + (c->x[15] << 1); ST16(ea, 0u); }
    c->pc = 0; return;
}

void f_7005601800(Cpu *c) {
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
    c->x[30] = 0x700560184cull; f_7005607c00(c);
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
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->pc = 0x700043a04cull; return;
}

void f_7005603000(Cpu *c) {
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
    c->x[30] = 0x700560304cull; f_7005606c00(c);
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
    c->x[0] = (uint64_t)(c->x[19] + 0x24ull);
    c->pc = 0x7000b6d780ull; return;
}

void f_7005604800(Cpu *c) {
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
    if ((uint32_t)c->x[2] != 0) goto L_700560484c;
    c->x[30] = 0x700560484cull; f_7005609800(c);
L_700560484c:;
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
    { uint64_t ea = c->x[8] + 0x68ull; ST64(ea, c->x[1]); }
    c->pc = 0x7002ab6f68ull; return;
}

void f_7005605f00(Cpu *c) {
    c->x[8] = (uint64_t)(c->x[0] + 0x48ull);
    stl32(c->x[8], 0ull);
    c->pc = 0; return;
}

void f_7005606000(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x47ull));
    if (COND_CS(c)) goto L_7005606034;
    c->x[10] = (uint64_t)(c->x[1] + 0x100ull);
    c->x[10] = (uint64_t)(c->x[10] + ((uint64_t)(uint32_t)c->x[8] << 4));
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005606034;
    { uint64_t ea = c->x[10] + 0x4ull; c->v[0] = LD32(ea); }
    c->x[11] = (uint32_t)(0x34000000ull);
    c->v[1] = (uint32_t)c->x[11];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_700560607c;
L_7005606034:;
    c->x[8] = (uint32_t)(0x1ull);
    c->x[10] = (uint64_t)(c->x[1] + 0x110ull);
L_700560603c:;
    { uint64_t ea = c->x[10] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005606058;
    { uint64_t ea = c->x[10] + 0x4ull; c->v[0] = LD32(ea); }
    c->x[11] = (uint32_t)(0x34000000ull);
    c->v[1] = (uint32_t)c->x[11];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_HI(c)) goto L_700560607c;
L_7005606058:;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    c->x[10] = (uint64_t)(c->x[10] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x48ull));
    if (COND_CC(c)) goto L_700560603c;
    { uint64_t ea = c->x[0] + 0x164ull; ST32(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[0] + 0x154ull);
    { uint64_t ea = c->x[8] + 0; ST64(ea, 0ull); ST64(ea + 8, 0ull); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700560607c:;
    { uint64_t ea = c->x[0] + 0x154ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0x158ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[10] + 4; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[0] + 0x15cull);
    { uint64_t ea = c->x[12] + 0x0ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->x[10] + 0xcull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x164ull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
}

void f_7005607c00(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005607c24ull; f_7005605200(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005607c6c;
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005607c6c;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005607c6c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005607c50ull; f_7005605e00(c);
    { uint64_t ea = c->x[19] + 0x15cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x34ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[20] + 0x38ull; ST64(ea, c->x[19]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x30ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005607c6cull; f_7005605f00(c);
L_7005607c6c:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005608800(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[21] = (uint64_t)(0ull | c->x[1]);
    c->x[30] = 0x7005608828ull; f_7005605200(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005608948;
    c->x[20] = (uint64_t)(0x700560e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005608850;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005608848ull; f_7005606c00(c);
    { uint64_t ea = c->x[20] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005608948;
L_7005608850:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005608948;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608864ull; f_7005605e00(c);
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005608878;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608874ull; f_7005606800(c);
    goto L_7005608884;
L_7005608878:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608884ull; f_7005606400(c);
L_7005608884:;
    { uint64_t ea = c->x[19] + 0x154ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x158ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x15cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 108; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[20] + 0x74ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[20] + 0x78ull; ST32(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[19] + 0x15cull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[21] + 0x0ull; ST32(ea, VS32(0)); }
    c->x[22] = (uint32_t)(0x1ull);
    c->x[23] = (uint32_t)(0u | 0u);
    c->x[24] = (uint64_t)(c->x[20] + 0x110ull);
L_70056088b4:;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005608900;
    { uint64_t ea = c->x[24] + 0x4ull; c->v[0] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(0), 0);
    if (COND_LE(c)) goto L_7005608900;
    c->x[9] = (uint64_t)(c->x[21] + ((uint64_t)(uint32_t)c->x[22] << 3));
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x4ull; ST8(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] + (uint32_t)c->x[8]);
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[11] = (uint32_t)(ROR32((uint32_t)c->x[22], 5) & 0x7ffffffull);
    c->x[12] = (uint64_t)(c->x[21] + 0x244ull);
    { uint64_t ea = c->x[12] + ((uint64_t)(uint32_t)c->x[11] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x1ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] << ((uint32_t)c->x[22] & 31));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[10]);
    { uint64_t ea = c->x[12] + ((uint64_t)(uint32_t)c->x[11] << 2); ST32(ea, (uint32_t)c->x[9]); }
    c->x[23] = (uint32_t)((uint32_t)c->x[23] + 0x1ull);
L_7005608900:;
    c->x[22] = (uint32_t)((uint32_t)c->x[22] + 0x1ull);
    c->x[24] = (uint64_t)(c->x[24] + 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[22], 0x48ull));
    if (COND_CC(c)) goto L_70056088b4;
    { uint64_t ea = c->x[20] + 0x2cull; ST32(ea, (uint32_t)c->x[23]); }
    { uint64_t ea = c->x[20] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[20] + 0x14ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005608928ull; f_7005605f00(c);
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
L_7005608948:;
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 112; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_700560a800(Cpu *c) {
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
    c->x[30] = 0x700560a848ull; f_700560a000(c);
    if ((uint32_t)c->x[0] == 0) goto L_700560a8f0;
    { uint64_t ea = c->sp + 0x130ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0x134ull; ST32(ea, (uint32_t)c->x[1]); }
    { uint64_t ea = c->sp + 0x138ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[16] = (uint64_t)(0x700560e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x3a70ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20c0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x700560a874ull; rt_dispatch(c); c->pc = 0;
    c->x[11] = (uint64_t)(c->sp + 0x140ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x28ull);
    { uint64_t ea = c->sp + 0x130ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0; ST32(ea, (uint32_t)c->x[0]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x134ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 8; ST32(ea, 0u); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x138ull; c->v[0] = LD32(ea); }
    c->v[1] = 0x41f00000ull;
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    { uint64_t ea = c->x[11] + 0x10ull; ST32(ea, VS32(0)); }
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
    c->x[1] = (uint64_t)(c->sp + 0x28ull);
    { uint64_t ea = c->x[19] + 0x200ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | 0u);
    c->pc = 0x700081a6c4ull; return;
L_700560a8f0:;
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
    { uint64_t ea = c->x[20] + 0x9c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x700081a688ull; return;
}

void f_7005701000(Cpu *c) {
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
    c->x[30] = 0x70057010b0ull; f_7005703000(c);
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
    c->x[8] = (uint64_t)(0x7005707000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = 0x700213d938ull; return;
}

void f_7005801400(Cpu *c) {
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
    c->x[1] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[2] = (uint32_t)((uint32_t)c->x[1] ^ 0x1ull);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[0] = (uint32_t)(0x0ull);
    c->x[30] = 0x70058014a0ull; f_7005803000(c);
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
    if (COND_EQ(c)) goto L_7005801534;
    c->pc = 0x70020fc85cull; return;
L_7005801534:;
    c->pc = 0x70020fc724ull; return;
}

void f_7005803000(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[20] = (uint64_t)(0x700580e000ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x180ull);
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[20] + 0x30ull);
L_7005803020:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[9] != 0) goto L_7005803020;
    c->x[9] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005803020;
    c->x[9] = (uint64_t)(c->x[20] + (c->x[19] << 2));
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[21]); }
    c->x[10] = (uint64_t)(c->x[20] + 0x40ull);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[19] << 4));
    { uint64_t ea = c->x[10] + 0; ST32(ea, (uint32_t)c->x[1]); ST32(ea + 4, (uint32_t)c->x[2]); }
    { uint64_t ea = c->x[10] + 8; ST32(ea, (uint32_t)c->x[3]); ST32(ea + 4, (uint32_t)c->x[21]); }
    stl32(c->x[8], 0ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_LS(c)) goto L_700580306c;
    c->x[9] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[21] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005803094;
L_700580306c:;
    c->x[8] = (uint64_t)(0x700580e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x800ull);
    { uint64_t ea = c->x[8] + (c->x[19] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x7005800000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x0ull);
    c->x[0] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[16] = (uint64_t)(0x700580e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005803094ull; rt_dispatch(c); c->pc = 0;
L_7005803094:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 48; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005804000(Cpu *c) {
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->sp + 0x34ull; ST32(ea, (uint32_t)c->x[2]); }
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(0x700580e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xf678ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x3a60000ull);
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005804180;
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005804180;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_CS(c)) goto L_7005804180;
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005804180;
    c->x[10] = (uint32_t)(0x30ull);
    c->x[8] = (uint64_t)(c->x[8] + (uint64_t)(uint32_t)c->x[9] * (uint64_t)(uint32_t)c->x[10]);
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1eull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_HI(c)) goto L_7005804180;
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0x2ull);
    c->x[30] = 0x7005804088ull; f_7005803800(c);
    (void)(subs32(c, (uint32_t)c->x[0], 0x1ull));
    if (COND_HI(c)) goto L_7005804168;
    c->x[21] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    if (c->x[0] == 0) goto L_7005804194;
    c->x[1] = (uint64_t)(0x700580e000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0xc00ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[16] = (uint64_t)(0x700580e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x6f80ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x10d0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x70058040c4ull; rt_dispatch(c); c->pc = 0;
    if (c->x[0] == 0) goto L_7005804194;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint32_t)(0xf1ffull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xffa80000ull);
    if ((uint32_t)c->x[21] == 0) goto L_70058040e0;
    c->x[8] = (uint32_t)(0x8585ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0xff850000ull);
L_70058040e0:;
    { uint64_t ea = c->sp + 0x30ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[22] = (uint32_t)(0x0ull);
L_70058040e8:;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005804194;
    { uint64_t ea = c->x[8] + 0x28ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    if (c->x[16] == 0) goto L_7005804194;
    c->x[9] = (uint64_t)(0x700580e000ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x148ull);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[16] - c->x[9]);
    c->x[11] = (uint32_t)(0xa000ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_CS(c)) goto L_7005804194;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[22]);
    c->x[2] = (uint64_t)(c->sp + 0x30ull);
    c->pc = c->x[16]; c->x[30] = 0x7005804128ull; rt_dispatch(c); c->pc = 0;
    c->x[22] = (uint32_t)((uint32_t)c->x[22] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[22], 0x4ull));
    if (COND_CC(c)) goto L_70058040e8;
    c->x[0] = (uint32_t)((uint32_t)c->x[21] + 0x4ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005804148ull; f_7005803000(c);
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) == 0) goto L_7005804194;
    c->x[0] = (uint32_t)(0x8ull);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    { uint64_t ea = c->sp + 0x30ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005804164ull; f_7005803000(c);
    goto L_7005804194;
L_7005804168:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint32_t)(0xaull);
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x700580417cull; f_7005803000(c);
    goto L_7005804194;
L_7005804180:;
    c->x[0] = (uint32_t)(0xbull);
    { uint64_t ea = c->sp + 0x38ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x34ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x7005804194ull; f_7005803000(c);
L_7005804194:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005806800(Cpu *c) {
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
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 24) & 1) != 0) goto L_70058068b4;
    { uint64_t ea = c->sp + 0x360ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005806944;
    { uint64_t ea = c->x[9] + 0x51ull; uint64_t v = LD8(ea); c->x[2] = (uint64_t)(v); }
    if (((c->x[2] >> 0) & 1) == 0) goto L_7005806944;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[3] = (uint32_t)(0x18ull);
    c->x[0] = (uint32_t)(0x9ull);
    c->x[30] = 0x70058068b4ull; f_7005803000(c);
L_70058068b4:;
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
    c->pc = 0x700073452cull; return;
L_7005806944:;
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
    c->pc = 0x7000733900ull; return;
}

void f_7005901400(Cpu *c) {
    { uint64_t ea = c->x[21] + 16; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
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
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x998ull);
    { uint64_t ea = c->sp + 0xb8ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[30] = 0x70059014b0ull; f_7005913000(c);
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x99cull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[30] = 0x70059014bcull; f_7005904000(c);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[0]);
    { uint64_t ea = c->sp + 0xa8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x99cull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0xaull);
    c->x[30] = 0x70059014d4ull; f_7005905000(c);
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
    c->pc = 0x70003f8f24ull; return;
}

void f_7005902800(Cpu *c) {
    { uint64_t ea = c->sp + 0x10ull; c->v[8] = LD64(ea); }
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
    c->x[30] = 0x70059028a8ull; f_7005909000(c);
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
    c->pc = 0x70020f9d64ull; return;
}

void f_7005904c00(Cpu *c) {
    if (c->x[0] == 0) goto L_7005904c78;
    { uint64_t ea = c->x[0] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(ROR32((uint32_t)c->x[8], 16) & 0xffffull);
    c->x[10] = (uint32_t)(0xb148ull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005904c78;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffull);
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ccull));
    if (COND_CS(c)) goto L_7005904c78;
    c->x[1] = (uint64_t)(0x700591a000ull);
    c->x[1] = (uint64_t)(c->x[1] + 0x0ull);
    c->x[1] = (uint64_t)(c->x[1] + (c->x[8] << 5));
    { uint64_t ea = c->x[1] + 0x10ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005904c78;
    { uint64_t ea = c->x[1] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x20ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005904c78;
    { uint64_t ea = c->x[1] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005904c78;
    { uint64_t ea = c->x[1] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] ^ 0x80000000ull);
    { uint64_t ea = c->x[0] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->pc = 0; return;
L_7005904c78:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005905800(Cpu *c) {
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
    c->x[8] = (uint64_t)(0x700590e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint32_t)(0x6000ull);
    c->x[17] = (uint32_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3ad0000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->sp + 0xa8ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70059058c0ull; f_7005904c00(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005905b18;
    { uint64_t ea = c->sp + 0x318ull; ST64(ea, c->x[1]); }
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005905a64;
    { uint64_t ea = c->x[8] + 0x51ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    if (((c->x[9] >> 0) & 1) != 0) goto L_70059058e8;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005905a64;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005905a64;
L_70059058e8:;
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x70059058f0ull; f_700590a000(c);
    { uint64_t ea = c->sp + 0x310ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0x314ull; ST32(ea, (uint32_t)c->x[1]); }
    if ((uint32_t)c->x[0] != 0) goto L_70059059b0;
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005905910ull; f_700590a800(c);
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
    c->pc = 0x7000736500ull; return;
L_70059059b0:;
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x314ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[30] = 0x70059059c4ull; f_700590a800(c);
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
    c->pc = 0x7000736450ull; return;
L_7005905a64:;
    { uint64_t ea = c->sp + 0x318ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x3ull);
    { uint64_t ea = c->sp + 0xa0ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0u | 0u);
    c->x[30] = 0x7005905a78ull; f_700590a800(c);
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
    c->pc = 0x7000736450ull; return;
L_7005905b18:;
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
    c->pc = 0x70007363b8ull; return;
}

void f_7005a02400(Cpu *c) {
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
    if ((uint32_t)c->x[8] != 0) goto L_7005a02534;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x100ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xa11dull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x5bb70000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a0251c;
    c->x[9] = (uint32_t)(0xd76dull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x31c20000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a0251c;
    c->x[9] = (uint32_t)(0xd1e7ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2b530000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a0251c;
    c->x[9] = (uint32_t)(0x59e9ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x69d10000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a02500;
    c->x[9] = (uint32_t)(0x54a6ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x73a80000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a02500;
    c->x[9] = (uint32_t)(0x4156ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x8a420000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[9])));
    if (COND_EQ(c)) goto L_7005a02500;
    goto L_7005a025c4;
L_7005a02500:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[10]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[3] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1dull);
    c->x[30] = 0x7005a02518ull; f_7005a0b000(c);
    goto L_7005a025c4;
L_7005a0251c:;
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[10]);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[8]);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1cull);
    c->x[30] = 0x7005a02534ull; f_7005a0b000(c);
L_7005a02534:;
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
    c->pc = 0x70020fe2c0ull; return;
L_7005a025c4:;
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
    c->pc = 0x70020fe230ull; return;
}

void f_7005a03400(Cpu *c) {
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
    if (COND_NE(c)) goto L_7005a034c0;
    c->x[2] = (uint32_t)(0xec02ull);
    c->x[2] = (uint32_t)((c->x[2] & 0xffffffff0000ffffull) | 0x18180000ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[2]); }
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1bull);
    c->x[30] = 0x7005a034c0ull; f_7005a0b000(c);
L_7005a034c0:;
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
    c->pc = 0x7002158380ull; return;
}

void f_7005a04800(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[1], 0x1dull));
    if (COND_EQ(c)) goto L_7005a04994;
    (void)(subs32(c, (uint32_t)c->x[1], 0x5ull));
    if (COND_EQ(c)) goto L_7005a04818;
    (void)(subs32(c, (uint32_t)c->x[1], 0x6ull));
    if (COND_NE(c)) goto L_7005a04cbc;
L_7005a04818:;
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
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a04904;
    c->x[1] = (uint64_t)(c->sp + 0x300ull);
    c->x[2] = (uint64_t)(c->sp + 0x304ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x750ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20c0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a048d4ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6ull));
    if (COND_NE(c)) goto L_7005a04904;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x308ull; ST8(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x800ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x808ull; ST32(ea, (uint32_t)c->x[10]); }
L_7005a04904:;
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
    goto L_7005a04cbc;
L_7005a04994:;
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
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->sp + 0x300ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x304ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0xc8ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a04c04;
    { uint64_t ea = c->sp + 0x310ull; ST64(ea, c->x[0]); }
    c->x[1] = (uint64_t)(c->sp + 0x300ull);
    c->x[2] = (uint64_t)(c->sp + 0x304ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x750ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20c0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04a60ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x6ull));
    if (COND_NE(c)) goto L_7005a04c0c;
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 31) & 1) != 0) goto L_7005a04c14;
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x6ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x1a80ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0xd60000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04a98ull; rt_dispatch(c); c->pc = 0;
    if (c->x[0] == 0) goto L_7005a04c14;
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x148ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xdff0ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x3950000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[17]);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005a04c04;
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    if (c->x[0] == 0) goto L_7005a04c04;
    { uint64_t ea = c->sp + 0x330ull; ST64(ea, c->x[0]); }
    { uint64_t ea = c->sp + 0x318ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 0x320ull; ST64(ea, 0ull); }
    c->x[1] = (uint64_t)(c->sp + 0x318ull);
    c->x[3] = (uint32_t)(0x322eull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x42900000ull);
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x2ed8ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x280000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04b00ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a04c14;
    { uint64_t ea = c->sp + 0x330ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x328ull);
    c->x[2] = (uint64_t)(c->sp + 0x318ull);
    c->x[3] = (uint32_t)(0x4481ull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x22340000ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xf9d4ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x190000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04b34ull; rt_dispatch(c); c->pc = 0;
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005a04c14;
    { uint64_t ea = c->sp + 0x328ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    if (COND_LE(c)) goto L_7005a04c14;
    { uint64_t ea = c->sp + 0x308ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x6ull);
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    c->x[3] = (uint32_t)(0x1ull);
    c->x[4] = (uint32_t)(0u | 0u);
    c->x[5] = (uint32_t)(0x3ull);
    c->x[30] = 0x7005a04b64ull; f_7005a0b800(c);
    { uint64_t ea = c->sp + 0x330ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x328ull);
    c->x[2] = (uint64_t)(c->sp + 0x318ull);
    c->x[3] = (uint32_t)(0x4481ull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x22340000ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xf9d4ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x190000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04b94ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x32cull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->sp + 0x328ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[2], 0x0ull));
    c->x[2] = (uint32_t)((COND_GT(c)) ? (uint32_t)c->x[2] : (uint32_t)(0u));
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x32cull; uint64_t v = LD32(ea); c->x[4] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0x23ull);
    c->x[30] = 0x7005a04bb8ull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 0x310ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0x6ull);
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0x43b8ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x920000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a04bdcull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[9] + 0x308ull; ST8(ea, (uint32_t)c->x[10]); }
    c->x[8] = (uint64_t)(0x7005a0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x800ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x808ull; ST32(ea, (uint32_t)c->x[10]); }
    goto L_7005a04c2c;
L_7005a04c04:;
    c->x[1] = (uint32_t)(0x1ull);
    goto L_7005a04c18;
L_7005a04c0c:;
    c->x[1] = (uint32_t)(0x2ull);
    goto L_7005a04c18;
L_7005a04c14:;
    c->x[1] = (uint32_t)(0x3ull);
L_7005a04c18:;
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD32(ea); c->x[2] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x304ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x24ull);
    c->x[30] = 0x7005a04c2cull; f_7005a0b000(c);
L_7005a04c2c:;
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
    c->pc = 0x7002175a50ull; return;
L_7005a04cbc:;
    (void)(subs32(c, (uint32_t)c->x[1], 0x1cull));
    c->pc = 0x7002173d54ull; return;
}

void f_7005a08000(Cpu *c) {
    c->v[0] = 0x40200000ull;
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
    c->x[1] = (uint32_t)(VS32(8));
    c->x[2] = (uint32_t)(VS32(0));
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x15ull);
    c->x[30] = 0x7005a080a8ull; f_7005a0b000(c);
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
    c->pc = 0x70023bbe04ull; return;
}

void f_7005a08c00(Cpu *c) {
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
    if (COND_LE(c)) goto L_7005a08d3c;
    c->x[2] = (uint32_t)(0x1ull);
    c->x[3] = (uint64_t)(0ull | 0ull);
    c->x[4] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x10ull);
    c->x[30] = 0x7005a08cacull; f_7005a0b000(c);
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
    c->pc = 0x70020b3b5cull; return;
L_7005a08d3c:;
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
    if (COND_GT(c)) goto L_7005a08dd0;
    c->pc = 0x70020b3b9cull; return;
L_7005a08dd0:;
    c->pc = 0x70020b3b5cull; return;
}

void f_7005a09c00(Cpu *c) {
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
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
    if (COND_NE(c)) goto L_7005a09cb0;
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0xffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[8]); }
L_7005a09cb0:;
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
    c->pc = 0x700209294cull; return;
}

void f_7005a0ad00(Cpu *c) {
    c->x[1] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[19]);
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
    if (COND_LE(c)) goto L_7005a0af14;
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x0ull));
    if (COND_LE(c)) goto L_7005a0af14;
    { uint64_t ea = c->sp + 0x4f8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0x7005a0e000ull);
    c->x[12] = (uint64_t)(c->x[12] + 0x148ull);
    { uint64_t ea = c->x[12] + 0x0ull; uint64_t v = LD64(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x98e0ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x890000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_EQ(c)) goto L_7005a0aee4;
    c->x[13] = (uint32_t)(0x858ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x20b0000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0aee4;
    { uint64_t ea = c->sp + 0x558ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[11] - c->x[12]);
    c->x[13] = (uint32_t)(0x5d10ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x2510000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[13])));
    if (COND_NE(c)) goto L_7005a0aee4;
    { uint64_t ea = c->sp + 0x398ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    if (c->x[11] == 0) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x49ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x1ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x74ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x2ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x3ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x4ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x5ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x45ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x6ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6eull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x7ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x65ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x8ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x6dull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0x9ull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x79ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0xaull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0xbull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x31ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0xcull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], 0x33ull));
    if (COND_NE(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0xdull; uint64_t v = LD8(ea); c->x[14] = (uint64_t)(v); }
    c->x[13] = (uint32_t)((uint32_t)c->x[14] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[13], 0x1ull));
    if (COND_HI(c)) goto L_7005a0af14;
    { uint64_t ea = c->x[11] + 0xeull; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] != 0) goto L_7005a0af14;
    c->x[14] = (uint32_t)((uint32_t)c->x[14] + 0x52ull);
    { uint64_t ea = c->sp + 0x300ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 0x308ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[1]);
    { uint64_t ea = c->sp + 0x98ull; uint64_t v = LD32(ea); c->x[3] = (uint64_t)(v); }
    c->x[4] = (uint32_t)(0u | (uint32_t)c->x[14]);
    c->x[0] = (uint32_t)(0x26ull);
    c->x[30] = 0x7005a0aedcull; f_7005a0b000(c);
    { uint64_t ea = c->sp + 0x300ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x308ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
L_7005a0aee4:;
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
    c->x[0] = (uint32_t)(0x20ull);
    c->x[30] = 0x7005a0af14ull; f_7005a0b000(c);
L_7005a0af14:;
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
    c->pc = 0x700209c138ull; return;
}

void f_7005a0b800(Cpu *c) {
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->x[16] = (uint64_t)(0x7005a0e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x148ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->x[17] = (uint64_t)(0xad04ull);
    c->x[17] = (uint64_t)((c->x[17] & 0xffffffff0000ffffull) | 0x20a0000ull);
    c->x[16] = (uint64_t)(c->x[16] + c->x[17]);
    c->pc = c->x[16]; c->x[30] = 0x7005a0b820ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005a0b820(Cpu *c) {
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005a1001c(Cpu *c) {
    if (c->x[2] == 0) goto L_7005a10228;
    c->x[8] = (uint64_t)(c->x[2] - 0x1ull);
    c->x[9] = (uint64_t)(0x7005a10000ull);
    c->x[10] = (uint64_t)(c->x[2] + 0xfull);
    VW(vu64, 1, 0, (vu64){} + (uint64_t)c->x[8]);
    c->x[8] = (uint64_t)(0x7005a10000ull);
    { uint64_t ea = c->x[9] + 0xe90ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[8] + 0xed0ull; c->v[2] = LD128(ea); }
    c->x[8] = (uint64_t)(0x7005a10000ull);
    c->x[9] = (uint64_t)(0x7005a10000ull);
    { uint64_t ea = c->x[8] + 0xeb0ull; c->v[4] = LD128(ea); }
    c->x[8] = (uint64_t)(0x7005a10000ull);
    { uint64_t ea = c->x[9] + 0xe80ull; c->v[3] = LD128(ea); }
    c->x[9] = (uint64_t)(0x7005a10000ull);
    { uint64_t ea = c->x[8] + 0xef0ull; c->v[5] = LD128(ea); }
    c->x[8] = (uint32_t)(0x10ull);
    { uint64_t ea = c->x[9] + 0xee0ull; c->v[6] = LD128(ea); }
    c->x[9] = (uint64_t)(0x7005a10000ull);
    VW(vu64, 1, 7, (vu64){} + (uint64_t)c->x[8]);
    c->x[8] = (uint64_t)(0x7005a10000ull);
    { uint64_t ea = c->x[9] + 0xec0ull; c->v[16] = LD128(ea); }
    c->x[9] = (uint64_t)(c->x[0] + 0x7ull);
    { uint64_t ea = c->x[8] + 0xea0ull; c->v[17] = LD128(ea); }
    c->x[8] = (uint64_t)(c->x[10] & 0xfffffffffffffff0ull);
L_7005a1007c:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 17)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 19), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[0]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a10098;
    { uint64_t ea = c->x[9] - 7; ST8(ea, (uint32_t)c->x[1]); }
L_7005a10098:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[1]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a100ac;
    { uint64_t ea = c->x[9] - 6; ST8(ea, (uint32_t)c->x[1]); }
L_7005a100ac:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 16)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 19), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[2]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a100c8;
    { uint64_t ea = c->x[9] - 5; ST8(ea, (uint32_t)c->x[1]); }
L_7005a100c8:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[3]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a100dc;
    { uint64_t ea = c->x[9] - 4; ST8(ea, (uint32_t)c->x[1]); }
L_7005a100dc:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 6)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 0), VREG(vu8, 19), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[4]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a100f8;
    { uint64_t ea = c->x[9] - 3; ST8(ea, (uint32_t)c->x[1]); }
L_7005a100f8:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[5]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a1010c;
    { uint64_t ea = c->x[9] - 2; ST8(ea, (uint32_t)c->x[1]); }
L_7005a1010c:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 5)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 0), VREG(vu8, 19), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[6]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a10128;
    { uint64_t ea = c->x[9] - 1; ST8(ea, (uint32_t)c->x[1]); }
L_7005a10128:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[7]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a1013c;
    { uint64_t ea = c->x[9] + 0x0ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a1013c:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 19), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[0]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a10158;
    { uint64_t ea = c->x[9] + 0x1ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a10158:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[1]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a1016c;
    { uint64_t ea = c->x[9] + 0x2ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a1016c:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 3)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 19), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[2]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a10188;
    { uint64_t ea = c->x[9] + 0x3ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a10188:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[3]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a1019c;
    { uint64_t ea = c->x[9] + 0x4ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a1019c:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 2)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 0), VREG(vu8, 19), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[4]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a101b8;
    { uint64_t ea = c->x[9] + 0x5ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a101b8:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[5]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a101cc;
    { uint64_t ea = c->x[9] + 0x6ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a101cc:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 0) >= VREG(vu64, 1)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 19, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 19, SHUF(VREG(vu8, 0), VREG(vu8, 19), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[19])[6]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a101e8;
    { uint64_t ea = c->x[9] + 0x7ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a101e8:;
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[10] = (uint32_t)(((uint8_t *)&c->v[18])[7]);
    if (((c->x[10] >> 0) & 1) == 0) goto L_7005a101fc;
    { uint64_t ea = c->x[9] + 0x8ull; ST8(ea, (uint32_t)c->x[1]); }
L_7005a101fc:;
    VW(vu64, 1, 6, VREG(vu64, 6) + VREG(vu64, 7));
    VW(vu64, 1, 16, VREG(vu64, 16) + VREG(vu64, 7));
    c->x[8] = (uint64_t)(subs64(c, c->x[8], 0x10ull));
    VW(vu64, 1, 17, VREG(vu64, 17) + VREG(vu64, 7));
    VW(vu64, 1, 5, VREG(vu64, 5) + VREG(vu64, 7));
    c->x[9] = (uint64_t)(c->x[9] + 0x10ull);
    VW(vu64, 1, 4, VREG(vu64, 4) + VREG(vu64, 7));
    VW(vu64, 1, 3, VREG(vu64, 3) + VREG(vu64, 7));
    VW(vu64, 1, 2, VREG(vu64, 2) + VREG(vu64, 7));
    VW(vu64, 1, 1, VREG(vu64, 1) + VREG(vu64, 7));
    if (COND_NE(c)) goto L_7005a1007c;
L_7005a10228:;
    c->pc = 0; return;
}

void f_7005a10dcc(Cpu *c) {
    c->x[8] = (uint32_t)(0x50ull);
    c->x[9] = (uint64_t)(c->x[0] + (uint64_t)(uint32_t)c->x[1] * (uint64_t)(uint32_t)c->x[8]);
    c->x[10] = (uint64_t)(0ull | c->x[9]);
    { uint64_t ea = c->x[10]; uint64_t v = LD64(ea); c->x[10] = c->x[10] + 12; c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005a10e60;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x40ull));
    if (COND_NE(c)) goto L_7005a10e60;
    c->x[10] = (uint64_t)(0ull | 0ull);
    c->x[12] = (uint32_t)(0u | 0u);
    c->x[9] = (uint32_t)(0u | 0u);
    c->x[11] = (uint32_t)(0xdfull);
L_7005a10e00:;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    c->x[13] = (uint32_t)(logic32(c, (uint32_t)c->x[13] & 0xffull));
    c->x[14] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[14]);
    if (((c->x[9] >> 0) & 1) == 0) goto L_7005a10e1c;
    c->x[13] = (uint32_t)(0u | 0u);
    goto L_7005a10e40;
L_7005a10e1c:;
    c->x[14] = (uint32_t)((uint32_t)c->x[13] & (uint32_t)c->x[11]);
    c->x[14] = (uint32_t)((uint32_t)c->x[14] - 0x41ull);
    (void)(subs32(c, (uint32_t)c->x[14], 0x1aull));
    if (COND_CC(c)) goto L_7005a10e40;
    (void)(subs32(c, (uint32_t)c->x[13], 0x5full));
    if (COND_EQ(c)) goto L_7005a10e40;
    c->x[14] = (uint32_t)((uint32_t)c->x[13] - 0x30ull);
    (void)(subs32(c, (uint32_t)c->x[14], 0x9ull));
    if (COND_HI(c)) goto L_7005a10e68;
L_7005a10e40:;
    (void)(subs64(c, c->x[10], 0x3eull));
    c->x[14] = (uint64_t)(c->x[10] + 0x1ull);
    { uint64_t ea = c->x[2] + c->x[10]; ST8(ea, (uint32_t)c->x[13]); }
    c->x[12] = (uint32_t)((COND_LS(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs64(c, c->x[14], 0x40ull));
    c->x[10] = (uint64_t)(0ull | c->x[14]);
    if (COND_NE(c)) goto L_7005a10e00;
    goto L_7005a10e6c;
L_7005a10e60:;
    c->x[8] = (uint32_t)(0u | 0u);
    goto L_7005a10e70;
L_7005a10e68:;
    c->x[9] = (uint32_t)(0u | 0u);
L_7005a10e6c:;
    c->x[8] = (uint32_t)((uint32_t)c->x[12] & (uint32_t)c->x[9]);
L_7005a10e70:;
    c->x[0] = (uint32_t)((uint32_t)c->x[8] & 0x1ull);
    c->pc = 0; return;
}

void f_7005b01800(Cpu *c) {
    if (c->x[0] != 0) goto L_7005b01830;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); c->sp = ea; }
    c->x[8] = (uint64_t)(0x7005b0e000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x180ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    { uint64_t ea = c->x[8] + 0xcull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->x[20] = (uint64_t)(0ull | c->x[21]);
    c->x[21] = (uint64_t)(0ull | c->x[24]);
    c->pc = 0x70009192f0ull; return;
L_7005b01830:;
    c->pc = 0x7000918a5cull; return;
}

void f_7005b02800(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    c->x[14] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[14]); }
    (void)(subs32(c, (uint32_t)c->x[1], 0x5ull));
    if (COND_NE(c)) goto L_7005b0284c;
    c->x[15] = (uint64_t)(0x7005b0e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x180ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x1cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x1cull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[0] + 0xcc8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[9] + 0x280ull);
    { uint64_t ea = c->x[9] + 0x50ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x20ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005b0284c:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->nzcv = c->x[14] & 0xf0000000ull;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->sp = (uint64_t)(c->sp - 0x40ull);
    c->pc = 0x7000d66e44ull; return;
}

void f_7005b03800(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    c->x[14] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[14]); }
    c->x[15] = (uint64_t)(0x7005b0e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x180ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x40ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005b0387c;
    { uint64_t ea = c->x[15] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005b0387c;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) != 0) goto L_7005b0386c;
    { uint64_t ea = c->x[15] + 0x30ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x30ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x28ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x58ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x2cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x5cull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[15] + 0x44ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005b03878;
L_7005b0386c:;
    { uint64_t ea = c->x[15] + 0x38ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x38ull; ST32(ea, (uint32_t)c->x[8]); }
L_7005b03878:;
    { uint64_t ea = c->x[15] + 0x40ull; ST32(ea, 0u); }
L_7005b0387c:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->nzcv = c->x[14] & 0xf0000000ull;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->x[8] = (uint64_t)(ldx32(c, c->x[21]));
    c->pc = 0x7000d96f34ull; return;
}

void f_7005b04000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x50ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[12]); ST64(ea + 8, c->x[13]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[14]); ST64(ea + 8, c->x[15]); }
    c->x[14] = (uint64_t)(c->nzcv);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[14]); }
    c->x[15] = (uint64_t)(0x7005b0e000ull);
    c->x[15] = (uint64_t)(c->x[15] + 0x180ull);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD64(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x44ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005b04074;
    { uint64_t ea = c->x[15] + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005b04074;
    { uint64_t ea = c->x[20] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 6) & 1) != 0) goto L_7005b04064;
    { uint64_t ea = c->x[15] + 0x34ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x34ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x58ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x50ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[15] + 0x5cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[15] + 0x54ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005b04070;
L_7005b04064:;
    { uint64_t ea = c->x[15] + 0x3cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[15] + 0x3cull; ST32(ea, (uint32_t)c->x[8]); }
L_7005b04070:;
    { uint64_t ea = c->x[15] + 0x44ull; ST32(ea, 0u); }
L_7005b04074:;
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[14] = (uint64_t)(v); }
    c->nzcv = c->x[14] & 0xf0000000ull;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[14] = (uint64_t)(a); c->x[15] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[12] = (uint64_t)(a); c->x[13] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[10] = (uint64_t)(a); c->x[11] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x50ull);
    c->x[8] = (uint64_t)(ldx32(c, c->x[20]));
    c->pc = 0x7000d97000ull; return;
}
