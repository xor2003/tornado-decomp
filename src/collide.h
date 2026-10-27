/* THIS IS GENERATED FILE */

        
#ifndef __M2C_COLLIDE_STUBS_H__
#define __M2C_COLLIDE_STUBS_H__

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
static const int gnd_bunkerb = 1;
static const int gnd_citblk1 = 2;
static const int gnd_citblk10 = 3;
static const int gnd_citblk2 = 4;
static const int gnd_citblk3 = 5;
static const int gnd_citblk4 = 6;
static const int gnd_citblk5 = 7;
static const int gnd_citblk6 = 8;
static const int gnd_citblk7 = 9;
static const int gnd_citblk8 = 10;
static const int gnd_citblk9 = 11;
static const int gnd_cooltwr = 12;
static const int gnd_copsea = 13;
static const int gnd_copseb = 14;
static const int gnd_copsec = 15;
static const int gnd_copsed = 16;
static const int gnd_ctwra1 = 17;
static const int gnd_ehasb = 18;
static const int gnd_embe1 = 19;
static const int gnd_embe2 = 20;
static const int gnd_embe3 = 21;
static const int gnd_embe4 = 22;
static const int gnd_embew1 = 23;
static const int gnd_embewe1 = 24;
static const int gnd_embeww1 = 25;
static const int gnd_embnrth2 = 26;
static const int gnd_embnrth3 = 27;
static const int gnd_embnrth4 = 28;
static const int gnd_embns1 = 29;
static const int gnd_embnsn1 = 30;
static const int gnd_embnss1 = 31;
static const int gnd_embnth1 = 32;
static const int gnd_embsth1 = 33;
static const int gnd_embsth2 = 34;
static const int gnd_embsth3 = 35;
static const int gnd_embsth4 = 36;
static const int gnd_embw1 = 37;
static const int gnd_embw2 = 38;
static const int gnd_embw3 = 39;
static const int gnd_embw4 = 40;
static const int gnd_ewr_1 = 41;
static const int gnd_ptank = 42;
static const int gnd_gentanks = 43;
static const int gnd_indchim = 44;
static const int gnd_crater1 = 45;
static const int gnd_crater2 = 46;
static const int gnd_crater3 = 47;
static const int gnd_ilsgld = 48;
static const int gnd_ilsloc09 = 49;
static const int gnd_ilsloc18 = 50;
static const int gnd_ilsloc27 = 51;
static const int gnd_ilsloc36 = 52;
static const int gnd_fuelpt = 53;
static const int gnd_gbmlae = 54;
static const int gnd_gbmlan = 55;
static const int gnd_hasclsd1 = 56;
static const int gnd_hasopen1 = 57;
static const int gnd_mnhan1 = 58;
static const int gnd_mnhane1 = 59;
static const int gnd_mrly1 = 60;
static const int gnd_off1 = 61;
static const int gnd_off2 = 62;
static const int gnd_off3 = 63;
static const int gnd_pbf1 = 64;
static const int gnd_pstnn = 65;
static const int gnd_pwrline = 66;
static const int gnd_pwrlinn = 67;
static const int gnd_rdbrgew1 = 68;
static const int gnd_rdbrgn1 = 69;
static const int gnd_rdsbrge1 = 70;
static const int gnd_rdsbrgn1 = 71;
static const int gnd_rlbraew1 = 72;
static const int gnd_rlbram1 = 73;
static const int gnd_rlbrbew1 = 74;
static const int gnd_rlbrbnm1 = 75;
static const int gnd_station = 76;
static const int gnd_tvmast = 77;
static const int gnd_unita1 = 78;
static const int gnd_unitb1 = 79;
static const int gnd_unitc1 = 80;
static const int gnd_wtower = 81;
static const int gnd_flyote1 = 82;
static const int gnd_flyote2 = 83;
static const int gnd_flyotn1 = 84;
static const int gnd_flyotn2 = 85;
static const int gnd_flyots1 = 86;
static const int gnd_flyots2 = 87;
static const int gnd_flyotw1 = 88;
static const int gnd_flyotw2 = 89;
static const int gnd_camtent = 90;
static const int gnd_munstor = 91;
static const int gnd_vstre0 = 92;
static const int gnd_vstrn1 = 93;
static const int gnd_vstrs1 = 94;
static const int gnd_vstrw1 = 95;
static const int gnd_pwrlntn = 96;
static const int gnd_pwrlnts = 97;
static const int gnd_pwrlnte = 98;
static const int gnd_pwrlntw = 99;
static const int gnd_rbewd = 100;
static const int gnd_rbnsd = 101;
static const int gnd_rlbewd = 102;
static const int gnd_rlbnsd = 103;
static const int gnd_embcrater = 104;
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

	#define M2C_MODULE_COLLIDE 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& xft;
