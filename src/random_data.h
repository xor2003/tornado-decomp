#ifndef __M2C_RANDOM_DATA_H__
#define __M2C_RANDOM_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& seedlo;
extern dw& seedhi;
extern db (& rndindex)[2];
extern db (& rndtable)[256];
extern db& libcode;

#ifndef ticker
extern dw& ticker;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_randx
#define M2C_CODE_EQUATE_randx 1
static const dd krandx = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_zerobit1
#define M2C_CODE_EQUATE_zerobit1 1
static const dd kzerobit1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_zerobit2
#define M2C_CODE_EQUATE_zerobit2 1
static const dd kzerobit2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_zerobit3
#define M2C_CODE_EQUATE_zerobit3 1
static const dd kzerobit3 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_zerobit4
#define M2C_CODE_EQUATE_zerobit4 1
static const dd kzerobit4 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_zerobit5
#define M2C_CODE_EQUATE_zerobit5 1
static const dd kzerobit5 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_zerobit6
#define M2C_CODE_EQUATE_zerobit6 1
static const dd kzerobit6 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_zerobit7
#define M2C_CODE_EQUATE_zerobit7 1
static const dd kzerobit7 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_zerobit8
#define M2C_CODE_EQUATE_zerobit8 1
static const dd kzerobit8 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_reseed
#define M2C_CODE_EQUATE_reseed 1
static const dd kreseed = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_seedok
#define M2C_CODE_EQUATE_seedok 1
static const dd kseedok = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_fastrandx
#define M2C_CODE_EQUATE_fastrandx 1
static const dd kfastrandx = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1012;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_seedlo
#define M2C_CODE_EQUATE_seedlo 1
static const dd kseedlo = (m2c::near_offset_external(::seedlo));
#endif
#ifndef M2C_CODE_EQUATE_seedhi
#define M2C_CODE_EQUATE_seedhi 1
static const dd kseedhi = (m2c::near_offset_external(::seedhi));
#endif
#ifndef M2C_CODE_EQUATE_rndindex
#define M2C_CODE_EQUATE_rndindex 1
static const dd krndindex = (m2c::near_offset_external(::rndindex));
#endif
#ifndef M2C_CODE_EQUATE_rndtable
#define M2C_CODE_EQUATE_rndtable 1
static const dd krndtable = (m2c::near_offset_external(::rndtable));
#endif
}
#ifndef seedlo
#define seedlo m2c::kseedlo
#endif
#ifndef seedhi
#define seedhi m2c::kseedhi
#endif
#ifndef rndindex
#define rndindex m2c::krndindex
#endif
#ifndef rndtable
#define rndtable m2c::krndtable
#endif



#endif
