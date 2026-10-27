/* THIS IS GENERATED FILE */

        
#ifndef __M2C_CLOUDS_STUBS_H__
#define __M2C_CLOUDS_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
struct viewpoint {
  dw vp_xsec;
  dw vp_ysec;
  dw vp_xft;
  dw vp_yft;
  dd vp_zft;
  dw vp_hdg;
  dw vp_pitch;
  dw vp_roll;
};

struct sectordata {
  dw sec_obj_ptr;
  dw sec_flat_ptr;
};

struct objectdata {
  db obj_type;
  db obj_num;
  dw obj_xpos;
  dw obj_ypos;
  dw obj_zpos;
  dw obj_userw1;
  dw obj_userw2;
  dw obj_userw3;
  dw obj_userw4;
  db obj_userb1;
  db obj_userb2;
  dw obj_ptr;
};

struct objectheader {
  dw obj_hdr_scale;
  dw obj_hdr_range;
  dw obj_hdr_ptr;
  db obj_hdr_flags;
  db obj_hdr_col;
  dw obj_hdr_xgrid;
  dw obj_hdr_ygrid;
  dw obj_hdr_zgrid;
};

struct mobile {
  db mob_num;
  db mob_type;
  db mob_anim;
  db __m2c_pad_3_3;
  dw mob_link_ptr;
};

struct mobsort {
  dw msort_xsec;
  dw msort_ysec;
  dw msort_ptr;
};

struct gndobj {
  db gnd_num;
  db gnd_anim;
  db gnd_xgrid;
  db gnd_ygrid;
};

struct statmob {
  db stat_num;
  db stat_anim;
  dw stat_xft;
  dw stat_yft;
  dw stat_hdg;
};

struct crater {
  db crater_type;
  db crater_anim;
  dw crater_xsec;
  dw crater_ysec;
  dw crater_xft;
  dw crater_yft;
  dw crater_zft;
  dw crater_hdg;
};

struct smoke {
  dw smoke_type;
  db smoke_col;
  db smoke_flags;
  dw smoke_xsec;
  dw smoke_ysec;
  dw smoke_xft;
  dw smoke_yft;
  dd smoke_zft;
  dw smoke_zfine;
  dw smoke_rft;
  dw smoke_time;
  dw smoke_exp_time;
  dw smoke_sib_cntr;
};

#pragma pack(pop)

