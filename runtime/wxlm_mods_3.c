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

void f_7005204000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint32_t)(0u | (uint32_t)c->x[2]);
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[3]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0xedbeull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0x54d0000ull);
    c->x[30] = 0x700520403cull; f_7005204800(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005204134;
    c->x[23] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[3] = (uint32_t)(0x9c3aull);
    c->x[3] = (uint32_t)((c->x[3] & 0xffffffff0000ffffull) | 0xee190000ull);
    c->x[30] = 0x7005204058ull; f_7005204800(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005204134;
    c->x[24] = (uint32_t)(0u | (uint32_t)c->x[0]);
    (void)(subs32(c, (uint32_t)c->x[23], (uint32_t)((uint32_t)c->x[24])));
    if (COND_EQ(c)) goto L_7005204134;
    { uint64_t ea = c->x[21] + 0x150ull; uint64_t v = LD32(ea); c->x[25] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[25], 0x2ull));
    if (COND_CC(c)) goto L_7005204134;
    c->x[8] = (uint32_t)(0xfffffull);
    (void)(subs32(c, (uint32_t)c->x[25], (uint32_t)((uint32_t)c->x[8])));
    if (COND_HI(c)) goto L_7005204134;
    { uint64_t ea = c->x[21] + 0x158ull; uint64_t v = LD64(ea); c->x[28] = (uint64_t)(v); }
    if (c->x[28] == 0) goto L_7005204134;
    c->x[9] = (uint64_t)(c->x[21] + 0x160ull);
L_700520408c:;
    c->x[26] = (uint64_t)(ldx32(c, c->x[9]));
    c->x[27] = (uint32_t)((uint32_t)c->x[26] & 0xfffffull);
    c->x[8] = (uint32_t)((uint32_t)c->x[25] - 0x2ull);
    (void)(subs32(c, (uint32_t)c->x[27], (uint32_t)((uint32_t)c->x[8])));
    if (COND_HI(c)) goto L_7005204130;
    c->x[10] = (uint64_t)(c->x[28] + ((uint64_t)(uint32_t)c->x[27] << 4));
    { uint64_t ea = c->x[10] + 0x8ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x18ull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | (uint32_t)c->x[12]);
    if ((uint32_t)c->x[11] != 0) goto L_7005204130;
    c->x[8] = (uint32_t)((uint32_t)c->x[26] + 0x2ull);
    { uint32_t st = stx32(c, c->x[9], c->x[8]); c->x[11] = (uint32_t)(st); }
    if ((uint32_t)c->x[11] != 0) goto L_700520408c;
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x0ull; ST32(ea, (uint32_t)c->x[19]); }
    { uint64_t ea = c->x[10] + 0x4ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[10] + 0xcull; ST32(ea, 0u); }
    { uint64_t ea = c->x[10] + 0x10ull; ST32(ea, (uint32_t)c->x[20]); }
    { uint64_t ea = c->x[10] + 0x14ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[10] + 0x1cull; ST32(ea, 0u); }
    { uint64_t ea = c->x[10] + 0x18ull; ST32(ea, (uint32_t)c->x[24]); }
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
    c->x[11] = (uint64_t)(c->x[10] + 0x8ull);
    stl32(c->x[11], c->x[23]);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
L_70052040f0:;
    c->x[11] = (uint32_t)((uint32_t)c->x[10] + 0x200000ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0xff00000ull);
    c->x[12] = (uint32_t)((uint32_t)c->x[10] & 0xf00fffffull);
    c->x[11] = (uint32_t)((uint32_t)c->x[11] | (uint32_t)c->x[12]);
    c->x[12] = (uint64_t)(ldx32(c, c->x[9]));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_7005204128;
    { uint32_t st = stx32(c, c->x[9], c->x[11]); c->x[12] = (uint32_t)(st); }
    if ((uint32_t)c->x[12] != 0) goto L_70052040f0;
    c->x[12] = (uint32_t)((uint32_t)c->x[10] ^ (uint32_t)c->x[26]);
    c->x[12] = (uint32_t)(ROR32((uint32_t)c->x[12], 28) & 0xfull);
    if ((uint32_t)c->x[12] != 0) goto L_700520413c;
    c->x[0] = (uint32_t)(0x1ull);
    goto L_7005204140;
L_7005204128:;
    c->x[10] = (uint32_t)(0u | (uint32_t)c->x[12]);
    goto L_70052040f0;
L_7005204130:;
    c->excl_addr = ~0ull;
L_7005204134:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_7005204140;
L_700520413c:;
    c->x[0] = (uint32_t)(0x2ull);
L_7005204140:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_7005204800(Cpu *c) {
    { uint64_t ea = c->x[2] + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x1ull));
    if (COND_NE(c)) goto L_700520492c;
    { uint64_t ea = c->x[2] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_700520492c;
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700520492c;
    { uint64_t ea = c->x[8] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700520492c;
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[3], (uint32_t)c->x[10]));
    c->x[11] = (uint32_t)((uint32_t)c->x[3] - (uint32_t)c->x[11] * (uint32_t)c->x[10]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005204830:;
    c->x[13] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[12] << 3));
    { uint64_t ea = c->x[13] + 0x0ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[3])));
    if (COND_EQ(c)) goto L_700520485c;
    if ((uint32_t)c->x[13] == 0) goto L_700520492c;
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    c->x[12] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[12] : (uint32_t)(0u));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005204830;
    goto L_700520492c;
L_700520485c:;
    c->x[9] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[12] << 3));
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[14] = (uint64_t)(v); }
    if ((uint32_t)c->x[14] == 0) goto L_700520492c;
    { uint64_t ea = c->x[0] + 0x140ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700520492c;
    { uint64_t ea = c->x[0] + 0x14cull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_700520492c;
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[14], (uint32_t)c->x[10]));
    c->x[11] = (uint32_t)((uint32_t)c->x[14] - (uint32_t)c->x[11] * (uint32_t)c->x[10]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005204884:;
    c->x[13] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[12] << 3));
    { uint64_t ea = c->x[13] + 0x0ull; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[14])));
    if (COND_EQ(c)) goto L_70052048b0;
    if ((uint32_t)c->x[13] == 0) goto L_700520492c;
    c->x[12] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    c->x[12] = (uint32_t)((COND_CC(c)) ? (uint32_t)c->x[12] : (uint32_t)(0u));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005204884;
    goto L_700520492c;
L_70052048b0:;
    c->x[9] = (uint64_t)(c->x[9] + ((uint64_t)(uint32_t)c->x[12] << 3));
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x130ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_CS(c)) goto L_700520492c;
    { uint64_t ea = c->x[0] + 0x138ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_700520492c;
    c->x[9] = (uint64_t)(c->x[9] + (c->x[10] << 6));
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], 0x1ull));
    if (COND_NE(c)) goto L_700520492c;
    { uint64_t ea = c->x[2] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if (((c->x[10] >> 31) & 1) != 0) goto L_700520492c;
    { uint64_t ea = c->x[9] + 0x20ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_CS(c)) goto L_700520492c;
    { uint64_t ea = c->x[9] + 0x28ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_700520492c;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if (c->x[10] == 0) goto L_700520492c;
    { uint64_t ea = c->x[10] + 0x20ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(0x700520e000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0x148ull);
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(0x9530ull);
    c->x[12] = (uint64_t)((c->x[12] & 0xffffffff0000ffffull) | 0x3980000ull);
    { uint64_t ea = c->x[11] + c->x[12]; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_NE(c)) goto L_700520492c;
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[14]);
    c->pc = 0; return;
L_700520492c:;
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
}

void f_7005205000(Cpu *c) {
    { uint64_t ea = c->x[1]; uint64_t v = LD8(ea); c->x[1] = c->x[1] + 1; c->x[2] = (uint64_t)(v); }
    if ((uint32_t)c->x[2] == 0) goto L_700520501c;
    { uint64_t ea = c->x[0]; uint64_t v = LD8(ea); c->x[0] = c->x[0] + 1; c->x[3] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[2], (uint32_t)((uint32_t)c->x[3])));
    if (COND_EQ(c)) { f_7005205000(c); return; }
    c->x[0] = (uint32_t)(0u | 0u);
    c->pc = 0; return;
L_700520501c:;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
}

void f_7005205100(Cpu *c) {
    (void)(subs32(c, (uint32_t)c->x[3], 0x1ull));
    if (COND_EQ(c)) goto L_7005205120;
    (void)(subs32(c, (uint32_t)c->x[3], 0x2ull));
    if (COND_EQ(c)) goto L_7005205130;
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x118ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
L_7005205120:;
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x120ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
L_7005205130:;
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x128ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005206000(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x40ull);
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[0]);
    c->x[19] = (uint64_t)(0x700520e000ull);
    c->x[19] = (uint64_t)(c->x[19] + 0x180ull);
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[19] + 0xfcull);
L_7005206024:;
    c->x[9] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[9] != 0) goto L_7005206024;
    c->x[9] = (uint32_t)(0x1ull);
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_7005206024;
    c->x[9] = (uint64_t)(c->x[19] + (c->x[20] << 2));
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[21] = (uint64_t)(v); }
    c->x[21] = (uint32_t)((uint32_t)c->x[21] + 0x1ull);
    { uint64_t ea = c->x[9] + 0x0ull; ST32(ea, (uint32_t)c->x[21]); }
    c->x[10] = (uint64_t)(c->x[19] + 0x100ull);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[20] << 5));
    { uint64_t ea = c->x[10] + 0; ST64(ea, c->x[1]); ST64(ea + 8, c->x[2]); }
    { uint64_t ea = c->x[10] + 16; ST64(ea, c->x[3]); ST64(ea + 8, c->x[4]); }
    stl32(c->x[8], 0ull);
    (void)(subs32(c, (uint32_t)c->x[21], 0x4ull));
    if (COND_LS(c)) goto L_7005206070;
    c->x[9] = (uint32_t)((uint32_t)c->x[21] - 0x1ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[21] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005206098;
L_7005206070:;
    c->x[8] = (uint64_t)(0x7005207000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x0ull);
    { uint64_t ea = c->x[8] + (c->x[20] << 2); uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0x7005200000ull);
    c->x[0] = (uint64_t)(c->x[0] + 0x0ull);
    c->x[0] = (uint64_t)(c->x[0] + c->x[9]);
    c->x[16] = (uint64_t)(0x700520e000ull);
    c->x[16] = (uint64_t)(c->x[16] + 0x0ull);
    { uint64_t ea = c->x[16] + 0x0ull; uint64_t v = LD64(ea); c->x[16] = (uint64_t)(v); }
    c->pc = c->x[16]; c->x[30] = 0x7005206098ull; rt_dispatch(c); c->pc = 0;
L_7005206098:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x40ull);
    c->pc = 0; return;
}

void f_7005301300(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->pc = 0x70023bb4bcull; f_70023bb4b8(c); c->pc = 0; return;
}

void f_7005301400(Cpu *c) {
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
    c->x[3] = (uint64_t)(c->x[3] + 0x700ull);
    c->x[30] = 0x70053014b0ull; f_7005306ec0(c);
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

void f_7005302300(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x1e0ull);
    c->pc = 0x70002b6904ull; f_70002b6900(c); c->pc = 0; return;
}

void f_7005302400(Cpu *c) {
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
    c->x[3] = (uint64_t)(c->x[3] + 0x700ull);
    c->x[30] = 0x70053024b0ull; f_70053088f8(c);
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

void f_70053040b4(Cpu *c) {
    if (c->x[2] == 0) goto L_7005304144;
    (void)(subs64(c, c->x[2], 0x8ull));
    if (COND_CS(c)) goto L_70053040c8;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_7005304130;
L_70053040c8:;
    (void)(subs64(c, c->x[2], 0x20ull));
    if (COND_CS(c)) goto L_70053040d8;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_7005304108;
L_70053040d8:;
    VW(vu8, 1, 0, (vu8){} + (uint8_t)c->x[1]);
    c->x[8] = (uint64_t)(c->x[2] & 0xffffffffffffffe0ull);
    c->x[9] = (uint64_t)(c->x[0] + 0x10ull);
    c->x[10] = (uint64_t)(0ull | c->x[8]);
L_70053040e8:;
    c->x[10] = (uint64_t)(subs64(c, c->x[10], 0x20ull));
    { uint64_t ea = c->x[9] - 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x20ull);
    if (COND_NE(c)) goto L_70053040e8;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_7005304144;
    (void)(logic64(c, c->x[2] & 0x18ull));
    if (COND_EQ(c)) goto L_7005304130;
L_7005304108:;
    VW(vu8, 0, 0, (vu8){} + (uint8_t)c->x[1]);
    c->x[10] = (uint64_t)(0ull | c->x[8]);
    c->x[8] = (uint64_t)(c->x[2] & 0xfffffffffffffff8ull);
    c->x[9] = (uint64_t)(c->x[0] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] - c->x[8]);
L_700530411c:;
    c->x[10] = (uint64_t)(adds64(c, c->x[10], 0x8ull));
    { uint64_t ea = c->x[9]; ST64(ea, VS64(0)); c->x[9] = c->x[9] + 8; }
    if (COND_NE(c)) goto L_700530411c;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_7005304144;
L_7005304130:;
    c->x[9] = (uint64_t)(c->x[2] - c->x[8]);
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
L_7005304138:;
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x1ull));
    { uint64_t ea = c->x[8]; ST8(ea, (uint32_t)c->x[1]); c->x[8] = c->x[8] + 1; }
    if (COND_NE(c)) goto L_7005304138;
L_7005304144:;
    c->pc = 0; return;
}

