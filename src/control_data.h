#ifndef __M2C_CONTROL_DATA_H__
#define __M2C_CONTROL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& dataexchange;
extern db& fadeoutflag;
extern db& maptestmode;
extern viewpoint& test_view;
extern db& code;

#ifndef ssf_tab2
extern db& ssf_tab2;
#endif
#ifndef demomode
extern db& demomode;
#endif
#ifndef xwindvmax
extern dw& xwindvmax;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef vga_rgb_data
extern db& vga_rgb_data;
#endif
#ifndef xwinddir
extern dw& xwinddir;
#endif
#ifndef chstick
extern db& chstick;
#endif
#ifndef elapsedtime
extern dd& elapsedtime;
#endif
#ifndef baudrate
extern db& baudrate;
#endif
#ifndef ssf_spils
extern db& ssf_spils;
#endif
#ifndef globaltimeout
extern db& globaltimeout;
#endif
#ifndef countdown
extern dw& countdown;
#endif
#ifndef key
extern db& key;
#endif
#ifndef argc
extern dw& argc;
#endif
#ifndef seedhi
extern dw& seedhi;
#endif
#ifndef ssf_navigmfd
extern db& ssf_navigmfd;
#endif
#ifndef packageptr
extern dw& packageptr;
#endif
#ifndef kf_quit
extern db& kf_quit;
#endif
#ifndef startairspeed
extern dw& startairspeed;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef debugweight
extern db& debugweight;
#endif
#ifndef fixedweight
extern dw& fixedweight;
#endif
#ifndef previewmode
extern db& previewmode;
#endif
#ifndef commsdevice
extern db& commsdevice;
#endif
#ifndef packages
extern package& packages;
#endif
#ifndef paused
extern db& paused;
#endif
#ifndef nocollisions
extern db& nocollisions;
#endif
#ifndef ssf_pilotmfd
extern db& ssf_pilotmfd;
#endif
#ifndef psp
extern dw& psp;
#endif
#ifndef autotrack
extern db& autotrack;
#endif
#ifndef timelimit
extern dd& timelimit;
#endif
#ifndef rxgameend
extern db& rxgameend;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef ssf_radar
extern db& ssf_radar;
#endif
#ifndef ssf_ecm
extern db& ssf_ecm;
#endif
#ifndef frames
extern dw& frames;
#endif
#ifndef infinitegforce
extern db& infinitegforce;
#endif
#ifndef soundcard
extern dw& soundcard;
#endif
#ifndef ssf_thrustrvrs
extern db& ssf_thrustrvrs;
#endif
#ifndef ssf_wheelbrakes
extern db& ssf_wheelbrakes;
#endif
#ifndef ssf_sweep
extern db& ssf_sweep;
#endif
#ifndef ssf_flaps
extern db& ssf_flaps;
#endif
#ifndef rxflag
extern db& rxflag;
#endif
#ifndef ssf_engine2
extern db& ssf_engine2;
#endif
#ifndef startairborne
extern db& startairborne;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef ssf_tab1
extern db& ssf_tab1;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef trkcambrg
extern dw& trkcambrg;
#endif
#ifndef ssf_gear
extern db& ssf_gear;
#endif
#ifndef mouseflag
extern db& mouseflag;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef maxframerate
extern dw& maxframerate;
#endif
#ifndef txgameend
extern db& txgameend;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef seedlo
extern dw& seedlo;
#endif
#ifndef workscreen
extern db& workscreen;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef panellight
extern db& panellight;
#endif
#ifndef shakeup
extern db& shakeup;
#endif
#ifndef fullscreen
extern db& fullscreen;
#endif
#ifndef ssf_airbrakes
extern db& ssf_airbrakes;
#endif
#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef ticker
extern dw& ticker;
#endif
#ifndef infiniteweapons
extern db& infiniteweapons;
#endif
#ifndef ssf_hud
extern db& ssf_hud;
#endif
#ifndef returncode
extern db& returncode;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef thrustmaster
extern db& thrustmaster;
#endif
#ifndef viewptr
extern dw& viewptr;
#endif
#ifndef wpbrg
extern dw& wpbrg;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef infinitefuel
extern db& infinitefuel;
#endif
#ifndef argv
extern dw& argv;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
#ifndef kf_pause
extern db& kf_pause;
#endif
#ifndef radartest
extern db& radartest;
#endif
#ifndef musiccard
extern dw& musiccard;
#endif
#ifndef ssf_adc
extern db& ssf_adc;
#endif
#ifndef extstores
extern dw& extstores;
#endif
#ifndef tmpdieflag
extern db& tmpdieflag;
#endif
#ifndef exploremode
extern db& exploremode;
#endif
#ifndef prog_end
extern db& prog_end;
#endif
#ifndef night
extern db& night;
#endif
#ifndef nofire
extern db& nofire;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_control
#define M2C_CODE_EQUATE_control 1
static const dd kcontrol = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_controlexit
#define M2C_CODE_EQUATE_controlexit 1
static const dd kcontrolexit = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_savedata
#define M2C_CODE_EQUATE_savedata 1
static const dd ksavedata = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_twoplyrcontrol
#define M2C_CODE_EQUATE_twoplyrcontrol 1
static const dd ktwoplyrcontrol = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_controlloop
#define M2C_CODE_EQUATE_controlloop 1
static const dd kcontrolloop = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_twoplayerloop
#define M2C_CODE_EQUATE_twoplayerloop 1
static const dd ktwoplayerloop = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_rxdataok
#define M2C_CODE_EQUATE_rxdataok 1
static const dd krxdataok = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_exitcmndline
#define M2C_CODE_EQUATE_exitcmndline 1
static const dd kexitcmndline = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_argloop
#define M2C_CODE_EQUATE_argloop 1
static const dd kargloop = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_setairbrakesdamaged
#define M2C_CODE_EQUATE_setairbrakesdamaged 1
static const dd ksetairbrakesdamaged = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_setadcdamaged
#define M2C_CODE_EQUATE_setadcdamaged 1
static const dd ksetadcdamaged = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_setheading
#define M2C_CODE_EQUATE_setheading 1
static const dd ksetheading = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_setairspeed
#define M2C_CODE_EQUATE_setairspeed 1
static const dd ksetairspeed = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_setxsector
#define M2C_CODE_EQUATE_setxsector 1
static const dd ksetxsector = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_16_skip 1
static const dd k__m2c_macrolocal_16_skip = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_setysector
#define M2C_CODE_EQUATE_setysector 1
static const dd ksetysector = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_17_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_17_skip 1
static const dd k__m2c_macrolocal_17_skip = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_setaltitude
#define M2C_CODE_EQUATE_setaltitude 1
static const dd ksetaltitude = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_setairborne
#define M2C_CODE_EQUATE_setairborne 1
static const dd ksetairborne = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_setbaudrate
#define M2C_CODE_EQUATE_setbaudrate 1
static const dd ksetbaudrate = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_setflightstick
#define M2C_CODE_EQUATE_setflightstick 1
static const dd ksetflightstick = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_21_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_21_skip 1
static const dd k__m2c_macrolocal_21_skip = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_setlighting
#define M2C_CODE_EQUATE_setlighting 1
static const dd ksetlighting = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_22_skip 1
static const dd k__m2c_macrolocal_22_skip = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_setdataexchange
#define M2C_CODE_EQUATE_setdataexchange 1
static const dd ksetdataexchange = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_23_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_23_skip 1
static const dd k__m2c_macrolocal_23_skip = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_setdemomode1
#define M2C_CODE_EQUATE_setdemomode1 1
static const dd ksetdemomode1 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_24_skip 1
static const dd k__m2c_macrolocal_24_skip = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_setdemomode2
#define M2C_CODE_EQUATE_setdemomode2 1
static const dd ksetdemomode2 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_25_skip 1
static const dd k__m2c_macrolocal_25_skip = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_setengine1damaged
#define M2C_CODE_EQUATE_setengine1damaged 1
static const dd ksetengine1damaged = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_setengine2damaged
#define M2C_CODE_EQUATE_setengine2damaged 1
static const dd ksetengine2damaged = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_27_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_27_skip 1
static const dd k__m2c_macrolocal_27_skip = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_setecmdamaged
#define M2C_CODE_EQUATE_setecmdamaged 1
static const dd ksetecmdamaged = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_28_skip 1
static const dd k__m2c_macrolocal_28_skip = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_setexploremode
#define M2C_CODE_EQUATE_setexploremode 1
static const dd ksetexploremode = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_29_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_29_skip 1
static const dd k__m2c_macrolocal_29_skip = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_fullscreenflirandtiald
#define M2C_CODE_EQUATE_fullscreenflirandtiald 1
static const dd kfullscreenflirandtiald = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_30_skip 1
static const dd k__m2c_macrolocal_30_skip = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_setflapsdamaged
#define M2C_CODE_EQUATE_setflapsdamaged 1
static const dd ksetflapsdamaged = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_31_skip 1
static const dd k__m2c_macrolocal_31_skip = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_setfadeout
#define M2C_CODE_EQUATE_setfadeout 1
static const dd ksetfadeout = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_32_skip 1
static const dd k__m2c_macrolocal_32_skip = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_setframerate
#define M2C_CODE_EQUATE_setframerate 1
static const dd ksetframerate = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_33_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_33_skip 1
static const dd k__m2c_macrolocal_33_skip = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_setfog
#define M2C_CODE_EQUATE_setfog 1
static const dd ksetfog = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_34_skip 1
static const dd k__m2c_macrolocal_34_skip = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_setgeardamaged
#define M2C_CODE_EQUATE_setgeardamaged 1
static const dd ksetgeardamaged = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_35_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_35_skip 1
static const dd k__m2c_macrolocal_35_skip = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_settimeout
#define M2C_CODE_EQUATE_settimeout 1
static const dd ksettimeout = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_36_skip 1
static const dd k__m2c_macrolocal_36_skip = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_sethuddamaged
#define M2C_CODE_EQUATE_sethuddamaged 1
static const dd ksethuddamaged = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_37_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_37_skip 1
static const dd k__m2c_macrolocal_37_skip = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_setinfinitefuel
#define M2C_CODE_EQUATE_setinfinitefuel 1
static const dd ksetinfinitefuel = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_38_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_38_skip 1
static const dd k__m2c_macrolocal_38_skip = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_setinfiniteg
#define M2C_CODE_EQUATE_setinfiniteg 1
static const dd ksetinfiniteg = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_39_skip 1
static const dd k__m2c_macrolocal_39_skip = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_setinfinitewpns
#define M2C_CODE_EQUATE_setinfinitewpns 1
static const dd ksetinfinitewpns = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_40_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_40_skip 1
static const dd k__m2c_macrolocal_40_skip = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_setadlibmusic
#define M2C_CODE_EQUATE_setadlibmusic 1
static const dd ksetadlibmusic = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_41_skip 1
static const dd k__m2c_macrolocal_41_skip = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_setblastermusic
#define M2C_CODE_EQUATE_setblastermusic 1
static const dd ksetblastermusic = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_42_skip 1
static const dd k__m2c_macrolocal_42_skip = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_setnomusic
#define M2C_CODE_EQUATE_setnomusic 1
static const dd ksetnomusic = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_43_skip 1
static const dd k__m2c_macrolocal_43_skip = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_setrolandmusic
#define M2C_CODE_EQUATE_setrolandmusic 1
static const dd ksetrolandmusic = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_44_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_44_skip 1
static const dd k__m2c_macrolocal_44_skip = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_setspeakermusic
#define M2C_CODE_EQUATE_setspeakermusic 1
static const dd ksetspeakermusic = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_45_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_45_skip 1
static const dd k__m2c_macrolocal_45_skip = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_setmaptestmode
#define M2C_CODE_EQUATE_setmaptestmode 1
static const dd ksetmaptestmode = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_46_skip 1
static const dd k__m2c_macrolocal_46_skip = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_setnocollisions
#define M2C_CODE_EQUATE_setnocollisions 1
static const dd ksetnocollisions = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_47_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_47_skip 1
static const dd k__m2c_macrolocal_47_skip = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_setnavigmfddamaged
#define M2C_CODE_EQUATE_setnavigmfddamaged 1
static const dd ksetnavigmfddamaged = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_48_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_48_skip 1
static const dd k__m2c_macrolocal_48_skip = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_setnight
#define M2C_CODE_EQUATE_setnight 1
static const dd ksetnight = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_49_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_49_skip 1
static const dd k__m2c_macrolocal_49_skip = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_setovercast
#define M2C_CODE_EQUATE_setovercast 1
static const dd ksetovercast = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_50_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_50_skip 1
static const dd k__m2c_macrolocal_50_skip = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_setpreviewauto
#define M2C_CODE_EQUATE_setpreviewauto 1
static const dd ksetpreviewauto = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_51_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_51_skip 1
static const dd k__m2c_macrolocal_51_skip = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_setpilotmfddamaged
#define M2C_CODE_EQUATE_setpilotmfddamaged 1
static const dd ksetpilotmfddamaged = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_52_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_52_skip 1
static const dd k__m2c_macrolocal_52_skip = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_setpreviewmode
#define M2C_CODE_EQUATE_setpreviewmode 1
static const dd ksetpreviewmode = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_53_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_53_skip 1
static const dd k__m2c_macrolocal_53_skip = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_setquickstart
#define M2C_CODE_EQUATE_setquickstart 1
static const dd ksetquickstart = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_54_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_54_skip 1
static const dd k__m2c_macrolocal_54_skip = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_setradardamaged
#define M2C_CODE_EQUATE_setradardamaged 1
static const dd ksetradardamaged = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_55_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_55_skip 1
static const dd k__m2c_macrolocal_55_skip = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_setradartest
#define M2C_CODE_EQUATE_setradartest 1
static const dd ksetradartest = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_56_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_56_skip 1
static const dd k__m2c_macrolocal_56_skip = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_setrwrdamaged
#define M2C_CODE_EQUATE_setrwrdamaged 1
static const dd ksetrwrdamaged = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_57_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_57_skip 1
static const dd k__m2c_macrolocal_57_skip = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_setadlib
#define M2C_CODE_EQUATE_setadlib 1
static const dd ksetadlib = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_58_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_58_skip 1
static const dd k__m2c_macrolocal_58_skip = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_setsoundblaster
#define M2C_CODE_EQUATE_setsoundblaster 1
static const dd ksetsoundblaster = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_59_skip 1
static const dd k__m2c_macrolocal_59_skip = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_setshake
#define M2C_CODE_EQUATE_setshake 1
static const dd ksetshake = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_setnosound
#define M2C_CODE_EQUATE_setnosound 1
static const dd ksetnosound = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_61_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_61_skip 1
static const dd k__m2c_macrolocal_61_skip = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_setspdamaged
#define M2C_CODE_EQUATE_setspdamaged 1
static const dd ksetspdamaged = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_62_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_62_skip 1
static const dd k__m2c_macrolocal_62_skip = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_setroland
#define M2C_CODE_EQUATE_setroland 1
static const dd ksetroland = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_63_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_63_skip 1
static const dd k__m2c_macrolocal_63_skip = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_setspeaker
#define M2C_CODE_EQUATE_setspeaker 1
static const dd ksetspeaker = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_64_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_64_skip 1
static const dd k__m2c_macrolocal_64_skip = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_setsweepdamaged
#define M2C_CODE_EQUATE_setsweepdamaged 1
static const dd ksetsweepdamaged = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_65_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_65_skip 1
static const dd k__m2c_macrolocal_65_skip = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_setcom1
#define M2C_CODE_EQUATE_setcom1 1
static const dd ksetcom1 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_66_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_66_skip 1
static const dd k__m2c_macrolocal_66_skip = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_setcom2
#define M2C_CODE_EQUATE_setcom2 1
static const dd ksetcom2 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_67_skip 1
static const dd k__m2c_macrolocal_67_skip = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_settab1damaged
#define M2C_CODE_EQUATE_settab1damaged 1
static const dd ksettab1damaged = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_68_skip 1
static const dd k__m2c_macrolocal_68_skip = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_setthrustrevsdamaged
#define M2C_CODE_EQUATE_setthrustrevsdamaged 1
static const dd ksetthrustrevsdamaged = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_69_skip 1
static const dd k__m2c_macrolocal_69_skip = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_settab2damaged
#define M2C_CODE_EQUATE_settab2damaged 1
static const dd ksettab2damaged = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_70_skip 1
static const dd k__m2c_macrolocal_70_skip = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_setthrustmaster
#define M2C_CODE_EQUATE_setthrustmaster 1
static const dd ksetthrustmaster = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_71_skip 1
static const dd k__m2c_macrolocal_71_skip = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_setvariant
#define M2C_CODE_EQUATE_setvariant 1
static const dd ksetvariant = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_72_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_72_skip 1
static const dd k__m2c_macrolocal_72_skip = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_setwbdamaged
#define M2C_CODE_EQUATE_setwbdamaged 1
static const dd ksetwbdamaged = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_73_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_73_skip 1
static const dd k__m2c_macrolocal_73_skip = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_setweight
#define M2C_CODE_EQUATE_setweight 1
static const dd ksetweight = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_74_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_74_skip 1
static const dd k__m2c_macrolocal_74_skip = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_setxwinds
#define M2C_CODE_EQUATE_setxwinds 1
static const dd ksetxwinds = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_nextarg
#define M2C_CODE_EQUATE_nextarg 1
static const dd knextarg = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_75_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_75_skip 1
static const dd k__m2c_macrolocal_75_skip = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_setmaxhdg
#define M2C_CODE_EQUATE_setmaxhdg 1
static const dd ksetmaxhdg = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_hdgok
#define M2C_CODE_EQUATE_hdgok 1
static const dd khdgok = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_setmaxspeed
#define M2C_CODE_EQUATE_setmaxspeed 1
static const dd ksetmaxspeed = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_setminspeed
#define M2C_CODE_EQUATE_setminspeed 1
static const dd ksetminspeed = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_speedok
#define M2C_CODE_EQUATE_speedok 1
static const dd kspeedok = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_setmaxframes
#define M2C_CODE_EQUATE_setmaxframes 1
static const dd ksetmaxframes = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_setminframes
#define M2C_CODE_EQUATE_setminframes 1
static const dd ksetminframes = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_framesok
#define M2C_CODE_EQUATE_framesok 1
static const dd kframesok = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_storesok
#define M2C_CODE_EQUATE_storesok 1
static const dd kstoresok = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_setmaxweight
#define M2C_CODE_EQUATE_setmaxweight 1
static const dd ksetmaxweight = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_setminweight
#define M2C_CODE_EQUATE_setminweight 1
static const dd ksetminweight = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_weightok
#define M2C_CODE_EQUATE_weightok 1
static const dd kweightok = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_78_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_78_skip 1
static const dd k__m2c_macrolocal_78_skip = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_exitpause
#define M2C_CODE_EQUATE_exitpause 1
static const dd kexitpause = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_pauseloop
#define M2C_CODE_EQUATE_pauseloop 1
static const dd kpauseloop = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_skipquit
#define M2C_CODE_EQUATE_skipquit 1
static const dd kskipquit = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_pausedone
#define M2C_CODE_EQUATE_pausedone 1
static const dd kpausedone = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_initflyingdemo
#define M2C_CODE_EQUATE_initflyingdemo 1
static const dd kinitflyingdemo = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_initcyclingdemo
#define M2C_CODE_EQUATE_initcyclingdemo 1
static const dd kinitcyclingdemo = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_nextxsec
#define M2C_CODE_EQUATE_nextxsec 1
static const dd knextxsec = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_nextxft
#define M2C_CODE_EQUATE_nextxft 1
static const dd knextxft = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_nextysec
#define M2C_CODE_EQUATE_nextysec 1
static const dd knextysec = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_nextyft
#define M2C_CODE_EQUATE_nextyft 1
static const dd knextyft = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_quitmaptest
#define M2C_CODE_EQUATE_quitmaptest 1
static const dd kquitmaptest = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_skiptimeout
#define M2C_CODE_EQUATE_skiptimeout 1
static const dd kskiptimeout = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x111c;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_dataexchange
#define M2C_CODE_EQUATE_dataexchange 1
static const dd kdataexchange = (m2c::near_offset_external(::dataexchange));
#endif
#ifndef M2C_CODE_EQUATE_fadeoutflag
#define M2C_CODE_EQUATE_fadeoutflag 1
static const dd kfadeoutflag = (m2c::near_offset_external(::fadeoutflag));
#endif
#ifndef M2C_CODE_EQUATE_maptestmode
#define M2C_CODE_EQUATE_maptestmode 1
static const dd kmaptestmode = (m2c::near_offset_external(::maptestmode));
#endif
#ifndef M2C_CODE_EQUATE_test_view
#define M2C_CODE_EQUATE_test_view 1
static const dd ktest_view = (m2c::near_offset_external(::test_view));
#endif
}
#ifndef dataexchange
#define dataexchange m2c::kdataexchange
#endif
#ifndef fadeoutflag
#define fadeoutflag m2c::kfadeoutflag
#endif
#ifndef maptestmode
#define maptestmode m2c::kmaptestmode
#endif
#ifndef test_view
#define test_view m2c::ktest_view
#endif



#endif
