/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VISLIB_STUBS_H__
#define __M2C_VISLIB_STUBS_H__

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
#define sin_hdg (si)
#define cos_hdg (di)
#define sin_pitch (si)
#define cos_pitch (di)
#define sin_roll (si)
#define cos_roll (di)

	#define M2C_MODULE_VISLIB 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& calcscale;
extern dw& dummy9b9928c9_data_2_716;
extern dw& dummy9b9928c9_data_4_717;
extern dw& dummy9b9928c9_data_6_718;
extern dw& dummy9b9928c9_data_8_719;
extern dw& dummy9b9928c9_data_a_725;
extern dw& dummy9b9928c9_data_c_726;
extern dw& dummy9b9928c9_data_e_727;
extern dw& dummy9b9928c9_data_10_728;
extern dw& dummy9b9928c9_data_12_729;
extern dw& dummy9b9928c9_data_14_730;
extern dw& dummy9b9928c9_data_16_731;
extern dw& dummy9b9928c9_data_18_732;
extern dw& dummy9b9928c9_data_1a_733;
extern dw& dummy9b9928c9_data_1c_734;
extern dw& dummy9b9928c9_data_1e_735;
extern dw& dummy9b9928c9_data_20_736;
extern dw& dummy9b9928c9_data_22_737;
extern dw& dummy9b9928c9_data_24_738;
extern dw& dummy9b9928c9_data_26_739;
extern dw& dummy9b9928c9_data_28_740;
extern dw& dummy9b9928c9_data_2a_741;
extern dw& dummy9b9928c9_data_2c_742;
extern dw& dummy9b9928c9_data_2e_743;
extern dw& dummy9b9928c9_data_30_744;
extern dw& dummy9b9928c9_data_32_745;
extern dw& dummy9b9928c9_data_34_746;
extern dw& dummy9b9928c9_data_36_747;
extern dw& dummy9b9928c9_data_38_748;
extern dw& dummy9b9928c9_data_3a_749;
extern dw& dummy9b9928c9_data_3c_750;
extern dw& dummy9b9928c9_data_3e_751;
extern dw& dummy9b9928c9_data_40_752;
extern dw& dummy9b9928c9_data_42_753;
extern dw& dummy9b9928c9_data_44_754;
extern dw& dummy9b9928c9_data_46_755;
extern dw& dummy9b9928c9_data_48_756;
extern dw& dummy9b9928c9_data_4a_757;
extern dw& dummy9b9928c9_data_4c_761;
extern dw& dummy9b9928c9_data_4e_762;
extern dw& dummy9b9928c9_data_50_763;
extern dw& dummy9b9928c9_data_52_764;
extern dw& dummy9b9928c9_data_54_765;
extern dw& dummy9b9928c9_data_56_766;
extern dw& dummy9b9928c9_data_58_767;
extern dw& dummy9b9928c9_data_5a_768;
extern dw& dummy9b9928c9_data_5c_769;
extern dw& dummy9b9928c9_data_5e_770;
extern dw& dummy9b9928c9_data_60_771;
extern dw& dummy9b9928c9_data_62_772;
extern dw& dummy9b9928c9_data_64_773;
extern dw& dummy9b9928c9_data_66_774;
extern dw& dummy9b9928c9_data_68_775;
extern dw& dummy9b9928c9_data_6a_776;
extern dw& dummy9b9928c9_data_6c_777;
extern dw& dummy9b9928c9_data_6e_778;
extern dw& dummy9b9928c9_data_70_779;
extern dw& dummy9b9928c9_data_72_780;
extern dw& dummy9b9928c9_data_74_781;
extern dw& dummy9b9928c9_data_76_782;
extern dw& dummy9b9928c9_data_78_783;
extern dw& dummy9b9928c9_data_7a_784;
extern dw& dummy9b9928c9_data_7c_785;
extern dw& dummy9b9928c9_data_7e_786;
extern dw& dummy9b9928c9_data_80_787;
extern dw& dummy9b9928c9_data_82_788;
extern dw& dummy9b9928c9_data_84_789;
extern dw& dummy9b9928c9_data_86_790;
extern dw& dummy9b9928c9_data_88_791;
extern dw& dummy9b9928c9_data_8a_792;
extern dw& dummy9b9928c9_data_8c_793;
extern dw& rotateswitch;
extern dw& dummy9b9928c9_data_90_799;
extern dw& dummy9b9928c9_data_92_800;
extern dw& dummy9b9928c9_data_94_801;
extern dw& dummy9b9928c9_data_96_802;
extern dw& dummy9b9928c9_data_98_803;
extern dw& dummy9b9928c9_data_9a_804;
extern word& calcpossubdiv;
extern word& calcnegsubdiv;
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
#ifndef M2C_CODE_EQUATE_initvisual
#define M2C_CODE_EQUATE_initvisual 1
static const dd kinitvisual = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_calczscaled
#define M2C_CODE_EQUATE_calczscaled 1
static const dd kcalczscaled = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_zok
#define M2C_CODE_EQUATE_zok 1
static const dd kzok = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_calcangles
#define M2C_CODE_EQUATE_calcangles 1
static const dd kcalcangles = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_calcafactors
#define M2C_CODE_EQUATE_calcafactors 1
static const dd kcalcafactors = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_fastbfactors
#define M2C_CODE_EQUATE_fastbfactors 1
static const dd kfastbfactors = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_calcbfactors
#define M2C_CODE_EQUATE_calcbfactors 1
static const dd kcalcbfactors = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_fastcfactors
#define M2C_CODE_EQUATE_fastcfactors 1
static const dd kfastcfactors = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_calccfactors
#define M2C_CODE_EQUATE_calccfactors 1
static const dd kcalccfactors = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_fastdfactors
#define M2C_CODE_EQUATE_fastdfactors 1
static const dd kfastdfactors = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_calcdfactors
#define M2C_CODE_EQUATE_calcdfactors 1
static const dd kcalcdfactors = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_calcsctrgrid
#define M2C_CODE_EQUATE_calcsctrgrid 1
static const dd kcalcsctrgrid = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_calcsctrsubdiv
#define M2C_CODE_EQUATE_calcsctrsubdiv 1
static const dd kcalcsctrsubdiv = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_calcsctrzsubdiv
#define M2C_CODE_EQUATE_calcsctrzsubdiv 1
static const dd kcalcsctrzsubdiv = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_zerosctrsubdiv
#define M2C_CODE_EQUATE_zerosctrsubdiv 1
static const dd kzerosctrsubdiv = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_possctrsubdiv
#define M2C_CODE_EQUATE_possctrsubdiv 1
static const dd kpossctrsubdiv = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_negsctrsubdiv
#define M2C_CODE_EQUATE_negsctrsubdiv 1
static const dd knegsctrsubdiv = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_zerosctrzsubdiv
#define M2C_CODE_EQUATE_zerosctrzsubdiv 1
static const dd kzerosctrzsubdiv = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_possctrzsubdiv
#define M2C_CODE_EQUATE_possctrzsubdiv 1
static const dd kpossctrzsubdiv = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_negsctrzsubdiv
#define M2C_CODE_EQUATE_negsctrzsubdiv 1
static const dd knegsctrzsubdiv = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_calcobjgrid
#define M2C_CODE_EQUATE_calcobjgrid 1
static const dd kcalcobjgrid = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_calcobjsubdiv
#define M2C_CODE_EQUATE_calcobjsubdiv 1
static const dd kcalcobjsubdiv = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid1
#define M2C_CODE_EQUATE_calcrotategrid1 1
static const dd kcalcrotategrid1 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_calcobjvsubdiv
#define M2C_CODE_EQUATE_calcobjvsubdiv 1
static const dd kcalcobjvsubdiv = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid2
#define M2C_CODE_EQUATE_calcrotategrid2 1
static const dd kcalcrotategrid2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid3
#define M2C_CODE_EQUATE_calcrotategrid3 1
static const dd kcalcrotategrid3 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_negobjvsubdiv
#define M2C_CODE_EQUATE_negobjvsubdiv 1
static const dd knegobjvsubdiv = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_posobjvsubdiv
#define M2C_CODE_EQUATE_posobjvsubdiv 1
static const dd kposobjvsubdiv = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_zeroobjsubdiv
#define M2C_CODE_EQUATE_zeroobjsubdiv 1
static const dd kzeroobjsubdiv = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_posobjsubdiv
#define M2C_CODE_EQUATE_posobjsubdiv 1
static const dd kposobjsubdiv = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_negobjsubdiv
#define M2C_CODE_EQUATE_negobjsubdiv 1
static const dd knegobjsubdiv = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv32
#define M2C_CODE_EQUATE_possubdiv32 1
static const dd kpossubdiv32 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv31
#define M2C_CODE_EQUATE_possubdiv31 1
static const dd kpossubdiv31 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv30
#define M2C_CODE_EQUATE_possubdiv30 1
static const dd kpossubdiv30 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv29
#define M2C_CODE_EQUATE_possubdiv29 1
static const dd kpossubdiv29 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv28
#define M2C_CODE_EQUATE_possubdiv28 1
static const dd kpossubdiv28 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv27
#define M2C_CODE_EQUATE_possubdiv27 1
static const dd kpossubdiv27 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv26
#define M2C_CODE_EQUATE_possubdiv26 1
static const dd kpossubdiv26 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv25
#define M2C_CODE_EQUATE_possubdiv25 1
static const dd kpossubdiv25 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv24
#define M2C_CODE_EQUATE_possubdiv24 1
static const dd kpossubdiv24 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv23
#define M2C_CODE_EQUATE_possubdiv23 1
static const dd kpossubdiv23 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv22
#define M2C_CODE_EQUATE_possubdiv22 1
static const dd kpossubdiv22 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv21
#define M2C_CODE_EQUATE_possubdiv21 1
static const dd kpossubdiv21 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv20
#define M2C_CODE_EQUATE_possubdiv20 1
static const dd kpossubdiv20 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv19
#define M2C_CODE_EQUATE_possubdiv19 1
static const dd kpossubdiv19 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv18
#define M2C_CODE_EQUATE_possubdiv18 1
static const dd kpossubdiv18 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv17
#define M2C_CODE_EQUATE_possubdiv17 1
static const dd kpossubdiv17 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv16
#define M2C_CODE_EQUATE_possubdiv16 1
static const dd kpossubdiv16 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv15
#define M2C_CODE_EQUATE_possubdiv15 1
static const dd kpossubdiv15 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv14
#define M2C_CODE_EQUATE_possubdiv14 1
static const dd kpossubdiv14 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv13
#define M2C_CODE_EQUATE_possubdiv13 1
static const dd kpossubdiv13 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv12
#define M2C_CODE_EQUATE_possubdiv12 1
static const dd kpossubdiv12 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv11
#define M2C_CODE_EQUATE_possubdiv11 1
static const dd kpossubdiv11 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv10
#define M2C_CODE_EQUATE_possubdiv10 1
static const dd kpossubdiv10 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv9
#define M2C_CODE_EQUATE_possubdiv9 1
static const dd kpossubdiv9 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv8
#define M2C_CODE_EQUATE_possubdiv8 1
static const dd kpossubdiv8 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv7
#define M2C_CODE_EQUATE_possubdiv7 1
static const dd kpossubdiv7 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv6
#define M2C_CODE_EQUATE_possubdiv6 1
static const dd kpossubdiv6 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv5
#define M2C_CODE_EQUATE_possubdiv5 1
static const dd kpossubdiv5 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv4
#define M2C_CODE_EQUATE_possubdiv4 1
static const dd kpossubdiv4 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv3
#define M2C_CODE_EQUATE_possubdiv3 1
static const dd kpossubdiv3 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv2
#define M2C_CODE_EQUATE_possubdiv2 1
static const dd kpossubdiv2 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv1
#define M2C_CODE_EQUATE_possubdiv1 1
static const dd kpossubdiv1 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_possubdiv0
#define M2C_CODE_EQUATE_possubdiv0 1
static const dd kpossubdiv0 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv32
#define M2C_CODE_EQUATE_negsubdiv32 1
static const dd knegsubdiv32 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv31
#define M2C_CODE_EQUATE_negsubdiv31 1
static const dd knegsubdiv31 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv30
#define M2C_CODE_EQUATE_negsubdiv30 1
static const dd knegsubdiv30 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv29
#define M2C_CODE_EQUATE_negsubdiv29 1
static const dd knegsubdiv29 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv28
#define M2C_CODE_EQUATE_negsubdiv28 1
static const dd knegsubdiv28 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv27
#define M2C_CODE_EQUATE_negsubdiv27 1
static const dd knegsubdiv27 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv26
#define M2C_CODE_EQUATE_negsubdiv26 1
static const dd knegsubdiv26 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv25
#define M2C_CODE_EQUATE_negsubdiv25 1
static const dd knegsubdiv25 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv24
#define M2C_CODE_EQUATE_negsubdiv24 1
static const dd knegsubdiv24 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv23
#define M2C_CODE_EQUATE_negsubdiv23 1
static const dd knegsubdiv23 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv22
#define M2C_CODE_EQUATE_negsubdiv22 1
static const dd knegsubdiv22 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv21
#define M2C_CODE_EQUATE_negsubdiv21 1
static const dd knegsubdiv21 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv20
#define M2C_CODE_EQUATE_negsubdiv20 1
static const dd knegsubdiv20 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv19
#define M2C_CODE_EQUATE_negsubdiv19 1
static const dd knegsubdiv19 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv18
#define M2C_CODE_EQUATE_negsubdiv18 1
static const dd knegsubdiv18 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv17
#define M2C_CODE_EQUATE_negsubdiv17 1
static const dd knegsubdiv17 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv16
#define M2C_CODE_EQUATE_negsubdiv16 1
static const dd knegsubdiv16 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv15
#define M2C_CODE_EQUATE_negsubdiv15 1
static const dd knegsubdiv15 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv14
#define M2C_CODE_EQUATE_negsubdiv14 1
static const dd knegsubdiv14 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv13
#define M2C_CODE_EQUATE_negsubdiv13 1
static const dd knegsubdiv13 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv12
#define M2C_CODE_EQUATE_negsubdiv12 1
static const dd knegsubdiv12 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv11
#define M2C_CODE_EQUATE_negsubdiv11 1
static const dd knegsubdiv11 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv10
#define M2C_CODE_EQUATE_negsubdiv10 1
static const dd knegsubdiv10 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv9
#define M2C_CODE_EQUATE_negsubdiv9 1
static const dd knegsubdiv9 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv8
#define M2C_CODE_EQUATE_negsubdiv8 1
static const dd knegsubdiv8 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv7
#define M2C_CODE_EQUATE_negsubdiv7 1
static const dd knegsubdiv7 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv6
#define M2C_CODE_EQUATE_negsubdiv6 1
static const dd knegsubdiv6 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv5
#define M2C_CODE_EQUATE_negsubdiv5 1
static const dd knegsubdiv5 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv4
#define M2C_CODE_EQUATE_negsubdiv4 1
static const dd knegsubdiv4 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv3
#define M2C_CODE_EQUATE_negsubdiv3 1
static const dd knegsubdiv3 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv2
#define M2C_CODE_EQUATE_negsubdiv2 1
static const dd knegsubdiv2 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv1
#define M2C_CODE_EQUATE_negsubdiv1 1
static const dd knegsubdiv1 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_negsubdiv0
#define M2C_CODE_EQUATE_negsubdiv0 1
static const dd knegsubdiv0 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_calcsctroffsets
#define M2C_CODE_EQUATE_calcsctroffsets 1
static const dd kcalcsctroffsets = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_scaleswitch
#define M2C_CODE_EQUATE_scaleswitch 1
static const dd kscaleswitch = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_calcscale16
#define M2C_CODE_EQUATE_calcscale16 1
static const dd kcalcscale16 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_calceyeposition
#define M2C_CODE_EQUATE_calceyeposition 1
static const dd kcalceyeposition = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_storescale16
#define M2C_CODE_EQUATE_storescale16 1
static const dd kstorescale16 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_calcscale8
#define M2C_CODE_EQUATE_calcscale8 1
static const dd kcalcscale8 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_storescale8
#define M2C_CODE_EQUATE_storescale8 1
static const dd kstorescale8 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_calcscale4
#define M2C_CODE_EQUATE_calcscale4 1
static const dd kcalcscale4 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_storescale4
#define M2C_CODE_EQUATE_storescale4 1
static const dd kstorescale4 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_calcscale2
#define M2C_CODE_EQUATE_calcscale2 1
static const dd kcalcscale2 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_storescale2
#define M2C_CODE_EQUATE_storescale2 1
static const dd kstorescale2 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_calcscale1
#define M2C_CODE_EQUATE_calcscale1 1
static const dd kcalcscale1 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_storescale1
#define M2C_CODE_EQUATE_storescale1 1
static const dd kstorescale1 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_rotateview
#define M2C_CODE_EQUATE_rotateview 1
static const dd krotateview = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_rotatenull
#define M2C_CODE_EQUATE_rotatenull 1
static const dd krotatenull = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewrt
#define M2C_CODE_EQUATE_rotateviewrt 1
static const dd krotateviewrt = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_controtate
#define M2C_CODE_EQUATE_controtate 1
static const dd kcontrotate = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewlt
#define M2C_CODE_EQUATE_rotateviewlt 1
static const dd krotateviewlt = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewup
#define M2C_CODE_EQUATE_rotateviewup 1
static const dd krotateviewup = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewdn
#define M2C_CODE_EQUATE_rotateviewdn 1
static const dd krotateviewdn = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewbk
#define M2C_CODE_EQUATE_rotateviewbk 1
static const dd krotateviewbk = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_rotateviewft
#define M2C_CODE_EQUATE_rotateviewft 1
static const dd krotateviewft = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x108e;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcafactors(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcangles(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcbfactors(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calccfactors(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcdfactors(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calceyeposition(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcobjgrid(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcobjsubdiv(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcobjvsubdiv(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcrotategrid1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcrotategrid2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcrotategrid3(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsctrgrid(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsctroffsets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsctrsubdiv(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsctrzsubdiv(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initvisual(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rotateview(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan360(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarcsin(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef d9
extern dw& d9;
#endif
#ifndef a4
extern dw& a4;
#endif
#ifndef a8
extern dw& a8;
#endif
#ifndef zgridsize
extern dw& zgridsize;
#endif
#ifndef ze01_2
extern dw& ze01_2;
#endif
#ifndef zscaled
extern dw& zscaled;
#endif
#ifndef d4
extern dw& d4;
#endif
#ifndef xrel2
extern dw& xrel2;
#endif
#ifndef zrel2
extern dw& zrel2;
#endif
#ifndef ye01_16
extern dw& ye01_16;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef a3
extern dw& a3;
#endif
#ifndef xe02
extern dw& xe02;
#endif
#ifndef c7
extern dw& c7;
#endif
#ifndef a1
extern dw& a1;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef b2
extern dw& b2;
#endif
#ifndef c2
extern dw& c2;
#endif
#ifndef valid1_2
extern db& valid1_2;
#endif
#ifndef viewrotatemode
extern dw& viewrotatemode;
#endif
#ifndef xe01_2
extern dw& xe01_2;
#endif
#ifndef xgrid16
extern dw& xgrid16;
#endif
#ifndef b5
extern dw& b5;
#endif
#ifndef xgrid2
extern dw& xgrid2;
#endif
#ifndef xgz
extern dw& xgz;
#endif
#ifndef ye01_4
extern dw& ye01_4;
#endif
#ifndef a9
extern dw& a9;
#endif
#ifndef b8
extern dw& b8;
#endif
#ifndef farobjectdist
extern dw& farobjectdist;
#endif
#ifndef v_sinr
extern dw& v_sinr;
#endif
#ifndef xrel8
extern dw& xrel8;
#endif
#ifndef a6
extern dw& a6;
#endif
#ifndef c6
extern dw& c6;
#endif
#ifndef objectbufptr
extern dw& objectbufptr;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef a2
extern dw& a2;
#endif
#ifndef d8
extern dw& d8;
#endif
#ifndef valid1_4
extern db& valid1_4;
#endif
#ifndef ze01_8
extern dw& ze01_8;
#endif
#ifndef d6
extern dw& d6;
#endif
#ifndef a5
extern dw& a5;
#endif
#ifndef r_ygy
extern dw& r_ygy;
#endif
#ifndef c1
extern dw& c1;
#endif
#ifndef b7
extern dw& b7;
#endif
#ifndef b4
extern dw& b4;
#endif
#ifndef r_xgy
extern dw& r_xgy;
#endif
#ifndef v_sinh
extern dw& v_sinh;
#endif
#ifndef zgz
extern dw& zgz;
#endif
#ifndef objectbuffer
extern dw& objectbuffer;
#endif
#ifndef ygridsize
extern dw& ygridsize;
#endif
#ifndef ze01_16
extern dw& ze01_16;
#endif
#ifndef ze02
extern dw& ze02;
#endif
#ifndef yrel16
extern dw& yrel16;
#endif
#ifndef zgy
extern dw& zgy;
#endif
#ifndef ze016
extern dw& ze016;
#endif
#ifndef ze01_4
extern dw& ze01_4;
#endif
#ifndef ygrid2
extern dw& ygrid2;
#endif
#ifndef valid1_16
extern db& valid1_16;
#endif
#ifndef xgrid1
extern dw& xgrid1;
#endif
#ifndef yrel2
extern dw& yrel2;
#endif
#ifndef ye02
extern dw& ye02;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef d3
extern dw& d3;
#endif
#ifndef r_xgz
extern dw& r_xgz;
#endif
#ifndef zrel16
extern dw& zrel16;
#endif
#ifndef ze08
extern dw& ze08;
#endif
#ifndef xrel1
extern dw& xrel1;
#endif
#ifndef xgy
extern dw& xgy;
#endif
#ifndef r_zgz
extern dw& r_zgz;
#endif
#ifndef xgridsize
extern dw& xgridsize;
#endif
#ifndef ye08
extern dw& ye08;
#endif
#ifndef objectdist3
extern dw& objectdist3;
#endif
#ifndef b9
extern dw& b9;
#endif
#ifndef xrel16
extern dw& xrel16;
#endif
#ifndef objectdist1
extern dw& objectdist1;
#endif
#ifndef zrel8
extern dw& zrel8;
#endif
#ifndef v_sinp
extern dw& v_sinp;
#endif
#ifndef d1
extern dw& d1;
#endif
#ifndef v_cosr
extern dw& v_cosr;
#endif
#ifndef ygrid1
extern dw& ygrid1;
#endif
#ifndef ye01_8
extern dw& ye01_8;
#endif
#ifndef r_ygx
extern dw& r_ygx;
#endif
#ifndef d2
extern dw& d2;
#endif
#ifndef xsz
extern dw& xsz;
#endif
#ifndef b6
extern dw& b6;
#endif
#ifndef c5
extern dw& c5;
#endif
#ifndef d7
extern dw& d7;
#endif
#ifndef xe01_16
extern dw& xe01_16;
#endif
#ifndef c3
extern dw& c3;
#endif
#ifndef ze01
extern dw& ze01;
#endif
#ifndef xe016
extern dw& xe016;
#endif
#ifndef b1
extern dw& b1;
#endif
#ifndef xe01_4
extern dw& xe01_4;
#endif
#ifndef valid1_8
extern db& valid1_8;
#endif
#ifndef c8
extern dw& c8;
#endif
#ifndef c9
extern dw& c9;
#endif
#ifndef r_zgx
extern dw& r_zgx;
#endif
#ifndef ye01
extern dw& ye01;
#endif
#ifndef ye016
extern dw& ye016;
#endif
#ifndef v_cosp
extern dw& v_cosp;
#endif
#ifndef ygrid16
extern dw& ygrid16;
#endif
#ifndef xgx
extern dw& xgx;
#endif
#ifndef ygy
extern dw& ygy;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef ygz
extern dw& ygz;
#endif
#ifndef r_xgx
extern dw& r_xgx;
#endif
#ifndef r_zgy
extern dw& r_zgy;
#endif
#ifndef zrel1
extern dw& zrel1;
#endif
#ifndef zgx
extern dw& zgx;
#endif
#ifndef zsz
extern dw& zsz;
#endif
#ifndef ye01_2
extern dw& ye01_2;
#endif
#ifndef xe01_8
extern dw& xe01_8;
#endif
#ifndef b3
extern dw& b3;
#endif
#ifndef xgrid8
extern dw& xgrid8;
#endif
#ifndef ygx
extern dw& ygx;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef c4
extern dw& c4;
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
#ifndef a7
extern dw& a7;
#endif
#ifndef ysz
extern dw& ysz;
#endif
#ifndef xe01
extern dw& xe01;
#endif
#ifndef r_ygz
extern dw& r_ygz;
#endif
#ifndef d5
extern dw& d5;
#endif
#ifndef objectdist2
extern dw& objectdist2;
#endif
#ifndef xe08
extern dw& xe08;
#endif
#ifndef v_cosh
extern dw& v_cosh;
#endif

#endif