void f_7005304350(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x60ull);
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->x[1] + 0x40ull; c->v[1] = LD64(ea); }
    { uint64_t ea = c->x[1] + 0x48ull; c->v[8] = LD32(ea); }
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[1] + 0x88ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[1] + 0x90ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 1), VQ(vf32, 0, 1), (vf32){});
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->sp + 0x18ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[1] + 52; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x20ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[1] + 0x3cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 36; ST64(ea, c->x[8]); }
    c->v[0] = ((sa32 *)&c->v[0])[1];
    { uint64_t ea = c->sp + 0x2cull; ST32(ea, (uint32_t)c->x[9]); }
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 8, 8, 0);
    c->x[30] = 0x70053043acull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_70053043d8;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    { uint64_t ea = c->sp + 0x0ull; c->v[1] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 0, 9, VQ(vf32, 0, 1), vsplat_s(VREG(vf32, 0), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 8, 8, 0);
    goto L_70053043e0;
L_70053043d8:;
    c->v[9] = 0x0ull;
    c->v[8] = 0x0ull;
L_70053043e0:;
    { uint64_t ea = c->x[20] + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    { uint64_t ea = c->x[20] + 0x48ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x70053043f8ull; f_700530a428(c);
    { uint64_t ea = c->x[20] + 0x7cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x50ull; c->v[1] = LD64(ea); }
    if (((c->x[8] >> 1) & 1) != 0) goto L_700530440c;
    { uint64_t ea = c->x[20] + 0x64ull; c->v[2] = LD32(ea); }
    goto L_7005304414;
L_700530440c:;
    c->x[8] = (uint32_t)(0x43fa0000ull);
    c->v[2] = (uint32_t)c->x[8];
L_7005304414:;
    { uint64_t ea = c->x[20] + 0x88ull; c->v[4] = LD64(ea); }
    { uint64_t ea = c->x[20] + 52; c->v[5] = LD64(ea); }
    c->x[8] = (uint32_t)(0x4925ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3e120000ull);
    { uint64_t ea = c->x[20] + 0x90ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x3cull; c->v[6] = LD32(ea); }
    SV_FOP_S(FOP_SUB, 0, 4, VQ(vf32, 0, 4), VQ(vf32, 0, 5), (vf32){});
    VW(vu32, 0, 5, (vu32){} + (uint32_t)c->x[8]);
    c->v[7] = VS32(1) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(1), 0);
    fp_op_s(c, FOP_SUB, 3, 3, 6);
    { uint64_t ea = c->x[19] + 0x38ull; ST32(ea, VS32(2)); }
    c->v[2] = 0x3400000034000000ull;
    { uint64_t ea = c->x[19] + 0x28ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->sp + 24; c->v[6] = LD128(ea); }
    { uint64_t ea = c->sp + 0x28ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x18ull; ST64(ea, VS64(9)); }
    SV_FOP_S(FOP_MUL, 0, 4, VQ(vf32, 0, 4), VQ(vf32, 0, 5), (vf32){});
    c->v[5] = (uint32_t)c->x[8];
    c->v[1] = COND_MI(c) ? VS32(7) : VS32(1);
    c->x[8] = (uint64_t)(0x700530a000ull);
    { uint64_t ea = c->x[19] + 32; ST32(ea, VS32(8)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[19] + 0x30ull; ST64(ea, 0ull); }
    fp_op_s(c, FOP_MUL, 3, 3, 5);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(2));
    { uint64_t ea = c->x[8] + 0x870ull; c->v[5] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0x0ull; ST128(ea, c->v[6]); }
    { uint64_t ea = c->x[19] + 0x10ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[19] + 60; ST64(ea, VS64(4)); }
    { uint64_t ea = c->x[19] + 0x44ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->x[19] + 72; ST128(ea, c->v[5]); }
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    if (COND_HI(c)) goto L_700530449c;
    { uint64_t ea = c->x[19] + 0x2cull; ST32(ea, VS32(0)); }
L_700530449c:;
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    c->sp = (uint64_t)(c->sp + 0x60ull);
    c->pc = 0; return;
}

void f_700530482c(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x140ull);
    { uint64_t ea = c->sp + 160; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); }
    { uint64_t ea = c->sp + 176; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 192; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 208; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 224; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 240; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 256; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 272; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 288; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 304; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0xe0ull);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint32_t)(0u | 0u);
    c->x[2] = (uint32_t)(0x648ull);
    c->x[30] = 0x7005304874ull; f_70053040b4(c);
    c->x[21] = (uint64_t)(0ull | c->x[20]);
    { uint64_t ea = c->x[21]; c->v[0] = LD64(ea); c->x[21] = c->x[21] + 76; }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[19] + 0x0ull; ST64(ea, VS64(0)); }
    c->x[30] = 0x7005304888ull; f_7005304148(c);
    if (((c->x[0] >> 0) & 1) == 0) goto L_700530497c;
    c->x[22] = (uint64_t)(0ull | c->x[20]);
    c->x[11] = (uint32_t)(0x7f800000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[22] + 52; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[22] = ea; c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005304980;
    if ((uint32_t)c->x[8] == 0) goto L_7005304980;
    if ((uint32_t)c->x[9] == 0) goto L_7005304980;
    c->x[23] = (uint64_t)(0ull | c->x[20]);
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[23] + 136; uint64_t a = LD32(ea), b = LD32(ea + 4); c->x[23] = ea; c->x[8] = (uint64_t)(a); c->x[9] = (uint64_t)(b); }
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[12] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    c->x[10] = (uint32_t)(0x7f7fffffull);
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[11])));
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[10])));
    if (COND_GT(c)) goto L_7005304980;
    if ((uint32_t)c->x[8] == 0) goto L_7005304980;
    if ((uint32_t)c->x[9] == 0) goto L_7005304980;
    { uint64_t ea = c->x[20] + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[20] + 0x48ull; c->v[2] = LD32(ea); }
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
    if (COND_GT(c)) goto L_7005304980;
    if ((uint32_t)c->x[8] == 0) goto L_7005304980;
    if ((uint32_t)c->x[9] == 0) goto L_7005304980;
    fp_op_s(c, FOP_MUL, 1, 1, 1);
    fp_fma_s(c, 0, 0, 0, 0, 0, 1);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005304968ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xcccdull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3dcc0000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_70053049b0;
L_700530497c:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005304980:;
    { uint64_t ea = c->sp + 304; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 288; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 272; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 256; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 240; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 224; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 208; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 192; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 176; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 160; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; }
    c->sp = (uint64_t)(c->sp + 0x140ull);
    c->pc = 0; return;
L_70053049b0:;
    { uint64_t ea = c->x[20] + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->x[20] + 0x48ull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    fp_op_s(c, FOP_MUL, 0, 8, 8);
    { uint64_t ea = c->x[29] - 96; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 88; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[29] - 84; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[29] - 76; ST32(ea, (uint32_t)c->x[9]); }
    fp_fma_s(c, 0, 0, 0, 9, 9, 0);
    fp_fma_s(c, 0, 0, 0, 10, 10, 0);
    c->x[30] = 0x70053049e8ull; f_700530a428(c);
    c->v[1] = 0x0ull;
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(1)); }
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[1] = 0x0ull;
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(1)); ST32(ea + 4, VS32(1)); }
    if (COND_LE(c)) goto L_7005304a28;
    c->v[1] = 0x3f800000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    fp_op_s(c, FOP_MUL, 2, 9, 0);
    fp_op_s(c, FOP_MUL, 1, 8, 0);
    fp_op_s(c, FOP_MUL, 0, 10, 0);
    { uint64_t ea = c->sp + 12; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(0)); }
L_7005304a28:;
    { uint64_t ea = c->x[20] + 64; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    { uint64_t ea = c->x[20] + 0x48ull; c->v[1] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    c->x[30] = 0x7005304a40ull; f_700530a428(c);
    { uint64_t ea = c->x[20] + 0x7cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[20] + 0x50ull; c->v[1] = LD64(ea); }
    if (((c->x[8] >> 1) & 1) != 0) goto L_7005304a54;
    { uint64_t ea = c->x[20] + 0x64ull; c->v[2] = LD32(ea); }
    goto L_7005304a5c;
L_7005304a54:;
    c->x[8] = (uint32_t)(0x43fa0000ull);
    c->v[2] = (uint32_t)c->x[8];
L_7005304a5c:;
    { uint64_t ea = c->sp + 0x58ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[20] + 0x88ull; c->v[2] = LD64(ea); }
    { uint64_t ea = c->x[20] + 52; c->v[5] = LD64(ea); }
    { uint64_t ea = c->x[29] - 96; c->v[4] = LD128(ea); }
    c->x[8] = (uint32_t)(0x4925ull);
    c->v[6] = VS32(1) ^ 0x80000000u;
    SV_FOP_S(FOP_SUB, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 5), (vf32){});
    { uint64_t ea = c->sp + 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[7] = a; c->v[5] = b; }
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3e120000ull);
    { uint64_t ea = c->x[20] + 0x90ull; c->v[3] = LD32(ea); }
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[4]); }
    { uint64_t ea = c->x[20] + 0x3cull; c->v[4] = LD32(ea); }
    c->nzcv = cmp_s(c, VSF32(1), 0);
    { uint64_t ea = c->sp + 0x48ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->sp + 56; ST32(ea, VS32(5)); ST32(ea + 4, VS32(7)); }
    VW(vu32, 0, 5, (vu32){} + (uint32_t)c->x[8]);
    c->x[9] = (uint64_t)(0x700530a000ull);
    fp_op_s(c, FOP_SUB, 3, 3, 4);
    { uint64_t ea = c->sp + 0x8ull; c->v[4] = LD32(ea); }
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, 0ull); }
    c->v[1] = COND_MI(c) ? VS32(6) : VS32(1);
    { uint64_t ea = c->sp + 0x78ull; ST32(ea, 0u); }
    { uint64_t ea = c->sp + 64; ST32(ea, VS32(4)); ST32(ea + 4, VS32(0)); }
    c->v[4] = (uint32_t)c->x[8];
    { uint64_t ea = c->x[29] - 80; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    SV_FOP_S(FOP_MUL, 0, 2, VQ(vf32, 0, 2), VQ(vf32, 0, 5), (vf32){});
    c->v[5] = 0x3400000034000000ull;
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    fp_op_s(c, FOP_MUL, 3, 3, 4);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(5));
    { uint64_t ea = c->x[9] + 0x870ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->sp + 92; ST64(ea, VS64(2)); }
    { uint64_t ea = c->sp + 0x64ull; ST32(ea, VS32(3)); }
    { uint64_t ea = c->sp + 104; ST128(ea, c->v[1]); }
    if (COND_HI(c)) goto L_7005304af0;
    { uint64_t ea = c->sp + 0x4cull; ST32(ea, VS32(0)); }
L_7005304af0:;
    { uint64_t ea = c->x[22] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[8] + 32; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->v[8] = 0x0ull;
    c->x[23] = (uint64_t)(c->x[8] | 0xcull);
    { uint64_t ea = c->x[22] + 20; ST64(ea, c->x[9]); c->x[22] = ea; }
    { uint64_t ea = c->x[8] + 24; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[22] + 0x8ull; ST32(ea, (uint32_t)c->x[10]); }
    c->x[10] = (uint64_t)(c->x[22] + 0x624ull);
    c->x[24] = (uint32_t)(0x800ull);
    { uint64_t ea = c->x[22] + 0x62cull; ST32(ea, (uint32_t)c->x[11]); }
    c->x[11] = (uint32_t)(0x1ull);
    c->x[26] = (uint32_t)(0x7f800000ull);
    { uint64_t ea = c->x[10] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[9] = (uint32_t)(0x5ull);
    c->x[27] = (uint32_t)(0x7f7fffffull);
    { uint64_t ea = c->x[20] + 0x7cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[28] = (uint32_t)(0x43700000ull);
    { uint64_t ea = c->x[22] - 12; ST32(ea, (uint32_t)c->x[11]); }
    c->x[25] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9]);
    { uint64_t ea = c->x[22] + 0x630ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005304b54;
L_7005304b4c:;
    c->x[24] = (uint32_t)(subs32(c, (uint32_t)c->x[24], 0x1ull));
    if (COND_EQ(c)) goto L_7005304d08;
L_7005304b54:;
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    c->x[1] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005304b60ull; f_7005304548(c);
    { uint64_t ea = c->sp + 48; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[14] = b; }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x2cull; c->v[13] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(10));
    c->x[9] = (uint32_t)(VS32(14));
    c->x[10] = (uint32_t)(VS32(13));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[27])));
    if (COND_GT(c)) goto L_7005304980;
    if ((uint32_t)c->x[9] == 0) goto L_7005304980;
    if ((uint32_t)c->x[8] == 0) goto L_7005304980;
    { uint64_t ea = c->sp + 60; u128 a = LD32(ea), b = LD32(ea + 4); c->v[15] = a; c->v[11] = b; }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp + 0x38ull; c->v[9] = LD32(ea); }
    c->x[8] = (uint32_t)(VS32(15));
    c->x[9] = (uint32_t)(VS32(11));
    c->x[10] = (uint32_t)(VS32(9));
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & 0x7fffffffull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & 0x7fffffffull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] & 0x7fffffffull);
    c->x[9] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[26])));
    c->x[8] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)(0u + 1));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[27])));
    if (COND_GT(c)) goto L_7005304980;
    if ((uint32_t)c->x[9] == 0) goto L_7005304980;
    if ((uint32_t)c->x[8] == 0) goto L_7005304980;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xcull);
    { uint64_t ea = c->x[20] + 0x68ull; c->v[12] = LD32(ea); }
    { uint64_t ea = c->sp + 0x4ull; ST32(ea, VS32(8)); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] - 0x1ull);
    c->x[8] = (uint64_t)(c->x[22] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    { uint64_t ea = c->x[8] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[8] + 0x8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 14, 2);
    fp_op_s(c, FOP_SUB, 0, 10, 0);
    fp_op_s(c, FOP_SUB, 1, 13, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005304c24ull; f_700530a428(c);
    c->v[8] = VS32(0);
    if ((uint32_t)c->x[25] == 0) goto L_7005304c5c;
    { uint64_t ea = c->x[20] + 52; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[0] = b; }
    { uint64_t ea = c->x[20] + 0x3cull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 14, 2);
    fp_op_s(c, FOP_SUB, 0, 10, 0);
    fp_op_s(c, FOP_SUB, 1, 13, 1);
    fp_op_s(c, FOP_MUL, 0, 0, 0);
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->x[30] = 0x7005304c50ull; f_700530a428(c);
    c->v[1] = 0x40a00000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_GE(c)) goto L_7005304d10;
L_7005304c5c:;
    c->x[8] = (uint32_t)(0x42400000ull);
    { uint64_t ea = c->x[20] + 0x64ull; c->v[0] = LD32(ea); }
    c->v[2] = 0x40a00000ull;
    c->v[1] = (uint32_t)c->x[8];
    c->v[3] = 0x3fc00000ull;
    c->x[8] = (uint32_t)(0xf2e5ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x3f7f0000ull);
    fp_op_s(c, FOP_DIV, 0, 0, 1);
    { uint64_t ea = c->sp + 0xcull; c->v[1] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 1, 1, 15);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[2] = COND_GT(c) ? VS32(2) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(3));
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 0, 9, 1);
    c->v[1] = COND_MI(c) ? VS32(3) : VS32(2);
    { uint64_t ea = c->sp + 0x8ull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 0, 2, 11, 0);
    c->nzcv = cmp_s(c, VSF32(8), VSF32(1));
    { uint64_t ea = c->sp + 0x4ull; c->v[8] = LD32(ea); }
    c->v[1] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_ADD, 8, 8, 12);
    c->nzcv = COND_LT(c) ? cmp_s(c, VSF32(0), VSF32(1)) : 0x80000000ull;
    c->v[0] = (uint32_t)c->x[28];
    c->nzcv = COND_PL(c) ? cmp_s(c, VSF32(8), VSF32(0)) : 0x0ull;
    if (COND_LT(c)) goto L_7005304b4c;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xcull);
    { uint64_t ea = c->x[23] + 0x0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[22] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    c->x[0] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[23] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[0], 0x81ull));
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, (uint32_t)c->x[8]); }
    if (COND_EQ(c)) goto L_7005304980;
    c->v[0] = (uint32_t)c->x[28];
    { uint64_t ea = c->sp + 8; ST32(ea, VS32(11)); ST32(ea + 4, VS32(15)); }
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(9)); }
    c->nzcv = cmp_s(c, VSF32(8), VSF32(0));
    if (COND_LT(c)) goto L_7005304b4c;
    goto L_7005304980;
L_7005304d08:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    goto L_7005304980;
L_7005304d10:;
    { uint64_t ea = c->x[20] + 0x40ull; c->v[1] = LD64(ea); }
    { uint64_t ea = c->x[20] + 0x48ull; c->v[10] = LD32(ea); }
    { uint64_t ea = c->x[20] + 0x3cull; c->v[8] = LD32(ea); }
    { uint64_t ea = c->x[20] + 52; c->v[9] = LD64(ea); }
    SV_FOP_S(FOP_MUL, 0, 0, VQ(vf32, 0, 1), VQ(vf32, 0, 1), (vf32){});
    { uint64_t ea = c->sp + 0x10ull; ST128(ea, c->v[1]); }
    c->v[0] = ((sa32 *)&c->v[0])[1];
    fp_fma_s(c, 0, 0, 0, 1, 1, 0);
    fp_fma_s(c, 0, 0, 0, 10, 10, 0);
    c->x[30] = 0x7005304d38ull; f_700530a428(c);
    c->x[8] = (uint32_t)(0xbf95ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x33d60000ull);
    c->v[1] = (uint32_t)c->x[8];
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_LE(c)) goto L_7005304d74;
    c->v[1] = 0x3f800000ull;
    c->v[2] = 0x40a0000040a00000ull;
    c->v[3] = 0x40a00000ull;
    fp_op_s(c, FOP_DIV, 0, 1, 0);
    { uint64_t ea = c->sp + 0x10ull; c->v[1] = LD128(ea); }
    SV_FOP_S(FOP_MUL, 0, 1, VQ(vf32, 0, 1), vsplat_s(VREG(vf32, 0), 0, 0), (vf32){});
    fp_op_s(c, FOP_MUL, 0, 10, 0);
    SV_FOP_S(FOP_MUL, 0, 1, VQ(vf32, 0, 1), VQ(vf32, 0, 2), (vf32){});
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    goto L_7005304d7c;
L_7005304d74:;
    c->v[1] = 0x0ull;
    c->v[0] = 0x0ull;