static const word vp_xsec = offsetof(struct viewpoint, vp_xsec);
static const word vp_ysec = offsetof(struct viewpoint, vp_ysec);
static const word vp_xft = offsetof(struct viewpoint, vp_xft);
static const word vp_yft = offsetof(struct viewpoint, vp_yft);
static const word vp_zft = offsetof(struct viewpoint, vp_zft);
static const word vp_hdg = offsetof(struct viewpoint, vp_hdg);
static const word vp_pitch = offsetof(struct viewpoint, vp_pitch);
static const word vp_roll = offsetof(struct viewpoint, vp_roll);
static const word sec_obj_ptr = offsetof(struct sectordata, sec_obj_ptr);
static const word sec_flat_ptr = offsetof(struct sectordata, sec_flat_ptr);
static const word obj_type = offsetof(struct objectdata, obj_type);
static const word obj_num = offsetof(struct objectdata, obj_num);
static const word obj_xpos = offsetof(struct objectdata, obj_xpos);
static const word obj_ypos = offsetof(struct objectdata, obj_ypos);
static const word obj_zpos = offsetof(struct objectdata, obj_zpos);
static const word obj_userw1 = offsetof(struct objectdata, obj_userw1);
static const word obj_userw2 = offsetof(struct objectdata, obj_userw2);
static const word obj_userw3 = offsetof(struct objectdata, obj_userw3);
static const word obj_userw4 = offsetof(struct objectdata, obj_userw4);
static const word obj_userb1 = offsetof(struct objectdata, obj_userb1);
static const word obj_userb2 = offsetof(struct objectdata, obj_userb2);
static const word obj_ptr = offsetof(struct objectdata, obj_ptr);
static const word obj_hdr_scale = offsetof(struct objectheader, obj_hdr_scale);
static const word obj_hdr_range = offsetof(struct objectheader, obj_hdr_range);
static const word obj_hdr_ptr = offsetof(struct objectheader, obj_hdr_ptr);
static const word obj_hdr_flags = offsetof(struct objectheader, obj_hdr_flags);
static const word obj_hdr_col = offsetof(struct objectheader, obj_hdr_col);
static const word obj_hdr_xgrid = offsetof(struct objectheader, obj_hdr_xgrid);
static const word obj_hdr_ygrid = offsetof(struct objectheader, obj_hdr_ygrid);
static const word obj_hdr_zgrid = offsetof(struct objectheader, obj_hdr_zgrid);
static const word mob_num = offsetof(struct mobile, mob_num);
static const word mob_type = offsetof(struct mobile, mob_type);
static const word mob_anim = offsetof(struct mobile, mob_anim);
static const word mob_link_ptr = offsetof(struct mobile, mob_link_ptr);
static const word msort_xsec = offsetof(struct mobsort, msort_xsec);
static const word msort_ysec = offsetof(struct mobsort, msort_ysec);
static const word msort_ptr = offsetof(struct mobsort, msort_ptr);
static const word gnd_num = offsetof(struct gndobj, gnd_num);
static const word gnd_anim = offsetof(struct gndobj, gnd_anim);
static const word gnd_xgrid = offsetof(struct gndobj, gnd_xgrid);
static const word gnd_ygrid = offsetof(struct gndobj, gnd_ygrid);
static const word stat_num = offsetof(struct statmob, stat_num);
static const word stat_anim = offsetof(struct statmob, stat_anim);
static const word stat_xft = offsetof(struct statmob, stat_xft);
static const word stat_yft = offsetof(struct statmob, stat_yft);
static const word stat_hdg = offsetof(struct statmob, stat_hdg);
static const word crater_type = offsetof(struct crater, crater_type);
static const word crater_anim = offsetof(struct crater, crater_anim);
static const word crater_xsec = offsetof(struct crater, crater_xsec);
static const word crater_ysec = offsetof(struct crater, crater_ysec);
static const word crater_xft = offsetof(struct crater, crater_xft);
static const word crater_yft = offsetof(struct crater, crater_yft);
static const word crater_zft = offsetof(struct crater, crater_zft);
static const word crater_hdg = offsetof(struct crater, crater_hdg);
static const word smoke_type = offsetof(struct smoke, smoke_type);
static const word smoke_col = offsetof(struct smoke, smoke_col);
static const word smoke_flags = offsetof(struct smoke, smoke_flags);
static const word smoke_xsec = offsetof(struct smoke, smoke_xsec);
static const word smoke_ysec = offsetof(struct smoke, smoke_ysec);
static const word smoke_xft = offsetof(struct smoke, smoke_xft);
static const word smoke_yft = offsetof(struct smoke, smoke_yft);
static const word smoke_zft = offsetof(struct smoke, smoke_zft);
static const word smoke_zfine = offsetof(struct smoke, smoke_zfine);
static const word smoke_rft = offsetof(struct smoke, smoke_rft);
static const word smoke_time = offsetof(struct smoke, smoke_time);
static const word smoke_exp_time = offsetof(struct smoke, smoke_exp_time);
static const word smoke_sib_cntr = offsetof(struct smoke, smoke_sib_cntr);


	static const int sec_scale1 = 0;
