/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TEM_STUB_STUBS_H__
#define __M2C_TEM_STUB_STUBS_H__

#include "asm.h"



	static const int tem_lineadd = 0;

	#define M2C_MODULE_TEM_STUB 1
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
#ifndef M2C_CODE_EQUATE_tem_vmode
#define M2C_CODE_EQUATE_tem_vmode 1
static const dd ktem_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_tem_dload
#define M2C_CODE_EQUATE_tem_dload 1
static const dd ktem_dload = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_setupegatable
#define M2C_CODE_EQUATE_setupegatable 1
static const dd ksetupegatable = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_convtantoega
#define M2C_CODE_EQUATE_convtantoega 1
static const dd kconvtantoega = 0x1007;
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
