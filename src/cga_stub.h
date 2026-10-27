/* THIS IS GENERATED FILE */

        
#ifndef __M2C_CGA_STUB_STUBS_H__
#define __M2C_CGA_STUB_STUBS_H__

#include "asm.h"



	static const int cga_lineadd = 0;

	#define M2C_MODULE_CGA_STUB 1
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
#ifndef M2C_CODE_EQUATE_cga_vmode
#define M2C_CODE_EQUATE_cga_vmode 1
static const dd kcga_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_cga_dload
#define M2C_CODE_EQUATE_cga_dload 1
static const dd kcga_dload = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_cga_setpx
#define M2C_CODE_EQUATE_cga_setpx 1
static const dd kcga_setpx = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_cga_line
#define M2C_CODE_EQUATE_cga_line 1
static const dd kcga_line = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_cga_vline
#define M2C_CODE_EQUATE_cga_vline 1
static const dd kcga_vline = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_cga_hline
#define M2C_CODE_EQUATE_cga_hline 1
static const dd kcga_hline = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_cga_pfill
#define M2C_CODE_EQUATE_cga_pfill 1
static const dd kcga_pfill = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_cga_mfill
#define M2C_CODE_EQUATE_cga_mfill 1
static const dd kcga_mfill = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_cga_sfill
#define M2C_CODE_EQUATE_cga_sfill 1
static const dd kcga_sfill = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_cga_prtc1
#define M2C_CODE_EQUATE_cga_prtc1 1
static const dd kcga_prtc1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_cga_prtc2
#define M2C_CODE_EQUATE_cga_prtc2 1
static const dd kcga_prtc2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_cga_prtc3
#define M2C_CODE_EQUATE_cga_prtc3 1
static const dd kcga_prtc3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_cga_ssprite
#define M2C_CODE_EQUATE_cga_ssprite 1
static const dd kcga_ssprite = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_cga_msprite
#define M2C_CODE_EQUATE_cga_msprite 1
static const dd kcga_msprite = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_cga_bsprite
#define M2C_CODE_EQUATE_cga_bsprite 1
static const dd kcga_bsprite = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_cga_qsprite
#define M2C_CODE_EQUATE_cga_qsprite 1
static const dd kcga_qsprite = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_cga_initss
#define M2C_CODE_EQUATE_cga_initss 1
static const dd kcga_initss = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_cga_initms
#define M2C_CODE_EQUATE_cga_initms 1
static const dd kcga_initms = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_cga_bfill
#define M2C_CODE_EQUATE_cga_bfill 1
static const dd kcga_bfill = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_cga_savemouse
#define M2C_CODE_EQUATE_cga_savemouse 1
static const dd kcga_savemouse = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_cga_loadmouse
#define M2C_CODE_EQUATE_cga_loadmouse 1
static const dd kcga_loadmouse = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_cga_savescreen
#define M2C_CODE_EQUATE_cga_savescreen 1
static const dd kcga_savescreen = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_cga_loadscreen
#define M2C_CODE_EQUATE_cga_loadscreen 1
static const dd kcga_loadscreen = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_cga_uncomppic
#define M2C_CODE_EQUATE_cga_uncomppic 1
static const dd kcga_uncomppic = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_cga_hfill
#define M2C_CODE_EQUATE_cga_hfill 1
static const dd kcga_hfill = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_cga_calcaddr
#define M2C_CODE_EQUATE_cga_calcaddr 1
static const dd kcga_calcaddr = 0x101d;
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
