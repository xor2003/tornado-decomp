#ifndef __M2C_TV5_CLIP_DATA_H__
#define __M2C_TV5_CLIP_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& viscode;

#ifndef clipwndwyorg
extern db& clipwndwyorg;
#endif
#ifndef clipwndwxorg
extern dw& clipwndwxorg;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_tv5_scalevp
#define M2C_CODE_EQUATE_tv5_scalevp 1
static const dd ktv5_scalevp = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_ycrtzero
#define M2C_CODE_EQUATE_ycrtzero 1
static const dd kycrtzero = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_tv5_calccrt
#define M2C_CODE_EQUATE_tv5_calccrt 1
static const dd ktv5_calccrt = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_checkovxneg
#define M2C_CODE_EQUATE_checkovxneg 1
static const dd kcheckovxneg = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_xycalc
#define M2C_CODE_EQUATE_xycalc 1
static const dd kxycalc = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_xoverflow
#define M2C_CODE_EQUATE_xoverflow 1
static const dd kxoverflow = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_xcrtok1
#define M2C_CODE_EQUATE_xcrtok1 1
static const dd kxcrtok1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_xcrtok2
#define M2C_CODE_EQUATE_xcrtok2 1
static const dd kxcrtok2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_checkovzneg
#define M2C_CODE_EQUATE_checkovzneg 1
static const dd kcheckovzneg = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_zycalc
#define M2C_CODE_EQUATE_zycalc 1
static const dd kzycalc = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_yoverflow
#define M2C_CODE_EQUATE_yoverflow 1
static const dd kyoverflow = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_ycrtok1
#define M2C_CODE_EQUATE_ycrtok1 1
static const dd kycrtok1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_ycrtok2
#define M2C_CODE_EQUATE_ycrtok2 1
static const dd kycrtok2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE__ycrtzero
#define M2C_CODE_EQUATE__ycrtzero 1
static const dd k_ycrtzero = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_tv5_circlecrt
#define M2C_CODE_EQUATE_tv5_circlecrt 1
static const dd ktv5_circlecrt = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE__checkovxneg
#define M2C_CODE_EQUATE__checkovxneg 1
static const dd k_checkovxneg = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE__xycalc
#define M2C_CODE_EQUATE__xycalc 1
static const dd k_xycalc = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE__xoverflow
#define M2C_CODE_EQUATE__xoverflow 1
static const dd k_xoverflow = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE__checkovzneg
#define M2C_CODE_EQUATE__checkovzneg 1
static const dd k_checkovzneg = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE__zycalc
#define M2C_CODE_EQUATE__zycalc 1
static const dd k_zycalc = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE__yoverflow
#define M2C_CODE_EQUATE__yoverflow 1
static const dd k_yoverflow = 0x101a;
#endif
}



#endif
