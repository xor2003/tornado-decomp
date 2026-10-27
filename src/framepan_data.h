#ifndef __M2C_FRAMEPAN_DATA_H__
#define __M2C_FRAMEPAN_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& pancode;

#ifndef ironwork
extern db& ironwork;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_loadframepan
#define M2C_CODE_EQUATE_loadframepan 1
static const dd kloadframepan = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_updateframe
#define M2C_CODE_EQUATE_updateframe 1
static const dd kupdateframe = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1009;
#endif
}



#endif
