/* THIS IS GENERATED FILE */

        
#include "charsets.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;* 7 * 9 character sets
	// 0 ;*
	// 0 ;* The format of the data is as follows:-
	// 0 ;*
	// 0 ;*	DB	11111100b	;'B'
	// 0 ;*	DB	10000010b
	// 0 ;*	DB	10000010b
	// 0 ;*	DB	11111100b
	// 0 ;*	DB	10000010b
	// 0 ;*	DB	10000010b
	// 0 ;*	DB	11111100b
	// 0 ;*	DB	00000000b	;These two lines are reserved for descenders
	// 0 ;*	DB	00000000b	;on 'g', 'j', 'p', 'q' and 'y'.
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* 3 * 5 character sets
	// 0 ;*
	// 0 ;* The format of the data is as follows:-
	// 0 ;*
	// 0 ;*	DB	11001100b	;'B'
	// 0 ;*	DB	10101010b
	// 0 ;*	DB	11001100b
	// 0 ;*	DB	10101010b
	// 0 ;*	DB	11001100b
	// 0 ;*
	// 0 ;* Note that data is repeated in each nibble.
	// 0 ;degrees symbol
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* 5 * 9 character sets
	// 0 ;*
	// 0 ;* The format of the data is as follows:-
	// 0 ;*
	// 0 ;*	DB	11110000b	;'B'
	// 0 ;*	DB	10001000b
	// 0 ;*	DB	10001000b
	// 0 ;*	DB	11110000b
	// 0 ;*	DB	10001000b
	// 0 ;*	DB	10001000b
	// 0 ;*	DB	11110000b
	// 0 ;*	DB	00000000b	;These two lines are reserved for descenders
	// 0 ;*	DB	00000000b	;on 'g', 'j', 'p', 'q' and 'y'.

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

