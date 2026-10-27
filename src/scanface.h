/* THIS IS GENERATED FILE */

        
#ifndef __M2C_SCANFACE_STUBS_H__
#define __M2C_SCANFACE_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_SCANFACE 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& dummy75c80ae3_data_0_458;
extern dw& dummy75c80ae3_data_2_459;
extern dw& dummy75c80ae3_data_4_460;
extern dw& dummy75c80ae3_data_6_461;
extern dw& dummy75c80ae3_data_8_462;
extern dw& dummy75c80ae3_data_a_463;
extern dw& dummy75c80ae3_data_c_464;
extern dw& dummy75c80ae3_data_e_465;
extern dw& dummy75c80ae3_data_10_466;
extern dw& dummy75c80ae3_data_12_467;
extern dw& dummy75c80ae3_data_14_468;
extern dw& dummy75c80ae3_data_16_469;
extern dw& dummy75c80ae3_data_18_470;
extern dw& dummy75c80ae3_data_1a_471;
extern dw& dummy75c80ae3_data_1c_472;
extern dw& dummy75c80ae3_data_1e_473;
extern dw& dummy75c80ae3_data_20_474;
extern dw& dummy75c80ae3_data_22_475;
extern dw& dummy75c80ae3_data_24_476;
extern dw& dummy75c80ae3_data_26_477;
extern dw& dummy75c80ae3_data_28_478;
extern dw& dummy75c80ae3_data_2a_479;
extern dw& dummy75c80ae3_data_2c_480;
extern dw& dummy75c80ae3_data_2e_481;
extern dw& dummy75c80ae3_data_30_482;
extern dw& dummy75c80ae3_data_32_483;
extern dw& dummy75c80ae3_data_34_484;
extern dw& dummy75c80ae3_data_36_485;
extern dw& dummy75c80ae3_data_38_486;
extern dw& dummy75c80ae3_data_3a_487;
extern dw& dummy75c80ae3_data_3c_488;
extern dw& dummy75c80ae3_data_3e_489;
extern dw& dummy75c80ae3_data_40_492;
extern dw& dummy75c80ae3_data_42_493;
extern dw& dummy75c80ae3_data_44_494;
extern dw& dummy75c80ae3_data_46_495;
extern dw& dummy75c80ae3_data_48_496;
extern dw& dummy75c80ae3_data_4a_497;
extern dw& dummy75c80ae3_data_4c_498;
extern dw& dummy75c80ae3_data_4e_499;
extern dw& dummy75c80ae3_data_50_500;
extern dw& dummy75c80ae3_data_52_501;
extern dw& dummy75c80ae3_data_54_502;
extern dw& dummy75c80ae3_data_56_503;
extern dw& dummy75c80ae3_data_58_504;
extern dw& dummy75c80ae3_data_5a_505;
extern dw& dummy75c80ae3_data_5c_506;
extern dw& dummy75c80ae3_data_5e_507;
extern dw& dummy75c80ae3_data_60_508;
extern dw& dummy75c80ae3_data_62_509;
extern dw& dummy75c80ae3_data_64_510;
extern dw& dummy75c80ae3_data_66_511;
extern dw& dummy75c80ae3_data_68_512;
extern dw& dummy75c80ae3_data_6a_513;
extern dw& dummy75c80ae3_data_6c_514;
extern dw& dummy75c80ae3_data_6e_515;
extern dw& dummy75c80ae3_data_70_516;
extern dw& dummy75c80ae3_data_72_517;
extern dw& dummy75c80ae3_data_74_518;
extern dw& dummy75c80ae3_data_76_519;
extern dw& dummy75c80ae3_data_78_520;
extern dw& dummy75c80ae3_data_7a_521;
extern dw& dummy75c80ae3_data_7c_522;
extern dw& dummy75c80ae3_data_7e_523;
extern dd& facedraw;
extern dd& dummy75c80ae3_data_84_527;
extern dd& dummy75c80ae3_data_88_528;
extern dd& dummy75c80ae3_data_8c_529;
extern dd& rvrsfacedraw;
extern dd& dummy75c80ae3_data_94_531;
extern dw& drawrecover;
extern word& facesort;
extern db& viscode;

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_scanface
#define M2C_CODE_EQUATE_scanface 1
static const dd kscanface = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_flushbuffer
#define M2C_CODE_EQUATE_flushbuffer 1
static const dd kflushbuffer = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_faceloop
#define M2C_CODE_EQUATE_faceloop 1
static const dd kfaceloop = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_scanfaceexit
#define M2C_CODE_EQUATE_scanfaceexit 1
static const dd kscanfaceexit = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_sortprmpoly1
#define M2C_CODE_EQUATE_sortprmpoly1 1
static const dd ksortprmpoly1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_prmpolyfail1
#define M2C_CODE_EQUATE_prmpolyfail1 1
static const dd kprmpolyfail1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_prmpolyrvrs1
#define M2C_CODE_EQUATE_prmpolyrvrs1 1
static const dd kprmpolyrvrs1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_sortprmpoly2
#define M2C_CODE_EQUATE_sortprmpoly2 1
static const dd ksortprmpoly2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_prmpolyfail2
#define M2C_CODE_EQUATE_prmpolyfail2 1
static const dd kprmpolyfail2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_prmpolyrvrs2
#define M2C_CODE_EQUATE_prmpolyrvrs2 1
static const dd kprmpolyrvrs2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_sortsecpoly1
#define M2C_CODE_EQUATE_sortsecpoly1 1
static const dd ksortsecpoly1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_secpolyfail1_1
#define M2C_CODE_EQUATE_secpolyfail1_1 1
static const dd ksecpolyfail1_1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_secpolyfail1_2
#define M2C_CODE_EQUATE_secpolyfail1_2 1
static const dd ksecpolyfail1_2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_sortsecpoly2
#define M2C_CODE_EQUATE_sortsecpoly2 1
static const dd ksortsecpoly2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_secpolyfail2_1
#define M2C_CODE_EQUATE_secpolyfail2_1 1
static const dd ksecpolyfail2_1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_secpolyfail2_2
#define M2C_CODE_EQUATE_secpolyfail2_2 1
static const dd ksecpolyfail2_2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_secpolyrvrs2
#define M2C_CODE_EQUATE_secpolyrvrs2 1
static const dd ksecpolyrvrs2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_sortprmline1
#define M2C_CODE_EQUATE_sortprmline1 1
static const dd ksortprmline1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_prmlinefail1
#define M2C_CODE_EQUATE_prmlinefail1 1
static const dd kprmlinefail1 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_sortprmline2
#define M2C_CODE_EQUATE_sortprmline2 1
static const dd ksortprmline2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_prmlinefail2
#define M2C_CODE_EQUATE_prmlinefail2 1
static const dd kprmlinefail2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_sortsecline1
#define M2C_CODE_EQUATE_sortsecline1 1
static const dd ksortsecline1 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_seclinefail1_1
#define M2C_CODE_EQUATE_seclinefail1_1 1
static const dd kseclinefail1_1 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_seclinefail1_2
#define M2C_CODE_EQUATE_seclinefail1_2 1
static const dd kseclinefail1_2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_sortsecline2
#define M2C_CODE_EQUATE_sortsecline2 1
static const dd ksortsecline2 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_seclinefail2_1
#define M2C_CODE_EQUATE_seclinefail2_1 1
static const dd kseclinefail2_1 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_seclinefail2_2
#define M2C_CODE_EQUATE_seclinefail2_2 1
static const dd kseclinefail2_2 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_seclinervrs2
#define M2C_CODE_EQUATE_seclinervrs2 1
static const dd kseclinervrs2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_sortprmdecinc
#define M2C_CODE_EQUATE_sortprmdecinc 1
static const dd ksortprmdecinc = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_sortclkwise1
#define M2C_CODE_EQUATE_sortclkwise1 1
static const dd ksortclkwise1 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_sortaclkwise1
#define M2C_CODE_EQUATE_sortaclkwise1 1
static const dd ksortaclkwise1 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_sortprmdecexc
#define M2C_CODE_EQUATE_sortprmdecexc 1
static const dd ksortprmdecexc = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_sortclkwise2
#define M2C_CODE_EQUATE_sortclkwise2 1
static const dd ksortclkwise2 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_sortaclkwise2
#define M2C_CODE_EQUATE_sortaclkwise2 1
static const dd ksortaclkwise2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_sortsecdecinc
#define M2C_CODE_EQUATE_sortsecdecinc 1
static const dd ksortsecdecinc = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_sortaclkwise3
#define M2C_CODE_EQUATE_sortaclkwise3 1
static const dd ksortaclkwise3 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_sortclkwise3
#define M2C_CODE_EQUATE_sortclkwise3 1
static const dd ksortclkwise3 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_sortsecdecexc
#define M2C_CODE_EQUATE_sortsecdecexc 1
static const dd ksortsecdecexc = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_sortaclkwise4
#define M2C_CODE_EQUATE_sortaclkwise4 1
static const dd ksortaclkwise4 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_sortclkwise4
#define M2C_CODE_EQUATE_sortclkwise4 1
static const dd ksortclkwise4 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_ifthen
#define M2C_CODE_EQUATE_ifthen 1
static const dd kifthen = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_condfalse1
#define M2C_CODE_EQUATE_condfalse1 1
static const dd kcondfalse1 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_ifthenelse
#define M2C_CODE_EQUATE_ifthenelse 1
static const dd kifthenelse = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_condfalse2
#define M2C_CODE_EQUATE_condfalse2 1
static const dd kcondfalse2 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_selectcase
#define M2C_CODE_EQUATE_selectcase 1
static const dd kselectcase = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_gosub
#define M2C_CODE_EQUATE_gosub 1
static const dd kgosub = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_illegal
#define M2C_CODE_EQUATE_illegal 1
static const dd killegal = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1044;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool gosub(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ifthen(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ifthenelse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool illegal(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanface(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectcase(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmdecexc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmdecinc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmline1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmline2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmpoly1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortprmpoly2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecdecexc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecdecinc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecline1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecline2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecpoly1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortsecpoly2(m2c::_offsets, struct m2c::_STATE*);
extern bool cycliccheck(m2c::_offsets, struct m2c::_STATE*);
extern bool meshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyline(m2c::_offsets, struct m2c::_STATE*);
extern bool polylineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsmeshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrspolyfill(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef objanimflags
extern db& objanimflags;
#endif
#ifndef col2
extern db& col2;
#endif
#ifndef crtbufptr
extern dw& crtbufptr;
#endif
#ifndef cyclic
extern db& cyclic;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif

#endif
