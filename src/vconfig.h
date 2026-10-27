/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VCONFIG_STUBS_H__
#define __M2C_VCONFIG_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_VCONFIG 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
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
#ifndef M2C_CODE_EQUATE_configurevisual
#define M2C_CODE_EQUATE_configurevisual 1
static const dd kconfigurevisual = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
__attribute__((weak)) bool configurevisual(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
extern bool initpalettes(m2c::_offsets, struct m2c::_STATE*);
extern bool randomizeclouds(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
