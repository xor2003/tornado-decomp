/* THIS IS GENERATED FILE */

        
#include "hgc_stub.h"

                

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    gcode_0_proc:
    _begin:
hgc_vmode:
	// 4369 
	// 0 ;============================================================================
hgc_dload:
	// 4371 
	/* retf */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::khgc_dload: 	goto hgc_dload;
        case m2c::khgc_vmode: 	goto hgc_vmode;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

