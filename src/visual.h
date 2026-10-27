/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VISUAL_STUBS_H__
#define __M2C_VISUAL_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_VISUAL 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& sortclouds;
extern dw& dummy67ecaf93_data_2_53;
extern dw& dummy67ecaf93_data_4_54;
extern db& viscode;

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_visual
#define M2C_CODE_EQUATE_visual 1
static const dd kvisual = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_belowclouds
#define M2C_CODE_EQUATE_belowclouds 1
static const dd kbelowclouds = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_inclouds
#define M2C_CODE_EQUATE_inclouds 1
static const dd kinclouds = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_aboveclouds
#define M2C_CODE_EQUATE_aboveclouds 1
static const dd kaboveclouds = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_mobilevisual
#define M2C_CODE_EQUATE_mobilevisual 1
static const dd kmobilevisual = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x100d;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mobilevisual(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool visual(m2c::_offsets, struct m2c::_STATE*);
extern bool calcafactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangles(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjgrid(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsctrgrid(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsctroffsets(m2c::_offsets, struct m2c::_STATE*);
extern bool drawclouds1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawclouds2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawfarobjects(m2c::_offsets, struct m2c::_STATE*);
extern bool drawhorizon(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobile(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects3(m2c::_offsets, struct m2c::_STATE*);
extern bool drawstars(m2c::_offsets, struct m2c::_STATE*);
extern bool initclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool initvisual(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateview(m2c::_offsets, struct m2c::_STATE*);
extern bool scancraters(m2c::_offsets, struct m2c::_STATE*);
extern bool scansectors(m2c::_offsets, struct m2c::_STATE*);
extern bool scansmoke(m2c::_offsets, struct m2c::_STATE*);
extern bool uservisual(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef cloudmode
extern dw& cloudmode;
#endif
#ifndef overcast
extern db& overcast;
#endif

#endif
