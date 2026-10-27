/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VISDATA_STUBS_H__
#define __M2C_VISDATA_STUBS_H__

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
static const int num_points = 128;

constexpr int M2C_MODULE_VISDATA = 1;
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern viewpoint& v_view;
extern dw& viewmode;
extern dw& viewrotatemode;
extern dw& zscaled;
extern dw& v_sinh;
extern dw& v_cosh;
extern dw& v_sinp;
extern dw& v_cosp;
extern dw& v_sinr;
extern dw& v_cosr;
extern dw& a1;
extern dw& a2;
extern dw& a3;
extern dw& a4;
extern dw& a5;
extern dw& a6;
extern dw& a7;
extern dw& a8;
extern dw& a9;
extern dw& b1;
extern dw& b2;
extern dw& b3;
extern dw& b4;
extern dw& b5;
extern dw& b6;
extern dw& b7;
extern dw& b8;
extern dw& b9;
extern dw& c1;
extern dw& c2;
extern dw& c3;
extern dw& c4;
extern dw& c5;
extern dw& c6;
extern dw& c7;
extern dw& c8;
extern dw& c9;
extern dw& d1;
extern dw& d2;
extern dw& d3;
extern dw& d4;
extern dw& d5;
extern dw& d6;
extern dw& d7;
extern dw& d8;
extern dw& d9;
extern dw (& xsx)[129];
extern dw (& xsy)[129];
extern dw (& xsz)[17];
extern dw (& ysx)[129];
extern dw (& ysy)[129];
extern dw (& ysz)[17];
extern dw (& zsx)[129];
extern dw (& zsy)[129];
extern dw (& zsz)[17];
extern dw (& xgx)[65];
extern dw (& xgy)[65];
extern dw (& xgz)[65];
extern dw (& ygx)[65];
extern dw (& ygy)[65];
extern dw (& ygz)[65];
extern dw (& zgx)[65];
extern dw (& zgy)[65];
extern dw (& zgz)[65];
extern dw (& r_xgx)[65];
extern dw (& r_xgy)[65];
extern dw (& r_xgz)[65];
extern dw (& r_ygx)[65];
extern dw (& r_ygy)[65];
extern dw (& r_ygz)[65];
extern dw (& r_zgx)[65];
extern dw (& r_zgy)[65];
extern dw (& r_zgz)[65];
extern dw& xgridsize;
extern dw& ygridsize;
extern dw& zgridsize;
extern db& objscaleconvert;
extern db& dummyec2367ed_data_1009_589;
extern dw& xgrid1;
extern dw& ygrid1;
extern dw& xrel1;
extern dw& yrel1;
extern dw& zrel1;
extern dw& xe01;
extern dw& ye01;
extern dw& ze01;
extern dw& xe01_2;
extern dw& ye01_2;
extern dw& ze01_2;
extern dw& xe01_4;
extern dw& ye01_4;
extern dw& ze01_4;
extern dw& xe01_8;
extern dw& ye01_8;
extern dw& ze01_8;
extern dw& xe01_16;
extern dw& ye01_16;
extern dw& ze01_16;
extern dw& xpos1;
extern dw& ypos1;
extern dw& zpos1;
extern db& valid1_2;
extern db& valid1_4;
extern db& valid1_8;
extern db& valid1_16;
extern dw& xgrid2;
extern dw& ygrid2;
extern dw& xrel2;
extern dw& yrel2;
extern dw& zrel2;
extern dw& xe02;
extern dw& ye02;
extern dw& ze02;
extern dw& xpos2;
extern dw& ypos2;
extern dw& zpos2;
extern dw& xgrid8;
extern dw& ygrid8;
extern dw& xrel8;
extern dw& yrel8;
extern dw& zrel8;
extern dw& xe08;
extern dw& ye08;
extern dw& ze08;
extern dw& xpos8;
extern dw& ypos8;
extern dw& zpos8;
extern dw& xgrid16;
extern dw& ygrid16;
extern dw& xrel16;
extern dw& yrel16;
extern dw& zrel16;
extern dw& xe016;
extern dw& ye016;
extern dw& ze016;
extern dw& xpos16;
extern dw& ypos16;
extern dw& zpos16;
extern dw& xpos;
extern dw& ypos;
extern dw& zpos;
extern dw (& xe)[128];
extern dw (& ye)[128];
extern dw (& ze)[128];
extern dw (& xcrt)[128];
extern db& ycrt;
extern db& outcode;
extern dw (& dummyec2367ed_data_1486_693)[127];
extern dw (& crtbuffer)[1024];
extern dw& crtbufptr;
extern db& col1;
extern db& col2;
extern db (& stndpoly4)[5];
extern db (& stndpoly3)[4];
extern objectdata (& objectbuffer)[512];
extern dw& objectbufptr;
extern dw (& objectdist1)[65];
extern dw (& objectdist2)[2];
extern dw (& objectdist3)[2];
extern dw (& farobjectdist)[65];
extern dw& sctrscalemode;
extern dw& mapindex;
extern dw& xsecscan;
extern dw& ysecscan;
extern db (& nomansland)[2];
extern dw& numvissctrs;
extern dw& sctrscalefactor;
extern dw& dummyec2367ed_data_46ad_752;
extern dw& dummyec2367ed_data_46af_753;
extern dw& dummyec2367ed_data_46b1_754;
extern dw& sctrscaleypos;
extern dw& dummyec2367ed_data_46b5_758;
extern dw& dummyec2367ed_data_46b7_759;
extern dw& dummyec2367ed_data_46b9_760;
extern dw& secscancnt1;
extern dw& secscanoff1;
extern dw& secscancnt2;
extern dw& secscanoff2;
extern db (& copybuffer)[1500];
extern db (& cyclic)[2];
extern db (& objanimflags)[2];
extern objectdata& flatobject;
extern dw& mobsortptr;
extern mobsort (& mobsortbins)[256];
extern dw& nummobiles;
extern word& colours;
extern word& objectbufend;

	
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
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
