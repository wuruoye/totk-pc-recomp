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

void f_700531c760(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd70ull));
    c->pc = c->x[16]; rt_dispatch(c); c->pc = 0; return;
}

void f_700531c770(Cpu *c) {
    c->x[16] = (uint64_t)(LD64(0x700531cd80ull));
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
