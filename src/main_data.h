#ifndef __M2C_MAIN_DATA_H__
#define __M2C_MAIN_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& videomode;
extern db& returncode;
extern db& code;

#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef psp
extern dw& psp;
#endif
#ifndef overflowflag
extern db& overflowflag;
#endif
#ifndef sstemp
extern dw& sstemp;
#endif
#ifndef sptemp
extern dw& sptemp;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_main
#define M2C_CODE_EQUATE_main 1
static const dd kmain = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_aborttodos
#define M2C_CODE_EQUATE_aborttodos 1
static const dd kaborttodos = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_returntodos
#define M2C_CODE_EQUATE_returntodos 1
static const dd kreturntodos = 0x1017;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_videomode
#define M2C_CODE_EQUATE_videomode 1
static const dd kvideomode = (m2c::near_offset_external(::videomode));
#endif
#ifndef M2C_CODE_EQUATE_returncode
#define M2C_CODE_EQUATE_returncode 1
static const dd kreturncode = (m2c::near_offset_external(::returncode));
#endif
}
#ifndef videomode
#define videomode m2c::kvideomode
#endif
#ifndef returncode
#define returncode m2c::kreturncode
#endif



#endif
