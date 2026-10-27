/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TREES_STUBS_H__
#define __M2C_TREES_STUBS_H__

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

	#define M2C_MODULE_TREES 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& treesenabled)[2];
extern dw& xtemp;
extern dw& ytemp;
extern dw& treelayouts;
extern dw& dummya11d4033_data_8_783;
extern dw& dummya11d4033_data_a_784;
extern dw& dummya11d4033_data_c_785;
extern db (& dummya11d4033_data_e_787)[2];
extern db (& dummya11d4033_data_10_788)[2];
extern db (& dummya11d4033_data_12_789)[2];
extern db (& dummya11d4033_data_14_790)[2];
extern db (& dummya11d4033_data_16_791)[2];
extern db (& dummya11d4033_data_18_792)[2];
extern db (& dummya11d4033_data_1a_793)[2];
extern db (& dummya11d4033_data_1c_794)[2];
extern db (& dummya11d4033_data_1e_795)[2];
extern db (& dummya11d4033_data_20_796)[2];
extern db (& dummya11d4033_data_22_797)[2];
extern db (& dummya11d4033_data_24_798)[2];
extern db (& dummya11d4033_data_26_799)[2];
extern db (& dummya11d4033_data_28_800)[2];
extern db (& dummya11d4033_data_2a_801)[2];
extern db (& dummya11d4033_data_2c_802)[2];
extern db (& dummya11d4033_data_2e_803)[2];
extern db (& dummya11d4033_data_30_804)[2];
extern db (& dummya11d4033_data_32_805)[2];
extern db (& dummya11d4033_data_34_806)[2];
extern db (& dummya11d4033_data_36_807)[2];
extern db (& dummya11d4033_data_38_808)[2];
extern db (& dummya11d4033_data_3a_809)[2];
extern db (& dummya11d4033_data_3c_810)[2];
extern db (& dummya11d4033_data_3e_811)[2];
extern db (& dummya11d4033_data_40_812)[2];
extern db (& dummya11d4033_data_42_813)[2];
extern db (& dummya11d4033_data_44_814)[2];
extern db (& dummya11d4033_data_46_815)[2];
extern db (& dummya11d4033_data_48_816)[2];
extern db (& dummya11d4033_data_4a_817)[2];
extern db (& dummya11d4033_data_4c_818)[2];
extern db (& dummya11d4033_data_4e_820)[2];
extern db (& dummya11d4033_data_50_821)[2];
extern db (& dummya11d4033_data_52_822)[2];
extern db (& dummya11d4033_data_54_823)[2];
extern db (& dummya11d4033_data_56_824)[2];
extern db (& dummya11d4033_data_58_825)[2];
extern db (& dummya11d4033_data_5a_826)[2];
extern db (& dummya11d4033_data_5c_827)[2];
extern db (& dummya11d4033_data_5e_828)[2];
extern db (& dummya11d4033_data_60_829)[2];
extern db (& dummya11d4033_data_62_830)[2];
extern db (& dummya11d4033_data_64_831)[2];
extern db (& dummya11d4033_data_66_832)[2];
extern db (& dummya11d4033_data_68_833)[2];
extern db (& dummya11d4033_data_6a_834)[2];
extern db (& dummya11d4033_data_6c_835)[2];
extern db (& dummya11d4033_data_6e_836)[2];
extern db (& dummya11d4033_data_70_837)[2];
extern db (& dummya11d4033_data_72_838)[2];
extern db (& dummya11d4033_data_74_839)[2];
extern db (& dummya11d4033_data_76_840)[2];
extern db (& dummya11d4033_data_78_841)[2];
extern db (& dummya11d4033_data_7a_842)[2];
extern db (& dummya11d4033_data_7c_843)[2];
extern db (& dummya11d4033_data_7e_844)[2];
extern db (& dummya11d4033_data_80_845)[2];
extern db (& dummya11d4033_data_82_846)[2];
extern db (& dummya11d4033_data_84_847)[2];
extern db (& dummya11d4033_data_86_848)[2];
extern db (& dummya11d4033_data_88_849)[2];
extern db (& dummya11d4033_data_8a_850)[2];
extern db (& dummya11d4033_data_8c_851)[2];
extern db (& dummya11d4033_data_8e_853)[2];
extern db (& dummya11d4033_data_90_854)[2];
extern db (& dummya11d4033_data_92_855)[2];
extern db (& dummya11d4033_data_94_856)[2];
extern db (& dummya11d4033_data_96_857)[2];
extern db (& dummya11d4033_data_98_858)[2];
extern db (& dummya11d4033_data_9a_859)[2];
extern db (& dummya11d4033_data_9c_860)[2];
extern db (& dummya11d4033_data_9e_861)[2];
extern db (& dummya11d4033_data_a0_862)[2];
extern db (& dummya11d4033_data_a2_863)[2];
extern db (& dummya11d4033_data_a4_864)[2];
extern db (& dummya11d4033_data_a6_865)[2];
extern db (& dummya11d4033_data_a8_866)[2];
extern db (& dummya11d4033_data_aa_867)[2];
extern db (& dummya11d4033_data_ac_868)[2];
extern db (& dummya11d4033_data_ae_869)[2];
extern db (& dummya11d4033_data_b0_870)[2];
extern db (& dummya11d4033_data_b2_871)[2];
extern db (& dummya11d4033_data_b4_872)[2];
extern db (& dummya11d4033_data_b6_873)[2];
extern db (& dummya11d4033_data_b8_874)[2];
extern db (& dummya11d4033_data_ba_875)[2];
extern db (& dummya11d4033_data_bc_876)[2];
extern db (& dummya11d4033_data_be_877)[2];
extern db (& dummya11d4033_data_c0_878)[2];
extern db (& dummya11d4033_data_c2_879)[2];
extern db (& dummya11d4033_data_c4_880)[2];
extern db (& dummya11d4033_data_c6_881)[2];
extern db (& dummya11d4033_data_c8_882)[2];
extern db (& dummya11d4033_data_ca_883)[2];
extern db (& dummya11d4033_data_cc_884)[2];
extern db (& dummya11d4033_data_ce_886)[2];
extern db (& dummya11d4033_data_d0_887)[2];
extern db (& dummya11d4033_data_d2_888)[2];
extern db (& dummya11d4033_data_d4_889)[2];
extern db (& dummya11d4033_data_d6_890)[2];
extern db (& dummya11d4033_data_d8_891)[2];
extern db (& dummya11d4033_data_da_892)[2];
extern db (& dummya11d4033_data_dc_893)[2];
extern db (& dummya11d4033_data_de_894)[2];
extern db (& dummya11d4033_data_e0_895)[2];
extern db (& dummya11d4033_data_e2_896)[2];
extern db (& dummya11d4033_data_e4_897)[2];
extern db (& dummya11d4033_data_e6_898)[2];
extern db (& dummya11d4033_data_e8_899)[2];
extern db (& dummya11d4033_data_ea_900)[2];
extern db (& dummya11d4033_data_ec_901)[2];
extern db (& dummya11d4033_data_ee_902)[2];
extern db (& dummya11d4033_data_f0_903)[2];
extern db (& dummya11d4033_data_f2_904)[2];
extern db (& dummya11d4033_data_f4_905)[2];
extern db (& dummya11d4033_data_f6_906)[2];
extern db (& dummya11d4033_data_f8_907)[2];
extern db (& dummya11d4033_data_fa_908)[2];
extern db (& dummya11d4033_data_fc_909)[2];
extern db (& dummya11d4033_data_fe_910)[2];
extern db (& dummya11d4033_data_100_911)[2];
extern db (& dummya11d4033_data_102_912)[2];
extern db (& dummya11d4033_data_104_913)[2];
extern db (& dummya11d4033_data_106_914)[2];
extern db (& dummya11d4033_data_108_915)[2];
extern db (& dummya11d4033_data_10a_916)[2];
extern db (& dummya11d4033_data_10c_917)[2];
extern byte& treelayout1;
extern byte& treelayout2;
extern byte& treelayout3;
extern byte& treelayout4;
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
#ifndef M2C_CODE_EQUATE_exittrees
#define M2C_CODE_EQUATE_exittrees 1
static const dd kexittrees = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_scantrees
#define M2C_CODE_EQUATE_scantrees 1
static const dd kscantrees = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_drawtrees
#define M2C_CODE_EQUATE_drawtrees 1
static const dd kdrawtrees = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_treeloop
#define M2C_CODE_EQUATE_treeloop 1
static const dd ktreeloop = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_exittreeloop
#define M2C_CODE_EQUATE_exittreeloop 1
static const dd kexittreeloop = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skiptree
#define M2C_CODE_EQUATE_skiptree 1
static const dd kskiptree = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_nexttree
#define M2C_CODE_EQUATE_nexttree 1
static const dd knexttree = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1013;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawtrees(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scantrees(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool objectdistsort1(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef objectbufend
extern dw& objectbufend;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef objectbufptr
extern dw& objectbufptr;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef xgrid1
extern dw& xgrid1;
#endif
#ifndef ygrid1
extern dw& ygrid1;
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
#ifndef ze01
extern dw& ze01;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef ye01
extern dw& ye01;
#endif
#ifndef treelayer1
extern db& treelayer1;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef xe01
extern dw& xe01;
#endif

#endif
