#ifndef __M2C_AIRCRAFT_DATA_H__
#define __M2C_AIRCRAFT_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& aircraftptr;
extern dw& perfdataptr;
extern mobile& ac_mobile;
extern viewpoint& ac_view;
extern aircraft& ac_data;
extern dw& ac_autohfine;
extern dw& ac_autoalt;
extern dw& ac_autovtas;
extern dd& ac_wprng;
extern dw& ac_wpbrg;
extern dw& ac_wpbrgfine;
extern dw& ac_vmin;
extern dw& ac_vmax;
extern dw& ac_vtrim;
extern dw& ac_thetaab;
extern dw& ac_thetabc;
extern dw& ac_thetaabc;
extern dw& ac_rturn;
extern dw& controlmode;
extern dw& dummy21cefb4a_data_78_2049;
extern dw& dummy21cefb4a_data_7a_2050;
extern dw& dummy21cefb4a_data_7c_2051;
extern dw& dummy21cefb4a_data_7e_2052;
extern dw& dummy21cefb4a_data_80_2053;
extern dw& dummy21cefb4a_data_82_2054;
extern dw& dummy21cefb4a_data_84_2055;
extern dw& armswitch;
extern dw& dummy21cefb4a_data_88_2061;
extern dw& dummy21cefb4a_data_8a_2062;
extern dw& dummy21cefb4a_data_8c_2063;
extern dw& dummy21cefb4a_data_8e_2064;
extern dw& dummy21cefb4a_data_90_2065;
extern dw& dummy21cefb4a_data_92_2066;
extern dw& dummy21cefb4a_data_94_2067;
extern dw& weapontype;
extern dw& weaponnum;
extern dw& perfdataptrs;
extern dw& dummy21cefb4a_data_9c_2087;
extern dw& dummy21cefb4a_data_9e_2088;
extern dw& dummy21cefb4a_data_a0_2089;
extern dw& dummy21cefb4a_data_a2_2090;
extern dw& dummy21cefb4a_data_a4_2091;
extern dw& dummy21cefb4a_data_a6_2092;
extern dw& dummy21cefb4a_data_a8_2093;
extern dw& dummy21cefb4a_data_aa_2094;
extern dw& dummy21cefb4a_data_ac_2095;
extern dw& dummy21cefb4a_data_ae_2096;
extern dw& dummy21cefb4a_data_b0_2097;
extern dw& dummy21cefb4a_data_b2_2098;
extern dw& dummy21cefb4a_data_b4_2099;
extern perf_data& gr4tornado;
extern perf_data& mig27flogger;
extern perf_data& f3tornado;
extern perf_data& mig31foxhound;
extern perf_data& f15eagle;
extern perf_data& su27flanker;
extern perf_data& f16falcon;
extern perf_data& mig29fulcrum;
extern perf_data& a10thunderbolt;
extern perf_data& su25frogfoot;
extern perf_data& e3dsentry;
extern perf_data& il76mainstay;
extern perf_data& c130hercules;
extern perf_data& il76candid;
extern takeoff& takeoff1;
extern takeoff& takeoff2;
extern takeoff& takeoff3;
extern cruise& cruise1;
extern cruise& cruise2;
extern cruise& cruise3;
extern cruise& cruise4;
extern dw& dummy21cefb4a_data_166_2233;
extern dw& dummy21cefb4a_data_168_2234;
extern dw& dummy21cefb4a_data_16a_2235;
extern dw& dummy21cefb4a_data_16c_2236;
extern dw& dummy21cefb4a_data_16e_2237;
extern dw& dummy21cefb4a_data_170_2238;
extern dw& dummy21cefb4a_data_172_2239;
extern dw& dummy21cefb4a_data_174_2240;
extern dw& dummy21cefb4a_data_176_2241;
extern dw& dummy21cefb4a_data_178_2242;
extern dw& dummy21cefb4a_data_17a_2243;
extern dw& dummy21cefb4a_data_17c_2244;
extern dw& dummy21cefb4a_data_17e_2245;
extern dw& dummy21cefb4a_data_180_2246;
extern dw& dummy21cefb4a_data_182_2247;
extern dw& dummy21cefb4a_data_184_2248;
extern dw& dummy21cefb4a_data_186_2249;
extern dw& dummy21cefb4a_data_188_2250;
extern dw& dummy21cefb4a_data_18a_2251;
extern dw& dummy21cefb4a_data_18c_2252;
extern dw& dummy21cefb4a_data_18e_2253;
extern dw& dummy21cefb4a_data_190_2254;
extern dw& dummy21cefb4a_data_192_2255;
extern dw& dummy21cefb4a_data_194_2256;
extern dw& dummy21cefb4a_data_196_2257;
extern dw& dummy21cefb4a_data_198_2258;
extern dw& dummy21cefb4a_data_19a_2259;
extern dw& dummy21cefb4a_data_19c_2260;
extern dw& dummy21cefb4a_data_19e_2261;
extern dw& dummy21cefb4a_data_1a0_2262;
extern dw& dummy21cefb4a_data_1a2_2263;
extern dw& dummy21cefb4a_data_1a4_2264;
extern dw& dummy21cefb4a_data_1a6_2265;
extern dw& dummy21cefb4a_data_1a8_2266;
extern dw& dummy21cefb4a_data_1aa_2267;
extern dw& dummy21cefb4a_data_1ac_2268;
extern dw& dummy21cefb4a_data_1ae_2269;
extern dw& dummy21cefb4a_data_1b0_2270;
extern dw& dummy21cefb4a_data_1b2_2271;
extern dw& dummy21cefb4a_data_1b4_2272;
extern dw& dummy21cefb4a_data_1b6_2273;
extern dw& dummy21cefb4a_data_1b8_2274;
extern dw& dummy21cefb4a_data_1ba_2275;
extern dw& dummy21cefb4a_data_1bc_2276;
extern dw& dummy21cefb4a_data_1be_2277;
extern dw& dummy21cefb4a_data_1c0_2278;
extern dw& dummy21cefb4a_data_1c2_2279;
extern dw& dummy21cefb4a_data_1c4_2280;
extern dw& dummy21cefb4a_data_1c6_2281;
extern dw& dummy21cefb4a_data_1c8_2282;
extern dw& dummy21cefb4a_data_1ca_2283;
extern dw& dummy21cefb4a_data_1cc_2284;
extern dw& dummy21cefb4a_data_1ce_2285;
extern dw& dummy21cefb4a_data_1d0_2286;
extern dw& dummy21cefb4a_data_1d2_2287;
extern dw& dummy21cefb4a_data_1d4_2288;
extern dw& dummy21cefb4a_data_1d6_2289;
extern dw& dummy21cefb4a_data_1d8_2290;
extern dw& dummy21cefb4a_data_1da_2291;
extern dw& dummy21cefb4a_data_1dc_2292;
extern dw& dummy21cefb4a_data_1de_2293;
extern dw& dummy21cefb4a_data_1e0_2294;
extern dw& dummy21cefb4a_data_1e2_2295;
extern dw& dummy21cefb4a_data_1e4_2296;
extern dw& dummy21cefb4a_data_1e6_2297;
extern landing& landing1;
extern landing& landing2;
extern landing& landing3;
extern combat& combat1;
extern combat& combat2;
extern combat& combat3;
extern combat& combat4;
extern combat& combat5;
extern combat& combat6;
extern waypoint& taxiwp;
extern dw& ac_vias;
extern dw& ac_divvias;
extern dw& ac_divvtas;
extern viewpoint& icpoint;
extern dw& scaledrange;
extern dw& xt;
extern dw& yt;
extern dw& zt;
extern dw& hdgerror;
extern dw& pitcherror;
extern dw& brgerror;
extern dw& cosbrgerror;
extern dw& maxrrate;
extern dw& maxprate;
extern dw& maxgforce;
extern dw& rolldemand;
extern dw& dampedroll;
extern dw& pitchrate;
extern dw& oppvtas;
extern dw& tornadooppptr;
extern dw& tmpsrcptr;
extern dw& tmpicptr;
extern dd& tmpicrng;
extern dw& responsetimer;
extern dw& ewrexposetimer;
extern dw& breaktimer;
extern dw& very_fast;
extern db& errorscale;
extern db& oppbehind;
extern db& breakflag;
extern byte& ac_workspace;
extern word& minspeed;
extern db& dronecode;
extern db& weaponcode;