static const int sec_scale2 = 2;
static const int sec_scale8 = 4;
static const int sec_scale16 = 6;
static const int int_viewmode = 0;
static const int alt_viewmode = 2;
static const int ext_viewmode = 4;
static const int tv1_viewmode = 6;
static const int tv2_viewmode = 8;
static const int tv3_viewmode = 10;
static const int tv4_viewmode = 12;
static const int tv5_viewmode = 14;
static const int nul_viewmode = 0;
static const int rotate_null = 0;
static const int rotate_view_rt = 2;
static const int rotate_view_lt = 4;
static const int rotate_view_up = 6;
static const int rotate_view_dn = 8;
static const int rotate_view_bk = 10;
static const int rotate_view_ft = 12;
static const int dolmid = 128;
static const int dol0 = 0;
static const int dol256 = 2;
static const int dol512 = 4;
static const int dol1024 = 8;
static const int dol2048 = 16;
static const int dol4096 = 32;
static const int dol8192 = 64;
static const int min_sec_scan = 3;
static const int max_sec_scan = 15;
enum {
    map_x_wrap = 0x0001f,
    map_y_wrap = 0x0001f,
};
static const int sctr_y_thres = 11600;
static const int obj_scale1 = 0;
static const int obj_scale2 = 2;
static const int obj_scale4 = 4;
static const int obj_scale8 = 6;
static const int obj_scale16 = 8;
static const int max_range1 = 16384;
static const int max_range2 = 8192;
static const int max_range4 = 4096;
static const int max_range8 = 2048;
static const int max_range16 = 1024;
static const int arbmid = 64;
static const int arb0 = 0;
static const int arb16 = 2;
static const int arb32 = 4;
static const int arb48 = 6;
static const int arb64 = 8;
static const int arb80 = 10;
static const int arb96 = 12;
static const int arb112 = 14;
static const int arb128 = 16;
static const int arb192 = 24;
static const int arb256 = 32;
static const int arb384 = 48;
static const int arb512 = 64;
static const int otype_ground = 0;
static const int otype_mobile1 = 2;
static const int otype_mobile2 = 4;
static const int otype_mobile3 = 6;
static const int otype_mobile4 = 8;
static const int otype_hillface = 10;
static const int otype_smoke = 12;
constexpr int obj_flg_pixel = 0x1;
static const int num_objects = 256;
static const int num_bins = 64+1;
static const int num_far_objects = 256;
static const int num_far_bins = 64+1;
static const int behind_bin = 0;
static const int in_front_bin = 2;
enum {
    face_extended = 0x40,
    face_decision = 0x20,
    face_exclude = 0x10,
    face_primary = 0x8,
    face_visible = 0x4,
    face_structure = 0x2,
    face_fill_type = 0x1,
};
static const int num_mobiles = 256;
static const int surface_unknown = 0;
static const int surface_runway = 2;
static const int surface_taxiway = 4;
static const int surface_hard = 6;
static const int surface_road = 8;
static const int surface_railway = 10;
static const int surface_river = 12;
static const int surface_lake = 14;
static const int num_craters = 128;
static const int crater_null = 0;
static const int crater_size1 = 1;
static const int crater_size2 = 2;
static const int crater_heave = 3;
static const int crater_shell = 4;
static const int num_smoke = 128;
static const int smoke_crater1 = 0;
static const int smoke_crater2 = 2;
static const int smoke_crater3 = 4;
static const int smoke_burning = 6;
static const int smoke_kick_up = 8;
static const int smoke_air_explo = 10;
static const int smoke_air_trail = 12;
static const int stype_null = 0;
static const int stype_gnd1 = 2;
static const int stype_air1 = 4;
constexpr int sflg_repro = 0x1;
static const int view_rec_size = 18;
#define vp_zft_lo (vp_zft)
#define vp_zft_hi (vp_zft+2)
static const int sec_rec_size = 4;
static const int obj_rec_size = 20;
#define obj_xgrid (obj_userw1)
#define obj_ygrid (obj_userw2)
#define obj_hdg (obj_userw1)
#define obj_pitch (obj_userw2)
#define obj_roll (obj_userw3)
#define obj_anim_flags (obj_userb1)
#define obj_xsecpos (obj_userw1)
#define obj_ysecpos (obj_userw2)
#define obj_zsecpos (obj_userw3)
#define obj_mapindex (obj_userw4)
#define obj_secscale (obj_userb1)
#define obj_face_flags (obj_userb2)
#define obj_ymin (obj_xpos)
#define obj_smoke_rft (obj_userw1)
#define obj_smoke_col (obj_userb1)
static const int obj_hdr_size = 14;
static const int mob_rec_size = 6;
#define _vp_xsec (6+vp_xsec)
#define _vp_ysec (6+vp_ysec)
#define _vp_xft (6+vp_xft)
#define _vp_yft (6+vp_yft)
#define _vp_zft (6+vp_zft)
#define _vp_hdg (6+vp_hdg)
#define _vp_pitch (6+vp_pitch)
#define _vp_roll (6+vp_roll)
#define _vp_zft_lo (6+vp_zft)
#define _vp_zft_hi (6+(vp_zft+2))
static const int msort_rec_size = 6;
static const int gnd_rec_size = 4;
static const int stat_rec_size = 8;
static const int crater_rec_size = 14;
static const int smoke_rec_size = 26;
#define smoke_zft_lo (smoke_zft)
#define smoke_zft_hi (smoke_zft+2)
static const int cloud_mode1 = 0;
static const int cloud_mode2 = 2;
static const int cloud_mode3 = 4;

	#define M2C_MODULE_CLOUDS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_initclouds
