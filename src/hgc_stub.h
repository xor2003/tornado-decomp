/* THIS IS GENERATED FILE */

        
#ifndef __M2C_HGC_STUB_STUBS_H__
#define __M2C_HGC_STUB_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_HGC_STUB 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& gcode;

	
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
#ifndef M2C_CODE_EQUATE_gcode_0_proc
#define M2C_CODE_EQUATE_gcode_0_proc 1
static const dd kgcode_0_proc = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_hgc_vmode
#define M2C_CODE_EQUATE_hgc_vmode 1
static const dd khgc_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_hgc_dload
#define M2C_CODE_EQUATE_hgc_dload 1
static const dd khgc_dload = 0x1005;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool gcode_0_proc(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
