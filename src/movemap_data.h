#ifndef __M2C_MOVEMAP_DATA_H__
#define __M2C_MOVEMAP_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern viewpoint& map_view;
extern viewport& vp;
extern viewport& vp_full;
extern dw& disptype;
extern dw& zoom;
extern dw& origin;
extern dw (& dummy0ad3155d_data_2c_2456)[2];
extern dw (& dummy0ad3155d_data_30_2457)[2];
extern dw (& dummy0ad3155d_data_34_2458)[2];
extern dw (& dummy0ad3155d_data_38_2459)[2];
extern dw (& dummy0ad3155d_data_3c_2460)[2];
extern dw (& dummy0ad3155d_data_40_2461)[2];
extern dw (& dummy0ad3155d_data_44_2471)[2];
extern dw (& dummy0ad3155d_data_48_2472)[2];
extern dw (& dummy0ad3155d_data_4c_2473)[2];
extern dw (& dummy0ad3155d_data_50_2474)[2];
extern dw (& dummy0ad3155d_data_54_2475)[2];
extern dw (& dummy0ad3155d_data_58_2476)[2];
extern dw& radarrange;
extern db& gndradar;
extern db& quadtested;
extern db& quadresult;
extern db& quadmask;
extern dw& currentwpx;
extern dw& currentwpy;
extern dw& floatwpx;
extern dw& floatwpy;
extern dw& acdatumx;
extern dw& acdatumy;
extern dw& scansize;
extern dw& scanoffset;
extern db (& sctrscale)[2];
extern dw (& dispsizetablehalf)[2];
extern dw (& dummy0ad3155d_data_78_2535)[2];
extern dw (& dummy0ad3155d_data_7c_2536)[2];
extern dw (& dispsizetablefull)[2];
extern dw (& dummy0ad3155d_data_84_2538)[2];
extern dw (& dummy0ad3155d_data_88_2539)[2];
extern dw& dispdatatable;
extern dw& dummy0ad3155d_data_8e_2545;
extern dw& dummy0ad3155d_data_90_2546;
extern dw& dummy0ad3155d_data_92_2547;
extern db (& dummy0ad3155d_data_94_2555)[4];
extern db (& dummy0ad3155d_data_98_2556)[4];
extern db (& dummy0ad3155d_data_9c_2557)[4];
extern db (& dummy0ad3155d_data_a0_2558)[4];
extern db (& dummy0ad3155d_data_a4_2559)[4];
extern db (& dummy0ad3155d_data_a8_2560)[4];
extern db (& dummy0ad3155d_data_ac_2564)[4];
extern db (& dummy0ad3155d_data_b0_2565)[4];
extern db (& dummy0ad3155d_data_b4_2566)[4];
extern db (& dummy0ad3155d_data_b8_2567)[4];
extern db (& dummy0ad3155d_data_bc_2568)[4];
extern db (& dummy0ad3155d_data_c0_2569)[4];
extern db (& dummy0ad3155d_data_c4_2573)[4];
extern db (& dummy0ad3155d_data_c8_2574)[4];
extern db (& dummy0ad3155d_data_cc_2575)[4];
extern db (& dummy0ad3155d_data_d0_2576)[4];
extern db (& dummy0ad3155d_data_d4_2577)[4];
extern db (& dummy0ad3155d_data_d8_2578)[4];
extern db (& dummy0ad3155d_data_dc_2582)[4];
extern db (& dummy0ad3155d_data_e0_2583)[4];
extern db (& dummy0ad3155d_data_e4_2584)[4];
extern db (& dummy0ad3155d_data_e8_2585)[4];
extern db (& dummy0ad3155d_data_ec_2586)[4];
extern db (& dummy0ad3155d_data_f0_2587)[4];
extern dw& xgrid;
extern dw& ygrid;
extern dw& xsecref;
extern dw& ysecref;
extern dw& xsec;
extern dw& ysec;
extern dw (& roadendtable)[2];
extern dw (& dummy0ad3155d_data_104_2614)[2];
extern dw (& dummy0ad3155d_data_108_2615)[2];
extern dw (& dummy0ad3155d_data_10c_2616)[2];
extern dw (& dummy0ad3155d_data_110_2617)[2];
extern dw (& dummy0ad3155d_data_114_2618)[2];
extern dw (& dummy0ad3155d_data_118_2619)[2];
extern dw (& dummy0ad3155d_data_11c_2620)[2];
extern dw (& railendtable)[2];
extern dw (& dummy0ad3155d_data_124_2628)[2];
extern dw (& dummy0ad3155d_data_128_2629)[2];
extern dw (& dummy0ad3155d_data_12c_2630)[2];
extern dw (& dummy0ad3155d_data_130_2631)[2];
extern dw (& dummy0ad3155d_data_134_2632)[2];
extern dw (& dummy0ad3155d_data_138_2633)[2];
extern dw (& dummy0ad3155d_data_13c_2634)[2];
extern dw& nodex;
extern dw& nodey;
extern db& gndobjectcol;
extern word& mfdbaseorgtable;
extern word& tabbaseorgtable;
extern byte& mfdtable;
extern byte& tabtable;
extern byte& halftable;
extern byte& fulltable;
extern db& featobj1;
extern db& secdata1;
extern db& msecdata1;
extern db& pancode;
extern db& vertexloop1;
extern db& dummy0ad3155d_pancode_146_3365;
extern db& dummy0ad3155d_pancode_147_3377;
extern db& dummy0ad3155d_pancode_148_3723;
extern db& dummy0ad3155d_pancode_149_3729;
extern db& dummy0ad3155d_pancode_14a_3734;
extern db& vertexloop2;
extern db& dummy0ad3155d_pancode_14c_4434;
extern db& dummy0ad3155d_pancode_14d_4446;

