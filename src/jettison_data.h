#ifndef __M2C_JETTISON_DATA_H__
#define __M2C_JETTISON_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& modcode;

#ifndef cannons
extern dw& cannons;
#endif
#ifndef packages
extern package& packages;
#endif
#ifndef fuelwtfine
extern dw& fuelwtfine;
#endif
#ifndef flarecntr
extern dw& flarecntr;
#endif
#ifndef airarmmode
extern dw& airarmmode;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef packageptr
extern dw& packageptr;
#endif
#ifndef ecmfitted
extern db& ecmfitted;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef extstores
extern dw& extstores;
#endif
#ifndef jettison
extern db& jettison;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef chaffcntr
extern dw& chaffcntr;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_jetexttanks
#define M2C_CODE_EQUATE_jetexttanks 1
static const dd kjetexttanks = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_jettison1
#define M2C_CODE_EQUATE_jettison1 1
static const dd kjettison1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_jetextstores
#define M2C_CODE_EQUATE_jetextstores 1
static const dd kjetextstores = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_jettison2
#define M2C_CODE_EQUATE_jettison2 1
static const dd kjettison2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_jetall
#define M2C_CODE_EQUATE_jetall 1
static const dd kjetall = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_armok
#define M2C_CODE_EQUATE_armok 1
static const dd karmok = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1018;
#endif
}



#endif
