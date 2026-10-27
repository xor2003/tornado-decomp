#ifndef __M2C_HEM_STUB_DATA_H__
#define __M2C_HEM_STUB_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& gcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_hem_vmode
#define M2C_CODE_EQUATE_hem_vmode 1
static const dd khem_vmode = 0x1004;
#endif
}



#endif
