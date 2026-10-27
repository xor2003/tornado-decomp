/* THIS IS GENERATED FILE */

        
#include "ega_stub.h"

                

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    gcode_0_proc:
    _begin:
ega_vmode:
	// 4369 
	// 0 ;============================================================================
ega_dload:
	// 4371 
ega_setpx:
	// 4373 
ega_line:
	// 4375 
ega_vline:
	// 4377 
ega_hline:
	// 4379 
ega_pfill:
	// 4381 
ega_mfill:
	// 4383 
ega_sfill:
	// 4385 
ega_prtc1:
	// 4387 
ega_prtc2:
	// 4389 
ega_prtc3:
	// 4391 
ega_ssprite:
	// 4393 
ega_msprite:
	// 4395 
ega_bsprite:
	// 4397 
ega_qsprite:
	// 4399 
ega_initss:
	// 4401 
ega_initms:
	// 4403 
ega_initqs:
	// 4405 
ega_bfill:
	// 4407 
ega_savemouse:
	// 4409 
ega_loadmouse:
	// 4411 
ega_savescreen:
	// 4413 
ega_loadscreen:
	// 4415 
ega_uncomppic:
	// 4417 
ega_hfill:
	// 4419 
	/* retf */
	RETF(0);
ega_calcaddr:
	// 4421 
allocatespace:
	// 4423 
createegadata:
	// 4425 
createegamask:
	// 4427 
moveegadata:
	// 4429 
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
                case m2c::kallocatespace: 	goto allocatespace;
        case m2c::kcreateegadata: 	goto createegadata;
        case m2c::kcreateegamask: 	goto createegamask;
        case m2c::kega_bfill: 	goto ega_bfill;
        case m2c::kega_bsprite: 	goto ega_bsprite;
        case m2c::kega_calcaddr: 	goto ega_calcaddr;
        case m2c::kega_dload: 	goto ega_dload;
        case m2c::kega_hfill: 	goto ega_hfill;
        case m2c::kega_hline: 	goto ega_hline;
        case m2c::kega_initms: 	goto ega_initms;
        case m2c::kega_initqs: 	goto ega_initqs;
        case m2c::kega_initss: 	goto ega_initss;
        case m2c::kega_line: 	goto ega_line;
        case m2c::kega_loadmouse: 	goto ega_loadmouse;
        case m2c::kega_loadscreen: 	goto ega_loadscreen;
        case m2c::kega_mfill: 	goto ega_mfill;
        case m2c::kega_msprite: 	goto ega_msprite;
        case m2c::kega_pfill: 	goto ega_pfill;
        case m2c::kega_prtc1: 	goto ega_prtc1;
        case m2c::kega_prtc2: 	goto ega_prtc2;
        case m2c::kega_prtc3: 	goto ega_prtc3;
        case m2c::kega_qsprite: 	goto ega_qsprite;
        case m2c::kega_savemouse: 	goto ega_savemouse;
        case m2c::kega_savescreen: 	goto ega_savescreen;
        case m2c::kega_setpx: 	goto ega_setpx;
        case m2c::kega_sfill: 	goto ega_sfill;
        case m2c::kega_ssprite: 	goto ega_ssprite;
        case m2c::kega_uncomppic: 	goto ega_uncomppic;
        case m2c::kega_vline: 	goto ega_vline;
        case m2c::kega_vmode: 	goto ega_vmode;
        case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::kmoveegadata: 	goto moveegadata;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

