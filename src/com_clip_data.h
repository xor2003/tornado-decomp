#ifndef __M2C_COM_CLIP_DATA_H__
#define __M2C_COM_CLIP_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& clipwndwxorg;
extern db (& clipwndwyorg)[2];
extern dw& clipwndwxmax;
extern db (& clipwndwymax)[2];
extern dw& clipwndwwidth;
extern dw& clipwndwdepth;
extern dw (& clipwndwsize)[2];
extern dw (& dummy35ce81fe_data_10_399)[2];
extern dw (& dummy35ce81fe_data_14_400)[2];
extern dw (& dummy35ce81fe_data_18_401)[2];
extern dw (& dummy35ce81fe_data_1c_402)[2];
extern dw (& dummy35ce81fe_data_20_403)[2];
extern dw (& dummy35ce81fe_data_24_404)[2];
extern dw (& dummy35ce81fe_data_28_405)[2];
extern db& varcliporg;
extern db& dummy35ce81fe_data_2d_409;
extern db& dummy35ce81fe_data_2e_410;
extern dw& _scalevpyramid;
extern dw& dummy35ce81fe_data_31_416;
extern dw& dummy35ce81fe_data_33_417;
extern dw& dummy35ce81fe_data_35_418;
extern dw& dummy35ce81fe_data_37_419;
extern dw& dummy35ce81fe_data_39_420;
extern dw& dummy35ce81fe_data_3b_421;
extern dw& dummy35ce81fe_data_3d_422;
extern dw& dummy35ce81fe_data_3f_423;
extern dw& _calccrt;
extern dw& dummy35ce81fe_data_43_425;
extern dw& dummy35ce81fe_data_45_426;
extern dw& dummy35ce81fe_data_47_427;
extern dw& dummy35ce81fe_data_49_428;
extern dw& dummy35ce81fe_data_4b_429;
extern dw& dummy35ce81fe_data_4d_430;
extern dw& dummy35ce81fe_data_4f_431;
extern dw& dummy35ce81fe_data_51_432;
extern dw& _circlecrt;
extern dw& dummy35ce81fe_data_55_434;
extern dw& dummy35ce81fe_data_57_435;
extern dw& dummy35ce81fe_data_59_436;
extern dw& dummy35ce81fe_data_5b_437;
extern dw& dummy35ce81fe_data_5d_438;
extern dw& dummy35ce81fe_data_5f_439;
extern dw& dummy35ce81fe_data_61_440;
extern dw& dummy35ce81fe_data_63_441;
extern dw& objectdrawmode;
extern dw& polyclipmode;
extern dw& dummy35ce81fe_data_69_451;
extern dw& dummy35ce81fe_data_6b_452;
extern dw& plineclipmode;
extern dw& dummy35ce81fe_data_6f_454;
extern dw& dummy35ce81fe_data_71_455;
extern dw& pdotclipmode;
extern dw& dummy35ce81fe_data_75_457;
extern dw& dummy35ce81fe_data_77_458;
extern dw& cyclicmode;
extern dw& dummy35ce81fe_data_7b_460;
extern dw& dummy35ce81fe_data_7d_461;
extern dw (& clipbuffer)[512];
extern dw& lastptr;
extern db (& lookahead)[2];
extern dw& intopolyclip;
extern dw& dummy35ce81fe_data_485_471;
extern dw& dummy35ce81fe_data_487_472;
extern dw& dummy35ce81fe_data_489_473;
extern dw& dummy35ce81fe_data_48b_474;
extern dw& dummy35ce81fe_data_48d_475;
extern dw& xenda;
extern dw& yenda;
extern dw& zenda;
extern db (& ocodeenda)[2];
extern dw& xendb;
extern dw& yendb;
extern dw& zendb;
extern dw& xendc;
extern dw& yendc;
extern dw& zendc;
extern dw& cliprecover;
extern dw& tempptr1;
extern dw& tempptr2;
extern dw& tempptr3;
extern db& viscode;

