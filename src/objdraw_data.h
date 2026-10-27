#ifndef __M2C_OBJDRAW_DATA_H__
#define __M2C_OBJDRAW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& objecttype;
extern dw& dummycee05432_data_2_466;
extern dw& dummycee05432_data_4_467;
extern dw& dummycee05432_data_6_468;
extern dw& dummycee05432_data_8_469;
extern dw& dummycee05432_data_a_470;
extern dw& dummycee05432_data_c_471;
extern db& viscode;

#ifndef farobjectdist
extern dw& farobjectdist;
#endif
#ifndef objectdist3
extern dw& objectdist3;
#endif
#ifndef objectdist1
extern dw& objectdist1;
#endif
#ifndef objectdist2
extern dw& objectdist2;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_drawobjects1
#define M2C_CODE_EQUATE_drawobjects1 1
static const dd kdrawobjects1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_binsearchloop
#define M2C_CODE_EQUATE_binsearchloop 1
static const dd kbinsearchloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_searchnextbin
#define M2C_CODE_EQUATE_searchnextbin 1
static const dd ksearchnextbin = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_drawobjectloop
#define M2C_CODE_EQUATE_drawobjectloop 1
static const dd kdrawobjectloop = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_drawobjects2
#define M2C_CODE_EQUATE_drawobjects2 1
static const dd kdrawobjects2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skipbin2_1
#define M2C_CODE_EQUATE_skipbin2_1 1
static const dd kskipbin2_1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_drawobjloop2_1
#define M2C_CODE_EQUATE_drawobjloop2_1 1
static const dd kdrawobjloop2_1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_skipbin2_2
#define M2C_CODE_EQUATE_skipbin2_2 1
static const dd kskipbin2_2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_drawobjloop2_2
#define M2C_CODE_EQUATE_drawobjloop2_2 1
static const dd kdrawobjloop2_2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_drawobjects3
#define M2C_CODE_EQUATE_drawobjects3 1
static const dd kdrawobjects3 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_skipbin3_1
#define M2C_CODE_EQUATE_skipbin3_1 1
static const dd kskipbin3_1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_drawobjloop3_1
#define M2C_CODE_EQUATE_drawobjloop3_1 1
static const dd kdrawobjloop3_1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_skipbin3_2
#define M2C_CODE_EQUATE_skipbin3_2 1
static const dd kskipbin3_2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_drawobjloop3_2
#define M2C_CODE_EQUATE_drawobjloop3_2 1
static const dd kdrawobjloop3_2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_drawfarobjects
#define M2C_CODE_EQUATE_drawfarobjects 1
static const dd kdrawfarobjects = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_farbinloop
#define M2C_CODE_EQUATE_farbinloop 1
static const dd kfarbinloop = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_nextfarbin
#define M2C_CODE_EQUATE_nextfarbin 1
static const dd knextfarbin = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_drawfarobjloop
#define M2C_CODE_EQUATE_drawfarobjloop 1
static const dd kdrawfarobjloop = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort1
#define M2C_CODE_EQUATE_objectdistsort1 1
static const dd kobjectdistsort1 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_behindsort1
#define M2C_CODE_EQUATE_behindsort1 1
static const dd kbehindsort1 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_emptybin1
#define M2C_CODE_EQUATE_emptybin1 1
static const dd kemptybin1 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst1
#define M2C_CODE_EQUATE_insertfirst1 1
static const dd kinsertfirst1 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_searchbin1
#define M2C_CODE_EQUATE_searchbin1 1
static const dd ksearchbin1 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_insertobject1
#define M2C_CODE_EQUATE_insertobject1 1
static const dd kinsertobject1 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort2
#define M2C_CODE_EQUATE_objectdistsort2 1
static const dd kobjectdistsort2 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_behindsort2
#define M2C_CODE_EQUATE_behindsort2 1
static const dd kbehindsort2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_emptybin2
#define M2C_CODE_EQUATE_emptybin2 1
static const dd kemptybin2 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst2
#define M2C_CODE_EQUATE_insertfirst2 1
static const dd kinsertfirst2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_searchbin2
#define M2C_CODE_EQUATE_searchbin2 1
static const dd ksearchbin2 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_insertobject2
#define M2C_CODE_EQUATE_insertobject2 1
static const dd kinsertobject2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort3
#define M2C_CODE_EQUATE_objectdistsort3 1
static const dd kobjectdistsort3 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_behindsort3
#define M2C_CODE_EQUATE_behindsort3 1
static const dd kbehindsort3 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_emptybin3
#define M2C_CODE_EQUATE_emptybin3 1
static const dd kemptybin3 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst3
#define M2C_CODE_EQUATE_insertfirst3 1
static const dd kinsertfirst3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_searchbin3
#define M2C_CODE_EQUATE_searchbin3 1
static const dd ksearchbin3 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_insertobject3
#define M2C_CODE_EQUATE_insertobject3 1
static const dd kinsertobject3 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort4
#define M2C_CODE_EQUATE_objectdistsort4 1
static const dd kobjectdistsort4 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_behindsort6
#define M2C_CODE_EQUATE_behindsort6 1
static const dd kbehindsort6 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_emptybin6
#define M2C_CODE_EQUATE_emptybin6 1
static const dd kemptybin6 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_searchbin6
#define M2C_CODE_EQUATE_searchbin6 1
static const dd ksearchbin6 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst6
#define M2C_CODE_EQUATE_insertfirst6 1
static const dd kinsertfirst6 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_insertobject6
#define M2C_CODE_EQUATE_insertobject6 1
static const dd kinsertobject6 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_nearhillsort
#define M2C_CODE_EQUATE_nearhillsort 1
static const dd knearhillsort = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_behindsort4
#define M2C_CODE_EQUATE_behindsort4 1
static const dd kbehindsort4 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_emptybin4
#define M2C_CODE_EQUATE_emptybin4 1
static const dd kemptybin4 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst4
#define M2C_CODE_EQUATE_insertfirst4 1
static const dd kinsertfirst4 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_searchbin4
#define M2C_CODE_EQUATE_searchbin4 1
static const dd ksearchbin4 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_insertobject4
#define M2C_CODE_EQUATE_insertobject4 1
static const dd kinsertobject4 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_farhillsort
#define M2C_CODE_EQUATE_farhillsort 1
static const dd kfarhillsort = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_behindsort5
#define M2C_CODE_EQUATE_behindsort5 1
static const dd kbehindsort5 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_emptybin5
#define M2C_CODE_EQUATE_emptybin5 1
static const dd kemptybin5 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_insertfirst5
#define M2C_CODE_EQUATE_insertfirst5 1
static const dd kinsertfirst5 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_searchbin5
#define M2C_CODE_EQUATE_searchbin5 1
static const dd ksearchbin5 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_insertobject5
#define M2C_CODE_EQUATE_insertobject5 1
static const dd kinsertobject5 = 0x1048;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_objecttype
#define M2C_CODE_EQUATE_objecttype 1
static const dd kobjecttype = (m2c::near_offset_external(::objecttype));
#endif
}
#ifndef objecttype
#define objecttype m2c::kobjecttype
#endif



#endif