#ifndef featurelayer1
extern db& featurelayer1;
#endif
#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef hillfacelist1
extern db& hillfacelist1;
#endif
#ifndef airfieldtable
extern dw& airfieldtable;
#endif
#ifndef roadlayer1
extern db& roadlayer1;
#endif
#ifndef hillfacelist0
extern db& hillfacelist0;
#endif
#ifndef hilllayer6
extern db& hilllayer6;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef roadlayer3
extern db& roadlayer3;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef mobilelayer1
extern db& mobilelayer1;
#endif
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef hilllayer4
extern db& hilllayer4;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef hilllayer8
extern db& hilllayer8;
#endif
#ifndef riverlayer1
extern db& riverlayer1;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef col1
extern db& col1;
#endif
#ifndef floatwp
extern waypoint& floatwp;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef waytotal
extern dw& waytotal;
#endif
#ifndef hillfacelist5
extern db& hillfacelist5;
#endif
#ifndef raillayer1
extern db& raillayer1;
#endif
#ifndef hillfacelist4
extern db& hillfacelist4;
#endif
#ifndef mobsectortable
extern dw& mobsectortable;
#endif
#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef nomansland
extern db& nomansland;
#endif
#ifndef m_mobile
extern dw& m_mobile;
#endif
#ifndef splitscreenbigmapison
extern db& splitscreenbigmapison;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef towntable
extern dw& towntable;
#endif
#ifndef hilllayer3
extern db& hilllayer3;
#endif
#ifndef escopetoggle
extern db& escopetoggle;
#endif
#ifndef hillfacelist7
extern db& hillfacelist7;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef featuretable
extern dw& featuretable;
#endif
#ifndef roadlayer4
extern db& roadlayer4;
#endif
#ifndef sectorlayer1
extern db& sectorlayer1;
#endif
#ifndef hilllayer2
extern db& hilllayer2;
#endif
#ifndef hillfacelist6
extern db& hillfacelist6;
#endif
#ifndef roadlayer2
extern db& roadlayer2;
#endif
#ifndef hilllayer9
extern db& hilllayer9;
#endif
#ifndef hilllayer5
extern db& hilllayer5;
#endif
#ifndef hilllayer7
extern db& hilllayer7;
#endif
#ifndef rivertable
extern dw& rivertable;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
#ifndef hilllayer1
extern db& hilllayer1;
#endif
#ifndef hillfacelist2
extern db& hillfacelist2;
#endif
#ifndef hillfacelist3
extern db& hillfacelist3;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_updatemovingmap
#define M2C_CODE_EQUATE_updatemovingmap 1
static const dd kupdatemovingmap = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop
#define M2C_CODE_EQUATE_scanyloop 1
static const dd kscanyloop = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop
#define M2C_CODE_EQUATE_scanxloop 1
static const dd kscanxloop = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_skipsector
#define M2C_CODE_EQUATE_skipsector 1
static const dd kskipsector = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_frankie_1
#define M2C_CODE_EQUATE_frankie_1 1
static const dd kfrankie_1 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_hopstepleap2
#define M2C_CODE_EQUATE_hopstepleap2 1
static const dd khopstepleap2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_check2
#define M2C_CODE_EQUATE_check2 1
static const dd kcheck2 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_assign096
#define M2C_CODE_EQUATE_assign096 1
static const dd kassign096 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_frankie_6
#define M2C_CODE_EQUATE_frankie_6 1
static const dd kfrankie_6 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_sortdisp
#define M2C_CODE_EQUATE_sortdisp 1
static const dd ksortdisp = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skipscaleup
#define M2C_CODE_EQUATE_skipscaleup 1
static const dd kskipscaleup = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_frankie_4
#define M2C_CODE_EQUATE_frankie_4 1
static const dd kfrankie_4 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_frankie_7
#define M2C_CODE_EQUATE_frankie_7 1
static const dd kfrankie_7 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_frankie_5
#define M2C_CODE_EQUATE_frankie_5 1
static const dd kfrankie_5 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_frankie_8
#define M2C_CODE_EQUATE_frankie_8 1
static const dd kfrankie_8 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_drawnextroad
#define M2C_CODE_EQUATE_drawnextroad 1
static const dd kdrawnextroad = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_skiproad
#define M2C_CODE_EQUATE_skiproad 1
static const dd kskiproad = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_exitrailways
#define M2C_CODE_EQUATE_exitrailways 1
static const dd kexitrailways = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_drawnextrail
#define M2C_CODE_EQUATE_drawnextrail 1
static const dd kdrawnextrail = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_skiprail
#define M2C_CODE_EQUATE_skiprail 1
static const dd kskiprail = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_exitrivers
#define M2C_CODE_EQUATE_exitrivers 1
static const dd kexitrivers = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_intofeatures
#define M2C_CODE_EQUATE_intofeatures 1
static const dd kintofeatures = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_pancode_0_proc
#define M2C_CODE_EQUATE_pancode_0_proc 1
static const dd kpancode_0_proc = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_exitfeatures1
#define M2C_CODE_EQUATE_exitfeatures1 1
static const dd kexitfeatures1 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex1
#define M2C_CODE_EQUATE_skipvertex1 1
static const dd kskipvertex1 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_contfeatures
#define M2C_CODE_EQUATE_contfeatures 1
static const dd kcontfeatures = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_exitfeatures2
#define M2C_CODE_EQUATE_exitfeatures2 1
static const dd kexitfeatures2 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_sortline
#define M2C_CODE_EQUATE_sortline 1
static const dd ksortline = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_pancode_3_proc
#define M2C_CODE_EQUATE_pancode_3_proc 1
static const dd kpancode_3_proc = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_exithills
#define M2C_CODE_EQUATE_exithills 1
static const dd kexithills = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_skipface0
#define M2C_CODE_EQUATE_skipface0 1
static const dd kskipface0 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_skipface1
#define M2C_CODE_EQUATE_skipface1 1
static const dd kskipface1 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_skipface2
#define M2C_CODE_EQUATE_skipface2 1
static const dd kskipface2 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_skipface3
#define M2C_CODE_EQUATE_skipface3 1
static const dd kskipface3 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_skipface4
#define M2C_CODE_EQUATE_skipface4 1
static const dd kskipface4 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_skipface5
#define M2C_CODE_EQUATE_skipface5 1
static const dd kskipface5 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_skipface6
#define M2C_CODE_EQUATE_skipface6 1
static const dd kskipface6 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_skipface7
#define M2C_CODE_EQUATE_skipface7 1
static const dd kskipface7 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_exitgndobjects
#define M2C_CODE_EQUATE_exitgndobjects 1
static const dd kexitgndobjects = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_scangndobjects
#define M2C_CODE_EQUATE_scangndobjects 1
static const dd kscangndobjects = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_exitcurrentwp
#define M2C_CODE_EQUATE_exitcurrentwp 1
static const dd kexitcurrentwp = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_frankie_9
#define M2C_CODE_EQUATE_frankie_9 1
static const dd kfrankie_9 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_exitfloatwp
#define M2C_CODE_EQUATE_exitfloatwp 1
static const dd kexitfloatwp = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_frankie_10
#define M2C_CODE_EQUATE_frankie_10 1
static const dd kfrankie_10 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_exitacdatum
#define M2C_CODE_EQUATE_exitacdatum 1
static const dd kexitacdatum = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_frankie_11
#define M2C_CODE_EQUATE_frankie_11 1
static const dd kfrankie_11 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_exitstatmobs
#define M2C_CODE_EQUATE_exitstatmobs 1
static const dd kexitstatmobs = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_scanstatmobs
#define M2C_CODE_EQUATE_scanstatmobs 1
static const dd kscanstatmobs = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_skipstatic2
#define M2C_CODE_EQUATE_skipstatic2 1
static const dd kskipstatic2 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_skipstatic1
#define M2C_CODE_EQUATE_skipstatic1 1
static const dd kskipstatic1 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_exitmobiles
#define M2C_CODE_EQUATE_exitmobiles 1
static const dd kexitmobiles = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_scanmobiles
#define M2C_CODE_EQUATE_scanmobiles 1
static const dd kscanmobiles = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_skipmobile
#define M2C_CODE_EQUATE_skipmobile 1
static const dd kskipmobile = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_shadowloop
#define M2C_CODE_EQUATE_shadowloop 1
static const dd kshadowloop = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_radarnonvis
#define M2C_CODE_EQUATE_radarnonvis 1
static const dd kradarnonvis = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_radarvis
#define M2C_CODE_EQUATE_radarvis 1
static const dd kradarvis = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_exitspecials
#define M2C_CODE_EQUATE_exitspecials 1
static const dd kexitspecials = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_drawtaxiways
#define M2C_CODE_EQUATE_drawtaxiways 1
static const dd kdrawtaxiways = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_nextrunway
#define M2C_CODE_EQUATE_nextrunway 1
static const dd knextrunway = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_exitrunways
#define M2C_CODE_EQUATE_exitrunways 1
static const dd kexitrunways = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_skiprunway
#define M2C_CODE_EQUATE_skiprunway 1
static const dd kskiprunway = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_drawtownroads
#define M2C_CODE_EQUATE_drawtownroads 1
static const dd kdrawtownroads = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_pancode_6_proc
#define M2C_CODE_EQUATE_pancode_6_proc 1
static const dd kpancode_6_proc = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_skipnetwork
#define M2C_CODE_EQUATE_skipnetwork 1
static const dd kskipnetwork = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_contnetwork
#define M2C_CODE_EQUATE_contnetwork 1
static const dd kcontnetwork = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_exitnetwork
#define M2C_CODE_EQUATE_exitnetwork 1
static const dd kexitnetwork = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_nextlineface
#define M2C_CODE_EQUATE_nextlineface 1
static const dd knextlineface = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_pancode_9_proc
#define M2C_CODE_EQUATE_pancode_9_proc 1
static const dd kpancode_9_proc = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_exitmapborder
#define M2C_CODE_EQUATE_exitmapborder 1
static const dd kexitmapborder = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_drawmapborder
#define M2C_CODE_EQUATE_drawmapborder 1
static const dd kdrawmapborder = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_frankie_12
#define M2C_CODE_EQUATE_frankie_12 1
static const dd kfrankie_12 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_frankie_13
#define M2C_CODE_EQUATE_frankie_13 1
static const dd kfrankie_13 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_frankie_14
#define M2C_CODE_EQUATE_frankie_14 1
static const dd kfrankie_14 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_hdotloop
#define M2C_CODE_EQUATE_hdotloop 1
static const dd khdotloop = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_vdotloop
#define M2C_CODE_EQUATE_vdotloop 1
static const dd kvdotloop = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10bd;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_map_view
#define M2C_CODE_EQUATE_map_view 1
static const dd kmap_view = (m2c::near_offset_external(::map_view));
#endif
#ifndef M2C_CODE_EQUATE_vp
#define M2C_CODE_EQUATE_vp 1
static const dd kvp = (m2c::near_offset_external(::vp));
#endif
#ifndef M2C_CODE_EQUATE_vp_full
#define M2C_CODE_EQUATE_vp_full 1
static const dd kvp_full = (m2c::near_offset_external(::vp_full));
#endif
#ifndef M2C_CODE_EQUATE_disptype
#define M2C_CODE_EQUATE_disptype 1
static const dd kdisptype = (m2c::near_offset_external(::disptype));
#endif
#ifndef M2C_CODE_EQUATE_zoom
#define M2C_CODE_EQUATE_zoom 1
static const dd kzoom = (m2c::near_offset_external(::zoom));
#endif
#ifndef M2C_CODE_EQUATE_origin
#define M2C_CODE_EQUATE_origin 1
static const dd korigin = (m2c::near_offset_external(::origin));
#endif
#ifndef M2C_CODE_EQUATE_radarrange
#define M2C_CODE_EQUATE_radarrange 1
static const dd kradarrange = (m2c::near_offset_external(::radarrange));
#endif
#ifndef M2C_CODE_EQUATE_gndradar
#define M2C_CODE_EQUATE_gndradar 1
static const dd kgndradar = (m2c::near_offset_external(::gndradar));
#endif
#ifndef M2C_CODE_EQUATE_quadtested
#define M2C_CODE_EQUATE_quadtested 1
static const dd kquadtested = (m2c::near_offset_external(::quadtested));
#endif
#ifndef M2C_CODE_EQUATE_quadresult
#define M2C_CODE_EQUATE_quadresult 1
static const dd kquadresult = (m2c::near_offset_external(::quadresult));
#endif
#ifndef M2C_CODE_EQUATE_quadmask
#define M2C_CODE_EQUATE_quadmask 1
static const dd kquadmask = (m2c::near_offset_external(::quadmask));
#endif
#ifndef M2C_CODE_EQUATE_currentwpx
#define M2C_CODE_EQUATE_currentwpx 1
static const dd kcurrentwpx = (m2c::near_offset_external(::currentwpx));
#endif
#ifndef M2C_CODE_EQUATE_currentwpy
#define M2C_CODE_EQUATE_currentwpy 1
static const dd kcurrentwpy = (m2c::near_offset_external(::currentwpy));
#endif
#ifndef M2C_CODE_EQUATE_floatwpx
#define M2C_CODE_EQUATE_floatwpx 1
static const dd kfloatwpx = (m2c::near_offset_external(::floatwpx));
#endif
#ifndef M2C_CODE_EQUATE_floatwpy
#define M2C_CODE_EQUATE_floatwpy 1
static const dd kfloatwpy = (m2c::near_offset_external(::floatwpy));
#endif
#ifndef M2C_CODE_EQUATE_acdatumx
#define M2C_CODE_EQUATE_acdatumx 1
static const dd kacdatumx = (m2c::near_offset_external(::acdatumx));
#endif
#ifndef M2C_CODE_EQUATE_acdatumy
#define M2C_CODE_EQUATE_acdatumy 1
static const dd kacdatumy = (m2c::near_offset_external(::acdatumy));
#endif
#ifndef M2C_CODE_EQUATE_scansize
#define M2C_CODE_EQUATE_scansize 1
static const dd kscansize = (m2c::near_offset_external(::scansize));
#endif
#ifndef M2C_CODE_EQUATE_scanoffset
#define M2C_CODE_EQUATE_scanoffset 1
static const dd kscanoffset = (m2c::near_offset_external(::scanoffset));
#endif
#ifndef M2C_CODE_EQUATE_sctrscale
#define M2C_CODE_EQUATE_sctrscale 1
static const dd ksctrscale = (m2c::near_offset_external(::sctrscale));
#endif
#ifndef M2C_CODE_EQUATE_dispsizetablehalf
#define M2C_CODE_EQUATE_dispsizetablehalf 1
static const dd kdispsizetablehalf = (m2c::near_offset_external(::dispsizetablehalf));
#endif
#ifndef M2C_CODE_EQUATE_dispsizetablefull
#define M2C_CODE_EQUATE_dispsizetablefull 1
static const dd kdispsizetablefull = (m2c::near_offset_external(::dispsizetablefull));
#endif
#ifndef M2C_CODE_EQUATE_dispdatatable
#define M2C_CODE_EQUATE_dispdatatable 1
static const dd kdispdatatable = (m2c::near_offset_external(::dispdatatable));
#endif
#ifndef M2C_CODE_EQUATE_xgrid
#define M2C_CODE_EQUATE_xgrid 1
static const dd kxgrid = (m2c::near_offset_external(::xgrid));
#endif
#ifndef M2C_CODE_EQUATE_ygrid
#define M2C_CODE_EQUATE_ygrid 1
static const dd kygrid = (m2c::near_offset_external(::ygrid));
#endif
#ifndef M2C_CODE_EQUATE_xsecref
#define M2C_CODE_EQUATE_xsecref 1
static const dd kxsecref = (m2c::near_offset_external(::xsecref));
#endif
#ifndef M2C_CODE_EQUATE_ysecref
#define M2C_CODE_EQUATE_ysecref 1
static const dd kysecref = (m2c::near_offset_external(::ysecref));
#endif
#ifndef M2C_CODE_EQUATE_xsec
#define M2C_CODE_EQUATE_xsec 1
static const dd kxsec = (m2c::near_offset_external(::xsec));
#endif
#ifndef M2C_CODE_EQUATE_ysec
#define M2C_CODE_EQUATE_ysec 1
static const dd kysec = (m2c::near_offset_external(::ysec));
#endif
#ifndef M2C_CODE_EQUATE_roadendtable
#define M2C_CODE_EQUATE_roadendtable 1
static const dd kroadendtable = (m2c::near_offset_external(::roadendtable));
#endif
#ifndef M2C_CODE_EQUATE_railendtable
#define M2C_CODE_EQUATE_railendtable 1
static const dd krailendtable = (m2c::near_offset_external(::railendtable));
#endif
#ifndef M2C_CODE_EQUATE_nodex
#define M2C_CODE_EQUATE_nodex 1
static const dd knodex = (m2c::near_offset_external(::nodex));
#endif
#ifndef M2C_CODE_EQUATE_nodey
#define M2C_CODE_EQUATE_nodey 1
static const dd knodey = (m2c::near_offset_external(::nodey));
#endif
#ifndef M2C_CODE_EQUATE_gndobjectcol
#define M2C_CODE_EQUATE_gndobjectcol 1
static const dd kgndobjectcol = (m2c::near_offset_external(::gndobjectcol));
#endif
}
#ifndef map_view
#define map_view m2c::kmap_view
#endif
#ifndef vp
#define vp m2c::kvp
#endif
#ifndef vp_full
#define vp_full m2c::kvp_full
#endif
#ifndef disptype
#define disptype m2c::kdisptype
#endif
#ifndef zoom
#define zoom m2c::kzoom
#endif
#ifndef origin
#define origin m2c::korigin
#endif
#ifndef radarrange
#define radarrange m2c::kradarrange
#endif
#ifndef gndradar
#define gndradar m2c::kgndradar
#endif
#ifndef quadtested
#define quadtested m2c::kquadtested
#endif
#ifndef quadresult
#define quadresult m2c::kquadresult
#endif
#ifndef quadmask
#define quadmask m2c::kquadmask
#endif
#ifndef currentwpx
#define currentwpx m2c::kcurrentwpx
#endif
#ifndef currentwpy
#define currentwpy m2c::kcurrentwpy
#endif
#ifndef floatwpx
#define floatwpx m2c::kfloatwpx
#endif
#ifndef floatwpy
#define floatwpy m2c::kfloatwpy
#endif
#ifndef acdatumx
#define acdatumx m2c::kacdatumx
#endif
#ifndef acdatumy
#define acdatumy m2c::kacdatumy
#endif
#ifndef scansize
#define scansize m2c::kscansize
#endif
#ifndef scanoffset
#define scanoffset m2c::kscanoffset
#endif
#ifndef sctrscale
#define sctrscale m2c::ksctrscale
#endif
#ifndef dispsizetablehalf
#define dispsizetablehalf m2c::kdispsizetablehalf
#endif
#ifndef dispsizetablefull
#define dispsizetablefull m2c::kdispsizetablefull
#endif
#ifndef dispdatatable
#define dispdatatable m2c::kdispdatatable
#endif
#ifndef xgrid
#define xgrid m2c::kxgrid
#endif
#ifndef ygrid
#define ygrid m2c::kygrid
#endif
#ifndef xsecref
#define xsecref m2c::kxsecref
#endif
#ifndef ysecref
#define ysecref m2c::kysecref
#endif
#ifndef xsec
#define xsec m2c::kxsec
#endif
#ifndef ysec
#define ysec m2c::kysec
#endif
#ifndef roadendtable
#define roadendtable m2c::kroadendtable
#endif
#ifndef railendtable
#define railendtable m2c::krailendtable
#endif
#ifndef nodex
#define nodex m2c::knodex
#endif
#ifndef nodey
#define nodey m2c::knodey
#endif
#ifndef gndobjectcol
#define gndobjectcol m2c::kgndobjectcol
#endif



#endif
