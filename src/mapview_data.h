#ifndef __M2C_MAPVIEW_DATA_H__
#define __M2C_MAPVIEW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& mapzoom;
extern dw& extravalue;
extern viewport& vp;
extern viewport& vp_full;
extern db& dummycc3da1c9_data_18_852;
extern db& dummycc3da1c9_data_19_853;
extern db (& dummycc3da1c9_data_1a_854)[10];
extern db (& dummycc3da1c9_data_24_855)[2];
extern dw (& dummycc3da1c9_data_26_856)[2];
extern db (& dummycc3da1c9_data_2a_857)[2];
extern dw& dummycc3da1c9_data_2c_858;
extern char (& dummycc3da1c9_data_2e_859)[2];
extern db& dummycc3da1c9_data_30_860;
extern dw& rangevalsptr;
extern char (& rangevalsdol)[5];
extern char (& dummycc3da1c9_data_38_865)[5];
extern char (& dummycc3da1c9_data_3d_866)[5];
extern char (& dummycc3da1c9_data_42_867)[5];
extern char (& dummycc3da1c9_data_47_868)[5];
extern char (& dummycc3da1c9_data_4c_869)[5];
extern byte& rangedol;
extern db& pancode;

#ifndef ycrt
extern db& ycrt;
#endif
#ifndef kf_mapzoomin
extern db& kf_mapzoomin;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef kf_mapzoomout
extern db& kf_mapzoomout;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef splitscreenbigmapison
extern db& splitscreenbigmapison;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_mapview
#define M2C_CODE_EQUATE_mapview 1
static const dd kmapview = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomin
#define M2C_CODE_EQUATE_skipzoomin 1
static const dd kskipzoomin = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomout
#define M2C_CODE_EQUATE_skipzoomout 1
static const dd kskipzoomout = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_frankie_2
#define M2C_CODE_EQUATE_frankie_2 1
static const dd kfrankie_2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_frankie_3
#define M2C_CODE_EQUATE_frankie_3 1
static const dd kfrankie_3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_gradloop
#define M2C_CODE_EQUATE_gradloop 1
static const dd kgradloop = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101e;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_mapzoom
#define M2C_CODE_EQUATE_mapzoom 1
static const dd kmapzoom = (m2c::near_offset_external(::mapzoom));
#endif
#ifndef M2C_CODE_EQUATE_extravalue
#define M2C_CODE_EQUATE_extravalue 1
static const dd kextravalue = (m2c::near_offset_external(::extravalue));
#endif
#ifndef M2C_CODE_EQUATE_vp
#define M2C_CODE_EQUATE_vp 1
static const dd kvp = (m2c::near_offset_external(::vp));
#endif
#ifndef M2C_CODE_EQUATE_vp_full
#define M2C_CODE_EQUATE_vp_full 1
static const dd kvp_full = (m2c::near_offset_external(::vp_full));
#endif
#ifndef M2C_CODE_EQUATE_rangevalsptr
#define M2C_CODE_EQUATE_rangevalsptr 1
static const dd krangevalsptr = (m2c::near_offset_external(::rangevalsptr));
#endif
#ifndef M2C_CODE_EQUATE_rangevalsdol
#define M2C_CODE_EQUATE_rangevalsdol 1
static const dd krangevalsdol = (m2c::near_offset_external(::rangevalsdol));
#endif
}
#ifndef mapzoom
#define mapzoom m2c::kmapzoom
#endif
#ifndef extravalue
#define extravalue m2c::kextravalue
#endif
#ifndef vp
#define vp m2c::kvp
#endif
#ifndef vp_full
#define vp_full m2c::kvp_full
#endif
#ifndef rangevalsptr
#define rangevalsptr m2c::krangevalsptr
#endif
#ifndef rangevalsdol
#define rangevalsdol m2c::krangevalsdol
#endif



#endif
