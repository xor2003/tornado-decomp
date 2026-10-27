#ifndef __M2C_MOBSORT_DATA_H__
#define __M2C_MOBSORT_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& viscode;

#ifndef mobsortptr
extern dw& mobsortptr;
#endif
#ifndef mobsortbins
extern dw& mobsortbins;
#endif
#ifndef nummobiles
extern dw& nummobiles;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_createmobile
#define M2C_CODE_EQUATE_createmobile 1
static const dd kcreatemobile = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_nomatchfound
#define M2C_CODE_EQUATE_nomatchfound 1
static const dd knomatchfound = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_linkmobile
#define M2C_CODE_EQUATE_linkmobile 1
static const dd klinkmobile = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_createerror
#define M2C_CODE_EQUATE_createerror 1
static const dd kcreateerror = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_deletemobile
#define M2C_CODE_EQUATE_deletemobile 1
static const dd kdeletemobile = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_deleteerror
#define M2C_CODE_EQUATE_deleteerror 1
static const dd kdeleteerror = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_searchbin
#define M2C_CODE_EQUATE_searchbin 1
static const dd ksearchbin = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_deleteok
#define M2C_CODE_EQUATE_deleteok 1
static const dd kdeleteok = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_unlinkmobile
#define M2C_CODE_EQUATE_unlinkmobile 1
static const dd kunlinkmobile = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_updatemobile
#define M2C_CODE_EQUATE_updatemobile 1
static const dd kupdatemobile = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy1 1
static const dd k__m2c_macrolocal_1_mvxy1 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy2 1
static const dd k__m2c_macrolocal_1_mvxy2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy3 1
static const dd k__m2c_macrolocal_1_mvxy3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_1_mvxy4 1
static const dd k__m2c_macrolocal_1_mvxy4 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_updateok
#define M2C_CODE_EQUATE_updateok 1
static const dd kupdateok = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_updateerror
#define M2C_CODE_EQUATE_updateerror 1
static const dd kupdateerror = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_locatemobiles
#define M2C_CODE_EQUATE_locatemobiles 1
static const dd klocatemobiles = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_nomobslocated
#define M2C_CODE_EQUATE_nomobslocated 1
static const dd knomobslocated = 0x101c;
#endif
}



#endif
