#ifndef __M2C_SECSCAN_DATA_H__
#define __M2C_SECSCAN_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& calcsctrcentre;
extern dw& dummy70d71820_data_2_655;
extern dw& dummy70d71820_data_4_656;
extern dw& dummy70d71820_data_6_657;
extern dw& sectorreject;
extern dw& dummy70d71820_data_a_659;
extern dw& dummy70d71820_data_c_660;
extern dw& dummy70d71820_data_e_661;
extern dw& flatscanmaxoff;
extern db& hillsonlyflag;
extern db& comprejecttest;
extern db& viscode;

#ifndef ypos8
extern dw& ypos8;
#endif
#ifndef xpos2
extern dw& xpos2;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef xe02
extern dw& xe02;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef xgrid16
extern dw& xgrid16;
#endif
#ifndef xgrid2
extern dw& xgrid2;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef xsecscan
extern dw& xsecscan;
#endif
#ifndef xpos16
extern dw& xpos16;
#endif
#ifndef xpos1
extern dw& xpos1;
#endif
#ifndef zpos8
extern dw& zpos8;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze02
extern dw& ze02;
#endif
#ifndef numvissctrs
extern dw& numvissctrs;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef xpos8
extern dw& xpos8;
#endif
#ifndef ze016
extern dw& ze016;
#endif
#ifndef cloudmode
extern dw& cloudmode;
#endif
#ifndef ygrid2
extern dw& ygrid2;
#endif
#ifndef xgrid1
extern dw& xgrid1;
#endif
#ifndef ye02
extern dw& ye02;
#endif
#ifndef ze08
extern dw& ze08;
#endif
#ifndef ye08
extern dw& ye08;
#endif
#ifndef secscanoff1
extern dw& secscanoff1;
#endif
#ifndef sctrscalemode
extern dw& sctrscalemode;
#endif
#ifndef ygrid1
extern dw& ygrid1;
#endif
#ifndef nomansland
extern db& nomansland;
#endif
#ifndef xsz
extern dw& xsz;
#endif
#ifndef ze01
extern dw& ze01;
#endif
#ifndef xe016
extern dw& xe016;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef ye01
extern dw& ye01;
#endif
#ifndef ye016
extern dw& ye016;
#endif
#ifndef ygrid16
extern dw& ygrid16;
#endif
#ifndef secscancnt1
extern dw& secscancnt1;
#endif
#ifndef ypos2
extern dw& ypos2;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef zpos16
extern dw& zpos16;
#endif
#ifndef ypos1
extern dw& ypos1;
#endif
#ifndef zsz
extern dw& zsz;
#endif
#ifndef zpos1
extern dw& zpos1;
#endif
#ifndef zpos2
extern dw& zpos2;
#endif
#ifndef xgrid8
extern dw& xgrid8;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef ypos16
extern dw& ypos16;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef ysecscan
extern dw& ysecscan;
#endif
#ifndef hilllayer9
extern db& hilllayer9;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef ygrid8
extern dw& ygrid8;
#endif
#ifndef ysz
extern dw& ysz;
#endif
#ifndef xe01
extern dw& xe01;
#endif
#ifndef xe08
extern dw& xe08;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_scansectors
#define M2C_CODE_EQUATE_scansectors 1
static const dd kscansectors = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_exitsectors
#define M2C_CODE_EQUATE_exitsectors 1
static const dd kexitsectors = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_maxscansize
#define M2C_CODE_EQUATE_maxscansize 1
static const dd kmaxscansize = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_setscansize
#define M2C_CODE_EQUATE_setscansize 1
static const dd ksetscansize = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop1
#define M2C_CODE_EQUATE_scanyloop1 1
static const dd kscanyloop1 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop1
#define M2C_CODE_EQUATE_scanxloop1 1
static const dd kscanxloop1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_checkforhills
#define M2C_CODE_EQUATE_checkforhills 1
static const dd kcheckforhills = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_contsector1
#define M2C_CODE_EQUATE_contsector1 1
static const dd kcontsector1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_skipsector1
#define M2C_CODE_EQUATE_skipsector1 1
static const dd kskipsector1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_hills
#define M2C_CODE_EQUATE_hills 1
static const dd khills = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_endxloop1
#define M2C_CODE_EQUATE_endxloop1 1
static const dd kendxloop1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_endyloop1
#define M2C_CODE_EQUATE_endyloop1 1
static const dd kendyloop1 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop2
#define M2C_CODE_EQUATE_scanyloop2 1
static const dd kscanyloop2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop2
#define M2C_CODE_EQUATE_scanxloop2 1
static const dd kscanxloop2 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_skipsector2
#define M2C_CODE_EQUATE_skipsector2 1
static const dd kskipsector2 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_setscalemode
#define M2C_CODE_EQUATE_setscalemode 1
static const dd ksetscalemode = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_calccentre1
#define M2C_CODE_EQUATE_calccentre1 1
static const dd kcalccentre1 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_calccentre2
#define M2C_CODE_EQUATE_calccentre2 1
static const dd kcalccentre2 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_calccentre8
#define M2C_CODE_EQUATE_calccentre8 1
static const dd kcalccentre8 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_calccentre16
#define M2C_CODE_EQUATE_calccentre16 1
static const dd kcalccentre16 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_testsector1
#define M2C_CODE_EQUATE_testsector1 1
static const dd ktestsector1 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_failsector2
#define M2C_CODE_EQUATE_failsector2 1
static const dd kfailsector2 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_testsector2
#define M2C_CODE_EQUATE_testsector2 1
static const dd ktestsector2 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_fastsector2
#define M2C_CODE_EQUATE_fastsector2 1
static const dd kfastsector2 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_failsector8
#define M2C_CODE_EQUATE_failsector8 1
static const dd kfailsector8 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_testsector8
#define M2C_CODE_EQUATE_testsector8 1
static const dd ktestsector8 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_fastsector8
#define M2C_CODE_EQUATE_fastsector8 1
static const dd kfastsector8 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_failsector16
#define M2C_CODE_EQUATE_failsector16 1
static const dd kfailsector16 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_testsector16
#define M2C_CODE_EQUATE_testsector16 1
static const dd ktestsector16 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_fastsector16
#define M2C_CODE_EQUATE_fastsector16 1
static const dd kfastsector16 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1042;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_calcsctrcentre
#define M2C_CODE_EQUATE_calcsctrcentre 1
static const dd kcalcsctrcentre = (m2c::near_offset_external(::calcsctrcentre));
#endif
#ifndef M2C_CODE_EQUATE_sectorreject
#define M2C_CODE_EQUATE_sectorreject 1
static const dd ksectorreject = (m2c::near_offset_external(::sectorreject));
#endif
#ifndef M2C_CODE_EQUATE_flatscanmaxoff
#define M2C_CODE_EQUATE_flatscanmaxoff 1
static const dd kflatscanmaxoff = (m2c::near_offset_external(::flatscanmaxoff));
#endif
#ifndef M2C_CODE_EQUATE_hillsonlyflag
#define M2C_CODE_EQUATE_hillsonlyflag 1
static const dd khillsonlyflag = (m2c::near_offset_external(::hillsonlyflag));
#endif
#ifndef M2C_CODE_EQUATE_comprejecttest
#define M2C_CODE_EQUATE_comprejecttest 1
static const dd kcomprejecttest = (m2c::near_offset_external(::comprejecttest));
#endif
}
#ifndef calcsctrcentre
#define calcsctrcentre m2c::kcalcsctrcentre
#endif
#ifndef sectorreject
#define sectorreject m2c::ksectorreject
#endif
#ifndef flatscanmaxoff
#define flatscanmaxoff m2c::kflatscanmaxoff
#endif
#ifndef hillsonlyflag
#define hillsonlyflag m2c::khillsonlyflag
#endif
#ifndef comprejecttest
#define comprejecttest m2c::kcomprejecttest
#endif



#endif
