#ifndef __M2C_HELICOPS_DATA_H__
#define __M2C_HELICOPS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& helicopterptr;
extern dw& perfdataptr;
extern mobile& hc_mobile;
extern viewpoint& hc_view;
extern helicopter& hc_data;
extern dw& hc_autohfine;
extern dw& hc_autoalt;
extern dw& hc_autovtas;
extern dd& hc_wprng;
extern dw& hc_wpbrg;
extern dw& hc_wpbrgfine;
extern dw& hc_thetaab;
extern dw& hc_thetabc;
extern dw& hc_thetaabc;
extern dw& hc_rturn;
extern dw& controlmode;
extern dw& dummyd90eb516_data_5a_1878;
extern dw& dummyd90eb516_data_5c_1879;
extern dw& dummyd90eb516_data_5e_1880;
extern dw& dummyd90eb516_data_60_1881;
extern dw& perfdataptrs;
extern dw& dummyd90eb516_data_64_1887;
extern dw& dummyd90eb516_data_66_1888;
extern dw& dummyd90eb516_data_68_1889;
extern perf_data& ah64apache;
extern perf_data& mi24hind;
extern perf_data& ch47chinook;
extern perf_data& mi26halo;
extern takeoff& takeoff1;
extern takeoff& takeoff2;
extern cruise& cruise1;
extern cruise& cruise2;
extern byte& hc_workspace;
extern db& dronecode;
extern db& weaponcode;

