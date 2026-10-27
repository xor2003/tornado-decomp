#ifndef __M2C_MS_VGA_1_DATA_H__
#define __M2C_MS_VGA_1_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& msprdata;
extern char (& mspriteid)[16];
extern dw& dummy433c2b03_msprdata_10_80;
extern word& mspritelist;

namespace m2c{
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_mspriteid
#define M2C_CODE_EQUATE_mspriteid 1
static const dd kmspriteid = (m2c::near_offset_external(::mspriteid));
#endif
}
#ifndef mspriteid
#define mspriteid m2c::kmspriteid
#endif



#endif
