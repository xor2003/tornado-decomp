#ifndef __M2C_MOBILE_DATA_H__
#define __M2C_MOBILE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& calcobjectpos;
extern dw& dummy515b4f89_data_2_705;
extern dw& dummy515b4f89_data_4_706;
extern dw& dummy515b4f89_data_6_707;
extern dw& dummy515b4f89_data_8_708;
extern dw& rgridhdg;
extern dw& rgridpitch;
extern dw& rgridroll;
extern db& mobobj1;
extern db& viscode;
extern db& scanvertexloop1;
extern db& dummy515b4f89_viscode_11_1334;
extern db& dummy515b4f89_viscode_12_1342;
extern db& scanvertexloop2;
extern db& dummy515b4f89_viscode_14_1385;
extern db& dummy515b4f89_viscode_15_1393;
extern db& scanvertexloop3;
extern db& dummy515b4f89_viscode_17_1436;
extern db& dummy515b4f89_viscode_18_1444;

#ifndef zgridsize
extern dw& zgridsize;
#endif
#ifndef xgz
extern dw& xgz;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef r_ygy
extern dw& r_ygy;
#endif
#ifndef r_xgy
extern dw& r_xgy;
#endif
#ifndef zgz
extern dw& zgz;
#endif
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef ygridsize
extern dw& ygridsize;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef zpos
extern dw& zpos;
#endif
#ifndef r_xgz
extern dw& r_xgz;
#endif
#ifndef r_zgz
extern dw& r_zgz;
#endif
#ifndef xgridsize
extern dw& xgridsize;
#endif
#ifndef mobiletable
extern dw& mobiletable;
#endif
#ifndef objscaleconvert
extern db& objscaleconvert;
#endif
#ifndef ypos
extern dw& ypos;
#endif
#ifndef r_ygx
extern dw& r_ygx;
#endif
#ifndef objanimflags
extern db& objanimflags;
#endif
#ifndef drawrecover
extern dw& drawrecover;
#endif
#ifndef r_zgx
extern dw& r_zgx;
#endif
#ifndef crtbufptr
extern dw& crtbufptr;
#endif
#ifndef ygz
extern dw& ygz;
#endif
#ifndef r_xgx
extern dw& r_xgx;
#endif
#ifndef r_zgy
extern dw& r_zgy;
#endif
#ifndef xpos
extern dw& xpos;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
#ifndef r_ygz
extern dw& r_ygz;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_drawmobobject1
#define M2C_CODE_EQUATE_drawmobobject1 1
static const dd kdrawmobobject1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_1
#define M2C_CODE_EQUATE_skipsort1_1 1
static const dd kskipsort1_1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_1
#define M2C_CODE_EQUATE_skipsort2_1 1
static const dd kskipsort2_1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_approxloop1
#define M2C_CODE_EQUATE_approxloop1 1
static const dd kapproxloop1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_sortposition1
#define M2C_CODE_EQUATE_sortposition1 1
static const dd ksortposition1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_exitlink1
#define M2C_CODE_EQUATE_exitlink1 1
static const dd kexitlink1 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject1
#define M2C_CODE_EQUATE_exitmobobject1 1
static const dd kexitmobobject1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_controtate1
#define M2C_CODE_EQUATE_controtate1 1
static const dd kcontrotate1 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate1
#define M2C_CODE_EQUATE_skiprotate1 1
static const dd kskiprotate1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_drawmobobject2
#define M2C_CODE_EQUATE_drawmobobject2 1
static const dd kdrawmobobject2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_2
#define M2C_CODE_EQUATE_skipsort1_2 1
static const dd kskipsort1_2 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_2
#define M2C_CODE_EQUATE_skipsort2_2 1
static const dd kskipsort2_2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_approxloop2
#define M2C_CODE_EQUATE_approxloop2 1
static const dd kapproxloop2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_sortposition2
#define M2C_CODE_EQUATE_sortposition2 1
static const dd ksortposition2 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_exitlink2
#define M2C_CODE_EQUATE_exitlink2 1
static const dd kexitlink2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject2
#define M2C_CODE_EQUATE_exitmobobject2 1
static const dd kexitmobobject2 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_controtate2
#define M2C_CODE_EQUATE_controtate2 1
static const dd kcontrotate2 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate2
#define M2C_CODE_EQUATE_skiprotate2 1
static const dd kskiprotate2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_drawmobobject3
#define M2C_CODE_EQUATE_drawmobobject3 1
static const dd kdrawmobobject3 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_3
#define M2C_CODE_EQUATE_skipsort1_3 1
static const dd kskipsort1_3 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_3
#define M2C_CODE_EQUATE_skipsort2_3 1
static const dd kskipsort2_3 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_approxloop3
#define M2C_CODE_EQUATE_approxloop3 1
static const dd kapproxloop3 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_sortposition3
#define M2C_CODE_EQUATE_sortposition3 1
static const dd ksortposition3 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_exitlink3
#define M2C_CODE_EQUATE_exitlink3 1
static const dd kexitlink3 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject3
#define M2C_CODE_EQUATE_exitmobobject3 1
static const dd kexitmobobject3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_controtate3
#define M2C_CODE_EQUATE_controtate3 1
static const dd kcontrotate3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate3
#define M2C_CODE_EQUATE_skiprotate3 1
static const dd kskiprotate3 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop1
#define M2C_CODE_EQUATE_scanvertexloop1 1
static const dd kscanvertexloop1 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex1
#define M2C_CODE_EQUATE_exitscanvertex1 1
static const dd kexitscanvertex1 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop2
#define M2C_CODE_EQUATE_scanvertexloop2 1
static const dd kscanvertexloop2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex2
#define M2C_CODE_EQUATE_exitscanvertex2 1
static const dd kexitscanvertex2 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop3
#define M2C_CODE_EQUATE_scanvertexloop3 1
static const dd kscanvertexloop3 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex3
#define M2C_CODE_EQUATE_exitscanvertex3 1
static const dd kexitscanvertex3 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_calcmobmaxdim
#define M2C_CODE_EQUATE_calcmobmaxdim 1
static const dd kcalcmobmaxdim = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x103a;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_calcobjectpos
#define M2C_CODE_EQUATE_calcobjectpos 1
static const dd kcalcobjectpos = (m2c::near_offset_external(::calcobjectpos));
#endif
#ifndef M2C_CODE_EQUATE_rgridhdg
#define M2C_CODE_EQUATE_rgridhdg 1
static const dd krgridhdg = (m2c::near_offset_external(::rgridhdg));
#endif
#ifndef M2C_CODE_EQUATE_rgridpitch
#define M2C_CODE_EQUATE_rgridpitch 1
static const dd krgridpitch = (m2c::near_offset_external(::rgridpitch));
#endif
#ifndef M2C_CODE_EQUATE_rgridroll
#define M2C_CODE_EQUATE_rgridroll 1
static const dd krgridroll = (m2c::near_offset_external(::rgridroll));
#endif
}
#ifndef calcobjectpos
#define calcobjectpos m2c::kcalcobjectpos
#endif
#ifndef rgridhdg
#define rgridhdg m2c::krgridhdg
#endif
#ifndef rgridpitch
#define rgridpitch m2c::krgridpitch
#endif
#ifndef rgridroll
#define rgridroll m2c::krgridroll
#endif



#endif
