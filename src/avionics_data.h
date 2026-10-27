#ifndef __M2C_AVIONICS_DATA_H__
#define __M2C_AVIONICS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& allowsplitscreenbigmap;
extern db& splitscreenbigmapison;
extern db& currentviewischecksix;
extern db& sam_launched_while_in_cockpit;
extern db& ssf_gear;
extern db& ssf_wheelbrakes;
extern db& ssf_airbrakes;
extern db& ssf_engine1;
extern db& ssf_engine2;
extern db& ssf_sweep;
extern db& ssf_flaps;
extern db& ssf_thrustrvrs;
extern db& ssf_spils;
extern db& ssf_hud;
extern db& ssf_pilotmfd;
extern db& ssf_navigmfd;
extern db& ssf_tab1;
extern db& ssf_tab2;
extern db& ssf_commsrx;
extern db& ssf_oxygen;
extern db& ssf_radar;
extern db& ssf_ecm;
extern db& ssf_rwr;
extern db& ssf_adc;
extern dw& vfac;
extern dw& counterthird;
extern dw& mfd_counter;
extern db& shiftdwaspressed;
extern dw& trueradalt;
extern dw& dispradalt;
extern dw& zrkrombcamdist;
extern dw& yawvalue;
extern dw& yawvalue2;
extern dw& yawvalue3;
extern dw& yawvalue_zrk_aaa;
extern dw& horizonvalue;
extern dw& horizonvalue2;
extern dw& horizonvalue_zrk_aaa;
extern dw& horizonvalue3;
extern dw& horizonvalue4;
extern dw& horizonvalue5;
extern dw& horizonvalue6;
extern dw& checksixvalue;
extern dw& horizonbombvalue;
extern db& inweaponview;
extern db& cockpitviews;
extern dw (& gndhtdata)[32];
extern dw& gndhtdist;
extern dw& dummy9f9781f2_data_83_2495;
extern dw& dummy9f9781f2_data_85_2496;
extern dw& dummy9f9781f2_data_87_2497;
extern dw& dummy9f9781f2_data_89_2498;
extern dw& dummy9f9781f2_data_8b_2499;
extern dw& dummy9f9781f2_data_8d_2500;
extern dw& dummy9f9781f2_data_8f_2501;
extern dw& dummy9f9781f2_data_91_2502;
extern dw& dummy9f9781f2_data_93_2503;
extern dw& dummy9f9781f2_data_95_2504;
extern dw& dummy9f9781f2_data_97_2505;
extern dw& dummy9f9781f2_data_99_2506;
extern dw& dummy9f9781f2_data_9b_2507;
extern dw& dummy9f9781f2_data_9d_2508;
extern dw& dummy9f9781f2_data_9f_2509;
extern dw& dummy9f9781f2_data_a1_2510;
extern dw& dummy9f9781f2_data_a3_2511;
extern dw& tfrideindex;
extern dw& tfridetable;
extern dw& dummy9f9781f2_data_a9_2528;
extern dw& dummy9f9781f2_data_ab_2529;
extern dw& dummy9f9781f2_data_ad_2530;
extern dw& dummy9f9781f2_data_af_2531;
extern dw& dummy9f9781f2_data_b1_2532;
extern dw& dummy9f9781f2_data_b3_2533;
extern dw& dummy9f9781f2_data_b5_2534;
extern dw& dummy9f9781f2_data_b7_2535;
extern dw& dummy9f9781f2_data_b9_2536;
extern dw& dummy9f9781f2_data_bb_2537;
extern dw& tfridealt;
extern db& tfauto;
extern db& tflast;
extern db& tferror;
extern db& tfbrisk;
extern db& tfpullup;
extern db& count1;
extern db& count2;
extern db& count3;
extern db& lookahead;
extern dw& tfslope;
extern dw& tfpitchrate;
extern dw& tfdeltaprate;
extern dw& tfgforce;
extern dw& tftrackpoint;
extern dw& tftgtalt;
extern dw& tfalterror;
extern dw& tfdisterror;
extern dw& autovias;
extern dw& autoviasfine;
extern dw& autovtas;
extern dw& atthrust;
extern dw& aimthrottle;
extern dw& aimreheat;
extern db& autothrot;
extern db& aterror;
extern db& playtheme;
extern db& escopetoggle;
extern db& togglezrk_zsu;
extern db& togglefullscreen;
extern viewpoint& aaa_or_sam_value;
extern dw& autohdg;
extern dw& autohdgfine;
extern dw& ahrollrate;
extern dw& ahdeltarrate;
extern db& ahflag;
extern db& aherror;
extern dw& autorfine;
extern dw& aimhfine;
extern dw& errhfine;
extern dw& ahmaxrate;
extern dw& ahrollval;
extern dw& autoalt;
extern dw& autoaltfine;
extern dw& aapitchrate;
extern dw& aadeltaprate;
extern dw& aagforce;
extern db& aaflag;
extern db& aaerror;
extern dw& aimpfine;
extern dw& aaalterror;
extern dw& aadisterror;
extern dw& thetaab;
extern dw& thetabc;
extern dw& thetaabc;
extern dw& rturn;
extern dw& tdist;
extern dw& inhibitdelay;
extern db& arflag;
extern db& arlast;
extern db& tracklocked;
extern dw& oldwpptr;
extern db& ilsactive;
extern db& ilsapproach;
extern dw& ilsrangelo;
extern dw& ilsrangehi;
extern dw& ilserrorlo;
extern dw& ilserrorhi;
extern dw& ilsmaxerror;
extern dw& ilslocalerror;
extern dw& ilslocalpos;
extern dw& ilsglideerror;
extern dw& ilsglidepos;
extern dw& ilsairfieldptr;
extern dw& ilsrng;
extern dw& ilsbrg;
extern dw& ilseta;
extern dw& apphfine;
extern db& appflag;
extern db& applast;
extern db& apperror;
extern dw (& approachspeed)[4];
extern dw (& dummy9f9781f2_data_15c_2692)[4];
extern dw (& dummy9f9781f2_data_164_2693)[4];
extern db& appprogflag;
extern db& appprogseq;
extern dw& appprogtimer;
extern arad_track (& __m2c_structrow_9f9781f2_2710)[40];
extern dw& airradarptr;
extern dw& numradartracks;
extern dw& airradarrng;
extern dw& airradaroffset;
extern dw& dummy9f9781f2_data_358_2722;
extern dw& dummy9f9781f2_data_35a_2723;
extern dw& airradarscan;
extern dw& dummy9f9781f2_data_35e_2727;
extern dw& dummy9f9781f2_data_360_2728;
extern dw& scansize;
extern dw& scanoffset;
extern viewpoint& arad_view;
extern dw& xdivvals;
extern dw& dummy9f9781f2_data_37a_2743;
extern dw& dummy9f9781f2_data_37c_2744;
extern dw& ydivvals;
extern dw& dummy9f9781f2_data_380_2752;
extern dw& dummy9f9781f2_data_382_2753;
extern dw& samplecntr;
extern dd& boresighterror;
extern dw& tmpangdiff;
extern dw& tmpscaledrng;
extern dw& tmpscaledcnt;
extern dd& tmpzerr;
extern dd& tmpdz;
extern dw& dispairtgtrng;
extern dw& dispairtgtalt;
extern dw& dispairtgtvel;
extern dw& dispairtgthdg;
extern viewpoint& rwr_view;
extern dw& numrwrthreats;
extern dw& oldrwrthreats;
extern dw& activesamcntr;
extern dw& rwrthreatindex;
extern db& rwrthreatflags;
extern dw& tmpflags;
extern byte& sysstatusflags;
extern word& rangelaw;
extern arad_track& airradartracks;
extern db& stack;
extern rwr (& rwrthreats)[16];
extern db& modcode;

