/* THIS IS GENERATED FILE */

        
#include "joystick.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 281 NPOS	 	EQU	32		;number of joystick positions
	// 0 ;number of joystick positions
	// 282 GAME_PORT	EQU	00201h		;game port address
	// 0 ;game port address
	// 283 JOY_A_XPOS	EQU	00000001b
	// 284 JOY_A_YPOS	EQU	00000010b
	// 285 JOY_B_XPOS	EQU	00000100b
	// 286 JOY_B_YPOS	EQU	00001000b
	// 287 JOY_A_FIRE1	EQU	00010000b
	// 288 JOY_A_FIRE2	EQU	00100000b
	// 289 JOY_B_FIRE1	EQU	01000000b
	// 290 JOY_B_FIRE2	EQU	10000000b
	// 0 ;1 = joystick fitted
	// 0 ;1 = joystick fitted
	// 0 ;x ref = centre x * 2
	// 0 ;y ref = centre y * 2
	// 0 ;x scale = NPOS * 65536 / x ref (fraction)
	// 0 ;y scale = NPOS * 65536 / y ref (fraction)
	// 0 ;x pos = current x position
	// 0 ;y pos = current y position
	// 0 ;x val = x pos * x scale (0 .. NPOS)
	// 0 ;y val = y pos * y scale (0 .. NPOS)
	// 0 ;1 = fire pressed
	// 0 ;1 = fire pressed
	// 0 ;1 = fire just pressed
	// 0 ;1 = fire just pressed
	// 0 ;)
	// 0 ;) previous values of
	// 0 ;) joystick variables
	// 0 ;)
	// 0 ;x ref = centre x * 2
	// 0 ;y ref = centre y * 2
	// 0 ;x scale = NPOS * 65536 / x ref (fraction)
	// 0 ;y scale = NPOS * 65536 / y ref (fraction)
	// 0 ;x pos = current x position
	// 0 ;y pos = current y position
	// 0 ;x val = x pos * x scale (0 .. NPOS)
	// 0 ;y val = y pos * y scale (0 .. NPOS)
	// 0 ;1 = fire pressed
	// 0 ;1 = fire pressed
	// 0 ;1 = fire just pressed
	// 0 ;1 = fire just pressed
	// 0 ;)
	// 0 ;) previous values of
	// 0 ;) joystick variables
	// 0 ;)
	// 0 ;* joystick sensitivity
	// 0 ;0 = normal, 1 = high sensitivity
	// 0 ;--------------------
	// 0 ;* CH FlightStick Pro
	// 0 ;--------------------
	// 0 ;1 = CH FlightStick Pro fitted
	// 0 ;--------------
	// 0 ;* ThrustMaster
	// 0 ;--------------
	// 0 ;1 = ThrustMaster joystick fitted
	// 0 ;* calibration values
	// 0 ;x top lh corner
	// 0 ;y top lh corner
	// 0 ;x centre
	// 0 ;y centre
	// 0 ;x bottom rh corner
	// 0 ;y bottom rh corner
	// 0 ;coolie hat centre
	// 0 ;coolie hat left
	// 0 ;coolie hat down
	// 0 ;coolie hat right
	// 0 ;coolie hat up
	// 0 ;* current position
	// 0 ;x pos = current x position
	// 0 ;y pos = current y position
	// 0 ;x val = 0 .. NPOS
	// 0 ;y val = 0 .. NPOS
	// 0 ;coolie hat position
	// 364 COOLIE_UP	EQU	1
	// 365 COOLIE_DN	EQU	2
	// 366 COOLIE_LT	EQU	3
	// 367 COOLIE_RT	EQU	4
	// 0 ;1 = coolie hat available
	// 0 ;coolie hat value (if changed)
	// 0 ;coolie hat value (this frame)
	// 0 ;coolie hat value (last frame)
	// 0 ;* fire buttons
	// 376 TM_FIRE1	EQU	JOY_A_FIRE1	;main fire button (trigger)
	// 0 ;main fire button (trigger)
	// 377 TM_FIRE2	EQU	JOY_A_FIRE2	;top button (next to coolie hat)
	// 0 ;top button (next to coolie hat)
	// 378 TM_FIRE3	EQU	JOY_B_FIRE1	;left hand button (thumb)
	// 0 ;left hand button (thumb)
	// 379 TM_FIRE4	EQU	JOY_B_FIRE2	;bottom button (pinkie)
	// 0 ;bottom button (pinkie)

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

