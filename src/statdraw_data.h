#ifndef __M2C_STATDRAW_DATA_H__
#define __M2C_STATDRAW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern mobile& tmp_mob;
extern viewpoint& tmp_view;
extern db& msecdata1;
extern db& viscode;

#ifndef mobilelayer1
extern db& mobilelayer1;
#endif
#ifndef mobsectortable
extern dw& mobsectortable;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_nullsector
#define M2C_CODE_EQUATE_nullsector 1
static const dd knullsector = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_scanloop
#define M2C_CODE_EQUATE_scanloop 1
static const dd kscanloop = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_exitsector
#define M2C_CODE_EQUATE_exitsector 1
static const dd kexitsector = 0x1008;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_tmp_mob
#define M2C_CODE_EQUATE_tmp_mob 1
static const dd ktmp_mob = (m2c::near_offset_external(::tmp_mob));
#endif
#ifndef M2C_CODE_EQUATE_tmp_view
#define M2C_CODE_EQUATE_tmp_view 1
static const dd ktmp_view = (m2c::near_offset_external(::tmp_view));
#endif
}
#ifndef tmp_mob
#define tmp_mob m2c::ktmp_mob
#endif
#ifndef tmp_view
#define tmp_view m2c::ktmp_view
#endif



#endif
