/* THIS IS GENERATED FILE */

        
#include "newmouse.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;1 = mouse driver installed
	// 0 ;-------------------
	// 0 ;* mouse x, y limits
	// 0 ;-------------------
	// 0 ;----------------
	// 0 ;* mouse position
	// 0 ;----------------
	// 0 ;-------------------------
	// 0 ;* previous mouse position
	// 0 ;-------------------------
	// 0 ;-----------------------
	// 0 ;* current button status
	// 0 ;-----------------------
	// 0 ;1 = button pressed
	// 0 ;1 = button pressed
	// 0 ;------------------------
	// 0 ;* previous button status
	// 0 ;------------------------
	// 0 ;1 = button pressed
	// 0 ;1 = button pressed
	// 0 ;-----------------------
	// 0 ;* mouse motion counters
	// 0 ;-----------------------
	// 0 ;(-32768 .. 32767)
	// 0 ;> 0 = rightward motion
	// 0 ;< 0 = leftward motion
	// 0 ;(-32768 .. 32767)
	// 0 ;> 0 = downward motion
	// 0 ;< 0 = upward motion
	// 0 ;------------------------
	// 0 ;* mouse function equates
	// 0 ;------------------------
	// 91 MOUSE_RESET	EQU	0
	// 92 HIDE_CURSOR	EQU	2
	// 93 GET_POSITION	EQU	3
	// 94 SET_POSITION	EQU	4
	// 95 GET_BUTTONS	EQU	5
	// 96 SET_HORIZ	EQU	7
	// 97 SET_VERT	EQU	8
	// 98 GET_MOTION	EQU	11

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

