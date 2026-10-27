/* THIS IS GENERATED FILE */

        
#include "misclib.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 76 INPUT_ALL	EQU	0
	// 77 INPUT_ALPHA	EQU	1
	// 78 INPUT_NUM	EQU	2
	// 79 P_EXT		EQU	31
	// 274 COL_BLACK	EQU	0
	// 275 COL_BLUE	EQU	1
	// 276 COL_GREEN 	EQU	2
	// 277 COL_CYAN	EQU	3
	// 278 COL_RED		EQU	4
	// 279 COL_MAGENTA	EQU	5
	// 280 COL_BROWN	EQU	6
	// 281 COL_LT_GREY	EQU	7
	// 282 COL_DK_GREY	EQU	8
	// 283 COL_LT_BLUE	EQU	9
	// 284 COL_LT_GREEN	EQU	10
	// 285 COL_LT_CYAN	EQU	11
	// 286 COL_LT_RED	EQU	12
	// 287 COL_LT_MAGENTA	EQU	13
	// 288 COL_YELLOW	EQU	14
	// 289 COL_WHITE	EQU	15
	// 0 ;============================================================================
	// 0 ;====================
	// 0 ;* PrintEGASpace data
	// 0 ;====================
	// 0 ;=================
	// 0 ;* SelectMode data
	// 0 ;=================
	// 342 TAB		EQU	9
	// 343 CR		EQU	13
	// 344 LF		EQU	10

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kmainproc: 	goto mainproc;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

