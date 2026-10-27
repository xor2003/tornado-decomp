/* THIS IS GENERATED FILE */

        
#include "scanface.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;* select face sorting routine wrt attribute
	// 0 ;* "standard" functions
	// 0 ;0  - 0 0 0 0 0 (D E P V S)
	// 0 ;1  - 0 0 0 0 1
	// 0 ;2  - 0 0 0 1 0
	// 0 ;3  - 0 0 0 1 1
	// 0 ;4  - 0 0 1 0 0
	// 0 ;5  - 0 0 1 0 1
	// 0 ;6  - 0 0 1 1 0
	// 0 ;7  - 0 0 1 1 1
	// 0 ;8
	// 0 ;9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16 - 1 0 0 0 0
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20 - 1 0 1 0 0
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;24 - 1 1 0 0 0
	// 0 ;25
	// 0 ;26
	// 0 ;27
	// 0 ;28 - 1 1 1 0 0
	// 0 ;29
	// 0 ;30
	// 0 ;31
	// 0 ;* "extended" functions
	// 0 ;32
	// 0 ;33
	// 0 ;34
	// 0 ;35
	// 0 ;36
	// 0 ;37
	// 0 ;38
	// 0 ;39
	// 0 ;40
	// 0 ;41
	// 0 ;42
	// 0 ;43
	// 0 ;44
	// 0 ;45
	// 0 ;46
	// 0 ;47
	// 0 ;48
	// 0 ;49
	// 0 ;50
	// 0 ;51
	// 0 ;52
	// 0 ;53
	// 0 ;54
	// 0 ;55
	// 0 ;56
	// 0 ;57
	// 0 ;58
	// 0 ;59
	// 0 ;60
	// 0 ;61
	// 0 ;62
	// 0 ;63
	// 0 ;* select face drawing routine wrt attribute
	// 0 ;0 - 0 0 (S F)
	// 0 ;1 - 0 1
	// 0 ;2 - 1 0
	// 0 ;3 - 1 1
	// 0 ;0 - 0 0 (S F)
	// 0 ;1 - 0 1

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

