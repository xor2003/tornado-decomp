/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TAN_STUB_STUBS_H__
#define __M2C_TAN_STUB_STUBS_H__

#include "asm.h"



	static const int tan_lineadd = 0;

	#define M2C_MODULE_TAN_STUB 1
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
#ifndef M2C_CODE_EQUATE_tan_vmode
#define M2C_CODE_EQUATE_tan_vmode 1
static const dd ktan_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_tan_dload
#define M2C_CODE_EQUATE_tan_dload 1
static const dd ktan_dload = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_tan_setpx
#define M2C_CODE_EQUATE_tan_setpx 1
static const dd ktan_setpx = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_tan_line
#define M2C_CODE_EQUATE_tan_line 1
static const dd ktan_line = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_tan_vline
#define M2C_CODE_EQUATE_tan_vline 1
static const dd ktan_vline = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_tan_hline
#define M2C_CODE_EQUATE_tan_hline 1
static const dd ktan_hline = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_tan_pfill
#define M2C_CODE_EQUATE_tan_pfill 1
static const dd ktan_pfill = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_tan_mfill
#define M2C_CODE_EQUATE_tan_mfill 1
static const dd ktan_mfill = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_tan_sfill
#define M2C_CODE_EQUATE_tan_sfill 1
static const dd ktan_sfill = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_tan_prtc1
#define M2C_CODE_EQUATE_tan_prtc1 1
static const dd ktan_prtc1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_tan_prtc2
#define M2C_CODE_EQUATE_tan_prtc2 1
static const dd ktan_prtc2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_tan_prtc3
#define M2C_CODE_EQUATE_tan_prtc3 1
static const dd ktan_prtc3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_tan_ssprite
#define M2C_CODE_EQUATE_tan_ssprite 1
static const dd ktan_ssprite = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_tan_msprite
#define M2C_CODE_EQUATE_tan_msprite 1
static const dd ktan_msprite = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_tan_bsprite
#define M2C_CODE_EQUATE_tan_bsprite 1
static const dd ktan_bsprite = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_tan_qsprite
#define M2C_CODE_EQUATE_tan_qsprite 1
static const dd ktan_qsprite = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_tan_initss
#define M2C_CODE_EQUATE_tan_initss 1
static const dd ktan_initss = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_tan_initms
#define M2C_CODE_EQUATE_tan_initms 1
static const dd ktan_initms = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_tan_bfill
#define M2C_CODE_EQUATE_tan_bfill 1
static const dd ktan_bfill = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_tan_savemouse
#define M2C_CODE_EQUATE_tan_savemouse 1
static const dd ktan_savemouse = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_tan_loadmouse
#define M2C_CODE_EQUATE_tan_loadmouse 1
static const dd ktan_loadmouse = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_tan_savescreen
#define M2C_CODE_EQUATE_tan_savescreen 1
static const dd ktan_savescreen = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_tan_loadscreen
#define M2C_CODE_EQUATE_tan_loadscreen 1
static const dd ktan_loadscreen = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_tan_uncomppic
#define M2C_CODE_EQUATE_tan_uncomppic 1
static const dd ktan_uncomppic = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_tan_hfill
#define M2C_CODE_EQUATE_tan_hfill 1
static const dd ktan_hfill = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_tan_calcaddr
#define M2C_CODE_EQUATE_tan_calcaddr 1
static const dd ktan_calcaddr = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_seperatedata
#define M2C_CODE_EQUATE_seperatedata 1
static const dd kseperatedata = 0x101e;
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
