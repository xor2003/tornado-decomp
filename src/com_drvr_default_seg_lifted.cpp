/* THIS IS GENERATED FILE */

        
#include "com_drvr.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;* CGA_MODEL is suitable for HGC, HEM, CGA modes
	// 0 ;* EGA_MODEL is suitable for HGC, HEM, CGA, EGA, TAN, TEM, V16, VGA modes
	// 299 CGA_MODEL	EQU	16000		;4 colour buffer size
	// 0 ;4 colour buffer size
	// 300 EGA_MODEL	EQU	32000		;16 colour buffer size
	// 0 ;16 colour buffer size
	// 301 VIDEO_BUF_SIZE	EQU	EGA_MODEL
	// 0 ;* enable / disable sprite routines
	// 305 SPRITES_ON	EQU	1		;1 = sprite routines enabled
	// 0 ;1 = sprite routines enabled
	// 306 VGA		EQU	0		;Video Graphics Adapter
	// 0 ;Video Graphics Adapter
	// 307 HEM		EQU	2	     ;Hercules emulated on CGA
	// 0 ;Hercules emulated on CGA
	// 308 CGA		EQU	4		;Colour Graphics Adapter
	// 0 ;Colour Graphics Adapter
	// 309 EGA		EQU	6		;Enhanced Graphics Adapter
	// 0 ;Enhanced Graphics Adapter
	// 310 TAN		EQU	8		;Tandy
	// 0 ;Tandy
	// 311 TEM		EQU	10		;Tandy emulated on EGA
	// 0 ;Tandy emulated on EGA
	// 312 V16		EQU	12		;16 colour VGA
	// 0 ;16 colour VGA
	// 313 HGC		EQU	14		;Hercules Graphics Card
	// 0 ;Hercules Graphics Card
	// 0 ;ptr to work screen segment
	// 0 ;ptr to real screen segment
	// 0 ;0 = page 0, 2 = page 1 (EGA, VGA)
	// 318 GAME_MODE	EQU	0		;EGA / VGA flip work / real screen
	// 0 ;EGA / VGA flip work / real screen
	// 319 MENU_MODE	EQU	2	 	;EGA / VGA copy work to real screen
	// 0 ;EGA / VGA copy work to real screen
	// 0 ;1 = load palette registers
	// 0 ;polygons / frame
	// 0 ;* frame rates
	// 325 FREE_FRAME_RATE	EQU	1		;100 frames / sec (max) (free run)
	// 0 ;100 frames / sec (max) (free run)
	// 326 FAST_FRAME_RATE	EQU	5 		; 20 frames / sec (max)
	// 0 ; 20 frames / sec (max)
	// 327 MEDM_FRAME_RATE	EQU	10		; 10 frames / sec (max)
	// 0 ; 10 frames / sec (max)
	// 328 SLOW_FRAME_RATE	EQU	20		;  5 frames / sec (max)
	// 0 ;  5 frames / sec (max)
	// 0 ;limit frame rate (1/100ths sec)
	// 0 ;* screen types
	// 332 SCR_TYPE_0	EQU	0		;4 colour screens
	// 0 ;4 colour screens
	// 333 SCR_TYPE_1	EQU	1		;16 colour screens
	// 0 ;16 colour screens
	// 334 SCR_TYPE_2	EQU	2		;256 colour screens
	// 0 ;256 colour screens
	// 0 ;VGA
	// 0 ;* pen colours
	// 0 ;SetPixel pen colour
	// 0 ;LineDraw pen colour
	// 0 ;PolyFill paint colour
	// 0 ;HorizonFill lhs colour
	// 0 ;HorizonFill rhs colour
	// 0 ;* logical to physical colour convert table
	// 0 ;colour palette
	// 0 ;* pointers to default palettes for screen modes
	// 0 ;VGA
	// 0 ;* offsets in attribute data block for screen modes
	// 0 ;VGA
	// 0 ;CGA
	// 0 ;* print character variables
	// 0 ;print line 0 - 199
	// 0 ;print column 0 - 319
	// 0 ;default white
	// 0 ;default black
	// 0 ;1 = use print 'over'
	// 0 ;* character set font pointers
	// 0 ;* general purpose logical sprite data block
	// 0 ;x
	// 0 ;y
	// 0 ;ptr
	// 0 ;* SSprite clip divide x table
	// 0 ;VGA (x/4)
	// 0 ;		DB	2,0		;CGA (x/4)
	// 0 ;* clip data initialized to maximum screen size
	// 0 ;byte resolution
	// 0 ;byte resolution
	// 0 ;pixel resolution
	// 0 ;pixel resolution
	// 0 ;* horizon fill variables
	// 0 ;-------------
	// 0 ;* Jump Tables
	// 0 ;-------------
	// 0 ;list terminator
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA
	// 0 ;VGA

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

