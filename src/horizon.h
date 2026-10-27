/* THIS IS GENERATED FILE */

        
#ifndef __M2C_HORIZON_STUBS_H__
#define __M2C_HORIZON_STUBS_H__

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


	static const int fog_col_start = 8;
static const int fog_col_count = 104;
static const int night_col_start = 24;
static const int night_col_count = 88;
static const int ir_col_start = 8;
static const int ir_col_count = 104;
static const int col_black = 0;
static const int col_lt_red = 1;
static const int col_yellow = 2;
static const int col_lt_cyan = 3;
static const int col_white = 4;
static const int col_text_norm1 = 5;
static const int col_text_norm2 = 6;
static const int col_text_alert = 7;
static const int col_nt_white1 = 8;
static const int col_nt_grey1 = 9;
static const int col_nt_grey2 = 10;
static const int col_nt_grey3 = 11;
static const int col_nt_grey4 = 12;
static const int col_nt_red1 = 13;
static const int col_nt_red2 = 14;
static const int col_nt_red3 = 15;
static const int col_nt_blue1 = 16;
static const int col_nt_blue2 = 17;
static const int col_nt_yellow1 = 18;
static const int col_nt_amber1 = 19;
static const int col_nt_amber2 = 20;
static const int col_nt_green1 = 21;
static const int col_nt_r_white1 = 22;
static const int col_nt_b_white1 = 23;
static const int col_white1 = 24;
static const int col_grey1 = 25;
static const int col_grey2 = 26;
static const int col_grey3 = 27;
static const int col_grey4 = 28;
static const int col_black1 = 29;
static const int col_cyan_grey1 = 30;
static const int col_cyan_grey2 = 31;
static const int col_cyan_grey3 = 32;
static const int col_cyan_grey4 = 33;
static const int col_cyan_grey5 = 34;
static const int col_cyan_grey6 = 35;
static const int col_sand1 = 36;
static const int col_sand2 = 37;
static const int col_sand3 = 38;
static const int col_sand4 = 39;
static const int col_sand5 = 40;
static const int col_rust1 = 41;
static const int col_rust2 = 42;
static const int col_rust3 = 43;
static const int col_rust4 = 44;
static const int col_rust5 = 45;
static const int col_new_grey1 = 46;
static const int col_new_grey2 = 47;
static const int col_new_grey3 = 48;
static const int col_new_grey4 = 49;
static const int col_yellow1 = 50;
static const int col_amber1 = 51;
static const int col_amber2 = 52;
static const int col_amber3 = 53;
static const int col_amber4 = 54;
static const int col_red1 = 55;
static const int col_green1 = 56;
static const int col_green2 = 57;
static const int col_green3 = 58;
static const int col_green4 = 59;
static const int col_dk_cyan1 = 60;
static const int col_dk_cyan2 = 61;
static const int col_dk_cyan3 = 62;
static const int col_dk_cyan4 = 63;
static const int col_olive1 = 64;
static const int col_olive2 = 65;
static const int col_olive3 = 66;
static const int col_olive4 = 67;
static const int col_olive5 = 68;
static const int col_olive6 = 69;
static const int col_near_white1 = 70;
static const int col_smoke_grey1 = 71;
static const int col_smoke_grey2 = 72;
static const int col_road1 = 73;
static const int col_rwy1 = 74;
static const int col_gnd1 = 75;
static const int col_gnd2 = 76;
static const int col_rail1 = 77;
static const int col_rail2 = 78;
static const int col_river1 = 79;
static const int col_hill1 = 80;
static const int col_hill2 = 81;
static const int col_hill3 = 82;
static const int col_hill4 = 83;
static const int col_hill5 = 84;
static const int col_hill6 = 85;
static const int col_hill7 = 86;
static const int col_hill8 = 87;
static const int col_hill9 = 88;
static const int col_hill10 = 89;
static const int col_hill11 = 90;
static const int col_hill12 = 91;
static const int col_hill13 = 92;
static const int col_hill14 = 93;
static const int col_hill15 = 94;
static const int col_hill16 = 95;
static const int col_sky1 = 96;
static const int col_sky2 = 97;
static const int col_sky3 = 98;
static const int col_sky4 = 99;
static const int col_sky5 = 100;
static const int col_sky6 = 101;
static const int col_sky7 = 102;
static const int col_sky8 = 103;
static const int col_sky9 = 104;
static const int col_sky10 = 105;
static const int col_sky11 = 106;
static const int col_sky12 = 107;
static const int col_sky13 = 108;
static const int col_sky14 = 109;
static const int col_sky15 = 110;
static const int col_sky16 = 111;
static const int col_map_hill1 = 112;
static const int col_map_hill2 = 113;
static const int col_map_hill3 = 114;
static const int col_map_hill4 = 115;
static const int col_map_hill5 = 116;
static const int col_map_hill6 = 117;
static const int col_map_hill7 = 118;
static const int col_map_hill8 = 119;
static const int col_map_hill9 = 120;
static const int col_map_hill10 = 121;
static const int col_map_hill11 = 122;
static const int col_map_hill12 = 123;
static const int col_map_hill13 = 124;
static const int col_map_hill14 = 125;
static const int col_map_hill15 = 126;
static const int col_map_hill16 = 127;
static const int col_needle = 128;
static const int col_counter = 129;
static const int col_red_needle = 130;
static const int col_adi_sky = 131;
static const int col_adi_gnd = 132;
static const int col_hud = 133;
static const int col_bug = 134;
static const int col_aoa = 135;
static const int col_knee_pad = 136;
static const int col_knee_ink1 = 137;
static const int col_knee_ink2 = 138;
static const int col_knee_pen = 139;
static const int col_knee_num = 140;
static const int col_sight = 141;
#define col_tiald_sym (col_black)
#define col_map_sym (col_black)
#define col_ref_sym (col_black)
#define col_radar_mask (col_black)
#define col_rad_miss (col_map_enemy)
#define col_ir_miss (col_crt_red)
static const int col_local1 = 209;
static const int col_local2 = 213;
static const int col_local3 = 215;
static const int col_local4 = 218;
static const int col_local5 = 220;
static const int col_nt_local1 = 233;
static const int col_nt_local2 = 234;
static const int col_nt_local3 = 235;
static const int col_nt_local4 = 236;
static const int col_nt_local5 = 255;
static const int col_glide1 = 210;
static const int col_glide2 = 216;
static const int col_glide3 = 220;
static const int col_nt_glide1 = 234;
static const int col_nt_glide2 = 235;
static const int col_nt_glide3 = 236;
static const int col_map_gnd1 = 144;
static const int col_map_road1 = 145;
static const int col_map_rail1 = 146;
static const int col_map_rwy1 = 147;
static const int col_map_river1 = 148;
static const int col_map_green1 = 149;
static const int col_map_green2 = 150;
static const int col_map_compass = 151;
static const int col_map_locator = 152;
static const int col_map_allied = 153;
static const int col_map_border = 154;
static const int col_compass = 155;
static const int col_locator = 156;
static const int col_map_rwy2 = 157;
static const int col_map_enemy = 158;
static const int col_crt_red = 159;
static const int col_crt1 = 160;
static const int col_crt2 = 161;
static const int col_crt3 = 162;
static const int col_crt4 = 163;
static const int col_crt5 = 164;
static const int col_crt6 = 165;
static const int col_crt7 = 166;
static const int col_crt8 = 167;
static const int col_crt9 = 168;
static const int col_crt10 = 169;
static const int col_crt11 = 170;
static const int col_crt12 = 171;
static const int col_crt13 = 172;
static const int col_crt14 = 173;
static const int col_crt15 = 174;
static const int col_crt16 = 175;
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
static const int xeye = 4096;
static const int yeye = 1024;
static const int zeye = -2048;
static const int zt = 256;

	#define M2C_MODULE_HORIZON 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