L_7005304d7c:;
    { uint64_t ea = c->x[19] + 0x8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    SV_FOP_S(FOP_ADD, 0, 1, VQ(vf32, 0, 9), VQ(vf32, 0, 1), (vf32){});
    c->x[9] = (uint32_t)(0xcull);
    fp_op_s(c, FOP_ADD, 0, 8, 0);
    c->x[9] = (uint64_t)(c->x[22] + (uint64_t)(uint32_t)c->x[8] * (uint64_t)(uint32_t)c->x[9]);
    c->x[0] = (uint32_t)((uint32_t)c->x[8] + 0x1ull);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, (uint32_t)c->x[0]); }
    { uint64_t ea = c->x[9] + 0x0ull; ST64(ea, VS64(1)); }
    { uint64_t ea = c->x[9] + 0x8ull; ST32(ea, VS32(0)); }
    goto L_7005304980;
}

void f_70053061ac(Cpu *c) {
    { uint64_t ea = c->x[1] + 0x78ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs32(c, (uint32_t)c->x[9], 0x1ull));
    if (COND_NE(c)) goto L_7005306c98;
    { uint64_t ea = c->x[1] + 0x70ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] != 0) goto L_7005306c98;
    { uint64_t ea = c->x[1] + 0x7cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] != 0) goto L_7005306c98;
    c->sp = (uint64_t)(c->sp - 0x90ull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[28]); ST64(ea + 8, c->x[27]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[26]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x30ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xcb4ull);
    c->x[13] = (uint32_t)(0x3a4cull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xe2d0000ull);
    c->x[12] = (uint32_t)(0x570ull);
    c->x[13] = (uint32_t)((c->x[13] & 0xffffffff0000ffffull) | 0x1d20000ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[8] - (uint32_t)c->x[9]);
    c->x[14] = (uint64_t)(0xffffffffffff4a00ull);
    c->x[11] = (uint32_t)((uint32_t)c->x[10] + (uint32_t)c->x[11]);
    c->x[10] = (uint32_t)(0x14000000ull);
    c->x[10] = (uint32_t)(((uint32_t)c->x[10] & 0xfc000000ull) | ((((uint32_t)c->x[10] & 0x3c000000ull) | (ROR32((uint32_t)c->x[11], 2) & 0xc3ffffffull)) & 0x3ffffffull));
    c->x[11] = (uint64_t)(0x700530a000ull);
    c->x[11] = (uint64_t)(c->x[11] + 0xc54ull);
L_7005306224:;
    { uint64_t ea = c->x[11] - 12; uint64_t v = LD64(ea); c->x[18] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] - 4; uint64_t v = LD32(ea); c->x[16] = (uint64_t)(v); }
    c->x[15] = (uint64_t)(c->x[18] + c->x[9]);
    { uint64_t ea = c->x[15] + 0x0ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[16])));
    if (COND_EQ(c)) goto L_700530625c;
    (void)(subs64(c, c->x[18], (uint64_t)(c->x[13])));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_NE(c)) goto L_7005306c7c;
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005306c7c;
    { uint64_t ea = c->x[8] + c->x[14]; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[17], (uint32_t)((uint32_t)c->x[16])));
    if (COND_NE(c)) goto L_7005306c78;
L_700530625c:;
    { uint64_t ea = c->x[15] + 0x4ull; uint64_t v = LD32(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x0ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[17])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[15] + 0x8ull; uint64_t v = LD32(ea); c->x[16] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x4ull; uint64_t v = LD32(ea); c->x[17] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[16], (uint32_t)((uint32_t)c->x[17])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[15] + 0xcull; uint64_t v = LD32(ea); c->x[15] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x8ull; uint64_t v = LD32(ea); c->x[16] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[15], (uint32_t)((uint32_t)c->x[16])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[12] = (uint64_t)(subs64(c, c->x[12], 0x18ull));
    c->x[11] = (uint64_t)(c->x[11] + 0x18ull);
    if (COND_NE(c)) goto L_7005306224;
    c->x[10] = (uint32_t)(0x9a04ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x11c0000ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[10]);
    { uint64_t ea = c->x[9] + 0x2ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD16(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x3ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[12] | ((uint32_t)c->x[10] << 16));
    c->x[12] = (uint32_t)(0xc3ffull);
    c->x[12] = (uint32_t)((c->x[12] & 0xffffffff0000ffffull) | 0xd1020000ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | ((uint32_t)c->x[11] << 24));
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[12])));
    if (COND_NE(c)) goto L_70053064b0;
L_70053062c8:;
    { uint64_t ea = c->x[1] + 0x18ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x22aull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x22bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x22cull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(ROR64(c->x[9], 48) & 0xffffffffffff0000ull);
    c->x[9] = (uint64_t)(c->x[9] | (c->x[10] << 24));
    c->x[9] = (uint64_t)(c->x[9] | (c->x[11] << 32));
    c->x[11] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[10] = (uint64_t)(c->x[9] - 0x10000ull);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_HI(c)) goto L_7005306c7c;
    { uint64_t ea = c->x[19] + 0x228ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[10] & 0x7ull);
    if (c->x[11] != 0) goto L_7005306c7c;
    { uint64_t ea = c->x[19] + 0x229ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[0] = (uint32_t)(0u | 0u);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 8));
    c->x[9] = (uint64_t)(c->x[10] | c->x[9]);
    { uint64_t ea = c->x[9] + 0x42aull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x42bull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x42cull; uint64_t v = LD32(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(ROR64(c->x[10], 48) & 0xffffffffffff0000ull);
    c->x[10] = (uint64_t)(c->x[10] | (c->x[11] << 24));
    c->x[10] = (uint64_t)(c->x[10] | (c->x[12] << 32));
    c->x[12] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[12] = (uint64_t)((c->x[12] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[11] = (uint64_t)(c->x[10] - 0x10000ull);
    (void)(subs64(c, c->x[11], (uint64_t)(c->x[12])));
    if (COND_HI(c)) goto L_7005306c7c;
    { uint64_t ea = c->x[9] + 0x428ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[12] = (uint64_t)(c->x[11] & 0x7ull);
    if (c->x[12] != 0) goto L_7005306c7c;
    { uint64_t ea = c->x[9] + 0x429ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[11] | (c->x[9] << 8));
    c->x[0] = (uint64_t)(c->x[9] | c->x[10]);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint32_t)(0xd0ull);
    c->x[25] = (uint64_t)(0ull | c->x[2]);
    c->x[24] = (uint64_t)(0ull | c->x[8]);
    c->x[23] = (uint64_t)(0ull | c->x[3]);
    c->x[30] = 0x7005306380ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[8] = (uint64_t)(c->x[21] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x70053063b0ull; f_7005305bc0(c);
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[19])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x70053063c4ull; f_7005305bc0(c);
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x3970ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x3690000ull);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[10] = (uint32_t)(0x79dbull);
    c->x[11] = (uint32_t)(0xbdc2ull);
    c->x[12] = (uint64_t)(c->x[9] + 0x98b000ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x2c70000ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x2c40000ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[10] = (uint64_t)(c->x[9] + c->x[10]);
    c->x[9] = (uint64_t)(c->x[9] + c->x[11]);
    { uint64_t ea = c->x[29] - 16; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    c->x[9] = (uint64_t)(c->x[12] + 0x50ull);
    c->pc = c->x[9]; c->x[30] = 0x7005306408ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x90a4ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2b40000ull);
    { uint64_t ea = c->x[22] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->x[29] - 0x8ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    c->x[2] = (uint64_t)(c->x[29] - 0x10ull);
    c->pc = c->x[8]; c->x[30] = 0x700530642cull; rt_dispatch(c); c->pc = 0;
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[8] = (uint64_t)(c->x[19] - 0x10000ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[19] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    (void)(subs64(c, c->x[19], (uint64_t)(c->x[20])));
    c->x[0] = (uint32_t)(0u | 0u);
    if (COND_EQ(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(0ull | 0xffffff8000000000ull);
    c->x[11] = (uint64_t)(0ull | 0xffffff800001ffffull);
    c->x[9] = (uint64_t)(c->x[20] + c->x[9]);
    c->x[11] = (uint64_t)((c->x[11] & 0xffffffffffff0000ull) | 0x0ull);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[11])));
    if (COND_CC(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[20] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[25] - c->x[21]);
    c->x[8] = (uint64_t)(0ull | c->x[25]);
    c->x[10] = (uint64_t)(0ull | c->x[22]);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_7005306618;
    c->x[11] = (uint64_t)(0ull | 0ull);
    c->x[9] = (uint64_t)(0ull | c->x[23]);
L_7005306498:;
    { uint64_t ea = c->x[21] + c->x[11]; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[11]; ST8(ea, (uint32_t)c->x[12]); }
    c->x[11] = (uint64_t)(c->x[11] + 0x1ull);
    (void)(subs64(c, c->x[11], 0x240ull));
    if (COND_NE(c)) goto L_7005306498;
    goto L_70053066ac;
L_70053064b0:;
    c->x[11] = (uint32_t)((uint32_t)c->x[11] & 0xfcull);
    (void)(subs32(c, (uint32_t)c->x[11], 0x14ull));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[10] = (uint32_t)(((uint32_t)(-(int32_t)(((uint32_t)c->x[10] >> 25) & 1)) & 0xf0000000ull) | (ROR32((uint32_t)c->x[10], 30) & 0xffffffcull));
    c->x[11] = (uint32_t)(0x7bfdull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xa9bc0000ull);
    c->x[9] = (uint64_t)(c->x[9] + (uint64_t)(int64_t)(int32_t)c->x[10]);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x3fdull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x91000000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0xbf3ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xf9000000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x3f3ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xaa000000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x2fe3ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xb9000000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x14ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x7e2ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xa9030000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x1bull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)((uint32_t)c->x[10] & 0xfcull);
    (void)(subs32(c, (uint32_t)c->x[11], 0x94ull));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[9] = (uint64_t)(c->x[9] + 0x18ull);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[10], 8) & 0xff000000ull);
    { uint64_t ea = c->x[9] + 0x2ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD8(ea); c->x[12] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | ((uint32_t)c->x[11] << 16));
    { uint64_t ea = c->x[9] + 0x1ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | (uint32_t)c->x[12]);
    c->x[10] = (uint32_t)(ROR32((uint32_t)c->x[10], 26) & 0xffffffc0ull);
    c->x[10] = (uint32_t)((uint32_t)c->x[10] | ((uint32_t)c->x[11] << 14));
    c->x[11] = (uint32_t)(0x1361ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0xd0000000ull);
    c->x[10] = (uint32_t)(((uint32_t)(-(int32_t)(((uint32_t)c->x[10] >> 31) & 1)) & 0xf0000000ull) | (ROR32((uint32_t)c->x[10], 4) & 0xfffffffull));
    c->x[9] = (uint64_t)(c->x[9] + (uint64_t)(int64_t)(int32_t)c->x[10]);
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[21] = (uint64_t)(0ull | c->x[8]);
    { uint64_t ea = c->x[9] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0xc821ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xf9460000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0xc420ull);
    c->x[8] = (uint32_t)((c->x[8] & 0xffffffff0000ffffull) | 0x39400000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0xcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint32_t)(0x40ull);
    c->x[11] = (uint32_t)((c->x[11] & 0xffffffff0000ffffull) | 0x37000000ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x10ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] + 0x400ull);
    (void)(subs32(c, (uint32_t)c->x[10], (uint32_t)((uint32_t)c->x[8])));
    if (COND_NE(c)) goto L_7005306c78;
    { uint64_t ea = c->x[9] + 0x14ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x3c0ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xd65f0000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[10])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[22] = (uint64_t)(0ull | c->x[3]);
    c->pc = c->x[9]; c->x[30] = 0x7005306600ull; rt_dispatch(c); c->pc = 0;
    c->x[3] = (uint64_t)(0ull | c->x[22]);
    c->x[8] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    if (((c->x[0] >> 0) & 1) == 0) goto L_70053062c8;
    goto L_7005306c78;
L_7005306618:;
    { uint64_t ea = c->x[21] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[9] = (uint64_t)(0ull | c->x[23]);
    { uint64_t ea = c->x[8] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 224; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 320; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 384; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 416; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 448; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 480; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_70053066ac:;
    { uint64_t ea = c->x[10] + 0x18ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[11] = (uint64_t)(c->x[8] + 0x240ull);
    c->x[12] = (uint64_t)(c->x[11] - c->x[10]);
    (void)(subs64(c, c->x[12], 0x1full));
    if (COND_HI(c)) goto L_70053066dc;
    c->x[12] = (uint64_t)(0ull | 0ull);
L_70053066c4:;
    { uint64_t ea = c->x[10] + c->x[12]; uint64_t v = LD8(ea); c->x[13] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + c->x[12]; ST8(ea, (uint32_t)c->x[13]); }
    c->x[12] = (uint64_t)(c->x[12] + 0x1ull);
    (void)(subs64(c, c->x[12], 0x340ull));
    if (COND_NE(c)) goto L_70053066c4;
    goto L_70053067dc;
L_70053066dc:;
    { uint64_t ea = c->x[10] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 576; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 608; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 640; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 672; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 704; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 736; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 768; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 800; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 832; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 864; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 896; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 928; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 384; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 960; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 416; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 992; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[10] + 448; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x400ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x410ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 480; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x420ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x430ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 512; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x440ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x450ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 544; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x460ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x470ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 576; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x480ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x490ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 608; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x4a0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x4b0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 640; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x4c0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x4d0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 672; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x4e0ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x4f0ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 704; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x500ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x510ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 736; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x520ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x530ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 768; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x540ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x550ull; ST128(ea, c->v[1]); }
    { uint64_t ea = c->x[10] + 800; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[8] + 0x560ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[8] + 0x570ull; ST128(ea, c->v[1]); }
L_70053067dc:;
    c->x[10] = (uint64_t)(c->x[8] + 0x580ull);
    c->x[9] = (uint64_t)(c->x[9] + 0x420ull);
    c->x[28] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[26] = (uint64_t)(0ull | 0ull);
    { uint64_t ea = c->sp + 8; ST64(ea, c->x[9]); ST64(ea + 8, c->x[10]); }
    c->x[8] = (uint64_t)(c->x[8] + 0x700ull);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[28] = (uint64_t)((c->x[28] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[21] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
L_7005306804:;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x70ull);
    c->x[27] = (uint32_t)(0u | (uint32_t)c->x[9]);
    c->x[30] = 0x7005306814ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[28])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x700530683cull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[28])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint32_t)(0x28ull);
    c->x[30] = 0x7005306864ull; f_7005305bc0(c);
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xd170ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x200000ull);
    c->x[8] = (uint64_t)(c->x[8] + c->x[9]);
    (void)(subs64(c, c->x[0], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005306c78;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[1] = (uint32_t)(0x10ull);
    c->x[30] = 0x7005306888ull; f_7005305bc0(c);
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    if (c->x[0] == 0) goto L_70053068a8;
    c->x[8] = (uint64_t)(c->x[22] - 0x10000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[28])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[8] = (uint64_t)(c->x[22] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306c7c;
L_70053068a8:;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x60ull);
    c->x[30] = 0x70053068b4ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    if (c->x[0] == 0) goto L_70053068d4;
    c->x[9] = (uint64_t)(c->x[8] - 0x10000ull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[28])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
L_70053068d4:;
    c->x[9] = (uint32_t)(0x270ull);
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(0ull + c->x[26] * c->x[9]);
    c->x[25] = (uint64_t)(c->x[10] + c->x[9]);
    c->x[9] = (uint64_t)(c->x[25] - c->x[21]);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_700530690c;
    c->x[9] = (uint64_t)(0ull | 0ull);
L_70053068f4:;
    { uint64_t ea = c->x[21] + c->x[9]; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[25] + c->x[9]; ST8(ea, (uint32_t)c->x[10]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x180ull));
    if (COND_NE(c)) goto L_70053068f4;
    goto L_700530696c;
L_700530690c:;
    { uint64_t ea = c->x[21] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 0; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 224; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 256; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 288; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 320; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 320; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[21] + 352; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_700530696c:;
    (void)(subs64(c, c->x[8], 0x0ull));
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    { uint64_t ea = c->x[25] + 0x26cull; ST32(ea, (uint32_t)c->x[9]); }
    if (c->x[8] == 0) goto L_70053069ec;
    { uint64_t ea = c->sp + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[10] = (uint32_t)(0x270ull);
    c->x[9] = (uint64_t)(c->x[9] + c->x[26] * c->x[10]);
    c->x[9] = (uint64_t)(c->x[9] - c->x[8]);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_70053069b4;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(c->x[25] + 0x180ull);
L_700530699c:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0xe0ull));
    if (COND_NE(c)) goto L_700530699c;
    goto L_70053069ec;
L_70053069b4:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 384; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 416; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 448; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 480; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[25] + 576; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_70053069ec:;
    if (c->x[22] == 0) goto L_70053069fc;
    c->x[0] = (uint64_t)(0ull | c->x[22]);
    c->x[30] = 0x70053069f8ull; f_70053099d4(c);
    goto L_7005306a08;
L_70053069fc:;
    c->v[2] = 0x0ull;
    c->v[1] = 0x0ull;
    c->v[0] = 0x0ull;
L_7005306a08:;
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint32_t)(0x148ull);
    { uint64_t ea = c->x[25] + 0x260ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[25] + 0x264ull; ST32(ea, VS32(1)); }
    { uint64_t ea = c->x[25] + 0x268ull; ST32(ea, VS32(2)); }
    c->x[30] = 0x7005306a20ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[28])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    { uint64_t ea = c->sp + 0x8ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[20]);
    c->x[10] = (uint64_t)(c->x[10] + (c->x[26] << 5));
    c->x[26] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[10] + 0x0ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x2ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x2ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x3ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x3ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x4ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x5ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x5ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x6ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x6ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x7ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x7ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x8ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x8ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x9ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x9ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xaull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xaull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xbull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xbull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xcull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xcull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xdull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xdull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xeull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xeull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0xfull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0xfull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x10ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x10ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x11ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x11ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x12ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x12ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x13ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x13ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x14ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x14ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x15ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x15ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x16ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x16ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x17ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x17ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x18ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x18ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x19ull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x19ull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1aull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1aull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1bull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1bull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1cull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1cull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1dull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1dull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1eull; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1eull; ST8(ea, (uint32_t)c->x[11]); }
    { uint64_t ea = c->x[8] + 0x1full; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + 0x1full; ST8(ea, (uint32_t)c->x[8]); }
    if (((c->x[27] >> 0) & 1) != 0) goto L_7005306804;
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[8] = (uint64_t)(c->x[8] + 0xb69000ull);
    c->x[9] = (uint64_t)(c->x[8] + 0x4d0ull);
    c->x[8] = (uint64_t)(c->sp + 0x18ull);
    c->pc = c->x[9]; c->x[30] = 0x7005306b68ull; rt_dispatch(c); c->pc = 0;
    { uint64_t ea = c->sp + 0x1cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005306c78;
    { uint64_t ea = c->sp + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[24] + 0x0ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint32_t)(0xdac0ull);
    c->x[1] = (uint32_t)((c->x[1] & 0xffffffff0000ffffull) | 0x3950000ull);
    { uint64_t ea = c->x[23] + 0x18ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint64_t)(0x7005309000ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x9e0ull);
    { uint64_t ea = c->x[23] + 0; ST64(ea, c->x[0]); ST64(ea + 8, c->x[8]); }
    c->x[30] = 0x7005306b94ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[30] = 0x7005306bc4ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[8]);
    c->x[1] = (uint32_t)(0x18ull);
    c->x[30] = 0x7005306bf4ull; f_7005305bc0(c);
    c->x[8] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[9] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[8] = (uint64_t)((c->x[8] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[8])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[8] = (uint64_t)(c->x[19] & 0x7ull);
    if (c->x[8] != 0) goto L_7005306c7c;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x48ull);
    c->x[30] = 0x7005306c24ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[23] - c->x[8]);
    c->x[9] = (uint64_t)(c->x[9] + 0x20ull);
    (void)(subs64(c, c->x[9], 0x1full));
    if (COND_HI(c)) goto L_7005306c9c;
    c->x[9] = (uint64_t)(0ull | 0ull);
    c->x[10] = (uint64_t)(c->x[23] + 0x20ull);
