#ifndef __M2C_LOADPIC_DATA_H__
#define __M2C_LOADPIC_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& fadeflag;
extern db& piccode;

#ifndef dieflag
extern db& dieflag;
#endif
#ifndef countdown
extern dw& countdown;
#endif
#ifndef key
extern db& key;
#endif
#ifndef workscreen
extern db& workscreen;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_loaderror
#define M2C_CODE_EQUATE_loaderror 1
static const dd kloaderror = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_fadeinok
#define M2C_CODE_EQUATE_fadeinok 1
static const dd kfadeinok = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_waitloop
#define M2C_CODE_EQUATE_waitloop 1
static const dd kwaitloop = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_sortquit
#define M2C_CODE_EQUATE_sortquit 1
static const dd ksortquit = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_waitnomore
#define M2C_CODE_EQUATE_waitnomore 1
static const dd kwaitnomore = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_fadeoutok
#define M2C_CODE_EQUATE_fadeoutok 1
static const dd kfadeoutok = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1019;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_fadeflag
#define M2C_CODE_EQUATE_fadeflag 1
static const dd kfadeflag = (m2c::near_offset_external(::fadeflag));
#endif
}
#ifndef fadeflag
#define fadeflag m2c::kfadeflag
#endif



#endif
