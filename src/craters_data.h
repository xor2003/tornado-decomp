#ifndef __M2C_CRATERS_DATA_H__
#define __M2C_CRATERS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& nextcraterptr;
extern db& craternum;
extern db& dummydd2f1063_data_3_408;
extern db& dummydd2f1063_data_4_409;
extern db& dummydd2f1063_data_5_410;
extern db& dummydd2f1063_data_6_411;
extern mobile& tmp_mob;
extern viewpoint& tmp_view;
extern db& craterdata;
extern crater (& __m2c_structrow_dd2f1063_421)[128];
extern crater& craterbuffer;
extern crater& craterbufend;
extern db& viscode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_makecrater
#define M2C_CODE_EQUATE_makecrater 1
static const dd kmakecrater = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_scancraters
#define M2C_CODE_EQUATE_scancraters 1
static const dd kscancraters = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_craterloop
#define M2C_CODE_EQUATE_craterloop 1
static const dd kcraterloop = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_donecraters
#define M2C_CODE_EQUATE_donecraters 1
static const dd kdonecraters = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_nextcraterptr
#define M2C_CODE_EQUATE_nextcraterptr 1
static const dd knextcraterptr = (m2c::near_offset_external(::nextcraterptr));
#endif
#ifndef M2C_CODE_EQUATE_craternum
#define M2C_CODE_EQUATE_craternum 1
static const dd kcraternum = (m2c::near_offset_external(::craternum));
#endif
#ifndef M2C_CODE_EQUATE_tmp_mob
#define M2C_CODE_EQUATE_tmp_mob 1
static const dd ktmp_mob = (m2c::near_offset_external(::tmp_mob));
#endif
#ifndef M2C_CODE_EQUATE_tmp_view
#define M2C_CODE_EQUATE_tmp_view 1
static const dd ktmp_view = (m2c::near_offset_external(::tmp_view));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_dd2f1063_421
#define M2C_CODE_EQUATE___m2c_structrow_dd2f1063_421 1
static const dd k__m2c_structrow_dd2f1063_421 = (m2c::near_offset_external(::__m2c_structrow_dd2f1063_421));
#endif
}
#ifndef nextcraterptr
#define nextcraterptr m2c::knextcraterptr
#endif
#ifndef craternum
#define craternum m2c::kcraternum
#endif
#ifndef tmp_mob
#define tmp_mob m2c::ktmp_mob
#endif
#ifndef tmp_view
#define tmp_view m2c::ktmp_view
#endif
#ifndef __m2c_structrow_dd2f1063_421
#define __m2c_structrow_dd2f1063_421 m2c::k__m2c_structrow_dd2f1063_421
#endif



#endif