#ifndef demomode
extern db& demomode;
#endif
#ifndef eaircraft8
extern dw& eaircraft8;
#endif
#ifndef droneptrs
extern dw& droneptrs;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef aaircraft11
extern dw& aaircraft11;
#endif
#ifndef eaircraft13
extern dw& eaircraft13;
#endif
#ifndef eaircraft17
extern dw& eaircraft17;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef aaircraft10
extern dw& aaircraft10;
#endif
#ifndef aaircraft12
extern dw& aaircraft12;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef eaircraft3
extern dw& eaircraft3;
#endif
#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef aaircraft3
extern dw& aaircraft3;
#endif
#ifndef eaircraft16
extern dw& eaircraft16;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef aaircraft16
extern dw& aaircraft16;
#endif
#ifndef eaircraft11
extern dw& eaircraft11;
#endif
#ifndef frameelaptime
extern dd& frameelaptime;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef eaircraft12
extern dw& eaircraft12;
#endif
#ifndef aaircraft2
extern dw& aaircraft2;
#endif
#ifndef eaircraft15
extern dw& eaircraft15;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef missiletgtptr
extern dw& missiletgtptr;
#endif
#ifndef epilotskill
extern dw& epilotskill;
#endif
#ifndef aaircraft5
extern dw& aaircraft5;
#endif
#ifndef eaircraft7
extern dw& eaircraft7;
#endif
#ifndef slantrng
extern dd& slantrng;
#endif
#ifndef apilotskill
extern dw& apilotskill;
#endif
#ifndef aaircraft6
extern dw& aaircraft6;
#endif
#ifndef eaircraft14
extern dw& eaircraft14;
#endif
#ifndef vias
extern dw& vias;
#endif
#ifndef modelmapindex
extern dw& modelmapindex;
#endif
#ifndef rwrthreatflags
extern db& rwrthreatflags;
#endif
#ifndef eaircraft9
extern dw& eaircraft9;
#endif
#ifndef aaircraft8
extern dw& aaircraft8;
#endif
#ifndef aaircraft17
extern dw& aaircraft17;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef aaircraft13
extern dw& aaircraft13;
#endif
#ifndef eaircraft5
extern dw& eaircraft5;
#endif
#ifndef airborne1
extern db& airborne1;
#endif
#ifndef aaircraft7
extern dw& aaircraft7;
#endif
#ifndef aaircraft4
extern dw& aaircraft4;
#endif
#ifndef eaircraft6
extern dw& eaircraft6;
#endif
#ifndef eaircraft10
extern dw& eaircraft10;
#endif
#ifndef eaircraft2
extern dw& eaircraft2;
#endif
#ifndef aaircraft15
extern dw& aaircraft15;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef aaircraft1
extern dw& aaircraft1;
#endif
#ifndef taxirouteptrs
extern dw& taxirouteptrs;
#endif
#ifndef aaircraft14
extern dw& aaircraft14;
#endif
#ifndef aaircraft9
extern dw& aaircraft9;
#endif
#ifndef eaircraft4
extern dw& eaircraft4;
#endif
#ifndef eaircraft1
extern dw& eaircraft1;
#endif
#ifndef bombthrow
extern dd& bombthrow;
#endif
#ifndef nofire
extern db& nofire;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initplanes
#define M2C_CODE_EQUATE_initplanes 1
static const dd kinitplanes = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_initoneexit
#define M2C_CODE_EQUATE_initoneexit 1
static const dd kinitoneexit = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_setctrlmode
#define M2C_CODE_EQUATE_setctrlmode 1
static const dd ksetctrlmode = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_updateplanes
#define M2C_CODE_EQUATE_updateplanes 1
static const dd kupdateplanes = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_updateoneexit
#define M2C_CODE_EQUATE_updateoneexit 1
static const dd kupdateoneexit = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_ctrlnull
#define M2C_CODE_EQUATE_ctrlnull 1
static const dd kctrlnull = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_ctrltakeoff
#define M2C_CODE_EQUATE_ctrltakeoff 1
static const dd kctrltakeoff = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_sortdelay
#define M2C_CODE_EQUATE_sortdelay 1
static const dd ksortdelay = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_sorttakeoffanim
#define M2C_CODE_EQUATE_sorttakeoffanim 1
static const dd ksorttakeoffanim = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_sortliftvector
#define M2C_CODE_EQUATE_sortliftvector 1
static const dd ksortliftvector = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_ctrltrack
#define M2C_CODE_EQUATE_ctrltrack 1
static const dd kctrltrack = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_ctrlapproach
#define M2C_CODE_EQUATE_ctrlapproach 1
static const dd kctrlapproach = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_ctrltouchdown
#define M2C_CODE_EQUATE_ctrltouchdown 1
static const dd kctrltouchdown = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_ctrllanding
#define M2C_CODE_EQUATE_ctrllanding 1
static const dd kctrllanding = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_skiprestart
#define M2C_CODE_EQUATE_skiprestart 1
static const dd kskiprestart = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_exitlanding
#define M2C_CODE_EQUATE_exitlanding 1
static const dd kexitlanding = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_exitinittaxi
#define M2C_CODE_EQUATE_exitinittaxi 1
static const dd kexitinittaxi = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_ctrltaxi
#define M2C_CODE_EQUATE_ctrltaxi 1
static const dd kctrltaxi = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_sortspeed
#define M2C_CODE_EQUATE_sortspeed 1
static const dd ksortspeed = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_taxidecel
#define M2C_CODE_EQUATE_taxidecel 1
static const dd ktaxidecel = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_taxiaccel
#define M2C_CODE_EQUATE_taxiaccel 1
static const dd ktaxiaccel = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_taxispeedok
#define M2C_CODE_EQUATE_taxispeedok 1
static const dd ktaxispeedok = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_exittaxi
#define M2C_CODE_EQUATE_exittaxi 1
static const dd kexittaxi = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_sorttaxihdg
#define M2C_CODE_EQUATE_sorttaxihdg 1
static const dd ksorttaxihdg = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_skiparmlock
#define M2C_CODE_EQUATE_skiparmlock 1
static const dd kskiparmlock = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_exitroute
#define M2C_CODE_EQUATE_exitroute 1
static const dd kexitroute = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_satisfiedwp
#define M2C_CODE_EQUATE_satisfiedwp 1
static const dd ksatisfiedwp = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_targetwp
#define M2C_CODE_EQUATE_targetwp 1
static const dd ktargetwp = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_wpok
#define M2C_CODE_EQUATE_wpok 1
static const dd kwpok = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_sortwpalt
#define M2C_CODE_EQUATE_sortwpalt 1
static const dd ksortwpalt = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_setautoalt
#define M2C_CODE_EQUATE_setautoalt 1
static const dd ksetautoalt = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_setspeed
#define M2C_CODE_EQUATE_setspeed 1
static const dd ksetspeed = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_setmaxspeed
#define M2C_CODE_EQUATE_setmaxspeed 1
static const dd ksetmaxspeed = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_timeok
#define M2C_CODE_EQUATE_timeok 1
static const dd ktimeok = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_sortlink
#define M2C_CODE_EQUATE_sortlink 1
static const dd ksortlink = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_exitnextwp
#define M2C_CODE_EQUATE_exitnextwp 1
static const dd kexitnextwp = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_15_testhi 1
static const dd k__m2c_macrolocal_15_testhi = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_15_testok 1
static const dd k__m2c_macrolocal_15_testok = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_exitturndist
#define M2C_CODE_EQUATE_exitturndist 1
static const dd kexitturndist = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_tdistov
#define M2C_CODE_EQUATE_tdistov 1
static const dd ktdistov = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testhi 1
static const dd k__m2c_macrolocal_20_testhi = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testok 1
static const dd k__m2c_macrolocal_20_testok = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_maxrollangle
#define M2C_CODE_EQUATE_maxrollangle 1
static const dd kmaxrollangle = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_contheading
#define M2C_CODE_EQUATE_contheading 1
static const dd kcontheading = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_skiptf
#define M2C_CODE_EQUATE_skiptf 1
static const dd kskiptf = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy1 1
static const dd k__m2c_macrolocal_31_mvxy1 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy2 1
static const dd k__m2c_macrolocal_31_mvxy2 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy3 1
static const dd k__m2c_macrolocal_31_mvxy3 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy4 1
static const dd k__m2c_macrolocal_31_mvxy4 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_queque0009
#define M2C_CODE_EQUATE_queque0009 1
static const dd kqueque0009 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_queque000b
#define M2C_CODE_EQUATE_queque000b 1
static const dd kqueque000b = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy1 1
static const dd k__m2c_macrolocal_32_mvxy1 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy2 1
static const dd k__m2c_macrolocal_32_mvxy2 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy3 1
static const dd k__m2c_macrolocal_32_mvxy3 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy4 1
static const dd k__m2c_macrolocal_32_mvxy4 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_queque000d
#define M2C_CODE_EQUATE_queque000d 1
static const dd kqueque000d = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_queque000f
#define M2C_CODE_EQUATE_queque000f 1
static const dd kqueque000f = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_contautoalt
#define M2C_CODE_EQUATE_contautoalt 1
static const dd kcontautoalt = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_34_testhi 1
static const dd k__m2c_macrolocal_34_testhi = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_34_testok 1
static const dd k__m2c_macrolocal_34_testok = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_prateok
#define M2C_CODE_EQUATE_prateok 1
static const dd kprateok = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_setpitchlimit
#define M2C_CODE_EQUATE_setpitchlimit 1
static const dd ksetpitchlimit = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_zftok
#define M2C_CODE_EQUATE_zftok 1
static const dd kzftok = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_contaccel
#define M2C_CODE_EQUATE_contaccel 1
static const dd kcontaccel = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_accelok
#define M2C_CODE_EQUATE_accelok 1
static const dd kaccelok = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dxok
#define M2C_CODE_EQUATE_dxok 1
static const dd kdxok = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_dyok
#define M2C_CODE_EQUATE_dyok 1
static const dd kdyok = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dzok
#define M2C_CODE_EQUATE_dzok 1
static const dd kdzok = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_ctrlcombat
#define M2C_CODE_EQUATE_ctrlcombat 1
static const dd kctrlcombat = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_skipbreak
#define M2C_CODE_EQUATE_skipbreak 1
static const dd kskipbreak = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_sortbreak
#define M2C_CODE_EQUATE_sortbreak 1
static const dd ksortbreak = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_intobreak
#define M2C_CODE_EQUATE_intobreak 1
static const dd kintobreak = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_contbreak
#define M2C_CODE_EQUATE_contbreak 1
static const dd kcontbreak = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_65_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_65_skip 1
static const dd k__m2c_macrolocal_65_skip = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_skipupright
#define M2C_CODE_EQUATE_skipupright 1
static const dd kskipupright = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy1 1
static const dd k__m2c_macrolocal_67_mvxy1 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy2 1
static const dd k__m2c_macrolocal_67_mvxy2 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy3 1
static const dd k__m2c_macrolocal_67_mvxy3 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy4 1
static const dd k__m2c_macrolocal_67_mvxy4 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_skipevade
#define M2C_CODE_EQUATE_skipevade 1
static const dd kskipevade = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_contevade
#define M2C_CODE_EQUATE_contevade 1
static const dd kcontevade = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_intoevade
#define M2C_CODE_EQUATE_intoevade 1
static const dd kintoevade = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_stopevade
#define M2C_CODE_EQUATE_stopevade 1
static const dd kstopevade = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_69_skip 1
static const dd k__m2c_macrolocal_69_skip = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_setceiling
#define M2C_CODE_EQUATE_setceiling 1
static const dd ksetceiling = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_70_skip 1
static const dd k__m2c_macrolocal_70_skip = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_71_skip 1
static const dd k__m2c_macrolocal_71_skip = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_gndcheckok
#define M2C_CODE_EQUATE_gndcheckok 1
static const dd kgndcheckok = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_72_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_72_skip 1
static const dd k__m2c_macrolocal_72_skip = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_sorticalt
#define M2C_CODE_EQUATE_sorticalt 1
static const dd ksorticalt = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_setcosbrgerror
#define M2C_CODE_EQUATE_setcosbrgerror 1
static const dd ksetcosbrgerror = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_skipdeadband
#define M2C_CODE_EQUATE_skipdeadband 1
static const dd kskipdeadband = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_sethdgerror
#define M2C_CODE_EQUATE_sethdgerror 1
static const dd ksethdgerror = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_setpitcherror
#define M2C_CODE_EQUATE_setpitcherror 1
static const dd ksetpitcherror = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_78_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_78_skip 1
static const dd k__m2c_macrolocal_78_skip = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_skipfiring
#define M2C_CODE_EQUATE_skipfiring 1
static const dd kskipfiring = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_79_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_79_skip 1
static const dd k__m2c_macrolocal_79_skip = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_skipcannon
#define M2C_CODE_EQUATE_skipcannon 1
static const dd kskipcannon = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_gmaxok
#define M2C_CODE_EQUATE_gmaxok 1
static const dd kgmaxok = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_casepull
#define M2C_CODE_EQUATE_casepull 1
static const dd kcasepull = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_casepitchok
#define M2C_CODE_EQUATE_casepitchok 1
static const dd kcasepitchok = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_casepush
#define M2C_CODE_EQUATE_casepush 1
static const dd kcasepush = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_setrolldemand
#define M2C_CODE_EQUATE_setrolldemand 1
static const dd ksetrolldemand = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_decerror
#define M2C_CODE_EQUATE_decerror 1
static const dd kdecerror = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_incerror
#define M2C_CODE_EQUATE_incerror 1
static const dd kincerror = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_sameerror
#define M2C_CODE_EQUATE_sameerror 1
static const dd ksameerror = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_contpitchrate
#define M2C_CODE_EQUATE_contpitchrate 1
static const dd kcontpitchrate = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_96_testhi 1
static const dd k__m2c_macrolocal_96_testhi = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_96_testok 1
static const dd k__m2c_macrolocal_96_testok = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_sorthdg
#define M2C_CODE_EQUATE_sorthdg 1
static const dd ksorthdg = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_altok
#define M2C_CODE_EQUATE_altok 1
static const dd kaltok = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_setcombatspeed
#define M2C_CODE_EQUATE_setcombatspeed 1
static const dd ksetcombatspeed = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_103_testhi 1
static const dd k__m2c_macrolocal_103_testhi = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_103_testok 1
static const dd k__m2c_macrolocal_103_testok = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_calcaccel
#define M2C_CODE_EQUATE_calcaccel 1
static const dd kcalcaccel = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_sortaccel
#define M2C_CODE_EQUATE_sortaccel 1
static const dd ksortaccel = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_accok
#define M2C_CODE_EQUATE_accok 1
static const dd kaccok = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_exitcombat
#define M2C_CODE_EQUATE_exitcombat 1
static const dd kexitcombat = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_breakfail
#define M2C_CODE_EQUATE_breakfail 1
static const dd kbreakfail = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_breakpass
#define M2C_CODE_EQUATE_breakpass 1
static const dd kbreakpass = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_109_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_109_skip 1
static const dd k__m2c_macrolocal_109_skip = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_actionexit
#define M2C_CODE_EQUATE_actionexit 1
static const dd kactionexit = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_contaction
#define M2C_CODE_EQUATE_contaction 1
static const dd kcontaction = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_checkescort
#define M2C_CODE_EQUATE_checkescort 1
static const dd kcheckescort = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_110_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_110_skip 1
static const dd k__m2c_macrolocal_110_skip = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_111_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_111_skip 1
static const dd k__m2c_macrolocal_111_skip = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_112_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_112_skip 1
static const dd k__m2c_macrolocal_112_skip = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_skipcntrattack
#define M2C_CODE_EQUATE_skipcntrattack 1
static const dd kskipcntrattack = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_icresponse
#define M2C_CODE_EQUATE_icresponse 1
static const dd kicresponse = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_awacsresponse
#define M2C_CODE_EQUATE_awacsresponse 1
static const dd kawacsresponse = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_miscresponse
#define M2C_CODE_EQUATE_miscresponse 1
static const dd kmiscresponse = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_113_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_113_skip 1
static const dd k__m2c_macrolocal_113_skip = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE_skipewr
#define M2C_CODE_EQUATE_skipewr 1
static const dd kskipewr = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_skipresponse
#define M2C_CODE_EQUATE_skipresponse 1
static const dd kskipresponse = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_117_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_117_skip 1
static const dd k__m2c_macrolocal_117_skip = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_skipicprox
#define M2C_CODE_EQUATE_skipicprox 1
static const dd kskipicprox = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE_skipawacsprox
#define M2C_CODE_EQUATE_skipawacsprox 1
static const dd kskipawacsprox = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skip 1
static const dd k__m2c_macrolocal_120_skip = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_skipescort
#define M2C_CODE_EQUATE_skipescort 1
static const dd kskipescort = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_skipbreaktimer
#define M2C_CODE_EQUATE_skipbreaktimer 1
static const dd kskipbreaktimer = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_skipaawacs
#define M2C_CODE_EQUATE_skipaawacs 1
static const dd kskipaawacs = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_skipeawacs
#define M2C_CODE_EQUATE_skipeawacs 1
static const dd kskipeawacs = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_icunavail
#define M2C_CODE_EQUATE_icunavail 1
static const dd kicunavail = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_icavail
#define M2C_CODE_EQUATE_icavail 1
static const dd kicavail = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_skipe7
#define M2C_CODE_EQUATE_skipe7 1
static const dd kskipe7 = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_skipe8
#define M2C_CODE_EQUATE_skipe8 1
static const dd kskipe8 = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_skipe9
#define M2C_CODE_EQUATE_skipe9 1
static const dd kskipe9 = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_skipe10
#define M2C_CODE_EQUATE_skipe10 1
static const dd kskipe10 = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE_skipe11
#define M2C_CODE_EQUATE_skipe11 1
static const dd kskipe11 = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_skipe12
#define M2C_CODE_EQUATE_skipe12 1
static const dd kskipe12 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_proxenemyexit
#define M2C_CODE_EQUATE_proxenemyexit 1
static const dd kproxenemyexit = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_proxalliedexit
#define M2C_CODE_EQUATE_proxalliedexit 1
static const dd kproxalliedexit = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skip 1
static const dd k__m2c_macrolocal_146_skip = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_aaexit
#define M2C_CODE_EQUATE_aaexit 1
static const dd kaaexit = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_aaok
#define M2C_CODE_EQUATE_aaok 1
static const dd kaaok = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE_exitbomb
#define M2C_CODE_EQUATE_exitbomb 1
static const dd kexitbomb = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE_armnull
#define M2C_CODE_EQUATE_armnull 1
static const dd karmnull = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE_armgpb1000
#define M2C_CODE_EQUATE_armgpb1000 1
static const dd karmgpb1000 = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE_armret1000
#define M2C_CODE_EQUATE_armret1000 1
static const dd karmret1000 = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE_armlgb1000
#define M2C_CODE_EQUATE_armlgb1000 1
static const dd karmlgb1000 = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_armbl755
#define M2C_CODE_EQUATE_armbl755 1
static const dd karmbl755 = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE_armjp233
#define M2C_CODE_EQUATE_armjp233 1
static const dd karmjp233 = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE_armalarm
#define M2C_CODE_EQUATE_armalarm 1
static const dd karmalarm = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_armagm
#define M2C_CODE_EQUATE_armagm 1
static const dd karmagm = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skip 1
static const dd k__m2c_macrolocal_148_skip = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_exitlaydown
#define M2C_CODE_EQUATE_exitlaydown 1
static const dd kexitlaydown = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_contlgb
#define M2C_CODE_EQUATE_contlgb 1
static const dd kcontlgb = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_exitlgb
#define M2C_CODE_EQUATE_exitlgb 1
static const dd kexitlgb = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE_lgbok
#define M2C_CODE_EQUATE_lgbok 1
static const dd klgbok = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel42
#define M2C_CODE_EQUATE_edummylabel42 1
static const dd kedummylabel42 = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_contjp233
#define M2C_CODE_EQUATE_contjp233 1
static const dd kcontjp233 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_154_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_154_skip 1
static const dd k__m2c_macrolocal_154_skip = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_exitjp233
#define M2C_CODE_EQUATE_exitjp233 1
static const dd kexitjp233 = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_155_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_155_skip 1
static const dd k__m2c_macrolocal_155_skip = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel43
#define M2C_CODE_EQUATE_edummylabel43 1
static const dd kedummylabel43 = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_contalarm
#define M2C_CODE_EQUATE_contalarm 1
static const dd kcontalarm = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_162_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_162_skip 1
static const dd k__m2c_macrolocal_162_skip = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_exitalarm
#define M2C_CODE_EQUATE_exitalarm 1
static const dd kexitalarm = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_163_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_163_skip 1
static const dd k__m2c_macrolocal_163_skip = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_164_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_164_skip 1
static const dd k__m2c_macrolocal_164_skip = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_alarmok
#define M2C_CODE_EQUATE_alarmok 1
static const dd kalarmok = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skip 1
static const dd k__m2c_macrolocal_166_skip = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy1 1
static const dd k__m2c_macrolocal_167_mvxy1 = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy2 1
static const dd k__m2c_macrolocal_167_mvxy2 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy3 1
static const dd k__m2c_macrolocal_167_mvxy3 = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy4 1
static const dd k__m2c_macrolocal_167_mvxy4 = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_queque0032
#define M2C_CODE_EQUATE_queque0032 1
static const dd kqueque0032 = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE_queque0034
#define M2C_CODE_EQUATE_queque0034 1
static const dd kqueque0034 = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel44
#define M2C_CODE_EQUATE_edummylabel44 1
static const dd kedummylabel44 = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_contagm
#define M2C_CODE_EQUATE_contagm 1
static const dd kcontagm = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skip 1
static const dd k__m2c_macrolocal_168_skip = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_exitagm
#define M2C_CODE_EQUATE_exitagm 1
static const dd kexitagm = 0x11c3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skip 1
static const dd k__m2c_macrolocal_169_skip = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skip 1
static const dd k__m2c_macrolocal_170_skip = 0x11c5;
#endif
#ifndef M2C_CODE_EQUATE_agmok
#define M2C_CODE_EQUATE_agmok 1
static const dd kagmok = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skip 1
static const dd k__m2c_macrolocal_172_skip = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy1 1
static const dd k__m2c_macrolocal_173_mvxy1 = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy2 1
static const dd k__m2c_macrolocal_173_mvxy2 = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy3 1
static const dd k__m2c_macrolocal_173_mvxy3 = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy4 1
static const dd k__m2c_macrolocal_173_mvxy4 = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE_queque003a
#define M2C_CODE_EQUATE_queque003a 1
static const dd kqueque003a = 0x11cc;
#endif
#ifndef M2C_CODE_EQUATE_queque003c
#define M2C_CODE_EQUATE_queque003c 1
static const dd kqueque003c = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x11cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel45
#define M2C_CODE_EQUATE_edummylabel45 1
static const dd kedummylabel45 = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel46
#define M2C_CODE_EQUATE_edummylabel46 1
static const dd kedummylabel46 = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel47
#define M2C_CODE_EQUATE_edummylabel47 1
static const dd kedummylabel47 = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_skipevasion
#define M2C_CODE_EQUATE_skipevasion 1
static const dd kskipevasion = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE_setdecoytimer
#define M2C_CODE_EQUATE_setdecoytimer 1
static const dd ksetdecoytimer = 0x11d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x11d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x11d7;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_aircraftptr
#define M2C_CODE_EQUATE_aircraftptr 1
static const dd kaircraftptr = (m2c::near_offset_external(::aircraftptr));
#endif
#ifndef M2C_CODE_EQUATE_perfdataptr
#define M2C_CODE_EQUATE_perfdataptr 1
static const dd kperfdataptr = (m2c::near_offset_external(::perfdataptr));
#endif
#ifndef M2C_CODE_EQUATE_ac_mobile
#define M2C_CODE_EQUATE_ac_mobile 1
static const dd kac_mobile = (m2c::near_offset_external(::ac_mobile));
#endif
#ifndef M2C_CODE_EQUATE_ac_view
#define M2C_CODE_EQUATE_ac_view 1
static const dd kac_view = (m2c::near_offset_external(::ac_view));
#endif
#ifndef M2C_CODE_EQUATE_ac_data
#define M2C_CODE_EQUATE_ac_data 1
static const dd kac_data = (m2c::near_offset_external(::ac_data));
#endif
#ifndef M2C_CODE_EQUATE_ac_autohfine
#define M2C_CODE_EQUATE_ac_autohfine 1
static const dd kac_autohfine = (m2c::near_offset_external(::ac_autohfine));
#endif
#ifndef M2C_CODE_EQUATE_ac_autoalt
#define M2C_CODE_EQUATE_ac_autoalt 1
static const dd kac_autoalt = (m2c::near_offset_external(::ac_autoalt));
#endif
#ifndef M2C_CODE_EQUATE_ac_autovtas
#define M2C_CODE_EQUATE_ac_autovtas 1
static const dd kac_autovtas = (m2c::near_offset_external(::ac_autovtas));
#endif
#ifndef M2C_CODE_EQUATE_ac_wprng
#define M2C_CODE_EQUATE_ac_wprng 1
static const dd kac_wprng = (m2c::near_offset_external(::ac_wprng));
#endif
#ifndef M2C_CODE_EQUATE_ac_wpbrg
#define M2C_CODE_EQUATE_ac_wpbrg 1
static const dd kac_wpbrg = (m2c::near_offset_external(::ac_wpbrg));
#endif
#ifndef M2C_CODE_EQUATE_ac_wpbrgfine
#define M2C_CODE_EQUATE_ac_wpbrgfine 1
static const dd kac_wpbrgfine = (m2c::near_offset_external(::ac_wpbrgfine));
#endif
#ifndef M2C_CODE_EQUATE_ac_vmin
#define M2C_CODE_EQUATE_ac_vmin 1
static const dd kac_vmin = (m2c::near_offset_external(::ac_vmin));
#endif
#ifndef M2C_CODE_EQUATE_ac_vmax
#define M2C_CODE_EQUATE_ac_vmax 1
static const dd kac_vmax = (m2c::near_offset_external(::ac_vmax));
#endif
#ifndef M2C_CODE_EQUATE_ac_vtrim
#define M2C_CODE_EQUATE_ac_vtrim 1
static const dd kac_vtrim = (m2c::near_offset_external(::ac_vtrim));
#endif
#ifndef M2C_CODE_EQUATE_ac_thetaab
#define M2C_CODE_EQUATE_ac_thetaab 1
static const dd kac_thetaab = (m2c::near_offset_external(::ac_thetaab));
#endif
#ifndef M2C_CODE_EQUATE_ac_thetabc
#define M2C_CODE_EQUATE_ac_thetabc 1
static const dd kac_thetabc = (m2c::near_offset_external(::ac_thetabc));
#endif
#ifndef M2C_CODE_EQUATE_ac_thetaabc
#define M2C_CODE_EQUATE_ac_thetaabc 1
static const dd kac_thetaabc = (m2c::near_offset_external(::ac_thetaabc));
#endif
#ifndef M2C_CODE_EQUATE_ac_rturn
#define M2C_CODE_EQUATE_ac_rturn 1
static const dd kac_rturn = (m2c::near_offset_external(::ac_rturn));
#endif
#ifndef M2C_CODE_EQUATE_controlmode
#define M2C_CODE_EQUATE_controlmode 1
static const dd kcontrolmode = (m2c::near_offset_external(::controlmode));
#endif
#ifndef M2C_CODE_EQUATE_armswitch
#define M2C_CODE_EQUATE_armswitch 1
static const dd karmswitch = (m2c::near_offset_external(::armswitch));
#endif
#ifndef M2C_CODE_EQUATE_weapontype
#define M2C_CODE_EQUATE_weapontype 1
static const dd kweapontype = (m2c::near_offset_external(::weapontype));
#endif
#ifndef M2C_CODE_EQUATE_weaponnum
#define M2C_CODE_EQUATE_weaponnum 1
static const dd kweaponnum = (m2c::near_offset_external(::weaponnum));
#endif
#ifndef M2C_CODE_EQUATE_perfdataptrs
#define M2C_CODE_EQUATE_perfdataptrs 1
static const dd kperfdataptrs = (m2c::near_offset_external(::perfdataptrs));
#endif
#ifndef M2C_CODE_EQUATE_gr4tornado
#define M2C_CODE_EQUATE_gr4tornado 1
static const dd kgr4tornado = (m2c::near_offset_external(::gr4tornado));
#endif
#ifndef M2C_CODE_EQUATE_mig27flogger
#define M2C_CODE_EQUATE_mig27flogger 1
static const dd kmig27flogger = (m2c::near_offset_external(::mig27flogger));
#endif
#ifndef M2C_CODE_EQUATE_f3tornado
#define M2C_CODE_EQUATE_f3tornado 1
static const dd kf3tornado = (m2c::near_offset_external(::f3tornado));
#endif
#ifndef M2C_CODE_EQUATE_mig31foxhound
#define M2C_CODE_EQUATE_mig31foxhound 1
static const dd kmig31foxhound = (m2c::near_offset_external(::mig31foxhound));
#endif
#ifndef M2C_CODE_EQUATE_f15eagle
#define M2C_CODE_EQUATE_f15eagle 1
static const dd kf15eagle = (m2c::near_offset_external(::f15eagle));
#endif
#ifndef M2C_CODE_EQUATE_su27flanker
#define M2C_CODE_EQUATE_su27flanker 1
static const dd ksu27flanker = (m2c::near_offset_external(::su27flanker));
#endif
#ifndef M2C_CODE_EQUATE_f16falcon
#define M2C_CODE_EQUATE_f16falcon 1
static const dd kf16falcon = (m2c::near_offset_external(::f16falcon));
#endif
#ifndef M2C_CODE_EQUATE_mig29fulcrum
#define M2C_CODE_EQUATE_mig29fulcrum 1
static const dd kmig29fulcrum = (m2c::near_offset_external(::mig29fulcrum));
#endif
#ifndef M2C_CODE_EQUATE_a10thunderbolt
#define M2C_CODE_EQUATE_a10thunderbolt 1
static const dd ka10thunderbolt = (m2c::near_offset_external(::a10thunderbolt));
#endif
#ifndef M2C_CODE_EQUATE_su25frogfoot
#define M2C_CODE_EQUATE_su25frogfoot 1
static const dd ksu25frogfoot = (m2c::near_offset_external(::su25frogfoot));
#endif
#ifndef M2C_CODE_EQUATE_e3dsentry
#define M2C_CODE_EQUATE_e3dsentry 1
static const dd ke3dsentry = (m2c::near_offset_external(::e3dsentry));
#endif
#ifndef M2C_CODE_EQUATE_il76mainstay
#define M2C_CODE_EQUATE_il76mainstay 1
static const dd kil76mainstay = (m2c::near_offset_external(::il76mainstay));
#endif
#ifndef M2C_CODE_EQUATE_c130hercules
#define M2C_CODE_EQUATE_c130hercules 1
static const dd kc130hercules = (m2c::near_offset_external(::c130hercules));
#endif
#ifndef M2C_CODE_EQUATE_il76candid
#define M2C_CODE_EQUATE_il76candid 1
static const dd kil76candid = (m2c::near_offset_external(::il76candid));
#endif
#ifndef M2C_CODE_EQUATE_takeoff1
#define M2C_CODE_EQUATE_takeoff1 1
static const dd ktakeoff1 = (m2c::near_offset_external(::takeoff1));
#endif
#ifndef M2C_CODE_EQUATE_takeoff2
#define M2C_CODE_EQUATE_takeoff2 1
static const dd ktakeoff2 = (m2c::near_offset_external(::takeoff2));
#endif
#ifndef M2C_CODE_EQUATE_takeoff3
#define M2C_CODE_EQUATE_takeoff3 1
static const dd ktakeoff3 = (m2c::near_offset_external(::takeoff3));
#endif
#ifndef M2C_CODE_EQUATE_cruise1
#define M2C_CODE_EQUATE_cruise1 1
static const dd kcruise1 = (m2c::near_offset_external(::cruise1));
#endif
#ifndef M2C_CODE_EQUATE_cruise2
#define M2C_CODE_EQUATE_cruise2 1
static const dd kcruise2 = (m2c::near_offset_external(::cruise2));
#endif
#ifndef M2C_CODE_EQUATE_cruise3
#define M2C_CODE_EQUATE_cruise3 1
static const dd kcruise3 = (m2c::near_offset_external(::cruise3));
#endif
#ifndef M2C_CODE_EQUATE_cruise4
#define M2C_CODE_EQUATE_cruise4 1
static const dd kcruise4 = (m2c::near_offset_external(::cruise4));
#endif
#ifndef M2C_CODE_EQUATE_landing1
#define M2C_CODE_EQUATE_landing1 1
static const dd klanding1 = (m2c::near_offset_external(::landing1));
#endif
#ifndef M2C_CODE_EQUATE_landing2
#define M2C_CODE_EQUATE_landing2 1
static const dd klanding2 = (m2c::near_offset_external(::landing2));
#endif
#ifndef M2C_CODE_EQUATE_landing3
#define M2C_CODE_EQUATE_landing3 1
static const dd klanding3 = (m2c::near_offset_external(::landing3));
#endif
#ifndef M2C_CODE_EQUATE_combat1
#define M2C_CODE_EQUATE_combat1 1
static const dd kcombat1 = (m2c::near_offset_external(::combat1));
#endif
#ifndef M2C_CODE_EQUATE_combat2
#define M2C_CODE_EQUATE_combat2 1
static const dd kcombat2 = (m2c::near_offset_external(::combat2));
#endif
#ifndef M2C_CODE_EQUATE_combat3
#define M2C_CODE_EQUATE_combat3 1
static const dd kcombat3 = (m2c::near_offset_external(::combat3));
#endif
#ifndef M2C_CODE_EQUATE_combat4
#define M2C_CODE_EQUATE_combat4 1
static const dd kcombat4 = (m2c::near_offset_external(::combat4));
#endif
#ifndef M2C_CODE_EQUATE_combat5
#define M2C_CODE_EQUATE_combat5 1
static const dd kcombat5 = (m2c::near_offset_external(::combat5));
#endif
#ifndef M2C_CODE_EQUATE_combat6
#define M2C_CODE_EQUATE_combat6 1
static const dd kcombat6 = (m2c::near_offset_external(::combat6));
#endif
#ifndef M2C_CODE_EQUATE_taxiwp
#define M2C_CODE_EQUATE_taxiwp 1
static const dd ktaxiwp = (m2c::near_offset_external(::taxiwp));
#endif
#ifndef M2C_CODE_EQUATE_ac_vias
#define M2C_CODE_EQUATE_ac_vias 1
static const dd kac_vias = (m2c::near_offset_external(::ac_vias));
#endif
#ifndef M2C_CODE_EQUATE_ac_divvias
#define M2C_CODE_EQUATE_ac_divvias 1
static const dd kac_divvias = (m2c::near_offset_external(::ac_divvias));
#endif
#ifndef M2C_CODE_EQUATE_ac_divvtas
#define M2C_CODE_EQUATE_ac_divvtas 1
static const dd kac_divvtas = (m2c::near_offset_external(::ac_divvtas));
#endif
#ifndef M2C_CODE_EQUATE_icpoint
#define M2C_CODE_EQUATE_icpoint 1
static const dd kicpoint = (m2c::near_offset_external(::icpoint));
#endif
#ifndef M2C_CODE_EQUATE_scaledrange
#define M2C_CODE_EQUATE_scaledrange 1
static const dd kscaledrange = (m2c::near_offset_external(::scaledrange));
#endif
#ifndef M2C_CODE_EQUATE_xt
#define M2C_CODE_EQUATE_xt 1
static const dd kxt = (m2c::near_offset_external(::xt));
#endif
#ifndef M2C_CODE_EQUATE_yt
#define M2C_CODE_EQUATE_yt 1
static const dd kyt = (m2c::near_offset_external(::yt));
#endif
#ifndef M2C_CODE_EQUATE_zt
#define M2C_CODE_EQUATE_zt 1
static const dd kzt = (m2c::near_offset_external(::zt));
#endif
#ifndef M2C_CODE_EQUATE_hdgerror
#define M2C_CODE_EQUATE_hdgerror 1
static const dd khdgerror = (m2c::near_offset_external(::hdgerror));
#endif
#ifndef M2C_CODE_EQUATE_pitcherror
#define M2C_CODE_EQUATE_pitcherror 1
static const dd kpitcherror = (m2c::near_offset_external(::pitcherror));
#endif
#ifndef M2C_CODE_EQUATE_brgerror
#define M2C_CODE_EQUATE_brgerror 1
static const dd kbrgerror = (m2c::near_offset_external(::brgerror));
#endif
#ifndef M2C_CODE_EQUATE_cosbrgerror
#define M2C_CODE_EQUATE_cosbrgerror 1
static const dd kcosbrgerror = (m2c::near_offset_external(::cosbrgerror));
#endif
#ifndef M2C_CODE_EQUATE_maxrrate
#define M2C_CODE_EQUATE_maxrrate 1
static const dd kmaxrrate = (m2c::near_offset_external(::maxrrate));
#endif
#ifndef M2C_CODE_EQUATE_maxprate
#define M2C_CODE_EQUATE_maxprate 1
static const dd kmaxprate = (m2c::near_offset_external(::maxprate));
#endif
#ifndef M2C_CODE_EQUATE_maxgforce
#define M2C_CODE_EQUATE_maxgforce 1
static const dd kmaxgforce = (m2c::near_offset_external(::maxgforce));
#endif
#ifndef M2C_CODE_EQUATE_rolldemand
#define M2C_CODE_EQUATE_rolldemand 1
static const dd krolldemand = (m2c::near_offset_external(::rolldemand));
#endif
#ifndef M2C_CODE_EQUATE_dampedroll
#define M2C_CODE_EQUATE_dampedroll 1
static const dd kdampedroll = (m2c::near_offset_external(::dampedroll));
#endif
#ifndef M2C_CODE_EQUATE_pitchrate
#define M2C_CODE_EQUATE_pitchrate 1
static const dd kpitchrate = (m2c::near_offset_external(::pitchrate));
#endif
#ifndef M2C_CODE_EQUATE_oppvtas
#define M2C_CODE_EQUATE_oppvtas 1
static const dd koppvtas = (m2c::near_offset_external(::oppvtas));
#endif
#ifndef M2C_CODE_EQUATE_tornadooppptr
#define M2C_CODE_EQUATE_tornadooppptr 1
static const dd ktornadooppptr = (m2c::near_offset_external(::tornadooppptr));
#endif
#ifndef M2C_CODE_EQUATE_tmpsrcptr
#define M2C_CODE_EQUATE_tmpsrcptr 1
static const dd ktmpsrcptr = (m2c::near_offset_external(::tmpsrcptr));
#endif
#ifndef M2C_CODE_EQUATE_tmpicptr
#define M2C_CODE_EQUATE_tmpicptr 1
static const dd ktmpicptr = (m2c::near_offset_external(::tmpicptr));
#endif
#ifndef M2C_CODE_EQUATE_tmpicrng
#define M2C_CODE_EQUATE_tmpicrng 1
static const dd ktmpicrng = (m2c::near_offset_external(::tmpicrng));
#endif
#ifndef M2C_CODE_EQUATE_responsetimer
#define M2C_CODE_EQUATE_responsetimer 1
static const dd kresponsetimer = (m2c::near_offset_external(::responsetimer));
#endif
#ifndef M2C_CODE_EQUATE_ewrexposetimer
#define M2C_CODE_EQUATE_ewrexposetimer 1
static const dd kewrexposetimer = (m2c::near_offset_external(::ewrexposetimer));
#endif
#ifndef M2C_CODE_EQUATE_breaktimer
#define M2C_CODE_EQUATE_breaktimer 1
static const dd kbreaktimer = (m2c::near_offset_external(::breaktimer));
#endif
#ifndef M2C_CODE_EQUATE_very_fast
#define M2C_CODE_EQUATE_very_fast 1
static const dd kvery_fast = (m2c::near_offset_external(::very_fast));
#endif
#ifndef M2C_CODE_EQUATE_errorscale
#define M2C_CODE_EQUATE_errorscale 1
static const dd kerrorscale = (m2c::near_offset_external(::errorscale));
#endif
#ifndef M2C_CODE_EQUATE_oppbehind
#define M2C_CODE_EQUATE_oppbehind 1
static const dd koppbehind = (m2c::near_offset_external(::oppbehind));
#endif
#ifndef M2C_CODE_EQUATE_breakflag
#define M2C_CODE_EQUATE_breakflag 1
static const dd kbreakflag = (m2c::near_offset_external(::breakflag));
#endif
}
#ifndef aircraftptr
#define aircraftptr m2c::kaircraftptr
#endif
#ifndef perfdataptr
#define perfdataptr m2c::kperfdataptr
#endif
#ifndef ac_mobile
#define ac_mobile m2c::kac_mobile
#endif
#ifndef ac_view
#define ac_view m2c::kac_view
#endif
#ifndef ac_data
#define ac_data m2c::kac_data
#endif
#ifndef ac_autohfine
#define ac_autohfine m2c::kac_autohfine
#endif
#ifndef ac_autoalt
#define ac_autoalt m2c::kac_autoalt
#endif
#ifndef ac_autovtas
#define ac_autovtas m2c::kac_autovtas
#endif
#ifndef ac_wprng
#define ac_wprng m2c::kac_wprng
#endif
#ifndef ac_wpbrg
#define ac_wpbrg m2c::kac_wpbrg
#endif
#ifndef ac_wpbrgfine
#define ac_wpbrgfine m2c::kac_wpbrgfine
#endif
#ifndef ac_vmin
#define ac_vmin m2c::kac_vmin
#endif
#ifndef ac_vmax
#define ac_vmax m2c::kac_vmax
#endif
#ifndef ac_vtrim
#define ac_vtrim m2c::kac_vtrim
#endif
#ifndef ac_thetaab
#define ac_thetaab m2c::kac_thetaab
#endif
#ifndef ac_thetabc
#define ac_thetabc m2c::kac_thetabc
#endif
#ifndef ac_thetaabc
#define ac_thetaabc m2c::kac_thetaabc
#endif
#ifndef ac_rturn
#define ac_rturn m2c::kac_rturn
#endif
#ifndef controlmode
#define controlmode m2c::kcontrolmode
#endif
#ifndef armswitch
#define armswitch m2c::karmswitch
#endif
#ifndef weapontype
#define weapontype m2c::kweapontype
#endif
#ifndef weaponnum
#define weaponnum m2c::kweaponnum
#endif
#ifndef perfdataptrs
#define perfdataptrs m2c::kperfdataptrs
#endif
#ifndef gr4tornado
#define gr4tornado m2c::kgr4tornado
#endif
#ifndef mig27flogger
#define mig27flogger m2c::kmig27flogger
#endif
#ifndef f3tornado
#define f3tornado m2c::kf3tornado
#endif
#ifndef mig31foxhound
#define mig31foxhound m2c::kmig31foxhound
#endif
#ifndef f15eagle
#define f15eagle m2c::kf15eagle
#endif
#ifndef su27flanker
#define su27flanker m2c::ksu27flanker
#endif
#ifndef f16falcon
#define f16falcon m2c::kf16falcon
#endif
#ifndef mig29fulcrum
#define mig29fulcrum m2c::kmig29fulcrum
#endif
#ifndef a10thunderbolt
#define a10thunderbolt m2c::ka10thunderbolt
#endif
#ifndef su25frogfoot
#define su25frogfoot m2c::ksu25frogfoot
#endif
#ifndef e3dsentry
#define e3dsentry m2c::ke3dsentry
#endif
#ifndef il76mainstay
#define il76mainstay m2c::kil76mainstay
#endif
#ifndef c130hercules
#define c130hercules m2c::kc130hercules
#endif
#ifndef il76candid
#define il76candid m2c::kil76candid
#endif
#ifndef takeoff1
#define takeoff1 m2c::ktakeoff1
#endif
#ifndef takeoff2
#define takeoff2 m2c::ktakeoff2
#endif
#ifndef takeoff3
#define takeoff3 m2c::ktakeoff3
#endif
#ifndef cruise1
#define cruise1 m2c::kcruise1
#endif
#ifndef cruise2
#define cruise2 m2c::kcruise2
#endif
#ifndef cruise3
#define cruise3 m2c::kcruise3
#endif
#ifndef cruise4
#define cruise4 m2c::kcruise4
#endif
#ifndef landing1
#define landing1 m2c::klanding1
#endif
#ifndef landing2
#define landing2 m2c::klanding2
#endif
#ifndef landing3
#define landing3 m2c::klanding3
#endif
#ifndef combat1
#define combat1 m2c::kcombat1
#endif
#ifndef combat2
#define combat2 m2c::kcombat2
#endif
#ifndef combat3
#define combat3 m2c::kcombat3
#endif
#ifndef combat4
#define combat4 m2c::kcombat4
#endif
#ifndef combat5
#define combat5 m2c::kcombat5
#endif
#ifndef combat6
#define combat6 m2c::kcombat6
#endif
#ifndef taxiwp
#define taxiwp m2c::ktaxiwp
#endif
#ifndef ac_vias
#define ac_vias m2c::kac_vias
#endif
#ifndef ac_divvias
#define ac_divvias m2c::kac_divvias
#endif
#ifndef ac_divvtas
#define ac_divvtas m2c::kac_divvtas
#endif
#ifndef icpoint
#define icpoint m2c::kicpoint
#endif
#ifndef scaledrange
#define scaledrange m2c::kscaledrange
#endif
#ifndef xt
#define xt m2c::kxt
#endif
#ifndef yt
#define yt m2c::kyt
#endif
#ifndef zt
#define zt m2c::kzt
#endif
#ifndef hdgerror
#define hdgerror m2c::khdgerror
#endif
#ifndef pitcherror
#define pitcherror m2c::kpitcherror
#endif
#ifndef brgerror
#define brgerror m2c::kbrgerror
#endif
#ifndef cosbrgerror
#define cosbrgerror m2c::kcosbrgerror
#endif
#ifndef maxrrate
#define maxrrate m2c::kmaxrrate
#endif
#ifndef maxprate
#define maxprate m2c::kmaxprate
#endif
#ifndef maxgforce
#define maxgforce m2c::kmaxgforce
#endif
#ifndef rolldemand
#define rolldemand m2c::krolldemand
#endif
#ifndef dampedroll
#define dampedroll m2c::kdampedroll
#endif
#ifndef pitchrate
#define pitchrate m2c::kpitchrate
#endif
#ifndef oppvtas
#define oppvtas m2c::koppvtas
#endif
#ifndef tornadooppptr
#define tornadooppptr m2c::ktornadooppptr
#endif
#ifndef tmpsrcptr
#define tmpsrcptr m2c::ktmpsrcptr
#endif
#ifndef tmpicptr
#define tmpicptr m2c::ktmpicptr
#endif
#ifndef tmpicrng
#define tmpicrng m2c::ktmpicrng
#endif
#ifndef responsetimer
#define responsetimer m2c::kresponsetimer
#endif
#ifndef ewrexposetimer
#define ewrexposetimer m2c::kewrexposetimer
#endif
#ifndef breaktimer
#define breaktimer m2c::kbreaktimer
#endif
#ifndef very_fast
#define very_fast m2c::kvery_fast
#endif
#ifndef errorscale
#define errorscale m2c::kerrorscale
#endif
#ifndef oppbehind
#define oppbehind m2c::koppbehind
#endif
#ifndef breakflag
#define breakflag m2c::kbreakflag
#endif



#endif
