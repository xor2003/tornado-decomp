#ifndef __M2C_GLOC_DATA_H__
#define __M2C_GLOC_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& blktimer;
extern dw& redtimer;
extern dw& gloctimer;
extern dw& oxytimer;
extern db (& curtains)[2];
extern dw& curtainstimer;
extern db& gencode;

#ifndef fadegcol2
extern db& fadegcol2;
#endif
#ifndef fadelevel2
extern db& fadelevel2;
#endif
#ifndef fadecount2
extern dw& fadecount2;
#endif
#ifndef ssf_oxygen
extern db& ssf_oxygen;
#endif
#ifndef eleposn
extern dw& eleposn;
#endif
#ifndef zfthi
extern dw& zfthi;
#endif
#ifndef infinitegforce
extern db& infinitegforce;
#endif
#ifndef gforce
extern dw& gforce;
#endif
#ifndef fadestart2
extern dw& fadestart2;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef zftlo
extern dw& zftlo;
#endif
#ifndef fadercol2
extern db& fadercol2;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef disableinput
extern db& disableinput;
#endif
#ifndef fadebcol2
extern db& fadebcol2;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_contcurtains
#define M2C_CODE_EQUATE_contcurtains 1
static const dd kcontcurtains = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_contgloc
#define M2C_CODE_EQUATE_contgloc 1
static const dd kcontgloc = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_contblackout
#define M2C_CODE_EQUATE_contblackout 1
static const dd kcontblackout = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_contredout
#define M2C_CODE_EQUATE_contredout 1
static const dd kcontredout = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_conthypoxia
#define M2C_CODE_EQUATE_conthypoxia 1
static const dd kconthypoxia = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_blkok
#define M2C_CODE_EQUATE_blkok 1
static const dd kblkok = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_redok
#define M2C_CODE_EQUATE_redok 1
static const dd kredok = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_exitgloc
#define M2C_CODE_EQUATE_exitgloc 1
static const dd kexitgloc = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_contoxyfail
#define M2C_CODE_EQUATE_contoxyfail 1
static const dd kcontoxyfail = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x101b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_blktimer
#define M2C_CODE_EQUATE_blktimer 1
static const dd kblktimer = (m2c::near_offset_external(::blktimer));
#endif
#ifndef M2C_CODE_EQUATE_redtimer
#define M2C_CODE_EQUATE_redtimer 1
static const dd kredtimer = (m2c::near_offset_external(::redtimer));
#endif
#ifndef M2C_CODE_EQUATE_gloctimer
#define M2C_CODE_EQUATE_gloctimer 1
static const dd kgloctimer = (m2c::near_offset_external(::gloctimer));
#endif
#ifndef M2C_CODE_EQUATE_oxytimer
#define M2C_CODE_EQUATE_oxytimer 1
static const dd koxytimer = (m2c::near_offset_external(::oxytimer));
#endif
#ifndef M2C_CODE_EQUATE_curtains
#define M2C_CODE_EQUATE_curtains 1
static const dd kcurtains = (m2c::near_offset_external(::curtains));
#endif
#ifndef M2C_CODE_EQUATE_curtainstimer
#define M2C_CODE_EQUATE_curtainstimer 1
static const dd kcurtainstimer = (m2c::near_offset_external(::curtainstimer));
#endif
}
#ifndef blktimer
#define blktimer m2c::kblktimer
#endif
#ifndef redtimer
#define redtimer m2c::kredtimer
#endif
#ifndef gloctimer
#define gloctimer m2c::kgloctimer
#endif
#ifndef oxytimer
#define oxytimer m2c::koxytimer
#endif
#ifndef curtains
#define curtains m2c::kcurtains
#endif
#ifndef curtainstimer
#define curtainstimer m2c::kcurtainstimer
#endif



#endif
