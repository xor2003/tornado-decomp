#ifndef __M2C_HORIZON_DATA_H__
#define __M2C_HORIZON_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& overcast)[2];
extern db (& fog)[2];
extern db (& night)[2];
extern db& gndcol;
extern db& skycol;
extern db& topcol;
extern db& botcol;
extern db& lhscol;
extern db& rhscol;
extern dw& hx1;
extern db (& hy1)[2];
extern dw& hx2;
extern db (& hy2)[2];
extern dw& newpitch;
extern dw& octant;
extern dw& dummy62bf9e66_data_18_1022;
extern dw& dummy62bf9e66_data_1a_1023;
extern dw& dummy62bf9e66_data_1c_1024;
extern db (& gradenabled)[2];
extern db (& gradvisible)[2];
extern db (& gradpoly)[5];
extern dw& gndrgbptr;
extern dw& skyrgbptr;
extern dw& skyswitch;
extern dw& dummy62bf9e66_data_2d_1040;
extern dw& dummy62bf9e66_data_2f_1041;
extern word& gndskycols;
extern word& topbotcols;
extern word& lhsrhscols;
extern db& viscode;

#ifndef zscaled
extern dw& zscaled;
#endif
#ifndef vga_rgb_data
extern db& vga_rgb_data;
#endif
#ifndef fadelevel1
extern db& fadelevel1;
#endif
#ifndef fadecount1
extern dw& fadecount1;
#endif
#ifndef b_white_cloud
extern db& b_white_cloud;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef lhsx
extern dw& lhsx;
#endif
#ifndef v_sinr
extern dw& v_sinr;
#endif
#ifndef clipwndwxmax
extern dw& clipwndwxmax;
#endif
#ifndef setpaletteflag
extern db& setpaletteflag;
#endif
#ifndef vga_gnd1
extern db& vga_gnd1;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef clipwndwxorg
extern dw& clipwndwxorg;
#endif
#ifndef fadebcol1
extern db& fadebcol1;
#endif
#ifndef cloudmode
extern dw& cloudmode;
#endif
#ifndef col1
extern db& col1;
#endif
#ifndef fadercol1
extern db& fadercol1;
#endif
#ifndef vga_sky
extern db& vga_sky;
#endif
#ifndef b_grey_cloud
extern db& b_grey_cloud;
#endif
#ifndef clipwndwyorg
extern db& clipwndwyorg;
#endif
#ifndef cloudsenabled
extern db& cloudsenabled;
#endif
#ifndef fadestart1
extern dw& fadestart1;
#endif
#ifndef fadegcol1
extern db& fadegcol1;
#endif
#ifndef v_cosr
extern dw& v_cosr;
#endif
#ifndef g_grey_cloud
extern db& g_grey_cloud;
#endif
#ifndef vga_gnd2
extern db& vga_gnd2;
#endif
#ifndef g_white_cloud
extern db& g_white_cloud;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef vga_sky2
extern db& vga_sky2;
#endif
#ifndef r_grey_cloud
extern db& r_grey_cloud;
#endif
#ifndef clouddepth
extern dw& clouddepth;
#endif
#ifndef clipwndwymax
extern db& clipwndwymax;
#endif
#ifndef vga_sky1
extern db& vga_sky1;
#endif
#ifndef vga_gnd
extern db& vga_gnd;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef r_white_cloud
extern db& r_white_cloud;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_userhorizon
#define M2C_CODE_EQUATE_userhorizon 1
static const dd kuserhorizon = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_intohorizon
#define M2C_CODE_EQUATE_intohorizon 1
static const dd kintohorizon = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_drawhorizon
#define M2C_CODE_EQUATE_drawhorizon 1
static const dd kdrawhorizon = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_polycloudfade
#define M2C_CODE_EQUATE_polycloudfade 1
static const dd kpolycloudfade = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_sortfog
#define M2C_CODE_EQUATE_sortfog 1
static const dd ksortfog = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_fadeok
#define M2C_CODE_EQUATE_fadeok 1
static const dd kfadeok = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_sortskycol
#define M2C_CODE_EQUATE_sortskycol 1
static const dd ksortskycol = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_skipfog
#define M2C_CODE_EQUATE_skipfog 1
static const dd kskipfog = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_drawhrznexit
#define M2C_CODE_EQUATE_drawhrznexit 1
static const dd kdrawhrznexit = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_contpolyfade
#define M2C_CODE_EQUATE_contpolyfade 1
static const dd kcontpolyfade = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_sorthorizon
#define M2C_CODE_EQUATE_sorthorizon 1
static const dd ksorthorizon = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_hrznnonvisible
#define M2C_CODE_EQUATE_hrznnonvisible 1
static const dd khrznnonvisible = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_onlysky
#define M2C_CODE_EQUATE_onlysky 1
static const dd konlysky = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_onlygnd
#define M2C_CODE_EQUATE_onlygnd 1
static const dd konlygnd = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_drawgradhrzn
#define M2C_CODE_EQUATE_drawgradhrzn 1
static const dd kdrawgradhrzn = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_hrznvisible
#define M2C_CODE_EQUATE_hrznvisible 1
static const dd khrznvisible = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_sorttopbotcols
#define M2C_CODE_EQUATE_sorttopbotcols 1
static const dd ksorttopbotcols = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_sethrzncols
#define M2C_CODE_EQUATE_sethrzncols 1
static const dd ksethrzncols = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_noswap
#define M2C_CODE_EQUATE_noswap 1
static const dd knoswap = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_fillmiddle
#define M2C_CODE_EQUATE_fillmiddle 1
static const dd kfillmiddle = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_contmidfill
#define M2C_CODE_EQUATE_contmidfill 1
static const dd kcontmidfill = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_noxswap
#define M2C_CODE_EQUATE_noxswap 1
static const dd knoxswap = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_setlhx
#define M2C_CODE_EQUATE_setlhx 1
static const dd ksetlhx = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_flathorizon
#define M2C_CODE_EQUATE_flathorizon 1
static const dd kflathorizon = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_setrhx
#define M2C_CODE_EQUATE_setrhx 1
static const dd ksetrhx = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_conthrznfill
#define M2C_CODE_EQUATE_conthrznfill 1
static const dd kconthrznfill = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_contgradhrzn
#define M2C_CODE_EQUATE_contgradhrzn 1
static const dd kcontgradhrzn = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_gradloop
#define M2C_CODE_EQUATE_gradloop 1
static const dd kgradloop = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_octant1
#define M2C_CODE_EQUATE_octant1 1
static const dd koctant1 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_intooct1
#define M2C_CODE_EQUATE_intooct1 1
static const dd kintooct1 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_oct1lp
#define M2C_CODE_EQUATE_oct1lp 1
static const dd koct1lp = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_octant2
#define M2C_CODE_EQUATE_octant2 1
static const dd koctant2 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpb
#define M2C_CODE_EQUATE_oct2lpb 1
static const dd koct2lpb = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpa
#define M2C_CODE_EQUATE_oct2lpa 1
static const dd koct2lpa = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_octant7
#define M2C_CODE_EQUATE_octant7 1
static const dd koctant7 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpb
#define M2C_CODE_EQUATE_oct7lpb 1
static const dd koct7lpb = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpa
#define M2C_CODE_EQUATE_oct7lpa 1
static const dd koct7lpa = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_octant8
#define M2C_CODE_EQUATE_octant8 1
static const dd koctant8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_intooct8
#define M2C_CODE_EQUATE_intooct8 1
static const dd kintooct8 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_oct8lp
#define M2C_CODE_EQUATE_oct8lp 1
static const dd koct8lp = 0x1052;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_overcast
#define M2C_CODE_EQUATE_overcast 1
static const dd kovercast = (m2c::near_offset_external(::overcast));
#endif
#ifndef M2C_CODE_EQUATE_fog
#define M2C_CODE_EQUATE_fog 1
static const dd kfog = (m2c::near_offset_external(::fog));
#endif
#ifndef M2C_CODE_EQUATE_night
#define M2C_CODE_EQUATE_night 1
static const dd knight = (m2c::near_offset_external(::night));
#endif
#ifndef M2C_CODE_EQUATE_gndcol
#define M2C_CODE_EQUATE_gndcol 1
static const dd kgndcol = (m2c::near_offset_external(::gndcol));
#endif
#ifndef M2C_CODE_EQUATE_skycol
#define M2C_CODE_EQUATE_skycol 1
static const dd kskycol = (m2c::near_offset_external(::skycol));
#endif
#ifndef M2C_CODE_EQUATE_topcol
#define M2C_CODE_EQUATE_topcol 1
static const dd ktopcol = (m2c::near_offset_external(::topcol));
#endif
#ifndef M2C_CODE_EQUATE_botcol
#define M2C_CODE_EQUATE_botcol 1
static const dd kbotcol = (m2c::near_offset_external(::botcol));
#endif
#ifndef M2C_CODE_EQUATE_lhscol
#define M2C_CODE_EQUATE_lhscol 1
static const dd klhscol = (m2c::near_offset_external(::lhscol));
#endif
#ifndef M2C_CODE_EQUATE_rhscol
#define M2C_CODE_EQUATE_rhscol 1
static const dd krhscol = (m2c::near_offset_external(::rhscol));
#endif
#ifndef M2C_CODE_EQUATE_hx1
#define M2C_CODE_EQUATE_hx1 1
static const dd khx1 = (m2c::near_offset_external(::hx1));
#endif
#ifndef M2C_CODE_EQUATE_hy1
#define M2C_CODE_EQUATE_hy1 1
static const dd khy1 = (m2c::near_offset_external(::hy1));
#endif
#ifndef M2C_CODE_EQUATE_hx2
#define M2C_CODE_EQUATE_hx2 1
static const dd khx2 = (m2c::near_offset_external(::hx2));
#endif
#ifndef M2C_CODE_EQUATE_hy2
#define M2C_CODE_EQUATE_hy2 1
static const dd khy2 = (m2c::near_offset_external(::hy2));
#endif
#ifndef M2C_CODE_EQUATE_newpitch
#define M2C_CODE_EQUATE_newpitch 1
static const dd knewpitch = (m2c::near_offset_external(::newpitch));
#endif
#ifndef M2C_CODE_EQUATE_octant
#define M2C_CODE_EQUATE_octant 1
static const dd koctant = (m2c::near_offset_external(::octant));
#endif
#ifndef M2C_CODE_EQUATE_gradenabled
#define M2C_CODE_EQUATE_gradenabled 1
static const dd kgradenabled = (m2c::near_offset_external(::gradenabled));
#endif
#ifndef M2C_CODE_EQUATE_gradvisible
#define M2C_CODE_EQUATE_gradvisible 1
static const dd kgradvisible = (m2c::near_offset_external(::gradvisible));
#endif
#ifndef M2C_CODE_EQUATE_gradpoly
#define M2C_CODE_EQUATE_gradpoly 1
static const dd kgradpoly = (m2c::near_offset_external(::gradpoly));
#endif
#ifndef M2C_CODE_EQUATE_gndrgbptr
#define M2C_CODE_EQUATE_gndrgbptr 1
static const dd kgndrgbptr = (m2c::near_offset_external(::gndrgbptr));
#endif
#ifndef M2C_CODE_EQUATE_skyrgbptr
#define M2C_CODE_EQUATE_skyrgbptr 1
static const dd kskyrgbptr = (m2c::near_offset_external(::skyrgbptr));
#endif
#ifndef M2C_CODE_EQUATE_skyswitch
#define M2C_CODE_EQUATE_skyswitch 1
static const dd kskyswitch = (m2c::near_offset_external(::skyswitch));
#endif
}
#ifndef overcast
#define overcast m2c::kovercast
#endif
#ifndef fog
#define fog m2c::kfog
#endif
#ifndef night
#define night m2c::knight
#endif
#ifndef gndcol
#define gndcol m2c::kgndcol
#endif
#ifndef skycol
#define skycol m2c::kskycol
#endif
#ifndef topcol
#define topcol m2c::ktopcol
#endif
#ifndef botcol
#define botcol m2c::kbotcol
#endif
#ifndef lhscol
#define lhscol m2c::klhscol
#endif
#ifndef rhscol
#define rhscol m2c::krhscol
#endif
#ifndef hx1
#define hx1 m2c::khx1
#endif
#ifndef hy1
#define hy1 m2c::khy1
#endif
#ifndef hx2
#define hx2 m2c::khx2
#endif
#ifndef hy2
#define hy2 m2c::khy2
#endif
#ifndef newpitch
#define newpitch m2c::knewpitch
#endif
#ifndef octant
#define octant m2c::koctant
#endif
#ifndef gradenabled
#define gradenabled m2c::kgradenabled
#endif
#ifndef gradvisible
#define gradvisible m2c::kgradvisible
#endif
#ifndef gradpoly
#define gradpoly m2c::kgradpoly
#endif
#ifndef gndrgbptr
#define gndrgbptr m2c::kgndrgbptr
#endif
#ifndef skyrgbptr
#define skyrgbptr m2c::kskyrgbptr
#endif
#ifndef skyswitch
#define skyswitch m2c::kskyswitch
#endif



#endif
