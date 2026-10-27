#ifndef __M2C_VISDEBUG_DATA_H__
#define __M2C_VISDEBUG_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& objbufspace;
extern dw& surfacetype;
extern db& gndobjecthit;
extern db& statobjecthit;
extern db& treeobjecthit;
extern db& viscode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_objbufspace
#define M2C_CODE_EQUATE_objbufspace 1
static const dd kobjbufspace = (m2c::near_offset_external(::objbufspace));
#endif
#ifndef M2C_CODE_EQUATE_surfacetype
#define M2C_CODE_EQUATE_surfacetype 1
static const dd ksurfacetype = (m2c::near_offset_external(::surfacetype));
#endif
#ifndef M2C_CODE_EQUATE_gndobjecthit
#define M2C_CODE_EQUATE_gndobjecthit 1
static const dd kgndobjecthit = (m2c::near_offset_external(::gndobjecthit));
#endif
#ifndef M2C_CODE_EQUATE_statobjecthit
#define M2C_CODE_EQUATE_statobjecthit 1
static const dd kstatobjecthit = (m2c::near_offset_external(::statobjecthit));
#endif
#ifndef M2C_CODE_EQUATE_treeobjecthit
#define M2C_CODE_EQUATE_treeobjecthit 1
static const dd ktreeobjecthit = (m2c::near_offset_external(::treeobjecthit));
#endif
}
#ifndef objbufspace
#define objbufspace m2c::kobjbufspace
#endif
#ifndef surfacetype
#define surfacetype m2c::ksurfacetype
#endif
#ifndef gndobjecthit
#define gndobjecthit m2c::kgndobjecthit
#endif
#ifndef statobjecthit
#define statobjecthit m2c::kstatobjecthit
#endif
#ifndef treeobjecthit
#define treeobjecthit m2c::ktreeobjecthit
#endif



#endif