#ifndef automode
extern dw& automode;
#endif
#ifndef waylist
extern dw& waylist;
#endif
#ifndef weight
extern dw& weight;
#endif
#ifndef xwindveff
extern dw& xwindveff;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef kf_hold
extern db& kf_hold;
#endif
#ifndef crntwingpos
extern db& crntwingpos;
#endif
#ifndef crntflappos
extern db& crntflappos;
#endif
#ifndef flatdy
extern dd& flatdy;
#endif
#ifndef kf_approach
extern db& kf_approach;
#endif
#ifndef eaircraft12
extern dw& eaircraft12;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef eaircraft9
extern dw& eaircraft9;
#endif
#ifndef mobradarlayer1
extern db& mobradarlayer1;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef zftlo
extern dw& zftlo;
#endif
#ifndef sqrtrho
extern dw& sqrtrho;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef autotrim
extern db& autotrim;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef draglo
extern dw& draglo;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef kf_radaroff
extern db& kf_radaroff;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef kf_canceltgtwp
extern db& kf_canceltgtwp;
#endif
#ifndef eaircraft10
extern dw& eaircraft10;
#endif
#ifndef kf_boresight
extern db& kf_boresight;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef clipwndwxorg
extern dw& clipwndwxorg;
#endif
#ifndef endwpptr
extern dw& endwpptr;
#endif
#ifndef reheat
extern dw& reheat;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef weight2
extern dw& weight2;
#endif
#ifndef eaircraft11
extern dw& eaircraft11;
#endif
#ifndef frameelaptime
extern dd& frameelaptime;
#endif
#ifndef kf_track
extern db& kf_track;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef eaircraft7
extern dw& eaircraft7;
#endif
#ifndef vkts
extern dw& vkts;
#endif
#ifndef opp_mobile
extern mobile& opp_mobile;
#endif
#ifndef draghi
extern dw& draghi;
#endif
#ifndef floatwp
extern waypoint& floatwp;
#endif
#ifndef spinflag
extern db& spinflag;
#endif
#ifndef autotrack
extern db& autotrack;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef waytotal
extern dw& waytotal;
#endif
#ifndef vtrim
extern dw& vtrim;
#endif
#ifndef airfieldlist
extern dw& airfieldlist;
#endif
#ifndef xsec
extern dw& xsec;
#endif
#ifndef kf_tfollow
extern db& kf_tfollow;
#endif
#ifndef kf_cycleairtgt
extern db& kf_cycleairtgt;
#endif
#ifndef clipwndwyorg
extern db& clipwndwyorg;
#endif
#ifndef throttle
extern dw& throttle;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef stallflag1
extern db& stallflag1;
#endif
#ifndef rfine
extern dw& rfine;
#endif
#ifndef wpeta
extern dw& wpeta;
#endif
#ifndef hdgmode
extern dw& hdgmode;
#endif
#ifndef wprngnmiles
extern dw& wprngnmiles;
#endif
#ifndef ewrfloorlayer1
extern db& ewrfloorlayer1;
#endif
#ifndef msctrdatastart
extern db& msctrdatastart;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef wpbrgfine
extern dw& wpbrgfine;
#endif
#ifndef airborne1
extern db& airborne1;
#endif
#ifndef armlock
extern db& armlock;
#endif
#ifndef sectordatastart
extern db& sectordatastart;
#endif
#ifndef gcoord
extern dw& gcoord;
#endif
#ifndef kf_gndradar
extern db& kf_gndradar;
#endif
#ifndef viewmode
extern dw& viewmode;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef radartable
extern radars& radartable;
#endif
#ifndef airtgtrange
extern dd& airtgtrange;
#endif
#ifndef eaircraft8
extern dw& eaircraft8;
#endif
#ifndef radarlists
extern dw& radarlists;
#endif
#ifndef kf_cancelairtgt
extern db& kf_cancelairtgt;
#endif
#ifndef kf_selecttgtwp
extern db& kf_selecttgtwp;
#endif
#ifndef kf_skipwaypoint
extern db& kf_skipwaypoint;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef xft
extern dw& xft;
#endif
#ifndef ysec
extern dw& ysec;
#endif
#ifndef kf_throttle
extern db& kf_throttle;
#endif
#ifndef clock24
extern struct clock& clock24;
#endif
#ifndef kf_autocancel
extern db& kf_autocancel;
#endif
#ifndef wpbrg
extern dw& wpbrg;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef thrusttable
extern dw& thrusttable;
#endif
#ifndef weaponlist
extern dw& weaponlist;
#endif
#ifndef modelmapindex
extern dw& modelmapindex;
#endif
#ifndef kf_airradar
extern db& kf_airradar;
#endif
#ifndef wptimeearlylate
extern dw& wptimeearlylate;
#endif
#ifndef flatdx
extern dd& flatdx;
#endif
#ifndef zfthi
extern dw& zfthi;
#endif
#ifndef altmode
extern dw& altmode;
#endif
#ifndef hfine
extern dw& hfine;
#endif
#ifndef m_sinp
extern dw& m_sinp;
#endif
#ifndef pfine
extern dw& pfine;
#endif
#ifndef yft
extern dw& yft;
#endif
#ifndef ewrtable
extern dw& ewrtable;
#endif
#ifndef wprng
extern dd& wprng;
#endif
#ifndef hdg
extern dw& hdg;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_updateavionics
#define M2C_CODE_EQUATE_updateavionics 1
static const dd kupdateavionics = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_1_testhi 1
static const dd k__m2c_macrolocal_1_testhi = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_1_testok 1
static const dd k__m2c_macrolocal_1_testok = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_scangndhtloop
#define M2C_CODE_EQUATE_scangndhtloop 1
static const dd kscangndhtloop = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy1 1
static const dd k__m2c_macrolocal_6_mvxy1 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy2 1
static const dd k__m2c_macrolocal_6_mvxy2 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy3 1
static const dd k__m2c_macrolocal_6_mvxy3 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_6_mvxy4 1
static const dd k__m2c_macrolocal_6_mvxy4 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_tgtwpok
#define M2C_CODE_EQUATE_tgtwpok 1
static const dd ktgtwpok = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_clockok
#define M2C_CODE_EQUATE_clockok 1
static const dd kclockok = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_adcok
#define M2C_CODE_EQUATE_adcok 1
static const dd kadcok = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_exitautopilot
#define M2C_CODE_EQUATE_exitautopilot 1
static const dd kexitautopilot = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_skipcancel
#define M2C_CODE_EQUATE_skipcancel 1
static const dd kskipcancel = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_contautopilot
#define M2C_CODE_EQUATE_contautopilot 1
static const dd kcontautopilot = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_skipapproach
#define M2C_CODE_EQUATE_skipapproach 1
static const dd kskipapproach = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_skiptrack
#define M2C_CODE_EQUATE_skiptrack 1
static const dd kskiptrack = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_conttrack
#define M2C_CODE_EQUATE_conttrack 1
static const dd kconttrack = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_skiphold
#define M2C_CODE_EQUATE_skiphold 1
static const dd kskiphold = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_16_testhi 1
static const dd k__m2c_macrolocal_16_testhi = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_16_testok 1
static const dd k__m2c_macrolocal_16_testok = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_skiptfollow
#define M2C_CODE_EQUATE_skiptfollow 1
static const dd kskiptfollow = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_togglealtmode
#define M2C_CODE_EQUATE_togglealtmode 1
static const dd ktogglealtmode = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testhi 1
static const dd k__m2c_macrolocal_20_testhi = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testok 1
static const dd k__m2c_macrolocal_20_testok = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_autothrotok
#define M2C_CODE_EQUATE_autothrotok 1
static const dd kautothrotok = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_modcode_0_proc
#define M2C_CODE_EQUATE_modcode_0_proc 1
static const dd kmodcode_0_proc = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_tfexit2
#define M2C_CODE_EQUATE_tfexit2 1
static const dd ktfexit2 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_tfexit1
#define M2C_CODE_EQUATE_tfexit1 1
static const dd ktfexit1 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_skippullup
#define M2C_CODE_EQUATE_skippullup 1
static const dd kskippullup = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_sortpitchrate
#define M2C_CODE_EQUATE_sortpitchrate 1
static const dd ksortpitchrate = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_skippushdown
#define M2C_CODE_EQUATE_skippushdown 1
static const dd kskippushdown = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_findfirstloop
#define M2C_CODE_EQUATE_findfirstloop 1
static const dd kfindfirstloop = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_endscan
#define M2C_CODE_EQUATE_endscan 1
static const dd kendscan = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_initslope
#define M2C_CODE_EQUATE_initslope 1
static const dd kinitslope = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_initdownslope
#define M2C_CODE_EQUATE_initdownslope 1
static const dd kinitdownslope = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_findnextloop
#define M2C_CODE_EQUATE_findnextloop 1
static const dd kfindnextloop = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_checklaststep
#define M2C_CODE_EQUATE_checklaststep 1
static const dd kchecklaststep = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_sortslope
#define M2C_CODE_EQUATE_sortslope 1
static const dd ksortslope = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_sortdownslope
#define M2C_CODE_EQUATE_sortdownslope 1
static const dd ksortdownslope = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_contsortslope
#define M2C_CODE_EQUATE_contsortslope 1
static const dd kcontsortslope = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_tfabove
#define M2C_CODE_EQUATE_tfabove 1
static const dd ktfabove = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_tfcont
#define M2C_CODE_EQUATE_tfcont 1
static const dd ktfcont = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_sortvtrim
#define M2C_CODE_EQUATE_sortvtrim 1
static const dd ksortvtrim = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_tfexit4
#define M2C_CODE_EQUATE_tfexit4 1
static const dd ktfexit4 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_tfexit3
#define M2C_CODE_EQUATE_tfexit3 1
static const dd ktfexit3 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_tfrideloop
#define M2C_CODE_EQUATE_tfrideloop 1
static const dd ktfrideloop = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_atexit2
#define M2C_CODE_EQUATE_atexit2 1
static const dd katexit2 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_atexit1
#define M2C_CODE_EQUATE_atexit1 1
static const dd katexit1 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_29_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_29_skip 1
static const dd k__m2c_macrolocal_29_skip = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_minthrottle
#define M2C_CODE_EQUATE_minthrottle 1
static const dd kminthrottle = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_30_skip 1
static const dd k__m2c_macrolocal_30_skip = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_maxthrottle
#define M2C_CODE_EQUATE_maxthrottle 1
static const dd kmaxthrottle = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_31_skip 1
static const dd k__m2c_macrolocal_31_skip = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_32_skip 1
static const dd k__m2c_macrolocal_32_skip = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_33_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_33_skip 1
static const dd k__m2c_macrolocal_33_skip = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_34_skip 1
static const dd k__m2c_macrolocal_34_skip = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_sortthrust
#define M2C_CODE_EQUATE_sortthrust 1
static const dd ksortthrust = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_36_skip 1
static const dd k__m2c_macrolocal_36_skip = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_37_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_37_skip 1
static const dd k__m2c_macrolocal_37_skip = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_38_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_38_skip 1
static const dd k__m2c_macrolocal_38_skip = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_39_skip 1
static const dd k__m2c_macrolocal_39_skip = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_contthrottle
#define M2C_CODE_EQUATE_contthrottle 1
static const dd kcontthrottle = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_throttleloop
#define M2C_CODE_EQUATE_throttleloop 1
static const dd kthrottleloop = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_skipreheat
#define M2C_CODE_EQUATE_skipreheat 1
static const dd kskipreheat = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_exitthrottle
#define M2C_CODE_EQUATE_exitthrottle 1
static const dd kexitthrottle = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_ahexit2
#define M2C_CODE_EQUATE_ahexit2 1
static const dd kahexit2 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_ahexit1
#define M2C_CODE_EQUATE_ahexit1 1
static const dd kahexit1 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_43_skip 1
static const dd k__m2c_macrolocal_43_skip = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_contheading
#define M2C_CODE_EQUATE_contheading 1
static const dd kcontheading = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_setaimhfine
#define M2C_CODE_EQUATE_setaimhfine 1
static const dd ksetaimhfine = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_46_testhi 1
static const dd k__m2c_macrolocal_46_testhi = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_46_testok 1
static const dd k__m2c_macrolocal_46_testok = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_maxrollangle
#define M2C_CODE_EQUATE_maxrollangle 1
static const dd kmaxrollangle = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_aaexit2
#define M2C_CODE_EQUATE_aaexit2 1
static const dd kaaexit2 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_aaexit1
#define M2C_CODE_EQUATE_aaexit1 1
static const dd kaaexit1 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_49_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_49_testhi 1
static const dd k__m2c_macrolocal_49_testhi = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_49_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_49_testok 1
static const dd k__m2c_macrolocal_49_testok = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_calczerror
#define M2C_CODE_EQUATE_calczerror 1
static const dd kcalczerror = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_setpitchlimit
#define M2C_CODE_EQUATE_setpitchlimit 1
static const dd ksetpitchlimit = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_sortaaprate
#define M2C_CODE_EQUATE_sortaaprate 1
static const dd ksortaaprate = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_aaexit3
#define M2C_CODE_EQUATE_aaexit3 1
static const dd kaaexit3 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_56_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_56_skip 1
static const dd k__m2c_macrolocal_56_skip = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_exitautoroute
#define M2C_CODE_EQUATE_exitautoroute 1
static const dd kexitautoroute = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_57_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_57_skip 1
static const dd k__m2c_macrolocal_57_skip = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_targetwp
#define M2C_CODE_EQUATE_targetwp 1
static const dd ktargetwp = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_58_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_58_skip 1
static const dd k__m2c_macrolocal_58_skip = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_wpok
#define M2C_CODE_EQUATE_wpok 1
static const dd kwpok = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_59_skip 1
static const dd k__m2c_macrolocal_59_skip = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_satisfiedwp
#define M2C_CODE_EQUATE_satisfiedwp 1
static const dd ksatisfiedwp = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_controute
#define M2C_CODE_EQUATE_controute 1
static const dd kcontroute = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_61_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_61_skip 1
static const dd k__m2c_macrolocal_61_skip = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_continhibit
#define M2C_CODE_EQUATE_continhibit 1
static const dd kcontinhibit = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_adjusthdg
#define M2C_CODE_EQUATE_adjusthdg 1
static const dd kadjusthdg = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_exitnextwp
#define M2C_CODE_EQUATE_exitnextwp 1
static const dd kexitnextwp = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_sortlink
#define M2C_CODE_EQUATE_sortlink 1
static const dd ksortlink = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_advanceok
#define M2C_CODE_EQUATE_advanceok 1
static const dd kadvanceok = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_exitselectwp
#define M2C_CODE_EQUATE_exitselectwp 1
static const dd kexitselectwp = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_exitcancelwp
#define M2C_CODE_EQUATE_exitcancelwp 1
static const dd kexitcancelwp = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_updatetgtwp
#define M2C_CODE_EQUATE_updatetgtwp 1
static const dd kupdatetgtwp = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_exitupdatewp
#define M2C_CODE_EQUATE_exitupdatewp 1
static const dd kexitupdatewp = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_63_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_63_skip 1
static const dd k__m2c_macrolocal_63_skip = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_updatewpexit
#define M2C_CODE_EQUATE_updatewpexit 1
static const dd kupdatewpexit = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_64_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_64_skip 1
static const dd k__m2c_macrolocal_64_skip = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_settel
#define M2C_CODE_EQUATE_settel 1
static const dd ksettel = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_68_testhi 1
static const dd k__m2c_macrolocal_68_testhi = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_68_testok 1
static const dd k__m2c_macrolocal_68_testok = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_settdist
#define M2C_CODE_EQUATE_settdist 1
static const dd ksettdist = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_tdistov
#define M2C_CODE_EQUATE_tdistov 1
static const dd ktdistov = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_71_skip 1
static const dd k__m2c_macrolocal_71_skip = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_exitwpalt
#define M2C_CODE_EQUATE_exitwpalt 1
static const dd kexitwpalt = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_72_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_72_skip 1
static const dd k__m2c_macrolocal_72_skip = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_73_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_73_testhi 1
static const dd k__m2c_macrolocal_73_testhi = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_73_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_73_testok 1
static const dd k__m2c_macrolocal_73_testok = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_74_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_74_testhi 1
static const dd k__m2c_macrolocal_74_testhi = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_74_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_74_testok 1
static const dd k__m2c_macrolocal_74_testok = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_scanafloop
#define M2C_CODE_EQUATE_scanafloop 1
static const dd kscanafloop = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_exitils
#define M2C_CODE_EQUATE_exitils 1
static const dd kexitils = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_afloop
#define M2C_CODE_EQUATE_afloop 1
static const dd kafloop = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_nextaf
#define M2C_CODE_EQUATE_nextaf 1
static const dd knextaf = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_inilsbeam
#define M2C_CODE_EQUATE_inilsbeam 1
static const dd kinilsbeam = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_75_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_75_skip 1
static const dd k__m2c_macrolocal_75_skip = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_ilsfail
#define M2C_CODE_EQUATE_ilsfail 1
static const dd kilsfail = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_sortnapproach
#define M2C_CODE_EQUATE_sortnapproach 1
static const dd ksortnapproach = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_76_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_76_skip 1
static const dd k__m2c_macrolocal_76_skip = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_sortsapproach
#define M2C_CODE_EQUATE_sortsapproach 1
static const dd ksortsapproach = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_77_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_77_skip 1
static const dd k__m2c_macrolocal_77_skip = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_sorteapproach
#define M2C_CODE_EQUATE_sorteapproach 1
static const dd ksorteapproach = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_78_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_78_skip 1
static const dd k__m2c_macrolocal_78_skip = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_sortwapproach
#define M2C_CODE_EQUATE_sortwapproach 1
static const dd ksortwapproach = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_ilsok
#define M2C_CODE_EQUATE_ilsok 1
static const dd kilsok = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_appexit2
#define M2C_CODE_EQUATE_appexit2 1
static const dd kappexit2 = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_appexit1
#define M2C_CODE_EQUATE_appexit1 1
static const dd kappexit1 = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_skipappinit
#define M2C_CODE_EQUATE_skipappinit 1
static const dd kskipappinit = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_radarok
#define M2C_CODE_EQUATE_radarok 1
static const dd kradarok = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE_exitappprog
#define M2C_CODE_EQUATE_exitappprog 1
static const dd kexitappprog = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_setaptimer
#define M2C_CODE_EQUATE_setaptimer 1
static const dd ksetaptimer = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_contairradar
#define M2C_CODE_EQUATE_contairradar 1
static const dd kcontairradar = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_exitairradar
#define M2C_CODE_EQUATE_exitairradar 1
static const dd kexitairradar = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop
#define M2C_CODE_EQUATE_scanyloop 1
static const dd kscanyloop = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop
#define M2C_CODE_EQUATE_scanxloop 1
static const dd kscanxloop = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_skipsector
#define M2C_CODE_EQUATE_skipsector 1
static const dd kskipsector = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_scanmobiles
#define M2C_CODE_EQUATE_scanmobiles 1
static const dd kscanmobiles = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_skipmobile
#define M2C_CODE_EQUATE_skipmobile 1
static const dd kskipmobile = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_trackok
#define M2C_CODE_EQUATE_trackok 1
static const dd ktrackok = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_losttrack
#define M2C_CODE_EQUATE_losttrack 1
static const dd klosttrack = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_airtgtdata
#define M2C_CODE_EQUATE_airtgtdata 1
static const dd kairtgtdata = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_101_skip 1
static const dd k__m2c_macrolocal_101_skip = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE_exittrack
#define M2C_CODE_EQUATE_exittrack 1
static const dd kexittrack = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_102_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_102_skip 1
static const dd k__m2c_macrolocal_102_skip = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_103_skip 1
static const dd k__m2c_macrolocal_103_skip = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE_skipconeelev
#define M2C_CODE_EQUATE_skipconeelev 1
static const dd kskipconeelev = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_contconeelev
#define M2C_CODE_EQUATE_contconeelev 1
static const dd kcontconeelev = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_105_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_105_skip 1
static const dd k__m2c_macrolocal_105_skip = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_106_skip 1
static const dd k__m2c_macrolocal_106_skip = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_107_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_107_skip 1
static const dd k__m2c_macrolocal_107_skip = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_xyscaleok
#define M2C_CODE_EQUATE_xyscaleok 1
static const dd kxyscaleok = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_111_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_111_skip 1
static const dd k__m2c_macrolocal_111_skip = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE_radarvis
#define M2C_CODE_EQUATE_radarvis 1
static const dd kradarvis = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_112_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_112_skip 1
static const dd k__m2c_macrolocal_112_skip = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_114_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_114_skip 1
static const dd k__m2c_macrolocal_114_skip = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_longrangecheck
#define M2C_CODE_EQUATE_longrangecheck 1
static const dd klongrangecheck = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_medrangecheck
#define M2C_CODE_EQUATE_medrangecheck 1
static const dd kmedrangecheck = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_shortrangecheck
#define M2C_CODE_EQUATE_shortrangecheck 1
static const dd kshortrangecheck = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_contshadow
#define M2C_CODE_EQUATE_contshadow 1
static const dd kcontshadow = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE_shadowloop
#define M2C_CODE_EQUATE_shadowloop 1
static const dd kshadowloop = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_altok
#define M2C_CODE_EQUATE_altok 1
static const dd kaltok = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_checkalt
#define M2C_CODE_EQUATE_checkalt 1
static const dd kcheckalt = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_radarnonvis
#define M2C_CODE_EQUATE_radarnonvis 1
static const dd kradarnonvis = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_targetloop
#define M2C_CODE_EQUATE_targetloop 1
static const dd ktargetloop = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_nexttarget
#define M2C_CODE_EQUATE_nexttarget 1
static const dd knexttarget = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_exitcycle
#define M2C_CODE_EQUATE_exitcycle 1
static const dd kexitcycle = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_cycleloop
#define M2C_CODE_EQUATE_cycleloop 1
static const dd kcycleloop = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_cycleok
#define M2C_CODE_EQUATE_cycleok 1
static const dd kcycleok = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_exitrwr
#define M2C_CODE_EQUATE_exitrwr 1
static const dd kexitrwr = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_exitewr
#define M2C_CODE_EQUATE_exitewr 1
static const dd kexitewr = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_116_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_116_skip 1
static const dd k__m2c_macrolocal_116_skip = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_117_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_117_skip 1
static const dd k__m2c_macrolocal_117_skip = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_sortmobileewr
#define M2C_CODE_EQUATE_sortmobileewr 1
static const dd ksortmobileewr = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE_sortgroundewr
#define M2C_CODE_EQUATE_sortgroundewr 1
static const dd ksortgroundewr = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_ewrdead
#define M2C_CODE_EQUATE_ewrdead 1
static const dd kewrdead = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_ewrok
#define M2C_CODE_EQUATE_ewrok 1
static const dd kewrok = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_samyloop
#define M2C_CODE_EQUATE_samyloop 1
static const dd ksamyloop = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_samxloop
#define M2C_CODE_EQUATE_samxloop 1
static const dd ksamxloop = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_119_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_119_skip 1
static const dd k__m2c_macrolocal_119_skip = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_samnextsctr
#define M2C_CODE_EQUATE_samnextsctr 1
static const dd ksamnextsctr = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skip 1
static const dd k__m2c_macrolocal_120_skip = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_121_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_121_skip 1
static const dd k__m2c_macrolocal_121_skip = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_122_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_122_skip 1
static const dd k__m2c_macrolocal_122_skip = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_124_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_124_skip 1
static const dd k__m2c_macrolocal_124_skip = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE_scansamloop
#define M2C_CODE_EQUATE_scansamloop 1
static const dd kscansamloop = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_125_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_125_skip 1
static const dd k__m2c_macrolocal_125_skip = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_skipsam
#define M2C_CODE_EQUATE_skipsam 1
static const dd kskipsam = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_126_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_126_skip 1
static const dd k__m2c_macrolocal_126_skip = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_127_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_127_skip 1
static const dd k__m2c_macrolocal_127_skip = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_aaayloop
#define M2C_CODE_EQUATE_aaayloop 1
static const dd kaaayloop = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_aaaxloop
#define M2C_CODE_EQUATE_aaaxloop 1
static const dd kaaaxloop = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_128_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_128_skip 1
static const dd k__m2c_macrolocal_128_skip = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_aaanextsctr
#define M2C_CODE_EQUATE_aaanextsctr 1
static const dd kaaanextsctr = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_129_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_129_skip 1
static const dd k__m2c_macrolocal_129_skip = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_130_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_130_skip 1
static const dd k__m2c_macrolocal_130_skip = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_131_skip 1
static const dd k__m2c_macrolocal_131_skip = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_133_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_133_skip 1
static const dd k__m2c_macrolocal_133_skip = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_scanaaaloop
#define M2C_CODE_EQUATE_scanaaaloop 1
static const dd kscanaaaloop = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_134_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_134_skip 1
static const dd k__m2c_macrolocal_134_skip = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE_skipaaa
#define M2C_CODE_EQUATE_skipaaa 1
static const dd kskipaaa = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_135_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_135_skip 1
static const dd k__m2c_macrolocal_135_skip = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_136_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_136_skip 1
static const dd k__m2c_macrolocal_136_skip = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_exitacradar
#define M2C_CODE_EQUATE_exitacradar 1
static const dd kexitacradar = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_missilescan
#define M2C_CODE_EQUATE_missilescan 1
static const dd kmissilescan = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_nextweapon
#define M2C_CODE_EQUATE_nextweapon 1
static const dd knextweapon = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE_missilelocated
#define M2C_CODE_EQUATE_missilelocated 1
static const dd kmissilelocated = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE_skipmissile
#define M2C_CODE_EQUATE_skipmissile 1
static const dd kskipmissile = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_radvis
#define M2C_CODE_EQUATE_radvis 1
static const dd kradvis = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_radshadloop
#define M2C_CODE_EQUATE_radshadloop 1
static const dd kradshadloop = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_radnonvis
#define M2C_CODE_EQUATE_radnonvis 1
static const dd kradnonvis = 0x11be;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_allowsplitscreenbigmap
#define M2C_CODE_EQUATE_allowsplitscreenbigmap 1
static const dd kallowsplitscreenbigmap = (m2c::near_offset_external(::allowsplitscreenbigmap));
#endif
#ifndef M2C_CODE_EQUATE_splitscreenbigmapison
#define M2C_CODE_EQUATE_splitscreenbigmapison 1
static const dd ksplitscreenbigmapison = (m2c::near_offset_external(::splitscreenbigmapison));
#endif
#ifndef M2C_CODE_EQUATE_currentviewischecksix
#define M2C_CODE_EQUATE_currentviewischecksix 1
static const dd kcurrentviewischecksix = (m2c::near_offset_external(::currentviewischecksix));
#endif
#ifndef M2C_CODE_EQUATE_sam_launched_while_in_cockpit
#define M2C_CODE_EQUATE_sam_launched_while_in_cockpit 1
static const dd ksam_launched_while_in_cockpit = (m2c::near_offset_external(::sam_launched_while_in_cockpit));
#endif
#ifndef M2C_CODE_EQUATE_ssf_gear
#define M2C_CODE_EQUATE_ssf_gear 1
static const dd kssf_gear = (m2c::near_offset_external(::ssf_gear));
#endif
#ifndef M2C_CODE_EQUATE_ssf_wheelbrakes
#define M2C_CODE_EQUATE_ssf_wheelbrakes 1
static const dd kssf_wheelbrakes = (m2c::near_offset_external(::ssf_wheelbrakes));
#endif
#ifndef M2C_CODE_EQUATE_ssf_airbrakes
#define M2C_CODE_EQUATE_ssf_airbrakes 1
static const dd kssf_airbrakes = (m2c::near_offset_external(::ssf_airbrakes));
#endif
#ifndef M2C_CODE_EQUATE_ssf_engine1
#define M2C_CODE_EQUATE_ssf_engine1 1
static const dd kssf_engine1 = (m2c::near_offset_external(::ssf_engine1));
#endif
#ifndef M2C_CODE_EQUATE_ssf_engine2
#define M2C_CODE_EQUATE_ssf_engine2 1
static const dd kssf_engine2 = (m2c::near_offset_external(::ssf_engine2));
#endif
#ifndef M2C_CODE_EQUATE_ssf_sweep
#define M2C_CODE_EQUATE_ssf_sweep 1
static const dd kssf_sweep = (m2c::near_offset_external(::ssf_sweep));
#endif
#ifndef M2C_CODE_EQUATE_ssf_flaps
#define M2C_CODE_EQUATE_ssf_flaps 1
static const dd kssf_flaps = (m2c::near_offset_external(::ssf_flaps));
#endif
#ifndef M2C_CODE_EQUATE_ssf_thrustrvrs
#define M2C_CODE_EQUATE_ssf_thrustrvrs 1
static const dd kssf_thrustrvrs = (m2c::near_offset_external(::ssf_thrustrvrs));
#endif
#ifndef M2C_CODE_EQUATE_ssf_spils
#define M2C_CODE_EQUATE_ssf_spils 1
static const dd kssf_spils = (m2c::near_offset_external(::ssf_spils));
#endif
#ifndef M2C_CODE_EQUATE_ssf_hud
#define M2C_CODE_EQUATE_ssf_hud 1
static const dd kssf_hud = (m2c::near_offset_external(::ssf_hud));
#endif
#ifndef M2C_CODE_EQUATE_ssf_pilotmfd
#define M2C_CODE_EQUATE_ssf_pilotmfd 1
static const dd kssf_pilotmfd = (m2c::near_offset_external(::ssf_pilotmfd));
#endif
#ifndef M2C_CODE_EQUATE_ssf_navigmfd
#define M2C_CODE_EQUATE_ssf_navigmfd 1
static const dd kssf_navigmfd = (m2c::near_offset_external(::ssf_navigmfd));
#endif
#ifndef M2C_CODE_EQUATE_ssf_tab1
#define M2C_CODE_EQUATE_ssf_tab1 1
static const dd kssf_tab1 = (m2c::near_offset_external(::ssf_tab1));
#endif
#ifndef M2C_CODE_EQUATE_ssf_tab2
#define M2C_CODE_EQUATE_ssf_tab2 1
static const dd kssf_tab2 = (m2c::near_offset_external(::ssf_tab2));
#endif
#ifndef M2C_CODE_EQUATE_ssf_commsrx
#define M2C_CODE_EQUATE_ssf_commsrx 1
static const dd kssf_commsrx = (m2c::near_offset_external(::ssf_commsrx));
#endif
#ifndef M2C_CODE_EQUATE_ssf_oxygen
#define M2C_CODE_EQUATE_ssf_oxygen 1
static const dd kssf_oxygen = (m2c::near_offset_external(::ssf_oxygen));
#endif
#ifndef M2C_CODE_EQUATE_ssf_radar
#define M2C_CODE_EQUATE_ssf_radar 1
static const dd kssf_radar = (m2c::near_offset_external(::ssf_radar));
#endif
#ifndef M2C_CODE_EQUATE_ssf_ecm
#define M2C_CODE_EQUATE_ssf_ecm 1
static const dd kssf_ecm = (m2c::near_offset_external(::ssf_ecm));
#endif
#ifndef M2C_CODE_EQUATE_ssf_rwr
#define M2C_CODE_EQUATE_ssf_rwr 1
static const dd kssf_rwr = (m2c::near_offset_external(::ssf_rwr));
#endif
#ifndef M2C_CODE_EQUATE_ssf_adc
#define M2C_CODE_EQUATE_ssf_adc 1
static const dd kssf_adc = (m2c::near_offset_external(::ssf_adc));
#endif
#ifndef M2C_CODE_EQUATE_vfac
#define M2C_CODE_EQUATE_vfac 1
static const dd kvfac = (m2c::near_offset_external(::vfac));
#endif
#ifndef M2C_CODE_EQUATE_counterthird
#define M2C_CODE_EQUATE_counterthird 1
static const dd kcounterthird = (m2c::near_offset_external(::counterthird));
#endif
#ifndef M2C_CODE_EQUATE_mfd_counter
#define M2C_CODE_EQUATE_mfd_counter 1
static const dd kmfd_counter = (m2c::near_offset_external(::mfd_counter));
#endif
#ifndef M2C_CODE_EQUATE_shiftdwaspressed
#define M2C_CODE_EQUATE_shiftdwaspressed 1
static const dd kshiftdwaspressed = (m2c::near_offset_external(::shiftdwaspressed));
#endif
#ifndef M2C_CODE_EQUATE_trueradalt
#define M2C_CODE_EQUATE_trueradalt 1
static const dd ktrueradalt = (m2c::near_offset_external(::trueradalt));
#endif
#ifndef M2C_CODE_EQUATE_dispradalt
#define M2C_CODE_EQUATE_dispradalt 1
static const dd kdispradalt = (m2c::near_offset_external(::dispradalt));
#endif
#ifndef M2C_CODE_EQUATE_zrkrombcamdist
#define M2C_CODE_EQUATE_zrkrombcamdist 1
static const dd kzrkrombcamdist = (m2c::near_offset_external(::zrkrombcamdist));
#endif
#ifndef M2C_CODE_EQUATE_yawvalue
#define M2C_CODE_EQUATE_yawvalue 1
static const dd kyawvalue = (m2c::near_offset_external(::yawvalue));
#endif
#ifndef M2C_CODE_EQUATE_yawvalue2
#define M2C_CODE_EQUATE_yawvalue2 1
static const dd kyawvalue2 = (m2c::near_offset_external(::yawvalue2));
#endif
#ifndef M2C_CODE_EQUATE_yawvalue3
#define M2C_CODE_EQUATE_yawvalue3 1
static const dd kyawvalue3 = (m2c::near_offset_external(::yawvalue3));
#endif
#ifndef M2C_CODE_EQUATE_yawvalue_zrk_aaa
#define M2C_CODE_EQUATE_yawvalue_zrk_aaa 1
static const dd kyawvalue_zrk_aaa = (m2c::near_offset_external(::yawvalue_zrk_aaa));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue
#define M2C_CODE_EQUATE_horizonvalue 1
static const dd khorizonvalue = (m2c::near_offset_external(::horizonvalue));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue2
#define M2C_CODE_EQUATE_horizonvalue2 1
static const dd khorizonvalue2 = (m2c::near_offset_external(::horizonvalue2));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue_zrk_aaa
#define M2C_CODE_EQUATE_horizonvalue_zrk_aaa 1
static const dd khorizonvalue_zrk_aaa = (m2c::near_offset_external(::horizonvalue_zrk_aaa));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue3
#define M2C_CODE_EQUATE_horizonvalue3 1
static const dd khorizonvalue3 = (m2c::near_offset_external(::horizonvalue3));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue4
#define M2C_CODE_EQUATE_horizonvalue4 1
static const dd khorizonvalue4 = (m2c::near_offset_external(::horizonvalue4));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue5
#define M2C_CODE_EQUATE_horizonvalue5 1
static const dd khorizonvalue5 = (m2c::near_offset_external(::horizonvalue5));
#endif
#ifndef M2C_CODE_EQUATE_horizonvalue6
#define M2C_CODE_EQUATE_horizonvalue6 1
static const dd khorizonvalue6 = (m2c::near_offset_external(::horizonvalue6));
#endif
#ifndef M2C_CODE_EQUATE_checksixvalue
#define M2C_CODE_EQUATE_checksixvalue 1
static const dd kchecksixvalue = (m2c::near_offset_external(::checksixvalue));
#endif
#ifndef M2C_CODE_EQUATE_horizonbombvalue
#define M2C_CODE_EQUATE_horizonbombvalue 1
static const dd khorizonbombvalue = (m2c::near_offset_external(::horizonbombvalue));
#endif
#ifndef M2C_CODE_EQUATE_inweaponview
#define M2C_CODE_EQUATE_inweaponview 1
static const dd kinweaponview = (m2c::near_offset_external(::inweaponview));
#endif
#ifndef M2C_CODE_EQUATE_cockpitviews
#define M2C_CODE_EQUATE_cockpitviews 1
static const dd kcockpitviews = (m2c::near_offset_external(::cockpitviews));
#endif
#ifndef M2C_CODE_EQUATE_gndhtdata
#define M2C_CODE_EQUATE_gndhtdata 1
static const dd kgndhtdata = (m2c::near_offset_external(::gndhtdata));
#endif
#ifndef M2C_CODE_EQUATE_gndhtdist
#define M2C_CODE_EQUATE_gndhtdist 1
static const dd kgndhtdist = (m2c::near_offset_external(::gndhtdist));
#endif
#ifndef M2C_CODE_EQUATE_tfrideindex
#define M2C_CODE_EQUATE_tfrideindex 1
static const dd ktfrideindex = (m2c::near_offset_external(::tfrideindex));
#endif
#ifndef M2C_CODE_EQUATE_tfridetable
#define M2C_CODE_EQUATE_tfridetable 1
static const dd ktfridetable = (m2c::near_offset_external(::tfridetable));
#endif
#ifndef M2C_CODE_EQUATE_tfridealt
#define M2C_CODE_EQUATE_tfridealt 1
static const dd ktfridealt = (m2c::near_offset_external(::tfridealt));
#endif
#ifndef M2C_CODE_EQUATE_tfauto
#define M2C_CODE_EQUATE_tfauto 1
static const dd ktfauto = (m2c::near_offset_external(::tfauto));
#endif
#ifndef M2C_CODE_EQUATE_tflast
#define M2C_CODE_EQUATE_tflast 1
static const dd ktflast = (m2c::near_offset_external(::tflast));
#endif
#ifndef M2C_CODE_EQUATE_tferror
#define M2C_CODE_EQUATE_tferror 1
static const dd ktferror = (m2c::near_offset_external(::tferror));
#endif
#ifndef M2C_CODE_EQUATE_tfbrisk
#define M2C_CODE_EQUATE_tfbrisk 1
static const dd ktfbrisk = (m2c::near_offset_external(::tfbrisk));
#endif
#ifndef M2C_CODE_EQUATE_tfpullup
#define M2C_CODE_EQUATE_tfpullup 1
static const dd ktfpullup = (m2c::near_offset_external(::tfpullup));
#endif
#ifndef M2C_CODE_EQUATE_count1
#define M2C_CODE_EQUATE_count1 1
static const dd kcount1 = (m2c::near_offset_external(::count1));
#endif
#ifndef M2C_CODE_EQUATE_count2
#define M2C_CODE_EQUATE_count2 1
static const dd kcount2 = (m2c::near_offset_external(::count2));
#endif
#ifndef M2C_CODE_EQUATE_count3
#define M2C_CODE_EQUATE_count3 1
static const dd kcount3 = (m2c::near_offset_external(::count3));
#endif
#ifndef M2C_CODE_EQUATE_lookahead
#define M2C_CODE_EQUATE_lookahead 1
static const dd klookahead = (m2c::near_offset_external(::lookahead));
#endif
#ifndef M2C_CODE_EQUATE_tfslope
#define M2C_CODE_EQUATE_tfslope 1
static const dd ktfslope = (m2c::near_offset_external(::tfslope));
#endif
#ifndef M2C_CODE_EQUATE_tfpitchrate
#define M2C_CODE_EQUATE_tfpitchrate 1
static const dd ktfpitchrate = (m2c::near_offset_external(::tfpitchrate));
#endif
#ifndef M2C_CODE_EQUATE_tfdeltaprate
#define M2C_CODE_EQUATE_tfdeltaprate 1
static const dd ktfdeltaprate = (m2c::near_offset_external(::tfdeltaprate));
#endif
#ifndef M2C_CODE_EQUATE_tfgforce
#define M2C_CODE_EQUATE_tfgforce 1
static const dd ktfgforce = (m2c::near_offset_external(::tfgforce));
#endif
#ifndef M2C_CODE_EQUATE_tftrackpoint
#define M2C_CODE_EQUATE_tftrackpoint 1
static const dd ktftrackpoint = (m2c::near_offset_external(::tftrackpoint));
#endif
#ifndef M2C_CODE_EQUATE_tftgtalt
#define M2C_CODE_EQUATE_tftgtalt 1
static const dd ktftgtalt = (m2c::near_offset_external(::tftgtalt));
#endif
#ifndef M2C_CODE_EQUATE_tfalterror
#define M2C_CODE_EQUATE_tfalterror 1
static const dd ktfalterror = (m2c::near_offset_external(::tfalterror));
#endif
#ifndef M2C_CODE_EQUATE_tfdisterror
#define M2C_CODE_EQUATE_tfdisterror 1
static const dd ktfdisterror = (m2c::near_offset_external(::tfdisterror));
#endif
#ifndef M2C_CODE_EQUATE_autovias
#define M2C_CODE_EQUATE_autovias 1
static const dd kautovias = (m2c::near_offset_external(::autovias));
#endif
#ifndef M2C_CODE_EQUATE_autoviasfine
#define M2C_CODE_EQUATE_autoviasfine 1
static const dd kautoviasfine = (m2c::near_offset_external(::autoviasfine));
#endif
#ifndef M2C_CODE_EQUATE_autovtas
#define M2C_CODE_EQUATE_autovtas 1
static const dd kautovtas = (m2c::near_offset_external(::autovtas));
#endif
#ifndef M2C_CODE_EQUATE_atthrust
#define M2C_CODE_EQUATE_atthrust 1
static const dd katthrust = (m2c::near_offset_external(::atthrust));
#endif
#ifndef M2C_CODE_EQUATE_aimthrottle
#define M2C_CODE_EQUATE_aimthrottle 1
static const dd kaimthrottle = (m2c::near_offset_external(::aimthrottle));
#endif
#ifndef M2C_CODE_EQUATE_aimreheat
#define M2C_CODE_EQUATE_aimreheat 1
static const dd kaimreheat = (m2c::near_offset_external(::aimreheat));
#endif
#ifndef M2C_CODE_EQUATE_autothrot
#define M2C_CODE_EQUATE_autothrot 1
static const dd kautothrot = (m2c::near_offset_external(::autothrot));
#endif
#ifndef M2C_CODE_EQUATE_aterror
#define M2C_CODE_EQUATE_aterror 1
static const dd katerror = (m2c::near_offset_external(::aterror));
#endif
#ifndef M2C_CODE_EQUATE_playtheme
#define M2C_CODE_EQUATE_playtheme 1
static const dd kplaytheme = (m2c::near_offset_external(::playtheme));
#endif
#ifndef M2C_CODE_EQUATE_escopetoggle
#define M2C_CODE_EQUATE_escopetoggle 1
static const dd kescopetoggle = (m2c::near_offset_external(::escopetoggle));
#endif
#ifndef M2C_CODE_EQUATE_togglezrk_zsu
#define M2C_CODE_EQUATE_togglezrk_zsu 1
static const dd ktogglezrk_zsu = (m2c::near_offset_external(::togglezrk_zsu));
#endif
#ifndef M2C_CODE_EQUATE_togglefullscreen
#define M2C_CODE_EQUATE_togglefullscreen 1
static const dd ktogglefullscreen = (m2c::near_offset_external(::togglefullscreen));
#endif
#ifndef M2C_CODE_EQUATE_aaa_or_sam_value
#define M2C_CODE_EQUATE_aaa_or_sam_value 1
static const dd kaaa_or_sam_value = (m2c::near_offset_external(::aaa_or_sam_value));
#endif
#ifndef M2C_CODE_EQUATE_autohdg
#define M2C_CODE_EQUATE_autohdg 1
static const dd kautohdg = (m2c::near_offset_external(::autohdg));
#endif
#ifndef M2C_CODE_EQUATE_autohdgfine
#define M2C_CODE_EQUATE_autohdgfine 1
static const dd kautohdgfine = (m2c::near_offset_external(::autohdgfine));
#endif
#ifndef M2C_CODE_EQUATE_ahrollrate
#define M2C_CODE_EQUATE_ahrollrate 1
static const dd kahrollrate = (m2c::near_offset_external(::ahrollrate));
#endif
#ifndef M2C_CODE_EQUATE_ahdeltarrate
#define M2C_CODE_EQUATE_ahdeltarrate 1
static const dd kahdeltarrate = (m2c::near_offset_external(::ahdeltarrate));
#endif
#ifndef M2C_CODE_EQUATE_ahflag
#define M2C_CODE_EQUATE_ahflag 1
static const dd kahflag = (m2c::near_offset_external(::ahflag));
#endif
#ifndef M2C_CODE_EQUATE_aherror
#define M2C_CODE_EQUATE_aherror 1
static const dd kaherror = (m2c::near_offset_external(::aherror));
#endif
#ifndef M2C_CODE_EQUATE_autorfine
#define M2C_CODE_EQUATE_autorfine 1
static const dd kautorfine = (m2c::near_offset_external(::autorfine));
#endif
#ifndef M2C_CODE_EQUATE_aimhfine
#define M2C_CODE_EQUATE_aimhfine 1
static const dd kaimhfine = (m2c::near_offset_external(::aimhfine));
#endif
#ifndef M2C_CODE_EQUATE_errhfine
#define M2C_CODE_EQUATE_errhfine 1
static const dd kerrhfine = (m2c::near_offset_external(::errhfine));
#endif
#ifndef M2C_CODE_EQUATE_ahmaxrate
#define M2C_CODE_EQUATE_ahmaxrate 1
static const dd kahmaxrate = (m2c::near_offset_external(::ahmaxrate));
#endif
#ifndef M2C_CODE_EQUATE_ahrollval
#define M2C_CODE_EQUATE_ahrollval 1
static const dd kahrollval = (m2c::near_offset_external(::ahrollval));
#endif
#ifndef M2C_CODE_EQUATE_autoalt
#define M2C_CODE_EQUATE_autoalt 1
static const dd kautoalt = (m2c::near_offset_external(::autoalt));
#endif
#ifndef M2C_CODE_EQUATE_autoaltfine
#define M2C_CODE_EQUATE_autoaltfine 1
static const dd kautoaltfine = (m2c::near_offset_external(::autoaltfine));
#endif
#ifndef M2C_CODE_EQUATE_aapitchrate
#define M2C_CODE_EQUATE_aapitchrate 1
static const dd kaapitchrate = (m2c::near_offset_external(::aapitchrate));
#endif
#ifndef M2C_CODE_EQUATE_aadeltaprate
#define M2C_CODE_EQUATE_aadeltaprate 1
static const dd kaadeltaprate = (m2c::near_offset_external(::aadeltaprate));
#endif
#ifndef M2C_CODE_EQUATE_aagforce
#define M2C_CODE_EQUATE_aagforce 1
static const dd kaagforce = (m2c::near_offset_external(::aagforce));
#endif
#ifndef M2C_CODE_EQUATE_aaflag
#define M2C_CODE_EQUATE_aaflag 1
static const dd kaaflag = (m2c::near_offset_external(::aaflag));
#endif
#ifndef M2C_CODE_EQUATE_aaerror
#define M2C_CODE_EQUATE_aaerror 1
static const dd kaaerror = (m2c::near_offset_external(::aaerror));
#endif
#ifndef M2C_CODE_EQUATE_aimpfine
#define M2C_CODE_EQUATE_aimpfine 1
static const dd kaimpfine = (m2c::near_offset_external(::aimpfine));
#endif
#ifndef M2C_CODE_EQUATE_aaalterror
#define M2C_CODE_EQUATE_aaalterror 1
static const dd kaaalterror = (m2c::near_offset_external(::aaalterror));
#endif
#ifndef M2C_CODE_EQUATE_aadisterror
#define M2C_CODE_EQUATE_aadisterror 1
static const dd kaadisterror = (m2c::near_offset_external(::aadisterror));
#endif
#ifndef M2C_CODE_EQUATE_thetaab
#define M2C_CODE_EQUATE_thetaab 1
static const dd kthetaab = (m2c::near_offset_external(::thetaab));
#endif
#ifndef M2C_CODE_EQUATE_thetabc
#define M2C_CODE_EQUATE_thetabc 1
static const dd kthetabc = (m2c::near_offset_external(::thetabc));
#endif
#ifndef M2C_CODE_EQUATE_thetaabc
#define M2C_CODE_EQUATE_thetaabc 1
static const dd kthetaabc = (m2c::near_offset_external(::thetaabc));
#endif
#ifndef M2C_CODE_EQUATE_rturn
#define M2C_CODE_EQUATE_rturn 1
static const dd krturn = (m2c::near_offset_external(::rturn));
#endif
#ifndef M2C_CODE_EQUATE_tdist
#define M2C_CODE_EQUATE_tdist 1
static const dd ktdist = (m2c::near_offset_external(::tdist));
#endif
#ifndef M2C_CODE_EQUATE_inhibitdelay
#define M2C_CODE_EQUATE_inhibitdelay 1
static const dd kinhibitdelay = (m2c::near_offset_external(::inhibitdelay));
#endif
#ifndef M2C_CODE_EQUATE_arflag
#define M2C_CODE_EQUATE_arflag 1
static const dd karflag = (m2c::near_offset_external(::arflag));
#endif
#ifndef M2C_CODE_EQUATE_arlast
#define M2C_CODE_EQUATE_arlast 1
static const dd karlast = (m2c::near_offset_external(::arlast));
#endif
#ifndef M2C_CODE_EQUATE_tracklocked
#define M2C_CODE_EQUATE_tracklocked 1
static const dd ktracklocked = (m2c::near_offset_external(::tracklocked));
#endif
#ifndef M2C_CODE_EQUATE_oldwpptr
#define M2C_CODE_EQUATE_oldwpptr 1
static const dd koldwpptr = (m2c::near_offset_external(::oldwpptr));
#endif
#ifndef M2C_CODE_EQUATE_ilsactive
#define M2C_CODE_EQUATE_ilsactive 1
static const dd kilsactive = (m2c::near_offset_external(::ilsactive));
#endif
#ifndef M2C_CODE_EQUATE_ilsapproach
#define M2C_CODE_EQUATE_ilsapproach 1
static const dd kilsapproach = (m2c::near_offset_external(::ilsapproach));
#endif
#ifndef M2C_CODE_EQUATE_ilsrangelo
#define M2C_CODE_EQUATE_ilsrangelo 1
static const dd kilsrangelo = (m2c::near_offset_external(::ilsrangelo));
#endif
#ifndef M2C_CODE_EQUATE_ilsrangehi
#define M2C_CODE_EQUATE_ilsrangehi 1
static const dd kilsrangehi = (m2c::near_offset_external(::ilsrangehi));
#endif
#ifndef M2C_CODE_EQUATE_ilserrorlo
#define M2C_CODE_EQUATE_ilserrorlo 1
static const dd kilserrorlo = (m2c::near_offset_external(::ilserrorlo));
#endif
#ifndef M2C_CODE_EQUATE_ilserrorhi
#define M2C_CODE_EQUATE_ilserrorhi 1
static const dd kilserrorhi = (m2c::near_offset_external(::ilserrorhi));
#endif
#ifndef M2C_CODE_EQUATE_ilsmaxerror
#define M2C_CODE_EQUATE_ilsmaxerror 1
static const dd kilsmaxerror = (m2c::near_offset_external(::ilsmaxerror));
#endif
#ifndef M2C_CODE_EQUATE_ilslocalerror
#define M2C_CODE_EQUATE_ilslocalerror 1
static const dd kilslocalerror = (m2c::near_offset_external(::ilslocalerror));
#endif
#ifndef M2C_CODE_EQUATE_ilslocalpos
#define M2C_CODE_EQUATE_ilslocalpos 1
static const dd kilslocalpos = (m2c::near_offset_external(::ilslocalpos));
#endif
#ifndef M2C_CODE_EQUATE_ilsglideerror
#define M2C_CODE_EQUATE_ilsglideerror 1
static const dd kilsglideerror = (m2c::near_offset_external(::ilsglideerror));
#endif
#ifndef M2C_CODE_EQUATE_ilsglidepos
#define M2C_CODE_EQUATE_ilsglidepos 1
static const dd kilsglidepos = (m2c::near_offset_external(::ilsglidepos));
#endif
#ifndef M2C_CODE_EQUATE_ilsairfieldptr
#define M2C_CODE_EQUATE_ilsairfieldptr 1
static const dd kilsairfieldptr = (m2c::near_offset_external(::ilsairfieldptr));
#endif
#ifndef M2C_CODE_EQUATE_ilsrng
#define M2C_CODE_EQUATE_ilsrng 1
static const dd kilsrng = (m2c::near_offset_external(::ilsrng));
#endif
#ifndef M2C_CODE_EQUATE_ilsbrg
#define M2C_CODE_EQUATE_ilsbrg 1
static const dd kilsbrg = (m2c::near_offset_external(::ilsbrg));
#endif
#ifndef M2C_CODE_EQUATE_ilseta
#define M2C_CODE_EQUATE_ilseta 1
static const dd kilseta = (m2c::near_offset_external(::ilseta));
#endif
#ifndef M2C_CODE_EQUATE_apphfine
#define M2C_CODE_EQUATE_apphfine 1
static const dd kapphfine = (m2c::near_offset_external(::apphfine));
#endif
#ifndef M2C_CODE_EQUATE_appflag
#define M2C_CODE_EQUATE_appflag 1
static const dd kappflag = (m2c::near_offset_external(::appflag));
#endif
#ifndef M2C_CODE_EQUATE_applast
#define M2C_CODE_EQUATE_applast 1
static const dd kapplast = (m2c::near_offset_external(::applast));
#endif
#ifndef M2C_CODE_EQUATE_apperror
#define M2C_CODE_EQUATE_apperror 1
static const dd kapperror = (m2c::near_offset_external(::apperror));
#endif
#ifndef M2C_CODE_EQUATE_approachspeed
#define M2C_CODE_EQUATE_approachspeed 1
static const dd kapproachspeed = (m2c::near_offset_external(::approachspeed));
#endif
#ifndef M2C_CODE_EQUATE_appprogflag
#define M2C_CODE_EQUATE_appprogflag 1
static const dd kappprogflag = (m2c::near_offset_external(::appprogflag));
#endif
#ifndef M2C_CODE_EQUATE_appprogseq
#define M2C_CODE_EQUATE_appprogseq 1
static const dd kappprogseq = (m2c::near_offset_external(::appprogseq));
#endif
#ifndef M2C_CODE_EQUATE_appprogtimer
#define M2C_CODE_EQUATE_appprogtimer 1
static const dd kappprogtimer = (m2c::near_offset_external(::appprogtimer));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_9f9781f2_2710
#define M2C_CODE_EQUATE___m2c_structrow_9f9781f2_2710 1
static const dd k__m2c_structrow_9f9781f2_2710 = (m2c::near_offset_external(::__m2c_structrow_9f9781f2_2710));
#endif
#ifndef M2C_CODE_EQUATE_airradarptr
#define M2C_CODE_EQUATE_airradarptr 1
static const dd kairradarptr = (m2c::near_offset_external(::airradarptr));
#endif
#ifndef M2C_CODE_EQUATE_numradartracks
#define M2C_CODE_EQUATE_numradartracks 1
static const dd knumradartracks = (m2c::near_offset_external(::numradartracks));
#endif
#ifndef M2C_CODE_EQUATE_airradarrng
#define M2C_CODE_EQUATE_airradarrng 1
static const dd kairradarrng = (m2c::near_offset_external(::airradarrng));
#endif
#ifndef M2C_CODE_EQUATE_airradaroffset
#define M2C_CODE_EQUATE_airradaroffset 1
static const dd kairradaroffset = (m2c::near_offset_external(::airradaroffset));
#endif
#ifndef M2C_CODE_EQUATE_airradarscan
#define M2C_CODE_EQUATE_airradarscan 1
static const dd kairradarscan = (m2c::near_offset_external(::airradarscan));
#endif
#ifndef M2C_CODE_EQUATE_scansize
#define M2C_CODE_EQUATE_scansize 1
static const dd kscansize = (m2c::near_offset_external(::scansize));
#endif
#ifndef M2C_CODE_EQUATE_scanoffset
#define M2C_CODE_EQUATE_scanoffset 1
static const dd kscanoffset = (m2c::near_offset_external(::scanoffset));
#endif
#ifndef M2C_CODE_EQUATE_arad_view
#define M2C_CODE_EQUATE_arad_view 1
static const dd karad_view = (m2c::near_offset_external(::arad_view));
#endif
#ifndef M2C_CODE_EQUATE_xdivvals
#define M2C_CODE_EQUATE_xdivvals 1
static const dd kxdivvals = (m2c::near_offset_external(::xdivvals));
#endif
#ifndef M2C_CODE_EQUATE_ydivvals
#define M2C_CODE_EQUATE_ydivvals 1
static const dd kydivvals = (m2c::near_offset_external(::ydivvals));
#endif
#ifndef M2C_CODE_EQUATE_samplecntr
#define M2C_CODE_EQUATE_samplecntr 1
static const dd ksamplecntr = (m2c::near_offset_external(::samplecntr));
#endif
#ifndef M2C_CODE_EQUATE_boresighterror
#define M2C_CODE_EQUATE_boresighterror 1
static const dd kboresighterror = (m2c::near_offset_external(::boresighterror));
#endif
#ifndef M2C_CODE_EQUATE_tmpangdiff
#define M2C_CODE_EQUATE_tmpangdiff 1
static const dd ktmpangdiff = (m2c::near_offset_external(::tmpangdiff));
#endif
#ifndef M2C_CODE_EQUATE_tmpscaledrng
#define M2C_CODE_EQUATE_tmpscaledrng 1
static const dd ktmpscaledrng = (m2c::near_offset_external(::tmpscaledrng));
#endif
#ifndef M2C_CODE_EQUATE_tmpscaledcnt
#define M2C_CODE_EQUATE_tmpscaledcnt 1
static const dd ktmpscaledcnt = (m2c::near_offset_external(::tmpscaledcnt));
#endif
#ifndef M2C_CODE_EQUATE_tmpzerr
#define M2C_CODE_EQUATE_tmpzerr 1
static const dd ktmpzerr = (m2c::near_offset_external(::tmpzerr));
#endif
#ifndef M2C_CODE_EQUATE_tmpdz
#define M2C_CODE_EQUATE_tmpdz 1
static const dd ktmpdz = (m2c::near_offset_external(::tmpdz));
#endif
#ifndef M2C_CODE_EQUATE_dispairtgtrng
#define M2C_CODE_EQUATE_dispairtgtrng 1
static const dd kdispairtgtrng = (m2c::near_offset_external(::dispairtgtrng));
#endif
#ifndef M2C_CODE_EQUATE_dispairtgtalt
#define M2C_CODE_EQUATE_dispairtgtalt 1
static const dd kdispairtgtalt = (m2c::near_offset_external(::dispairtgtalt));
#endif
#ifndef M2C_CODE_EQUATE_dispairtgtvel
#define M2C_CODE_EQUATE_dispairtgtvel 1
static const dd kdispairtgtvel = (m2c::near_offset_external(::dispairtgtvel));
#endif
#ifndef M2C_CODE_EQUATE_dispairtgthdg
#define M2C_CODE_EQUATE_dispairtgthdg 1
static const dd kdispairtgthdg = (m2c::near_offset_external(::dispairtgthdg));
#endif
#ifndef M2C_CODE_EQUATE_rwr_view
#define M2C_CODE_EQUATE_rwr_view 1
static const dd krwr_view = (m2c::near_offset_external(::rwr_view));
#endif
#ifndef M2C_CODE_EQUATE_numrwrthreats
#define M2C_CODE_EQUATE_numrwrthreats 1
static const dd knumrwrthreats = (m2c::near_offset_external(::numrwrthreats));
#endif
#ifndef M2C_CODE_EQUATE_oldrwrthreats
#define M2C_CODE_EQUATE_oldrwrthreats 1
static const dd koldrwrthreats = (m2c::near_offset_external(::oldrwrthreats));
#endif
#ifndef M2C_CODE_EQUATE_activesamcntr
#define M2C_CODE_EQUATE_activesamcntr 1
static const dd kactivesamcntr = (m2c::near_offset_external(::activesamcntr));
#endif
#ifndef M2C_CODE_EQUATE_rwrthreatindex
#define M2C_CODE_EQUATE_rwrthreatindex 1
static const dd krwrthreatindex = (m2c::near_offset_external(::rwrthreatindex));
#endif
#ifndef M2C_CODE_EQUATE_rwrthreatflags
#define M2C_CODE_EQUATE_rwrthreatflags 1
static const dd krwrthreatflags = (m2c::near_offset_external(::rwrthreatflags));
#endif
#ifndef M2C_CODE_EQUATE_tmpflags
#define M2C_CODE_EQUATE_tmpflags 1
static const dd ktmpflags = (m2c::near_offset_external(::tmpflags));
#endif
#ifndef M2C_CODE_EQUATE_rwrthreats
#define M2C_CODE_EQUATE_rwrthreats 1
static const dd krwrthreats = (m2c::near_offset_external(::rwrthreats));
#endif
}
#ifndef allowsplitscreenbigmap
#define allowsplitscreenbigmap m2c::kallowsplitscreenbigmap
#endif
#ifndef splitscreenbigmapison
#define splitscreenbigmapison m2c::ksplitscreenbigmapison
#endif
#ifndef currentviewischecksix
#define currentviewischecksix m2c::kcurrentviewischecksix
#endif
#ifndef sam_launched_while_in_cockpit
#define sam_launched_while_in_cockpit m2c::ksam_launched_while_in_cockpit
#endif
#ifndef ssf_gear
#define ssf_gear m2c::kssf_gear
#endif
#ifndef ssf_wheelbrakes
#define ssf_wheelbrakes m2c::kssf_wheelbrakes
#endif
#ifndef ssf_airbrakes
#define ssf_airbrakes m2c::kssf_airbrakes
#endif
#ifndef ssf_engine1
#define ssf_engine1 m2c::kssf_engine1
#endif
#ifndef ssf_engine2
#define ssf_engine2 m2c::kssf_engine2
#endif
#ifndef ssf_sweep
#define ssf_sweep m2c::kssf_sweep
#endif
#ifndef ssf_flaps
#define ssf_flaps m2c::kssf_flaps
#endif
#ifndef ssf_thrustrvrs
#define ssf_thrustrvrs m2c::kssf_thrustrvrs
#endif
#ifndef ssf_spils
#define ssf_spils m2c::kssf_spils
#endif
#ifndef ssf_hud
#define ssf_hud m2c::kssf_hud
#endif
#ifndef ssf_pilotmfd
#define ssf_pilotmfd m2c::kssf_pilotmfd
#endif
#ifndef ssf_navigmfd
#define ssf_navigmfd m2c::kssf_navigmfd
#endif
#ifndef ssf_tab1
#define ssf_tab1 m2c::kssf_tab1
#endif
#ifndef ssf_tab2
#define ssf_tab2 m2c::kssf_tab2
#endif
#ifndef ssf_commsrx
#define ssf_commsrx m2c::kssf_commsrx
#endif
#ifndef ssf_oxygen
#define ssf_oxygen m2c::kssf_oxygen
#endif
#ifndef ssf_radar
#define ssf_radar m2c::kssf_radar
#endif
#ifndef ssf_ecm
#define ssf_ecm m2c::kssf_ecm
#endif
#ifndef ssf_rwr
#define ssf_rwr m2c::kssf_rwr
#endif
#ifndef ssf_adc
#define ssf_adc m2c::kssf_adc
#endif
#ifndef vfac
#define vfac m2c::kvfac
#endif
#ifndef counterthird
#define counterthird m2c::kcounterthird
#endif
#ifndef mfd_counter
#define mfd_counter m2c::kmfd_counter
#endif
#ifndef shiftdwaspressed
#define shiftdwaspressed m2c::kshiftdwaspressed
#endif
#ifndef trueradalt
#define trueradalt m2c::ktrueradalt
#endif
#ifndef dispradalt
#define dispradalt m2c::kdispradalt
#endif
#ifndef zrkrombcamdist
#define zrkrombcamdist m2c::kzrkrombcamdist
#endif
#ifndef yawvalue
#define yawvalue m2c::kyawvalue
#endif
#ifndef yawvalue2
#define yawvalue2 m2c::kyawvalue2
#endif
#ifndef yawvalue3
#define yawvalue3 m2c::kyawvalue3
#endif
#ifndef yawvalue_zrk_aaa
#define yawvalue_zrk_aaa m2c::kyawvalue_zrk_aaa
#endif
#ifndef horizonvalue
#define horizonvalue m2c::khorizonvalue
#endif
#ifndef horizonvalue2
#define horizonvalue2 m2c::khorizonvalue2
#endif
#ifndef horizonvalue_zrk_aaa
#define horizonvalue_zrk_aaa m2c::khorizonvalue_zrk_aaa
#endif
#ifndef horizonvalue3
#define horizonvalue3 m2c::khorizonvalue3
#endif
#ifndef horizonvalue4
#define horizonvalue4 m2c::khorizonvalue4
#endif
#ifndef horizonvalue5
#define horizonvalue5 m2c::khorizonvalue5
#endif
#ifndef horizonvalue6
#define horizonvalue6 m2c::khorizonvalue6
#endif
#ifndef checksixvalue
#define checksixvalue m2c::kchecksixvalue
#endif
#ifndef horizonbombvalue
#define horizonbombvalue m2c::khorizonbombvalue
#endif
#ifndef inweaponview
#define inweaponview m2c::kinweaponview
#endif
#ifndef cockpitviews
#define cockpitviews m2c::kcockpitviews
#endif
#ifndef gndhtdata
#define gndhtdata m2c::kgndhtdata
#endif
#ifndef gndhtdist
#define gndhtdist m2c::kgndhtdist
#endif
#ifndef tfrideindex
#define tfrideindex m2c::ktfrideindex
#endif
#ifndef tfridetable
#define tfridetable m2c::ktfridetable
#endif
#ifndef tfridealt
#define tfridealt m2c::ktfridealt
#endif
#ifndef tfauto
#define tfauto m2c::ktfauto
#endif
#ifndef tflast
#define tflast m2c::ktflast
#endif
#ifndef tferror
#define tferror m2c::ktferror
#endif
#ifndef tfbrisk
#define tfbrisk m2c::ktfbrisk
#endif
#ifndef tfpullup
#define tfpullup m2c::ktfpullup
#endif
#ifndef count1
#define count1 m2c::kcount1
#endif
#ifndef count2
#define count2 m2c::kcount2
#endif
#ifndef count3
#define count3 m2c::kcount3
#endif
#ifndef lookahead
#define lookahead m2c::klookahead
#endif
#ifndef tfslope
#define tfslope m2c::ktfslope
#endif
#ifndef tfpitchrate
#define tfpitchrate m2c::ktfpitchrate
#endif
#ifndef tfdeltaprate
#define tfdeltaprate m2c::ktfdeltaprate
#endif
#ifndef tfgforce
#define tfgforce m2c::ktfgforce
#endif
#ifndef tftrackpoint
#define tftrackpoint m2c::ktftrackpoint
#endif
#ifndef tftgtalt
#define tftgtalt m2c::ktftgtalt
#endif
#ifndef tfalterror
#define tfalterror m2c::ktfalterror
#endif
#ifndef tfdisterror
#define tfdisterror m2c::ktfdisterror
#endif
#ifndef autovias
#define autovias m2c::kautovias
#endif
#ifndef autoviasfine
#define autoviasfine m2c::kautoviasfine
#endif
#ifndef autovtas
#define autovtas m2c::kautovtas
#endif
#ifndef atthrust
#define atthrust m2c::katthrust
#endif
#ifndef aimthrottle
#define aimthrottle m2c::kaimthrottle
#endif
#ifndef aimreheat
#define aimreheat m2c::kaimreheat
#endif
#ifndef autothrot
#define autothrot m2c::kautothrot
#endif
#ifndef aterror
#define aterror m2c::katerror
#endif
#ifndef playtheme
#define playtheme m2c::kplaytheme
#endif
#ifndef escopetoggle
#define escopetoggle m2c::kescopetoggle
#endif
#ifndef togglezrk_zsu
#define togglezrk_zsu m2c::ktogglezrk_zsu
#endif
#ifndef togglefullscreen
#define togglefullscreen m2c::ktogglefullscreen
#endif
#ifndef aaa_or_sam_value
#define aaa_or_sam_value m2c::kaaa_or_sam_value
#endif
#ifndef autohdg
#define autohdg m2c::kautohdg
#endif
#ifndef autohdgfine
#define autohdgfine m2c::kautohdgfine
#endif
#ifndef ahrollrate
#define ahrollrate m2c::kahrollrate
#endif
#ifndef ahdeltarrate
#define ahdeltarrate m2c::kahdeltarrate
#endif
#ifndef ahflag
#define ahflag m2c::kahflag
#endif
#ifndef aherror
#define aherror m2c::kaherror
#endif
#ifndef autorfine
#define autorfine m2c::kautorfine
#endif
#ifndef aimhfine
#define aimhfine m2c::kaimhfine
#endif
#ifndef errhfine
#define errhfine m2c::kerrhfine
#endif
#ifndef ahmaxrate
#define ahmaxrate m2c::kahmaxrate
#endif
#ifndef ahrollval
#define ahrollval m2c::kahrollval
#endif
#ifndef autoalt
#define autoalt m2c::kautoalt
#endif
#ifndef autoaltfine
#define autoaltfine m2c::kautoaltfine
#endif
#ifndef aapitchrate
#define aapitchrate m2c::kaapitchrate
#endif
#ifndef aadeltaprate
#define aadeltaprate m2c::kaadeltaprate
#endif
#ifndef aagforce
#define aagforce m2c::kaagforce
#endif
#ifndef aaflag
#define aaflag m2c::kaaflag
#endif
#ifndef aaerror
#define aaerror m2c::kaaerror
#endif
#ifndef aimpfine
#define aimpfine m2c::kaimpfine
#endif
#ifndef aaalterror
#define aaalterror m2c::kaaalterror
#endif
#ifndef aadisterror
#define aadisterror m2c::kaadisterror
#endif
#ifndef thetaab
#define thetaab m2c::kthetaab
#endif
#ifndef thetabc
#define thetabc m2c::kthetabc
#endif
#ifndef thetaabc
#define thetaabc m2c::kthetaabc
#endif
#ifndef rturn
#define rturn m2c::krturn
#endif
#ifndef tdist
#define tdist m2c::ktdist
#endif
#ifndef inhibitdelay
#define inhibitdelay m2c::kinhibitdelay
#endif
#ifndef arflag
#define arflag m2c::karflag
#endif
#ifndef arlast
#define arlast m2c::karlast
#endif
#ifndef tracklocked
#define tracklocked m2c::ktracklocked
#endif
#ifndef oldwpptr
#define oldwpptr m2c::koldwpptr
#endif
#ifndef ilsactive
#define ilsactive m2c::kilsactive
#endif
#ifndef ilsapproach
#define ilsapproach m2c::kilsapproach
#endif
#ifndef ilsrangelo
#define ilsrangelo m2c::kilsrangelo
#endif
#ifndef ilsrangehi
#define ilsrangehi m2c::kilsrangehi
#endif
#ifndef ilserrorlo
#define ilserrorlo m2c::kilserrorlo
#endif
#ifndef ilserrorhi
#define ilserrorhi m2c::kilserrorhi
#endif
#ifndef ilsmaxerror
#define ilsmaxerror m2c::kilsmaxerror
#endif
#ifndef ilslocalerror
#define ilslocalerror m2c::kilslocalerror
#endif
#ifndef ilslocalpos
#define ilslocalpos m2c::kilslocalpos
#endif
#ifndef ilsglideerror
#define ilsglideerror m2c::kilsglideerror
#endif
#ifndef ilsglidepos
#define ilsglidepos m2c::kilsglidepos
#endif
#ifndef ilsairfieldptr
#define ilsairfieldptr m2c::kilsairfieldptr
#endif
#ifndef ilsrng
#define ilsrng m2c::kilsrng
#endif
#ifndef ilsbrg
#define ilsbrg m2c::kilsbrg
#endif
#ifndef ilseta
#define ilseta m2c::kilseta
#endif
#ifndef apphfine
#define apphfine m2c::kapphfine
#endif
#ifndef appflag
#define appflag m2c::kappflag
#endif
#ifndef applast
#define applast m2c::kapplast
#endif
#ifndef apperror
#define apperror m2c::kapperror
#endif
#ifndef approachspeed
#define approachspeed m2c::kapproachspeed
#endif
#ifndef appprogflag
#define appprogflag m2c::kappprogflag
#endif
#ifndef appprogseq
#define appprogseq m2c::kappprogseq
#endif
#ifndef appprogtimer
#define appprogtimer m2c::kappprogtimer
#endif
#ifndef __m2c_structrow_9f9781f2_2710
#define __m2c_structrow_9f9781f2_2710 m2c::k__m2c_structrow_9f9781f2_2710
#endif
#ifndef airradarptr
#define airradarptr m2c::kairradarptr
#endif
#ifndef numradartracks
#define numradartracks m2c::knumradartracks
#endif
#ifndef airradarrng
#define airradarrng m2c::kairradarrng
#endif
#ifndef airradaroffset
#define airradaroffset m2c::kairradaroffset
#endif
#ifndef airradarscan
#define airradarscan m2c::kairradarscan
#endif
#ifndef scansize
#define scansize m2c::kscansize
#endif
#ifndef scanoffset
#define scanoffset m2c::kscanoffset
#endif
#ifndef arad_view
#define arad_view m2c::karad_view
#endif
#ifndef xdivvals
#define xdivvals m2c::kxdivvals
#endif
#ifndef ydivvals
#define ydivvals m2c::kydivvals
#endif
#ifndef samplecntr
#define samplecntr m2c::ksamplecntr
#endif
#ifndef boresighterror
#define boresighterror m2c::kboresighterror
#endif
#ifndef tmpangdiff
#define tmpangdiff m2c::ktmpangdiff
#endif
#ifndef tmpscaledrng
#define tmpscaledrng m2c::ktmpscaledrng
#endif
#ifndef tmpscaledcnt
#define tmpscaledcnt m2c::ktmpscaledcnt
#endif
#ifndef tmpzerr
#define tmpzerr m2c::ktmpzerr
#endif
#ifndef tmpdz
#define tmpdz m2c::ktmpdz
#endif
#ifndef dispairtgtrng
#define dispairtgtrng m2c::kdispairtgtrng
#endif
#ifndef dispairtgtalt
#define dispairtgtalt m2c::kdispairtgtalt
#endif
#ifndef dispairtgtvel
#define dispairtgtvel m2c::kdispairtgtvel
#endif
#ifndef dispairtgthdg
#define dispairtgthdg m2c::kdispairtgthdg
#endif
#ifndef rwr_view
#define rwr_view m2c::krwr_view
#endif
#ifndef numrwrthreats
#define numrwrthreats m2c::knumrwrthreats
#endif
#ifndef oldrwrthreats
#define oldrwrthreats m2c::koldrwrthreats
#endif
#ifndef activesamcntr
#define activesamcntr m2c::kactivesamcntr
#endif
#ifndef rwrthreatindex
#define rwrthreatindex m2c::krwrthreatindex
#endif
#ifndef rwrthreatflags
#define rwrthreatflags m2c::krwrthreatflags
#endif
#ifndef tmpflags
#define tmpflags m2c::ktmpflags
#endif
#ifndef rwrthreats
#define rwrthreats m2c::krwrthreats
#endif



#endif
