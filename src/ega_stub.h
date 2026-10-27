/* THIS IS GENERATED FILE */

        
#ifndef __M2C_EGA_STUB_STUBS_H__
#define __M2C_EGA_STUB_STUBS_H__

#include "asm.h"



	static const int ega_lineadd = 0;

	#define M2C_MODULE_EGA_STUB 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern word& egafreespace;
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
#ifndef M2C_CODE_EQUATE_ega_vmode
#define M2C_CODE_EQUATE_ega_vmode 1
static const dd kega_vmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_ega_dload
#define M2C_CODE_EQUATE_ega_dload 1
static const dd kega_dload = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_ega_setpx
#define M2C_CODE_EQUATE_ega_setpx 1
static const dd kega_setpx = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_ega_line
#define M2C_CODE_EQUATE_ega_line 1
static const dd kega_line = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_ega_vline
#define M2C_CODE_EQUATE_ega_vline 1
static const dd kega_vline = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_ega_hline
#define M2C_CODE_EQUATE_ega_hline 1
static const dd kega_hline = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_ega_pfill
#define M2C_CODE_EQUATE_ega_pfill 1
static const dd kega_pfill = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_ega_mfill
#define M2C_CODE_EQUATE_ega_mfill 1
static const dd kega_mfill = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_ega_sfill
#define M2C_CODE_EQUATE_ega_sfill 1
static const dd kega_sfill = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_ega_prtc1
#define M2C_CODE_EQUATE_ega_prtc1 1
static const dd kega_prtc1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_ega_prtc2
#define M2C_CODE_EQUATE_ega_prtc2 1
static const dd kega_prtc2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_ega_prtc3
#define M2C_CODE_EQUATE_ega_prtc3 1
static const dd kega_prtc3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_ega_ssprite
#define M2C_CODE_EQUATE_ega_ssprite 1
static const dd kega_ssprite = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_ega_msprite
#define M2C_CODE_EQUATE_ega_msprite 1
static const dd kega_msprite = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_ega_bsprite
#define M2C_CODE_EQUATE_ega_bsprite 1
static const dd kega_bsprite = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_ega_qsprite
#define M2C_CODE_EQUATE_ega_qsprite 1
static const dd kega_qsprite = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_ega_initss
#define M2C_CODE_EQUATE_ega_initss 1
static const dd kega_initss = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_ega_initms
#define M2C_CODE_EQUATE_ega_initms 1
static const dd kega_initms = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_ega_initqs
#define M2C_CODE_EQUATE_ega_initqs 1
static const dd kega_initqs = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_ega_bfill
#define M2C_CODE_EQUATE_ega_bfill 1
static const dd kega_bfill = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_ega_savemouse
#define M2C_CODE_EQUATE_ega_savemouse 1
static const dd kega_savemouse = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_ega_loadmouse
#define M2C_CODE_EQUATE_ega_loadmouse 1
static const dd kega_loadmouse = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_ega_savescreen
#define M2C_CODE_EQUATE_ega_savescreen 1
static const dd kega_savescreen = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_ega_loadscreen
#define M2C_CODE_EQUATE_ega_loadscreen 1
static const dd kega_loadscreen = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_ega_uncomppic
#define M2C_CODE_EQUATE_ega_uncomppic 1
static const dd kega_uncomppic = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_ega_hfill
#define M2C_CODE_EQUATE_ega_hfill 1
static const dd kega_hfill = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_ega_calcaddr
#define M2C_CODE_EQUATE_ega_calcaddr 1
static const dd kega_calcaddr = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_allocatespace
#define M2C_CODE_EQUATE_allocatespace 1
static const dd kallocatespace = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_createegadata
#define M2C_CODE_EQUATE_createegadata 1
static const dd kcreateegadata = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_createegamask
#define M2C_CODE_EQUATE_createegamask 1
static const dd kcreateegamask = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_moveegadata
#define M2C_CODE_EQUATE_moveegadata 1
static const dd kmoveegadata = 0x1022;
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
