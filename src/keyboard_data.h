#ifndef __M2C_KEYBOARD_DATA_H__
#define __M2C_KEYBOARD_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& key)[128];
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern db& libcode;

#ifndef sstemp
extern dw& sstemp;
#endif
#ifndef sptemp
extern dw& sptemp;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_installkbd
#define M2C_CODE_EQUATE_installkbd 1
static const dd kinstallkbd = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_restorekbd
#define M2C_CODE_EQUATE_restorekbd 1
static const dd krestorekbd = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_kbdintr
#define M2C_CODE_EQUATE_kbdintr 1
static const dd kkbdintr = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_fixshiftkey2
#define M2C_CODE_EQUATE_fixshiftkey2 1
static const dd kfixshiftkey2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_fixshiftkey1
#define M2C_CODE_EQUATE_fixshiftkey1 1
static const dd kfixshiftkey1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_fixpluskey2
#define M2C_CODE_EQUATE_fixpluskey2 1
static const dd kfixpluskey2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_fixpluskey1
#define M2C_CODE_EQUATE_fixpluskey1 1
static const dd kfixpluskey1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_fixminuskey2
#define M2C_CODE_EQUATE_fixminuskey2 1
static const dd kfixminuskey2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_fixminuskey1
#define M2C_CODE_EQUATE_fixminuskey1 1
static const dd kfixminuskey1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_keysfixed
#define M2C_CODE_EQUATE_keysfixed 1
static const dd kkeysfixed = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_rettodos
#define M2C_CODE_EQUATE_rettodos 1
static const dd krettodos = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_clearkeybuffer
#define M2C_CODE_EQUATE_clearkeybuffer 1
static const dd kclearkeybuffer = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1013;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_key
#define M2C_CODE_EQUATE_key 1
static const dd kkey = (m2c::near_offset_external(::key));
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
#ifndef key
#define key m2c::kkey
#endif
#ifndef dosvctrseg
#define dosvctrseg m2c::kdosvctrseg
#endif
#ifndef dosvctroff
#define dosvctroff m2c::kdosvctroff
#endif



#endif
