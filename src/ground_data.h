#ifndef __M2C_GROUND_DATA_H__
#define __M2C_GROUND_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& calcobjectpos;
extern dw& dummydf58ca8e_data_2_699;
extern dw& dummydf58ca8e_data_4_700;
extern dw& dummydf58ca8e_data_6_701;
extern dw& dummydf58ca8e_data_8_702;
extern db& grndobj1;
extern db& flatobj1;
extern db& viscode;
extern db& scanvertexloop;
extern db& dummydf58ca8e_viscode_b_1288;
extern db& dummydf58ca8e_viscode_c_1296;
extern db& scanflatloop;
extern db& dummydf58ca8e_viscode_e_1338;

#ifndef ze01_2
extern dw& ze01_2;
#endif
#ifndef groundtable
extern dw& groundtable;
#endif
#ifndef ye01_16
extern dw& ye01_16;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef valid1_2
extern db& valid1_2;
#endif
#ifndef xe01_2
extern dw& xe01_2;
#endif
#ifndef xgz
extern dw& xgz;
#endif
#ifndef ye01_4
extern dw& ye01_4;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef valid1_4
extern db& valid1_4;
#endif
#ifndef ze01_8
extern dw& ze01_8;
#endif
#ifndef zgz
extern dw& zgz;
#endif
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef ze01_16
extern dw& ze01_16;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef flatobject
extern dw& flatobject;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef zgy
extern dw& zgy;
#endif
#ifndef ze01_4
extern dw& ze01_4;
#endif
#ifndef valid1_16
extern db& valid1_16;
#endif
#ifndef zpos
extern dw& zpos;
#endif
#ifndef xgy
extern dw& xgy;
#endif
#ifndef ypos
extern dw& ypos;
#endif
#ifndef flattable
extern dw& flattable;
#endif
#ifndef ye01_8
extern dw& ye01_8;
#endif
#ifndef objanimflags
extern db& objanimflags;
#endif
#ifndef xe01_16
extern dw& xe01_16;
#endif
#ifndef xe01_4
extern dw& xe01_4;
#endif
#ifndef drawrecover
extern dw& drawrecover;
#endif
#ifndef valid1_8
extern db& valid1_8;
#endif
#ifndef crtbufptr
extern dw& crtbufptr;
#endif
#ifndef xgx
extern dw& xgx;
#endif
#ifndef ygy
extern dw& ygy;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef ygz
extern dw& ygz;
#endif
#ifndef cyclic
extern db& cyclic;
#endif
#ifndef zgx
extern dw& zgx;
#endif
#ifndef ye01_2
extern dw& ye01_2;
#endif
#ifndef xe01_8
extern dw& xe01_8;
#endif
#ifndef ygx
extern dw& ygx;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef xpos
extern dw& xpos;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_drawgndobject
#define M2C_CODE_EQUATE_drawgndobject 1
static const dd kdrawgndobject = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1
#define M2C_CODE_EQUATE_skipsort1 1
static const dd kskipsort1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2
#define M2C_CODE_EQUATE_skipsort2 1
static const dd kskipsort2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_approxloop
#define M2C_CODE_EQUATE_approxloop 1
static const dd kapproxloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_sortposition
#define M2C_CODE_EQUATE_sortposition 1
static const dd ksortposition = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_exitgndobject
#define M2C_CODE_EQUATE_exitgndobject 1
static const dd kexitgndobject = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_drawflatobject
#define M2C_CODE_EQUATE_drawflatobject 1
static const dd kdrawflatobject = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_skipsorta
#define M2C_CODE_EQUATE_skipsorta 1
static const dd kskipsorta = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_skipsortb
#define M2C_CODE_EQUATE_skipsortb 1
static const dd kskipsortb = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_flatapproxloop
#define M2C_CODE_EQUATE_flatapproxloop 1
static const dd kflatapproxloop = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_sortflatpos
#define M2C_CODE_EQUATE_sortflatpos 1
static const dd ksortflatpos = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_exitflatobject
#define M2C_CODE_EQUATE_exitflatobject 1
static const dd kexitflatobject = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_calcobjectpos1
#define M2C_CODE_EQUATE_calcobjectpos1 1
static const dd kcalcobjectpos1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_calcobjectpos2
#define M2C_CODE_EQUATE_calcobjectpos2 1
static const dd kcalcobjectpos2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_fixobjectpos2
#define M2C_CODE_EQUATE_fixobjectpos2 1
static const dd kfixobjectpos2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_calcobjectpos4
#define M2C_CODE_EQUATE_calcobjectpos4 1
static const dd kcalcobjectpos4 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_fixobjectpos4
#define M2C_CODE_EQUATE_fixobjectpos4 1
static const dd kfixobjectpos4 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_calcobjectpos8
#define M2C_CODE_EQUATE_calcobjectpos8 1
static const dd kcalcobjectpos8 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_fixobjectpos8
#define M2C_CODE_EQUATE_fixobjectpos8 1
static const dd kfixobjectpos8 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_calcobjectpos16
#define M2C_CODE_EQUATE_calcobjectpos16 1
static const dd kcalcobjectpos16 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_fixobjectpos16
#define M2C_CODE_EQUATE_fixobjectpos16 1
static const dd kfixobjectpos16 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop
#define M2C_CODE_EQUATE_scanvertexloop 1
static const dd kscanvertexloop = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex
#define M2C_CODE_EQUATE_exitscanvertex 1
static const dd kexitscanvertex = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_scanflatloop
#define M2C_CODE_EQUATE_scanflatloop 1
static const dd kscanflatloop = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_exitscanflat
#define M2C_CODE_EQUATE_exitscanflat 1
static const dd kexitscanflat = 0x102a;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_calcobjectpos
#define M2C_CODE_EQUATE_calcobjectpos 1
static const dd kcalcobjectpos = (m2c::near_offset_external(::calcobjectpos));
#endif
}
#ifndef calcobjectpos
#define calcobjectpos m2c::kcalcobjectpos
#endif



#endif
