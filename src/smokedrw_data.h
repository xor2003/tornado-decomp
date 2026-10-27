#ifndef __M2C_SMOKEDRW_DATA_H__
#define __M2C_SMOKEDRW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& dummy45e8f1d9_data_0_643;
extern dw& sectoradjust;
extern dw& dummy45e8f1d9_data_4_645;
extern db& viscode;

#ifndef objectbufend
extern dw& objectbufend;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef objectbufptr
extern dw& objectbufptr;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
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
static const dd kviscode_0_proc = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_failsmoke
#define M2C_CODE_EQUATE_failsmoke 1
static const dd kfailsmoke = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_drawsmoke
#define M2C_CODE_EQUATE_drawsmoke 1
static const dd kdrawsmoke = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_zrelok
#define M2C_CODE_EQUATE_zrelok 1
static const dd kzrelok = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_failsmokelink
#define M2C_CODE_EQUATE_failsmokelink 1
static const dd kfailsmokelink = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_calcpos
#define M2C_CODE_EQUATE_calcpos 1
static const dd kcalcpos = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_sorted
#define M2C_CODE_EQUATE_sorted 1
static const dd ksorted = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_drawsmokeobject
#define M2C_CODE_EQUATE_drawsmokeobject 1
static const dd kdrawsmokeobject = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_exitsmokeobject
#define M2C_CODE_EQUATE_exitsmokeobject 1
static const dd kexitsmokeobject = 0x1019;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_sectoradjust
#define M2C_CODE_EQUATE_sectoradjust 1
static const dd ksectoradjust = (m2c::near_offset_external(::sectoradjust));
#endif
}
#ifndef sectoradjust
#define sectoradjust m2c::ksectoradjust
#endif



#endif
