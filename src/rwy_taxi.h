/* THIS IS GENERATED FILE */

        
#ifndef __M2C_RWY_TAXI_STUBS_H__
#define __M2C_RWY_TAXI_STUBS_H__

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

struct runway {
  dw rwy_dir;
  dw rwy_width;
  dw rwy_x1;
  dw rwy_y1;
  dw rwy_x2;
  dw rwy_y2;
};

struct ils {
  dw ils_x_datum;
  dw ils_y_datum;
  db ils_available;
  db __m2c_pad_3_5;
  dw ils_n_tdown_x;
  dw ils_n_tdown_y;
  dw ils_s_tdown_x;
  dw ils_s_tdown_y;
  dw ils_e_tdown_x;
  dw ils_e_tdown_y;
  dw ils_w_tdown_x;
  dw ils_w_tdown_y;
};

struct taxi {
  dw taxi_end_ptr;
  dw taxi_x_mod;
  dw taxi_y_mod;
};

struct tnode {
  dw tnode_xft;
  dw tnode_yft;
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
static const word rwy_dir = offsetof(struct runway, rwy_dir);
static const word rwy_width = offsetof(struct runway, rwy_width);
static const word rwy_x1 = offsetof(struct runway, rwy_x1);
static const word rwy_y1 = offsetof(struct runway, rwy_y1);
static const word rwy_x2 = offsetof(struct runway, rwy_x2);
static const word rwy_y2 = offsetof(struct runway, rwy_y2);
static const word ils_x_datum = offsetof(struct ils, ils_x_datum);
static const word ils_y_datum = offsetof(struct ils, ils_y_datum);
static const word ils_available = offsetof(struct ils, ils_available);
static const word ils_n_tdown_x = offsetof(struct ils, ils_n_tdown_x);
static const word ils_n_tdown_y = offsetof(struct ils, ils_n_tdown_y);
static const word ils_s_tdown_x = offsetof(struct ils, ils_s_tdown_x);
static const word ils_s_tdown_y = offsetof(struct ils, ils_s_tdown_y);
static const word ils_e_tdown_x = offsetof(struct ils, ils_e_tdown_x);
static const word ils_e_tdown_y = offsetof(struct ils, ils_e_tdown_y);
static const word ils_w_tdown_x = offsetof(struct ils, ils_w_tdown_x);
static const word ils_w_tdown_y = offsetof(struct ils, ils_w_tdown_y);
static const word taxi_end_ptr = offsetof(struct taxi, taxi_end_ptr);
static const word taxi_x_mod = offsetof(struct taxi, taxi_x_mod);
static const word taxi_y_mod = offsetof(struct taxi, taxi_y_mod);
static const word tnode_xft = offsetof(struct tnode, tnode_xft);
static const word tnode_yft = offsetof(struct tnode, tnode_yft);


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
static const int rwy_1836 = 0*8;
static const int rwy_1331 = 1*8;
static const int rwy_0927 = 2*8;
static const int rwy_0422 = 3*8;
static const int rwy_width256 = 0;
static const int rwy_width192 = 2;
static const int rwy_width128 = 4;
enum {
    ils_n = 0x8,
    ils_s = 0x4,
    ils_e = 0x2,
    ils_w = 0x1,
};
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
static const int rwy_rec_size = 12;
static const int ils_rec_size = 22;
static const int taxi_rec_size = 6;
static const int tnode_rec_size = 4;
static const int z_approx_thres = 8192;

