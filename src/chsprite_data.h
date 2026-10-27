#ifndef __M2C_CHSPRITE_DATA_H__
#define __M2C_CHSPRITE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& cellxmin;
extern dw& cellxmax;
extern dw& cellymin;
extern dw& cellymax;
extern db (& col)[2];
extern db& libcode;

#ifndef standard_3by5
extern db& standard_3by5;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_charsprite
#define M2C_CODE_EQUATE_charsprite 1
static const dd kcharsprite = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_yloop
#define M2C_CODE_EQUATE_yloop 1
static const dd kyloop = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_nexty
#define M2C_CODE_EQUATE_nexty 1
static const dd knexty = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_cellsprite
#define M2C_CODE_EQUATE_cellsprite 1
static const dd kcellsprite = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_cellyloop
#define M2C_CODE_EQUATE_cellyloop 1
static const dd kcellyloop = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_cellnexty
#define M2C_CODE_EQUATE_cellnexty 1
static const dd kcellnexty = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1019;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_cellxmin
#define M2C_CODE_EQUATE_cellxmin 1
static const dd kcellxmin = (m2c::near_offset_external(::cellxmin));
#endif
#ifndef M2C_CODE_EQUATE_cellxmax
#define M2C_CODE_EQUATE_cellxmax 1
static const dd kcellxmax = (m2c::near_offset_external(::cellxmax));
#endif
#ifndef M2C_CODE_EQUATE_cellymin
#define M2C_CODE_EQUATE_cellymin 1
static const dd kcellymin = (m2c::near_offset_external(::cellymin));
#endif
#ifndef M2C_CODE_EQUATE_cellymax
#define M2C_CODE_EQUATE_cellymax 1
static const dd kcellymax = (m2c::near_offset_external(::cellymax));
#endif
#ifndef M2C_CODE_EQUATE_col
#define M2C_CODE_EQUATE_col 1
static const dd kcol = (m2c::near_offset_external(::col));
#endif
}
#ifndef cellxmin
#define cellxmin m2c::kcellxmin
#endif
#ifndef cellxmax
#define cellxmax m2c::kcellxmax
#endif
#ifndef cellymin
#define cellymin m2c::kcellymin
#endif
#ifndef cellymax
#define cellymax m2c::kcellymax
#endif
#ifndef col
#define col m2c::kcol
#endif



#endif
