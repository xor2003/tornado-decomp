#ifndef __M2C_NEWMOUSE_DATA_H__
#define __M2C_NEWMOUSE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& mouseflag)[2];
extern dw& mousexmin;
extern dw& mousexmax;
extern dw& mouseymin;
extern dw& mouseymax;
extern dw& mousex;
extern dw& mousey;
extern dw& _mousex;
extern dw& _mousey;
extern db& lhsbutton;
extern db& rhsbutton;
extern db& _lhsbutton;
extern db& _rhsbutton;
extern dw& xmickeys;
extern dw& ymickeys;
extern db& libcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_installmouse
#define M2C_CODE_EQUATE_installmouse 1
static const dd kinstallmouse = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_installexit
#define M2C_CODE_EQUATE_installexit 1
static const dd kinstallexit = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_restoremouse
#define M2C_CODE_EQUATE_restoremouse 1
static const dd krestoremouse = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_resetmouse
#define M2C_CODE_EQUATE_resetmouse 1
static const dd kresetmouse = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_readmouse
#define M2C_CODE_EQUATE_readmouse 1
static const dd kreadmouse = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_updateexit
#define M2C_CODE_EQUATE_updateexit 1
static const dd kupdateexit = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_readmousemotion
#define M2C_CODE_EQUATE_readmousemotion 1
static const dd kreadmousemotion = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_readmotionexit
#define M2C_CODE_EQUATE_readmotionexit 1
static const dd kreadmotionexit = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101c;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_mouseflag
#define M2C_CODE_EQUATE_mouseflag 1
static const dd kmouseflag = (m2c::near_offset_external(::mouseflag));
#endif
#ifndef M2C_CODE_EQUATE_mousexmin
#define M2C_CODE_EQUATE_mousexmin 1
static const dd kmousexmin = (m2c::near_offset_external(::mousexmin));
#endif
#ifndef M2C_CODE_EQUATE_mousexmax
#define M2C_CODE_EQUATE_mousexmax 1
static const dd kmousexmax = (m2c::near_offset_external(::mousexmax));
#endif
#ifndef M2C_CODE_EQUATE_mouseymin
#define M2C_CODE_EQUATE_mouseymin 1
static const dd kmouseymin = (m2c::near_offset_external(::mouseymin));
#endif
#ifndef M2C_CODE_EQUATE_mouseymax
#define M2C_CODE_EQUATE_mouseymax 1
static const dd kmouseymax = (m2c::near_offset_external(::mouseymax));
#endif
#ifndef M2C_CODE_EQUATE_mousex
#define M2C_CODE_EQUATE_mousex 1
static const dd kmousex = (m2c::near_offset_external(::mousex));
#endif
#ifndef M2C_CODE_EQUATE_mousey
#define M2C_CODE_EQUATE_mousey 1
static const dd kmousey = (m2c::near_offset_external(::mousey));
#endif
#ifndef M2C_CODE_EQUATE__mousex
#define M2C_CODE_EQUATE__mousex 1
static const dd k_mousex = (m2c::near_offset_external(::_mousex));
#endif
#ifndef M2C_CODE_EQUATE__mousey
#define M2C_CODE_EQUATE__mousey 1
static const dd k_mousey = (m2c::near_offset_external(::_mousey));
#endif
#ifndef M2C_CODE_EQUATE_lhsbutton
#define M2C_CODE_EQUATE_lhsbutton 1
static const dd klhsbutton = (m2c::near_offset_external(::lhsbutton));
#endif
#ifndef M2C_CODE_EQUATE_rhsbutton
#define M2C_CODE_EQUATE_rhsbutton 1
static const dd krhsbutton = (m2c::near_offset_external(::rhsbutton));
#endif
#ifndef M2C_CODE_EQUATE__lhsbutton
#define M2C_CODE_EQUATE__lhsbutton 1
static const dd k_lhsbutton = (m2c::near_offset_external(::_lhsbutton));
#endif
#ifndef M2C_CODE_EQUATE__rhsbutton
#define M2C_CODE_EQUATE__rhsbutton 1
static const dd k_rhsbutton = (m2c::near_offset_external(::_rhsbutton));
#endif
#ifndef M2C_CODE_EQUATE_xmickeys
#define M2C_CODE_EQUATE_xmickeys 1
static const dd kxmickeys = (m2c::near_offset_external(::xmickeys));
#endif
#ifndef M2C_CODE_EQUATE_ymickeys
#define M2C_CODE_EQUATE_ymickeys 1
static const dd kymickeys = (m2c::near_offset_external(::ymickeys));
#endif
}
#ifndef mouseflag
#define mouseflag m2c::kmouseflag
#endif
#ifndef mousexmin
#define mousexmin m2c::kmousexmin
#endif
#ifndef mousexmax
#define mousexmax m2c::kmousexmax
#endif
#ifndef mouseymin
#define mouseymin m2c::kmouseymin
#endif
#ifndef mouseymax
#define mouseymax m2c::kmouseymax
#endif
#ifndef mousex
#define mousex m2c::kmousex
#endif
#ifndef mousey
#define mousey m2c::kmousey
#endif
#ifndef _mousex
#define _mousex m2c::k_mousex
#endif
#ifndef _mousey
#define _mousey m2c::k_mousey
#endif
#ifndef lhsbutton
#define lhsbutton m2c::klhsbutton
#endif
#ifndef rhsbutton
#define rhsbutton m2c::krhsbutton
#endif
#ifndef _lhsbutton
#define _lhsbutton m2c::k_lhsbutton
#endif
#ifndef _rhsbutton
#define _rhsbutton m2c::k_rhsbutton
#endif
#ifndef xmickeys
#define xmickeys m2c::kxmickeys
#endif
#ifndef ymickeys
#define ymickeys m2c::kymickeys
#endif



#endif
