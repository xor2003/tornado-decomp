#ifndef __M2C_CLOUDS_DATA_H__
#define __M2C_CLOUDS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& cloudsenabled)[2];
extern dw& cloudmode;
extern dd& cloudbase;
extern dw& clouddepth;
extern dd& cloudtop;
extern dd& abs_delta_zft;
extern db (& cloudnum)[2];
extern dw& calcsctrcentre;
extern dw& dummy4150369b_data_16_676;
extern dw& dummy4150369b_data_18_677;
extern dw& dummy4150369b_data_1a_678;
extern dw& scanvertexlist;
extern dw& dummy4150369b_data_1e_680;
extern dw& dummy4150369b_data_20_681;
extern dw& dummy4150369b_data_22_682;
extern dw& cloud1cyclic;
extern dw& dummy4150369b_data_26_686;
extern dw& dummy4150369b_data_28_687;
extern dw& cloud2cyclic;
extern dw& dummy4150369b_data_2c_691;
extern dw& dummy4150369b_data_2e_692;
extern dw& facecyclic;
extern dw& facedraw;
extern dw& dummy4150369b_data_34_695;
extern dw& rvrsfacedraw;
extern dw& dummy4150369b_data_38_697;
extern dw& _zscaled;
extern dw& _xe01;
extern dw& _ye01;
extern dw& _ze01;
extern dw& _xe02;
extern dw& _ye02;
extern dw& _ze02;
extern dw& _xe08;
extern dw& _ye08;
extern dw& _ze08;
extern dw& _xe016;
extern dw& _ye016;
extern dw& _ze016;
extern db& featobj1;
extern db& viscode;
extern db& dummy4150369b_viscode_54_1087;
extern db& vertexloop1;
extern db& dummy4150369b_viscode_56_1476;
extern db& dummy4150369b_viscode_57_1484;
extern db& vertexloop2;
extern db& dummy4150369b_viscode_59_1525;
extern db& dummy4150369b_viscode_5a_1533;
extern db& vertexloop8;
extern db& dummy4150369b_viscode_5c_1577;
extern db& dummy4150369b_viscode_5d_1585;
extern db& vertexloop16;
extern db& dummy4150369b_viscode_5f_1635;
extern db& dummy4150369b_viscode_60_1643;