L_7005306c60:;
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[10] + c->x[9]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x1ull);
    (void)(subs64(c, c->x[9], 0x100ull));
    if (COND_NE(c)) goto L_7005306c60;
    goto L_7005306cdc;
L_7005306c78:;
    c->x[0] = (uint32_t)(0u | 0u);
L_7005306c7c:;
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[26] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[27] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x90ull);
L_7005306c98:;
    c->pc = 0; return;
L_7005306c9c:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 32; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 64; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 96; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 128; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 160; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 192; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 224; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 256; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_7005306cdc:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x58ull);
    c->x[30] = 0x7005306ce8ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[23] + 0x120ull);
    c->x[10] = (uint64_t)(c->x[9] - c->x[8]);
    (void)(subs64(c, c->x[10], 0x1full));
    if (COND_HI(c)) goto L_7005306d38;
    c->x[10] = (uint64_t)(0ull | 0ull);
L_7005306d20:;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[10]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[10], 0x100ull));
    if (COND_NE(c)) goto L_7005306d20;
    goto L_7005306d78;
L_7005306d38:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 288; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 320; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 352; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 384; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 416; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 448; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 480; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 512; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_7005306d78:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x68ull);
    c->x[30] = 0x7005306d84ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[23] + 0x220ull);
    c->x[10] = (uint64_t)(c->x[9] - c->x[8]);
    (void)(subs64(c, c->x[10], 0x1full));
    if (COND_HI(c)) goto L_7005306dd4;
    c->x[10] = (uint64_t)(0ull | 0ull);
L_7005306dbc:;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[10]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[10], 0x100ull));
    if (COND_NE(c)) goto L_7005306dbc;
    goto L_7005306e14;
L_7005306dd4:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 544; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 576; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 608; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 640; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 672; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 704; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 736; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 768; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
L_7005306e14:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0x78ull);
    c->x[30] = 0x7005306e20ull; f_7005305bc0(c);
    c->x[9] = (uint64_t)(0ull | 0x7ffffe0000ull);
    c->x[10] = (uint64_t)(c->x[0] - 0x10000ull);
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint64_t)((c->x[9] & 0xffffffffffff0000ull) | 0xffffull);
    c->x[0] = (uint32_t)(0u | 0u);
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[9])));
    if (COND_HI(c)) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[8] & 0x7ull);
    if (c->x[9] != 0) goto L_7005306c7c;
    c->x[9] = (uint64_t)(c->x[23] + 0x320ull);
    c->x[10] = (uint64_t)(c->x[9] - c->x[8]);
    (void)(subs64(c, c->x[10], 0x1full));
    if (COND_HI(c)) goto L_7005306e74;
    c->x[10] = (uint64_t)(0ull | 0ull);
    c->x[0] = (uint32_t)(0x1ull);
L_7005306e5c:;
    { uint64_t ea = c->x[8] + c->x[10]; uint64_t v = LD8(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[9] + c->x[10]; ST8(ea, (uint32_t)c->x[11]); }
    c->x[10] = (uint64_t)(c->x[10] + 0x1ull);
    (void)(subs64(c, c->x[10], 0x100ull));
    if (COND_NE(c)) goto L_7005306e5c;
    goto L_7005306c7c;
L_7005306e74:;
    { uint64_t ea = c->x[8] + 0; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[23] + 800; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 32; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 832; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 64; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 864; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 96; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 896; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 128; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 928; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 160; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 960; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 192; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 992; ST128(ea, c->v[0]); ST128(ea + 16, c->v[1]); }
    { uint64_t ea = c->x[8] + 224; u128 a = LD128(ea), b = LD128(ea + 16); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[23] + 0x400ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->x[23] + 0x410ull; ST128(ea, c->v[1]); }
    goto L_7005306c7c;
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

void f_7005313234(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0xb400ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + c->x[9]);
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

void f_700531345c(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0xa460ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; ST32(ea, (uint32_t)c->x[3]); }
    c->pc = 0; return;
}

void f_7005313478(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0xb000ull);
    c->pc = 0; return;
}

void f_700531348c(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0xa460ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x10000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + c->x[9]; uint64_t v = LD32(ea); c->x[0] = (uint64_t)(v); }
    c->pc = 0; return;
}

void f_70053134a8(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + 0x4000ull);
    c->pc = 0; return;
}

void f_70053134bc(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x7410ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[0]; rt_dispatch(c); c->pc = 0; return;
}

void f_70053134e0(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x7440ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[0]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005313504(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x7450ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[0]; rt_dispatch(c); c->pc = 0; return;
}

void f_7005313528(Cpu *c) {
    c->x[8] = (uint64_t)(0x700531c000ull);
    c->x[9] = (uint32_t)(0x7a10ull);
    { uint64_t ea = c->x[8] + 0xf50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x2bb0000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(c->x[8] + 0x1a000ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(c->x[8] + c->x[9]);
    c->pc = c->x[0]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531354c(Cpu *c) {
    if (c->x[2] == 0) goto L_70053135dc;
    (void)(subs64(c, c->x[2], 0x8ull));
    if (COND_CS(c)) goto L_7005313560;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_70053135c8;
L_7005313560:;
    (void)(subs64(c, c->x[2], 0x20ull));
    if (COND_CS(c)) goto L_7005313570;
    c->x[8] = (uint64_t)(0ull | 0ull);
    goto L_70053135a0;
L_7005313570:;
    VW(vu8, 1, 0, (vu8){} + (uint8_t)c->x[1]);
    c->x[8] = (uint64_t)(c->x[2] & 0xffffffffffffffe0ull);
    c->x[9] = (uint64_t)(c->x[0] + 0x10ull);
    c->x[10] = (uint64_t)(0ull | c->x[8]);
L_7005313580:;
    c->x[10] = (uint64_t)(subs64(c, c->x[10], 0x20ull));
    { uint64_t ea = c->x[9] - 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    c->x[9] = (uint64_t)(c->x[9] + 0x20ull);
    if (COND_NE(c)) goto L_7005313580;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_70053135dc;
    (void)(logic64(c, c->x[2] & 0x18ull));
    if (COND_EQ(c)) goto L_70053135c8;
L_70053135a0:;
    VW(vu8, 0, 0, (vu8){} + (uint8_t)c->x[1]);
    c->x[10] = (uint64_t)(0ull | c->x[8]);
    c->x[8] = (uint64_t)(c->x[2] & 0xfffffffffffffff8ull);
    c->x[9] = (uint64_t)(c->x[0] + c->x[10]);
    c->x[10] = (uint64_t)(c->x[10] - c->x[8]);
L_70053135b4:;
    c->x[10] = (uint64_t)(adds64(c, c->x[10], 0x8ull));
    { uint64_t ea = c->x[9]; ST64(ea, VS64(0)); c->x[9] = c->x[9] + 8; }
    if (COND_NE(c)) goto L_70053135b4;
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[2])));
    if (COND_EQ(c)) goto L_70053135dc;
L_70053135c8:;
    c->x[9] = (uint64_t)(c->x[2] - c->x[8]);
    c->x[8] = (uint64_t)(c->x[0] + c->x[8]);
L_70053135d0:;
    c->x[9] = (uint64_t)(subs64(c, c->x[9], 0x1ull));
    { uint64_t ea = c->x[8]; ST8(ea, (uint32_t)c->x[1]); c->x[8] = c->x[8] + 1; }
    if (COND_NE(c)) goto L_70053135d0;
L_70053135dc:;
    c->pc = 0; return;
}

void f_7005313690(Cpu *c) {
    f_70053101dc(c); return;
}

void f_7005313760(Cpu *c) {
    { uint64_t ea = c->sp - 176; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[19]); ST64(ea + 8, c->x[20]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[21]); ST64(ea + 8, c->x[22]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[23]); ST64(ea + 8, c->x[24]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[25]); ST64(ea + 8, c->x[26]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[27]); ST64(ea + 8, c->x[28]); }
    { uint64_t ea = c->sp + 96; ST64(ea, VS64(8)); ST64(ea + 8, VS64(9)); }
    { uint64_t ea = c->sp + 112; ST64(ea, VS64(10)); ST64(ea + 8, VS64(11)); }
    { uint64_t ea = c->sp + 128; ST64(ea, VS64(12)); ST64(ea + 8, VS64(13)); }
    { uint64_t ea = c->sp + 144; ST64(ea, VS64(14)); ST64(ea + 8, VS64(15)); }
    c->x[8] = (uint64_t)(LD64(0x700531c8e0ull));
    c->x[9] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[8] + 0x0ull; ST64(ea, c->x[9]); }
    c->x[16] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint64_t)(0ull | c->x[3]);
    c->x[3] = (uint64_t)(0ull | c->x[4]);
    g_wxlm_arrow_unwind = 0; c->pc = c->x[16]; c->x[30] = 0x70053137acull; rt_dispatch(c); c->pc = 0; g_wxlm_arrow_unwind = 0;
    { uint64_t ea = c->sp + 96; u128 a = LD64(ea), b = LD64(ea + 8); c->v[8] = a; c->v[9] = b; }
    { uint64_t ea = c->sp + 112; u128 a = LD64(ea), b = LD64(ea + 8); c->v[10] = a; c->v[11] = b; }
    { uint64_t ea = c->sp + 128; u128 a = LD64(ea), b = LD64(ea + 8); c->v[12] = a; c->v[13] = b; }
    { uint64_t ea = c->sp + 144; u128 a = LD64(ea), b = LD64(ea + 8); c->v[14] = a; c->v[15] = b; }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[19] = (uint64_t)(a); c->x[20] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[21] = (uint64_t)(a); c->x[22] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[23] = (uint64_t)(a); c->x[24] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[25] = (uint64_t)(a); c->x[26] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[27] = (uint64_t)(a); c->x[28] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 176; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
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

