/* THIS IS GENERATED FILE */

        
#include "vscreen.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 169 VP_REC_SIZE	EQU	TYPE VIEWPORT
	// 0 ;-----------------------------
	// 0 ;* current viewport data block
	// 0 ;-----------------------------
	// 0 ;------------------------
	// 0 ;* clipping window limits
	// 0 ;------------------------
	// 0 ;-------------------------------
	// 0 ;* clipping window adjust origin (move to bottom lh corner)
	// 0 ;-------------------------------
	// 0 ;-----------------
	// 0 ;* viewport origin (bottom lh corner)
	// 0 ;-----------------
	// 0 ;-----------------
	// 0 ;* viewport limits
	// 0 ;-----------------
	// 0 ;--------------------------
	// 0 ;* sin / cos rotation angle
	// 0 ;--------------------------
	// 0 ;---------------
	// 0 ;* outcode flags
	// 0 ;---------------
	// 422 OCODEL		EQU	0001b
	// 423 OCODER		EQU	0010b
	// 424 OCODEB		EQU	0100b
	// 425 OCODEA		EQU	1000b
	// 0 ;------------------
	// 0 ;* object draw mode
	// 0 ;------------------
	// 430 DRAW_OBJECT	EQU	0		;no clipping required
	// 0 ;no clipping required
	// 431 CLIP_OBJECT	EQU	2		;clipping required
	// 0 ;clipping required
	// 432 SKIP_OBJECT	EQU	4		;object not visible
	// 0 ;object not visible
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;----------------
	// 0 ;* poly clip data
	// 0 ;----------------
	// 451 XA		EQU	0
	// 452 YA		EQU	2
	// 453 XB		EQU	-6
	// 454 YB		EQU	-4
	// 455 XC		EQU	0
	// 456 YC		EQU	2
	// 457 OC		EQU	4
	// 0 ;---------------
	// 0 ;* miscellaneous
	// 0 ;---------------

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

