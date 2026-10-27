#ifndef __M2C_QS_VGA_1_DATA_H__
#define __M2C_QS_VGA_1_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& qsprdata;
extern char (& qspriteid)[16];
extern dw& dummy3e6dc6b8_qsprdata_10_65;
extern word& qspritelist;

namespace m2c{
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_qspriteid
#define M2C_CODE_EQUATE_qspriteid 1
static const dd kqspriteid = (m2c::near_offset_external(::qspriteid));
#endif
}
#ifndef qspriteid
#define qspriteid m2c::kqspriteid
#endif



#endif
