#ifndef __M2C_SOUNDFX_DATA_H__
#define __M2C_SOUNDFX_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& soundon;
extern db& engsoundon;
extern db& installed;
extern db& normalised;
extern db& blstfault;
extern db& tmp1;
extern db& tmp2;
extern db& ch1priority;
extern db& ch2priority;
extern db& ch3priority;
extern db& ch1flags;
extern db& ch2flags;
extern db& ch3flags;
extern dw& ch1timer;
extern dw& ch2timer;
extern dw& ch3timer;
extern char (& speakerbin)[12];
extern char (& sblasterbin)[13];
extern char (& adlibbin)[10];
extern char (& rolandbin)[11];
extern dw& driver1seg;
extern dw& driver2seg;
extern dw& _installsound;
extern dw& dummyd1263ced_data_47_1492;
extern dw& dummyd1263ced_data_49_1493;
extern dw& dummyd1263ced_data_4b_1494;
extern dw& dummyd1263ced_data_4d_1495;
extern dw& _normalisesound;
extern dw& dummyd1263ced_data_51_1497;
extern dw& dummyd1263ced_data_53_1498;
extern dw& dummyd1263ced_data_55_1499;
extern dw& dummyd1263ced_data_57_1500;
extern dw& _suspendsound;
extern dw& dummyd1263ced_data_5b_1502;
extern dw& dummyd1263ced_data_5d_1503;
extern dw& dummyd1263ced_data_5f_1504;
extern dw& dummyd1263ced_data_61_1505;
extern dw& _refreshsound;
extern dw& dummyd1263ced_data_65_1507;
extern dw& dummyd1263ced_data_67_1508;
extern dw& dummyd1263ced_data_69_1509;
extern dw& dummyd1263ced_data_6b_1510;
extern dw& _updatesound;
extern dw& dummyd1263ced_data_6f_1512;
extern dw& dummyd1263ced_data_71_1513;
extern dw& dummyd1263ced_data_73_1514;
extern dw& dummyd1263ced_data_75_1515;
extern dw& _explosound1;
extern dw& dummyd1263ced_data_79_1517;
extern dw& dummyd1263ced_data_7b_1518;
extern dw& dummyd1263ced_data_7d_1519;
extern dw& dummyd1263ced_data_7f_1520;
extern dw& _explosound2;
extern dw& dummyd1263ced_data_83_1522;
extern dw& dummyd1263ced_data_85_1523;
extern dw& dummyd1263ced_data_87_1524;
extern dw& dummyd1263ced_data_89_1525;
extern dw& _explosound3;
extern dw& dummyd1263ced_data_8d_1527;
extern dw& dummyd1263ced_data_8f_1528;
extern dw& dummyd1263ced_data_91_1529;
extern dw& dummyd1263ced_data_93_1530;
extern dw& _screechsound;
extern dw& dummyd1263ced_data_97_1532;
extern dw& dummyd1263ced_data_99_1533;
extern dw& dummyd1263ced_data_9b_1534;
extern dw& dummyd1263ced_data_9d_1535;
extern dw& _morsedotsound;
extern dw& dummyd1263ced_data_a1_1537;
extern dw& dummyd1263ced_data_a3_1538;
extern dw& dummyd1263ced_data_a5_1539;
extern dw& dummyd1263ced_data_a7_1540;
extern dw& _morsedashsound;
extern dw& dummyd1263ced_data_ab_1542;
extern dw& dummyd1263ced_data_ad_1543;
extern dw& dummyd1263ced_data_af_1544;
extern dw& dummyd1263ced_data_b1_1545;
extern dw& _gearsound;
extern dw& dummyd1263ced_data_b5_1547;
extern dw& dummyd1263ced_data_b7_1548;
extern dw& dummyd1263ced_data_b9_1549;
extern dw& dummyd1263ced_data_bb_1550;
extern dw& _attentionsound;
extern dw& dummyd1263ced_data_bf_1552;
extern dw& dummyd1263ced_data_c1_1553;
extern dw& dummyd1263ced_data_c3_1554;
extern dw& dummyd1263ced_data_c5_1555;
extern dw& _killattnsound;
extern dw& dummyd1263ced_data_c9_1557;
extern dw& dummyd1263ced_data_cb_1558;
extern dw& dummyd1263ced_data_cd_1559;
extern dw& dummyd1263ced_data_cf_1560;
extern dw& _cannonsound;
extern dw& dummyd1263ced_data_d3_1562;
extern dw& dummyd1263ced_data_d5_1563;
extern dw& dummyd1263ced_data_d7_1564;
extern dw& dummyd1263ced_data_d9_1565;
extern dw& _launchsound;
extern dw& dummyd1263ced_data_dd_1567;
extern dw& dummyd1263ced_data_df_1568;
extern dw& dummyd1263ced_data_e1_1569;
extern dw& dummyd1263ced_data_e3_1570;
extern dw& _rwralertsound;
extern dw& dummyd1263ced_data_e7_1572;
extern dw& dummyd1263ced_data_e9_1573;
extern dw& dummyd1263ced_data_eb_1574;
extern dw& dummyd1263ced_data_ed_1575;
extern dw& _decoysound;
extern dw& dummyd1263ced_data_f1_1577;
extern dw& dummyd1263ced_data_f3_1578;
extern dw& dummyd1263ced_data_f5_1579;
extern dw& dummyd1263ced_data_f7_1580;
extern db& sndcode;

