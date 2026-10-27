/* THIS IS GENERATED FILE */

        
#ifndef __M2C_RANDOM_M2C_STUBS_H__
#define __M2C_RANDOM_M2C_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_RANDOM 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& seedlo;
extern dw& seedhi;
extern db (& rndindex)[2];
extern db (& rndtable)[256];
extern db& libcode;

	
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
#ifndef M2C_CODE_EQUATE_randx
#define M2C_CODE_EQUATE_randx 1
static const dd krandx = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_zerobit1
#define M2C_CODE_EQUATE_zerobit1 1
static const dd kzerobit1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_zerobit2
#define M2C_CODE_EQUATE_zerobit2 1
static const dd kzerobit2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_zerobit3
#define M2C_CODE_EQUATE_zerobit3 1
static const dd kzerobit3 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_zerobit4
#define M2C_CODE_EQUATE_zerobit4 1
static const dd kzerobit4 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_zerobit5
#define M2C_CODE_EQUATE_zerobit5 1
static const dd kzerobit5 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_zerobit6
#define M2C_CODE_EQUATE_zerobit6 1
static const dd kzerobit6 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_zerobit7
#define M2C_CODE_EQUATE_zerobit7 1
static const dd kzerobit7 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_zerobit8
#define M2C_CODE_EQUATE_zerobit8 1
static const dd kzerobit8 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_reseed
#define M2C_CODE_EQUATE_reseed 1
static const dd kreseed = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_seedok
#define M2C_CODE_EQUATE_seedok 1
static const dd kseedok = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_fastrandx
#define M2C_CODE_EQUATE_fastrandx 1
static const dd kfastrandx = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1013;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool fastrandx(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool randx(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool reseed(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ticker
extern dw& ticker;
#endif

#endif
