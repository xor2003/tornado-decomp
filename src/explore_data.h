#ifndef __M2C_EXPLORE_DATA_H__
#define __M2C_EXPLORE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern viewpoint& exp_view;
extern dw& expmapzoom;
extern db (& redrawmap)[2];
extern dw& locatorx;
extern dw& locatory;
extern gamekey& kf_togglemode;
extern gamekey& kf_keyboard;
extern gamekey& kf_joystick;
extern gamekey& kf_mouse;
extern dw& x_ctrldevice;
extern dw& x_xfine;
extern dw& x_yfine;
extern dw& x_zfine;
extern dw& x_hfine;
extern dw& x_pfine;
extern dw& x_rfine;
extern dw& x_sinh;
extern dw& x_cosh;
extern dw& x_sinp;
extern dw& x_cosp;
extern dw& x_sinr;
extern dw& x_cosr;
extern dw& x_vtas;
extern dw& x_zdot;
extern dw& x_eleposn;
extern dw& x_ailposn;
extern dw& x_throtposn;
extern dw& sortctrlswitch;
extern dw& dummy75a7ae01_data_4c_2519;
extern dw& dummy75a7ae01_data_4e_2520;
extern dw& dummy75a7ae01_data_50_2521;
extern dw& initctrlswitch;
extern dw& dummy75a7ae01_data_54_2527;
extern dw& dummy75a7ae01_data_56_2528;
extern dw& dummy75a7ae01_data_58_2529;
extern dw& dispvkts;
extern dw& disphdg;
extern dw& dispalt;
extern dw& disprange;
extern db (& visrange)[7];
extern dw& ctrldevptr;
extern char (& dummy75a7ae01_data_6b_2548)[12];
extern char (& dummy75a7ae01_data_77_2549)[12];
extern char (& dummy75a7ae01_data_83_2550)[12];
extern char (& dummy75a7ae01_data_8f_2551)[12];
extern dw& speedcol;
extern db (& textcol1)[8];
extern db (& textcol2)[8];
extern db (& alertcol)[8];
extern db& dummy75a7ae01_data_b5_2559;
extern db& dummy75a7ae01_data_b6_2560;
extern db (& dummy75a7ae01_data_b7_2561)[2];
extern dw& dummy75a7ae01_data_b9_2562;
extern db (& dummy75a7ae01_data_bb_2563)[2];
extern dw (& dummy75a7ae01_data_bd_2564)[2];
extern char (& dummy75a7ae01_data_c1_2565)[14];
extern char (& dummy75a7ae01_data_cf_2566)[9];
extern char (& dummy75a7ae01_data_d8_2567)[12];
extern char (& dummy75a7ae01_data_e4_2568)[12];
extern char (& dummy75a7ae01_data_f0_2569)[20];
extern char (& dummy75a7ae01_data_104_2570)[5];
extern db (& dummy75a7ae01_data_109_2571)[2];
extern dw& dummy75a7ae01_data_10b_2572;
extern char (& dummy75a7ae01_data_10d_2573)[7];
extern db& dummy75a7ae01_data_114_2574;
extern db& dummy75a7ae01_data_115_2576;
extern db& dummy75a7ae01_data_116_2577;
extern db (& dummy75a7ae01_data_117_2578)[2];
extern dw& dummy75a7ae01_data_119_2579;
extern db (& dummy75a7ae01_data_11b_2580)[2];
extern db (& dummy75a7ae01_data_11d_2582)[2];
extern dw (& dummy75a7ae01_data_11f_2583)[2];
extern db (& dummy75a7ae01_data_123_2584)[2];
extern dw& dummy75a7ae01_data_125_2585;
extern db (& dummy75a7ae01_data_127_2586)[2];
extern dw& dummy75a7ae01_data_129_2587;
extern db (& dummy75a7ae01_data_12b_2588)[2];
extern db (& dummy75a7ae01_data_12d_2590)[2];
extern dw& dummy75a7ae01_data_12f_2591;
extern db (& dummy75a7ae01_data_131_2592)[2];
extern dw& dummy75a7ae01_data_133_2593;
extern db (& dummy75a7ae01_data_135_2594)[2];
extern db (& dummy75a7ae01_data_137_2596)[2];
extern dw& dummy75a7ae01_data_139_2597;
extern db (& dummy75a7ae01_data_13b_2598)[2];
extern dw& dummy75a7ae01_data_13d_2599;
extern db (& dummy75a7ae01_data_13f_2600)[2];
extern db (& dummy75a7ae01_data_141_2602)[2];
extern dw& dummy75a7ae01_data_143_2603;
extern db (& dummy75a7ae01_data_145_2604)[2];
extern dw& dummy75a7ae01_data_147_2605;
extern db (& dummy75a7ae01_data_149_2606)[2];
extern dw& dummy75a7ae01_data_14b_2607;
extern db (& dummy75a7ae01_data_14d_2608)[2];
extern dw& dummy75a7ae01_data_14f_2609;
extern db (& dummy75a7ae01_data_151_2610)[2];
extern db& dummy75a7ae01_data_153_2612;
extern db& timer50;
extern byte& ctrldevdol;
extern byte& titledol;
extern byte& infodol;
extern db& expcode;

