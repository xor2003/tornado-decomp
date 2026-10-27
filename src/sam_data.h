#ifndef __M2C_SAM_DATA_H__
#define __M2C_SAM_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& samtimer;
extern viewpoint& sam_view;
extern viewpoint& aim_view;
extern db& weaponcode;

#ifndef rwrthreats
extern radars& rwrthreats;
#endif
#ifndef rwrthreatflags
extern db& rwrthreatflags;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef msctrdatastart
extern db& msctrdatastart;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef numrwrthreats
extern dw& numrwrthreats;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef incockpit
extern db& incockpit;
#endif
#ifndef activesamcntr
extern dw& activesamcntr;
#endif
#ifndef tornadooppptr
extern dw& tornadooppptr;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef nofire
extern db& nofire;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_samexit
#define M2C_CODE_EQUATE_samexit 1
static const dd ksamexit = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_samscanloop
#define M2C_CODE_EQUATE_samscanloop 1
static const dd ksamscanloop = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_samlocated
#define M2C_CODE_EQUATE_samlocated 1
static const dd ksamlocated = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101d;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_samtimer
#define M2C_CODE_EQUATE_samtimer 1
static const dd ksamtimer = (m2c::near_offset_external(::samtimer));
#endif
#ifndef M2C_CODE_EQUATE_sam_view
#define M2C_CODE_EQUATE_sam_view 1
static const dd ksam_view = (m2c::near_offset_external(::sam_view));
#endif
#ifndef M2C_CODE_EQUATE_aim_view
#define M2C_CODE_EQUATE_aim_view 1
static const dd kaim_view = (m2c::near_offset_external(::aim_view));
#endif
}
#ifndef samtimer
#define samtimer m2c::ksamtimer
#endif
#ifndef sam_view
#define sam_view m2c::ksam_view
#endif
#ifndef aim_view
#define aim_view m2c::kaim_view
#endif



#endif
