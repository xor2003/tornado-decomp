#ifndef __M2C_SMOKE_DATA_H__
#define __M2C_SMOKE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& nextsmokeptr;
extern smoke& tmp_smoke;
extern dw& initsmoke;
extern dw& dummyf03cce71_data_1e_808;
extern dw& dummyf03cce71_data_20_809;
extern dw& dummyf03cce71_data_22_810;
extern dw& dummyf03cce71_data_24_811;
extern dw& dummyf03cce71_data_26_812;
extern dw& dummyf03cce71_data_28_813;
extern dw& ctrlsmoke;
extern dw& dummyf03cce71_data_2c_817;
extern dw& dummyf03cce71_data_2e_818;
extern db& smokedata;
extern smoke (& __m2c_structrow_f03cce71_826)[128];
extern smoke& smokebuffer;
extern smoke& smokebufend;
extern db& viscode;

#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_makesmokeeffect
#define M2C_CODE_EQUATE_makesmokeeffect 1
static const dd kmakesmokeeffect = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_makesinglesmoke
#define M2C_CODE_EQUATE_makesinglesmoke 1
static const dd kmakesinglesmoke = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_initcrater1
#define M2C_CODE_EQUATE_initcrater1 1
static const dd kinitcrater1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_initcrater2
#define M2C_CODE_EQUATE_initcrater2 1
static const dd kinitcrater2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_initcrater3
#define M2C_CODE_EQUATE_initcrater3 1
static const dd kinitcrater3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_initburning
#define M2C_CODE_EQUATE_initburning 1
static const dd kinitburning = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_initkickup
#define M2C_CODE_EQUATE_initkickup 1
static const dd kinitkickup = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_initgnd1exit
#define M2C_CODE_EQUATE_initgnd1exit 1
static const dd kinitgnd1exit = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_addsmokeloop
#define M2C_CODE_EQUATE_addsmokeloop 1
static const dd kaddsmokeloop = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_initairexplo
#define M2C_CODE_EQUATE_initairexplo 1
static const dd kinitairexplo = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_initairtrail
#define M2C_CODE_EQUATE_initairtrail 1
static const dd kinitairtrail = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_initair1exit
#define M2C_CODE_EQUATE_initair1exit 1
static const dd kinitair1exit = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_airsmokeloop
#define M2C_CODE_EQUATE_airsmokeloop 1
static const dd kairsmokeloop = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_exitairpos
#define M2C_CODE_EQUATE_exitairpos 1
static const dd kexitairpos = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_setminsize
#define M2C_CODE_EQUATE_setminsize 1
static const dd ksetminsize = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_scansmoke
#define M2C_CODE_EQUATE_scansmoke 1
static const dd kscansmoke = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_smokeloop
#define M2C_CODE_EQUATE_smokeloop 1
static const dd ksmokeloop = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_sortsmoke
#define M2C_CODE_EQUATE_sortsmoke 1
static const dd ksortsmoke = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_nextsmoke
#define M2C_CODE_EQUATE_nextsmoke 1
static const dd knextsmoke = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_ctrlnull
#define M2C_CODE_EQUATE_ctrlnull 1
static const dd kctrlnull = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_ctrlgnd1
#define M2C_CODE_EQUATE_ctrlgnd1 1
static const dd kctrlgnd1 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_gnd1phase1
#define M2C_CODE_EQUATE_gnd1phase1 1
static const dd kgnd1phase1 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_gnd1phase2
#define M2C_CODE_EQUATE_gnd1phase2 1
static const dd kgnd1phase2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skiprepro
#define M2C_CODE_EQUATE_skiprepro 1
static const dd kskiprepro = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_ctrlair1
#define M2C_CODE_EQUATE_ctrlair1 1
static const dd kctrlair1 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_air1phase1
#define M2C_CODE_EQUATE_air1phase1 1
static const dd kair1phase1 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_air1phase2
#define M2C_CODE_EQUATE_air1phase2 1
static const dd kair1phase2 = 0x1039;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_nextsmokeptr
#define M2C_CODE_EQUATE_nextsmokeptr 1
static const dd knextsmokeptr = (m2c::near_offset_external(::nextsmokeptr));
#endif
#ifndef M2C_CODE_EQUATE_tmp_smoke
#define M2C_CODE_EQUATE_tmp_smoke 1
static const dd ktmp_smoke = (m2c::near_offset_external(::tmp_smoke));
#endif
#ifndef M2C_CODE_EQUATE_initsmoke
#define M2C_CODE_EQUATE_initsmoke 1
static const dd kinitsmoke = (m2c::near_offset_external(::initsmoke));
#endif
#ifndef M2C_CODE_EQUATE_ctrlsmoke
#define M2C_CODE_EQUATE_ctrlsmoke 1
static const dd kctrlsmoke = (m2c::near_offset_external(::ctrlsmoke));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_f03cce71_826
#define M2C_CODE_EQUATE___m2c_structrow_f03cce71_826 1
static const dd k__m2c_structrow_f03cce71_826 = (m2c::near_offset_external(::__m2c_structrow_f03cce71_826));
#endif
}
#ifndef nextsmokeptr
#define nextsmokeptr m2c::knextsmokeptr
#endif
#ifndef tmp_smoke
#define tmp_smoke m2c::ktmp_smoke
#endif
#ifndef initsmoke
#define initsmoke m2c::kinitsmoke
#endif
#ifndef ctrlsmoke
#define ctrlsmoke m2c::kctrlsmoke
#endif
#ifndef __m2c_structrow_f03cce71_826
#define __m2c_structrow_f03cce71_826 m2c::k__m2c_structrow_f03cce71_826
#endif



#endif
