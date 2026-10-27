/* THIS IS GENERATED FILE */

        
#include "circle.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ; >=   0 <= CircleXMax
	// 0 ; <= 319 >= CircleXMin
	// 0 ; >=   0 <= CircleYMax
	// 0 ; <= 199 >= CircleYMin
	// 0 ;1 = circle visible
	// 0 ;* select outside clip routine wrt circle origin out code (000ABRL0)
	// 0 ;00000
	// 0 ;00010
	// 0 ;00100
	// 0 ;00110
	// 0 ;01000
	// 0 ;01010
	// 0 ;01100
	// 0 ;01110
	// 0 ;10000
	// 0 ;10010
	// 0 ;10100
	// 0 ;10110
	// 0 ;11000
	// 0 ;11010
	// 0 ;11100
	// 0 ;11110
	// 101 DUMMY_MIN	EQU	-32768
	// 102 DUMMY_MAX	EQU	+32767

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

