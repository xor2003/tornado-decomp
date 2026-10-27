#ifndef __M2C_VCONFIG_DATA_H__
#define __M2C_VCONFIG_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& viscode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
}



#endif