#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef rpm1
extern dw& rpm1;
#endif
#ifndef soundoption
extern db& soundoption;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef irlockflag
extern db& irlockflag;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef cockpitviews
extern db& cockpitviews;
#endif
#ifndef soundcard
extern dw& soundcard;
#endif
#ifndef rpm2
extern dw& rpm2;
#endif
#ifndef reheat
extern dw& reheat;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_installsound
#define M2C_CODE_EQUATE_installsound 1
static const dd kinstallsound = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_installnull
#define M2C_CODE_EQUATE_installnull 1
static const dd kinstallnull = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_installspkr
#define M2C_CODE_EQUATE_installspkr 1
static const dd kinstallspkr = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_installmemerr
#define M2C_CODE_EQUATE_installmemerr 1
static const dd kinstallmemerr = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_installfileerr
#define M2C_CODE_EQUATE_installfileerr 1
static const dd kinstallfileerr = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_installblst
#define M2C_CODE_EQUATE_installblst 1
static const dd kinstallblst = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_installcarderr
#define M2C_CODE_EQUATE_installcarderr 1
static const dd kinstallcarderr = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_installadlb
#define M2C_CODE_EQUATE_installadlb 1
static const dd kinstalladlb = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_installrlnd
#define M2C_CODE_EQUATE_installrlnd 1
static const dd kinstallrlnd = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_normalisesound
#define M2C_CODE_EQUATE_normalisesound 1
static const dd knormalisesound = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_normalnull
#define M2C_CODE_EQUATE_normalnull 1
static const dd knormalnull = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_normalspkr
#define M2C_CODE_EQUATE_normalspkr 1
static const dd knormalspkr = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_normalblst
#define M2C_CODE_EQUATE_normalblst 1
static const dd knormalblst = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_normaladlb
#define M2C_CODE_EQUATE_normaladlb 1
static const dd knormaladlb = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_normalrlnd
#define M2C_CODE_EQUATE_normalrlnd 1
static const dd knormalrlnd = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_suspendsound
#define M2C_CODE_EQUATE_suspendsound 1
static const dd ksuspendsound = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_suspendnull
#define M2C_CODE_EQUATE_suspendnull 1
static const dd ksuspendnull = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_suspendspkr
#define M2C_CODE_EQUATE_suspendspkr 1
static const dd ksuspendspkr = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_suspendblst
#define M2C_CODE_EQUATE_suspendblst 1
static const dd ksuspendblst = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_suspendadlb
#define M2C_CODE_EQUATE_suspendadlb 1
static const dd ksuspendadlb = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_suspendrlnd
#define M2C_CODE_EQUATE_suspendrlnd 1
static const dd ksuspendrlnd = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_resumesound
#define M2C_CODE_EQUATE_resumesound 1
static const dd kresumesound = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_refreshsound
#define M2C_CODE_EQUATE_refreshsound 1
static const dd krefreshsound = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_skipch1
#define M2C_CODE_EQUATE_skipch1 1
static const dd kskipch1 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_skipch2
#define M2C_CODE_EQUATE_skipch2 1
static const dd kskipch2 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_skipch3
#define M2C_CODE_EQUATE_skipch3 1
static const dd kskipch3 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_refreshnull
#define M2C_CODE_EQUATE_refreshnull 1
static const dd krefreshnull = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_refreshspkr
#define M2C_CODE_EQUATE_refreshspkr 1
static const dd krefreshspkr = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_refreshblst
#define M2C_CODE_EQUATE_refreshblst 1
static const dd krefreshblst = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_refreshadlb
#define M2C_CODE_EQUATE_refreshadlb 1
static const dd krefreshadlb = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_refreshrlnd
#define M2C_CODE_EQUATE_refreshrlnd 1
static const dd krefreshrlnd = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_updatesound
#define M2C_CODE_EQUATE_updatesound 1
static const dd kupdatesound = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_updatenull
#define M2C_CODE_EQUATE_updatenull 1
static const dd kupdatenull = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_updatespkr
#define M2C_CODE_EQUATE_updatespkr 1
static const dd kupdatespkr = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowlspkr
#define M2C_CODE_EQUATE_skipgrowlspkr 1
static const dd kskipgrowlspkr = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_growloffspkr
#define M2C_CODE_EQUATE_growloffspkr 1
static const dd kgrowloffspkr = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_skiprumblespkr
#define M2C_CODE_EQUATE_skiprumblespkr 1
static const dd kskiprumblespkr = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_contrumblespkr
#define M2C_CODE_EQUATE_contrumblespkr 1
static const dd kcontrumblespkr = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_engoffspkr
#define M2C_CODE_EQUATE_engoffspkr 1
static const dd kengoffspkr = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_engadjustspkr
#define M2C_CODE_EQUATE_engadjustspkr 1
static const dd kengadjustspkr = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_engokspkr
#define M2C_CODE_EQUATE_engokspkr 1
static const dd kengokspkr = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_updateblst
#define M2C_CODE_EQUATE_updateblst 1
static const dd kupdateblst = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_updateadlb
#define M2C_CODE_EQUATE_updateadlb 1
static const dd kupdateadlb = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_engoffblst
#define M2C_CODE_EQUATE_engoffblst 1
static const dd kengoffblst = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_engcontblst
#define M2C_CODE_EQUATE_engcontblst 1
static const dd kengcontblst = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_engokblst
#define M2C_CODE_EQUATE_engokblst 1
static const dd kengokblst = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_intoupdateadlb
#define M2C_CODE_EQUATE_intoupdateadlb 1
static const dd kintoupdateadlb = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_engoffadlb
#define M2C_CODE_EQUATE_engoffadlb 1
static const dd kengoffadlb = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_engadjustadlb
#define M2C_CODE_EQUATE_engadjustadlb 1
static const dd kengadjustadlb = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_zxcv
#define M2C_CODE_EQUATE_zxcv 1
static const dd kzxcv = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowladlb
#define M2C_CODE_EQUATE_skipgrowladlb 1
static const dd kskipgrowladlb = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_growloffadlb
#define M2C_CODE_EQUATE_growloffadlb 1
static const dd kgrowloffadlb = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_skiprumbleadlb
#define M2C_CODE_EQUATE_skiprumbleadlb 1
static const dd kskiprumbleadlb = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_contrumbleadlb
#define M2C_CODE_EQUATE_contrumbleadlb 1
static const dd kcontrumbleadlb = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_updaterlnd
#define M2C_CODE_EQUATE_updaterlnd 1
static const dd kupdaterlnd = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowlrlnd
#define M2C_CODE_EQUATE_skipgrowlrlnd 1
static const dd kskipgrowlrlnd = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_growloffrlnd
#define M2C_CODE_EQUATE_growloffrlnd 1
static const dd kgrowloffrlnd = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_skiprumblerlnd
#define M2C_CODE_EQUATE_skiprumblerlnd 1
static const dd kskiprumblerlnd = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_contrumblerlnd
#define M2C_CODE_EQUATE_contrumblerlnd 1
static const dd kcontrumblerlnd = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_engoffrlnd
#define M2C_CODE_EQUATE_engoffrlnd 1
static const dd kengoffrlnd = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_engadjustrlnd
#define M2C_CODE_EQUATE_engadjustrlnd 1
static const dd kengadjustrlnd = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_engokrlnd
#define M2C_CODE_EQUATE_engokrlnd 1
static const dd kengokrlnd = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_explosound1
#define M2C_CODE_EQUATE_explosound1 1
static const dd kexplosound1 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_explo1null
#define M2C_CODE_EQUATE_explo1null 1
static const dd kexplo1null = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_explo1spkr
#define M2C_CODE_EQUATE_explo1spkr 1
static const dd kexplo1spkr = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitspkr
#define M2C_CODE_EQUATE_explo1exitspkr 1
static const dd kexplo1exitspkr = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_explo1blst
#define M2C_CODE_EQUATE_explo1blst 1
static const dd kexplo1blst = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitblst
#define M2C_CODE_EQUATE_explo1exitblst 1
static const dd kexplo1exitblst = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_explo1adlb
#define M2C_CODE_EQUATE_explo1adlb 1
static const dd kexplo1adlb = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitadlb
#define M2C_CODE_EQUATE_explo1exitadlb 1
static const dd kexplo1exitadlb = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_explo1rlnd
#define M2C_CODE_EQUATE_explo1rlnd 1
static const dd kexplo1rlnd = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitrlnd
#define M2C_CODE_EQUATE_explo1exitrlnd 1
static const dd kexplo1exitrlnd = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_explosound2
#define M2C_CODE_EQUATE_explosound2 1
static const dd kexplosound2 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_explo2null
#define M2C_CODE_EQUATE_explo2null 1
static const dd kexplo2null = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_explo2spkr
#define M2C_CODE_EQUATE_explo2spkr 1
static const dd kexplo2spkr = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitspkr
#define M2C_CODE_EQUATE_explo2exitspkr 1
static const dd kexplo2exitspkr = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_explo2blst
#define M2C_CODE_EQUATE_explo2blst 1
static const dd kexplo2blst = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitblst
#define M2C_CODE_EQUATE_explo2exitblst 1
static const dd kexplo2exitblst = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_explo2adlb
#define M2C_CODE_EQUATE_explo2adlb 1
static const dd kexplo2adlb = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitadlb
#define M2C_CODE_EQUATE_explo2exitadlb 1
static const dd kexplo2exitadlb = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_explo2rlnd
#define M2C_CODE_EQUATE_explo2rlnd 1
static const dd kexplo2rlnd = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitrlnd
#define M2C_CODE_EQUATE_explo2exitrlnd 1
static const dd kexplo2exitrlnd = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_explosound3
#define M2C_CODE_EQUATE_explosound3 1
static const dd kexplosound3 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_explo3null
#define M2C_CODE_EQUATE_explo3null 1
static const dd kexplo3null = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_explo3spkr
#define M2C_CODE_EQUATE_explo3spkr 1
static const dd kexplo3spkr = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitspkr
#define M2C_CODE_EQUATE_explo3exitspkr 1
static const dd kexplo3exitspkr = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_explo3blst
#define M2C_CODE_EQUATE_explo3blst 1
static const dd kexplo3blst = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitblst
#define M2C_CODE_EQUATE_explo3exitblst 1
static const dd kexplo3exitblst = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_explo3adlb
#define M2C_CODE_EQUATE_explo3adlb 1
static const dd kexplo3adlb = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitadlb
#define M2C_CODE_EQUATE_explo3exitadlb 1
static const dd kexplo3exitadlb = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_explo3rlnd
#define M2C_CODE_EQUATE_explo3rlnd 1
static const dd kexplo3rlnd = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitrlnd
#define M2C_CODE_EQUATE_explo3exitrlnd 1
static const dd kexplo3exitrlnd = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_screechsound
#define M2C_CODE_EQUATE_screechsound 1
static const dd kscreechsound = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_screechnull
#define M2C_CODE_EQUATE_screechnull 1
static const dd kscreechnull = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_screechspkr
#define M2C_CODE_EQUATE_screechspkr 1
static const dd kscreechspkr = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_screechblst
#define M2C_CODE_EQUATE_screechblst 1
static const dd kscreechblst = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_screechadlb
#define M2C_CODE_EQUATE_screechadlb 1
static const dd kscreechadlb = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_screechrlnd
#define M2C_CODE_EQUATE_screechrlnd 1
static const dd kscreechrlnd = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_morsedotsound
#define M2C_CODE_EQUATE_morsedotsound 1
static const dd kmorsedotsound = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_morsedotnull
#define M2C_CODE_EQUATE_morsedotnull 1
static const dd kmorsedotnull = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_morsedotspkr
#define M2C_CODE_EQUATE_morsedotspkr 1
static const dd kmorsedotspkr = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_morsedotblst
#define M2C_CODE_EQUATE_morsedotblst 1
static const dd kmorsedotblst = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_morsedotadlb
#define M2C_CODE_EQUATE_morsedotadlb 1
static const dd kmorsedotadlb = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_morsedotrlnd
#define M2C_CODE_EQUATE_morsedotrlnd 1
static const dd kmorsedotrlnd = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_morsedashsound
#define M2C_CODE_EQUATE_morsedashsound 1
static const dd kmorsedashsound = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_morsedashnull
#define M2C_CODE_EQUATE_morsedashnull 1
static const dd kmorsedashnull = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_morsedashspkr
#define M2C_CODE_EQUATE_morsedashspkr 1
static const dd kmorsedashspkr = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_morsedashblst
#define M2C_CODE_EQUATE_morsedashblst 1
static const dd kmorsedashblst = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_morsedashadlb
#define M2C_CODE_EQUATE_morsedashadlb 1
static const dd kmorsedashadlb = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_morsedashrlnd
#define M2C_CODE_EQUATE_morsedashrlnd 1
static const dd kmorsedashrlnd = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_gearsound
#define M2C_CODE_EQUATE_gearsound 1
static const dd kgearsound = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_gearnull
#define M2C_CODE_EQUATE_gearnull 1
static const dd kgearnull = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_gearspkr
#define M2C_CODE_EQUATE_gearspkr 1
static const dd kgearspkr = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_gearblst
#define M2C_CODE_EQUATE_gearblst 1
static const dd kgearblst = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_gearadlb
#define M2C_CODE_EQUATE_gearadlb 1
static const dd kgearadlb = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_gearrlnd
#define M2C_CODE_EQUATE_gearrlnd 1
static const dd kgearrlnd = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_attentionsound
#define M2C_CODE_EQUATE_attentionsound 1
static const dd kattentionsound = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_attentionnull
#define M2C_CODE_EQUATE_attentionnull 1
static const dd kattentionnull = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_attentionspkr
#define M2C_CODE_EQUATE_attentionspkr 1
static const dd kattentionspkr = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_attentionblst
#define M2C_CODE_EQUATE_attentionblst 1
static const dd kattentionblst = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_attentionadlb
#define M2C_CODE_EQUATE_attentionadlb 1
static const dd kattentionadlb = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_attentionrlnd
#define M2C_CODE_EQUATE_attentionrlnd 1
static const dd kattentionrlnd = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_killattnsound
#define M2C_CODE_EQUATE_killattnsound 1
static const dd kkillattnsound = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_killattnnull
#define M2C_CODE_EQUATE_killattnnull 1
static const dd kkillattnnull = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_killattnspkr
#define M2C_CODE_EQUATE_killattnspkr 1
static const dd kkillattnspkr = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_killattnblst
#define M2C_CODE_EQUATE_killattnblst 1
static const dd kkillattnblst = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_killattnadlb
#define M2C_CODE_EQUATE_killattnadlb 1
static const dd kkillattnadlb = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_killattnrlnd
#define M2C_CODE_EQUATE_killattnrlnd 1
static const dd kkillattnrlnd = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_cannonsound
#define M2C_CODE_EQUATE_cannonsound 1
static const dd kcannonsound = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_cannonnull
#define M2C_CODE_EQUATE_cannonnull 1
static const dd kcannonnull = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_cannonspkr
#define M2C_CODE_EQUATE_cannonspkr 1
static const dd kcannonspkr = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_cannonblst
#define M2C_CODE_EQUATE_cannonblst 1
static const dd kcannonblst = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_cannonadlb
#define M2C_CODE_EQUATE_cannonadlb 1
static const dd kcannonadlb = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_cannonrlnd
#define M2C_CODE_EQUATE_cannonrlnd 1
static const dd kcannonrlnd = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_launchsound
#define M2C_CODE_EQUATE_launchsound 1
static const dd klaunchsound = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_launchnull
#define M2C_CODE_EQUATE_launchnull 1
static const dd klaunchnull = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_launchspkr
#define M2C_CODE_EQUATE_launchspkr 1
static const dd klaunchspkr = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_launchblst
#define M2C_CODE_EQUATE_launchblst 1
static const dd klaunchblst = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_launchadlb
#define M2C_CODE_EQUATE_launchadlb 1
static const dd klaunchadlb = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_launchrlnd
#define M2C_CODE_EQUATE_launchrlnd 1
static const dd klaunchrlnd = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_rwralertsound
#define M2C_CODE_EQUATE_rwralertsound 1
static const dd krwralertsound = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_rwralertnull
#define M2C_CODE_EQUATE_rwralertnull 1
static const dd krwralertnull = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_rwralertspkr
#define M2C_CODE_EQUATE_rwralertspkr 1
static const dd krwralertspkr = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_rwralertblst
#define M2C_CODE_EQUATE_rwralertblst 1
static const dd krwralertblst = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_rwralertadlb
#define M2C_CODE_EQUATE_rwralertadlb 1
static const dd krwralertadlb = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_rwralertrlnd
#define M2C_CODE_EQUATE_rwralertrlnd 1
static const dd krwralertrlnd = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_decoysound
#define M2C_CODE_EQUATE_decoysound 1
static const dd kdecoysound = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_decoynull
#define M2C_CODE_EQUATE_decoynull 1
static const dd kdecoynull = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_decoyspkr
#define M2C_CODE_EQUATE_decoyspkr 1
static const dd kdecoyspkr = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_decoyblst
#define M2C_CODE_EQUATE_decoyblst 1
static const dd kdecoyblst = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_decoyadlb
#define M2C_CODE_EQUATE_decoyadlb 1
static const dd kdecoyadlb = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_decoyrlnd
#define M2C_CODE_EQUATE_decoyrlnd 1
static const dd kdecoyrlnd = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x110d;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_soundon
#define M2C_CODE_EQUATE_soundon 1
static const dd ksoundon = (m2c::near_offset_external(::soundon));
#endif
#ifndef M2C_CODE_EQUATE_engsoundon
#define M2C_CODE_EQUATE_engsoundon 1
static const dd kengsoundon = (m2c::near_offset_external(::engsoundon));
#endif
#ifndef M2C_CODE_EQUATE_installed
#define M2C_CODE_EQUATE_installed 1
static const dd kinstalled = (m2c::near_offset_external(::installed));
#endif
#ifndef M2C_CODE_EQUATE_normalised
#define M2C_CODE_EQUATE_normalised 1
static const dd knormalised = (m2c::near_offset_external(::normalised));
#endif
#ifndef M2C_CODE_EQUATE_blstfault
#define M2C_CODE_EQUATE_blstfault 1
static const dd kblstfault = (m2c::near_offset_external(::blstfault));
#endif
#ifndef M2C_CODE_EQUATE_tmp1
#define M2C_CODE_EQUATE_tmp1 1
static const dd ktmp1 = (m2c::near_offset_external(::tmp1));
#endif
#ifndef M2C_CODE_EQUATE_tmp2
#define M2C_CODE_EQUATE_tmp2 1
static const dd ktmp2 = (m2c::near_offset_external(::tmp2));
#endif
#ifndef M2C_CODE_EQUATE_ch1priority
#define M2C_CODE_EQUATE_ch1priority 1
static const dd kch1priority = (m2c::near_offset_external(::ch1priority));
#endif
#ifndef M2C_CODE_EQUATE_ch2priority
#define M2C_CODE_EQUATE_ch2priority 1
static const dd kch2priority = (m2c::near_offset_external(::ch2priority));
#endif
#ifndef M2C_CODE_EQUATE_ch3priority
#define M2C_CODE_EQUATE_ch3priority 1
static const dd kch3priority = (m2c::near_offset_external(::ch3priority));
#endif
#ifndef M2C_CODE_EQUATE_ch1flags
#define M2C_CODE_EQUATE_ch1flags 1
static const dd kch1flags = (m2c::near_offset_external(::ch1flags));
#endif
#ifndef M2C_CODE_EQUATE_ch2flags
#define M2C_CODE_EQUATE_ch2flags 1
static const dd kch2flags = (m2c::near_offset_external(::ch2flags));
#endif
#ifndef M2C_CODE_EQUATE_ch3flags
#define M2C_CODE_EQUATE_ch3flags 1
static const dd kch3flags = (m2c::near_offset_external(::ch3flags));
#endif
#ifndef M2C_CODE_EQUATE_ch1timer
#define M2C_CODE_EQUATE_ch1timer 1
static const dd kch1timer = (m2c::near_offset_external(::ch1timer));
#endif
#ifndef M2C_CODE_EQUATE_ch2timer
#define M2C_CODE_EQUATE_ch2timer 1
static const dd kch2timer = (m2c::near_offset_external(::ch2timer));
#endif
#ifndef M2C_CODE_EQUATE_ch3timer
#define M2C_CODE_EQUATE_ch3timer 1
static const dd kch3timer = (m2c::near_offset_external(::ch3timer));
#endif
#ifndef M2C_CODE_EQUATE_speakerbin
#define M2C_CODE_EQUATE_speakerbin 1
static const dd kspeakerbin = (m2c::near_offset_external(::speakerbin));
#endif
#ifndef M2C_CODE_EQUATE_sblasterbin
#define M2C_CODE_EQUATE_sblasterbin 1
static const dd ksblasterbin = (m2c::near_offset_external(::sblasterbin));
#endif
#ifndef M2C_CODE_EQUATE_adlibbin
#define M2C_CODE_EQUATE_adlibbin 1
static const dd kadlibbin = (m2c::near_offset_external(::adlibbin));
#endif
#ifndef M2C_CODE_EQUATE_rolandbin
#define M2C_CODE_EQUATE_rolandbin 1
static const dd krolandbin = (m2c::near_offset_external(::rolandbin));
#endif
#ifndef M2C_CODE_EQUATE_driver1seg
#define M2C_CODE_EQUATE_driver1seg 1
static const dd kdriver1seg = (m2c::near_offset_external(::driver1seg));
#endif
#ifndef M2C_CODE_EQUATE_driver2seg
#define M2C_CODE_EQUATE_driver2seg 1
static const dd kdriver2seg = (m2c::near_offset_external(::driver2seg));
#endif
#ifndef M2C_CODE_EQUATE__installsound
#define M2C_CODE_EQUATE__installsound 1
static const dd k_installsound = (m2c::near_offset_external(::_installsound));
#endif
#ifndef M2C_CODE_EQUATE__normalisesound
#define M2C_CODE_EQUATE__normalisesound 1
static const dd k_normalisesound = (m2c::near_offset_external(::_normalisesound));
#endif
#ifndef M2C_CODE_EQUATE__suspendsound
#define M2C_CODE_EQUATE__suspendsound 1
static const dd k_suspendsound = (m2c::near_offset_external(::_suspendsound));
#endif
#ifndef M2C_CODE_EQUATE__refreshsound
#define M2C_CODE_EQUATE__refreshsound 1
static const dd k_refreshsound = (m2c::near_offset_external(::_refreshsound));
#endif
#ifndef M2C_CODE_EQUATE__updatesound
#define M2C_CODE_EQUATE__updatesound 1
static const dd k_updatesound = (m2c::near_offset_external(::_updatesound));
#endif
#ifndef M2C_CODE_EQUATE__explosound1
#define M2C_CODE_EQUATE__explosound1 1
static const dd k_explosound1 = (m2c::near_offset_external(::_explosound1));
#endif
#ifndef M2C_CODE_EQUATE__explosound2
#define M2C_CODE_EQUATE__explosound2 1
static const dd k_explosound2 = (m2c::near_offset_external(::_explosound2));
#endif
#ifndef M2C_CODE_EQUATE__explosound3
#define M2C_CODE_EQUATE__explosound3 1
static const dd k_explosound3 = (m2c::near_offset_external(::_explosound3));
#endif
#ifndef M2C_CODE_EQUATE__screechsound
#define M2C_CODE_EQUATE__screechsound 1
static const dd k_screechsound = (m2c::near_offset_external(::_screechsound));
#endif
#ifndef M2C_CODE_EQUATE__morsedotsound
#define M2C_CODE_EQUATE__morsedotsound 1
static const dd k_morsedotsound = (m2c::near_offset_external(::_morsedotsound));
#endif
#ifndef M2C_CODE_EQUATE__morsedashsound
#define M2C_CODE_EQUATE__morsedashsound 1
static const dd k_morsedashsound = (m2c::near_offset_external(::_morsedashsound));
#endif
#ifndef M2C_CODE_EQUATE__gearsound
#define M2C_CODE_EQUATE__gearsound 1
static const dd k_gearsound = (m2c::near_offset_external(::_gearsound));
#endif
#ifndef M2C_CODE_EQUATE__attentionsound
#define M2C_CODE_EQUATE__attentionsound 1
static const dd k_attentionsound = (m2c::near_offset_external(::_attentionsound));
#endif
#ifndef M2C_CODE_EQUATE__killattnsound
#define M2C_CODE_EQUATE__killattnsound 1
static const dd k_killattnsound = (m2c::near_offset_external(::_killattnsound));
#endif
#ifndef M2C_CODE_EQUATE__cannonsound
#define M2C_CODE_EQUATE__cannonsound 1
static const dd k_cannonsound = (m2c::near_offset_external(::_cannonsound));
#endif
#ifndef M2C_CODE_EQUATE__launchsound
#define M2C_CODE_EQUATE__launchsound 1
static const dd k_launchsound = (m2c::near_offset_external(::_launchsound));
#endif
#ifndef M2C_CODE_EQUATE__rwralertsound
#define M2C_CODE_EQUATE__rwralertsound 1
static const dd k_rwralertsound = (m2c::near_offset_external(::_rwralertsound));
#endif
#ifndef M2C_CODE_EQUATE__decoysound
#define M2C_CODE_EQUATE__decoysound 1
static const dd k_decoysound = (m2c::near_offset_external(::_decoysound));
#endif
}
#ifndef soundon
#define soundon m2c::ksoundon
#endif
#ifndef engsoundon
#define engsoundon m2c::kengsoundon
#endif
#ifndef installed
#define installed m2c::kinstalled
#endif
#ifndef normalised
#define normalised m2c::knormalised
#endif
#ifndef blstfault
#define blstfault m2c::kblstfault
#endif
#ifndef tmp1
#define tmp1 m2c::ktmp1
#endif
#ifndef tmp2
#define tmp2 m2c::ktmp2
#endif
#ifndef ch1priority
#define ch1priority m2c::kch1priority
#endif
#ifndef ch2priority
#define ch2priority m2c::kch2priority
#endif
#ifndef ch3priority
#define ch3priority m2c::kch3priority
#endif
#ifndef ch1flags
#define ch1flags m2c::kch1flags
#endif
#ifndef ch2flags
#define ch2flags m2c::kch2flags
#endif
#ifndef ch3flags
#define ch3flags m2c::kch3flags
#endif
#ifndef ch1timer
#define ch1timer m2c::kch1timer
#endif
#ifndef ch2timer
#define ch2timer m2c::kch2timer
#endif
#ifndef ch3timer
#define ch3timer m2c::kch3timer
#endif
#ifndef speakerbin
#define speakerbin m2c::kspeakerbin
#endif
#ifndef sblasterbin
#define sblasterbin m2c::ksblasterbin
#endif
#ifndef adlibbin
#define adlibbin m2c::kadlibbin
#endif
#ifndef rolandbin
#define rolandbin m2c::krolandbin
#endif
#ifndef driver1seg
#define driver1seg m2c::kdriver1seg
#endif
#ifndef driver2seg
#define driver2seg m2c::kdriver2seg
#endif
#ifndef _installsound
#define _installsound m2c::k_installsound
#endif
#ifndef _normalisesound
#define _normalisesound m2c::k_normalisesound
#endif
#ifndef _suspendsound
#define _suspendsound m2c::k_suspendsound
#endif
#ifndef _refreshsound
#define _refreshsound m2c::k_refreshsound
#endif
#ifndef _updatesound
#define _updatesound m2c::k_updatesound
#endif
#ifndef _explosound1
#define _explosound1 m2c::k_explosound1
#endif
#ifndef _explosound2
#define _explosound2 m2c::k_explosound2
#endif
#ifndef _explosound3
#define _explosound3 m2c::k_explosound3
#endif
#ifndef _screechsound
#define _screechsound m2c::k_screechsound
#endif
#ifndef _morsedotsound
#define _morsedotsound m2c::k_morsedotsound
#endif
#ifndef _morsedashsound
#define _morsedashsound m2c::k_morsedashsound
#endif
#ifndef _gearsound
#define _gearsound m2c::k_gearsound
#endif
#ifndef _attentionsound
#define _attentionsound m2c::k_attentionsound
#endif
#ifndef _killattnsound
#define _killattnsound m2c::k_killattnsound
#endif
#ifndef _cannonsound
#define _cannonsound m2c::k_cannonsound
#endif
#ifndef _launchsound
#define _launchsound m2c::k_launchsound
#endif
#ifndef _rwralertsound
#define _rwralertsound m2c::k_rwralertsound
#endif
#ifndef _decoysound
#define _decoysound m2c::k_decoysound
#endif



#endif
