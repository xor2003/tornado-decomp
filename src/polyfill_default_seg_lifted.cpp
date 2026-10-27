/* THIS IS GENERATED FILE */

        
#include "polyfill.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;============================================================================
	// 52 BUF_SIZE	EQU	SIZE LhsX
	// 0 ;PolyFill / MeshFill vector routine
	// 0 ;octant table base address
	// 0 ;Dx > 0, Dy > 0, Dy > Dx
	// 0 ;Dx > 0, Dy > 0, Dx > Dy
	// 0 ;Dx > 0, Dy < 0, Dy > Dx
	// 0 ;Dx > 0, Dy < 0, Dx > Dy
	// 0 ;Dx < 0, Dy > 0, Dy > Dx
	// 0 ;Dx < 0, Dy > 0, Dx > Dy
	// 0 ;Dx < 0, Dy < 0, Dy > Dx
	// 0 ;Dx < 0, Dy < 0, Dx > Dy
	// 0 ;Dx > 0, Dy > 0, Dy > Dx
	// 0 ;Dx > 0, Dy > 0, Dx > Dy
	// 0 ;Dx > 0, Dy < 0, Dy > Dx
	// 0 ;Dx > 0, Dy < 0, Dx > Dy
	// 0 ;Dx < 0, Dy > 0, Dy > Dx
	// 0 ;Dx < 0, Dy > 0, Dx > Dy
	// 0 ;Dx < 0, Dy < 0, Dy > Dx
	// 0 ;Dx < 0, Dy < 0, Dx > Dy

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

