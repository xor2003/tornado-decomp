#ifndef __M2C_RNGBRG_DATA_H__
#define __M2C_RNGBRG_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw (& octtable)[2];
extern dw (& dummycd474ec0_data_4_1813)[2];
extern dw (& dummycd474ec0_data_8_1814)[2];
extern dw (& dummycd474ec0_data_c_1815)[2];
extern dw (& dummycd474ec0_data_10_1816)[2];
extern dw (& dummycd474ec0_data_14_1817)[2];
extern dw (& dummycd474ec0_data_18_1818)[2];
extern dw (& dummycd474ec0_data_1c_1819)[2];
extern dd& flatdx;
extern dd& flatdy;
extern dd& slantrng;
extern dd& slantdx;
extern dd& slantdy;
extern dd& slantdz;
extern db& gencode;

#ifndef costable
extern dw& costable;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
#define M2C_CODE_EQUATE_calcrngbrgvp_vp 1
static const dd kcalcrngbrgvp_vp = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
#define M2C_CODE_EQUATE_calcrngbrgvp_wp 1
static const dd kcalcrngbrgvp_wp = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgwp_wp
#define M2C_CODE_EQUATE_calcrngbrgwp_wp 1
static const dd kcalcrngbrgwp_wp = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_af
#define M2C_CODE_EQUATE_calcrngbrgvp_af 1
static const dd kcalcrngbrgvp_af = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_scalevals
#define M2C_CODE_EQUATE_scalevals 1
static const dd kscalevals = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_swapvals
#define M2C_CODE_EQUATE_swapvals 1
static const dd kswapvals = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_contbrg
#define M2C_CODE_EQUATE_contbrg 1
static const dd kcontbrg = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_scaleloop
#define M2C_CODE_EQUATE_scaleloop 1
static const dd kscaleloop = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_exitrngbrg
#define M2C_CODE_EQUATE_exitrngbrg 1
static const dd kexitrngbrg = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_calcangdiff
#define M2C_CODE_EQUATE_calcangdiff 1
static const dd kcalcangdiff = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_calcnmiles
#define M2C_CODE_EQUATE_calcnmiles 1
static const dd kcalcnmiles = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_setmaxrange
#define M2C_CODE_EQUATE_setmaxrange 1
static const dd ksetmaxrange = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_calceta
#define M2C_CODE_EQUATE_calceta 1
static const dd kcalceta = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_setmaxtime
#define M2C_CODE_EQUATE_setmaxtime 1
static const dd ksetmaxtime = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_calcslantrange
#define M2C_CODE_EQUATE_calcslantrange 1
static const dd kcalcslantrange = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_longrange
#define M2C_CODE_EQUATE_longrange 1
static const dd klongrange = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_shortrange
#define M2C_CODE_EQUATE_shortrange 1
static const dd kshortrange = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_sortok1
#define M2C_CODE_EQUATE_sortok1 1
static const dd ksortok1 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_sortok2
#define M2C_CODE_EQUATE_sortok2 1
static const dd ksortok2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x102b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_octtable
#define M2C_CODE_EQUATE_octtable 1
static const dd kocttable = (m2c::near_offset_external(::octtable));
#endif
#ifndef M2C_CODE_EQUATE_flatdx
#define M2C_CODE_EQUATE_flatdx 1
static const dd kflatdx = (m2c::near_offset_external(::flatdx));
#endif
#ifndef M2C_CODE_EQUATE_flatdy
#define M2C_CODE_EQUATE_flatdy 1
static const dd kflatdy = (m2c::near_offset_external(::flatdy));
#endif
#ifndef M2C_CODE_EQUATE_slantrng
#define M2C_CODE_EQUATE_slantrng 1
static const dd kslantrng = (m2c::near_offset_external(::slantrng));
#endif
#ifndef M2C_CODE_EQUATE_slantdx
#define M2C_CODE_EQUATE_slantdx 1
static const dd kslantdx = (m2c::near_offset_external(::slantdx));
#endif
#ifndef M2C_CODE_EQUATE_slantdy
#define M2C_CODE_EQUATE_slantdy 1
static const dd kslantdy = (m2c::near_offset_external(::slantdy));
#endif
#ifndef M2C_CODE_EQUATE_slantdz
#define M2C_CODE_EQUATE_slantdz 1
static const dd kslantdz = (m2c::near_offset_external(::slantdz));
#endif
}
#ifndef octtable
#define octtable m2c::kocttable
#endif
#ifndef flatdx
#define flatdx m2c::kflatdx
#endif
#ifndef flatdy
#define flatdy m2c::kflatdy
#endif
#ifndef slantrng
#define slantrng m2c::kslantrng
#endif
#ifndef slantdx
#define slantdx m2c::kslantdx
#endif
#ifndef slantdy
#define slantdy m2c::kslantdy
#endif
#ifndef slantdz
#define slantdz m2c::kslantdz
#endif



#endif