#ifndef xe
extern dw& xe;
#endif
#ifndef circleymin
extern dw& circleymin;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef circlexmax
extern dw& circlexmax;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef circlexmin
extern dw& circlexmin;
#endif
#ifndef circleymax
extern dw& circleymax;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef viewmode
extern dw& viewmode;
#endif
#ifndef outcode
extern db& outcode;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_setviewmode
#define M2C_CODE_EQUATE_setviewmode 1
static const dd ksetviewmode = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_calcoutcodes
#define M2C_CODE_EQUATE_calcoutcodes 1
static const dd kcalcoutcodes = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_ocodeloop
#define M2C_CODE_EQUATE_ocodeloop 1
static const dd kocodeloop = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_skipobject
#define M2C_CODE_EQUATE_skipobject 1
static const dd kskipobject = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_drawobject
#define M2C_CODE_EQUATE_drawobject 1
static const dd kdrawobject = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_clipobject
#define M2C_CODE_EQUATE_clipobject 1
static const dd kclipobject = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_genxycrtloop
#define M2C_CODE_EQUATE_genxycrtloop 1
static const dd kgenxycrtloop = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_quickoutcodes
#define M2C_CODE_EQUATE_quickoutcodes 1
static const dd kquickoutcodes = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_quickocodeloop
#define M2C_CODE_EQUATE_quickocodeloop 1
static const dd kquickocodeloop = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_yneg1
#define M2C_CODE_EQUATE_yneg1 1
static const dd kyneg1 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_xneg1
#define M2C_CODE_EQUATE_xneg1 1
static const dd kxneg1 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_checkzy1
#define M2C_CODE_EQUATE_checkzy1 1
static const dd kcheckzy1 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_zneg1
#define M2C_CODE_EQUATE_zneg1 1
static const dd kzneg1 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_calcocodeexit
#define M2C_CODE_EQUATE_calcocodeexit 1
static const dd kcalcocodeexit = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_xneg2
#define M2C_CODE_EQUATE_xneg2 1
static const dd kxneg2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_checkzy2
#define M2C_CODE_EQUATE_checkzy2 1
static const dd kcheckzy2 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_zneg2
#define M2C_CODE_EQUATE_zneg2 1
static const dd kzneg2 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_scalevpyramid
#define M2C_CODE_EQUATE_scalevpyramid 1
static const dd kscalevpyramid = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_calccrt
#define M2C_CODE_EQUATE_calccrt 1
static const dd kcalccrt = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_circlecrt
#define M2C_CODE_EQUATE_circlecrt 1
static const dd kcirclecrt = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_polyclip
#define M2C_CODE_EQUATE_polyclip 1
static const dd kpolyclip = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_drawpoly
#define M2C_CODE_EQUATE_drawpoly 1
static const dd kdrawpoly = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyloop
#define M2C_CODE_EQUATE_drawpolyloop 1
static const dd kdrawpolyloop = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_sortpolyterm
#define M2C_CODE_EQUATE_sortpolyterm 1
static const dd ksortpolyterm = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyfail
#define M2C_CODE_EQUATE_drawpolyfail 1
static const dd kdrawpolyfail = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_clippoly
#define M2C_CODE_EQUATE_clippoly 1
static const dd kclippoly = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_nextpolycoord
#define M2C_CODE_EQUATE_nextpolycoord 1
static const dd knextpolycoord = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_sortpolyvis
#define M2C_CODE_EQUATE_sortpolyvis 1
static const dd ksortpolyvis = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_clippolyfaillnk
#define M2C_CODE_EQUATE_clippolyfaillnk 1
static const dd kclippolyfaillnk = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_clipswitch
#define M2C_CODE_EQUATE_clipswitch 1
static const dd kclipswitch = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_clippolyfail
#define M2C_CODE_EQUATE_clippolyfail 1
static const dd kclippolyfail = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_intobehindclip
#define M2C_CODE_EQUATE_intobehindclip 1
static const dd kintobehindclip = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_behindcliploop
#define M2C_CODE_EQUATE_behindcliploop 1
static const dd kbehindcliploop = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_skipbehindclip
#define M2C_CODE_EQUATE_skipbehindclip 1
static const dd kskipbehindclip = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_skipbehindpoint
#define M2C_CODE_EQUATE_skipbehindpoint 1
static const dd kskipbehindpoint = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_nextbehindclip
#define M2C_CODE_EQUATE_nextbehindclip 1
static const dd knextbehindclip = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_leftclipstart
#define M2C_CODE_EQUATE_leftclipstart 1
static const dd kleftclipstart = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_behindfail
#define M2C_CODE_EQUATE_behindfail 1
static const dd kbehindfail = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_rightclipstart
#define M2C_CODE_EQUATE_rightclipstart 1
static const dd krightclipstart = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_intoleftclip
#define M2C_CODE_EQUATE_intoleftclip 1
static const dd kintoleftclip = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_leftcliploop
#define M2C_CODE_EQUATE_leftcliploop 1
static const dd kleftcliploop = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skipleftclip
#define M2C_CODE_EQUATE_skipleftclip 1
static const dd kskipleftclip = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_skipleftpoint
#define M2C_CODE_EQUATE_skipleftpoint 1
static const dd kskipleftpoint = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_nextleftclip
#define M2C_CODE_EQUATE_nextleftclip 1
static const dd knextleftclip = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_leftfail
#define M2C_CODE_EQUATE_leftfail 1
static const dd kleftfail = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_belowclipstart
#define M2C_CODE_EQUATE_belowclipstart 1
static const dd kbelowclipstart = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_intorightclip
#define M2C_CODE_EQUATE_intorightclip 1
static const dd kintorightclip = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_rightcliploop
#define M2C_CODE_EQUATE_rightcliploop 1
static const dd krightcliploop = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_skiprightclip
#define M2C_CODE_EQUATE_skiprightclip 1
static const dd kskiprightclip = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_skiprightpoint
#define M2C_CODE_EQUATE_skiprightpoint 1
static const dd kskiprightpoint = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_nextrightclip
#define M2C_CODE_EQUATE_nextrightclip 1
static const dd knextrightclip = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_rightfail
#define M2C_CODE_EQUATE_rightfail 1
static const dd krightfail = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_aboveclipstart
#define M2C_CODE_EQUATE_aboveclipstart 1
static const dd kaboveclipstart = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_intobelowclip
#define M2C_CODE_EQUATE_intobelowclip 1
static const dd kintobelowclip = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_belowcliploop
#define M2C_CODE_EQUATE_belowcliploop 1
static const dd kbelowcliploop = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_skipbelowclip
#define M2C_CODE_EQUATE_skipbelowclip 1
static const dd kskipbelowclip = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_skipbelowpoint
#define M2C_CODE_EQUATE_skipbelowpoint 1
static const dd kskipbelowpoint = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_nextbelowclip
#define M2C_CODE_EQUATE_nextbelowclip 1
static const dd knextbelowclip = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_belowfail
#define M2C_CODE_EQUATE_belowfail 1
static const dd kbelowfail = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_sortpolycrt
#define M2C_CODE_EQUATE_sortpolycrt 1
static const dd ksortpolycrt = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_intoaboveclip
#define M2C_CODE_EQUATE_intoaboveclip 1
static const dd kintoaboveclip = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_abovecliploop
#define M2C_CODE_EQUATE_abovecliploop 1
static const dd kabovecliploop = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_skipaboveclip
#define M2C_CODE_EQUATE_skipaboveclip 1
static const dd kskipaboveclip = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_skipabovepoint
#define M2C_CODE_EQUATE_skipabovepoint 1
static const dd kskipabovepoint = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_nextaboveclip
#define M2C_CODE_EQUATE_nextaboveclip 1
static const dd knextaboveclip = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_polycrtloop
#define M2C_CODE_EQUATE_polycrtloop 1
static const dd kpolycrtloop = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_skippolypoint
#define M2C_CODE_EQUATE_skippolypoint 1
static const dd kskippolypoint = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_polyclipcheck
#define M2C_CODE_EQUATE_polyclipcheck 1
static const dd kpolyclipcheck = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_clipdiverror
#define M2C_CODE_EQUATE_clipdiverror 1
static const dd kclipdiverror = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_clipdivtest
#define M2C_CODE_EQUATE_clipdivtest 1
static const dd kclipdivtest = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_pclipbehind1
#define M2C_CODE_EQUATE_pclipbehind1 1
static const dd kpclipbehind1 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_behindpclipdone
#define M2C_CODE_EQUATE_behindpclipdone 1
static const dd kbehindpclipdone = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_pclipabove1
#define M2C_CODE_EQUATE_pclipabove1 1
static const dd kpclipabove1 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_abovepclipdone
#define M2C_CODE_EQUATE_abovepclipdone 1
static const dd kabovepclipdone = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_pclipbelow1
#define M2C_CODE_EQUATE_pclipbelow1 1
static const dd kpclipbelow1 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_belowpclipdone
#define M2C_CODE_EQUATE_belowpclipdone 1
static const dd kbelowpclipdone = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_pclipright1
#define M2C_CODE_EQUATE_pclipright1 1
static const dd kpclipright1 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_rightpclipdone
#define M2C_CODE_EQUATE_rightpclipdone 1
static const dd krightpclipdone = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_pclipleft1
#define M2C_CODE_EQUATE_pclipleft1 1
static const dd kpclipleft1 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_leftpclipdone
#define M2C_CODE_EQUATE_leftpclipdone 1
static const dd kleftpclipdone = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_nullpoly
#define M2C_CODE_EQUATE_nullpoly 1
static const dd knullpoly = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_nullpolyloop
#define M2C_CODE_EQUATE_nullpolyloop 1
static const dd knullpolyloop = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_cliplineend
#define M2C_CODE_EQUATE_cliplineend 1
static const dd kcliplineend = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_skiplinebehind
#define M2C_CODE_EQUATE_skiplinebehind 1
static const dd kskiplinebehind = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_clipendfail
#define M2C_CODE_EQUATE_clipendfail 1
static const dd kclipendfail = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_skiplineleft
#define M2C_CODE_EQUATE_skiplineleft 1
static const dd kskiplineleft = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_clipendexit
#define M2C_CODE_EQUATE_clipendexit 1
static const dd kclipendexit = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_skiplineright
#define M2C_CODE_EQUATE_skiplineright 1
static const dd kskiplineright = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_skiplinebelow
#define M2C_CODE_EQUATE_skiplinebelow 1
static const dd kskiplinebelow = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_lineclipcheck
#define M2C_CODE_EQUATE_lineclipcheck 1
static const dd klineclipcheck = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_lclipdiverror
#define M2C_CODE_EQUATE_lclipdiverror 1
static const dd klclipdiverror = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_lclipdivtest
#define M2C_CODE_EQUATE_lclipdivtest 1
static const dd klclipdivtest = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_lclipbehind1
#define M2C_CODE_EQUATE_lclipbehind1 1
static const dd klclipbehind1 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_behindlclipdone
#define M2C_CODE_EQUATE_behindlclipdone 1
static const dd kbehindlclipdone = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_lclipabove1
#define M2C_CODE_EQUATE_lclipabove1 1
static const dd klclipabove1 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_abovelclipdone
#define M2C_CODE_EQUATE_abovelclipdone 1
static const dd kabovelclipdone = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_lclipbelow1
#define M2C_CODE_EQUATE_lclipbelow1 1
static const dd klclipbelow1 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_belowlclipdone
#define M2C_CODE_EQUATE_belowlclipdone 1
static const dd kbelowlclipdone = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_lclipright1
#define M2C_CODE_EQUATE_lclipright1 1
static const dd klclipright1 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_rightlclipdone
#define M2C_CODE_EQUATE_rightlclipdone 1
static const dd krightlclipdone = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_lclipleft1
#define M2C_CODE_EQUATE_lclipleft1 1
static const dd klclipleft1 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_leftlclipdone
#define M2C_CODE_EQUATE_leftlclipdone 1
static const dd kleftlclipdone = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_polylineclip
#define M2C_CODE_EQUATE_polylineclip 1
static const dd kpolylineclip = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyline
#define M2C_CODE_EQUATE_drawpolyline 1
static const dd kdrawpolyline = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_redodrawpline
#define M2C_CODE_EQUATE_redodrawpline 1
static const dd kredodrawpline = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_drawplineexit
#define M2C_CODE_EQUATE_drawplineexit 1
static const dd kdrawplineexit = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_drawplineloop
#define M2C_CODE_EQUATE_drawplineloop 1
static const dd kdrawplineloop = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_drawplinefail
#define M2C_CODE_EQUATE_drawplinefail 1
static const dd kdrawplinefail = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_clipplineexit
#define M2C_CODE_EQUATE_clipplineexit 1
static const dd kclipplineexit = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_clipplinefail
#define M2C_CODE_EQUATE_clipplinefail 1
static const dd kclipplinefail = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_clippolyline
#define M2C_CODE_EQUATE_clippolyline 1
static const dd kclippolyline = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_redoclippline
#define M2C_CODE_EQUATE_redoclippline 1
static const dd kredoclippline = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_clipplineloop
#define M2C_CODE_EQUATE_clipplineloop 1
static const dd kclipplineloop = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_plinevistest
#define M2C_CODE_EQUATE_plinevistest 1
static const dd kplinevistest = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_plinenonvis
#define M2C_CODE_EQUATE_plinenonvis 1
static const dd kplinenonvis = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_clipplinedraw
#define M2C_CODE_EQUATE_clipplinedraw 1
static const dd kclipplinedraw = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_clipplineendb
#define M2C_CODE_EQUATE_clipplineendb 1
static const dd kclipplineendb = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_nullpolyline
#define M2C_CODE_EQUATE_nullpolyline 1
static const dd knullpolyline = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_nullplineloop
#define M2C_CODE_EQUATE_nullplineloop 1
static const dd knullplineloop = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_polydotclip
#define M2C_CODE_EQUATE_polydotclip 1
static const dd kpolydotclip = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_drawpolydots
#define M2C_CODE_EQUATE_drawpolydots 1
static const dd kdrawpolydots = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_clippolydots
#define M2C_CODE_EQUATE_clippolydots 1
static const dd kclippolydots = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_nullpolydots
#define M2C_CODE_EQUATE_nullpolydots 1
static const dd knullpolydots = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_quicklineclip
#define M2C_CODE_EQUATE_quicklineclip 1
static const dd kquicklineclip = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_qlineclipfail
#define M2C_CODE_EQUATE_qlineclipfail 1
static const dd kqlineclipfail = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_clipenda
#define M2C_CODE_EQUATE_clipenda 1
static const dd kclipenda = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_calcendacrt
#define M2C_CODE_EQUATE_calcendacrt 1
static const dd kcalcendacrt = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_clipendb
#define M2C_CODE_EQUATE_clipendb 1
static const dd kclipendb = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_calcendbcrt
#define M2C_CODE_EQUATE_calcendbcrt 1
static const dd kcalcendbcrt = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_horizonclip
#define M2C_CODE_EQUATE_horizonclip 1
static const dd khorizonclip = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_hrznclipfail
#define M2C_CODE_EQUATE_hrznclipfail 1
static const dd khrznclipfail = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dotclip
#define M2C_CODE_EQUATE_dotclip 1
static const dd kdotclip = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dotclipfail
#define M2C_CODE_EQUATE_dotclipfail 1
static const dd kdotclipfail = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_xdotclip
#define M2C_CODE_EQUATE_xdotclip 1
static const dd kxdotclip = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_xdotclipfail
#define M2C_CODE_EQUATE_xdotclipfail 1
static const dd kxdotclipfail = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_cycliccheck
#define M2C_CODE_EQUATE_cycliccheck 1
static const dd kcycliccheck = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_fastcyclic
#define M2C_CODE_EQUATE_fastcyclic 1
static const dd kfastcyclic = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_fastcyclicfail
#define M2C_CODE_EQUATE_fastcyclicfail 1
static const dd kfastcyclicfail = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_slowcyclicfail
#define M2C_CODE_EQUATE_slowcyclicfail 1
static const dd kslowcyclicfail = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_slowcyclic
#define M2C_CODE_EQUATE_slowcyclic 1
static const dd kslowcyclic = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_x2y2loop
#define M2C_CODE_EQUATE_x2y2loop 1
static const dd kx2y2loop = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_x3y3loop
#define M2C_CODE_EQUATE_x3y3loop 1
static const dd kx3y3loop = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_calcresult1
#define M2C_CODE_EQUATE_calcresult1 1
static const dd kcalcresult1 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_x4y4loop
#define M2C_CODE_EQUATE_x4y4loop 1
static const dd kx4y4loop = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_loopback1
#define M2C_CODE_EQUATE_loopback1 1
static const dd kloopback1 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_contcyclic1
#define M2C_CODE_EQUATE_contcyclic1 1
static const dd kcontcyclic1 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_calcresult2
#define M2C_CODE_EQUATE_calcresult2 1
static const dd kcalcresult2 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_x5y5loop
#define M2C_CODE_EQUATE_x5y5loop 1
static const dd kx5y5loop = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_loopback2
#define M2C_CODE_EQUATE_loopback2 1
static const dd kloopback2 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_contcyclic2
#define M2C_CODE_EQUATE_contcyclic2 1
static const dd kcontcyclic2 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_calcresult3
#define M2C_CODE_EQUATE_calcresult3 1
static const dd kcalcresult3 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_nullcyclic
#define M2C_CODE_EQUATE_nullcyclic 1
static const dd knullcyclic = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_calccirclecrt
#define M2C_CODE_EQUATE_calccirclecrt 1
static const dd kcalccirclecrt = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_xcalcunclipcrt
#define M2C_CODE_EQUATE_xcalcunclipcrt 1
static const dd kxcalcunclipcrt = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x10e9;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_clipwndwxorg
#define M2C_CODE_EQUATE_clipwndwxorg 1
static const dd kclipwndwxorg = (m2c::near_offset_external(::clipwndwxorg));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwyorg
#define M2C_CODE_EQUATE_clipwndwyorg 1
static const dd kclipwndwyorg = (m2c::near_offset_external(::clipwndwyorg));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwxmax
#define M2C_CODE_EQUATE_clipwndwxmax 1
static const dd kclipwndwxmax = (m2c::near_offset_external(::clipwndwxmax));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwymax
#define M2C_CODE_EQUATE_clipwndwymax 1
static const dd kclipwndwymax = (m2c::near_offset_external(::clipwndwymax));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwwidth
#define M2C_CODE_EQUATE_clipwndwwidth 1
static const dd kclipwndwwidth = (m2c::near_offset_external(::clipwndwwidth));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwdepth
#define M2C_CODE_EQUATE_clipwndwdepth 1
static const dd kclipwndwdepth = (m2c::near_offset_external(::clipwndwdepth));
#endif
#ifndef M2C_CODE_EQUATE_clipwndwsize
#define M2C_CODE_EQUATE_clipwndwsize 1
static const dd kclipwndwsize = (m2c::near_offset_external(::clipwndwsize));
#endif
#ifndef M2C_CODE_EQUATE_varcliporg
#define M2C_CODE_EQUATE_varcliporg 1
static const dd kvarcliporg = (m2c::near_offset_external(::varcliporg));
#endif
#ifndef M2C_CODE_EQUATE__scalevpyramid
#define M2C_CODE_EQUATE__scalevpyramid 1
static const dd k_scalevpyramid = (m2c::near_offset_external(::_scalevpyramid));
#endif
#ifndef M2C_CODE_EQUATE__calccrt
#define M2C_CODE_EQUATE__calccrt 1
static const dd k_calccrt = (m2c::near_offset_external(::_calccrt));
#endif
#ifndef M2C_CODE_EQUATE__circlecrt
#define M2C_CODE_EQUATE__circlecrt 1
static const dd k_circlecrt = (m2c::near_offset_external(::_circlecrt));
#endif
#ifndef M2C_CODE_EQUATE_objectdrawmode
#define M2C_CODE_EQUATE_objectdrawmode 1
static const dd kobjectdrawmode = (m2c::near_offset_external(::objectdrawmode));
#endif
#ifndef M2C_CODE_EQUATE_polyclipmode
#define M2C_CODE_EQUATE_polyclipmode 1
static const dd kpolyclipmode = (m2c::near_offset_external(::polyclipmode));
#endif
#ifndef M2C_CODE_EQUATE_plineclipmode
#define M2C_CODE_EQUATE_plineclipmode 1
static const dd kplineclipmode = (m2c::near_offset_external(::plineclipmode));
#endif
#ifndef M2C_CODE_EQUATE_pdotclipmode
#define M2C_CODE_EQUATE_pdotclipmode 1
static const dd kpdotclipmode = (m2c::near_offset_external(::pdotclipmode));
#endif
#ifndef M2C_CODE_EQUATE_cyclicmode
#define M2C_CODE_EQUATE_cyclicmode 1
static const dd kcyclicmode = (m2c::near_offset_external(::cyclicmode));
#endif
#ifndef M2C_CODE_EQUATE_clipbuffer
#define M2C_CODE_EQUATE_clipbuffer 1
static const dd kclipbuffer = (m2c::near_offset_external(::clipbuffer));
#endif
#ifndef M2C_CODE_EQUATE_lastptr
#define M2C_CODE_EQUATE_lastptr 1
static const dd klastptr = (m2c::near_offset_external(::lastptr));
#endif
#ifndef M2C_CODE_EQUATE_lookahead
#define M2C_CODE_EQUATE_lookahead 1
static const dd klookahead = (m2c::near_offset_external(::lookahead));
#endif
#ifndef M2C_CODE_EQUATE_intopolyclip
#define M2C_CODE_EQUATE_intopolyclip 1
static const dd kintopolyclip = (m2c::near_offset_external(::intopolyclip));
#endif
#ifndef M2C_CODE_EQUATE_xenda
#define M2C_CODE_EQUATE_xenda 1
static const dd kxenda = (m2c::near_offset_external(::xenda));
#endif
#ifndef M2C_CODE_EQUATE_yenda
#define M2C_CODE_EQUATE_yenda 1
static const dd kyenda = (m2c::near_offset_external(::yenda));
#endif
#ifndef M2C_CODE_EQUATE_zenda
#define M2C_CODE_EQUATE_zenda 1
static const dd kzenda = (m2c::near_offset_external(::zenda));
#endif
#ifndef M2C_CODE_EQUATE_ocodeenda
#define M2C_CODE_EQUATE_ocodeenda 1
static const dd kocodeenda = (m2c::near_offset_external(::ocodeenda));
#endif
#ifndef M2C_CODE_EQUATE_xendb
#define M2C_CODE_EQUATE_xendb 1
static const dd kxendb = (m2c::near_offset_external(::xendb));
#endif
#ifndef M2C_CODE_EQUATE_yendb
#define M2C_CODE_EQUATE_yendb 1
static const dd kyendb = (m2c::near_offset_external(::yendb));
#endif
#ifndef M2C_CODE_EQUATE_zendb
#define M2C_CODE_EQUATE_zendb 1
static const dd kzendb = (m2c::near_offset_external(::zendb));
#endif
#ifndef M2C_CODE_EQUATE_xendc
#define M2C_CODE_EQUATE_xendc 1
static const dd kxendc = (m2c::near_offset_external(::xendc));
#endif
#ifndef M2C_CODE_EQUATE_yendc
#define M2C_CODE_EQUATE_yendc 1
static const dd kyendc = (m2c::near_offset_external(::yendc));
#endif
#ifndef M2C_CODE_EQUATE_zendc
#define M2C_CODE_EQUATE_zendc 1
static const dd kzendc = (m2c::near_offset_external(::zendc));
#endif
#ifndef M2C_CODE_EQUATE_cliprecover
#define M2C_CODE_EQUATE_cliprecover 1
static const dd kcliprecover = (m2c::near_offset_external(::cliprecover));
#endif
#ifndef M2C_CODE_EQUATE_tempptr1
#define M2C_CODE_EQUATE_tempptr1 1
static const dd ktempptr1 = (m2c::near_offset_external(::tempptr1));
#endif
#ifndef M2C_CODE_EQUATE_tempptr2
#define M2C_CODE_EQUATE_tempptr2 1
static const dd ktempptr2 = (m2c::near_offset_external(::tempptr2));
#endif
#ifndef M2C_CODE_EQUATE_tempptr3
#define M2C_CODE_EQUATE_tempptr3 1
static const dd ktempptr3 = (m2c::near_offset_external(::tempptr3));
#endif
}
#ifndef clipwndwxorg
#define clipwndwxorg m2c::kclipwndwxorg
#endif
#ifndef clipwndwyorg
#define clipwndwyorg m2c::kclipwndwyorg
#endif
#ifndef clipwndwxmax
#define clipwndwxmax m2c::kclipwndwxmax
#endif
#ifndef clipwndwymax
#define clipwndwymax m2c::kclipwndwymax
#endif
#ifndef clipwndwwidth
#define clipwndwwidth m2c::kclipwndwwidth
#endif
#ifndef clipwndwdepth
#define clipwndwdepth m2c::kclipwndwdepth
#endif
#ifndef clipwndwsize
#define clipwndwsize m2c::kclipwndwsize
#endif
#ifndef varcliporg
#define varcliporg m2c::kvarcliporg
#endif
#ifndef _scalevpyramid
#define _scalevpyramid m2c::k_scalevpyramid
#endif
#ifndef _calccrt
#define _calccrt m2c::k_calccrt
#endif
#ifndef _circlecrt
#define _circlecrt m2c::k_circlecrt
#endif
#ifndef objectdrawmode
#define objectdrawmode m2c::kobjectdrawmode
#endif
#ifndef polyclipmode
#define polyclipmode m2c::kpolyclipmode
#endif
#ifndef plineclipmode
#define plineclipmode m2c::kplineclipmode
#endif
#ifndef pdotclipmode
#define pdotclipmode m2c::kpdotclipmode
#endif
#ifndef cyclicmode
#define cyclicmode m2c::kcyclicmode
#endif
#ifndef clipbuffer
#define clipbuffer m2c::kclipbuffer
#endif
#ifndef lastptr
#define lastptr m2c::klastptr
#endif
#ifndef lookahead
#define lookahead m2c::klookahead
#endif
#ifndef intopolyclip
#define intopolyclip m2c::kintopolyclip
#endif
#ifndef xenda
#define xenda m2c::kxenda
#endif
#ifndef yenda
#define yenda m2c::kyenda
#endif
#ifndef zenda
#define zenda m2c::kzenda
#endif
#ifndef ocodeenda
#define ocodeenda m2c::kocodeenda
#endif
#ifndef xendb
#define xendb m2c::kxendb
#endif
#ifndef yendb
#define yendb m2c::kyendb
#endif
#ifndef zendb
#define zendb m2c::kzendb
#endif
#ifndef xendc
#define xendc m2c::kxendc
#endif
#ifndef yendc
#define yendc m2c::kyendc
#endif
#ifndef zendc
#define zendc m2c::kzendc
#endif
#ifndef cliprecover
#define cliprecover m2c::kcliprecover
#endif
#ifndef tempptr1
#define tempptr1 m2c::ktempptr1
#endif
#ifndef tempptr2
#define tempptr2 m2c::ktempptr2
#endif
#ifndef tempptr3
#define tempptr3 m2c::ktempptr3
#endif



#endif