extern dw& yft;
extern dw& numfacecols;
extern dw& roadquad;
extern dw& dummya8cd0ee0_data_8_910;
extern dw& dummya8cd0ee0_data_a_911;
extern dw& dummya8cd0ee0_data_c_912;
extern dw& roadlength;
extern dw& dummya8cd0ee0_data_10_918;
extern dw& dummya8cd0ee0_data_12_919;
extern dw& dummya8cd0ee0_data_14_920;
extern dw& dummya8cd0ee0_data_16_921;
extern dw& dummya8cd0ee0_data_18_922;
extern dw& dummya8cd0ee0_data_1a_923;
extern dw& dummya8cd0ee0_data_1c_924;
extern dw& dummya8cd0ee0_data_1e_925;
extern dw& dummya8cd0ee0_data_20_926;
extern dw& dummya8cd0ee0_data_22_927;
extern dw& dummya8cd0ee0_data_24_928;
extern dw& dummya8cd0ee0_data_26_929;
extern dw& dummya8cd0ee0_data_28_930;
extern dw& dummya8cd0ee0_data_2a_931;
extern dw& dummya8cd0ee0_data_2c_932;
extern dw& raillength;
extern dw& dummya8cd0ee0_data_30_938;
extern dw& dummya8cd0ee0_data_32_939;
extern dw& dummya8cd0ee0_data_34_940;
extern dw& dummya8cd0ee0_data_36_941;
extern dw& dummya8cd0ee0_data_38_942;
extern dw& dummya8cd0ee0_data_3a_943;
extern dw& dummya8cd0ee0_data_3c_944;
extern dw& dummya8cd0ee0_data_3e_945;
extern dw& dummya8cd0ee0_data_40_946;
extern dw& dummya8cd0ee0_data_42_947;
extern dw& dummya8cd0ee0_data_44_948;
extern dw& dummya8cd0ee0_data_46_949;
extern dw& dummya8cd0ee0_data_48_950;
extern dw& dummya8cd0ee0_data_4a_951;
extern dw& dummya8cd0ee0_data_4c_952;
extern db (& dummya8cd0ee0_data_4e_959)[32];
extern db (& dummya8cd0ee0_data_6e_991)[32];
extern dw& runwaywidth;
extern dw& dummya8cd0ee0_data_90_1028;
extern dw& dummya8cd0ee0_data_92_1029;
extern dw& endtype256;
extern dw& dummya8cd0ee0_data_96_1035;
extern dw& dummya8cd0ee0_data_98_1036;
extern dw& dummya8cd0ee0_data_9a_1037;
extern dw& dummya8cd0ee0_data_9c_1038;
extern dw& dummya8cd0ee0_data_9e_1039;
extern dw& dummya8cd0ee0_data_a0_1040;
extern dw& dummya8cd0ee0_data_a2_1041;
extern dw& dummya8cd0ee0_data_a4_1042;
extern dw& dummya8cd0ee0_data_a6_1043;
extern dw& dummya8cd0ee0_data_a8_1044;
extern dw& dummya8cd0ee0_data_aa_1045;
extern dw& dummya8cd0ee0_data_ac_1046;
extern dw& dummya8cd0ee0_data_ae_1047;
extern dw& dummya8cd0ee0_data_b0_1048;
extern dw& dummya8cd0ee0_data_b2_1049;
extern dw& endtype192;
extern dw& dummya8cd0ee0_data_b6_1055;
extern dw& dummya8cd0ee0_data_b8_1056;
extern dw& dummya8cd0ee0_data_ba_1057;
extern dw& dummya8cd0ee0_data_bc_1058;
extern dw& dummya8cd0ee0_data_be_1059;
extern dw& dummya8cd0ee0_data_c0_1060;
extern dw& dummya8cd0ee0_data_c2_1061;
extern dw& dummya8cd0ee0_data_c4_1062;
extern dw& dummya8cd0ee0_data_c6_1063;
extern dw& dummya8cd0ee0_data_c8_1064;
extern dw& dummya8cd0ee0_data_ca_1065;
extern dw& dummya8cd0ee0_data_cc_1066;
extern dw& dummya8cd0ee0_data_ce_1067;
extern dw& dummya8cd0ee0_data_d0_1068;
extern dw& dummya8cd0ee0_data_d2_1069;
extern dw& endtype128;
extern dw& dummya8cd0ee0_data_d6_1075;
extern dw& dummya8cd0ee0_data_d8_1076;
extern dw& dummya8cd0ee0_data_da_1077;
extern dw& dummya8cd0ee0_data_dc_1078;
extern dw& dummya8cd0ee0_data_de_1079;
extern dw& dummya8cd0ee0_data_e0_1080;
extern dw& dummya8cd0ee0_data_e2_1081;
extern dw& dummya8cd0ee0_data_e4_1082;
extern dw& dummya8cd0ee0_data_e6_1083;
extern dw& dummya8cd0ee0_data_e8_1084;
extern dw& dummya8cd0ee0_data_ea_1085;
extern dw& dummya8cd0ee0_data_ec_1086;
extern dw& dummya8cd0ee0_data_ee_1087;
extern dw& dummya8cd0ee0_data_f0_1088;
extern dw& dummya8cd0ee0_data_f2_1089;
extern dw& endtype64;
extern dw& dummya8cd0ee0_data_f6_1095;
extern dw& dummya8cd0ee0_data_f8_1096;
extern dw& dummya8cd0ee0_data_fa_1097;
extern dw& dummya8cd0ee0_data_fc_1098;
extern dw& dummya8cd0ee0_data_fe_1099;
extern dw& dummya8cd0ee0_data_100_1100;
extern dw& dummya8cd0ee0_data_102_1101;
extern dw& dummya8cd0ee0_data_104_1102;
extern dw& dummya8cd0ee0_data_106_1103;
extern dw& dummya8cd0ee0_data_108_1104;
extern dw& dummya8cd0ee0_data_10a_1105;
extern dw& dummya8cd0ee0_data_10c_1106;
extern dw& dummya8cd0ee0_data_10e_1107;
extern dw& dummya8cd0ee0_data_110_1108;
extern dw& dummya8cd0ee0_data_112_1109;
extern dw& dummya8cd0ee0_data_114_1110;
extern dw& dummya8cd0ee0_data_116_1111;
extern dw& dummya8cd0ee0_data_118_1112;
extern dw& dummya8cd0ee0_data_11a_1113;
extern dw& dummya8cd0ee0_data_11c_1114;
extern dw& dummya8cd0ee0_data_11e_1115;
extern dw& dummya8cd0ee0_data_120_1116;
extern dw& dummya8cd0ee0_data_122_1117;
extern dw& dummya8cd0ee0_data_124_1118;
extern dw& dummya8cd0ee0_data_126_1119;
extern dw& dummya8cd0ee0_data_128_1120;
extern dw& dummya8cd0ee0_data_12a_1121;
extern dw& dummya8cd0ee0_data_12c_1122;
extern dw& dummya8cd0ee0_data_12e_1123;
extern dw& dummya8cd0ee0_data_130_1124;
extern dw& dummya8cd0ee0_data_132_1125;
extern dw& sourceptr;
extern dw& tmpxerr;
extern dw& tmpyerr;
extern dw& tmpzerr;
extern byte& roadwidth;
extern byte& railwidth;
extern db& featobj1;
extern db& grndobj1;
extern db& mobobj1;
extern db& secdata1;
extern db& msecdata1;
extern db& viscode;
extern db& vertexloop1;
extern db& dummya8cd0ee0_viscode_13d_1400;
extern db& dummya8cd0ee0_viscode_13e_1411;
extern db& makevertexloop;
extern db& dummya8cd0ee0_viscode_140_1869;
extern db& dummya8cd0ee0_viscode_141_1880;

	
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
#ifndef M2C_CODE_EQUATE_surfacecheck
#define M2C_CODE_EQUATE_surfacecheck 1
static const dd ksurfacecheck = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_checkrivers
#define M2C_CODE_EQUATE_checkrivers 1
static const dd kcheckrivers = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_checklakes
#define M2C_CODE_EQUATE_checklakes 1
static const dd kchecklakes = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_checkrunways
#define M2C_CODE_EQUATE_checkrunways 1
static const dd kcheckrunways = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_checktaxiways
#define M2C_CODE_EQUATE_checktaxiways 1
static const dd kchecktaxiways = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_checkhard
#define M2C_CODE_EQUATE_checkhard 1
static const dd kcheckhard = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_checkroads
#define M2C_CODE_EQUATE_checkroads 1
static const dd kcheckroads = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_checkrailways
#define M2C_CODE_EQUATE_checkrailways 1
static const dd kcheckrailways = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_cloudcheck1
#define M2C_CODE_EQUATE_cloudcheck1 1
static const dd kcloudcheck1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_cloudcheck
#define M2C_CODE_EQUATE_cloudcheck 1
static const dd kcloudcheck = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_cloudcheck2
#define M2C_CODE_EQUATE_cloudcheck2 1
static const dd kcloudcheck2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_exitclouds
#define M2C_CODE_EQUATE_exitclouds 1
static const dd kexitclouds = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_checkfeature
#define M2C_CODE_EQUATE_checkfeature 1
static const dd kcheckfeature = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_failrivers
#define M2C_CODE_EQUATE_failrivers 1
static const dd kfailrivers = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_faillakes
#define M2C_CODE_EQUATE_faillakes 1
static const dd kfaillakes = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_failhard
#define M2C_CODE_EQUATE_failhard 1
static const dd kfailhard = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex1
#define M2C_CODE_EQUATE_skipvertex1 1
static const dd kskipvertex1 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_contfeatures
#define M2C_CODE_EQUATE_contfeatures 1
static const dd kcontfeatures = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_failfeature
#define M2C_CODE_EQUATE_failfeature 1
static const dd kfailfeature = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_sortline
#define M2C_CODE_EQUATE_sortline 1
static const dd ksortline = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_makepolyloop
#define M2C_CODE_EQUATE_makepolyloop 1
static const dd kmakepolyloop = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_testinsidearea
#define M2C_CODE_EQUATE_testinsidearea 1
static const dd ktestinsidearea = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_failroad
#define M2C_CODE_EQUATE_failroad 1
static const dd kfailroad = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_scannextroad
#define M2C_CODE_EQUATE_scannextroad 1
static const dd kscannextroad = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_skiproad
#define M2C_CODE_EQUATE_skiproad 1
static const dd kskiproad = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_passroad
#define M2C_CODE_EQUATE_passroad 1
static const dd kpassroad = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_failrail
#define M2C_CODE_EQUATE_failrail 1
static const dd kfailrail = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_scannextrail
#define M2C_CODE_EQUATE_scannextrail 1
static const dd kscannextrail = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_skiprail
#define M2C_CODE_EQUATE_skiprail 1
static const dd kskiprail = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_passrail
#define M2C_CODE_EQUATE_passrail 1
static const dd kpassrail = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_failrunway
#define M2C_CODE_EQUATE_failrunway 1
static const dd kfailrunway = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_runwayloop
#define M2C_CODE_EQUATE_runwayloop 1
static const dd krunwayloop = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_passrunway
#define M2C_CODE_EQUATE_passrunway 1
static const dd kpassrunway = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_failtaxiway
#define M2C_CODE_EQUATE_failtaxiway 1
static const dd kfailtaxiway = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_makevertexloop
#define M2C_CODE_EQUATE_makevertexloop 1
static const dd kmakevertexloop = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_conttaxi
#define M2C_CODE_EQUATE_conttaxi 1
static const dd kconttaxi = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_nexttaxilist
#define M2C_CODE_EQUATE_nexttaxilist 1
static const dd knexttaxilist = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_nexttaxiface
#define M2C_CODE_EQUATE_nexttaxiface 1
static const dd knexttaxiface = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_passtaxiway
#define M2C_CODE_EQUATE_passtaxiway 1
static const dd kpasstaxiway = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_cyclicloop
#define M2C_CODE_EQUATE_cyclicloop 1
static const dd kcyclicloop = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_insidefail
#define M2C_CODE_EQUATE_insidefail 1
static const dd kinsidefail = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_insidepass
#define M2C_CODE_EQUATE_insidepass 1
static const dd kinsidepass = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_groundcollision
#define M2C_CODE_EQUATE_groundcollision 1
static const dd kgroundcollision = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_gndok
#define M2C_CODE_EQUATE_gndok 1
static const dd kgndok = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_21_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_21_skip 1
static const dd k__m2c_macrolocal_21_skip = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_22_skip 1
static const dd k__m2c_macrolocal_22_skip = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_gndloop
#define M2C_CODE_EQUATE_gndloop 1
static const dd kgndloop = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_donegnd
#define M2C_CODE_EQUATE_donegnd 1
static const dd kdonegnd = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_nextgnd
#define M2C_CODE_EQUATE_nextgnd 1
static const dd knextgnd = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_gndhit
#define M2C_CODE_EQUATE_gndhit 1
static const dd kgndhit = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_staticcollision
#define M2C_CODE_EQUATE_staticcollision 1
static const dd kstaticcollision = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_statok
#define M2C_CODE_EQUATE_statok 1
static const dd kstatok = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_27_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_27_skip 1
static const dd k__m2c_macrolocal_27_skip = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_28_skip 1
static const dd k__m2c_macrolocal_28_skip = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_29_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_29_skip 1
static const dd k__m2c_macrolocal_29_skip = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_30_skip 1
static const dd k__m2c_macrolocal_30_skip = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_statloop
#define M2C_CODE_EQUATE_statloop 1
static const dd kstatloop = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_donestat
#define M2C_CODE_EQUATE_donestat 1
static const dd kdonestat = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_nextstat
#define M2C_CODE_EQUATE_nextstat 1
static const dd knextstat = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_stathit
#define M2C_CODE_EQUATE_stathit 1
static const dd kstathit = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_mobilecollision
#define M2C_CODE_EQUATE_mobilecollision 1
static const dd kmobilecollision = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_33_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_33_skip 1
static const dd k__m2c_macrolocal_33_skip = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_mobok
#define M2C_CODE_EQUATE_mobok 1
static const dd kmobok = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_mobloop
#define M2C_CODE_EQUATE_mobloop 1
static const dd kmobloop = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_34_skip 1
static const dd k__m2c_macrolocal_34_skip = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_35_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_35_skip 1
static const dd k__m2c_macrolocal_35_skip = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_nextmob
#define M2C_CODE_EQUATE_nextmob 1
static const dd knextmob = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_mobhit
#define M2C_CODE_EQUATE_mobhit 1
static const dd kmobhit = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_treecollision
#define M2C_CODE_EQUATE_treecollision 1
static const dd ktreecollision = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_treesok
#define M2C_CODE_EQUATE_treesok 1
static const dd ktreesok = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_scantrees
#define M2C_CODE_EQUATE_scantrees 1
static const dd kscantrees = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_treeshit
#define M2C_CODE_EQUATE_treeshit 1
static const dd ktreeshit = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_misstrees
#define M2C_CODE_EQUATE_misstrees 1
static const dd kmisstrees = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_scantreeloop
#define M2C_CODE_EQUATE_scantreeloop 1
static const dd kscantreeloop = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_nexttree
#define M2C_CODE_EQUATE_nexttree 1
static const dd knexttree = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_hittrees
#define M2C_CODE_EQUATE_hittrees 1
static const dd khittrees = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_cratercollision
#define M2C_CODE_EQUATE_cratercollision 1
static const dd kcratercollision = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_41_skip 1
static const dd k__m2c_macrolocal_41_skip = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_cratersok
#define M2C_CODE_EQUATE_cratersok 1
static const dd kcratersok = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_craterloop
#define M2C_CODE_EQUATE_craterloop 1
static const dd kcraterloop = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_42_skip 1
static const dd k__m2c_macrolocal_42_skip = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_donecraters
#define M2C_CODE_EQUATE_donecraters 1
static const dd kdonecraters = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_nextcrater
#define M2C_CODE_EQUATE_nextcrater 1
static const dd knextcrater = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_craterhit
#define M2C_CODE_EQUATE_craterhit 1
static const dd kcraterhit = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_45_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_45_skip 1
static const dd k__m2c_macrolocal_45_skip = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x107c;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkfeature(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkhard(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checklakes(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkrailways(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkrivers(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkroads(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkrunways(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checktaxiways(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cloudcheck(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cratercollision(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool groundcollision(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mobilecollision(m2c::_offsets, struct m2c::_STATE*);
static bool scantrees(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool staticcollision(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool surfacecheck(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool testinsidearea(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool treecollision(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool locatemobiles(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef featurelayer1
extern db& featurelayer1;
#endif
#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef groundtable
extern dw& groundtable;
#endif
#ifndef airfieldtable
extern dw& airfieldtable;
#endif
#ifndef roadlayer1
extern db& roadlayer1;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef featurelayer2
extern db& featurelayer2;
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
#ifndef ye
extern dw& ye;
#endif
#ifndef cloudtable
extern dw& cloudtable;
#endif
#ifndef riverlayer1
extern db& riverlayer1;
#endif
#ifndef raillayer1
extern db& raillayer1;
#endif
#ifndef mobiletable
extern dw& mobiletable;
#endif
#ifndef mobsectortable
extern dw& mobsectortable;
#endif
#ifndef treesenabled
extern db& treesenabled;
#endif
#ifndef objscaleconvert
extern db& objscaleconvert;
#endif
#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef nomansland
extern db& nomansland;
#endif
#ifndef treelayer2
extern db& treelayer2;
#endif
#ifndef treelayer3
extern db& treelayer3;
#endif
#ifndef treelayer4
extern db& treelayer4;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef craternum
extern db& craternum;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef treelayer1
extern db& treelayer1;
#endif
#ifndef cloudlayer1
extern db& cloudlayer1;
#endif
#ifndef treelayouts
extern dw& treelayouts;
#endif
#ifndef craterbuffer
extern crater& craterbuffer;
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
#ifndef cloudlayer2
extern db& cloudlayer2;
#endif
#ifndef roadlayer2
extern db& roadlayer2;
#endif
#ifndef rivertable
extern dw& rivertable;
#endif

#endif
