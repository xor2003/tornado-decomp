#ifndef __M2C_MODELLIB_DATA_H__
#define __M2C_MODELLIB_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& initctrlswitch;
extern dw& dummy70e08c8c_data_2_1705;
extern dw& dummy70e08c8c_data_4_1706;
extern dw& dummy70e08c8c_data_6_1707;
extern db& modcode;

#ifndef rudkbdwash
extern dw& rudkbdwash;
#endif
#ifndef ailkbdwash
extern dw& ailkbdwash;
#endif
#ifndef sqrtrhotable
extern dw& sqrtrhotable;
#endif
#ifndef joyb_justfired1
extern db& joyb_justfired1;
#endif
#ifndef joyb_flag
extern db& joyb_flag;
#endif
#ifndef joya_justfired1
extern db& joya_justfired1;
#endif
#ifndef joya_justfired2
extern db& joya_justfired2;
#endif
#ifndef controldevice
extern dw& controldevice;
#endif
#ifndef joyb_justfired2
extern db& joyb_justfired2;
#endif
#ifndef throttlefine
extern dw& throttlefine;
#endif
#ifndef joyb_fire2
extern db& joyb_fire2;
#endif
#ifndef reheatfine
extern dw& reheatfine;
#endif
#ifndef joya_fire2
extern db& joya_fire2;
#endif
#ifndef joya_flag
extern db& joya_flag;
#endif
#ifndef joya_fire1
extern db& joya_fire1;
#endif
#ifndef elekbdwash
extern dw& elekbdwash;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef joyb_fire1
extern db& joyb_fire1;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initctrldevice
#define M2C_CODE_EQUATE_initctrldevice 1
static const dd kinitctrldevice = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_initkbd1
#define M2C_CODE_EQUATE_initkbd1 1
static const dd kinitkbd1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_initkbd2
#define M2C_CODE_EQUATE_initkbd2 1
static const dd kinitkbd2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_initjoy1
#define M2C_CODE_EQUATE_initjoy1 1
static const dd kinitjoy1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_initjoy2
#define M2C_CODE_EQUATE_initjoy2 1
static const dd kinitjoy2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_limitpfine
#define M2C_CODE_EQUATE_limitpfine 1
static const dd klimitpfine = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_limitpitch
#define M2C_CODE_EQUATE_limitpitch 1
static const dd klimitpitch = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_moveviewpoint
#define M2C_CODE_EQUATE_moveviewpoint 1
static const dd kmoveviewpoint = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_calcsinefine
#define M2C_CODE_EQUATE_calcsinefine 1
static const dd kcalcsinefine = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_calcvias
#define M2C_CODE_EQUATE_calcvias 1
static const dd kcalcvias = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_calcvkts
#define M2C_CODE_EQUATE_calcvkts 1
static const dd kcalcvkts = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_initctrlswitch
#define M2C_CODE_EQUATE_initctrlswitch 1
static const dd kinitctrlswitch = (m2c::near_offset_external(::initctrlswitch));
#endif
}
#ifndef initctrlswitch
#define initctrlswitch m2c::kinitctrlswitch
#endif



#endif