#ifndef xrel2
extern dw& xrel2;
#endif
#ifndef ypos8
extern dw& ypos8;
#endif
#ifndef secscancnt2
extern dw& secscancnt2;
#endif
#ifndef xpos2
extern dw& xpos2;
#endif
#ifndef zsx
extern dw& zsx;
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
#ifndef xrel8
extern dw& xrel8;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef secscanoff2
extern dw& secscanoff2;
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
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef yrel16
extern dw& yrel16;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef xpos8
extern dw& xpos8;
#endif
#ifndef cloudtable
extern dw& cloudtable;
#endif
#ifndef ygrid2
extern dw& ygrid2;
#endif
#ifndef xgrid1
extern dw& xgrid1;
#endif
#ifndef yrel2
extern dw& yrel2;
#endif
#ifndef col1
extern db& col1;
#endif
#ifndef xrel1
extern dw& xrel1;
#endif
#ifndef xrel16
extern dw& xrel16;
#endif
#ifndef sctrscalemode
extern dw& sctrscalemode;
#endif
#ifndef ygrid1
extern dw& ygrid1;
#endif
#ifndef xsz
extern dw& xsz;
#endif
#ifndef col2
extern db& col2;
#endif
#ifndef ygrid16
extern dw& ygrid16;
#endif
#ifndef cloudlayer1
extern db& cloudlayer1;
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
#ifndef colours
extern dw& colours;
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
#ifndef cloudlayer2
extern db& cloudlayer2;
#endif
#ifndef ypos16
extern dw& ypos16;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef yrel1
extern dw& yrel1;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef yrel8
extern dw& yrel8;
#endif
#ifndef ygrid8
extern dw& ygrid8;
#endif
#ifndef ysz
extern dw& ysz;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initclouds
#define M2C_CODE_EQUATE_initclouds 1
static const dd kinitclouds = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_setcloudmode
#define M2C_CODE_EQUATE_setcloudmode 1
static const dd ksetcloudmode = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_initdone
#define M2C_CODE_EQUATE_initdone 1
static const dd kinitdone = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_sortnegzscaled
#define M2C_CODE_EQUATE_sortnegzscaled 1
static const dd ksortnegzscaled = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_calcposzscaled
#define M2C_CODE_EQUATE_calcposzscaled 1
static const dd kcalcposzscaled = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_zok
#define M2C_CODE_EQUATE_zok 1
static const dd kzok = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_calcnegzscaled
#define M2C_CODE_EQUATE_calcnegzscaled 1
static const dd kcalcnegzscaled = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_negzok
#define M2C_CODE_EQUATE_negzok 1
static const dd knegzok = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_exitclouds1
#define M2C_CODE_EQUATE_exitclouds1 1
static const dd kexitclouds1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds1
#define M2C_CODE_EQUATE_drawclouds1 1
static const dd kdrawclouds1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop1
#define M2C_CODE_EQUATE_scanyloop1 1
static const dd kscanyloop1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop1
#define M2C_CODE_EQUATE_scanxloop1 1
static const dd kscanxloop1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_skipsector1
#define M2C_CODE_EQUATE_skipsector1 1
static const dd kskipsector1 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_exitclouds2
#define M2C_CODE_EQUATE_exitclouds2 1
static const dd kexitclouds2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds2
#define M2C_CODE_EQUATE_drawclouds2 1
static const dd kdrawclouds2 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop2
#define M2C_CODE_EQUATE_scanyloop2 1
static const dd kscanyloop2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop2
#define M2C_CODE_EQUATE_scanxloop2 1
static const dd kscanxloop2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_skipsector2
#define M2C_CODE_EQUATE_skipsector2 1
static const dd kskipsector2 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_inrange
#define M2C_CODE_EQUATE_inrange 1
static const dd kinrange = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_exitonecloud
#define M2C_CODE_EQUATE_exitonecloud 1
static const dd kexitonecloud = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE__polyfill
#define M2C_CODE_EQUATE__polyfill 1
static const dd k_polyfill = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE__meshfill
#define M2C_CODE_EQUATE__meshfill 1
static const dd k_meshfill = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE__rvrspolyfill
#define M2C_CODE_EQUATE__rvrspolyfill 1
static const dd k_rvrspolyfill = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE__rvrsmeshfill
#define M2C_CODE_EQUATE__rvrsmeshfill 1
static const dd k_rvrsmeshfill = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_setscalemode
#define M2C_CODE_EQUATE_setscalemode 1
static const dd ksetscalemode = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_calccentre1
#define M2C_CODE_EQUATE_calccentre1 1
static const dd kcalccentre1 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_calccentre2
#define M2C_CODE_EQUATE_calccentre2 1
static const dd kcalccentre2 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_failsector2
#define M2C_CODE_EQUATE_failsector2 1
static const dd kfailsector2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_calccentre8
#define M2C_CODE_EQUATE_calccentre8 1
static const dd kcalccentre8 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_failsector8
#define M2C_CODE_EQUATE_failsector8 1
static const dd kfailsector8 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_calccentre16
#define M2C_CODE_EQUATE_calccentre16 1
static const dd kcalccentre16 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_failsector16
#define M2C_CODE_EQUATE_failsector16 1
static const dd kfailsector16 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex1
#define M2C_CODE_EQUATE_scanvertex1 1
static const dd kscanvertex1 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex1
#define M2C_CODE_EQUATE_skipvertex1 1
static const dd kskipvertex1 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex1
#define M2C_CODE_EQUATE_exitvertex1 1
static const dd kexitvertex1 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex2
#define M2C_CODE_EQUATE_scanvertex2 1
static const dd kscanvertex2 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex2
#define M2C_CODE_EQUATE_skipvertex2 1
static const dd kskipvertex2 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex2
#define M2C_CODE_EQUATE_exitvertex2 1
static const dd kexitvertex2 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex8
#define M2C_CODE_EQUATE_scanvertex8 1
static const dd kscanvertex8 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop8
#define M2C_CODE_EQUATE_vertexloop8 1
static const dd kvertexloop8 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex8
#define M2C_CODE_EQUATE_skipvertex8 1
static const dd kskipvertex8 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex8
#define M2C_CODE_EQUATE_exitvertex8 1
static const dd kexitvertex8 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex16
#define M2C_CODE_EQUATE_scanvertex16 1
static const dd kscanvertex16 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop16
#define M2C_CODE_EQUATE_vertexloop16 1
static const dd kvertexloop16 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex16
#define M2C_CODE_EQUATE_skipvertex16 1
static const dd kskipvertex16 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex16
#define M2C_CODE_EQUATE_exitvertex16 1
static const dd kexitvertex16 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_randomizeclouds
#define M2C_CODE_EQUATE_randomizeclouds 1
static const dd krandomizeclouds = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_skipxshift
#define M2C_CODE_EQUATE_skipxshift 1
static const dd kskipxshift = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_xloop1
#define M2C_CODE_EQUATE_xloop1 1
static const dd kxloop1 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_xloop2
#define M2C_CODE_EQUATE_xloop2 1
static const dd kxloop2 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_skipyshift
#define M2C_CODE_EQUATE_skipyshift 1
static const dd kskipyshift = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_yloop1
#define M2C_CODE_EQUATE_yloop1 1
static const dd kyloop1 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_yloop2
#define M2C_CODE_EQUATE_yloop2 1
static const dd kyloop2 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x105a;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_cloudsenabled
#define M2C_CODE_EQUATE_cloudsenabled 1
static const dd kcloudsenabled = (m2c::near_offset_external(::cloudsenabled));
#endif
#ifndef M2C_CODE_EQUATE_cloudmode
#define M2C_CODE_EQUATE_cloudmode 1
static const dd kcloudmode = (m2c::near_offset_external(::cloudmode));
#endif
#ifndef M2C_CODE_EQUATE_cloudbase
#define M2C_CODE_EQUATE_cloudbase 1
static const dd kcloudbase = (m2c::near_offset_external(::cloudbase));
#endif
#ifndef M2C_CODE_EQUATE_clouddepth
#define M2C_CODE_EQUATE_clouddepth 1
static const dd kclouddepth = (m2c::near_offset_external(::clouddepth));
#endif
#ifndef M2C_CODE_EQUATE_cloudtop
#define M2C_CODE_EQUATE_cloudtop 1
static const dd kcloudtop = (m2c::near_offset_external(::cloudtop));
#endif
#ifndef M2C_CODE_EQUATE_abs_delta_zft
#define M2C_CODE_EQUATE_abs_delta_zft 1
static const dd kabs_delta_zft = (m2c::near_offset_external(::abs_delta_zft));
#endif
#ifndef M2C_CODE_EQUATE_cloudnum
#define M2C_CODE_EQUATE_cloudnum 1
static const dd kcloudnum = (m2c::near_offset_external(::cloudnum));
#endif
#ifndef M2C_CODE_EQUATE_calcsctrcentre
#define M2C_CODE_EQUATE_calcsctrcentre 1
static const dd kcalcsctrcentre = (m2c::near_offset_external(::calcsctrcentre));
#endif
#ifndef M2C_CODE_EQUATE_scanvertexlist
#define M2C_CODE_EQUATE_scanvertexlist 1
static const dd kscanvertexlist = (m2c::near_offset_external(::scanvertexlist));
#endif
#ifndef M2C_CODE_EQUATE_cloud1cyclic
#define M2C_CODE_EQUATE_cloud1cyclic 1
static const dd kcloud1cyclic = (m2c::near_offset_external(::cloud1cyclic));
#endif
#ifndef M2C_CODE_EQUATE_cloud2cyclic
#define M2C_CODE_EQUATE_cloud2cyclic 1
static const dd kcloud2cyclic = (m2c::near_offset_external(::cloud2cyclic));
#endif
#ifndef M2C_CODE_EQUATE_facecyclic
#define M2C_CODE_EQUATE_facecyclic 1
static const dd kfacecyclic = (m2c::near_offset_external(::facecyclic));
#endif
#ifndef M2C_CODE_EQUATE_facedraw
#define M2C_CODE_EQUATE_facedraw 1
static const dd kfacedraw = (m2c::near_offset_external(::facedraw));
#endif
#ifndef M2C_CODE_EQUATE_rvrsfacedraw
#define M2C_CODE_EQUATE_rvrsfacedraw 1
static const dd krvrsfacedraw = (m2c::near_offset_external(::rvrsfacedraw));
#endif
#ifndef M2C_CODE_EQUATE__zscaled
#define M2C_CODE_EQUATE__zscaled 1
static const dd k_zscaled = (m2c::near_offset_external(::_zscaled));
#endif
#ifndef M2C_CODE_EQUATE__xe01
#define M2C_CODE_EQUATE__xe01 1
static const dd k_xe01 = (m2c::near_offset_external(::_xe01));
#endif
#ifndef M2C_CODE_EQUATE__ye01
#define M2C_CODE_EQUATE__ye01 1
static const dd k_ye01 = (m2c::near_offset_external(::_ye01));
#endif
#ifndef M2C_CODE_EQUATE__ze01
#define M2C_CODE_EQUATE__ze01 1
static const dd k_ze01 = (m2c::near_offset_external(::_ze01));
#endif
#ifndef M2C_CODE_EQUATE__xe02
#define M2C_CODE_EQUATE__xe02 1
static const dd k_xe02 = (m2c::near_offset_external(::_xe02));
#endif
#ifndef M2C_CODE_EQUATE__ye02
#define M2C_CODE_EQUATE__ye02 1
static const dd k_ye02 = (m2c::near_offset_external(::_ye02));
#endif
#ifndef M2C_CODE_EQUATE__ze02
#define M2C_CODE_EQUATE__ze02 1
static const dd k_ze02 = (m2c::near_offset_external(::_ze02));
#endif
#ifndef M2C_CODE_EQUATE__xe08
#define M2C_CODE_EQUATE__xe08 1
static const dd k_xe08 = (m2c::near_offset_external(::_xe08));
#endif
#ifndef M2C_CODE_EQUATE__ye08
#define M2C_CODE_EQUATE__ye08 1
static const dd k_ye08 = (m2c::near_offset_external(::_ye08));
#endif
#ifndef M2C_CODE_EQUATE__ze08
#define M2C_CODE_EQUATE__ze08 1
static const dd k_ze08 = (m2c::near_offset_external(::_ze08));
#endif
#ifndef M2C_CODE_EQUATE__xe016
#define M2C_CODE_EQUATE__xe016 1
static const dd k_xe016 = (m2c::near_offset_external(::_xe016));
#endif
#ifndef M2C_CODE_EQUATE__ye016
#define M2C_CODE_EQUATE__ye016 1
static const dd k_ye016 = (m2c::near_offset_external(::_ye016));
#endif
#ifndef M2C_CODE_EQUATE__ze016
#define M2C_CODE_EQUATE__ze016 1
static const dd k_ze016 = (m2c::near_offset_external(::_ze016));
#endif
}
#ifndef cloudsenabled
#define cloudsenabled m2c::kcloudsenabled
#endif
#ifndef cloudmode
#define cloudmode m2c::kcloudmode
#endif
#ifndef cloudbase
#define cloudbase m2c::kcloudbase
#endif
#ifndef clouddepth
#define clouddepth m2c::kclouddepth
#endif
#ifndef cloudtop
#define cloudtop m2c::kcloudtop
#endif
#ifndef abs_delta_zft
#define abs_delta_zft m2c::kabs_delta_zft
#endif
#ifndef cloudnum
#define cloudnum m2c::kcloudnum
#endif
#ifndef calcsctrcentre
#define calcsctrcentre m2c::kcalcsctrcentre
#endif
#ifndef scanvertexlist
#define scanvertexlist m2c::kscanvertexlist
#endif
#ifndef cloud1cyclic
#define cloud1cyclic m2c::kcloud1cyclic
#endif
#ifndef cloud2cyclic
#define cloud2cyclic m2c::kcloud2cyclic
#endif
#ifndef facecyclic
#define facecyclic m2c::kfacecyclic
#endif
#ifndef facedraw
#define facedraw m2c::kfacedraw
#endif
#ifndef rvrsfacedraw
#define rvrsfacedraw m2c::krvrsfacedraw
#endif
#ifndef _zscaled
#define _zscaled m2c::k_zscaled
#endif
#ifndef _xe01
#define _xe01 m2c::k_xe01
#endif
#ifndef _ye01
#define _ye01 m2c::k_ye01
#endif
#ifndef _ze01
#define _ze01 m2c::k_ze01
#endif
#ifndef _xe02
#define _xe02 m2c::k_xe02
#endif
#ifndef _ye02
#define _ye02 m2c::k_ye02
#endif
#ifndef _ze02
#define _ze02 m2c::k_ze02
#endif
#ifndef _xe08
#define _xe08 m2c::k_xe08
#endif
#ifndef _ye08
#define _ye08 m2c::k_ye08
#endif
#ifndef _ze08
#define _ze08 m2c::k_ze08
#endif
#ifndef _xe016
#define _xe016 m2c::k_xe016
#endif
#ifndef _ye016
#define _ye016 m2c::k_ye016
#endif
#ifndef _ze016
#define _ze016 m2c::k_ze016
#endif



#endif
