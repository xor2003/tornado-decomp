#ifndef __M2C_MOBDRAW_DATA_H__
#define __M2C_MOBDRAW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& temp1;
extern dw& temp2;
extern dw& dummy339baa22_data_4_645;
extern dw& sectoradjust;
extern dw& dummy339baa22_data_8_647;
extern db& viscode;

#ifndef objectbufend
extern dw& objectbufend;
#endif
#ifndef objectbufptr
extern dw& objectbufptr;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef clouddepth
extern dw& clouddepth;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_failmobile
#define M2C_CODE_EQUATE_failmobile 1
static const dd kfailmobile = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_drawmobile
#define M2C_CODE_EQUATE_drawmobile 1
static const dd kdrawmobile = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_zrelok
#define M2C_CODE_EQUATE_zrelok 1
static const dd kzrelok = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_failmobilelink
#define M2C_CODE_EQUATE_failmobilelink 1
static const dd kfailmobilelink = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_calcpos
#define M2C_CODE_EQUATE_calcpos 1
static const dd kcalcpos = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_sorted
#define M2C_CODE_EQUATE_sorted 1
static const dd ksorted = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1015;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_temp1
#define M2C_CODE_EQUATE_temp1 1
static const dd ktemp1 = (m2c::near_offset_external(::temp1));
#endif
#ifndef M2C_CODE_EQUATE_temp2
#define M2C_CODE_EQUATE_temp2 1
static const dd ktemp2 = (m2c::near_offset_external(::temp2));
#endif
#ifndef M2C_CODE_EQUATE_sectoradjust
#define M2C_CODE_EQUATE_sectoradjust 1
static const dd ksectoradjust = (m2c::near_offset_external(::sectoradjust));
#endif
}
#ifndef temp1
#define temp1 m2c::ktemp1
#endif
#ifndef temp2
#define temp2 m2c::ktemp2
#endif
#ifndef sectoradjust
#define sectoradjust m2c::ksectoradjust
#endif



#endif
