/* THIS IS GENERATED FILE */

        
#include "vconfig.h"

                

 __attribute__((weak)) bool configurevisual(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    configurevisual:
    _begin:
	/* call	RandomizeClouds ;* note: Call once only (after map is loaded). */
	CALL(randomizeclouds, 0);
edummylabel1:
	// 4369 
	/* call	InitPalettes	;(cf indicates load error) */
	CALL(initpalettes, 0);
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kconfigurevisual: 	goto configurevisual;
        case m2c::kedummylabel1: 	goto edummylabel1;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