#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef ahelicopter3
extern dw& ahelicopter3;
#endif
#ifndef droneptrs
extern dw& droneptrs;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef ahelicopter2
extern dw& ahelicopter2;
#endif
#ifndef ahelicopter4
extern dw& ahelicopter4;
#endif
#ifndef frameelaptime
extern dd& frameelaptime;
#endif
#ifndef ehelicopter3
extern dw& ehelicopter3;
#endif
#ifndef ehelicopter2
extern dw& ehelicopter2;
#endif
#ifndef ahelicopter1
extern dw& ahelicopter1;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef ehelicopter1
extern dw& ehelicopter1;
#endif
#ifndef ehelicopter4
extern dw& ehelicopter4;
#endif
#ifndef sintable
extern dw& sintable;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_inithelicops
#define M2C_CODE_EQUATE_inithelicops 1
static const dd kinithelicops = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_initoneexit
#define M2C_CODE_EQUATE_initoneexit 1
static const dd kinitoneexit = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_setctrlmode
#define M2C_CODE_EQUATE_setctrlmode 1
static const dd ksetctrlmode = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_updatehelicops
#define M2C_CODE_EQUATE_updatehelicops 1
static const dd kupdatehelicops = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_updateoneexit
#define M2C_CODE_EQUATE_updateoneexit 1
static const dd kupdateoneexit = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_ctrlnull
#define M2C_CODE_EQUATE_ctrlnull 1
static const dd kctrlnull = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_ctrltakeoff
#define M2C_CODE_EQUATE_ctrltakeoff 1
static const dd kctrltakeoff = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_sortdelay
#define M2C_CODE_EQUATE_sortdelay 1
static const dd ksortdelay = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_exittakeoff
#define M2C_CODE_EQUATE_exittakeoff 1
static const dd kexittakeoff = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_decelzdot
#define M2C_CODE_EQUATE_decelzdot 1
static const dd kdecelzdot = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_accelzdot
#define M2C_CODE_EQUATE_accelzdot 1
static const dd kaccelzdot = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_zdotok
#define M2C_CODE_EQUATE_zdotok 1
static const dd kzdotok = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_ctrltrack
#define M2C_CODE_EQUATE_ctrltrack 1
static const dd kctrltrack = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_ctrlapproach
#define M2C_CODE_EQUATE_ctrlapproach 1
static const dd kctrlapproach = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_ctrltouchdown
#define M2C_CODE_EQUATE_ctrltouchdown 1
static const dd kctrltouchdown = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_conttouchdown
#define M2C_CODE_EQUATE_conttouchdown 1
static const dd kconttouchdown = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_exittouchdown
#define M2C_CODE_EQUATE_exittouchdown 1
static const dd kexittouchdown = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_deceltouchdown
#define M2C_CODE_EQUATE_deceltouchdown 1
static const dd kdeceltouchdown = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_landzdotok
#define M2C_CODE_EQUATE_landzdotok 1
static const dd klandzdotok = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_targetwp
#define M2C_CODE_EQUATE_targetwp 1
static const dd ktargetwp = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_wpok
#define M2C_CODE_EQUATE_wpok 1
static const dd kwpok = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_satisfiedwp
#define M2C_CODE_EQUATE_satisfiedwp 1
static const dd ksatisfiedwp = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_sortwpalt
#define M2C_CODE_EQUATE_sortwpalt 1
static const dd ksortwpalt = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_setautoalt
#define M2C_CODE_EQUATE_setautoalt 1
static const dd ksetautoalt = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_setspeed
#define M2C_CODE_EQUATE_setspeed 1
static const dd ksetspeed = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_setmaxspeed
#define M2C_CODE_EQUATE_setmaxspeed 1
static const dd ksetmaxspeed = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_exitroute
#define M2C_CODE_EQUATE_exitroute 1
static const dd kexitroute = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_timeok
#define M2C_CODE_EQUATE_timeok 1
static const dd ktimeok = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_sortlink
#define M2C_CODE_EQUATE_sortlink 1
static const dd ksortlink = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_exitnextwp
#define M2C_CODE_EQUATE_exitnextwp 1
static const dd kexitnextwp = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_8_testhi 1
static const dd k__m2c_macrolocal_8_testhi = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_8_testok 1
static const dd k__m2c_macrolocal_8_testok = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_exitturndist
#define M2C_CODE_EQUATE_exitturndist 1
static const dd kexitturndist = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_tdistov
#define M2C_CODE_EQUATE_tdistov 1
static const dd ktdistov = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_13_testhi 1
static const dd k__m2c_macrolocal_13_testhi = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_13_testok 1
static const dd k__m2c_macrolocal_13_testok = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_maxrollangle
#define M2C_CODE_EQUATE_maxrollangle 1
static const dd kmaxrollangle = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_contheading
#define M2C_CODE_EQUATE_contheading 1
static const dd kcontheading = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_contautoalt
#define M2C_CODE_EQUATE_contautoalt 1
static const dd kcontautoalt = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy1 1
static const dd k__m2c_macrolocal_24_mvxy1 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy2 1
static const dd k__m2c_macrolocal_24_mvxy2 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy3 1
static const dd k__m2c_macrolocal_24_mvxy3 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_24_mvxy4 1
static const dd k__m2c_macrolocal_24_mvxy4 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_queque0008
#define M2C_CODE_EQUATE_queque0008 1
static const dd kqueque0008 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_queque000a
#define M2C_CODE_EQUATE_queque000a 1
static const dd kqueque000a = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy1 1
static const dd k__m2c_macrolocal_25_mvxy1 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy2 1
static const dd k__m2c_macrolocal_25_mvxy2 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy3 1
static const dd k__m2c_macrolocal_25_mvxy3 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_25_mvxy4 1
static const dd k__m2c_macrolocal_25_mvxy4 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_queque000c
#define M2C_CODE_EQUATE_queque000c 1
static const dd kqueque000c = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_queque000e
#define M2C_CODE_EQUATE_queque000e 1
static const dd kqueque000e = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_26_testhi 1
static const dd k__m2c_macrolocal_26_testhi = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_26_testok 1
static const dd k__m2c_macrolocal_26_testok = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_prateok
#define M2C_CODE_EQUATE_prateok 1
static const dd kprateok = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_setpitchlimit
#define M2C_CODE_EQUATE_setpitchlimit 1
static const dd ksetpitchlimit = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_contaccel
#define M2C_CODE_EQUATE_contaccel 1
static const dd kcontaccel = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_accelok
#define M2C_CODE_EQUATE_accelok 1
static const dd kaccelok = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dxok
#define M2C_CODE_EQUATE_dxok 1
static const dd kdxok = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_dyok
#define M2C_CODE_EQUATE_dyok 1
static const dd kdyok = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dzok
#define M2C_CODE_EQUATE_dzok 1
static const dd kdzok = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_skipevasion
#define M2C_CODE_EQUATE_skipevasion 1
static const dd kskipevasion = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_setdecoytimer
#define M2C_CODE_EQUATE_setdecoytimer 1
static const dd ksetdecoytimer = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1097;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_helicopterptr
#define M2C_CODE_EQUATE_helicopterptr 1
static const dd khelicopterptr = (m2c::near_offset_external(::helicopterptr));
#endif
#ifndef M2C_CODE_EQUATE_perfdataptr
#define M2C_CODE_EQUATE_perfdataptr 1
static const dd kperfdataptr = (m2c::near_offset_external(::perfdataptr));
#endif
#ifndef M2C_CODE_EQUATE_hc_mobile
#define M2C_CODE_EQUATE_hc_mobile 1
static const dd khc_mobile = (m2c::near_offset_external(::hc_mobile));
#endif
#ifndef M2C_CODE_EQUATE_hc_view
#define M2C_CODE_EQUATE_hc_view 1
static const dd khc_view = (m2c::near_offset_external(::hc_view));
#endif
#ifndef M2C_CODE_EQUATE_hc_data
#define M2C_CODE_EQUATE_hc_data 1
static const dd khc_data = (m2c::near_offset_external(::hc_data));
#endif
#ifndef M2C_CODE_EQUATE_hc_autohfine
#define M2C_CODE_EQUATE_hc_autohfine 1
static const dd khc_autohfine = (m2c::near_offset_external(::hc_autohfine));
#endif
#ifndef M2C_CODE_EQUATE_hc_autoalt
#define M2C_CODE_EQUATE_hc_autoalt 1
static const dd khc_autoalt = (m2c::near_offset_external(::hc_autoalt));
#endif
#ifndef M2C_CODE_EQUATE_hc_autovtas
#define M2C_CODE_EQUATE_hc_autovtas 1
static const dd khc_autovtas = (m2c::near_offset_external(::hc_autovtas));
#endif
#ifndef M2C_CODE_EQUATE_hc_wprng
#define M2C_CODE_EQUATE_hc_wprng 1
static const dd khc_wprng = (m2c::near_offset_external(::hc_wprng));
#endif
#ifndef M2C_CODE_EQUATE_hc_wpbrg
#define M2C_CODE_EQUATE_hc_wpbrg 1
static const dd khc_wpbrg = (m2c::near_offset_external(::hc_wpbrg));
#endif
#ifndef M2C_CODE_EQUATE_hc_wpbrgfine
#define M2C_CODE_EQUATE_hc_wpbrgfine 1
static const dd khc_wpbrgfine = (m2c::near_offset_external(::hc_wpbrgfine));
#endif
#ifndef M2C_CODE_EQUATE_hc_thetaab
#define M2C_CODE_EQUATE_hc_thetaab 1
static const dd khc_thetaab = (m2c::near_offset_external(::hc_thetaab));
#endif
#ifndef M2C_CODE_EQUATE_hc_thetabc
#define M2C_CODE_EQUATE_hc_thetabc 1
static const dd khc_thetabc = (m2c::near_offset_external(::hc_thetabc));
#endif
#ifndef M2C_CODE_EQUATE_hc_thetaabc
#define M2C_CODE_EQUATE_hc_thetaabc 1
static const dd khc_thetaabc = (m2c::near_offset_external(::hc_thetaabc));
#endif
#ifndef M2C_CODE_EQUATE_hc_rturn
#define M2C_CODE_EQUATE_hc_rturn 1
static const dd khc_rturn = (m2c::near_offset_external(::hc_rturn));
#endif
#ifndef M2C_CODE_EQUATE_controlmode
#define M2C_CODE_EQUATE_controlmode 1
static const dd kcontrolmode = (m2c::near_offset_external(::controlmode));
#endif
#ifndef M2C_CODE_EQUATE_perfdataptrs
#define M2C_CODE_EQUATE_perfdataptrs 1
static const dd kperfdataptrs = (m2c::near_offset_external(::perfdataptrs));
#endif
#ifndef M2C_CODE_EQUATE_ah64apache
#define M2C_CODE_EQUATE_ah64apache 1
static const dd kah64apache = (m2c::near_offset_external(::ah64apache));
#endif
#ifndef M2C_CODE_EQUATE_mi24hind
#define M2C_CODE_EQUATE_mi24hind 1
static const dd kmi24hind = (m2c::near_offset_external(::mi24hind));
#endif
#ifndef M2C_CODE_EQUATE_ch47chinook
#define M2C_CODE_EQUATE_ch47chinook 1
static const dd kch47chinook = (m2c::near_offset_external(::ch47chinook));
#endif
#ifndef M2C_CODE_EQUATE_mi26halo
#define M2C_CODE_EQUATE_mi26halo 1
static const dd kmi26halo = (m2c::near_offset_external(::mi26halo));
#endif
#ifndef M2C_CODE_EQUATE_takeoff1
#define M2C_CODE_EQUATE_takeoff1 1
static const dd ktakeoff1 = (m2c::near_offset_external(::takeoff1));
#endif
#ifndef M2C_CODE_EQUATE_takeoff2
#define M2C_CODE_EQUATE_takeoff2 1
static const dd ktakeoff2 = (m2c::near_offset_external(::takeoff2));
#endif
#ifndef M2C_CODE_EQUATE_cruise1
#define M2C_CODE_EQUATE_cruise1 1
static const dd kcruise1 = (m2c::near_offset_external(::cruise1));
#endif
#ifndef M2C_CODE_EQUATE_cruise2
#define M2C_CODE_EQUATE_cruise2 1
static const dd kcruise2 = (m2c::near_offset_external(::cruise2));
#endif
}
#ifndef helicopterptr
#define helicopterptr m2c::khelicopterptr
#endif
#ifndef perfdataptr
#define perfdataptr m2c::kperfdataptr
#endif
#ifndef hc_mobile
#define hc_mobile m2c::khc_mobile
#endif
#ifndef hc_view
#define hc_view m2c::khc_view
#endif
#ifndef hc_data
#define hc_data m2c::khc_data
#endif
#ifndef hc_autohfine
#define hc_autohfine m2c::khc_autohfine
#endif
#ifndef hc_autoalt
#define hc_autoalt m2c::khc_autoalt
#endif
#ifndef hc_autovtas
#define hc_autovtas m2c::khc_autovtas
#endif
#ifndef hc_wprng
#define hc_wprng m2c::khc_wprng
#endif
#ifndef hc_wpbrg
#define hc_wpbrg m2c::khc_wpbrg
#endif
#ifndef hc_wpbrgfine
#define hc_wpbrgfine m2c::khc_wpbrgfine
#endif
#ifndef hc_thetaab
#define hc_thetaab m2c::khc_thetaab
#endif
#ifndef hc_thetabc
#define hc_thetabc m2c::khc_thetabc
#endif
#ifndef hc_thetaabc
#define hc_thetaabc m2c::khc_thetaabc
#endif
#ifndef hc_rturn
#define hc_rturn m2c::khc_rturn
#endif
#ifndef controlmode
#define controlmode m2c::kcontrolmode
#endif
#ifndef perfdataptrs
#define perfdataptrs m2c::kperfdataptrs
#endif
#ifndef ah64apache
#define ah64apache m2c::kah64apache
#endif
#ifndef mi24hind
#define mi24hind m2c::kmi24hind
#endif
#ifndef ch47chinook
#define ch47chinook m2c::kch47chinook
#endif
#ifndef mi26halo
#define mi26halo m2c::kmi26halo
#endif
#ifndef takeoff1
#define takeoff1 m2c::ktakeoff1
#endif
#ifndef takeoff2
#define takeoff2 m2c::ktakeoff2
#endif
#ifndef cruise1
#define cruise1 m2c::kcruise1
#endif
#ifndef cruise2
#define cruise2 m2c::kcruise2
#endif



#endif
