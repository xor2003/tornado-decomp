#ifndef __M2C_STACK_DATA_H__
#define __M2C_STACK_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& stack;
extern dw (& progstack)[256];
extern byte& prog_end;

namespace m2c{
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_progstack
#define M2C_CODE_EQUATE_progstack 1
static const dd kprogstack = (m2c::near_offset_external(::progstack));
#endif
}
#ifndef progstack
#define progstack m2c::kprogstack
#endif



#endif
