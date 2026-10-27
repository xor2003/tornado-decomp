#ifndef __M2C_HGC_STUB_DATA_H__
#define __M2C_HGC_STUB_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& gcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_hgc_vmode
#define M2C_CODE_EQUATE_hgc_vmode 1
static const dd khgc_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_hgc_dload
#define M2C_CODE_EQUATE_hgc_dload 1
static const dd khgc_dload = 0x1005;
#endif
}



#endif
