#ifndef __M2C_VISUAL_DATA_H__
#define __M2C_VISUAL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& sortclouds;
extern dw& dummy67ecaf93_data_2_53;
extern dw& dummy67ecaf93_data_4_54;
extern db& viscode;

#ifndef cloudmode
extern dw& cloudmode;
#endif
#ifndef overcast
extern db& overcast;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_visual
#define M2C_CODE_EQUATE_visual 1
static const dd kvisual = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_mobilevisual
#define M2C_CODE_EQUATE_mobilevisual 1
static const dd kmobilevisual = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1021;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_sortclouds
#define M2C_CODE_EQUATE_sortclouds 1
static const dd ksortclouds = (m2c::near_offset_external(::sortclouds));
#endif
}
#ifndef sortclouds
#define sortclouds m2c::ksortclouds
#endif



#endif
