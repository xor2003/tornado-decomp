#ifndef __M2C_AAA_DATA_H__
#define __M2C_AAA_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& aaamode1;
extern db& aaamode2;
extern dw& aaatimer1;
extern dw& aaatimer2;
extern dw& aaaptr1;
extern dw& aaaptr2;
extern dw& sourceptr;
extern dw& mobileptr;
extern viewpoint& aaa_view1;
extern viewpoint& aaa_view2;
extern viewpoint& aim_view;
extern db& weaponcode;

#ifndef rwrthreats
extern radars& rwrthreats;
#endif
#ifndef modelmapindex
extern dw& modelmapindex;
#endif
#ifndef rwrthreatflags
extern db& rwrthreatflags;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef msctrdatastart
extern db& msctrdatastart;
#endif
#ifndef numrwrthreats
extern dw& numrwrthreats;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef tornadooppptr
extern dw& tornadooppptr;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef nofire
extern db& nofire;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_updateaaa
#define M2C_CODE_EQUATE_updateaaa 1
static const dd kupdateaaa = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_aaaexit
#define M2C_CODE_EQUATE_aaaexit 1
static const dd kaaaexit = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_aaasource1
#define M2C_CODE_EQUATE_aaasource1 1
static const dd kaaasource1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_aaapassive1
#define M2C_CODE_EQUATE_aaapassive1 1
static const dd kaaapassive1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_aaaactive1
#define M2C_CODE_EQUATE_aaaactive1 1
static const dd kaaaactive1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_aaasource2
#define M2C_CODE_EQUATE_aaasource2 1
static const dd kaaasource2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_aaaskip1
#define M2C_CODE_EQUATE_aaaskip1 1
static const dd kaaaskip1 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_aaascanloop1
#define M2C_CODE_EQUATE_aaascanloop1 1
static const dd kaaascanloop1 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_aaanext1
#define M2C_CODE_EQUATE_aaanext1 1
static const dd kaaanext1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_aaalocated1
#define M2C_CODE_EQUATE_aaalocated1 1
static const dd kaaalocated1 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_aaapassive2
#define M2C_CODE_EQUATE_aaapassive2 1
static const dd kaaapassive2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_aaaactive2
#define M2C_CODE_EQUATE_aaaactive2 1
static const dd kaaaactive2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_16_skip 1
static const dd k__m2c_macrolocal_16_skip = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_aaaskip2
#define M2C_CODE_EQUATE_aaaskip2 1
static const dd kaaaskip2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_aaascanloop2
#define M2C_CODE_EQUATE_aaascanloop2 1
static const dd kaaascanloop2 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_aaanext2
#define M2C_CODE_EQUATE_aaanext2 1
static const dd kaaanext2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_aaalocated2
#define M2C_CODE_EQUATE_aaalocated2 1
static const dd kaaalocated2 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_aaafireexit
#define M2C_CODE_EQUATE_aaafireexit 1
static const dd kaaafireexit = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_calcaaapitch1
#define M2C_CODE_EQUATE_calcaaapitch1 1
static const dd kcalcaaapitch1 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_calcaaapitch2
#define M2C_CODE_EQUATE_calcaaapitch2 1
static const dd kcalcaaapitch2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_setaaapitch
#define M2C_CODE_EQUATE_setaaapitch 1
static const dd ksetaaapitch = 0x1033;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_aaamode1
#define M2C_CODE_EQUATE_aaamode1 1
static const dd kaaamode1 = (m2c::near_offset_external(::aaamode1));
#endif
#ifndef M2C_CODE_EQUATE_aaamode2
#define M2C_CODE_EQUATE_aaamode2 1
static const dd kaaamode2 = (m2c::near_offset_external(::aaamode2));
#endif
#ifndef M2C_CODE_EQUATE_aaatimer1
#define M2C_CODE_EQUATE_aaatimer1 1
static const dd kaaatimer1 = (m2c::near_offset_external(::aaatimer1));
#endif
#ifndef M2C_CODE_EQUATE_aaatimer2
#define M2C_CODE_EQUATE_aaatimer2 1
static const dd kaaatimer2 = (m2c::near_offset_external(::aaatimer2));
#endif
#ifndef M2C_CODE_EQUATE_aaaptr1
#define M2C_CODE_EQUATE_aaaptr1 1
static const dd kaaaptr1 = (m2c::near_offset_external(::aaaptr1));
#endif
#ifndef M2C_CODE_EQUATE_aaaptr2
#define M2C_CODE_EQUATE_aaaptr2 1
static const dd kaaaptr2 = (m2c::near_offset_external(::aaaptr2));
#endif
#ifndef M2C_CODE_EQUATE_sourceptr
#define M2C_CODE_EQUATE_sourceptr 1
static const dd ksourceptr = (m2c::near_offset_external(::sourceptr));
#endif
#ifndef M2C_CODE_EQUATE_mobileptr
#define M2C_CODE_EQUATE_mobileptr 1
static const dd kmobileptr = (m2c::near_offset_external(::mobileptr));
#endif
#ifndef M2C_CODE_EQUATE_aaa_view1
#define M2C_CODE_EQUATE_aaa_view1 1
static const dd kaaa_view1 = (m2c::near_offset_external(::aaa_view1));
#endif
#ifndef M2C_CODE_EQUATE_aaa_view2
#define M2C_CODE_EQUATE_aaa_view2 1
static const dd kaaa_view2 = (m2c::near_offset_external(::aaa_view2));
#endif
#ifndef M2C_CODE_EQUATE_aim_view
#define M2C_CODE_EQUATE_aim_view 1
static const dd kaim_view = (m2c::near_offset_external(::aim_view));
#endif
}
#ifndef aaamode1
#define aaamode1 m2c::kaaamode1
#endif
#ifndef aaamode2
#define aaamode2 m2c::kaaamode2
#endif
#ifndef aaatimer1
#define aaatimer1 m2c::kaaatimer1
#endif
#ifndef aaatimer2
#define aaatimer2 m2c::kaaatimer2
#endif
#ifndef aaaptr1
#define aaaptr1 m2c::kaaaptr1
#endif
#ifndef aaaptr2
#define aaaptr2 m2c::kaaaptr2
#endif
#ifndef sourceptr
#define sourceptr m2c::ksourceptr
#endif
#ifndef mobileptr
#define mobileptr m2c::kmobileptr
#endif
#ifndef aaa_view1
#define aaa_view1 m2c::kaaa_view1
#endif
#ifndef aaa_view2
#define aaa_view2 m2c::kaaa_view2
#endif
#ifndef aim_view
#define aim_view m2c::kaim_view
#endif



#endif
