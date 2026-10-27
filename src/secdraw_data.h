#ifndef __M2C_SECDRAW_DATA_H__
#define __M2C_SECDRAW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& secdata1;
extern db& viscode;
extern db& dummy1772b8b0_viscode_0_754;
extern db& dummy1772b8b0_viscode_1_762;
extern db& dummy1772b8b0_viscode_2_767;
extern db& dummy1772b8b0_viscode_3_774;
extern db& contgndloop1;
extern db& dummy1772b8b0_viscode_5_859;
extern db& dummy1772b8b0_viscode_6_864;
extern db& dummy1772b8b0_viscode_7_871;

#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef objectbufend
extern dw& objectbufend;
#endif
#ifndef zsx
extern dw& zsx;
#endif
#ifndef xsy
extern dw& xsy;
#endif
#ifndef objectbufptr
extern dw& objectbufptr;
#endif
#ifndef ysy
extern dw& ysy;
#endif
#ifndef flatobject
extern dw& flatobject;
#endif
#ifndef xgrid1
extern dw& xgrid1;
#endif
#ifndef ygrid1
extern dw& ygrid1;
#endif
#ifndef ze01
extern dw& ze01;
#endif
#ifndef mapindex
extern dw& mapindex;
#endif
#ifndef ye01
extern dw& ye01;
#endif
#ifndef zsy
extern dw& zsy;
#endif
#ifndef sectorlayer1
extern db& sectorlayer1;
#endif
#ifndef ysx
extern dw& ysx;
#endif
#ifndef xsx
extern dw& xsx;
#endif
#ifndef xe01
extern dw& xe01;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_exitsector
#define M2C_CODE_EQUATE_exitsector 1
static const dd kexitsector = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_drawsector
#define M2C_CODE_EQUATE_drawsector 1
static const dd kdrawsector = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_flatobjectloop
#define M2C_CODE_EQUATE_flatobjectloop 1
static const dd kflatobjectloop = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_contflatloop
#define M2C_CODE_EQUATE_contflatloop 1
static const dd kcontflatloop = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_exitflatloop
#define M2C_CODE_EQUATE_exitflatloop 1
static const dd kexitflatloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_abortflatobject
#define M2C_CODE_EQUATE_abortflatobject 1
static const dd kabortflatobject = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_gndobjectloop
#define M2C_CODE_EQUATE_gndobjectloop 1
static const dd kgndobjectloop = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_contgndloop1
#define M2C_CODE_EQUATE_contgndloop1 1
static const dd kcontgndloop1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_exitgndloop
#define M2C_CODE_EQUATE_exitgndloop 1
static const dd kexitgndloop = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_contgndloop2
#define M2C_CODE_EQUATE_contgndloop2 1
static const dd kcontgndloop2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_abortgndobject
#define M2C_CODE_EQUATE_abortgndobject 1
static const dd kabortgndobject = 0x1011;
#endif
}



#endif
