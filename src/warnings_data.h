#ifndef __M2C_WARNINGS_DATA_H__
#define __M2C_WARNINGS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& attention;
extern dw& prevredwarn2;
extern dw& prevambwarn2;
extern dw& attntimer;
extern db& modcode;

#ifndef ambwarnings1
extern dw& ambwarnings1;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef cockpitviews
extern db& cockpitviews;
#endif
#ifndef kf_cancelattn
extern db& kf_cancelattn;
#endif
#ifndef redwarnings1
extern dw& redwarnings1;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_exitfailures
#define M2C_CODE_EQUATE_exitfailures 1
static const dd kexitfailures = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_contfailures
#define M2C_CODE_EQUATE_contfailures 1
static const dd kcontfailures = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_skipsound
#define M2C_CODE_EQUATE_skipsound 1
static const dd kskipsound = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100d;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_attention
#define M2C_CODE_EQUATE_attention 1
static const dd kattention = (m2c::near_offset_external(::attention));
#endif
#ifndef M2C_CODE_EQUATE_prevredwarn2
#define M2C_CODE_EQUATE_prevredwarn2 1
static const dd kprevredwarn2 = (m2c::near_offset_external(::prevredwarn2));
#endif
#ifndef M2C_CODE_EQUATE_prevambwarn2
#define M2C_CODE_EQUATE_prevambwarn2 1
static const dd kprevambwarn2 = (m2c::near_offset_external(::prevambwarn2));
#endif
#ifndef M2C_CODE_EQUATE_attntimer
#define M2C_CODE_EQUATE_attntimer 1
static const dd kattntimer = (m2c::near_offset_external(::attntimer));
#endif
}
#ifndef attention
#define attention m2c::kattention
#endif
#ifndef prevredwarn2
#define prevredwarn2 m2c::kprevredwarn2
#endif
#ifndef prevambwarn2
#define prevambwarn2 m2c::kprevambwarn2
#endif
#ifndef attntimer
#define attntimer m2c::kattntimer
#endif



#endif