#ifndef M2C_CODE_EQUATE_userhorizon
#define M2C_CODE_EQUATE_userhorizon 1
static const dd kuserhorizon = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_intohorizon
#define M2C_CODE_EQUATE_intohorizon 1
static const dd kintohorizon = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_drawhorizon
#define M2C_CODE_EQUATE_drawhorizon 1
static const dd kdrawhorizon = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_polycloudfade
#define M2C_CODE_EQUATE_polycloudfade 1
static const dd kpolycloudfade = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_sortrgbgnd
#define M2C_CODE_EQUATE_sortrgbgnd 1
static const dd ksortrgbgnd = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_sortrgbsky
#define M2C_CODE_EQUATE_sortrgbsky 1
static const dd ksortrgbsky = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_sortfog
#define M2C_CODE_EQUATE_sortfog 1
static const dd ksortfog = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_fadeok
#define M2C_CODE_EQUATE_fadeok 1
static const dd kfadeok = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_sortskycol
#define M2C_CODE_EQUATE_sortskycol 1
static const dd ksortskycol = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_skipfog
#define M2C_CODE_EQUATE_skipfog 1
static const dd kskipfog = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_drawhrznexit
#define M2C_CODE_EQUATE_drawhrznexit 1
static const dd kdrawhrznexit = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_contpolyfade
#define M2C_CODE_EQUATE_contpolyfade 1
static const dd kcontpolyfade = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_sorthorizon
#define M2C_CODE_EQUATE_sorthorizon 1
static const dd ksorthorizon = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_hrznnonvisible
#define M2C_CODE_EQUATE_hrznnonvisible 1
static const dd khrznnonvisible = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_onlysky
#define M2C_CODE_EQUATE_onlysky 1
static const dd konlysky = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_onlygnd
#define M2C_CODE_EQUATE_onlygnd 1
static const dd konlygnd = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_drawgradhrzn
#define M2C_CODE_EQUATE_drawgradhrzn 1
static const dd kdrawgradhrzn = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_hrznvisible
#define M2C_CODE_EQUATE_hrznvisible 1
static const dd khrznvisible = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_sorttopbotcols
#define M2C_CODE_EQUATE_sorttopbotcols 1
static const dd ksorttopbotcols = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_sethrzncols
#define M2C_CODE_EQUATE_sethrzncols 1
static const dd ksethrzncols = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_noswap
#define M2C_CODE_EQUATE_noswap 1
static const dd knoswap = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_fillmiddle
#define M2C_CODE_EQUATE_fillmiddle 1
static const dd kfillmiddle = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_contmidfill
#define M2C_CODE_EQUATE_contmidfill 1
static const dd kcontmidfill = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_noxswap
#define M2C_CODE_EQUATE_noxswap 1
static const dd knoxswap = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_setlhx
#define M2C_CODE_EQUATE_setlhx 1
static const dd ksetlhx = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_flathorizon
#define M2C_CODE_EQUATE_flathorizon 1
static const dd kflathorizon = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_setrhx
#define M2C_CODE_EQUATE_setrhx 1
static const dd ksetrhx = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_conthrznfill
#define M2C_CODE_EQUATE_conthrznfill 1
static const dd kconthrznfill = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_contgradhrzn
#define M2C_CODE_EQUATE_contgradhrzn 1
static const dd kcontgradhrzn = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_gradloop
#define M2C_CODE_EQUATE_gradloop 1
static const dd kgradloop = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_octant1
#define M2C_CODE_EQUATE_octant1 1
static const dd koctant1 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_intooct1
#define M2C_CODE_EQUATE_intooct1 1
static const dd kintooct1 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_oct1lp
#define M2C_CODE_EQUATE_oct1lp 1
static const dd koct1lp = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_octant2
#define M2C_CODE_EQUATE_octant2 1
static const dd koctant2 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpb
#define M2C_CODE_EQUATE_oct2lpb 1
static const dd koct2lpb = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpa
#define M2C_CODE_EQUATE_oct2lpa 1
static const dd koct2lpa = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_octant7
#define M2C_CODE_EQUATE_octant7 1
static const dd koctant7 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpb
#define M2C_CODE_EQUATE_oct7lpb 1
static const dd koct7lpb = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpa
#define M2C_CODE_EQUATE_oct7lpa 1
static const dd koct7lpa = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_octant8
#define M2C_CODE_EQUATE_octant8 1
static const dd koctant8 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_intooct8
#define M2C_CODE_EQUATE_intooct8 1
static const dd kintooct8 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_oct8lp
#define M2C_CODE_EQUATE_oct8lp 1
static const dd koct8lp = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x104a;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawhorizon(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool octant1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool octant2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool octant7(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool octant8(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrgbgnd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrgbsky(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool userhorizon(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool cloudcheck1(m2c::_offsets, struct m2c::_STATE*);
extern bool cloudcheck2(m2c::_offsets, struct m2c::_STATE*);
extern bool horizonclip(m2c::_offsets, struct m2c::_STATE*);
extern bool horizonfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tangent(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif
