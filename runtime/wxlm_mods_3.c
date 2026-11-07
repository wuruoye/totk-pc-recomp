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

void f_700531c760(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd70ull));
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