	#define M2C_MODULE_RWY_TAXI 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& sortrunway;
extern dw& dummy1e54323e_data_2_1004;
extern dw& dummy1e54323e_data_4_1005;
extern dw& dummy1e54323e_data_6_1006;
extern dw& runwaywidth;
extern dw& dummy1e54323e_data_a_1010;
extern dw& dummy1e54323e_data_c_1011;
extern dw& endtype256;
extern dw& dummy1e54323e_data_10_1015;
extern dw& dummy1e54323e_data_12_1016;
extern dw& dummy1e54323e_data_14_1017;
extern dw& dummy1e54323e_data_16_1018;
extern dw& dummy1e54323e_data_18_1019;
extern dw& dummy1e54323e_data_1a_1020;
extern dw& dummy1e54323e_data_1c_1021;
extern dw& dummy1e54323e_data_1e_1022;
extern dw& dummy1e54323e_data_20_1023;
extern dw& dummy1e54323e_data_22_1024;
extern dw& dummy1e54323e_data_24_1025;
extern dw& dummy1e54323e_data_26_1026;
extern dw& dummy1e54323e_data_28_1027;
extern dw& dummy1e54323e_data_2a_1028;
extern dw& dummy1e54323e_data_2c_1029;
extern dw& endtype192;
extern dw& dummy1e54323e_data_30_1033;
extern dw& dummy1e54323e_data_32_1034;
extern dw& dummy1e54323e_data_34_1035;
extern dw& dummy1e54323e_data_36_1036;
extern dw& dummy1e54323e_data_38_1037;
extern dw& dummy1e54323e_data_3a_1038;
extern dw& dummy1e54323e_data_3c_1039;
extern dw& dummy1e54323e_data_3e_1040;
extern dw& dummy1e54323e_data_40_1041;
extern dw& dummy1e54323e_data_42_1042;
extern dw& dummy1e54323e_data_44_1043;
extern dw& dummy1e54323e_data_46_1044;
extern dw& dummy1e54323e_data_48_1045;
extern dw& dummy1e54323e_data_4a_1046;
extern dw& dummy1e54323e_data_4c_1047;
extern dw& endtype128;
extern dw& dummy1e54323e_data_50_1051;
extern dw& dummy1e54323e_data_52_1052;
extern dw& dummy1e54323e_data_54_1053;
extern dw& dummy1e54323e_data_56_1054;
extern dw& dummy1e54323e_data_58_1055;
extern dw& dummy1e54323e_data_5a_1056;
extern dw& dummy1e54323e_data_5c_1057;
extern dw& dummy1e54323e_data_5e_1058;
extern dw& dummy1e54323e_data_60_1059;
extern dw& dummy1e54323e_data_62_1060;
extern dw& dummy1e54323e_data_64_1061;
extern dw& dummy1e54323e_data_66_1062;
extern dw& dummy1e54323e_data_68_1063;
extern dw& dummy1e54323e_data_6a_1064;
extern dw& dummy1e54323e_data_6c_1065;
extern dw& scanvertexlist;
extern dw& dummy1e54323e_data_70_1076;
extern dw& dummy1e54323e_data_72_1077;
extern dw& makevertex;
extern dw& dummy1e54323e_data_76_1081;
extern db (& taxipoly)[5];
extern dw& endtype64;
extern dw& dummy1e54323e_data_7f_1090;
extern dw& dummy1e54323e_data_81_1091;
extern dw& dummy1e54323e_data_83_1092;
extern dw& dummy1e54323e_data_85_1093;
extern dw& dummy1e54323e_data_87_1094;
extern dw& dummy1e54323e_data_89_1095;
extern dw& dummy1e54323e_data_8b_1096;
extern dw& dummy1e54323e_data_8d_1097;
extern dw& dummy1e54323e_data_8f_1098;
extern dw& dummy1e54323e_data_91_1099;
extern dw& dummy1e54323e_data_93_1100;
extern dw& dummy1e54323e_data_95_1101;
extern dw& dummy1e54323e_data_97_1102;
extern dw& dummy1e54323e_data_99_1103;
extern dw& dummy1e54323e_data_9b_1104;
extern dw& dummy1e54323e_data_9d_1105;
extern dw& dummy1e54323e_data_9f_1106;
extern dw& dummy1e54323e_data_a1_1107;
extern dw& dummy1e54323e_data_a3_1108;
extern dw& dummy1e54323e_data_a5_1109;
extern dw& dummy1e54323e_data_a7_1110;
extern dw& dummy1e54323e_data_a9_1111;
extern dw& dummy1e54323e_data_ab_1112;
extern dw& dummy1e54323e_data_ad_1113;
extern dw& dummy1e54323e_data_af_1114;
extern dw& dummy1e54323e_data_b1_1115;
extern dw& dummy1e54323e_data_b3_1116;
extern dw& dummy1e54323e_data_b5_1117;
extern dw& dummy1e54323e_data_b7_1118;
extern dw& dummy1e54323e_data_b9_1119;
extern dw& dummy1e54323e_data_bb_1120;
extern dw& vertexindex;
extern db& rwylightson;
extern db& rwylightcol;
extern dw (& apprlightpoints)[2];
extern dw (& dummy1e54323e_data_c5_1136)[2];
extern dw (& dummy1e54323e_data_c9_1137)[2];
extern dw (& dummy1e54323e_data_cd_1138)[2];
extern dw (& dummy1e54323e_data_d1_1139)[2];
extern dw (& dummy1e54323e_data_d5_1140)[2];
extern dw (& dummy1e54323e_data_d9_1141)[2];
extern dw (& dummy1e54323e_data_dd_1142)[2];
extern db& featobj1;
extern db& viscode;
extern db& vertexloop1;
extern db& dummy1e54323e_viscode_e2_2631;
extern db& dummy1e54323e_viscode_e3_2639;
extern db& vertexloop2;
extern db& dummy1e54323e_viscode_e5_2686;
extern db& dummy1e54323e_viscode_e6_2694;
extern db& vertexloop8;
extern db& dummy1e54323e_viscode_e8_2744;
extern db& dummy1e54323e_viscode_e9_2752;
extern db& makevertloop1;
extern db& dummy1e54323e_viscode_eb_2813;
extern db& dummy1e54323e_viscode_ec_2821;
extern db& makevertloop2;
extern db& dummy1e54323e_viscode_ee_2907;
extern db& dummy1e54323e_viscode_ef_2915;

	
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
#ifndef M2C_CODE_EQUATE_drawrunways
#define M2C_CODE_EQUATE_drawrunways 1
static const dd kdrawrunways = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_nextrunway
#define M2C_CODE_EQUATE_nextrunway 1
static const dd knextrunway = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_exitrunways
#define M2C_CODE_EQUATE_exitrunways 1
static const dd kexitrunways = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_lightsok
#define M2C_CODE_EQUATE_lightsok 1
static const dd klightsok = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_lightson
#define M2C_CODE_EQUATE_lightson 1
static const dd klightson = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_checkns
#define M2C_CODE_EQUATE_checkns 1
static const dd kcheckns = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_checkew
#define M2C_CODE_EQUATE_checkew 1
static const dd kcheckew = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_skiprwylightson
#define M2C_CODE_EQUATE_skiprwylightson 1
static const dd kskiprwylightson = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_sortrunway1
#define M2C_CODE_EQUATE_sortrunway1 1
static const dd ksortrunway1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_contrunway1
#define M2C_CODE_EQUATE_contrunway1 1
static const dd kcontrunway1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_drawrwylights1
#define M2C_CODE_EQUATE_drawrwylights1 1
static const dd kdrawrwylights1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_exitrunway1
#define M2C_CODE_EQUATE_exitrunway1 1
static const dd kexitrunway1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_drawapprlights1
#define M2C_CODE_EQUATE_drawapprlights1 1
static const dd kdrawapprlights1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_sortrunway2
#define M2C_CODE_EQUATE_sortrunway2 1
static const dd ksortrunway2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_contrunway2
#define M2C_CODE_EQUATE_contrunway2 1
static const dd kcontrunway2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_drawrwylights2
#define M2C_CODE_EQUATE_drawrwylights2 1
static const dd kdrawrwylights2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_exitrunway2
#define M2C_CODE_EQUATE_exitrunway2 1
static const dd kexitrunway2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_drawapprlights2
#define M2C_CODE_EQUATE_drawapprlights2 1
static const dd kdrawapprlights2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_sortrunway8
#define M2C_CODE_EQUATE_sortrunway8 1
static const dd ksortrunway8 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_contrunway8
#define M2C_CODE_EQUATE_contrunway8 1
static const dd kcontrunway8 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_drawrwylights8
#define M2C_CODE_EQUATE_drawrwylights8 1
static const dd kdrawrwylights8 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_exitrunway8
#define M2C_CODE_EQUATE_exitrunway8 1
static const dd kexitrunway8 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_drawapprlights8
#define M2C_CODE_EQUATE_drawapprlights8 1
static const dd kdrawapprlights8 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_sortrunway16
#define M2C_CODE_EQUATE_sortrunway16 1
static const dd ksortrunway16 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_exitrunway16
#define M2C_CODE_EQUATE_exitrunway16 1
static const dd kexitrunway16 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_drawrwylights16
#define M2C_CODE_EQUATE_drawrwylights16 1
static const dd kdrawrwylights16 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_exittaxiways1
#define M2C_CODE_EQUATE_exittaxiways1 1
static const dd kexittaxiways1 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_drawtaxiways
#define M2C_CODE_EQUATE_drawtaxiways 1
static const dd kdrawtaxiways = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_contlines
#define M2C_CODE_EQUATE_contlines 1
static const dd kcontlines = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_contpolys
#define M2C_CODE_EQUATE_contpolys 1
static const dd kcontpolys = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_exittaxiways2
#define M2C_CODE_EQUATE_exittaxiways2 1
static const dd kexittaxiways2 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_nextlineface
#define M2C_CODE_EQUATE_nextlineface 1
static const dd knextlineface = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_taxilights1
#define M2C_CODE_EQUATE_taxilights1 1
static const dd ktaxilights1 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_taxilightslp1
#define M2C_CODE_EQUATE_taxilightslp1 1
static const dd ktaxilightslp1 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_nextpolyface
#define M2C_CODE_EQUATE_nextpolyface 1
static const dd knextpolyface = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_taxilights2
#define M2C_CODE_EQUATE_taxilights2 1
static const dd ktaxilights2 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_nextpoly
#define M2C_CODE_EQUATE_nextpoly 1
static const dd knextpoly = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_skippoly
#define M2C_CODE_EQUATE_skippoly 1
static const dd kskippoly = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_exittaxiways3
#define M2C_CODE_EQUATE_exittaxiways3 1
static const dd kexittaxiways3 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_taxilightslp2
#define M2C_CODE_EQUATE_taxilightslp2 1
static const dd ktaxilightslp2 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex1
#define M2C_CODE_EQUATE_scanvertex1 1
static const dd kscanvertex1 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_skipairfieldfriendly1
#define M2C_CODE_EQUATE_skipairfieldfriendly1 1
static const dd kskipairfieldfriendly1 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex1
#define M2C_CODE_EQUATE_exitvertex1 1
static const dd kexitvertex1 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex2
#define M2C_CODE_EQUATE_scanvertex2 1
static const dd kscanvertex2 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skipairfieldfriendly2
#define M2C_CODE_EQUATE_skipairfieldfriendly2 1
static const dd kskipairfieldfriendly2 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex2
#define M2C_CODE_EQUATE_exitvertex2 1
static const dd kexitvertex2 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex8
#define M2C_CODE_EQUATE_scanvertex8 1
static const dd kscanvertex8 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_skipairfieldfriendly3
#define M2C_CODE_EQUATE_skipairfieldfriendly3 1
static const dd kskipairfieldfriendly3 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop8
#define M2C_CODE_EQUATE_vertexloop8 1
static const dd kvertexloop8 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex8
#define M2C_CODE_EQUATE_exitvertex8 1
static const dd kexitvertex8 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_viscode_9_proc
#define M2C_CODE_EQUATE_viscode_9_proc 1
static const dd kviscode_9_proc = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_exitmakevert1
#define M2C_CODE_EQUATE_exitmakevert1 1
static const dd kexitmakevert1 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_makevertex1
#define M2C_CODE_EQUATE_makevertex1 1
static const dd kmakevertex1 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_skipairfieldfriendly4
#define M2C_CODE_EQUATE_skipairfieldfriendly4 1
static const dd kskipairfieldfriendly4 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_makevertloop1
#define M2C_CODE_EQUATE_makevertloop1 1
static const dd kmakevertloop1 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_viscode_c_proc
#define M2C_CODE_EQUATE_viscode_c_proc 1
static const dd kviscode_c_proc = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_exitmakevert2
#define M2C_CODE_EQUATE_exitmakevert2 1
static const dd kexitmakevert2 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_makevertex2
#define M2C_CODE_EQUATE_makevertex2 1
static const dd kmakevertex2 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_skipairfieldfriendly5
#define M2C_CODE_EQUATE_skipairfieldfriendly5 1
static const dd kskipairfieldfriendly5 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_makevertloop2
#define M2C_CODE_EQUATE_makevertloop2 1
static const dd kmakevertloop2 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_intorwylights1
#define M2C_CODE_EQUATE_intorwylights1 1
static const dd kintorwylights1 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_24_skip 1
static const dd k__m2c_macrolocal_24_skip = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_exitrwylights1
#define M2C_CODE_EQUATE_exitrwylights1 1
static const dd kexitrwylights1 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_rwylightslp1
#define M2C_CODE_EQUATE_rwylightslp1 1
static const dd krwylightslp1 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_createlights1
#define M2C_CODE_EQUATE_createlights1 1
static const dd kcreatelights1 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_exitapprlights1
#define M2C_CODE_EQUATE_exitapprlights1 1
static const dd kexitapprlights1 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_apprlightslp1
#define M2C_CODE_EQUATE_apprlightslp1 1
static const dd kapprlightslp1 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_intoapprlights2
#define M2C_CODE_EQUATE_intoapprlights2 1
static const dd kintoapprlights2 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_createlights2
#define M2C_CODE_EQUATE_createlights2 1
static const dd kcreatelights2 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_apprlightslp2
#define M2C_CODE_EQUATE_apprlightslp2 1
static const dd kapprlightslp2 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x106f;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createlights1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createlights2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawapprlights1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawapprlights2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawapprlights8(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrunways(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrwylights1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrwylights16(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrwylights2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrwylights8(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawtaxiways(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool makevertex1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool makevertex2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex8(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrunway1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrunway16(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrunway2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortrunway8(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_9_proc(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_c_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool dotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polydotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyline(m2c::_offsets, struct m2c::_STATE*);
extern bool polylineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool quicklineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ypos8
extern dw& ypos8;
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
#ifndef xe
extern dw& xe;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef xsecscan
extern dw& xsecscan;
#endif
#ifndef xpos16
extern dw& xpos16;
#endif
#ifndef xpos1
extern dw& xpos1;
#endif
#ifndef xcrt
extern dw& xcrt;
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
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef xpos8
extern dw& xpos8;
#endif
#ifndef zgy
extern dw& zgy;
#endif
#ifndef zpos
extern dw& zpos;
#endif
#ifndef col1
extern db& col1;
#endif
#ifndef xgy
extern dw& xgy;
#endif
#ifndef ypos
extern dw& ypos;
#endif
#ifndef sctrscalemode
extern dw& sctrscalemode;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef xgx
extern dw& xgx;
#endif
#ifndef ygy
extern dw& ygy;
#endif
#ifndef stndpoly4
extern db& stndpoly4;
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
#ifndef ypos1
extern dw& ypos1;
#endif
#ifndef zgx
extern dw& zgx;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef zpos1
extern dw& zpos1;
#endif
#ifndef zpos2
extern dw& zpos2;
#endif
#ifndef ygx
extern dw& ygx;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef modelmapindex
extern dw& modelmapindex;
#endif
#ifndef ypos16
extern dw& ypos16;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef ysecscan
extern dw& ysecscan;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef xpos
extern dw& xpos;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
#ifndef night
extern db& night;
#endif

#endif
