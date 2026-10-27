/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MS_VGA_1_STUBS_H__
#define __M2C_MS_VGA_1_STUBS_H__

#include "asm.h"



	
constexpr int M2C_MODULE_MS_VGA_1 = 1;
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& msprdata;
extern char (& mspriteid)[16];
extern dw& dummy433c2b03_msprdata_10_80;
extern word& mspritelist;

	
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
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
