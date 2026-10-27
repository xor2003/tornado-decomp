#ifndef __M2C_FEATURES_DATA_H__
#define __M2C_FEATURES_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db (& gndtextenabled)[2];
extern dw& scanvertexlist;
extern dw& dummy289c48d8_data_4_765;
extern dw& dummy289c48d8_data_6_766;
extern dw& dummy289c48d8_data_8_767;
extern db& featobj1;
extern db& viscode;
extern db& dummy289c48d8_viscode_a_833;
extern db& vertexloop1;
extern db& dummy289c48d8_viscode_c_933;
extern db& dummy289c48d8_viscode_d_941;
extern db& vertexloop2;
extern db& dummy289c48d8_viscode_f_982;
extern db& dummy289c48d8_viscode_10_990;
extern db& vertexloop8;
extern db& dummy289c48d8_viscode_12_1034;
extern db& dummy289c48d8_viscode_13_1042;
extern db& vertexloop16;
extern db& dummy289c48d8_viscode_15_1092;
extern db& dummy289c48d8_viscode_16_1100;

#ifndef featurelayer1
extern db& featurelayer1;
#endif
#ifndef ypos8
extern dw& ypos8;
#endif
#ifndef xpos2
extern dw& xpos2;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef featurelayer2
extern db& featurelayer2;
#endif
#ifndef xpos16
extern dw& xpos16;
#endif
#ifndef xpos1
extern dw& xpos1;
#endif
#ifndef zpos8
extern dw& zpos8;
#endif
#ifndef copybuffer
extern db& copybuffer;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef xpos8
extern dw& xpos8;
#endif
#ifndef riverlayer1
extern db& riverlayer1;
#endif
#ifndef col1
extern db& col1;
#endif
#ifndef sctrscalemode
extern dw& sctrscalemode;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef ypos2
extern dw& ypos2;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef zpos16
extern dw& zpos16;
#endif
#ifndef ypos1
extern dw& ypos1;
#endif
#ifndef featuretable
extern dw& featuretable;
#endif
#ifndef zpos1
extern dw& zpos1;
#endif
#ifndef zpos2
extern dw& zpos2;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef ypos16
extern dw& ypos16;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef rivertable
extern dw& rivertable;
#endif
#ifndef crtbuffer
extern dw& crtbuffer;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_drawrivers
#define M2C_CODE_EQUATE_drawrivers 1
static const dd kdrawrivers = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_exitrivers
#define M2C_CODE_EQUATE_exitrivers 1
static const dd kexitrivers = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_intofeatures
#define M2C_CODE_EQUATE_intofeatures 1
static const dd kintofeatures = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_drawfeatures1
#define M2C_CODE_EQUATE_drawfeatures1 1
static const dd kdrawfeatures1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_contfeatures
#define M2C_CODE_EQUATE_contfeatures 1
static const dd kcontfeatures = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_drawfeatures2
#define M2C_CODE_EQUATE_drawfeatures2 1
static const dd kdrawfeatures2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_inrange
#define M2C_CODE_EQUATE_inrange 1
static const dd kinrange = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_exitfeatures
#define M2C_CODE_EQUATE_exitfeatures 1
static const dd kexitfeatures = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_nextface
#define M2C_CODE_EQUATE_nextface 1
static const dd knextface = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_sortline
#define M2C_CODE_EQUATE_sortline 1
static const dd ksortline = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex1
#define M2C_CODE_EQUATE_scanvertex1 1
static const dd kscanvertex1 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop1
#define M2C_CODE_EQUATE_vertexloop1 1
static const dd kvertexloop1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex1
#define M2C_CODE_EQUATE_skipvertex1 1
static const dd kskipvertex1 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex1
#define M2C_CODE_EQUATE_exitvertex1 1
static const dd kexitvertex1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex2
#define M2C_CODE_EQUATE_scanvertex2 1
static const dd kscanvertex2 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop2
#define M2C_CODE_EQUATE_vertexloop2 1
static const dd kvertexloop2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex2
#define M2C_CODE_EQUATE_skipvertex2 1
static const dd kskipvertex2 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex2
#define M2C_CODE_EQUATE_exitvertex2 1
static const dd kexitvertex2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex8
#define M2C_CODE_EQUATE_scanvertex8 1
static const dd kscanvertex8 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop8
#define M2C_CODE_EQUATE_vertexloop8 1
static const dd kvertexloop8 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex8
#define M2C_CODE_EQUATE_skipvertex8 1
static const dd kskipvertex8 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex8
#define M2C_CODE_EQUATE_exitvertex8 1
static const dd kexitvertex8 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_scanvertex16
#define M2C_CODE_EQUATE_scanvertex16 1
static const dd kscanvertex16 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_vertexloop16
#define M2C_CODE_EQUATE_vertexloop16 1
static const dd kvertexloop16 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_skipvertex16
#define M2C_CODE_EQUATE_skipvertex16 1
static const dd kskipvertex16 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_exitvertex16
#define M2C_CODE_EQUATE_exitvertex16 1
static const dd kexitvertex16 = 0x1028;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_gndtextenabled
#define M2C_CODE_EQUATE_gndtextenabled 1
static const dd kgndtextenabled = (m2c::near_offset_external(::gndtextenabled));
#endif
#ifndef M2C_CODE_EQUATE_scanvertexlist
#define M2C_CODE_EQUATE_scanvertexlist 1
static const dd kscanvertexlist = (m2c::near_offset_external(::scanvertexlist));
#endif
}
#ifndef gndtextenabled
#define gndtextenabled m2c::kgndtextenabled
#endif
#ifndef scanvertexlist
#define scanvertexlist m2c::kscanvertexlist
#endif



#endif
