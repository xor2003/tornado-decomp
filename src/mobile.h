/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MOBILE_STUBS_H__
#define __M2C_MOBILE_STUBS_H__

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

	#define M2C_MODULE_MOBILE 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& calcobjectpos;
extern dw& dummy515b4f89_data_2_705;
extern dw& dummy515b4f89_data_4_706;
extern dw& dummy515b4f89_data_6_707;
extern dw& dummy515b4f89_data_8_708;
extern dw& rgridhdg;
extern dw& rgridpitch;
extern dw& rgridroll;
extern db& mobobj1;
extern db& viscode;
extern db& scanvertexloop1;
extern db& dummy515b4f89_viscode_11_1334;
extern db& dummy515b4f89_viscode_12_1342;
extern db& scanvertexloop2;
extern db& dummy515b4f89_viscode_14_1385;
extern db& dummy515b4f89_viscode_15_1393;
extern db& scanvertexloop3;
extern db& dummy515b4f89_viscode_17_1436;
extern db& dummy515b4f89_viscode_18_1444;

	
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
#ifndef M2C_CODE_EQUATE_drawmobobject1
#define M2C_CODE_EQUATE_drawmobobject1 1
static const dd kdrawmobobject1 = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_1
#define M2C_CODE_EQUATE_skipsort1_1 1
static const dd kskipsort1_1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_1
#define M2C_CODE_EQUATE_skipsort2_1 1
static const dd kskipsort2_1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_approxloop1
#define M2C_CODE_EQUATE_approxloop1 1
static const dd kapproxloop1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_sortposition1
#define M2C_CODE_EQUATE_sortposition1 1
static const dd ksortposition1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_exitlink1
#define M2C_CODE_EQUATE_exitlink1 1
static const dd kexitlink1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject1
#define M2C_CODE_EQUATE_exitmobobject1 1
static const dd kexitmobobject1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_controtate1
#define M2C_CODE_EQUATE_controtate1 1
static const dd kcontrotate1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate1
#define M2C_CODE_EQUATE_skiprotate1 1
static const dd kskiprotate1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexlist1
#define M2C_CODE_EQUATE_scanvertexlist1 1
static const dd kscanvertexlist1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_drawmobobject2
#define M2C_CODE_EQUATE_drawmobobject2 1
static const dd kdrawmobobject2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_2
#define M2C_CODE_EQUATE_skipsort1_2 1
static const dd kskipsort1_2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_2
#define M2C_CODE_EQUATE_skipsort2_2 1
static const dd kskipsort2_2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_approxloop2
#define M2C_CODE_EQUATE_approxloop2 1
static const dd kapproxloop2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_sortposition2
#define M2C_CODE_EQUATE_sortposition2 1
static const dd ksortposition2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_exitlink2
#define M2C_CODE_EQUATE_exitlink2 1
static const dd kexitlink2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject2
#define M2C_CODE_EQUATE_exitmobobject2 1
static const dd kexitmobobject2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_controtate2
#define M2C_CODE_EQUATE_controtate2 1
static const dd kcontrotate2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate2
#define M2C_CODE_EQUATE_skiprotate2 1
static const dd kskiprotate2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexlist2
#define M2C_CODE_EQUATE_scanvertexlist2 1
static const dd kscanvertexlist2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_drawmobobject3
#define M2C_CODE_EQUATE_drawmobobject3 1
static const dd kdrawmobobject3 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_skipsort1_3
#define M2C_CODE_EQUATE_skipsort1_3 1
static const dd kskipsort1_3 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_skipsort2_3
#define M2C_CODE_EQUATE_skipsort2_3 1
static const dd kskipsort2_3 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_approxloop3
#define M2C_CODE_EQUATE_approxloop3 1
static const dd kapproxloop3 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_sortposition3
#define M2C_CODE_EQUATE_sortposition3 1
static const dd ksortposition3 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_exitlink3
#define M2C_CODE_EQUATE_exitlink3 1
static const dd kexitlink3 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_exitmobobject3
#define M2C_CODE_EQUATE_exitmobobject3 1
static const dd kexitmobobject3 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_controtate3
#define M2C_CODE_EQUATE_controtate3 1
static const dd kcontrotate3 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_skiprotate3
#define M2C_CODE_EQUATE_skiprotate3 1
static const dd kskiprotate3 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexlist3
#define M2C_CODE_EQUATE_scanvertexlist3 1
static const dd kscanvertexlist3 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop1
#define M2C_CODE_EQUATE_scanvertexloop1 1
static const dd kscanvertexloop1 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex1
#define M2C_CODE_EQUATE_exitscanvertex1 1
static const dd kexitscanvertex1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop2
#define M2C_CODE_EQUATE_scanvertexloop2 1
static const dd kscanvertexloop2 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex2
#define M2C_CODE_EQUATE_exitscanvertex2 1
static const dd kexitscanvertex2 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_scanvertexloop3
#define M2C_CODE_EQUATE_scanvertexloop3 1
static const dd kscanvertexloop3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_exitscanvertex3
#define M2C_CODE_EQUATE_exitscanvertex3 1
static const dd kexitscanvertex3 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_calcmobmaxdim
#define M2C_CODE_EQUATE_calcmobmaxdim 1
static const dd kcalcmobmaxdim = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1031;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcmobmaxdim(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawmobobject1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawmobobject2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawmobobject3(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertexlist1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertexlist2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanvertexlist3(m2c::_offsets, struct m2c::_STATE*);
extern bool calcbfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calccfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid1(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid3(m2c::_offsets, struct m2c::_STATE*);
extern bool dotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool scanface(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef zgridsize
extern dw& zgridsize;
#endif
#ifndef xgz
extern dw& xgz;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef r_ygy
extern dw& r_ygy;
#endif
#ifndef r_xgy
extern dw& r_xgy;
#endif
#ifndef zgz
extern dw& zgz;
#endif
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef ygridsize
extern dw& ygridsize;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef zpos
extern dw& zpos;
#endif
#ifndef r_xgz
extern dw& r_xgz;
#endif
#ifndef r_zgz
extern dw& r_zgz;
#endif
#ifndef xgridsize
extern dw& xgridsize;
#endif
#ifndef mobiletable
extern dw& mobiletable;
#endif
#ifndef objscaleconvert
extern db& objscaleconvert;
#endif
#ifndef ypos
extern dw& ypos;
#endif
#ifndef r_ygx
extern dw& r_ygx;
#endif
#ifndef objanimflags
extern db& objanimflags;
#endif
#ifndef drawrecover
extern dw& drawrecover;
#endif
#ifndef r_zgx
extern dw& r_zgx;
#endif
#ifndef crtbufptr
extern dw& crtbufptr;
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
#ifndef xpos
extern dw& xpos;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
#ifndef r_ygz
extern dw& r_ygz;
#endif

#endif
