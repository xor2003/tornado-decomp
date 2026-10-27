/* THIS IS GENERATED FILE */

        
#ifndef __M2C_RAILWAYS_STUBS_H__
#define __M2C_RAILWAYS_STUBS_H__

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
static const int z_approx_thres = 8192;
static const int z_track_thres = 1024;
static const int p1 = 4;
static const int p2 = 6;
static const int p3 = 8;
static const int p4 = 10;
static const int p5 = 12;
static const int lh_p1 = 14;
static const int rh_p1 = 16;
static const int lh_p2 = 18;
static const int rh_p2 = 20;
static const int lh_p3 = 22;
static const int rh_p3 = 24;
static const int lh_p4 = 26;
static const int rh_p4 = 28;
static const int lh_p5 = 30;
static const int rh_p5 = 32;

	#define M2C_MODULE_RAILWAYS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& polyrails;
extern dw& dummyd96f7c97_data_2_930;
extern dw& dummyd96f7c97_data_4_931;
extern dw& dummyd96f7c97_data_6_932;
extern dw& linerails;
extern dw& dummyd96f7c97_data_a_936;
extern dw& dummyd96f7c97_data_c_937;
extern dw& dummyd96f7c97_data_e_938;
extern dw& singletracks;
extern dw& dummyd96f7c97_data_12_942;
extern dw& doubletracks;
extern dw& dummyd96f7c97_data_16_946;
extern dw& drawrailtype;
extern dw& trackscalevals;
extern dw& dummyd96f7c97_data_1c_951;
extern dw& trackscale;
extern dw& raillength1;
extern dw& dummyd96f7c97_data_22_956;
extern dw& dummyd96f7c97_data_24_957;
extern dw& dummyd96f7c97_data_26_958;
extern dw& dummyd96f7c97_data_28_959;
extern dw& dummyd96f7c97_data_2a_960;
extern dw& dummyd96f7c97_data_2c_961;
extern dw& dummyd96f7c97_data_2e_962;
extern dw& dummyd96f7c97_data_30_963;
extern dw& dummyd96f7c97_data_32_964;
extern dw& dummyd96f7c97_data_34_965;
extern dw& dummyd96f7c97_data_36_966;
extern dw& dummyd96f7c97_data_38_967;
extern dw& dummyd96f7c97_data_3a_968;
extern dw& dummyd96f7c97_data_3c_969;
extern dw& dummyd96f7c97_data_3e_970;
extern dw& raillength2;
extern dw& dummyd96f7c97_data_42_974;
extern dw& dummyd96f7c97_data_44_975;
extern dw& dummyd96f7c97_data_46_976;
extern dw& dummyd96f7c97_data_48_977;
extern dw& dummyd96f7c97_data_4a_978;
extern dw& dummyd96f7c97_data_4c_979;
extern dw& dummyd96f7c97_data_4e_980;
extern dw& dummyd96f7c97_data_50_981;
extern dw& dummyd96f7c97_data_52_982;
extern dw& dummyd96f7c97_data_54_983;
extern dw& dummyd96f7c97_data_56_984;
extern dw& dummyd96f7c97_data_58_985;
extern dw& dummyd96f7c97_data_5a_986;
extern dw& dummyd96f7c97_data_5c_987;
extern dw& dummyd96f7c97_data_5e_988;
extern dw& raillength8;
extern dw& dummyd96f7c97_data_62_992;
extern dw& dummyd96f7c97_data_64_993;
extern dw& dummyd96f7c97_data_66_994;
extern dw& dummyd96f7c97_data_68_995;
extern dw& dummyd96f7c97_data_6a_996;
extern dw& dummyd96f7c97_data_6c_997;
extern dw& dummyd96f7c97_data_6e_998;
extern dw& dummyd96f7c97_data_70_999;
extern dw& dummyd96f7c97_data_72_1000;
extern dw& dummyd96f7c97_data_74_1001;
extern dw& dummyd96f7c97_data_76_1002;
extern dw& dummyd96f7c97_data_78_1003;
extern dw& dummyd96f7c97_data_7a_1004;
extern dw& dummyd96f7c97_data_7c_1005;
extern dw& dummyd96f7c97_data_7e_1006;
extern dw& raillength16;
extern dw& dummyd96f7c97_data_82_1010;
extern dw& dummyd96f7c97_data_84_1011;
extern dw& dummyd96f7c97_data_86_1012;
extern dw& dummyd96f7c97_data_88_1013;
extern dw& dummyd96f7c97_data_8a_1014;
extern dw& dummyd96f7c97_data_8c_1015;
extern dw& dummyd96f7c97_data_8e_1016;
extern dw& dummyd96f7c97_data_90_1017;
extern dw& dummyd96f7c97_data_92_1018;
extern dw& dummyd96f7c97_data_94_1019;
extern dw& dummyd96f7c97_data_96_1020;
extern dw& dummyd96f7c97_data_98_1021;
extern dw& dummyd96f7c97_data_9a_1022;
extern dw& dummyd96f7c97_data_9c_1023;
extern dw& dummyd96f7c97_data_9e_1024;
extern dw& railwidth1;
extern dw& dummyd96f7c97_data_a2_1028;
extern dw& dummyd96f7c97_data_a4_1029;
extern dw& dummyd96f7c97_data_a6_1030;
extern dw& dummyd96f7c97_data_a8_1031;
extern dw& dummyd96f7c97_data_aa_1032;
extern dw& dummyd96f7c97_data_ac_1033;
extern dw& dummyd96f7c97_data_ae_1034;
extern dw& dummyd96f7c97_data_b0_1035;
extern dw& dummyd96f7c97_data_b2_1036;
extern dw& dummyd96f7c97_data_b4_1037;
extern dw& dummyd96f7c97_data_b6_1038;
extern dw& dummyd96f7c97_data_b8_1039;
extern dw& dummyd96f7c97_data_ba_1040;
extern dw& dummyd96f7c97_data_bc_1041;
extern dw& dummyd96f7c97_data_be_1042;
extern dw& dummyd96f7c97_data_c0_1043;
extern dw& dummyd96f7c97_data_c2_1044;
extern dw& dummyd96f7c97_data_c4_1045;
extern dw& dummyd96f7c97_data_c6_1046;
extern dw& dummyd96f7c97_data_c8_1047;
extern dw& dummyd96f7c97_data_ca_1048;
extern dw& dummyd96f7c97_data_cc_1049;
extern dw& dummyd96f7c97_data_ce_1050;
extern dw& dummyd96f7c97_data_d0_1051;
extern dw& dummyd96f7c97_data_d2_1052;
extern dw& dummyd96f7c97_data_d4_1053;
extern dw& dummyd96f7c97_data_d6_1054;
extern dw& dummyd96f7c97_data_d8_1055;
extern dw& dummyd96f7c97_data_da_1056;
extern dw& dummyd96f7c97_data_dc_1057;
extern dw& dummyd96f7c97_data_de_1058;
extern dw& dummyd96f7c97_data_e0_1059;
extern dw& dummyd96f7c97_data_e2_1060;
extern dw& dummyd96f7c97_data_e4_1061;
extern dw& dummyd96f7c97_data_e6_1062;
extern dw& dummyd96f7c97_data_e8_1063;
extern dw& dummyd96f7c97_data_ea_1064;
extern dw& dummyd96f7c97_data_ec_1065;
extern dw& dummyd96f7c97_data_ee_1066;
extern dw& dummyd96f7c97_data_f0_1067;
extern dw& dummyd96f7c97_data_f2_1068;
extern dw& dummyd96f7c97_data_f4_1069;
extern dw& dummyd96f7c97_data_f6_1070;
extern dw& dummyd96f7c97_data_f8_1071;
extern dw& dummyd96f7c97_data_fa_1072;
extern dw& dummyd96f7c97_data_fc_1073;
extern dw& dummyd96f7c97_data_fe_1074;
extern dw& dummyd96f7c97_data_100_1075;
extern dw& dummyd96f7c97_data_102_1076;
extern dw& dummyd96f7c97_data_104_1077;
extern dw& dummyd96f7c97_data_106_1078;
extern dw& dummyd96f7c97_data_108_1079;
extern dw& dummyd96f7c97_data_10a_1080;
extern dw& dummyd96f7c97_data_10c_1081;
extern dw& dummyd96f7c97_data_10e_1082;
extern dw& dummyd96f7c97_data_110_1083;
extern dw& dummyd96f7c97_data_112_1084;
extern dw& dummyd96f7c97_data_114_1085;
extern dw& dummyd96f7c97_data_116_1086;
extern dw& dummyd96f7c97_data_118_1087;
extern dw& dummyd96f7c97_data_11a_1088;
extern dw& dummyd96f7c97_data_11c_1089;
extern dw& dummyd96f7c97_data_11e_1090;
extern dw& railwidth2;
extern dw& dummyd96f7c97_data_122_1094;
extern dw& dummyd96f7c97_data_124_1095;
extern dw& dummyd96f7c97_data_126_1096;
extern dw& dummyd96f7c97_data_128_1097;
extern dw& dummyd96f7c97_data_12a_1098;
extern dw& dummyd96f7c97_data_12c_1099;
extern dw& dummyd96f7c97_data_12e_1100;
extern dw& dummyd96f7c97_data_130_1101;
extern dw& dummyd96f7c97_data_132_1102;
extern dw& dummyd96f7c97_data_134_1103;
extern dw& dummyd96f7c97_data_136_1104;
extern dw& dummyd96f7c97_data_138_1105;
extern dw& dummyd96f7c97_data_13a_1106;
extern dw& dummyd96f7c97_data_13c_1107;
extern dw& dummyd96f7c97_data_13e_1108;
extern dw& dummyd96f7c97_data_140_1109;
extern dw& dummyd96f7c97_data_142_1110;
extern dw& dummyd96f7c97_data_144_1111;
extern dw& dummyd96f7c97_data_146_1112;
extern dw& dummyd96f7c97_data_148_1113;
extern dw& dummyd96f7c97_data_14a_1114;
extern dw& dummyd96f7c97_data_14c_1115;
extern dw& dummyd96f7c97_data_14e_1116;
extern dw& dummyd96f7c97_data_150_1117;
extern dw& dummyd96f7c97_data_152_1118;
extern dw& dummyd96f7c97_data_154_1119;
extern dw& dummyd96f7c97_data_156_1120;
extern dw& dummyd96f7c97_data_158_1121;
extern dw& dummyd96f7c97_data_15a_1122;
extern dw& dummyd96f7c97_data_15c_1123;
extern dw& dummyd96f7c97_data_15e_1124;
extern dw& dummyd96f7c97_data_160_1125;
extern dw& dummyd96f7c97_data_162_1126;
extern dw& dummyd96f7c97_data_164_1127;
extern dw& dummyd96f7c97_data_166_1128;
extern dw& dummyd96f7c97_data_168_1129;
extern dw& dummyd96f7c97_data_16a_1130;
extern dw& dummyd96f7c97_data_16c_1131;
extern dw& dummyd96f7c97_data_16e_1132;
extern dw& dummyd96f7c97_data_170_1133;
extern dw& dummyd96f7c97_data_172_1134;
extern dw& dummyd96f7c97_data_174_1135;
extern dw& dummyd96f7c97_data_176_1136;
extern dw& dummyd96f7c97_data_178_1137;
extern dw& dummyd96f7c97_data_17a_1138;
extern dw& dummyd96f7c97_data_17c_1139;
extern dw& dummyd96f7c97_data_17e_1140;
extern dw& dummyd96f7c97_data_180_1141;
extern dw& dummyd96f7c97_data_182_1142;
extern dw& dummyd96f7c97_data_184_1143;
extern dw& dummyd96f7c97_data_186_1144;
extern dw& dummyd96f7c97_data_188_1145;
extern dw& dummyd96f7c97_data_18a_1146;
extern dw& dummyd96f7c97_data_18c_1147;
extern dw& dummyd96f7c97_data_18e_1148;
extern dw& dummyd96f7c97_data_190_1149;
extern dw& dummyd96f7c97_data_192_1150;
extern dw& dummyd96f7c97_data_194_1151;
extern dw& dummyd96f7c97_data_196_1152;
extern dw& dummyd96f7c97_data_198_1153;
extern dw& dummyd96f7c97_data_19a_1154;
extern dw& dummyd96f7c97_data_19c_1155;
extern dw& dummyd96f7c97_data_19e_1156;
extern dw& strackend1;
extern dw& dummyd96f7c97_data_1a2_1160;
extern dw& dummyd96f7c97_data_1a4_1161;
extern dw& dummyd96f7c97_data_1a6_1162;
extern dw& dummyd96f7c97_data_1a8_1163;
extern dw& dummyd96f7c97_data_1aa_1164;
extern dw& dummyd96f7c97_data_1ac_1165;
extern dw& dummyd96f7c97_data_1ae_1166;
extern dw& dummyd96f7c97_data_1b0_1167;
extern dw& dummyd96f7c97_data_1b2_1168;
extern dw& dummyd96f7c97_data_1b4_1169;
extern dw& dummyd96f7c97_data_1b6_1170;
extern dw& dummyd96f7c97_data_1b8_1171;
extern dw& dummyd96f7c97_data_1ba_1172;
extern dw& dummyd96f7c97_data_1bc_1173;
extern dw& dummyd96f7c97_data_1be_1174;
extern dw& dummyd96f7c97_data_1c0_1175;
extern dw& dummyd96f7c97_data_1c2_1176;
extern dw& dummyd96f7c97_data_1c4_1177;
extern dw& dummyd96f7c97_data_1c6_1178;
extern dw& dummyd96f7c97_data_1c8_1179;
extern dw& dummyd96f7c97_data_1ca_1180;
extern dw& dummyd96f7c97_data_1cc_1181;
extern dw& dummyd96f7c97_data_1ce_1182;
extern dw& dummyd96f7c97_data_1d0_1183;
extern dw& dummyd96f7c97_data_1d2_1184;
extern dw& dummyd96f7c97_data_1d4_1185;
extern dw& dummyd96f7c97_data_1d6_1186;
extern dw& dummyd96f7c97_data_1d8_1187;
extern dw& dummyd96f7c97_data_1da_1188;
extern dw& dummyd96f7c97_data_1dc_1189;
extern dw& dummyd96f7c97_data_1de_1190;
extern dw& strackend2;
extern dw& dummyd96f7c97_data_1e2_1194;
extern dw& dummyd96f7c97_data_1e4_1195;
extern dw& dummyd96f7c97_data_1e6_1196;
extern dw& dummyd96f7c97_data_1e8_1197;
extern dw& dummyd96f7c97_data_1ea_1198;
extern dw& dummyd96f7c97_data_1ec_1199;
extern dw& dummyd96f7c97_data_1ee_1200;
extern dw& dummyd96f7c97_data_1f0_1201;
extern dw& dummyd96f7c97_data_1f2_1202;
extern dw& dummyd96f7c97_data_1f4_1203;
extern dw& dummyd96f7c97_data_1f6_1204;
extern dw& dummyd96f7c97_data_1f8_1205;
extern dw& dummyd96f7c97_data_1fa_1206;
extern dw& dummyd96f7c97_data_1fc_1207;
extern dw& dummyd96f7c97_data_1fe_1208;
extern dw& dummyd96f7c97_data_200_1209;
extern dw& dummyd96f7c97_data_202_1210;
extern dw& dummyd96f7c97_data_204_1211;
extern dw& dummyd96f7c97_data_206_1212;
extern dw& dummyd96f7c97_data_208_1213;
extern dw& dummyd96f7c97_data_20a_1214;
extern dw& dummyd96f7c97_data_20c_1215;
extern dw& dummyd96f7c97_data_20e_1216;
extern dw& dummyd96f7c97_data_210_1217;
extern dw& dummyd96f7c97_data_212_1218;
extern dw& dummyd96f7c97_data_214_1219;
extern dw& dummyd96f7c97_data_216_1220;
extern dw& dummyd96f7c97_data_218_1221;
extern dw& dummyd96f7c97_data_21a_1222;
extern dw& dummyd96f7c97_data_21c_1223;
extern dw& dummyd96f7c97_data_21e_1224;
extern dw& dtrackend16;
extern dw& dummyd96f7c97_data_222_1228;
extern dw& dummyd96f7c97_data_224_1229;
extern dw& dummyd96f7c97_data_226_1230;
extern dw& dummyd96f7c97_data_228_1231;
extern dw& dummyd96f7c97_data_22a_1232;
extern dw& dummyd96f7c97_data_22c_1233;
extern dw& dummyd96f7c97_data_22e_1234;
extern dw& dummyd96f7c97_data_230_1235;
extern dw& dummyd96f7c97_data_232_1236;
extern dw& dummyd96f7c97_data_234_1237;
extern dw& dummyd96f7c97_data_236_1238;
extern dw& dummyd96f7c97_data_238_1239;
extern dw& dummyd96f7c97_data_23a_1240;
extern dw& dummyd96f7c97_data_23c_1241;
extern dw& dummyd96f7c97_data_23e_1242;
extern dw& dummyd96f7c97_data_240_1243;
extern dw& dummyd96f7c97_data_242_1244;
extern dw& dummyd96f7c97_data_244_1245;
extern dw& dummyd96f7c97_data_246_1246;
extern dw& dummyd96f7c97_data_248_1247;
extern dw& dummyd96f7c97_data_24a_1248;
extern dw& dummyd96f7c97_data_24c_1249;
extern dw& dummyd96f7c97_data_24e_1250;
extern dw& dummyd96f7c97_data_250_1251;
extern dw& dummyd96f7c97_data_252_1252;
extern dw& dummyd96f7c97_data_254_1253;
extern dw& dummyd96f7c97_data_256_1254;
extern dw& dummyd96f7c97_data_258_1255;
extern dw& dummyd96f7c97_data_25a_1256;
extern dw& dummyd96f7c97_data_25c_1257;
extern dw& dummyd96f7c97_data_25e_1258;
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
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_drawrailsexit1
#define M2C_CODE_EQUATE_drawrailsexit1 1
static const dd kdrawrailsexit1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_drawrailways
#define M2C_CODE_EQUATE_drawrailways 1
static const dd kdrawrailways = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_drawnextrail
#define M2C_CODE_EQUATE_drawnextrail 1
static const dd kdrawnextrail = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_skiprail
#define M2C_CODE_EQUATE_skiprail 1
static const dd kskiprail = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_drawrailsexit2
#define M2C_CODE_EQUATE_drawrailsexit2 1
static const dd kdrawrailsexit2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_drawnexttrack
#define M2C_CODE_EQUATE_drawnexttrack 1
static const dd kdrawnexttrack = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_skiptrack
#define M2C_CODE_EQUATE_skiptrack 1
static const dd kskiptrack = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_polyrail1
#define M2C_CODE_EQUATE_polyrail1 1
static const dd kpolyrail1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_exitpolyrail1
#define M2C_CODE_EQUATE_exitpolyrail1 1
static const dd kexitpolyrail1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_polyrail2
#define M2C_CODE_EQUATE_polyrail2 1
static const dd kpolyrail2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_exitpolyrail2
#define M2C_CODE_EQUATE_exitpolyrail2 1
static const dd kexitpolyrail2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_linerail1
#define M2C_CODE_EQUATE_linerail1 1
static const dd klinerail1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_exitlinerail1
#define M2C_CODE_EQUATE_exitlinerail1 1
static const dd kexitlinerail1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_linerail2
#define M2C_CODE_EQUATE_linerail2 1
static const dd klinerail2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_exitlinerail2
#define M2C_CODE_EQUATE_exitlinerail2 1
static const dd kexitlinerail2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_linerail8
#define M2C_CODE_EQUATE_linerail8 1
static const dd klinerail8 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_exitlinerail8
#define M2C_CODE_EQUATE_exitlinerail8 1
static const dd kexitlinerail8 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_linerail16
#define M2C_CODE_EQUATE_linerail16 1
static const dd klinerail16 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_exitlinerail16
#define M2C_CODE_EQUATE_exitlinerail16 1
static const dd kexitlinerail16 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_singletrack1
#define M2C_CODE_EQUATE_singletrack1 1
static const dd ksingletrack1 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_exitsingle1
#define M2C_CODE_EQUATE_exitsingle1 1
static const dd kexitsingle1 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_singletrack2
#define M2C_CODE_EQUATE_singletrack2 1
static const dd ksingletrack2 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_exitsingle2
#define M2C_CODE_EQUATE_exitsingle2 1
static const dd kexitsingle2 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_doubletrack1
#define M2C_CODE_EQUATE_doubletrack1 1
static const dd kdoubletrack1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_conttrackdraw
#define M2C_CODE_EQUATE_conttrackdraw 1
static const dd kconttrackdraw = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_sortdoubleend
#define M2C_CODE_EQUATE_sortdoubleend 1
static const dd ksortdoubleend = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_doubletrack2
#define M2C_CODE_EQUATE_doubletrack2 1
static const dd kdoubletrack2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_scaleok
#define M2C_CODE_EQUATE_scaleok 1
static const dd kscaleok = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1038;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool doubletrack1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool doubletrack2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrailways(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool linerail1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool linerail16(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool linerail2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool linerail8(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyrail1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyrail2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool singletrack1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool singletrack2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortdoubleend(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool quicklineclip(m2c::_offsets, struct m2c::_STATE*);

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
#ifndef ye
extern dw& ye;
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
#ifndef xgy
extern dw& xgy;
#endif
#ifndef raillayer1
extern db& raillayer1;
#endif
#ifndef sctrscalemode
extern dw& sctrscalemode;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef mapindex
extern dw& mapindex;
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
#ifndef ypos16
extern dw& ypos16;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif

#endif