void f_70053177c8(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x1e9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70053177d4;
L_70053177d0:;
    c->pc = 0; return;
L_70053177d4:;
    { uint64_t ea = c->sp - 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[23]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[0] + 0x50ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[8] + 0x130ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053177fcull; f_700531c338(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005317870;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[2] = (uint32_t)(0x1ull);
    c->x[30] = 0x7005317810ull; f_700531c448(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317870;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x700531781cull; f_700531c3d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317870;
    { uint64_t ea = c->x[0] + 0x948ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005317870;
    { uint64_t ea = c->x[0] + 0x954ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005317870;
    c->x[10] = (uint32_t)(0xe622ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xc9ef0000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005317844:;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[13] & 0xffffffffull));
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[13], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005317884;
    if ((uint32_t)c->x[13] == 0) goto L_7005317870;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[13] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005317844;
L_7005317870:;
    { uint64_t ea = c->sp + 48; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[23] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 64; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    goto L_70053177d0;
L_7005317884:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 31) & 1) != 0) goto L_7005317870;
    { uint64_t ea = c->x[0] + 0x918ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[8])));
    if (COND_LE(c)) goto L_7005317870;
    { uint64_t ea = c->x[0] + 0x920ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    if (c->x[9] == 0) goto L_7005317870;
    { uint64_t ea = c->x[9] + (c->x[8] << 3); uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    if (c->x[21] == 0) goto L_7005317870;
    c->x[30] = 0x70053178b0ull; f_700531c520(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->x[8] + 0x30ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x70053178c4ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005317870;
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[23] = (uint64_t)(v); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053178d8ull; f_700531c568(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531790c;
    c->x[22] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70053178e8ull; f_700531c518(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531790c;
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x70053178f4ull; f_700531c540(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x9ull));
    if (COND_NE(c)) goto L_7005317918;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x40ull);
    { uint64_t ea = c->x[21] + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
L_700531790c:;
    c->x[8] = (uint32_t)(0x1ull);
L_7005317910:;
    { uint64_t ea = c->x[19] + 0x1e9ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_7005317870;
L_7005317918:;
    { uint64_t ea = c->x[22] + 0x8dull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005317964;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005317928ull; f_700531c588(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0xfffffffdull);
    c->x[8] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[8] = (uint32_t)((uint32_t)c->x[9] | ((uint32_t)c->x[8] << 1));
    { uint64_t ea = c->x[21] + 0x8ull; ST8(ea, (uint32_t)c->x[8]); }
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x1e9ull; ST8(ea, (uint32_t)c->x[8]); }
    if (((c->x[23] >> 0) & 1) == 0) goto L_7005317870;
    { uint64_t ea = c->x[19] + 0x1eaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_7005317870;
    c->x[9] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x1eaull; ST8(ea, (uint32_t)c->x[9]); }
    goto L_7005317910;
L_7005317964:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531796cull; f_700531c548(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_700531790c;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531797cull; f_700531c550(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_700531790c;
    if (((c->x[23] >> 0) & 1) != 0) goto L_70053179a4;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x7005317990ull; f_700531c540(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[0] + 0x0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x15ull));
    c->x[8] = (uint32_t)(0x4ull);
    c->x[9] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[8] + 1));
    goto L_70053179a8;
L_70053179a4:;
    c->x[9] = (uint32_t)(0x5ull);
L_70053179a8:;
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD8(ea); c->x[10] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x1ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[8] << ((uint32_t)c->x[9] & 31));
    c->x[9] = (uint32_t)((uint32_t)c->x[10] | (uint32_t)c->x[9]);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | 0x1ull);
    { uint64_t ea = c->x[21] + 0x8ull; ST8(ea, (uint32_t)c->x[9]); }
    goto L_7005317910;
}

void f_70053184b4(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x80ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x60ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x50ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[20] = (uint32_t)(0u | (uint32_t)c->x[1]);
    c->x[30] = 0x70053184d8ull; f_700531c440(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(0xffffffffffffffffull);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->sp + 0x10ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[0] + 0x600ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_7005318544;
    { uint64_t ea = c->x[21] + 0x60cull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005318544;
    c->x[10] = (uint32_t)(0x5c9aull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0xec2f0000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[13] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005318508:;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[13] & 0xffffffffull));
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[13] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[13], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_7005318538;
    if ((uint32_t)c->x[13] == 0) goto L_7005318544;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[13] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005318508;
    goto L_7005318544;
L_7005318538:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    if (((c->x[1] >> 31) & 1) == 0) goto L_70053186e4;
L_7005318544:;
    c->x[8] = (uint32_t)(0xffffffffull);
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[21] + 0x588ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    if (c->x[8] == 0) goto L_70053185ac;
    { uint64_t ea = c->x[21] + 0x594ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_70053185ac;
    c->x[10] = (uint32_t)(0x87e0ull);
    c->x[10] = (uint32_t)((c->x[10] & 0xffffffff0000ffffull) | 0x38050000ull);
    c->x[11] = (uint32_t)(udiv32((uint32_t)c->x[10], (uint32_t)c->x[9]));
    c->x[11] = (uint32_t)((uint32_t)c->x[10] - (uint32_t)c->x[11] * (uint32_t)c->x[9]);
    c->x[12] = (uint32_t)(0u | (uint32_t)c->x[11]);
L_7005318570:;
    c->x[13] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xfffffff800000000ull) | (ROR64(c->x[12], 61) & 0x7fffffff8ull));
    { uint64_t ea = c->x[8] + c->x[13]; uint64_t v = LD32(ea); c->x[13] = (uint64_t)(v); }
    if ((uint32_t)c->x[13] == 0) goto L_70053185ac;
    c->x[12] = (uint64_t)(((uint64_t)(-(int64_t)((c->x[12] >> 31) & 1)) & 0xffffffff00000000ull) | (c->x[12] & 0xffffffffull));
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_70053185a0;
    c->x[13] = (uint32_t)((uint32_t)c->x[12] + 0x1ull);
    (void)(subs32(c, (uint32_t)c->x[13], (uint32_t)((uint32_t)c->x[9])));
    c->x[12] = (uint32_t)((COND_GE(c)) ? 0u : (uint32_t)((uint32_t)c->x[12] + 1));
    (void)(subs32(c, (uint32_t)c->x[12], (uint32_t)((uint32_t)c->x[11])));
    if (COND_NE(c)) goto L_7005318570;
    goto L_70053185ac;
L_70053185a0:;
    c->x[8] = (uint64_t)(c->x[8] + (c->x[12] << 3));
    { uint64_t ea = c->x[8] + 0x4ull; uint64_t v = LD32(ea); c->x[1] = (uint64_t)(v); }
    if (((c->x[1] >> 31) & 1) == 0) goto L_70053186f4;
L_70053185ac:;
    { uint64_t ea = c->x[19] + 0x50ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x4ull);
    { uint64_t ea = c->x[19] + 0x170ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x70053185bcull; f_700531c618(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_70053185e8;
    { uint64_t ea = c->x[0] + 0xd9ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 4) & 1) == 0) goto L_70053185e8;
L_70053185c8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053185d0ull; f_700531c760(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] != 0) goto L_7005318604;
L_70053185d4:;
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x60ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x80ull);
    c->pc = 0; return;
L_70053185e8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x70053185f4ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_70053185c8;
L_7005318604:;
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005318610ull; f_700531c630(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005318618ull; f_700531c668(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[30] = 0x7005318620ull; f_700531c4a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_700531863c;
    c->x[1] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x9dbull);
    c->x[2] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[2] = (uint64_t)(c->x[2] + 0xdc2ull);
    c->x[3] = (uint32_t)(0x1ull);
    c->x[30] = 0x700531863cull; f_700531c610(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531863c:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    c->x[30] = 0x7005318648ull; f_700531c330(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x18ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->x[29] - 0xcull);
    { uint64_t ea = c->sp + 0x28ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[29] - 12; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    { uint64_t ea = c->sp + 0x38ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[29] - 4; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005318664ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[29] - 12; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->v[3] = 0x3f000000ull;
    { uint64_t ea = c->x[29] - 4; c->v[2] = LD32(ea); }
    c->x[1] = (uint64_t)(c->sp + 0x4ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[2] = (uint32_t)(0u | 0u);
    fp_op_s(c, FOP_MUL, 1, 1, 3);
    fp_op_s(c, FOP_MUL, 0, 0, 3);
    { uint64_t ea = c->sp + 4; ST32(ea, VS32(0)); ST32(ea + 4, VS32(1)); }
    fp_op_s(c, FOP_MUL, 0, 2, 3);
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005318694ull; f_700531c3e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x5ull);
    c->x[0] = (uint64_t)(c->x[19] + 0x1b0ull);
    (void)(logic32(c, (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_70053186b4;
    c->x[1] = (uint32_t)(0xffffffffull);
    c->x[30] = 0x70053186b0ull; f_700531c3f8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053186b8;
L_70053186b4:;
    c->x[30] = 0x70053186b8ull; f_700531c3f0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_70053186b8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053186c0ull; f_700531c6b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint32_t)((uint32_t)c->x[20] & 0x1ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70053186ccull; f_700531c6c0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 0x19cull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    if (((c->x[8] >> 0) & 1) != 0) goto L_7005318704;
L_70053186d4:;
    { uint64_t ea = c->x[19] + 0x14ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((uint32_t)c->x[8] | 0x1ull);
    { uint64_t ea = c->x[19] + 0x14ull; ST8(ea, (uint32_t)c->x[8]); }
    goto L_70053185d4;
L_70053186e4:;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x70053186f0ull; f_700531c6d0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_7005318544;
L_70053186f4:;
    c->x[2] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x7005318700ull; f_700531c360(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053185ac;
L_7005318704:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x58ull; ST32(ea, 0u); }
    c->x[30] = 0x7005318710ull; f_700531c6c8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    goto L_70053186d4;
}

void f_7005318a9c(Cpu *c) {
    { uint64_t ea = c->x[0] + 0x150ull; c->v[0] = LD32(ea); }
    c->v[1] = 0x41200000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    if (COND_PL(c)) goto L_7005318ab4;
    c->x[0] = (uint32_t)(0x1ull);
    c->pc = 0; return;
L_7005318ab4:;
    c->sp = (uint64_t)(c->sp - 0x30ull);
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x20ull; ST64(ea, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x10ull);
    c->x[1] = (uint64_t)(0ull | 0ull);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[30] = 0x7005318ad0ull; f_70053163c4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (((c->x[0] >> 0) & 1) == 0) goto L_7005318af0;
    { uint64_t ea = c->x[19] + 0x18cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x5ull));
    c->x[0] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
L_7005318ae0:;
    { uint64_t ea = c->sp + 0x20ull; uint64_t v = LD64(ea); c->x[19] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x30ull);
    c->pc = 0; return;
L_7005318af0:;
    { uint64_t ea = c->x[19] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[8] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[8] = (uint64_t)(c->x[8] + 0x9dbull);
    { uint64_t ea = c->sp + 0x0ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[8] = (uint64_t)(c->x[8] + 0xdc2ull);
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    c->x[2] = (uint64_t)(c->x[29] + 0x18ull);
    { uint64_t ea = c->x[29] + 0x18ull; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005318b18ull; f_700531c780(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    if (c->x[0] == 0) goto L_7005318ae0;
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005318b24ull; f_700531bfa0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->x[19] + 240; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    { uint64_t ea = c->x[19] + 0x1f2ull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x2ull));
    { uint64_t ea = c->sp + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_SUB, 1, 1, 3);
    { uint64_t ea = c->sp + 0x8ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 0, 2);
    { uint64_t ea = c->x[19] + 0xf8ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 4, 1, 1);
    c->v[1] = 0x40a00000ull;
    fp_op_s(c, FOP_SUB, 2, 2, 3);
    fp_fma_s(c, 0, 0, 0, 0, 0, 4);
    fp_fma_s(c, 0, 0, 0, 2, 2, 0);
    c->v[2] = 0x3f800000ull;
    c->v[1] = COND_EQ(c) ? VS32(2) : VS32(1);
    { uint64_t ea = c->x[19] + 0x150ull; c->v[2] = LD32(ea); }
    (void)(logic32(c, (uint32_t)c->x[8] & 0x4ull));
    c->x[8] = (uint32_t)(0x43fa0000ull);
    fp_op_s(c, FOP_MUL, 1, 2, 1);
    c->v[2] = (uint32_t)c->x[8];
    fp_op_s(c, FOP_SQRT, 0, 0, 0);
    c->v[1] = COND_EQ(c) ? VS32(1) : VS32(2);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->x[0] = (uint32_t)((COND_LT(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005318ae0;
}

void f_7005318b88(Cpu *c) {
    c->x[8] = (uint64_t)(0ull | c->x[0]);
    c->v[2] = 0x41a00000ull;
    c->x[9] = (uint32_t)(0x3ull);
    { uint64_t ea = c->x[8] + 0x150ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x160ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[0] + 0x170ull; ST32(ea, (uint32_t)c->x[9]); }
    { uint64_t ea = c->x[0] + 0x18ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->x[0] + 0x2b4ull);
    { uint64_t ea = c->x[0] + 0x2bcull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    fp_op_s(c, FOP_DIV, 1, 1, 2);
    c->v[2] = 0xbf800000ull;
    { uint64_t ea = c->x[9] + 0x0ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x104ull; ST32(ea, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[8] + 252; ST64(ea, c->x[9]); }
    fp_op_s(c, FOP_ADD, 1, 1, 2);
    fp_op_s(c, FOP_ADD, 1, 0, 1);
    c->nzcv = cmp_s(c, VSF32(1), VSF32(0));
    c->v[2] = COND_GT(c) ? VS32(0) : VS32(1);
    c->nzcv = cmp_s(c, VSF32(1), 0);
    c->v[0] = 0x0ull;
    c->v[1] = COND_MI(c) ? VS32(0) : VS32(2);
    { uint64_t ea = c->x[8] + 0x15cull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x10cull; ST32(ea, VS32(1)); }
    c->v[3] = VS32(2) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(2), 0);
    c->v[2] = COND_LT(c) ? VS32(3) : VS32(2);
    c->v[3] = 0xb4000000b4000000ull;
    { uint64_t ea = c->x[8] + 0x110ull; ST32(ea, VS32(2)); }
    fp_op_s(c, FOP_SUB, 2, 0, 2);
    c->nzcv = cmp_s(c, VSF32(2), VSF32(3));
    c->v[3] = 0x3400000034000000ull;
    c->nzcv = COND_GE(c) ? cmp_s(c, VSF32(2), VSF32(3)) : 0x20000000ull;
    if (COND_HI(c)) goto L_7005318c14;
    { uint64_t ea = c->x[8] + 0x108ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[8] + 0x10cull; ST32(ea, VS32(1)); }
L_7005318c14:;
    fp_op_s(c, FOP_SUB, 0, 0, 1);
    c->v[1] = 0xb4000000b4000000ull;
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    c->v[1] = 0x3400000034000000ull;
    c->nzcv = COND_GE(c) ? cmp_s(c, VSF32(0), VSF32(1)) : 0x20000000ull;
    if (COND_HI(c)) goto L_7005318c40;
    { uint64_t ea = c->x[8] + 0x168ull; c->v[0] = LD32(ea); }
    c->v[1] = VS32(0) ^ 0x80000000u;
    c->nzcv = cmp_s(c, VSF32(0), 0);
    c->v[0] = COND_LT(c) ? VS32(1) : VS32(0);
    { uint64_t ea = c->x[8] + 0x10cull; ST32(ea, VS32(0)); }
L_7005318c40:;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); c->sp = ea; }
    c->x[29] = (uint64_t)(c->sp + 0x0ull);
    c->x[30] = 0x7005318c4cull; f_700531c4a8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    if (c->x[0] != 0) goto L_7005318c58;
    c->pc = 0; return;
L_7005318c58:;
    c->x[1] = (uint64_t)(LD64(0x700531ce78ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x9dbull);
    c->x[2] = (uint64_t)(LD64(0x700531ce68ull));
    c->x[2] = (uint64_t)(c->x[2] + 0xdc2ull);
    c->x[3] = (uint32_t)(0x1ull);
    f_700531c610(c); return;
}

void f_7005318d80(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0xd0ull);
    { uint64_t ea = c->sp + 112; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); }
    { uint64_t ea = c->sp + 128; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 144; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 160; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 176; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 192; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0xb0ull);
    { uint64_t ea = c->x[2] + 0x98ull; c->v[1] = LD32(ea); }
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[0] = (uint64_t)(c->x[29] - 0x4cull);
    { uint64_t ea = c->x[2] + 156; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[13] = b; }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[2] + 188; u128 a = LD32(ea), b = LD32(ea + 4); c->v[12] = a; c->v[11] = b; }
    { uint64_t ea = c->x[29] - 68; ST32(ea, VS32(11)); }
    { uint64_t ea = c->x[2] + 0xb8ull; c->v[14] = LD32(ea); }
    { uint64_t ea = c->sp + 20; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    { uint64_t ea = c->x[2] + 0xa8ull; c->v[1] = LD32(ea); }
    { uint64_t ea = c->x[2] + 172; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[15] = b; }
    { uint64_t ea = c->x[29] - 76; ST32(ea, VS32(13)); ST32(ea + 4, VS32(15)); }
    { uint64_t ea = c->sp + 28; ST32(ea, VS32(1)); ST32(ea + 4, VS32(0)); }
    c->x[30] = 0x7005318dd8ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->x[20] + 0x114ull);
    c->x[0] = (uint64_t)(c->sp + 0x58ull);
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x58ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[20] + 0x11cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0x60ull; ST32(ea, (uint32_t)c->x[8]); }
    c->x[30] = 0x7005318df4ull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[0] = (uint64_t)(c->sp + 0x48ull);
    c->x[1] = (uint64_t)(c->x[29] - 0x4cull);
    c->x[2] = (uint64_t)(c->sp + 0x58ull);
    c->x[30] = 0x7005318e04ull; f_70053148e8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x50ull; c->v[0] = LD32(ea); }
    c->x[0] = (uint64_t)(c->sp + 0x24ull);
    { uint64_t ea = c->sp + 0x2cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x48ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 36; ST64(ea, c->x[8]); }
    c->x[30] = 0x7005318e1cull; f_700531450c(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x54ull; c->v[0] = LD32(ea); }
    c->v[1] = 0x3f800000ull;
    c->v[2] = 0xbf800000ull;
    { uint64_t ea = c->sp + 36; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[10] = b; }
    c->nzcv = cmp_s(c, VSF32(0), VSF32(1));
    { uint64_t ea = c->sp + 0x2cull; c->v[9] = LD32(ea); }
    c->v[1] = COND_GT(c) ? VS32(1) : VS32(0);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    c->v[0] = COND_MI(c) ? VS32(2) : VS32(1);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(2));
    if (COND_MI(c)) goto L_7005318f98;
    c->x[30] = 0x7005318e4cull; f_700531c7b8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    fp_op_s(c, FOP_ADD, 0, 0, 0);
L_7005318e50:;
    { uint64_t ea = c->sp + 0x14ull; c->v[2] = LD32(ea); }
    { uint64_t ea = c->sp + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[1] = b; }
    fp_op_s(c, FOP_MUL, 1, 1, 10);
    fp_fma_s(c, 0, 0, 1, 2, 8, 1);
    { uint64_t ea = c->sp + 0x20ull; c->v[2] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 14, 9, 1);
    fp_op_s(c, FOP_MUL, 2, 2, 10);
    fp_fma_s(c, 0, 0, 2, 3, 8, 2);
    fp_op_s(c, FOP_MUL, 3, 15, 10);
    fp_fma_s(c, 0, 0, 3, 13, 8, 3);
    fp_fma_s(c, 0, 0, 2, 12, 9, 2);
    fp_fma_s(c, 0, 0, 3, 11, 9, 3);
    fp_op_s(c, FOP_MUL, 8, 1, 0);
    fp_op_s(c, FOP_MUL, 9, 2, 0);
    fp_op_s(c, FOP_MUL, 10, 3, 0);
    c->v[0] = VS32(8);
    c->x[30] = 0x7005318e94ull; f_700531c7b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x10ull; ST32(ea, VS32(11)); }
    c->v[11] = VS32(0);
    c->v[0] = VS32(9);
    c->x[30] = 0x7005318ea4ull; f_700531c7b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0xcull; ST32(ea, VS32(12)); }
    c->v[12] = VS32(0);
    c->v[0] = VS32(10);
    c->x[30] = 0x7005318eb4ull; f_700531c7b0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x8ull; ST32(ea, VS32(15)); }
    c->v[15] = VS32(13);
    c->v[13] = VS32(0);
    c->v[0] = VS32(8);
    c->x[30] = 0x7005318ec8ull; f_700531c798(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[8] = VS32(0);
    c->v[0] = VS32(9);
    c->x[30] = 0x7005318ed4ull; f_700531c798(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->v[9] = VS32(0);
    c->v[0] = VS32(10);
    c->x[30] = 0x7005318ee0ull; f_700531c798(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 20; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[3] = b; }
    fp_op_s(c, FOP_MUL, 2, 13, 8);
    { uint64_t ea = c->sp + 0x1cull; c->v[5] = LD32(ea); }
    fp_op_s(c, FOP_NMUL, 18, 11, 0);
    fp_op_s(c, FOP_MUL, 4, 11, 13);
    fp_op_s(c, FOP_MUL, 7, 8, 9);
    c->v[16] = VS32(12) ^ 0x80000000u;
    c->x[2] = (uint64_t)(c->sp + 0x24ull);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(15)); }
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, VS32(3)); }
    fp_op_s(c, FOP_MUL, 3, 8, 0);
    { uint64_t ea = c->x[19] + 0x18ull; ST32(ea, VS32(14)); }
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_MUL, 1, 11, 12);
    { uint64_t ea = c->x[19] + 0xcull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->sp + 0x20ull; c->v[5] = LD32(ea); }
    { uint64_t ea = c->sp + 0x44ull; ST32(ea, VS32(7)); }
    fp_fma_s(c, 0, 0, 20, 3, 12, 4);
    fp_op_s(c, FOP_MUL, 4, 13, 9);
    fp_fma_s(c, 1, 0, 6, 1, 0, 2);
    fp_op_s(c, FOP_MUL, 0, 9, 0);
    { uint64_t ea = c->x[19] + 0x10ull; ST32(ea, VS32(5)); }
    { uint64_t ea = c->sp + 0x8ull; c->v[5] = LD32(ea); }
    fp_fma_s(c, 0, 0, 1, 1, 13, 3);
    fp_fma_s(c, 0, 0, 2, 2, 12, 18);
    { uint64_t ea = c->x[19] + 0x14ull; ST32(ea, VS32(5)); }
    fp_op_s(c, FOP_MUL, 5, 11, 9);
    { uint64_t ea = c->sp + 44; ST32(ea, VS32(20)); ST32(ea + 4, VS32(4)); }
    { uint64_t ea = c->sp + 36; ST32(ea, VS32(0)); ST32(ea + 4, VS32(6)); }
    { uint64_t ea = c->sp + 0xcull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->sp + 52; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    { uint64_t ea = c->sp + 60; ST32(ea, VS32(16)); ST32(ea + 4, VS32(5)); }
    { uint64_t ea = c->x[19] + 0x1cull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[19] + 0x20ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x7005318f78ull; f_7005315fe4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 160; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 144; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 128; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 112; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; }
    { uint64_t ea = c->sp + 192; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 176; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0xd0ull);
    c->pc = 0; return;
L_7005318f98:;
    c->x[8] = (uint64_t)(LD64(0x700531ceb8ull));
    { uint64_t ea = c->x[8] + 0x190ull; c->v[0] = LD32(ea); }
    goto L_7005318e50;
}

void f_700531bfa0(Cpu *c) {
    { uint64_t ea = c->x[0] + 0xa4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x0ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0xb4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x4ull; ST32(ea, VS32(0)); }
    { uint64_t ea = c->x[0] + 0xc4ull; c->v[0] = LD32(ea); }
    { uint64_t ea = c->x[1] + 0x8ull; ST32(ea, VS32(0)); }
    c->pc = 0; return;
}

void f_700531bfbc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x70ull);
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    { uint64_t ea = c->sp + 0x50ull; ST64(ea, c->x[21]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    c->x[21] = (uint64_t)(c->x[0] + 0x78ull);
    c->x[20] = (uint64_t)(0ull | c->x[0]);
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700531bfe4ull; f_700531c7d8(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531bff0ull; f_70053156f4(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x4ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x700531bffcull; f_7005315848(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 4; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 16; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[3] = b; }
    fp_op_s(c, FOP_MUL, 3, 1, 3);
    { uint64_t ea = c->sp + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[4] = a; c->v[5] = b; }
    fp_op_s(c, FOP_MUL, 16, 1, 5);
    { uint64_t ea = c->sp + 0xcull; c->v[5] = LD32(ea); }
    fp_fma_s(c, 0, 0, 7, 2, 0, 3);
    fp_fma_s(c, 0, 0, 4, 4, 0, 16);
    { uint64_t ea = c->sp + 48; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[6] = b; }
    fp_op_s(c, FOP_MUL, 16, 1, 6);
    { uint64_t ea = c->sp + 40; u128 a = LD32(ea), b = LD32(ea + 4); c->v[2] = a; c->v[6] = b; }
    fp_fma_s(c, 0, 0, 0, 3, 0, 16);
    { uint64_t ea = c->sp + 24; u128 a = LD32(ea), b = LD32(ea + 4); c->v[1] = a; c->v[3] = b; }
    fp_fma_s(c, 0, 0, 2, 2, 5, 4);
    fp_fma_s(c, 0, 0, 1, 1, 5, 7);
    fp_op_s(c, FOP_ADD, 2, 6, 2);
    fp_op_s(c, FOP_ADD, 1, 3, 1);
    { uint64_t ea = c->sp + 56; u128 a = LD32(ea), b = LD32(ea + 4); c->v[3] = a; c->v[4] = b; }
    fp_fma_s(c, 0, 0, 0, 3, 5, 0);
    { uint64_t ea = c->x[19] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(2)); }
    fp_op_s(c, FOP_ADD, 0, 4, 0);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(0)); }
    c->x[30] = 0x700531c05cull; f_700531c7e0(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x50ull; uint64_t v = LD64(ea); c->x[21] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x70ull);
    c->pc = 0; return;
}

void f_700531c0dc(Cpu *c) {
    { uint64_t ea = c->sp - 112; ST64(ea, VS64(15)); ST64(ea + 8, VS64(14)); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, VS64(13)); ST64(ea + 8, VS64(12)); }
    { uint64_t ea = c->sp + 32; ST64(ea, VS64(11)); ST64(ea + 8, VS64(10)); }
    { uint64_t ea = c->sp + 48; ST64(ea, VS64(9)); ST64(ea + 8, VS64(8)); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[29]); ST64(ea + 8, c->x[30]); }
    c->x[29] = (uint64_t)(c->sp + 0x40ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[28]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->sp = (uint64_t)(c->sp - 0x230ull);
    { uint64_t ea = c->x[2] + 0; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[8] = (uint64_t)(LD64(0x700531cee8ull));
    { uint64_t ea = c->x[2] + 0x8ull; c->v[2] = LD32(ea); }
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->nzcv = cmp_s(c, VSF32(0), VSF32(0));
    { uint64_t ea = c->x[8] + 0xac0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[0] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->nzcv = COND_VC(c) ? cmp_s(c, VSF32(1), VSF32(1)) : 0x10000000ull;
    { uint64_t ea = c->x[8] + 0xc8ull; uint64_t v = LD64(ea); c->x[0] = (uint64_t)(v); }
    c->nzcv = COND_VC(c) ? cmp_s(c, VSF32(2), VSF32(2)) : 0x10000000ull;
    if (COND_VC(c)) goto L_700531c198;
    c->x[30] = 0x700531c134ull; f_700531c720(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[8] = (uint64_t)(c->sp + 0x20ull);
    c->x[9] = (uint64_t)(0x20000000000ull);
    { uint64_t ea = c->sp + 0x30ull; ST8(ea, 0u); }
    c->x[8] = (uint64_t)(c->x[8] + 0x10ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[8]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[8] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->pc = c->x[8]; c->x[30] = 0x700531c158ull; rt_dispatch(c); c->pc = 0; if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[2] = (uint64_t)(0ull | c->x[0]);
    c->x[1] = (uint64_t)(LD64(0x700531cea0ull));
    c->x[1] = (uint64_t)(c->x[1] + 0x42eull);
    c->x[3] = (uint64_t)(LD64(0x700531ce90ull));
    c->x[3] = (uint64_t)(c->x[3] + 0x42aull);
    c->x[0] = (uint64_t)(c->sp + 0x20ull);
    c->x[30] = 0x700531c174ull; f_700531c370(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
L_700531c174:;
    c->sp = (uint64_t)(c->sp + 0x230ull);
    { uint64_t ea = c->sp + 48; u128 a = LD64(ea), b = LD64(ea + 8); c->v[9] = a; c->v[8] = b; }
    { uint64_t ea = c->sp + 32; u128 a = LD64(ea), b = LD64(ea + 8); c->v[11] = a; c->v[10] = b; }
    { uint64_t ea = c->sp + 16; u128 a = LD64(ea), b = LD64(ea + 8); c->v[13] = a; c->v[12] = b; }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[28] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 64; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[29] = (uint64_t)(a); c->x[30] = (uint64_t)(b); }
    { uint64_t ea = c->sp; u128 a = LD64(ea), b = LD64(ea + 8); c->v[15] = a; c->v[14] = b; c->sp = ea + 112; }
    c->pc = 0; return;
L_700531c198:;
    { uint64_t ea = c->x[0] + 36; u128 a = LD32(ea), b = LD32(ea + 4); c->v[8] = a; c->v[9] = b; }
    c->x[19] = (uint64_t)(0ull | c->x[1]);
    { uint64_t ea = c->x[21] + 0x68ull; uint64_t v = LD64(ea); (void)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x14ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[20] = (uint64_t)(0ull | c->x[2]);
    c->x[30] = 0x700531c1b4ull; f_7005314810(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    c->x[1] = (uint64_t)(c->sp + 0x8ull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[30] = 0x700531c1c0ull; f_700531bfbc(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 20; u128 a = LD32(ea), b = LD32(ea + 4); c->v[10] = a; c->v[11] = b; }
    c->x[1] = (uint64_t)(c->sp + 0x20ull);
    { uint64_t ea = c->sp + 8; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    { uint64_t ea = c->sp + 0x1cull; c->v[14] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 13, 11, 1);
    fp_op_s(c, FOP_SUB, 12, 10, 0);
    { uint64_t ea = c->sp + 0x10ull; c->v[0] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 15, 14, 0);
    c->x[30] = 0x700531c1e8ull; f_700531bf28(c); if (g_wxlm_arrow_unwind) { c->pc = 0; return; }
    { uint64_t ea = c->sp + 0x28ull; c->v[2] = LD32(ea); }
    fp_op_s(c, FOP_NMUL, 3, 2, 13);
    { uint64_t ea = c->sp + 32; u128 a = LD32(ea), b = LD32(ea + 4); c->v[0] = a; c->v[1] = b; }
    fp_fma_s(c, 0, 0, 3, 1, 15, 3);
    fp_op_s(c, FOP_NMUL, 4, 0, 15);
    fp_fma_s(c, 0, 0, 2, 2, 12, 4);
    fp_op_s(c, FOP_NMUL, 4, 1, 12);
    fp_fma_s(c, 0, 0, 0, 0, 13, 4);
    fp_op_s(c, FOP_MUL, 1, 8, 3);
    { uint64_t ea = c->x[20] + 0x0ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_MUL, 2, 8, 2);
    fp_op_s(c, FOP_MUL, 0, 8, 0);
    fp_op_s(c, FOP_ADD, 1, 10, 1);
    fp_op_s(c, FOP_ADD, 2, 11, 2);
    fp_op_s(c, FOP_ADD, 0, 14, 0);
    fp_op_s(c, FOP_SUB, 1, 3, 1);
    { uint64_t ea = c->x[19] + 0x0ull; ST32(ea, VS32(1)); }
    fp_op_s(c, FOP_MUL, 1, 9, 1);
    { uint64_t ea = c->x[20] + 0x4ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 2, 3, 2);
    { uint64_t ea = c->x[19] + 0x4ull; ST32(ea, VS32(2)); }
    { uint64_t ea = c->x[20] + 0x8ull; c->v[3] = LD32(ea); }
    fp_op_s(c, FOP_SUB, 0, 3, 0);
    fp_op_s(c, FOP_MUL, 3, 9, 2);
    { uint64_t ea = c->x[19] + 0; ST32(ea, VS32(1)); ST32(ea + 4, VS32(3)); }
    fp_op_s(c, FOP_MUL, 1, 9, 0);
    { uint64_t ea = c->x[19] + 0x8ull; ST32(ea, VS32(1)); }
    goto L_700531c174;
}

void f_700531c398(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9a8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3a8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9b8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3b8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9c8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3c8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9d8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3d8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9e8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531c9f8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c3f8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca08ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c408(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca18ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c418(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca28ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c428(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca38ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c438(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca48ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c448(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca58ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c458(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca68ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c468(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca78ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c478(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca88ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c488(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ca98ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c498(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531caa8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4a8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cab8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4b8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cac8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4c8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cad8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4d8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cae8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531caf8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c4f8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb08ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c508(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb18ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c518(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb28ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c528(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb38ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c538(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb48ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c548(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb58ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c558(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb68ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c568(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb78ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c578(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb88ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c588(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cb98ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c598(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cba8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5a8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbb8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5b8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbc8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5c8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbd8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5d8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbe8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5e8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cbf8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c5f8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc08ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c610(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc20ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c620(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc30ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c630(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc40ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c640(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc50ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c650(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc60ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c668(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc78ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c678(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc88ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c688(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cc98ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6a0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccb0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6b0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccc0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6c0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccd0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6d0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cce0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531ccf0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c6f0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd00ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c700(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd10ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c710(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd20ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c720(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd30ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c730(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd40ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c740(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd50ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c750(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd60ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c768(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd78ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c780(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd90ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c798(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cda8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7b0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdc0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7c8(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdd8ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7e0(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cdf0ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c7f8(Cpu *c) {
    f_70053137d8(c); return;
}

void f_7005401400(Cpu *c) {
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
    if (c->x[1] == 0) goto L_70054014b0;
    { uint64_t ea = c->x[1] + 0x3c50ull; uint64_t v = LD64(ea); c->x[2] = (uint64_t)(v); }
    if (c->x[2] == 0) goto L_70054014b0;
    { uint64_t ea = c->x[2] + 0x9ull; uint64_t v = LD8(ea); c->x[3] = (uint64_t)(v); }
    { uint64_t ea = c->x[2] + 0xaull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    c->x[3] = (uint32_t)((uint32_t)c->x[3] | ((uint32_t)c->x[8] << 8));
L_70054014b0:;
    c->x[0] = (uint32_t)(0x9ull);
    c->x[30] = 0x70054014b8ull; f_7005409000(c);
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
    { uint64_t ea = c->sp - 112; ST64(ea, VS64(8)); c->sp = ea; }
    c->pc = 0x7001d3b474ull; return;
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

void f_70055066cc(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x90ull);
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[30]); ST64(ea + 8, c->x[25]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[24]); ST64(ea + 8, c->x[23]); }
    { uint64_t ea = c->sp + 112; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 128; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    { uint64_t ea = c->x[0] + 0x80ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[22] = (uint64_t)(0ull | c->x[1]);
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    c->x[9] = (uint32_t)(0x1ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x1ull);
    { uint64_t ea = c->x[0] + 0x80ull; ST64(ea, c->x[8]); }
    c->x[8] = (uint64_t)(c->x[0] + 0x4d8ull);
L_70055066fc:;
    c->x[10] = (uint64_t)(ldx32(c, c->x[8]));
    if ((uint32_t)c->x[10] != 0) goto L_7005506760;
    { uint32_t st = stx32(c, c->x[8], c->x[9]); c->x[10] = (uint32_t)(st); }
    if ((uint32_t)c->x[10] != 0) goto L_70055066fc;
    { uint64_t ea = c->x[19] + 0x4dcull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x4e0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[9] == 0) goto L_7005506720;
    { uint64_t ea = c->x[19] + 0x4f0ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] & 0x1ull);
L_7005506720:;
    { uint64_t ea = c->x[19] + 0x500ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x4e8ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    (void)(subs64(c, c->x[10], (uint64_t)(c->x[11])));
    if (COND_EQ(c)) goto L_700550673c;
    { uint64_t ea = c->x[19] + 0x80ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x500ull; ST64(ea, c->x[10]); }
    { uint64_t ea = c->x[19] + 0x4f8ull; ST64(ea, c->x[11]); }
L_700550673c:;
    { uint64_t ea = c->x[19] + 0x11d0ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    if ((uint32_t)c->x[10] == 0) goto L_7005506770;
    { uint64_t ea = c->x[19] + 0x11c8ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x11d0ull; ST32(ea, 0u); }
    c->x[21] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->x[19] + 0x11ccull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[19] + 0xfb8ull);
    (void)(lda64(c->x[9]));
    goto L_70055067d4;
L_7005506760:;
    c->x[20] = (uint64_t)(0ull | 0ull);
    c->x[21] = (uint32_t)(0u | 0u);
    c->excl_addr = ~0ull;
    goto L_70055067d8;
L_7005506770:;
    { uint64_t ea = c->x[19] + 0x80ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x4f8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[10] = (uint64_t)(c->x[10] - c->x[11]);
    (void)(subs64(c, c->x[10], 0x3ull));
    c->x[10] = (uint64_t)(c->x[19] + 0xfb8ull);
    c->x[21] = (uint32_t)((COND_HI(c)) ? 0u : (uint32_t)((uint32_t)c->x[9]));
    c->x[9] = (uint64_t)(lda64(c->x[10]));
    if ((uint32_t)c->x[21] == 0) goto L_70055067d4;
    if (c->x[9] == 0) goto L_70055067d4;
    { uint64_t ea = c->x[19] + 0xfc0ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs64(c, c->x[9], (uint64_t)(c->x[10])));
    if (COND_NE(c)) goto L_70055067d0;
    { uint64_t ea = c->x[19] + 0x11ccull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x11c8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], (uint32_t)((uint32_t)c->x[10])));
    if (COND_EQ(c)) goto L_70055067d0;
    c->x[10] = (uint64_t)(c->x[9] & 0x3full);
    { uint64_t ea = c->x[19] + 0x11d8ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    c->x[9] = (uint32_t)((uint32_t)c->x[9] + 0x1ull);
    c->x[10] = (uint64_t)(c->x[19] + (c->x[10] << 3));
    { uint64_t ea = c->x[19] + 0x11ccull; ST32(ea, (uint32_t)c->x[9]); }
    c->x[9] = (uint64_t)(c->x[11] + 0x1ull);
    { uint64_t ea = c->x[10] + 0xfc8ull; uint64_t v = LD64(ea); c->x[20] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x11d8ull; ST64(ea, c->x[9]); }
L_70055067d0:;
    c->x[21] = (uint32_t)(0x1ull);
L_70055067d4:;
    stl32(c->x[8], 0ull);
L_70055067d8:;
    { uint64_t ea = c->x[19] + 0xf88ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70055067ec;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055067e8ull; f_7005506668(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055068c8;
L_70055067ec:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint64_t)(0ull | c->x[22]);
    c->x[2] = (uint32_t)(0x10000ull);
    c->x[30] = 0x70055067fcull; f_7005506474(c);
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    c->x[8] = (uint32_t)(0x21ull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint64_t)(c->x[19] + 0x100ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x118ull);
    c->x[3] = (uint64_t)(c->x[19] + 0x138ull);
    c->x[4] = (uint64_t)(c->x[19] + 0x2f0ull);
    c->x[22] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u));
    c->x[30] = 0x7005506820ull; f_7005508d90(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055068a8;
    { uint64_t ea = c->x[19] + 0x2e4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] != 0) goto L_70055068d8;
    { uint64_t ea = c->x[19] + 368; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[8] = (uint64_t)(a); c->x[10] = (uint64_t)(b); }
    { uint64_t ea = c->x[19] + 0xf58ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x20ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x100ull; c->v[0] = LD128(ea); }
    { uint64_t ea = c->x[19] + 0xf70ull; ST64(ea, c->x[9]); }
    { uint64_t ea = c->x[19] + 0x148ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf68ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[8]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->x[19] + 0x110ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[11]); ST64(ea + 8, c->x[9]); }
    { uint64_t ea = c->x[19] + 0xf64ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xf90ull; ST64(ea, c->x[10]); }
    /* hint */
    c->x[10] = (uint64_t)(0x700550662cull);
    { uint64_t ea = c->sp + 48; ST64(ea, c->x[8]); ST64(ea + 8, c->x[19]); }
    /* hint */
    c->x[8] = (uint64_t)(0x700550656cull);
    { uint64_t ea = c->sp + 0x20ull; ST128(ea, c->v[0]); }
    { uint64_t ea = c->sp + 64; ST64(ea, c->x[8]); ST64(ea + 8, c->x[10]); }
    if ((uint32_t)c->x[9] != 0) goto L_70055068d4;
    { uint64_t ea = c->x[19] + 0x5c0ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x2ull));
    if (COND_NE(c)) goto L_70055068d4;
    c->x[0] = (uint64_t)(c->sp + 0x0ull);
    c->x[1] = (uint64_t)(c->x[19] + 0x588ull);
    c->x[2] = (uint64_t)(c->x[19] + 0x5c8ull);
    c->x[30] = 0x7005506898ull; f_700550eb08(c);
    if ((uint32_t)c->x[0] == 0) goto L_70055068d4;
    c->x[8] = (uint32_t)(0x1ull);
    { uint64_t ea = c->x[19] + 0x2e4ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_70055068d8;
L_70055068a8:;
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x70055068b0ull; f_7005506668(c);
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[30] = 0x70055068c0ull; f_7005506c48(c);
    c->x[8] = (uint32_t)((uint32_t)c->x[22] | 0x2ull);
    goto L_70055068cc;
L_70055068c8:;
    c->x[8] = (uint32_t)(0x80ull);
L_70055068cc:;
    { uint64_t ea = c->x[19] + 0xc0ull; ST32(ea, (uint32_t)c->x[8]); }
    goto L_7005506a4c;
L_70055068d4:;
    c->x[22] = (uint32_t)((uint32_t)c->x[22] | 0x4ull);
L_70055068d8:;
    { uint64_t ea = c->x[19] + 0x148ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    { uint64_t ea = c->x[8] + 0x30ull; uint64_t v = LD64(ea); c->x[1] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x508ull; ST64(ea, c->x[1]); }
    c->x[30] = 0x70055068ecull; f_7005506bec(c);
    c->x[8] = (uint32_t)((uint32_t)c->x[22] | 0x40ull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[22]));
    (void)(subs32(c, (uint32_t)c->x[21], 0x0ull));
    c->x[9] = (uint32_t)((uint32_t)c->x[8] | 0x8ull);
    c->x[22] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[9] : (uint32_t)((uint32_t)c->x[8]));
    c->x[30] = 0x700550690cull; f_7005506b70(c);
    c->x[8] = (uint32_t)((uint32_t)c->x[22] | 0x10ull);
    (void)(subs32(c, (uint32_t)c->x[0], 0x0ull));
    { uint64_t ea = c->x[19] + 0x524ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    c->x[8] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[22]));
    c->x[0] = (uint64_t)(0ull | c->x[19]);
    c->x[1] = (uint32_t)(0u | (uint32_t)c->x[21]);
    c->x[10] = (uint32_t)((uint32_t)c->x[8] | 0x80ull);
    (void)(subs32(c, (uint32_t)c->x[9], 0x0ull));
    c->x[2] = (uint64_t)(0ull | c->x[20]);
    c->x[22] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)((uint32_t)c->x[10]));
    c->x[30] = 0x7005506938ull; f_7005506c48(c);
    (void)(subs64(c, c->x[20], 0xc4ull));
    if (COND_NE(c)) goto L_7005506960;
    { uint64_t ea = c->x[19] + 0x51cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_7005506960;
    { uint64_t ea = c->x[19] + 0xa8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0xc4ull);
    c->x[8] = (uint32_t)(0u | (uint32_t)~(uint32_t)c->x[8]);
    (void)(logic64(c, (uint64_t)(c->x[8] & c->x[9])));
    c->x[23] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    goto L_7005506964;
L_7005506960:;
    c->x[23] = (uint32_t)(0u | 0u);
L_7005506964:;
    (void)(subs32(c, (uint32_t)c->x[22], 0x0ull));
    c->x[8] = (uint32_t)(0xffull);
    c->x[9] = (uint32_t)(0x3full);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[24] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[21] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[8] : (uint32_t)(0u));
    c->x[25] = (uint32_t)((COND_EQ(c)) ? (uint32_t)c->x[9] : (uint32_t)(0u));
    c->x[30] = 0x7005506984ull; f_700550a554(c);
    { uint64_t ea = c->x[19] + 0x2f4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x160ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x148ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->sp + 16; ST32(ea, (uint32_t)c->x[0]); ST32(ea + 4, (uint32_t)c->x[25]); }
    (void)(subs32(c, (uint32_t)c->x[8], 0x0ull));
    { uint64_t ea = c->x[19] + 0x3d8ull; ST64(ea, c->x[9]); }
    c->x[8] = (uint32_t)((uint32_t)c->x[21] & 0x7full);
    c->x[9] = (uint32_t)((COND_EQ(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[12] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[0] = (uint64_t)(c->x[19] + 0x2f0ull);
    c->x[9] = (uint32_t)((uint32_t)c->x[9] | (uint32_t)c->x[23]);
    { uint64_t ea = c->x[19] + 0x3e0ull; ST64(ea, c->x[10]); }
    (void)(logic32(c, (uint32_t)c->x[9] & 0x1ull));
    { uint64_t ea = c->sp + 0; ST64(ea, c->x[10]); ST64(ea + 8, c->x[11]); }
    c->x[21] = (uint32_t)((COND_NE(c)) ? (uint32_t)c->x[21] : (uint32_t)((uint32_t)c->x[8]));
    c->x[8] = (uint32_t)((uint32_t)c->x[12] & (uint32_t)c->x[23]);
    c->x[23] = (uint32_t)((uint32_t)c->x[9] & (uint32_t)c->x[24]);
    c->x[8] = (uint32_t)((uint32_t)c->x[8] & (uint32_t)c->x[23]);
    { uint64_t ea = c->x[19] + 0x3f4ull; ST32(ea, (uint32_t)c->x[21]); }
    { uint64_t ea = c->sp + 24; ST32(ea, (uint32_t)c->x[21]); ST32(ea + 4, (uint32_t)c->x[8]); }
    c->x[30] = 0x70055069e0ull; f_7005509d84(c);
    { uint64_t ea = c->x[19] + 0x2f4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[20], 0xc4ull));
    if (COND_EQ(c)) goto L_70055069f0;
    if ((uint32_t)c->x[8] == 0) goto L_70055069f4;
L_70055069f0:;
    { uint64_t ea = c->x[19] + 0x51cull; ST32(ea, 0u); }
L_70055069f4:;
    { uint64_t ea = c->x[19] + 0x494ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[9], 0x2ull));
    c->x[10] = (uint32_t)((COND_NE(c)) ? 0u : (uint32_t)(0u + 1));
    c->x[10] = (uint32_t)((uint32_t)c->x[10] & (uint32_t)c->x[23]);
    (void)(subs32(c, (uint32_t)c->x[10], 0x1ull));
    if (COND_NE(c)) goto L_7005506a1c;
    c->x[0] = (uint64_t)(c->x[19] + 0x3d0ull);
    c->x[30] = 0x7005506a14ull; f_70055091ac(c);
    { uint64_t ea = c->x[19] + 0x2f4ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x494ull; uint64_t v = LD32(ea); c->x[9] = (uint64_t)(v); }
L_7005506a1c:;
    { uint64_t ea = c->x[19] + 0x118ull; uint64_t v = LD64(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x170ull; uint64_t v = LD64(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 192; ST32(ea, (uint32_t)c->x[22]); ST32(ea + 4, (uint32_t)c->x[21]); }
    { uint64_t ea = c->x[19] + 168; ST64(ea, c->x[20]); ST64(ea + 8, c->x[10]); }
    { uint64_t ea = c->x[19] + 0x2f8ull; uint64_t v = LD32(ea); c->x[10] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0xb8ull; ST64(ea, c->x[11]); }
    { uint64_t ea = c->x[19] + 0x2e4ull; uint64_t v = LD32(ea); c->x[11] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 200; ST32(ea, (uint32_t)c->x[8]); ST32(ea + 4, (uint32_t)c->x[10]); }
    { uint64_t ea = c->x[19] + 0x34cull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 208; ST32(ea, (uint32_t)c->x[11]); ST32(ea + 4, (uint32_t)c->x[8]); }
    { uint64_t ea = c->x[19] + 0x490ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 216; ST32(ea, (uint32_t)c->x[9]); ST32(ea + 4, (uint32_t)c->x[8]); }
L_7005506a4c:;
    { uint64_t ea = c->sp + 128; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 112; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[24] = (uint64_t)(a); c->x[23] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[30] = (uint64_t)(a); c->x[25] = (uint64_t)(b); }
    c->sp = (uint64_t)(c->sp + 0x90ull);
    c->pc = 0; return;
}

void f_7005508758(Cpu *c) {
    if (c->x[0] == 0) goto L_7005508a34;
    { uint64_t ea = c->sp - 16; ST64(ea, c->x[30]); ST64(ea + 8, c->x[19]); c->sp = ea; }
    { uint64_t ea = c->x[0] + 0x1a8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if ((uint32_t)c->x[8] == 0) goto L_700550877c;
    { uint64_t ea = c->x[19] + 0x40ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint64_t)(c->tpidrro);
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005508a30;
L_700550877c:;
    if (c->x[1] == 0) goto L_70055087a0;
    { uint64_t ea = c->x[1] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70055087a0;
    { uint64_t ea = c->x[19] + 0x1a8ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    if ((uint32_t)c->x[8] == 0) goto L_70055087a0;
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[1]);
    c->x[1] = (uint64_t)(0ull | c->x[8]);
    c->x[30] = 0x70055087a0ull; f_7005509c8c(c);
L_70055087a0:;
    c->x[10] = (uint64_t)(0x7005510000ull);
    c->x[11] = (uint64_t)(0x7005510000ull);
    c->x[13] = (uint32_t)(0x10ull);
    { uint64_t ea = c->x[10] + 0xd0ull; c->v[0] = LD128(ea); }
    c->x[10] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[11] + 0x110ull; c->v[1] = LD128(ea); }
    { uint64_t ea = c->x[10] + 0xb0ull; c->v[2] = LD128(ea); }
    c->x[10] = (uint64_t)(0x7005510000ull);
    c->x[11] = (uint64_t)(0x7005510000ull);
    { uint64_t ea = c->x[10] + 0xf0ull; c->v[3] = LD128(ea); }
    c->x[10] = (uint32_t)(0x1b8ull);
    { uint64_t ea = c->x[11] + 0x140ull; c->v[4] = LD128(ea); }
    c->x[11] = (uint64_t)(0x7005510000ull);
    c->x[12] = (uint64_t)(0x7005510000ull);
    VW(vu64, 1, 5, (vu64){} + (uint64_t)c->x[13]);
    c->x[13] = (uint64_t)(0x7005510000ull);
    VW(vu64, 1, 6, (vu64){} + (uint64_t)c->x[10]);
    { uint64_t ea = c->x[19] + 0x38ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + 0x48ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    { uint64_t ea = c->x[11] + 0x130ull; c->v[7] = LD128(ea); }
    { uint64_t ea = c->x[12] + 0xe0ull; c->v[16] = LD128(ea); }
    { uint64_t ea = c->x[13] + 0xc0ull; c->v[17] = LD128(ea); }
    c->x[11] = (uint64_t)(c->x[19] + 0x7ull);
    c->x[12] = (uint32_t)(0x1c0ull);
L_7005508800:;
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 6) > VREG(vu64, 17)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[0]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550881c;
    { uint64_t ea = c->x[11] - 7; ST8(ea, 0u); }
L_700550881c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 17)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[1]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550883c;
    { uint64_t ea = c->x[11] - 6; ST8(ea, 0u); }
L_700550883c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 16)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[2]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550885c;
    { uint64_t ea = c->x[11] - 5; ST8(ea, 0u); }
L_700550885c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 16)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[3]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550887c;
    { uint64_t ea = c->x[11] - 4; ST8(ea, 0u); }
L_700550887c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 7)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[4]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550889c;
    { uint64_t ea = c->x[11] - 3; ST8(ea, 0u); }
L_700550889c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 7)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[5]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055088bc;
    { uint64_t ea = c->x[11] - 2; ST8(ea, 0u); }
L_70055088bc:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[6]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055088dc;
    { uint64_t ea = c->x[11] - 1; ST8(ea, 0u); }
L_70055088dc:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 4)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[7]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055088fc;
    { uint64_t ea = c->x[11] + 0x0ull; ST8(ea, 0u); }
L_70055088fc:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 3)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[0]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550891c;
    { uint64_t ea = c->x[11] + 0x1ull; ST8(ea, 0u); }
L_700550891c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 3)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[1]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550893c;
    { uint64_t ea = c->x[11] + 0x2ull; ST8(ea, 0u); }
L_700550893c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 2)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[2]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550895c;
    { uint64_t ea = c->x[11] + 0x3ull; ST8(ea, 0u); }
L_700550895c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 2)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 18), VREG(vu8, 0), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[3]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550897c;
    { uint64_t ea = c->x[11] + 0x4ull; ST8(ea, 0u); }
L_700550897c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 1)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[4]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_700550899c;
    { uint64_t ea = c->x[11] + 0x5ull; ST8(ea, 0u); }
L_700550899c:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 1)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 18), VREG(vu16, 0), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[5]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055089bc;
    { uint64_t ea = c->x[11] + 0x6ull; ST8(ea, 0u); }
L_70055089bc:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[6]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055089dc;
    { uint64_t ea = c->x[11] + 0x7ull; ST8(ea, 0u); }
L_70055089dc:;
    VW(vu64, 1, 18, (vu64){} + (uint64_t)c->x[10]);
    VW(vu64, 1, 18, (vu64)(VREG(vu64, 18) > VREG(vu64, 0)));
    sl_gen(c, LOP_XTN, 2, 2, 18, 2, 0, 0, 18, 3, 0, -1, 0, 0, -1, 0x0ull);
    VW(vu16, 0, 18, SHUF(VREG(vu16, 0), VREG(vu16, 18), 0, 2, 8, 10, 0, 0, 0, 0));
    VW(vu8, 0, 18, SHUF(VREG(vu8, 0), VREG(vu8, 18), 0, 2, 4, 6, 16, 18, 20, 22, 0, 0, 0, 0, 0, 0, 0, 0));
    c->x[13] = (uint32_t)(((uint8_t *)&c->v[18])[7]);
    if (((c->x[13] >> 0) & 1) == 0) goto L_70055089fc;
    { uint64_t ea = c->x[11] + 0x8ull; ST8(ea, 0u); }
L_70055089fc:;
    VW(vu64, 1, 7, VREG(vu64, 7) + VREG(vu64, 5));
    VW(vu64, 1, 16, VREG(vu64, 16) + VREG(vu64, 5));
    c->x[12] = (uint64_t)(subs64(c, c->x[12], 0x10ull));
    VW(vu64, 1, 17, VREG(vu64, 17) + VREG(vu64, 5));
    VW(vu64, 1, 4, VREG(vu64, 4) + VREG(vu64, 5));
    c->x[11] = (uint64_t)(c->x[11] + 0x10ull);
    VW(vu64, 1, 3, VREG(vu64, 3) + VREG(vu64, 5));
    VW(vu64, 1, 2, VREG(vu64, 2) + VREG(vu64, 5));
    VW(vu64, 1, 1, VREG(vu64, 1) + VREG(vu64, 5));
    VW(vu64, 1, 0, VREG(vu64, 0) + VREG(vu64, 5));
    if (COND_NE(c)) goto L_7005508800;
    { uint64_t ea = c->x[19] + 0x38ull; ST64(ea, c->x[8]); }
    { uint64_t ea = c->x[19] + 0x48ull; ST64(ea, c->x[9]); }
L_7005508a30:;
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 16; c->x[30] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
L_7005508a34:;
    c->pc = 0; return;
}

void f_7005508d90(Cpu *c) {
    c->sp = (uint64_t)(c->sp - 0x70ull);
    { uint64_t ea = c->sp + 0x40ull; ST64(ea, c->x[30]); }
    { uint64_t ea = c->sp + 80; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 96; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[21] = (uint64_t)(0ull | c->x[2]);
    c->x[2] = (uint32_t)(0u | 0u);
    if (c->x[21] == 0) goto L_7005508e30;
    c->x[20] = (uint64_t)(0ull | c->x[3]);
    if (c->x[3] == 0) goto L_7005508e30;
    c->x[22] = (uint64_t)(c->tpidrro);
    if (c->x[22] == 0) goto L_7005508e2c;
    { uint64_t ea = c->x[21] + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    (void)(subs64(c, c->x[22], (uint64_t)(c->x[8])));
    if (COND_NE(c)) goto L_7005508e2c;
    { uint64_t ea = c->x[21] + 0x18ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[4]);
    if ((uint32_t)c->x[8] == 0) goto L_7005508e20;
    c->v[0] = 0x0ull;
    c->x[2] = (uint64_t)(c->sp + 0x0ull);
    { uint64_t ea = c->sp + 0x30ull; ST64(ea, 0ull); }
    { uint64_t ea = c->sp + 16; ST128(ea, c->v[0]); ST128(ea + 16, c->v[0]); }
    { uint64_t ea = c->sp + 0x0ull; ST128(ea, c->v[0]); }
    c->x[30] = 0x7005508decull; f_70055080f8(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005508e20;
    { uint64_t ea = c->sp + 0x10ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[21] + 0x8ull; uint64_t v = LD64(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs64(c, c->x[8], (uint64_t)(c->x[9])));
    if (COND_NE(c)) goto L_7005508e20;
    { uint64_t ea = c->x[21] + 0x0ull; uint64_t v = LD64(ea); c->x[3] = (uint64_t)(v); }
    c->x[1] = (uint64_t)(c->sp + 0x0ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[2] = (uint64_t)(0ull | c->x[22]);
    c->x[4] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005508e18ull; f_7005508a38(c);
    c->x[2] = (uint32_t)(0u | (uint32_t)c->x[0]);
    goto L_7005508e30;
L_7005508e20:;
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[1] = (uint64_t)(0ull | c->x[19]);
    c->x[30] = 0x7005508e2cull; f_7005508758(c);
L_7005508e2c:;
    c->x[2] = (uint32_t)(0u | 0u);
L_7005508e30:;
    { uint64_t ea = c->sp + 96; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[0] = (uint32_t)(0u | (uint32_t)c->x[2]);
    { uint64_t ea = c->sp + 80; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 0x40ull; uint64_t v = LD64(ea); c->x[30] = (uint64_t)(v); }
    c->sp = (uint64_t)(c->sp + 0x70ull);
    c->pc = 0; return;
}

void f_7005509080(Cpu *c) {
    { uint64_t ea = c->sp - 32; ST64(ea, c->x[30]); ST64(ea + 8, c->x[21]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    if (c->x[0] == 0) goto L_7005509124;
    { uint64_t ea = c->x[0] + 0x60ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[19] = (uint64_t)(0ull | c->x[0]);
    if (c->x[8] == 0) goto L_7005509124;
    { uint64_t ea = c->x[19] + 0x68ull; uint64_t v = LD32(ea); c->x[8] = (uint64_t)(v); }
    c->x[9] = (uint32_t)(0x4345ull);
    c->x[9] = (uint32_t)((c->x[9] & 0xffffffff0000ffffull) | 0x36520000ull);
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005509124;
    c->x[20] = (uint64_t)(0ull | c->x[19]);
    c->x[2] = (uint64_t)(0x7005511000ull);
    c->x[2] = (uint64_t)(c->x[2] + 0x328ull);
    { uint64_t ea = c->x[20]; uint64_t v = LD64(ea); c->x[20] = c->x[20] + 64; c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x10ull);
    c->x[8] = (uint64_t)(c->x[8] + 0x6e7000ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x6d0ull);
    c->x[30] = 0x70055090d0ull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509124;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[21] = (uint32_t)(0xa088ull);
    /* hint */
    c->x[2] = (uint64_t)(0x7005511468ull);
    c->x[21] = (uint32_t)((c->x[21] & 0xffffffff0000ffffull) | 0x2090000ull);
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    c->x[8] = (uint64_t)(c->x[8] + c->x[21]);
    c->x[3] = (uint32_t)(0x18ull);
    c->x[1] = (uint64_t)(c->x[8] + 0x228ull);
    c->x[30] = 0x70055090fcull; f_7005508018(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509124;
    { uint64_t ea = c->x[19] + 0x0ull; uint64_t v = LD64(ea); c->x[8] = (uint64_t)(v); }
    c->x[0] = (uint64_t)(0ull | c->x[20]);
    /* hint */
    c->x[2] = (uint64_t)(0x7005511480ull);
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[1] = (uint64_t)(c->x[8] + c->x[21]);
    c->x[3] = (uint32_t)(0x1cull);
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    f_7005508018(c); return;
L_7005509124:;
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    c->x[0] = (uint32_t)(0u | 0u);
    { uint64_t ea = c->sp; uint64_t a = LD64(ea), b = LD64(ea + 8); c->sp = ea + 32; c->x[30] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    c->pc = 0; return;
}

void f_7005509134(Cpu *c) {
    { uint64_t ea = c->sp - 48; ST64(ea, c->x[30]); c->sp = ea; }
    { uint64_t ea = c->sp + 16; ST64(ea, c->x[22]); ST64(ea + 8, c->x[21]); }
    { uint64_t ea = c->sp + 32; ST64(ea, c->x[20]); ST64(ea + 8, c->x[19]); }
    c->x[19] = (uint64_t)(0ull | c->x[2]);
    c->x[20] = (uint64_t)(0ull | c->x[1]);
    c->x[21] = (uint64_t)(0ull | c->x[0]);
    c->x[22] = (uint64_t)(0ull | 0ull);
L_7005509150:;
    c->x[2] = (uint64_t)(c->sp + 0xcull);
    c->x[0] = (uint64_t)(0ull | c->x[21]);
    c->x[1] = (uint64_t)(0ull | c->x[20]);
    c->x[3] = (uint32_t)(0x1ull);
    { uint64_t ea = c->sp + 0xcull; ST8(ea, 0u); }
    c->x[30] = 0x7005509168ull; f_70055080a0(c);
    if ((uint32_t)c->x[0] == 0) goto L_7005509190;
    { uint64_t ea = c->sp + 0xcull; uint64_t v = LD8(ea); c->x[8] = (uint64_t)(v); }
    { uint64_t ea = c->x[19] + c->x[22]; uint64_t v = LD8(ea); c->x[9] = (uint64_t)(v); }
    (void)(subs32(c, (uint32_t)c->x[8], (uint32_t)((uint32_t)c->x[9])));
    if (COND_NE(c)) goto L_7005509190;
    if ((uint32_t)c->x[8] == 0) goto L_7005509198;
    c->x[22] = (uint64_t)(c->x[22] + 0x1ull);
    c->x[20] = (uint64_t)(c->x[20] + 0x1ull);
    (void)(subs64(c, c->x[22], 0x40ull));
    if (COND_NE(c)) goto L_7005509150;
L_7005509190:;
    c->x[0] = (uint32_t)(0u | 0u);
    goto L_700550919c;
L_7005509198:;
    c->x[0] = (uint32_t)(0x1ull);
L_700550919c:;
    { uint64_t ea = c->sp + 32; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[20] = (uint64_t)(a); c->x[19] = (uint64_t)(b); }
    { uint64_t ea = c->sp + 16; uint64_t a = LD64(ea), b = LD64(ea + 8); c->x[22] = (uint64_t)(a); c->x[21] = (uint64_t)(b); }
    { uint64_t ea = c->sp; uint64_t v = LD64(ea); c->sp = c->sp + 48; c->x[30] = (uint64_t)(v); }
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
