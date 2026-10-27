/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TOWNS_STUBS_H__
#define __M2C_TOWNS_STUBS_H__

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
static const int z_approx_thres = 2048;

	#define M2C_MODULE_TOWNS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& dummy72722ef9_data_0_966;
extern dw& dummy72722ef9_data_2_967;
extern dw& dummy72722ef9_data_4_968;
extern dw& dummy72722ef9_data_6_969;
extern dw& dummy72722ef9_data_8_970;
extern dw& dummy72722ef9_data_a_971;
extern dw& dummy72722ef9_data_c_972;
extern dw& dummy72722ef9_data_e_973;
extern dw& dummy72722ef9_data_10_974;
extern dw& dummy72722ef9_data_12_975;
extern dw& dummy72722ef9_data_14_976;
extern dw& dummy72722ef9_data_16_977;
extern dw& dummy72722ef9_data_18_978;
extern dw& scanvertexlist;
extern dw& dummy72722ef9_data_1c_983;
extern dw& dummy72722ef9_data_1e_984;
extern db (& roadpoly)[5];
extern dw& endtype;
extern dw& dummy72722ef9_data_27_993;
extern dw& dummy72722ef9_data_29_994;
extern dw& dummy72722ef9_data_2b_995;
extern dw& dummy72722ef9_data_2d_996;
extern dw& dummy72722ef9_data_2f_997;
extern dw& dummy72722ef9_data_31_998;
extern dw& dummy72722ef9_data_33_999;
extern dw& dummy72722ef9_data_35_1000;
extern dw& dummy72722ef9_data_37_1001;
extern dw& dummy72722ef9_data_39_1002;
extern dw& dummy72722ef9_data_3b_1003;
extern dw& dummy72722ef9_data_3d_1004;
extern dw& dummy72722ef9_data_3f_1005;
extern dw& dummy72722ef9_data_41_1006;
extern dw& dummy72722ef9_data_43_1007;
extern dw& dummy72722ef9_data_45_1008;
extern dw& dummy72722ef9_data_47_1009;
extern dw& dummy72722ef9_data_49_1010;
extern dw& dummy72722ef9_data_4b_1011;
extern dw& dummy72722ef9_data_4d_1012;
extern dw& dummy72722ef9_data_4f_1013;
extern dw& dummy72722ef9_data_51_1014;
extern dw& dummy72722ef9_data_53_1015;
extern dw& dummy72722ef9_data_55_1016;
extern dw& dummy72722ef9_data_57_1017;
extern dw& dummy72722ef9_data_59_1018;
extern dw& dummy72722ef9_data_5b_1019;
extern dw& dummy72722ef9_data_5d_1020;
extern dw& dummy72722ef9_data_5f_1021;
extern dw& dummy72722ef9_data_61_1022;
extern dw& dummy72722ef9_data_63_1023;
extern word& towntable;
extern db& featobj1;
extern db (& dummy72722ef9_featobj1_65_1031)[3];
extern db (& dummy72722ef9_featobj1_68_1032)[3];
extern db (& dummy72722ef9_featobj1_6b_1033)[3];
extern db (& dummy72722ef9_featobj1_6e_1034)[3];
extern db (& dummy72722ef9_featobj1_71_1035)[3];
extern db (& dummy72722ef9_featobj1_74_1036)[3];
extern db (& dummy72722ef9_featobj1_77_1037)[3];
extern db (& dummy72722ef9_featobj1_7a_1038)[3];
extern db (& dummy72722ef9_featobj1_7d_1039)[3];
extern db (& dummy72722ef9_featobj1_80_1040)[3];
extern db (& dummy72722ef9_featobj1_83_1041)[3];
extern db (& dummy72722ef9_featobj1_86_1042)[3];
extern db (& dummy72722ef9_featobj1_89_1043)[3];
extern db (& dummy72722ef9_featobj1_8c_1044)[3];
extern db (& dummy72722ef9_featobj1_8f_1045)[3];
extern db (& dummy72722ef9_featobj1_92_1046)[3];
extern db (& dummy72722ef9_featobj1_95_1047)[3];
extern db (& dummy72722ef9_featobj1_98_1048)[3];
extern db (& dummy72722ef9_featobj1_9b_1049)[3];
extern db (& dummy72722ef9_featobj1_9e_1050)[3];
extern db (& dummy72722ef9_featobj1_a1_1051)[3];
extern db (& dummy72722ef9_featobj1_a4_1052)[3];
extern db (& dummy72722ef9_featobj1_a7_1053)[3];
extern db (& dummy72722ef9_featobj1_aa_1054)[3];
extern db (& dummy72722ef9_featobj1_ad_1055)[3];
extern db (& dummy72722ef9_featobj1_b0_1056)[3];
extern db (& dummy72722ef9_featobj1_b3_1057)[3];
extern db (& dummy72722ef9_featobj1_b6_1058)[3];
extern db (& dummy72722ef9_featobj1_b9_1059)[3];
extern db (& dummy72722ef9_featobj1_bc_1060)[3];
extern db (& dummy72722ef9_featobj1_bf_1061)[3];
extern db (& dummy72722ef9_featobj1_c2_1062)[3];
extern db (& dummy72722ef9_featobj1_c5_1063)[3];
extern db (& dummy72722ef9_featobj1_c8_1064)[3];
extern db (& dummy72722ef9_featobj1_cb_1065)[3];
extern db (& dummy72722ef9_featobj1_ce_1066)[3];
extern db (& dummy72722ef9_featobj1_d1_1067)[3];
extern db (& dummy72722ef9_featobj1_d4_1068)[3];
extern db (& dummy72722ef9_featobj1_d7_1069)[3];
extern db (& dummy72722ef9_featobj1_da_1070)[3];
extern db& dummy72722ef9_featobj1_dd_1071;
extern dw& dummy72722ef9_featobj1_de_1072;
extern dw& town1_1;
extern db (& dummy72722ef9_featobj1_e2_1075)[14];
extern db (& dummy72722ef9_featobj1_f0_1076)[6];
extern db (& dummy72722ef9_featobj1_f6_1077)[11];
extern db (& dummy72722ef9_featobj1_101_1078)[5];
extern db (& dummy72722ef9_featobj1_106_1079)[7];
extern db (& dummy72722ef9_featobj1_10d_1081)[5];
extern db (& dummy72722ef9_featobj1_112_1082)[8];
extern db& dummy72722ef9_featobj1_11a_1083;
extern db (& dummy72722ef9_featobj1_11b_1086)[3];
extern db (& dummy72722ef9_featobj1_11e_1087)[3];
extern db (& dummy72722ef9_featobj1_121_1088)[3];
extern db (& dummy72722ef9_featobj1_124_1089)[3];
extern db (& dummy72722ef9_featobj1_127_1090)[3];
extern db (& dummy72722ef9_featobj1_12a_1091)[3];
extern db (& dummy72722ef9_featobj1_12d_1092)[3];
extern db (& dummy72722ef9_featobj1_130_1093)[3];
extern db (& dummy72722ef9_featobj1_133_1094)[3];
extern db (& dummy72722ef9_featobj1_136_1095)[3];
extern db (& dummy72722ef9_featobj1_139_1096)[3];
extern db (& dummy72722ef9_featobj1_13c_1097)[3];
extern db (& dummy72722ef9_featobj1_13f_1098)[3];
extern db (& dummy72722ef9_featobj1_142_1099)[3];
extern db (& dummy72722ef9_featobj1_145_1100)[3];
extern db (& dummy72722ef9_featobj1_148_1101)[3];
extern db (& dummy72722ef9_featobj1_14b_1102)[3];
extern db (& dummy72722ef9_featobj1_14e_1103)[3];
extern db (& dummy72722ef9_featobj1_151_1104)[3];
extern db (& dummy72722ef9_featobj1_154_1105)[3];
extern db (& dummy72722ef9_featobj1_157_1106)[3];
extern db (& dummy72722ef9_featobj1_15a_1107)[3];
extern db (& dummy72722ef9_featobj1_15d_1108)[3];
extern db (& dummy72722ef9_featobj1_160_1109)[3];
extern db (& dummy72722ef9_featobj1_163_1110)[3];
extern db (& dummy72722ef9_featobj1_166_1111)[3];
extern db (& dummy72722ef9_featobj1_169_1112)[3];
extern db (& dummy72722ef9_featobj1_16c_1113)[3];
extern db (& dummy72722ef9_featobj1_16f_1114)[3];
extern db (& dummy72722ef9_featobj1_172_1115)[3];
extern db& dummy72722ef9_featobj1_175_1116;
extern dw& dummy72722ef9_featobj1_176_1117;
extern dw& town2_1;
extern db (& dummy72722ef9_featobj1_17a_1120)[15];
extern db (& dummy72722ef9_featobj1_189_1121)[10];
extern db (& dummy72722ef9_featobj1_193_1122)[6];
extern db (& dummy72722ef9_featobj1_199_1123)[5];
extern db (& dummy72722ef9_featobj1_19e_1124)[4];
extern db& dummy72722ef9_featobj1_1a2_1125;
extern db (& dummy72722ef9_featobj1_1a3_1128)[3];
extern db (& dummy72722ef9_featobj1_1a6_1129)[3];
extern db (& dummy72722ef9_featobj1_1a9_1130)[3];
extern db (& dummy72722ef9_featobj1_1ac_1131)[3];
extern db (& dummy72722ef9_featobj1_1af_1132)[3];
extern db (& dummy72722ef9_featobj1_1b2_1133)[3];
extern db (& dummy72722ef9_featobj1_1b5_1134)[3];
extern db (& dummy72722ef9_featobj1_1b8_1135)[3];
extern db (& dummy72722ef9_featobj1_1bb_1136)[3];
extern db (& dummy72722ef9_featobj1_1be_1137)[3];
extern db (& dummy72722ef9_featobj1_1c1_1138)[3];
extern db (& dummy72722ef9_featobj1_1c4_1139)[3];
extern db (& dummy72722ef9_featobj1_1c7_1140)[3];
extern db (& dummy72722ef9_featobj1_1ca_1141)[3];
extern db (& dummy72722ef9_featobj1_1cd_1142)[3];
extern db (& dummy72722ef9_featobj1_1d0_1143)[3];
extern db (& dummy72722ef9_featobj1_1d3_1144)[3];
extern db (& dummy72722ef9_featobj1_1d6_1145)[3];
extern db (& dummy72722ef9_featobj1_1d9_1146)[3];
extern db (& dummy72722ef9_featobj1_1dc_1147)[3];
extern db (& dummy72722ef9_featobj1_1df_1148)[3];
extern db (& dummy72722ef9_featobj1_1e2_1149)[3];
extern db (& dummy72722ef9_featobj1_1e5_1150)[3];
extern db (& dummy72722ef9_featobj1_1e8_1151)[3];
extern db (& dummy72722ef9_featobj1_1eb_1152)[3];
extern db (& dummy72722ef9_featobj1_1ee_1153)[3];
extern db (& dummy72722ef9_featobj1_1f1_1154)[3];
extern db (& dummy72722ef9_featobj1_1f4_1155)[3];
extern db (& dummy72722ef9_featobj1_1f7_1156)[3];
extern db (& dummy72722ef9_featobj1_1fa_1157)[3];
extern db& dummy72722ef9_featobj1_1fd_1158;
extern dw& dummy72722ef9_featobj1_1fe_1159;
extern dw& town3_1;
extern db (& dummy72722ef9_featobj1_202_1162)[14];
extern db (& dummy72722ef9_featobj1_210_1163)[10];
extern db (& dummy72722ef9_featobj1_21a_1164)[10];
extern db (& dummy72722ef9_featobj1_224_1165)[4];
extern db& dummy72722ef9_featobj1_228_1166;
extern db (& dummy72722ef9_featobj1_229_1169)[3];
extern db (& dummy72722ef9_featobj1_22c_1170)[3];
extern db (& dummy72722ef9_featobj1_22f_1171)[3];
extern db (& dummy72722ef9_featobj1_232_1172)[3];
extern db (& dummy72722ef9_featobj1_235_1173)[3];
extern db (& dummy72722ef9_featobj1_238_1174)[3];
extern db (& dummy72722ef9_featobj1_23b_1175)[3];
extern db (& dummy72722ef9_featobj1_23e_1176)[3];
extern db (& dummy72722ef9_featobj1_241_1177)[3];
extern db (& dummy72722ef9_featobj1_244_1178)[3];
extern db (& dummy72722ef9_featobj1_247_1179)[3];
extern db (& dummy72722ef9_featobj1_24a_1180)[3];
extern db (& dummy72722ef9_featobj1_24d_1181)[3];
extern db (& dummy72722ef9_featobj1_250_1182)[3];
extern db (& dummy72722ef9_featobj1_253_1183)[3];
extern db (& dummy72722ef9_featobj1_256_1184)[3];
extern db (& dummy72722ef9_featobj1_259_1185)[3];
extern db (& dummy72722ef9_featobj1_25c_1186)[3];
extern db (& dummy72722ef9_featobj1_25f_1187)[3];
extern db (& dummy72722ef9_featobj1_262_1188)[3];
extern db (& dummy72722ef9_featobj1_265_1189)[3];
extern db (& dummy72722ef9_featobj1_268_1190)[3];
extern db (& dummy72722ef9_featobj1_26b_1191)[3];
extern db (& dummy72722ef9_featobj1_26e_1192)[3];
extern db (& dummy72722ef9_featobj1_271_1193)[3];
extern db (& dummy72722ef9_featobj1_274_1194)[3];
extern db (& dummy72722ef9_featobj1_277_1195)[3];
extern db (& dummy72722ef9_featobj1_27a_1196)[3];
extern db (& dummy72722ef9_featobj1_27d_1197)[3];
extern db (& dummy72722ef9_featobj1_280_1198)[3];
extern db (& dummy72722ef9_featobj1_283_1199)[3];
extern db (& dummy72722ef9_featobj1_286_1200)[3];
extern db (& dummy72722ef9_featobj1_289_1201)[3];
extern db (& dummy72722ef9_featobj1_28c_1202)[3];
extern db (& dummy72722ef9_featobj1_28f_1203)[3];
extern db& dummy72722ef9_featobj1_292_1204;
extern dw& dummy72722ef9_featobj1_293_1205;
extern dw& town4_1;
extern db (& dummy72722ef9_featobj1_297_1208)[14];
extern db (& dummy72722ef9_featobj1_2a5_1209)[12];
extern db (& dummy72722ef9_featobj1_2b1_1210)[6];
extern db (& dummy72722ef9_featobj1_2b7_1211)[13];
extern db& dummy72722ef9_featobj1_2c4_1212;
extern db (& dummy72722ef9_featobj1_2c5_1215)[3];
extern db (& dummy72722ef9_featobj1_2c8_1216)[3];
extern db (& dummy72722ef9_featobj1_2cb_1217)[3];
extern db (& dummy72722ef9_featobj1_2ce_1218)[3];
extern db (& dummy72722ef9_featobj1_2d1_1219)[3];
extern db (& dummy72722ef9_featobj1_2d4_1220)[3];
extern db (& dummy72722ef9_featobj1_2d7_1221)[3];
extern db (& dummy72722ef9_featobj1_2da_1222)[3];
extern db (& dummy72722ef9_featobj1_2dd_1223)[3];
extern db (& dummy72722ef9_featobj1_2e0_1224)[3];
extern db (& dummy72722ef9_featobj1_2e3_1225)[3];
extern db (& dummy72722ef9_featobj1_2e6_1226)[3];
extern db (& dummy72722ef9_featobj1_2e9_1227)[3];
extern db (& dummy72722ef9_featobj1_2ec_1228)[3];
extern db (& dummy72722ef9_featobj1_2ef_1229)[3];
extern db (& dummy72722ef9_featobj1_2f2_1230)[3];
extern db (& dummy72722ef9_featobj1_2f5_1231)[3];
extern db (& dummy72722ef9_featobj1_2f8_1232)[3];
extern db (& dummy72722ef9_featobj1_2fb_1233)[3];
extern db (& dummy72722ef9_featobj1_2fe_1234)[3];
extern db (& dummy72722ef9_featobj1_301_1235)[3];
extern db (& dummy72722ef9_featobj1_304_1236)[3];
extern db (& dummy72722ef9_featobj1_307_1237)[3];
extern db (& dummy72722ef9_featobj1_30a_1238)[3];
extern db& dummy72722ef9_featobj1_30d_1239;
extern dw& dummy72722ef9_featobj1_30e_1240;
extern dw& town5_1;
extern db (& dummy72722ef9_featobj1_312_1243)[6];
extern db (& dummy72722ef9_featobj1_318_1244)[9];
extern db (& dummy72722ef9_featobj1_321_1245)[10];
extern db (& dummy72722ef9_featobj1_32b_1246)[4];
extern db (& dummy72722ef9_featobj1_32f_1247)[5];
extern db& dummy72722ef9_featobj1_334_1248;
extern db (& dummy72722ef9_featobj1_335_1251)[3];
extern db (& dummy72722ef9_featobj1_338_1252)[3];
extern db (& dummy72722ef9_featobj1_33b_1253)[3];
extern db (& dummy72722ef9_featobj1_33e_1254)[3];
extern db (& dummy72722ef9_featobj1_341_1255)[3];
extern db (& dummy72722ef9_featobj1_344_1256)[3];
extern db (& dummy72722ef9_featobj1_347_1257)[3];
extern db (& dummy72722ef9_featobj1_34a_1258)[3];
extern db (& dummy72722ef9_featobj1_34d_1259)[3];
extern db (& dummy72722ef9_featobj1_350_1260)[3];
extern db (& dummy72722ef9_featobj1_353_1261)[3];
extern db (& dummy72722ef9_featobj1_356_1262)[3];
extern db (& dummy72722ef9_featobj1_359_1263)[3];
extern db (& dummy72722ef9_featobj1_35c_1264)[3];
extern db (& dummy72722ef9_featobj1_35f_1265)[3];
extern db (& dummy72722ef9_featobj1_362_1266)[3];
extern db (& dummy72722ef9_featobj1_365_1267)[3];
extern db (& dummy72722ef9_featobj1_368_1268)[3];
extern db (& dummy72722ef9_featobj1_36b_1269)[3];
extern db (& dummy72722ef9_featobj1_36e_1270)[3];
extern db (& dummy72722ef9_featobj1_371_1271)[3];
extern db (& dummy72722ef9_featobj1_374_1272)[3];
extern db (& dummy72722ef9_featobj1_377_1273)[3];
extern db (& dummy72722ef9_featobj1_37a_1274)[3];
extern db (& dummy72722ef9_featobj1_37d_1275)[3];
extern db (& dummy72722ef9_featobj1_380_1276)[3];
extern db (& dummy72722ef9_featobj1_383_1277)[3];
extern db (& dummy72722ef9_featobj1_386_1278)[3];
extern db (& dummy72722ef9_featobj1_389_1279)[3];
extern db (& dummy72722ef9_featobj1_38c_1280)[3];
extern db (& dummy72722ef9_featobj1_38f_1281)[3];
extern db (& dummy72722ef9_featobj1_392_1282)[3];
extern db (& dummy72722ef9_featobj1_395_1283)[3];
extern db (& dummy72722ef9_featobj1_398_1284)[3];
extern db (& dummy72722ef9_featobj1_39b_1285)[3];
extern db (& dummy72722ef9_featobj1_39e_1286)[3];
extern db (& dummy72722ef9_featobj1_3a1_1287)[3];
extern db (& dummy72722ef9_featobj1_3a4_1288)[3];
extern db (& dummy72722ef9_featobj1_3a7_1289)[3];
extern db (& dummy72722ef9_featobj1_3aa_1290)[3];
extern db (& dummy72722ef9_featobj1_3ad_1291)[3];
extern db (& dummy72722ef9_featobj1_3b0_1292)[3];
extern db (& dummy72722ef9_featobj1_3b3_1293)[3];
extern db& dummy72722ef9_featobj1_3b6_1294;
extern dw& dummy72722ef9_featobj1_3b7_1295;
extern dw& town6_1;
extern db (& dummy72722ef9_featobj1_3bb_1298)[14];
extern db (& dummy72722ef9_featobj1_3c9_1299)[14];
extern db (& dummy72722ef9_featobj1_3d7_1300)[9];
extern db (& dummy72722ef9_featobj1_3e0_1301)[14];
extern db (& dummy72722ef9_featobj1_3ee_1302)[4];
extern db& dummy72722ef9_featobj1_3f2_1303;
extern db (& dummy72722ef9_featobj1_3f3_1306)[3];
extern db (& dummy72722ef9_featobj1_3f6_1307)[3];
extern db (& dummy72722ef9_featobj1_3f9_1308)[3];
extern db (& dummy72722ef9_featobj1_3fc_1309)[3];
extern db (& dummy72722ef9_featobj1_3ff_1310)[3];
extern db (& dummy72722ef9_featobj1_402_1311)[3];
extern db (& dummy72722ef9_featobj1_405_1312)[3];
extern db (& dummy72722ef9_featobj1_408_1313)[3];
extern db (& dummy72722ef9_featobj1_40b_1314)[3];
extern db (& dummy72722ef9_featobj1_40e_1315)[3];
extern db (& dummy72722ef9_featobj1_411_1316)[3];
extern db (& dummy72722ef9_featobj1_414_1317)[3];
extern db (& dummy72722ef9_featobj1_417_1318)[3];
extern db (& dummy72722ef9_featobj1_41a_1319)[3];
extern db (& dummy72722ef9_featobj1_41d_1320)[3];
extern db (& dummy72722ef9_featobj1_420_1321)[3];
extern db (& dummy72722ef9_featobj1_423_1322)[3];
extern db (& dummy72722ef9_featobj1_426_1323)[3];
extern db (& dummy72722ef9_featobj1_429_1324)[3];
extern db (& dummy72722ef9_featobj1_42c_1325)[3];
extern db (& dummy72722ef9_featobj1_42f_1326)[3];
extern db (& dummy72722ef9_featobj1_432_1327)[3];
extern db (& dummy72722ef9_featobj1_435_1328)[3];
extern db (& dummy72722ef9_featobj1_438_1329)[3];
extern db (& dummy72722ef9_featobj1_43b_1330)[3];
extern db (& dummy72722ef9_featobj1_43e_1331)[3];
extern db (& dummy72722ef9_featobj1_441_1332)[3];
extern db (& dummy72722ef9_featobj1_444_1333)[3];
extern db& dummy72722ef9_featobj1_447_1334;
extern dw& dummy72722ef9_featobj1_448_1335;
extern dw& town7_1;
extern db (& dummy72722ef9_featobj1_44c_1338)[22];
extern db (& dummy72722ef9_featobj1_462_1339)[5];
extern db (& dummy72722ef9_featobj1_467_1340)[5];
extern db (& dummy72722ef9_featobj1_46c_1341)[4];
extern db& dummy72722ef9_featobj1_470_1342;
extern db (& dummy72722ef9_featobj1_471_1345)[3];
extern db (& dummy72722ef9_featobj1_474_1346)[3];
extern db (& dummy72722ef9_featobj1_477_1347)[3];
extern db (& dummy72722ef9_featobj1_47a_1348)[3];
extern db (& dummy72722ef9_featobj1_47d_1349)[3];
extern db (& dummy72722ef9_featobj1_480_1350)[3];
extern db (& dummy72722ef9_featobj1_483_1351)[3];
extern db (& dummy72722ef9_featobj1_486_1352)[3];
extern db (& dummy72722ef9_featobj1_489_1353)[3];
extern db (& dummy72722ef9_featobj1_48c_1354)[3];
extern db (& dummy72722ef9_featobj1_48f_1355)[3];
extern db (& dummy72722ef9_featobj1_492_1356)[3];
extern db (& dummy72722ef9_featobj1_495_1357)[3];
extern db (& dummy72722ef9_featobj1_498_1358)[3];
extern db (& dummy72722ef9_featobj1_49b_1359)[3];
extern db (& dummy72722ef9_featobj1_49e_1360)[3];
extern db (& dummy72722ef9_featobj1_4a1_1361)[3];
extern db (& dummy72722ef9_featobj1_4a4_1362)[3];
extern db (& dummy72722ef9_featobj1_4a7_1363)[3];
extern db (& dummy72722ef9_featobj1_4aa_1364)[3];
extern db (& dummy72722ef9_featobj1_4ad_1365)[3];
extern db (& dummy72722ef9_featobj1_4b0_1366)[3];
extern db (& dummy72722ef9_featobj1_4b3_1367)[3];
extern db (& dummy72722ef9_featobj1_4b6_1368)[3];
extern db (& dummy72722ef9_featobj1_4b9_1369)[3];
extern db (& dummy72722ef9_featobj1_4bc_1370)[3];
extern db (& dummy72722ef9_featobj1_4bf_1371)[3];
extern db (& dummy72722ef9_featobj1_4c2_1372)[3];
extern db (& dummy72722ef9_featobj1_4c5_1373)[3];
extern db (& dummy72722ef9_featobj1_4c8_1374)[3];
extern db (& dummy72722ef9_featobj1_4cb_1375)[3];
extern db (& dummy72722ef9_featobj1_4ce_1376)[3];
extern db (& dummy72722ef9_featobj1_4d1_1377)[3];
extern db (& dummy72722ef9_featobj1_4d4_1378)[3];
extern db (& dummy72722ef9_featobj1_4d7_1379)[3];
extern db (& dummy72722ef9_featobj1_4da_1380)[3];
extern db (& dummy72722ef9_featobj1_4dd_1381)[3];
extern db (& dummy72722ef9_featobj1_4e0_1382)[3];
extern db (& dummy72722ef9_featobj1_4e3_1383)[3];
extern db (& dummy72722ef9_featobj1_4e6_1384)[3];
extern db (& dummy72722ef9_featobj1_4e9_1385)[3];
extern db (& dummy72722ef9_featobj1_4ec_1386)[3];
extern db (& dummy72722ef9_featobj1_4ef_1387)[3];
extern db (& dummy72722ef9_featobj1_4f2_1388)[3];
extern db& dummy72722ef9_featobj1_4f5_1389;
extern dw& dummy72722ef9_featobj1_4f6_1390;
extern dw& town8_1;
extern db (& dummy72722ef9_featobj1_4fa_1393)[16];
extern db (& dummy72722ef9_featobj1_50a_1394)[11];
extern db (& dummy72722ef9_featobj1_515_1395)[9];
extern db (& dummy72722ef9_featobj1_51e_1396)[6];
extern db (& dummy72722ef9_featobj1_524_1397)[6];
extern db (& dummy72722ef9_featobj1_52a_1398)[9];
extern db& dummy72722ef9_featobj1_533_1399;
extern db (& dummy72722ef9_featobj1_534_1402)[3];
extern db (& dummy72722ef9_featobj1_537_1403)[3];
extern db (& dummy72722ef9_featobj1_53a_1404)[3];
extern db (& dummy72722ef9_featobj1_53d_1405)[3];
extern db (& dummy72722ef9_featobj1_540_1406)[3];
extern db (& dummy72722ef9_featobj1_543_1407)[3];
extern db (& dummy72722ef9_featobj1_546_1408)[3];
extern db (& dummy72722ef9_featobj1_549_1409)[3];
extern db (& dummy72722ef9_featobj1_54c_1410)[3];
extern db (& dummy72722ef9_featobj1_54f_1411)[3];
extern db (& dummy72722ef9_featobj1_552_1412)[3];
extern db (& dummy72722ef9_featobj1_555_1413)[3];
extern db (& dummy72722ef9_featobj1_558_1414)[3];
extern db (& dummy72722ef9_featobj1_55b_1415)[3];
extern db (& dummy72722ef9_featobj1_55e_1416)[3];
extern db (& dummy72722ef9_featobj1_561_1417)[3];
extern db& dummy72722ef9_featobj1_564_1418;
extern dw& dummy72722ef9_featobj1_565_1419;
extern dw& town9_1;
extern db (& dummy72722ef9_featobj1_569_1422)[6];
extern db (& dummy72722ef9_featobj1_56f_1423)[14];
extern db& dummy72722ef9_featobj1_57d_1424;
extern db (& dummy72722ef9_featobj1_57e_1427)[3];
extern db (& dummy72722ef9_featobj1_581_1428)[3];
extern db (& dummy72722ef9_featobj1_584_1429)[3];
extern db (& dummy72722ef9_featobj1_587_1430)[3];
extern db (& dummy72722ef9_featobj1_58a_1431)[3];
extern db (& dummy72722ef9_featobj1_58d_1432)[3];
extern db (& dummy72722ef9_featobj1_590_1433)[3];
extern db (& dummy72722ef9_featobj1_593_1434)[3];
extern db (& dummy72722ef9_featobj1_596_1435)[3];
extern db (& dummy72722ef9_featobj1_599_1436)[3];
extern db (& dummy72722ef9_featobj1_59c_1437)[3];
extern db (& dummy72722ef9_featobj1_59f_1438)[3];
extern db (& dummy72722ef9_featobj1_5a2_1439)[3];
extern db (& dummy72722ef9_featobj1_5a5_1440)[3];
extern db (& dummy72722ef9_featobj1_5a8_1441)[3];
extern db (& dummy72722ef9_featobj1_5ab_1442)[3];
extern db (& dummy72722ef9_featobj1_5ae_1443)[3];
extern db (& dummy72722ef9_featobj1_5b1_1444)[3];
extern db (& dummy72722ef9_featobj1_5b4_1445)[3];
extern db (& dummy72722ef9_featobj1_5b7_1446)[3];
extern db (& dummy72722ef9_featobj1_5ba_1447)[3];
extern db (& dummy72722ef9_featobj1_5bd_1448)[3];
extern db (& dummy72722ef9_featobj1_5c0_1449)[3];
extern db (& dummy72722ef9_featobj1_5c3_1450)[3];
extern db (& dummy72722ef9_featobj1_5c6_1451)[3];
extern db (& dummy72722ef9_featobj1_5c9_1452)[3];
extern db (& dummy72722ef9_featobj1_5cc_1453)[3];
extern db (& dummy72722ef9_featobj1_5cf_1454)[3];
extern db (& dummy72722ef9_featobj1_5d2_1455)[3];
extern db (& dummy72722ef9_featobj1_5d5_1456)[3];
extern db (& dummy72722ef9_featobj1_5d8_1457)[3];
extern db (& dummy72722ef9_featobj1_5db_1458)[3];
extern db (& dummy72722ef9_featobj1_5de_1459)[3];
extern db (& dummy72722ef9_featobj1_5e1_1460)[3];
extern db (& dummy72722ef9_featobj1_5e4_1461)[3];
extern db (& dummy72722ef9_featobj1_5e7_1462)[3];
extern db (& dummy72722ef9_featobj1_5ea_1463)[3];
extern db (& dummy72722ef9_featobj1_5ed_1464)[3];
extern db (& dummy72722ef9_featobj1_5f0_1465)[3];
extern db (& dummy72722ef9_featobj1_5f3_1466)[3];
extern db& dummy72722ef9_featobj1_5f6_1467;
extern dw& dummy72722ef9_featobj1_5f7_1468;
extern dw& town10_1;
extern db (& dummy72722ef9_featobj1_5fb_1471)[12];
extern db (& dummy72722ef9_featobj1_607_1472)[18];
extern db (& dummy72722ef9_featobj1_619_1473)[10];
extern db (& dummy72722ef9_featobj1_623_1474)[10];
extern db& dummy72722ef9_featobj1_62d_1475;
extern db (& dummy72722ef9_featobj1_62e_1478)[3];
extern db (& dummy72722ef9_featobj1_631_1479)[3];
extern db (& dummy72722ef9_featobj1_634_1480)[3];
extern db (& dummy72722ef9_featobj1_637_1481)[3];
extern db (& dummy72722ef9_featobj1_63a_1482)[3];
extern db (& dummy72722ef9_featobj1_63d_1483)[3];
extern db (& dummy72722ef9_featobj1_640_1484)[3];
extern db (& dummy72722ef9_featobj1_643_1485)[3];
extern db (& dummy72722ef9_featobj1_646_1486)[3];
extern db (& dummy72722ef9_featobj1_649_1487)[3];
extern db (& dummy72722ef9_featobj1_64c_1488)[3];
extern db (& dummy72722ef9_featobj1_64f_1489)[3];
extern db (& dummy72722ef9_featobj1_652_1490)[3];
extern db (& dummy72722ef9_featobj1_655_1491)[3];
extern db (& dummy72722ef9_featobj1_658_1492)[3];
extern db (& dummy72722ef9_featobj1_65b_1493)[3];
extern db (& dummy72722ef9_featobj1_65e_1494)[3];
extern db (& dummy72722ef9_featobj1_661_1495)[3];
extern db (& dummy72722ef9_featobj1_664_1496)[3];
extern db (& dummy72722ef9_featobj1_667_1497)[3];
extern db (& dummy72722ef9_featobj1_66a_1498)[3];
extern db (& dummy72722ef9_featobj1_66d_1499)[3];
extern db (& dummy72722ef9_featobj1_670_1500)[3];
extern db (& dummy72722ef9_featobj1_673_1501)[3];
extern db& dummy72722ef9_featobj1_676_1502;
extern dw& dummy72722ef9_featobj1_677_1503;
extern dw& town11_1;
extern db (& dummy72722ef9_featobj1_67b_1506)[21];
extern db (& dummy72722ef9_featobj1_690_1507)[7];
extern db& dummy72722ef9_featobj1_697_1508;
extern db (& dummy72722ef9_featobj1_698_1511)[3];
extern db (& dummy72722ef9_featobj1_69b_1512)[3];
extern db (& dummy72722ef9_featobj1_69e_1513)[3];
extern db (& dummy72722ef9_featobj1_6a1_1514)[3];
extern db (& dummy72722ef9_featobj1_6a4_1515)[3];
extern db (& dummy72722ef9_featobj1_6a7_1516)[3];
extern db (& dummy72722ef9_featobj1_6aa_1517)[3];
extern db (& dummy72722ef9_featobj1_6ad_1518)[3];
extern db (& dummy72722ef9_featobj1_6b0_1519)[3];
extern db (& dummy72722ef9_featobj1_6b3_1520)[3];
extern db (& dummy72722ef9_featobj1_6b6_1521)[3];
extern db (& dummy72722ef9_featobj1_6b9_1522)[3];
extern db (& dummy72722ef9_featobj1_6bc_1523)[3];
extern db (& dummy72722ef9_featobj1_6bf_1524)[3];
extern db (& dummy72722ef9_featobj1_6c2_1525)[3];
extern db (& dummy72722ef9_featobj1_6c5_1526)[3];
extern db (& dummy72722ef9_featobj1_6c8_1527)[3];
extern db (& dummy72722ef9_featobj1_6cb_1528)[3];
extern db (& dummy72722ef9_featobj1_6ce_1529)[3];
extern db (& dummy72722ef9_featobj1_6d1_1530)[3];
extern db (& dummy72722ef9_featobj1_6d4_1531)[3];
extern db (& dummy72722ef9_featobj1_6d7_1532)[3];
extern db (& dummy72722ef9_featobj1_6da_1533)[3];
extern db (& dummy72722ef9_featobj1_6dd_1534)[3];
extern db (& dummy72722ef9_featobj1_6e0_1535)[3];
extern db (& dummy72722ef9_featobj1_6e3_1536)[3];
extern db (& dummy72722ef9_featobj1_6e6_1537)[3];
extern db (& dummy72722ef9_featobj1_6e9_1538)[3];
extern db (& dummy72722ef9_featobj1_6ec_1539)[3];
extern db (& dummy72722ef9_featobj1_6ef_1540)[3];
extern db (& dummy72722ef9_featobj1_6f2_1541)[3];
extern db (& dummy72722ef9_featobj1_6f5_1542)[3];
extern db (& dummy72722ef9_featobj1_6f8_1543)[3];
extern db (& dummy72722ef9_featobj1_6fb_1544)[3];
extern db (& dummy72722ef9_featobj1_6fe_1545)[3];
extern db (& dummy72722ef9_featobj1_701_1546)[3];
extern db (& dummy72722ef9_featobj1_704_1547)[3];
extern db (& dummy72722ef9_featobj1_707_1548)[3];
extern db (& dummy72722ef9_featobj1_70a_1549)[3];
extern db (& dummy72722ef9_featobj1_70d_1550)[3];
extern db (& dummy72722ef9_featobj1_710_1551)[3];
extern db (& dummy72722ef9_featobj1_713_1552)[3];
extern db (& dummy72722ef9_featobj1_716_1553)[3];
extern db (& dummy72722ef9_featobj1_719_1554)[3];
extern db (& dummy72722ef9_featobj1_71c_1555)[3];
extern db (& dummy72722ef9_featobj1_71f_1556)[3];
extern db& dummy72722ef9_featobj1_722_1557;
extern dw& dummy72722ef9_featobj1_723_1558;
extern dw& town12_1;
extern db (& dummy72722ef9_featobj1_727_1561)[17];
extern db (& dummy72722ef9_featobj1_738_1562)[6];
extern db (& dummy72722ef9_featobj1_73e_1563)[11];
extern db (& dummy72722ef9_featobj1_749_1564)[6];
extern db (& dummy72722ef9_featobj1_74f_1565)[6];
extern db (& dummy72722ef9_featobj1_755_1566)[6];
extern db (& dummy72722ef9_featobj1_75b_1567)[8];
extern db& dummy72722ef9_featobj1_763_1568;
extern db (& dummy72722ef9_featobj1_764_1571)[3];
extern db (& dummy72722ef9_featobj1_767_1572)[3];
extern db (& dummy72722ef9_featobj1_76a_1573)[3];
extern db (& dummy72722ef9_featobj1_76d_1574)[3];
extern db (& dummy72722ef9_featobj1_770_1575)[3];
extern db (& dummy72722ef9_featobj1_773_1576)[3];
extern db (& dummy72722ef9_featobj1_776_1577)[3];
extern db (& dummy72722ef9_featobj1_779_1578)[3];
extern db (& dummy72722ef9_featobj1_77c_1579)[3];
extern db (& dummy72722ef9_featobj1_77f_1580)[3];
extern db (& dummy72722ef9_featobj1_782_1581)[3];
extern db (& dummy72722ef9_featobj1_785_1582)[3];
extern db (& dummy72722ef9_featobj1_788_1583)[3];
extern db (& dummy72722ef9_featobj1_78b_1584)[3];
extern db (& dummy72722ef9_featobj1_78e_1585)[3];
extern db (& dummy72722ef9_featobj1_791_1586)[3];
extern db (& dummy72722ef9_featobj1_794_1587)[3];
extern db (& dummy72722ef9_featobj1_797_1588)[3];
extern db (& dummy72722ef9_featobj1_79a_1589)[3];
extern db (& dummy72722ef9_featobj1_79d_1590)[3];
extern db (& dummy72722ef9_featobj1_7a0_1591)[3];
extern db (& dummy72722ef9_featobj1_7a3_1592)[3];
extern db (& dummy72722ef9_featobj1_7a6_1593)[3];
extern db (& dummy72722ef9_featobj1_7a9_1594)[3];
extern db (& dummy72722ef9_featobj1_7ac_1595)[3];
extern db (& dummy72722ef9_featobj1_7af_1596)[3];
extern db (& dummy72722ef9_featobj1_7b2_1597)[3];
extern db (& dummy72722ef9_featobj1_7b5_1598)[3];
extern db (& dummy72722ef9_featobj1_7b8_1599)[3];
extern db (& dummy72722ef9_featobj1_7bb_1600)[3];
extern db (& dummy72722ef9_featobj1_7be_1601)[3];
extern db (& dummy72722ef9_featobj1_7c1_1602)[3];
extern db (& dummy72722ef9_featobj1_7c4_1603)[3];
extern db (& dummy72722ef9_featobj1_7c7_1604)[3];
extern db (& dummy72722ef9_featobj1_7ca_1605)[3];
extern db (& dummy72722ef9_featobj1_7cd_1606)[3];
extern db (& dummy72722ef9_featobj1_7d0_1607)[3];
extern db (& dummy72722ef9_featobj1_7d3_1608)[3];
extern db (& dummy72722ef9_featobj1_7d6_1609)[3];
extern db (& dummy72722ef9_featobj1_7d9_1610)[3];
extern db (& dummy72722ef9_featobj1_7dc_1611)[3];
extern db& dummy72722ef9_featobj1_7df_1612;
extern dw& dummy72722ef9_featobj1_7e0_1613;
extern dw& town13_1;
extern db (& dummy72722ef9_featobj1_7e4_1616)[20];
extern db (& dummy72722ef9_featobj1_7f8_1617)[8];
extern db (& dummy72722ef9_featobj1_800_1618)[7];
extern db (& dummy72722ef9_featobj1_807_1620)[8];
extern db (& dummy72722ef9_featobj1_80f_1621)[10];
extern db& dummy72722ef9_featobj1_819_1622;
extern byte& town1;
extern byte& town2;
extern byte& town3;
extern byte& town4;
extern byte& town5;
extern byte& town6;
extern byte& town7;
extern byte& town8;
extern byte& town9;
extern byte& town10;
extern byte& town11;
extern byte& town12;
extern byte& town13;
extern db& viscode;
extern db& vertexloop1;
extern db& dummy72722ef9_viscode_81b_1803;
extern db& dummy72722ef9_viscode_81c_1811;
extern db& vertexloop2;
extern db& dummy72722ef9_viscode_81e_1848;
extern db& dummy72722ef9_viscode_81f_1856;
extern db& vertexloop8;
extern db& dummy72722ef9_viscode_821_1896;
extern db& dummy72722ef9_viscode_822_1904;
extern db& makevertloop1;
extern db& dummy72722ef9_viscode_824_1955;
extern db& dummy72722ef9_viscode_825_1963;

	
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
#ifndef M2C_CODE_EQUATE_drawtown
#define M2C_CODE_EQUATE_drawtown 1
static const dd kdrawtown = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_exittowns
#define M2C_CODE_EQUATE_exittowns 1
static const dd kexittowns = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_contlines
#define M2C_CODE_EQUATE_contlines 1
static const dd kcontlines = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_contpolys
#define M2C_CODE_EQUATE_contpolys 1
static const dd kcontpolys = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_nextlineface
#define M2C_CODE_EQUATE_nextlineface 1
static const dd knextlineface = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_makevertex1
#define M2C_CODE_EQUATE_makevertex1 1
static const dd kmakevertex1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_nextpolyface
#define M2C_CODE_EQUATE_nextpolyface 1
static const dd knextpolyface = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_nextpoly
#define M2C_CODE_EQUATE_nextpoly 1
static const dd knextpoly = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_skippoly
#define M2C_CODE_EQUATE_skippoly 1
static const dd kskippoly = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex1
#define M2C_CODE_EQUATE_scanvertex1 1
static const dd kscanvertex1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex1
#define M2C_CODE_EQUATE_exitvertex1 1
static const dd kexitvertex1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex2
#define M2C_CODE_EQUATE_scanvertex2 1
static const dd kscanvertex2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex2
#define M2C_CODE_EQUATE_exitvertex2 1
static const dd kexitvertex2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex8
#define M2C_CODE_EQUATE_scanvertex8 1
static const dd kscanvertex8 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop8
#define M2C_CODE_EQUATE_vertexloop8 1
static const dd kvertexloop8 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex8
#define M2C_CODE_EQUATE_exitvertex8 1
static const dd kexitvertex8 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_viscode_9_proc
#define M2C_CODE_EQUATE_viscode_9_proc 1
static const dd kviscode_9_proc = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_exitmakevert1
#define M2C_CODE_EQUATE_exitmakevert1 1
static const dd kexitmakevert1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_makevertloop1
#define M2C_CODE_EQUATE_makevertloop1 1
static const dd kmakevertloop1 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_scaleok
#define M2C_CODE_EQUATE_scaleok 1
static const dd kscaleok = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1020;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawtown(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool makevertex1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertex8(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_9_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyline(m2c::_offsets, struct m2c::_STATE*);
extern bool polylineclip(m2c::_offsets, struct m2c::_STATE*);

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
#ifndef xgx
extern dw& xgx;
#endif
#ifndef ygy
extern dw& ygy;
#endif
#ifndef ypos2
extern dw& ypos2;
#endif
#ifndef zsy
extern dw& zsy;
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
#ifndef xsx
extern dw& xsx;
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

#endif
