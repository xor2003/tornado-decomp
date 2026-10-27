/* THIS IS GENERATED FILE */

        
#include "vgaphoto.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 45 VGA_PAGE_0	EQU	0a000h
	// 46 VGA_PAGE_1	EQU	0a400h
	// 47 VGA_PAGE_2	EQU	0a800h
	// 48 VGA_PAGE_3	EQU	0ac00h
	// 65 VGA_SEQ		EQU	003c4h
	// 66 VGA_SEQ_MAPMSK	EQU	002h		;xxxxIRGB
	// 67 VGA_SEQ_MEMMOD	EQU	004h
	// 68 VGA_CTRL	EQU	003ceh
	// 69 VGA_CTRL_SETRES	EQU	000h		;xxxxIRGB
	// 70 VGA_CTRL_ENABLE	EQU	001h		;xxxxIRGB
	// 71 VGA_CTRL_COLCMP	EQU	002h		;xxxxIRGB
	// 72 VGA_CTRL_ROTATE	EQU	003h		;xxxFFxxx - FF = function
	// 73 VGA_CTRL_RDMAP	EQU	004h		;xxxxxxRR - RR = read
	// 74 VGA_CTRL_MODE	EQU	005h		;xxxxR0WW -  R = read, WW = write
	// 75 VGA_CTRL_MISC	EQU	006h
	// 76 VGA_CTRL_COLMSK	EQU	007h		;xxxxIRGB
	// 77 VGA_CTRL_BITMSK	EQU	008h
	// 78 VGA_CRTC    	EQU	003d4h
	// 79 VGA_CRTC_HI	EQU	00ch
	// 80 VGA_CRTC_LO	EQU	00dh
	// 81 VGA_CRTC_ULINE	EQU	014h
	// 82 VGA_CRTC_MODE	EQU	017h
	// 83 VGA_CRT_STAT	EQU	003dah
	// 84 VGA_VSYNC	EQU	1000b		;vertical sync bit
	// 85 VGA_PEL_WRITE	EQU	003c8h		;palette load address for write
	// 86 VGA_PEL_READ	EQU	003c7h		;palette load address for read
	// 87 VGA_PEL_DATA	EQU	003c9h		;palette load data register
	// 94 VGA_INPUT_1	EQU	003dah		;(note: same as VGA_CRT_STAT)
	// 95 VGA_ATTR	EQU	003c0h
	// 96 VGA_ATTR_HPAN	EQU	033h		;use pan values 0, 2, 4 and 6 only
	// 0 ;============================================================================
	// 123 ILBM_HDR_LEN	EQU	1198

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

