#ifndef __M2C_OVERFLOW_DATA_H__
#define __M2C_OVERFLOW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& sstemp;
extern dw& sptemp;
extern db (& overflowflag)[2];
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern char (& hexchars)[16];
extern db& libcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_installoverflow
#define M2C_CODE_EQUATE_installoverflow 1
static const dd kinstalloverflow = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_restoreoverflow
#define M2C_CODE_EQUATE_restoreoverflow 1
static const dd krestoreoverflow = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_overflowintr
#define M2C_CODE_EQUATE_overflowintr 1
static const dd koverflowintr = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x100d;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_sstemp
#define M2C_CODE_EQUATE_sstemp 1
static const dd ksstemp = (m2c::near_offset_external(::sstemp));
#endif
#ifndef M2C_CODE_EQUATE_sptemp
#define M2C_CODE_EQUATE_sptemp 1
static const dd ksptemp = (m2c::near_offset_external(::sptemp));
#endif
#ifndef M2C_CODE_EQUATE_overflowflag
#define M2C_CODE_EQUATE_overflowflag 1
static const dd koverflowflag = (m2c::near_offset_external(::overflowflag));
#endif
#ifndef M2C_CODE_EQUATE_dosvctrseg
#define M2C_CODE_EQUATE_dosvctrseg 1
static const dd kdosvctrseg = (m2c::near_offset_external(::dosvctrseg));
#endif
#ifndef M2C_CODE_EQUATE_dosvctroff
#define M2C_CODE_EQUATE_dosvctroff 1
static const dd kdosvctroff = (m2c::near_offset_external(::dosvctroff));
#endif
#ifndef M2C_CODE_EQUATE_hexchars
#define M2C_CODE_EQUATE_hexchars 1
static const dd khexchars = (m2c::near_offset_external(::hexchars));
#endif
}
#ifndef sstemp
#define sstemp m2c::ksstemp
#endif
#ifndef sptemp
#define sptemp m2c::ksptemp
#endif
#ifndef overflowflag
#define overflowflag m2c::koverflowflag
#endif
#ifndef dosvctrseg
#define dosvctrseg m2c::kdosvctrseg
#endif
#ifndef dosvctroff
#define dosvctroff m2c::kdosvctroff
#endif
#ifndef hexchars
#define hexchars m2c::khexchars
#endif



#endif
