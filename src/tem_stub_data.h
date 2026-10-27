#ifndef __M2C_TEM_STUB_DATA_H__
#define __M2C_TEM_STUB_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& gcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_tem_vmode
#define M2C_CODE_EQUATE_tem_vmode 1
static const dd ktem_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_tem_dload
#define M2C_CODE_EQUATE_tem_dload 1
static const dd ktem_dload = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_setupegatable
#define M2C_CODE_EQUATE_setupegatable 1
static const dd ksetupegatable = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_convtantoega
#define M2C_CODE_EQUATE_convtantoega 1
static const dd kconvtantoega = 0x1007;
#endif
}



#endif