#define M2C_CODE_EQUATE_initclouds 1
static const dd kinitclouds = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_setcloudmode
#define M2C_CODE_EQUATE_setcloudmode 1
static const dd ksetcloudmode = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_initdone
#define M2C_CODE_EQUATE_initdone 1
static const dd kinitdone = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_sortnegzscaled
#define M2C_CODE_EQUATE_sortnegzscaled 1
static const dd ksortnegzscaled = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_calcposzscaled
#define M2C_CODE_EQUATE_calcposzscaled 1
static const dd kcalcposzscaled = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_zok
#define M2C_CODE_EQUATE_zok 1
static const dd kzok = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_calcnegzscaled
#define M2C_CODE_EQUATE_calcnegzscaled 1
static const dd kcalcnegzscaled = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_negzok
#define M2C_CODE_EQUATE_negzok 1
static const dd knegzok = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_exitclouds1
#define M2C_CODE_EQUATE_exitclouds1 1
static const dd kexitclouds1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds1
#define M2C_CODE_EQUATE_drawclouds1 1
static const dd kdrawclouds1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop1
#define M2C_CODE_EQUATE_scanyloop1 1
static const dd kscanyloop1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop1
#define M2C_CODE_EQUATE_scanxloop1 1
static const dd kscanxloop1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_skipsector1
#define M2C_CODE_EQUATE_skipsector1 1
static const dd kskipsector1 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_calcsctrscale
#define M2C_CODE_EQUATE_calcsctrscale 1
static const dd kcalcsctrscale = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_drawonecloud
#define M2C_CODE_EQUATE_drawonecloud 1
static const dd kdrawonecloud = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_exitclouds2
#define M2C_CODE_EQUATE_exitclouds2 1
static const dd kexitclouds2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds2
#define M2C_CODE_EQUATE_drawclouds2 1
static const dd kdrawclouds2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop2
#define M2C_CODE_EQUATE_scanyloop2 1
static const dd kscanyloop2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop2
#define M2C_CODE_EQUATE_scanxloop2 1
static const dd kscanxloop2 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_skipsector2
#define M2C_CODE_EQUATE_skipsector2 1
static const dd kskipsector2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_inrange
#define M2C_CODE_EQUATE_inrange 1
static const dd kinrange = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_exitonecloud
#define M2C_CODE_EQUATE_exitonecloud 1
static const dd kexitonecloud = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE__polyfill
#define M2C_CODE_EQUATE__polyfill 1
static const dd k_polyfill = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE__meshfill
#define M2C_CODE_EQUATE__meshfill 1
static const dd k_meshfill = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE__rvrspolyfill
#define M2C_CODE_EQUATE__rvrspolyfill 1
static const dd k_rvrspolyfill = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE__rvrsmeshfill
#define M2C_CODE_EQUATE__rvrsmeshfill 1
static const dd k_rvrsmeshfill = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_setscalemode
#define M2C_CODE_EQUATE_setscalemode 1
static const dd ksetscalemode = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_calccentre1
#define M2C_CODE_EQUATE_calccentre1 1
static const dd kcalccentre1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_calccentre2
#define M2C_CODE_EQUATE_calccentre2 1
static const dd kcalccentre2 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_failsector2
#define M2C_CODE_EQUATE_failsector2 1
static const dd kfailsector2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_calccentre8
#define M2C_CODE_EQUATE_calccentre8 1
static const dd kcalccentre8 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_failsector8
#define M2C_CODE_EQUATE_failsector8 1
static const dd kfailsector8 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_calccentre16
#define M2C_CODE_EQUATE_calccentre16 1
static const dd kcalccentre16 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_failsector16
#define M2C_CODE_EQUATE_failsector16 1
static const dd kfailsector16 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex1
#define M2C_CODE_EQUATE_scanvertex1 1
static const dd kscanvertex1 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex1
#define M2C_CODE_EQUATE_skipvertex1 1
static const dd kskipvertex1 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex1
#define M2C_CODE_EQUATE_exitvertex1 1
static const dd kexitvertex1 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex2
#define M2C_CODE_EQUATE_scanvertex2 1
static const dd kscanvertex2 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex2
#define M2C_CODE_EQUATE_skipvertex2 1
static const dd kskipvertex2 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex2
#define M2C_CODE_EQUATE_exitvertex2 1
static const dd kexitvertex2 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex8
#define M2C_CODE_EQUATE_scanvertex8 1
static const dd kscanvertex8 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop8
#define M2C_CODE_EQUATE_vertexloop8 1
static const dd kvertexloop8 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex8
#define M2C_CODE_EQUATE_skipvertex8 1
static const dd kskipvertex8 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex8
#define M2C_CODE_EQUATE_exitvertex8 1
static const dd kexitvertex8 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex16
#define M2C_CODE_EQUATE_scanvertex16 1
static const dd kscanvertex16 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop16
#define M2C_CODE_EQUATE_vertexloop16 1
static const dd kvertexloop16 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex16
#define M2C_CODE_EQUATE_skipvertex16 1
static const dd kskipvertex16 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex16
#define M2C_CODE_EQUATE_exitvertex16 1
static const dd kexitvertex16 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_randomizeclouds
#define M2C_CODE_EQUATE_randomizeclouds 1
static const dd krandomizeclouds = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_skipxshift
#define M2C_CODE_EQUATE_skipxshift 1
static const dd kskipxshift = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_xloop1
#define M2C_CODE_EQUATE_xloop1 1
static const dd kxloop1 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_xloop2
#define M2C_CODE_EQUATE_xloop2 1
static const dd kxloop2 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_skipyshift
#define M2C_CODE_EQUATE_skipyshift 1
static const dd kskipyshift = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_yloop1
#define M2C_CODE_EQUATE_yloop1 1
static const dd kyloop1 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_yloop2
#define M2C_CODE_EQUATE_yloop2 1
static const dd kyloop2 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1053;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calccentre1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calccentre16(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calccentre2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calccentre8(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsctrscale(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawclouds1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawclouds2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawonecloud(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initclouds(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool randomizeclouds(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex16(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex8(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool calceyeposition(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool meshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsmeshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrspolyfill(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif
