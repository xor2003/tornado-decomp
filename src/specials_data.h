#ifndef __M2C_SPECIALS_DATA_H__
#define __M2C_SPECIALS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& viscode;

#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_exitspecials
#define M2C_CODE_EQUATE_exitspecials 1
static const dd kexitspecials = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
}



#endif
