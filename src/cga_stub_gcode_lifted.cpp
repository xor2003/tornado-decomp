/* THIS IS GENERATED FILE */

        
#include "cga_stub.h"

                

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    gcode_0_proc:
    _begin:
cga_vmode:
	// 4369 
	// 0 ;============================================================================
cga_dload:
	// 4371 
cga_setpx:
	// 4373 
cga_line:
	// 4375 
cga_vline:
	// 4377 
cga_hline:
	// 4379 
cga_pfill:
	// 4381 
cga_mfill:
	// 4383 
cga_sfill:
	// 4385 
cga_prtc1:
	// 4387 
cga_prtc2:
	// 4389 
cga_prtc3:
	// 4391 
cga_ssprite:
	// 4393 
cga_msprite:
	// 4395 
cga_bsprite:
	// 4397 
cga_qsprite:
	// 4399 
cga_initss:
	// 4401 
cga_initms:
	// 4403 
cga_bfill:
	// 4405 
cga_savemouse:
	// 4407 
cga_loadmouse:
	// 4409 
cga_savescreen:
	// 4411 
cga_loadscreen:
	// 4413 
cga_uncomppic:
	// 4415 
cga_hfill:
	// 4417 
	/* retf */
	RETF(0);
cga_calcaddr:
	// 4419 
	/* ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcga_bfill: 	goto cga_bfill;
        case m2c::kcga_bsprite: 	goto cga_bsprite;
        case m2c::kcga_calcaddr: 	goto cga_calcaddr;
        case m2c::kcga_dload: 	goto cga_dload;
        case m2c::kcga_hfill: 	goto cga_hfill;
        case m2c::kcga_hline: 	goto cga_hline;
        case m2c::kcga_initms: 	goto cga_initms;
        case m2c::kcga_initss: 	goto cga_initss;
        case m2c::kcga_line: 	goto cga_line;
        case m2c::kcga_loadmouse: 	goto cga_loadmouse;
        case m2c::kcga_loadscreen: 	goto cga_loadscreen;
        case m2c::kcga_mfill: 	goto cga_mfill;
        case m2c::kcga_msprite: 	goto cga_msprite;
        case m2c::kcga_pfill: 	goto cga_pfill;
        case m2c::kcga_prtc1: 	goto cga_prtc1;
        case m2c::kcga_prtc2: 	goto cga_prtc2;
        case m2c::kcga_prtc3: 	goto cga_prtc3;
        case m2c::kcga_qsprite: 	goto cga_qsprite;
        case m2c::kcga_savemouse: 	goto cga_savemouse;
        case m2c::kcga_savescreen: 	goto cga_savescreen;
        case m2c::kcga_setpx: 	goto cga_setpx;
        case m2c::kcga_sfill: 	goto cga_sfill;
        case m2c::kcga_ssprite: 	goto cga_ssprite;
        case m2c::kcga_uncomppic: 	goto cga_uncomppic;
        case m2c::kcga_vline: 	goto cga_vline;
        case m2c::kcga_vmode: 	goto cga_vmode;
        case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

