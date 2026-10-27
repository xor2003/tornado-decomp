#ifndef __M2C_INTERCPT_DATA_H__
#define __M2C_INTERCPT_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& unitvctrtgtx;
extern dw& unitvctrtgty;
extern dw& unitvctrtgtz;
extern db& gencode;

#ifndef sintable
extern dw& sintable;
#endif
#ifndef costable
extern dw& costable;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_exitintercept
#define M2C_CODE_EQUATE_exitintercept 1
static const dd kexitintercept = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_skipzscale
#define M2C_CODE_EQUATE_skipzscale 1
static const dd kskipzscale = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_skipxyscale
#define M2C_CODE_EQUATE_skipxyscale 1
static const dd kskipxyscale = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x100f;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_unitvctrtgtx
#define M2C_CODE_EQUATE_unitvctrtgtx 1
static const dd kunitvctrtgtx = (m2c::near_offset_external(::unitvctrtgtx));
#endif
#ifndef M2C_CODE_EQUATE_unitvctrtgty
#define M2C_CODE_EQUATE_unitvctrtgty 1
static const dd kunitvctrtgty = (m2c::near_offset_external(::unitvctrtgty));
#endif
#ifndef M2C_CODE_EQUATE_unitvctrtgtz
#define M2C_CODE_EQUATE_unitvctrtgtz 1
static const dd kunitvctrtgtz = (m2c::near_offset_external(::unitvctrtgtz));
#endif
}
#ifndef unitvctrtgtx
#define unitvctrtgtx m2c::kunitvctrtgtx
#endif
#ifndef unitvctrtgty
#define unitvctrtgty m2c::kunitvctrtgty
#endif
#ifndef unitvctrtgtz
#define unitvctrtgtz m2c::kunitvctrtgtz
#endif



#endif