#ifndef kf_recal
extern db& kf_recal;
#endif
#ifndef kf_joysensnorm
extern db& kf_joysensnorm;
#endif
#ifndef mousexmin
extern dw& mousexmin;
#endif
#ifndef joyb_flag
extern db& joyb_flag;
#endif
#ifndef joyb_yval
extern dw& joyb_yval;
#endif
#ifndef cloudsenabled
extern db& cloudsenabled;
#endif
#ifndef mousey
extern dw& mousey;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef kf_quit
extern db& kf_quit;
#endif
#ifndef kf_gndtext
extern db& kf_gndtext;
#endif
#ifndef mouseymin
extern dw& mouseymin;
#endif
#ifndef starsenabled
extern db& starsenabled;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef kf_range
extern db& kf_range;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef joya_fire1
extern db& joya_fire1;
#endif
#ifndef lhsbutton
extern db& lhsbutton;
#endif
#ifndef nvg_set
extern db& nvg_set;
#endif
#ifndef key
extern db& key;
#endif
#ifndef mousexmax
extern dw& mousexmax;
#endif
#ifndef joya_yval
extern dw& joya_yval;
#endif
#ifndef mouseflag
extern db& mouseflag;
#endif
#ifndef kf_horizon
extern db& kf_horizon;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef joyvals
extern dw& joyvals;
#endif
#ifndef rhsbutton
extern db& rhsbutton;
#endif
#ifndef workscrptr
extern dw& workscrptr;
#endif
#ifndef joyb_fire1
extern db& joyb_fire1;
#endif
#ifndef mousex
extern dw& mousex;
#endif
#ifndef joya_xval
extern dw& joya_xval;
#endif
#ifndef kf_minimise
extern db& kf_minimise;
#endif
#ifndef kf_clouds
extern db& kf_clouds;
#endif
#ifndef _lhsbutton
extern db& _lhsbutton;
#endif
#ifndef mouseymax
extern dw& mouseymax;
#endif
#ifndef gradenabled
extern db& gradenabled;
#endif
#ifndef joyb_fire2
extern db& joyb_fire2;
#endif
#ifndef horizonvalue4
extern dw& horizonvalue4;
#endif
#ifndef joya_fire2
extern db& joya_fire2;
#endif
#ifndef joya_flag
extern db& joya_flag;
#endif
#ifndef kf_hilltext
extern db& kf_hilltext;
#endif
#ifndef secscancnt1
extern dw& secscancnt1;
#endif
#ifndef night
extern db& night;
#endif
#ifndef joysensitivity
extern db& joysensitivity;
#endif
#ifndef kf_joysenshigh
extern db& kf_joysenshigh;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_mapexplore
#define M2C_CODE_EQUATE_mapexplore 1
static const dd kmapexplore = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_exploreloop
#define M2C_CODE_EQUATE_exploreloop 1
static const dd kexploreloop = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_exploreexit
#define M2C_CODE_EQUATE_exploreexit 1
static const dd kexploreexit = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_maploop
#define M2C_CODE_EQUATE_maploop 1
static const dd kmaploop = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_contmap
#define M2C_CODE_EQUATE_contmap 1
static const dd kcontmap = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_exitmapview
#define M2C_CODE_EQUATE_exitmapview 1
static const dd kexitmapview = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_exitdrawmap
#define M2C_CODE_EQUATE_exitdrawmap 1
static const dd kexitdrawmap = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_exitscroll
#define M2C_CODE_EQUATE_exitscroll 1
static const dd kexitscroll = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_skipdistscale
#define M2C_CODE_EQUATE_skipdistscale 1
static const dd kskipdistscale = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_skipa
#define M2C_CODE_EQUATE_skipa 1
static const dd kskipa = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_skipb
#define M2C_CODE_EQUATE_skipb 1
static const dd kskipb = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_skipc
#define M2C_CODE_EQUATE_skipc 1
static const dd kskipc = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_skipd
#define M2C_CODE_EQUATE_skipd 1
static const dd kskipd = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_flyloop
#define M2C_CODE_EQUATE_flyloop 1
static const dd kflyloop = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_exitflyview
#define M2C_CODE_EQUATE_exitflyview 1
static const dd kexitflyview = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_clearinfobar
#define M2C_CODE_EQUATE_clearinfobar 1
static const dd kclearinfobar = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_42_testhi 1
static const dd k__m2c_macrolocal_42_testhi = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_42_testok 1
static const dd k__m2c_macrolocal_42_testok = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_47_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_47_testhi 1
static const dd k__m2c_macrolocal_47_testhi = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_47_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_47_testok 1
static const dd k__m2c_macrolocal_47_testok = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_50_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_50_testhi 1
static const dd k__m2c_macrolocal_50_testhi = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_50_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_50_testok 1
static const dd k__m2c_macrolocal_50_testok = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_skipalexx1
#define M2C_CODE_EQUATE_skipalexx1 1
static const dd kskipalexx1 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_capvalueto380
#define M2C_CODE_EQUATE_capvalueto380 1
static const dd kcapvalueto380 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_skipcapvalueto380
#define M2C_CODE_EQUATE_skipcapvalueto380 1
static const dd kskipcapvalueto380 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_skipalexx2
#define M2C_CODE_EQUATE_skipalexx2 1
static const dd kskipalexx2 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_capvalueto500
#define M2C_CODE_EQUATE_capvalueto500 1
static const dd kcapvalueto500 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_skipcapvalueto500
#define M2C_CODE_EQUATE_skipcapvalueto500 1
static const dd kskipcapvalueto500 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_contcalcalt
#define M2C_CODE_EQUATE_contcalcalt 1
static const dd kcontcalcalt = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_sortctrlkbd
#define M2C_CODE_EQUATE_sortctrlkbd 1
static const dd ksortctrlkbd = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_sortctrljoy1
#define M2C_CODE_EQUATE_sortctrljoy1 1
static const dd ksortctrljoy1 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_sortctrljoy2
#define M2C_CODE_EQUATE_sortctrljoy2 1
static const dd ksortctrljoy2 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_sortctrlmouse
#define M2C_CODE_EQUATE_sortctrlmouse 1
static const dd ksortctrlmouse = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_initkbd
#define M2C_CODE_EQUATE_initkbd 1
static const dd kinitkbd = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_initjoy1
#define M2C_CODE_EQUATE_initjoy1 1
static const dd kinitjoy1 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_initjoy2
#define M2C_CODE_EQUATE_initjoy2 1
static const dd kinitjoy2 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_initmouse
#define M2C_CODE_EQUATE_initmouse 1
static const dd kinitmouse = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_expcode_0_proc
#define M2C_CODE_EQUATE_expcode_0_proc 1
static const dd kexpcode_0_proc = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_exploreintr100
#define M2C_CODE_EQUATE_exploreintr100 1
static const dd kexploreintr100 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_86_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_86_skip 1
static const dd k__m2c_macrolocal_86_skip = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_getouttanvg
#define M2C_CODE_EQUATE_getouttanvg 1
static const dd kgetouttanvg = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_gounsetnvg
#define M2C_CODE_EQUATE_gounsetnvg 1
static const dd kgounsetnvg = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_washroll
#define M2C_CODE_EQUATE_washroll 1
static const dd kwashroll = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_jumpz
#define M2C_CODE_EQUATE_jumpz 1
static const dd kjumpz = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_afterjumpz
#define M2C_CODE_EQUATE_afterjumpz 1
static const dd kafterjumpz = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_setspeed
#define M2C_CODE_EQUATE_setspeed 1
static const dd ksetspeed = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_87_testhi 1
static const dd k__m2c_macrolocal_87_testhi = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_87_testok 1
static const dd k__m2c_macrolocal_87_testok = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_washpitch
#define M2C_CODE_EQUATE_washpitch 1
static const dd kwashpitch = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_exitintr100
#define M2C_CODE_EQUATE_exitintr100 1
static const dd kexitintr100 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_incposn
#define M2C_CODE_EQUATE_incposn 1
static const dd kincposn = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_decposn
#define M2C_CODE_EQUATE_decposn 1
static const dd kdecposn = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_skipkbd
#define M2C_CODE_EQUATE_skipkbd 1
static const dd kskipkbd = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_skipjoy
#define M2C_CODE_EQUATE_skipjoy 1
static const dd kskipjoy = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_skipmouse
#define M2C_CODE_EQUATE_skipmouse 1
static const dd kskipmouse = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_skiprecal
#define M2C_CODE_EQUATE_skiprecal 1
static const dd kskiprecal = 0x10b5;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_exp_view
#define M2C_CODE_EQUATE_exp_view 1
static const dd kexp_view = (m2c::near_offset_external(::exp_view));
#endif
#ifndef M2C_CODE_EQUATE_expmapzoom
#define M2C_CODE_EQUATE_expmapzoom 1
static const dd kexpmapzoom = (m2c::near_offset_external(::expmapzoom));
#endif
#ifndef M2C_CODE_EQUATE_redrawmap
#define M2C_CODE_EQUATE_redrawmap 1
static const dd kredrawmap = (m2c::near_offset_external(::redrawmap));
#endif
#ifndef M2C_CODE_EQUATE_locatorx
#define M2C_CODE_EQUATE_locatorx 1
static const dd klocatorx = (m2c::near_offset_external(::locatorx));
#endif
#ifndef M2C_CODE_EQUATE_locatory
#define M2C_CODE_EQUATE_locatory 1
static const dd klocatory = (m2c::near_offset_external(::locatory));
#endif
#ifndef M2C_CODE_EQUATE_kf_togglemode
#define M2C_CODE_EQUATE_kf_togglemode 1
static const dd kkf_togglemode = (m2c::near_offset_external(::kf_togglemode));
#endif
#ifndef M2C_CODE_EQUATE_kf_keyboard
#define M2C_CODE_EQUATE_kf_keyboard 1
static const dd kkf_keyboard = (m2c::near_offset_external(::kf_keyboard));
#endif
#ifndef M2C_CODE_EQUATE_kf_joystick
#define M2C_CODE_EQUATE_kf_joystick 1
static const dd kkf_joystick = (m2c::near_offset_external(::kf_joystick));
#endif
#ifndef M2C_CODE_EQUATE_kf_mouse
#define M2C_CODE_EQUATE_kf_mouse 1
static const dd kkf_mouse = (m2c::near_offset_external(::kf_mouse));
#endif
#ifndef M2C_CODE_EQUATE_x_ctrldevice
#define M2C_CODE_EQUATE_x_ctrldevice 1
static const dd kx_ctrldevice = (m2c::near_offset_external(::x_ctrldevice));
#endif
#ifndef M2C_CODE_EQUATE_x_xfine
#define M2C_CODE_EQUATE_x_xfine 1
static const dd kx_xfine = (m2c::near_offset_external(::x_xfine));
#endif
#ifndef M2C_CODE_EQUATE_x_yfine
#define M2C_CODE_EQUATE_x_yfine 1
static const dd kx_yfine = (m2c::near_offset_external(::x_yfine));
#endif
#ifndef M2C_CODE_EQUATE_x_zfine
#define M2C_CODE_EQUATE_x_zfine 1
static const dd kx_zfine = (m2c::near_offset_external(::x_zfine));
#endif
#ifndef M2C_CODE_EQUATE_x_hfine
#define M2C_CODE_EQUATE_x_hfine 1
static const dd kx_hfine = (m2c::near_offset_external(::x_hfine));
#endif
#ifndef M2C_CODE_EQUATE_x_pfine
#define M2C_CODE_EQUATE_x_pfine 1
static const dd kx_pfine = (m2c::near_offset_external(::x_pfine));
#endif
#ifndef M2C_CODE_EQUATE_x_rfine
#define M2C_CODE_EQUATE_x_rfine 1
static const dd kx_rfine = (m2c::near_offset_external(::x_rfine));
#endif
#ifndef M2C_CODE_EQUATE_x_sinh
#define M2C_CODE_EQUATE_x_sinh 1
static const dd kx_sinh = (m2c::near_offset_external(::x_sinh));
#endif
#ifndef M2C_CODE_EQUATE_x_cosh
#define M2C_CODE_EQUATE_x_cosh 1
static const dd kx_cosh = (m2c::near_offset_external(::x_cosh));
#endif
#ifndef M2C_CODE_EQUATE_x_sinp
#define M2C_CODE_EQUATE_x_sinp 1
static const dd kx_sinp = (m2c::near_offset_external(::x_sinp));
#endif
#ifndef M2C_CODE_EQUATE_x_cosp
#define M2C_CODE_EQUATE_x_cosp 1
static const dd kx_cosp = (m2c::near_offset_external(::x_cosp));
#endif
#ifndef M2C_CODE_EQUATE_x_sinr
#define M2C_CODE_EQUATE_x_sinr 1
static const dd kx_sinr = (m2c::near_offset_external(::x_sinr));
#endif
#ifndef M2C_CODE_EQUATE_x_cosr
#define M2C_CODE_EQUATE_x_cosr 1
static const dd kx_cosr = (m2c::near_offset_external(::x_cosr));
#endif
#ifndef M2C_CODE_EQUATE_x_vtas
#define M2C_CODE_EQUATE_x_vtas 1
static const dd kx_vtas = (m2c::near_offset_external(::x_vtas));
#endif
#ifndef M2C_CODE_EQUATE_x_zdot
#define M2C_CODE_EQUATE_x_zdot 1
static const dd kx_zdot = (m2c::near_offset_external(::x_zdot));
#endif
#ifndef M2C_CODE_EQUATE_x_eleposn
#define M2C_CODE_EQUATE_x_eleposn 1
static const dd kx_eleposn = (m2c::near_offset_external(::x_eleposn));
#endif
#ifndef M2C_CODE_EQUATE_x_ailposn
#define M2C_CODE_EQUATE_x_ailposn 1
static const dd kx_ailposn = (m2c::near_offset_external(::x_ailposn));
#endif
#ifndef M2C_CODE_EQUATE_x_throtposn
#define M2C_CODE_EQUATE_x_throtposn 1
static const dd kx_throtposn = (m2c::near_offset_external(::x_throtposn));
#endif
#ifndef M2C_CODE_EQUATE_sortctrlswitch
#define M2C_CODE_EQUATE_sortctrlswitch 1
static const dd ksortctrlswitch = (m2c::near_offset_external(::sortctrlswitch));
#endif
#ifndef M2C_CODE_EQUATE_initctrlswitch
#define M2C_CODE_EQUATE_initctrlswitch 1
static const dd kinitctrlswitch = (m2c::near_offset_external(::initctrlswitch));
#endif
#ifndef M2C_CODE_EQUATE_dispvkts
#define M2C_CODE_EQUATE_dispvkts 1
static const dd kdispvkts = (m2c::near_offset_external(::dispvkts));
#endif
#ifndef M2C_CODE_EQUATE_disphdg
#define M2C_CODE_EQUATE_disphdg 1
static const dd kdisphdg = (m2c::near_offset_external(::disphdg));
#endif
#ifndef M2C_CODE_EQUATE_dispalt
#define M2C_CODE_EQUATE_dispalt 1
static const dd kdispalt = (m2c::near_offset_external(::dispalt));
#endif
#ifndef M2C_CODE_EQUATE_disprange
#define M2C_CODE_EQUATE_disprange 1
static const dd kdisprange = (m2c::near_offset_external(::disprange));
#endif
#ifndef M2C_CODE_EQUATE_visrange
#define M2C_CODE_EQUATE_visrange 1
static const dd kvisrange = (m2c::near_offset_external(::visrange));
#endif
#ifndef M2C_CODE_EQUATE_ctrldevptr
#define M2C_CODE_EQUATE_ctrldevptr 1
static const dd kctrldevptr = (m2c::near_offset_external(::ctrldevptr));
#endif
#ifndef M2C_CODE_EQUATE_speedcol
#define M2C_CODE_EQUATE_speedcol 1
static const dd kspeedcol = (m2c::near_offset_external(::speedcol));
#endif
#ifndef M2C_CODE_EQUATE_textcol1
#define M2C_CODE_EQUATE_textcol1 1
static const dd ktextcol1 = (m2c::near_offset_external(::textcol1));
#endif
#ifndef M2C_CODE_EQUATE_textcol2
#define M2C_CODE_EQUATE_textcol2 1
static const dd ktextcol2 = (m2c::near_offset_external(::textcol2));
#endif
#ifndef M2C_CODE_EQUATE_alertcol
#define M2C_CODE_EQUATE_alertcol 1
static const dd kalertcol = (m2c::near_offset_external(::alertcol));
#endif
#ifndef M2C_CODE_EQUATE_timer50
#define M2C_CODE_EQUATE_timer50 1
static const dd ktimer50 = (m2c::near_offset_external(::timer50));
#endif
}
#ifndef exp_view
#define exp_view m2c::kexp_view
#endif
#ifndef expmapzoom
#define expmapzoom m2c::kexpmapzoom
#endif
#ifndef redrawmap
#define redrawmap m2c::kredrawmap
#endif
#ifndef locatorx
#define locatorx m2c::klocatorx
#endif
#ifndef locatory
#define locatory m2c::klocatory
#endif
#ifndef kf_togglemode
#define kf_togglemode m2c::kkf_togglemode
#endif
#ifndef kf_keyboard
#define kf_keyboard m2c::kkf_keyboard
#endif
#ifndef kf_joystick
#define kf_joystick m2c::kkf_joystick
#endif
#ifndef kf_mouse
#define kf_mouse m2c::kkf_mouse
#endif
#ifndef x_ctrldevice
#define x_ctrldevice m2c::kx_ctrldevice
#endif
#ifndef x_xfine
#define x_xfine m2c::kx_xfine
#endif
#ifndef x_yfine
#define x_yfine m2c::kx_yfine
#endif
#ifndef x_zfine
#define x_zfine m2c::kx_zfine
#endif
#ifndef x_hfine
#define x_hfine m2c::kx_hfine
#endif
#ifndef x_pfine
#define x_pfine m2c::kx_pfine
#endif
#ifndef x_rfine
#define x_rfine m2c::kx_rfine
#endif
#ifndef x_sinh
#define x_sinh m2c::kx_sinh
#endif
#ifndef x_cosh
#define x_cosh m2c::kx_cosh
#endif
#ifndef x_sinp
#define x_sinp m2c::kx_sinp
#endif
#ifndef x_cosp
#define x_cosp m2c::kx_cosp
#endif
#ifndef x_sinr
#define x_sinr m2c::kx_sinr
#endif
#ifndef x_cosr
#define x_cosr m2c::kx_cosr
#endif
#ifndef x_vtas
#define x_vtas m2c::kx_vtas
#endif
#ifndef x_zdot
#define x_zdot m2c::kx_zdot
#endif
#ifndef x_eleposn
#define x_eleposn m2c::kx_eleposn
#endif
#ifndef x_ailposn
#define x_ailposn m2c::kx_ailposn
#endif
#ifndef x_throtposn
#define x_throtposn m2c::kx_throtposn
#endif
#ifndef sortctrlswitch
#define sortctrlswitch m2c::ksortctrlswitch
#endif
#ifndef initctrlswitch
#define initctrlswitch m2c::kinitctrlswitch
#endif
#ifndef dispvkts
#define dispvkts m2c::kdispvkts
#endif
#ifndef disphdg
#define disphdg m2c::kdisphdg
#endif
#ifndef dispalt
#define dispalt m2c::kdispalt
#endif
#ifndef disprange
#define disprange m2c::kdisprange
#endif
#ifndef visrange
#define visrange m2c::kvisrange
#endif
#ifndef ctrldevptr
#define ctrldevptr m2c::kctrldevptr
#endif
#ifndef speedcol
#define speedcol m2c::kspeedcol
#endif
#ifndef textcol1
#define textcol1 m2c::ktextcol1
#endif
#ifndef textcol2
#define textcol2 m2c::ktextcol2
#endif
#ifndef alertcol
#define alertcol m2c::kalertcol
#endif
#ifndef timer50
#define timer50 m2c::ktimer50
#endif



#endif
