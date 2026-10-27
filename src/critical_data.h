#ifndef __M2C_CRITICAL_DATA_H__
#define __M2C_CRITICAL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& criterrflag)[2];
extern dw& criterrcode;
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern db& libcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_installcriterr
#define M2C_CODE_EQUATE_installcriterr 1
static const dd kinstallcriterr = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_restorecriterr
#define M2C_CODE_EQUATE_restorecriterr 1
static const dd krestorecriterr = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_criterrintr
#define M2C_CODE_EQUATE_criterrintr 1
static const dd kcriterrintr = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1008;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_criterrflag
#define M2C_CODE_EQUATE_criterrflag 1
static const dd kcriterrflag = (m2c::near_offset_external(::criterrflag));
#endif
#ifndef M2C_CODE_EQUATE_criterrcode
#define M2C_CODE_EQUATE_criterrcode 1
static const dd kcriterrcode = (m2c::near_offset_external(::criterrcode));
#endif
#ifndef M2C_CODE_EQUATE_dosvctrseg
#define M2C_CODE_EQUATE_dosvctrseg 1
static const dd kdosvctrseg = (m2c::near_offset_external(::dosvctrseg));
#endif
#ifndef M2C_CODE_EQUATE_dosvctroff
#define M2C_CODE_EQUATE_dosvctroff 1
static const dd kdosvctroff = (m2c::near_offset_external(::dosvctroff));
#endif
}
#ifndef criterrflag
#define criterrflag m2c::kcriterrflag
#endif
#ifndef criterrcode
#define criterrcode m2c::kcriterrcode
#endif
#ifndef dosvctrseg
#define dosvctrseg m2c::kdosvctrseg
#endif
#ifndef dosvctroff
#define dosvctroff m2c::kdosvctroff
#endif



#endif
