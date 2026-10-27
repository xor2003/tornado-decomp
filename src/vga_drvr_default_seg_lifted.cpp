/* THIS IS GENERATED FILE */

        
#include "vga_drvr.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 193 VGA_PAGE_0	EQU	0a000h
	// 194 VGA_PAGE_1	EQU	0a400h
	// 195 VGA_PAGE_2	EQU	0a800h
	// 196 VGA_PAGE_3	EQU	0ac00h
	// 213 VGA_SEQ		EQU	003c4h
	// 214 VGA_SEQ_MAPMSK	EQU	002h		;xxxxIRGB
	// 215 VGA_SEQ_MEMMOD	EQU	004h
	// 216 VGA_CTRL	EQU	003ceh
	// 217 VGA_CTRL_SETRES	EQU	000h		;xxxxIRGB
	// 218 VGA_CTRL_ENABLE	EQU	001h		;xxxxIRGB
	// 219 VGA_CTRL_COLCMP	EQU	002h		;xxxxIRGB
	// 220 VGA_CTRL_ROTATE	EQU	003h		;xxxFFxxx - FF = function
	// 221 VGA_CTRL_RDMAP	EQU	004h		;xxxxxxRR - RR = read
	// 222 VGA_CTRL_MODE	EQU	005h		;xxxxR0WW -  R = read, WW = write
	// 223 VGA_CTRL_MISC	EQU	006h
	// 224 VGA_CTRL_COLMSK	EQU	007h		;xxxxIRGB
	// 225 VGA_CTRL_BITMSK	EQU	008h
	// 226 VGA_CRTC    	EQU	003d4h
	// 227 VGA_CRTC_HI	EQU	00ch
	// 228 VGA_CRTC_LO	EQU	00dh
	// 229 VGA_CRTC_ULINE	EQU	014h
	// 230 VGA_CRTC_MODE	EQU	017h
	// 231 VGA_CRT_STAT	EQU	003dah
	// 232 VGA_VSYNC	EQU	1000b		;vertical sync bit
	// 233 VGA_PEL_WRITE	EQU	003c8h		;palette load address for write
	// 234 VGA_PEL_READ	EQU	003c7h		;palette load address for read
	// 235 VGA_PEL_DATA	EQU	003c9h		;palette load data register
	// 242 VGA_INPUT_1	EQU	003dah		;(note: same as VGA_CRT_STAT)
	// 243 VGA_ATTR	EQU	003c0h
	// 244 VGA_ATTR_HPAN	EQU	033h		;use pan values 0, 2, 4 and 6 only
	// 429 VGA_LINEADD	EQU	80		;80 bytes / line
	// 0 ;80 bytes / line
	// 0 ;page 0, page 1 offsets from 0
	// 0 ;Dx > 0, Dy > Dx
	// 0 ;Dx > 0, Dx > Dy
	// 0 ;Dx < 0, Dy > Dx
	// 0 ;Dx < 0, Dx > Dy
	// 451 EVEN_HATCH	EQU	1010b
	// 452 ODD_HATCH	EQU	0101b
	// 0 ;-----------------------------------
	// 0 ;* >>>>> SMOKE HATCH PATTERN 1 <<<<<
	// 0 ;-----------------------------------
	// 477 EVEN_SMOKE1	EQU	0001b
	// 478 ODD_SMOKE1	EQU	0100b
	// 0 ;-----------------------------------
	// 0 ;* >>>>> SMOKE HATCH PATTERN 2 <<<<<
	// 0 ;-----------------------------------
	// 503 EVEN_SMOKE2	EQU	1000b
	// 504 ODD_SMOKE2	EQU	0010b
	// 0 ;--------------------
	// 0 ;* smoke start switch
	// 0 ;--------------------
	// 0 ;pattern 1, even y
	// 0 ;pattern 2, even y
	// 0 ;pattern 1, odd y
	// 0 ;pattern 2, odd y
	// 0 ;* reverse nibble bits table (reverse character data)
	// 0 ;0000b
	// 0 ;0001b
	// 0 ;0010b
	// 0 ;0011b
	// 0 ;0100b
	// 0 ;0101b
	// 0 ;0110b
	// 0 ;0111b
	// 0 ;1000b
	// 0 ;1001b
	// 0 ;1010b
	// 0 ;1011b
	// 0 ;1100b
	// 0 ;1101b
	// 0 ;1110b
	// 0 ;1111b
	// 0 ;* horizon fill masks
	// 0 ;-------------------
	// 0 ;* palette fade vars
	// 0 ;-------------------
	// 0 ;1 = fade enabled
	// 0 ;-------------
	// 0 ;* fade 1 vars
	// 0 ;-------------
	// 0 ;current fade params
	// 0 ;0 .. 127
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;previous fade params
	// 0 ;start col 0 .. 255
	// 0 ;count 1 .. 256
	// 0 ;-------------
	// 0 ;* fade 2 vars
	// 0 ;-------------
	// 0 ;current fade params
	// 0 ;0 .. 127
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;previous fade params
	// 0 ;start col 0 .. 255
	// 0 ;count 1 .. 256
	// 0 ;-------------
	// 0 ;* fade 3 vars
	// 0 ;-------------
	// 0 ;fade params
	// 0 ;0 .. 127
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;0 .. 63
	// 0 ;start col 0 .. 255
	// 0 ;count 1 .. 256
	// 0 ;--------------
	// 0 ;* screen shake
	// 0 ;--------------
	// 0 ;secs * 100
	// 610 HSHAKE_OFF	EQU	0000b
	// 611 HSHAKE_LO	EQU	0010b
	// 612 HSHAKE_HI	EQU	0110b
	// 614 VSHAKE_OFF	EQU	0000b
	// 615 VSHAKE_LO	EQU	0001b
	// 616 VSHAKE_HI	EQU	0011b
	// 617 HSHAKE_VERY_LO	EQU	0001b
	// 618 VSHAKE_VERY_LO	EQU	0001b
	// 0 ;screen start address
	// 2773 SS_WIDTH	EQU	0
	// 2774 SS_DEPTH	EQU	2
	// 2775 SS_SIZE		EQU	4
	// 2776 SS_XOFF		EQU	6
	// 2777 SS_YOFF		EQU	8
	// 2778 SS_MASK		EQU	10
	// 2779 SS_DATA		EQU	12
	// 2855 MS_WIDTH	EQU	0
	// 2856 MS_DEPTH	EQU	2
	// 2857 MS_SIZE		EQU	4
	// 2858 MS_XOFF		EQU	6
	// 2859 MS_YOFF		EQU	8
	// 2860 MS_MASK		EQU	10
	// 2861 MS_DATA		EQU	12
	// 2894 QS_WIDTH	EQU	0
	// 2895 QS_DEPTH	EQU	2
	// 2896 QS_SIZE		EQU	4
	// 2897 QS_DATA		EQU	6

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

