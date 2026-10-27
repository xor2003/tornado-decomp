/* THIS IS GENERATED FILE */

        
#include "rngbrg.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 57 IDS_TORNADO	EQU	0		;interdictor strike
	// 58 ADV_TORNADO	EQU	2		;air defence variant
	// 59 ECR_TORNADO	EQU	4		;electronic combat and reconnaissance
	// 63 CTRL_DEV_KBD1	EQU	0		;keyboard (self centring)
	// 64 CTRL_DEV_KBD2	EQU	2		;keyboard
	// 65 CTRL_DEV_JOY1	EQU	4		;single joystick
	// 66 CTRL_DEV_JOY2	EQU	6		;dual joysticks
	// 70 SND_NULL	EQU	0		;no sound card
	// 71 SND_SPEAKER	EQU	2		;internal speaker
	// 72 SND_SBLASTER	EQU	4		;SoundBlaster
	// 73 SND_ADLIB	EQU	6		;AdLib
	// 74 SND_ROLAND	EQU	8		;Roland LAPC1
	// 78 SHAKE_OPT_OFF	EQU	0		;shake effects off
	// 79 SHAKE_OPT_ON	EQU	1		;shake effects on
	// 83 SOUND_OPT_OFF	EQU	0		;sound off
	// 84 SOUND_OPT_ON	EQU	1		;sound on (less engine sound)
	// 85 SOUND_OPT_ENG	EQU	2		;sound on (with engine sound)
	// 89 VIEW_PILOT	EQU	0 		;pilot's panel view
	// 90 VIEW_LPILOT	EQU	2		;pilot's left view
	// 91 VIEW_RPILOT	EQU	4		;pilot's right view
	// 92 VIEW_NAVIG	EQU	6		;navigator's panel view
	// 93 VIEW_LNAVIG	EQU	8		;navigator's left view
	// 94 VIEW_RNAVIG	EQU	10		;navigator's right view
	// 95 VIEW_TRACKING	EQU	12		;tracking camera
	// 96 VIEW_SATELLITE	EQU	14		;satellite camera
	// 97 VIEW_MAP	EQU	16		;map view
	// 98 VIEW_DRONE	EQU	18		;drone view
	// 99 VIEW_SPECTATOR	EQU	20		;spectator view
	// 100 VIEW_REMOTE	EQU	22		;remote view
	// 101 VIEW_LOOKDOWN	EQU	24		;pilot's look down
	// 102 VIEW_LOOKUP	EQU	26		;pilot's look up
	// 103 VIEW_DEMO	EQU	28		;demo view
	// 104 VIEW_DESTROYED	EQU	30		;Tornado destroyed view
	// 105 VIEW_WEAPON	EQU	32		;weapon view
	// 106 VIEW_ZRK EQU 34         ;ZRK ROMB (SA-8) to Tornado view
	// 107 VIEW_ZSU1 EQU 36         ;ZSU-23-4 Shilka to Tornado view1
	// 108 VIEW_ZSU2 EQU 38         ;ZSU-23-4 Shilka to Tornado view2
	// 109 VIEW_ZRK_AAA EQU 40         ;ZSU-23-4 Shilka to Tornado view2
	// 113 PILOTPAN	EQU	0   	;pilot's front panel
	// 114 PSIDEPAN	EQU	2		;pilot's left and right side panel
	// 115 NAVIGPAN	EQU	4		;navigator's front panel
	// 116 NSIDEPAN	EQU	6		;navigator's left and right side panel
	// 117 EXTRNPAN	EQU	8		;external panel
	// 118 LOOKDOWN	EQU	10		;look down panel
	// 119 LOOKUP		EQU	12		;look up panel
	// 120 MAPPAN		EQU	14		;map panel
	// 124 CREW_PILOT	EQU	0		;pilot in control
	// 125 CREW_NAVIG	EQU	2		;navigator in control
	// 129 AUTO_OFF	EQU	0		;off (manual)
	// 130 AUTO_APPROACH	EQU	2		;approach (autoland)
	// 131 AUTO_TRACK	EQU	4		;track acquire (fly to next waypoint)
	// 132 AUTO_HOLD	EQU	6		;altitude and heading hold
	// 133 AUTO_TF		EQU	8		;terrain follow
	// 137 ALT_MANUAL	EQU	0
	// 138 ALT_APPROACH	EQU	2
	// 139 ALT_ACQUIRE	EQU	4
	// 140 ALT_TF		EQU	6
	// 144 HDG_MANUAL	EQU	0
	// 145 HDG_APPROACH	EQU	2
	// 146 HDG_ACQUIRE	EQU	4
	// 147 HDG_TRACK	EQU	6
	// 151 JET_NULL	EQU	0		;nothing
	// 152 JET_EXT_TANKS	EQU	1		;ext fuel tanks
	// 153 JET_EXT_STORES	EQU	2		;ext fuel tanks + ext stores
	// 154 JET_ALL		EQU	3		;ext fuel tanks + ext stores + int fuel
	// 158 DIE_QUIT	EQU	1		;quit game
	// 159 DIE_HYPOXIA	EQU	2		;lack of oxygen
	// 160 DIE_BREAK_UP	EQU	3		;break up due to buffeting
	// 161 DIE_CRASH_HILL	EQU	4		;crashed into hill
	// 162 DIE_CRASH_GND	EQU	5		;crashed into ground
	// 163 DIE_DITCHED	EQU	6		;ditched
	// 164 DIE_GND_SPD_HI	EQU	7		;crashed - ground speed too high
	// 165 DIE_SINK_HI	EQU	8		;crashed - sink rate too high
	// 166 DIE_ROLL_HI	EQU	9		;crashed - roll too high on landing
	// 167 DIE_NOSE_WHEEL	EQU	10		;crashed - nose wheel collapsed
	// 168 DIE_TAIL_SCRAPE	EQU	11		;crashed - tail scrape on landing
	// 169 DIE_COLLAPSE	EQU	12		;crashed - gear collapsed
	// 170 DIE_FIRE	EQU	13		;destroyed by fire
	// 171 DIE_EJECT	EQU	14		;ejected
	// 172 DIE_MISSILE	EQU	15		;shot down by air-to-air missile
	// 173 DIE_CANNON	EQU	16		;shot down by cannon fire
	// 174 DIE_SAM		EQU	17		;shot down by surface-to-air missile
	// 175 DIE_AAA		EQU	18		;shot down by anti-aircraft artillery
	// 176 DIE_GND_EXPLO	EQU	19		;destroyed by ground explosion
	// 177 DIE_AIR_EXPLO	EQU	20		;destroyed by air explosion
	// 178 DIE_HIT_GND_OBJ	EQU	21		;crashed into ground object
	// 179 DIE_HIT_MOB_OBJ	EQU	22		;crashed into mobile object
	// 180 DIE_2_PLYR_WIN	EQU	23		;two player win
	// 181 DIE_2_PLYR_DRAW	EQU	24		;two player draw
	// 182 DIE_2_PLYR_LOSE	EQU	25		;two player lose
	// 186 SYS_ERR_MOUSE	EQU	255		;mouse driver not present
	// 187 SYS_ERR_PANELS	EQU	254		;error occurred loading panel data
	// 188 SYS_ERR_RGB	EQU	253		;error occurred loading palette RGB data
	// 189 SYS_ERR_LD_GAME	EQU	252		;error occurred loading GAMEPLAY.IN
	// 190 SYS_ERR_SV_GAME	EQU	251		;error occurred saving GAMEPLAY.OUT
	// 191 SYS_ERR_LD_LYR	EQU	250		;error occurred loading LAYER.IN
	// 192 SYS_ERR_LD_OBJ	EQU	249		;error occurred loading OBSECDEF.IN
	// 193 SYS_ERR_SV_OBJ	EQU	248		;error occurred saving OBSECDEF.OUT
	// 194 SYS_ERR_LD_MOB	EQU	247		;error occurred loading MSECDEF.IN
	// 195 SYS_ERR_SV_MOB	EQU	246		;error occurred saving MSECDEF.OUT
	// 196 SYS_ERR_MAP_OK	EQU	245		;completed map test ok
	// 197 SYS_ERR_RESIZE	EQU	244		;error occurred resizing memory
	// 198 SYS_ERR_SMEM	EQU	243		;error occurred allocating memory for sound driver
	// 199 SYS_ERR_SDRVR	EQU	242		;error occurred loading sound driver
	// 200 SYS_ERR_SCARD	EQU	241		;sound card not present
	// 201 SYS_ERR_LD_PIC	EQU	240		;error occurred loading digitized picture file
	// 202 SYS_ERR_LD_PREV	EQU	239		;error occurred loading PREVIEW.BT2
	// 203 SYS_ERR_SV_IMP	EQU	238		;error occurred saving IMPACT.OUT
	// 204 SYS_ERR_LD_MISC	EQU	237		;error occurred loading MISCDATA.IN
	// 205 SYS_ERR_TIMEOUT	EQU	236		;global timeout (end of demo)
	// 206 SYS_ERR_SYNC_TO	EQU	235		;comms sync timeout / user abort
	// 207 SYS_ERR_MMEM	EQU	234		;error occurred allocating memory for music driver
	// 208 SYS_ERR_MDRVR	EQU	233		;error occurred loading music driver
	// 209 SYS_ERR_MCARD	EQU	232		;music card not present
	// 213 DIP_GLOC	EQU	00000001b	;blackout / redout
	// 214 DIP_HYPOXIA	EQU	00000010b	;lack of oxygen
	// 215 DIP_EJECT	EQU	00000100b	;eject
	// 216 DIP_DESTROYED	EQU	00001000b	;aircraft destroyed
	// 217 DIP_DEMO	EQU	10000000b	;demo mode
	// 237 WAY_REC_SIZE	EQU	TYPE WAYPOINT
	// 238 WP_SPEED	EQU	WP_TIME		;time / speed share same location
	// 240 WP_TYPE		EQU	00000001b	;1 = target (fly over waypoint)
	// 242 WP_LINK		EQU	00000010b	;1 = link back to waypoint (where WP_HERE = 1)
	// 244 WP_HERE		EQU	00000100b	;1 = link back to here label
	// 246 WP_TF		EQU	00001000b	;1 = terrain follow to waypoint
	// 248 WP_ILS		EQU	00010000b	;1 = fly ILS glide slope to waypoint (WP_TYPE = 1)
	// 250 WP_COORD	EQU	00100000b	;1 = calc speed to arrive at specified time
	// 252 WP_BREAK	EQU	01000000b	;1 = break to here to land label (WP_TYPE = 1)
	// 254 WP_VALID	EQU	10000000b	;1 = waypoint valid
	// 256 NUM_WP_LONG	EQU	16		;number of waypoints for long route
	// 257 NUM_WP_SHORT	EQU	9		;number of waypoints for short route
	// 266 WPACK_MODE_MASK	EQU	00001111b
	// 267 WPACK_NUM_MASK	EQU	11110000b
	// 268 WPACK_NULL	EQU	0		;no package
	// 269 WPACK_GPB1000	EQU	2		;GPB1000 (laydown)
	// 270 WPACK_RET1000	EQU	4		;RET1000 (laydown)
	// 271 WPACK_LGB1000	EQU	6		;LGB1000 (laser guided)
	// 272 WPACK_BL755	EQU	8		;BL755 (laydown)
	// 273 WPACK_JP233	EQU	10		;JP233 (laydown)
	// 274 WPACK_ALARM	EQU	12		;ALARM (indirect)
	// 275 WPACK_AGM	EQU	14		;AGM (ALARM direct)
	// 279 NUL_RADAR	EQU	0
	// 280 GND_RADAR	EQU	2
	// 281 AIR_RADAR	EQU	4
	// 299 AF_REC_SIZE	EQU	TYPE AIRFIELD
	// 300 NUM_AIRFIELDS	EQU	4
	// 304 DEAD		EQU	0
	// 305 ALLIED		EQU	1
	// 306 ENEMY		EQU	2
	// 310 DRONE_UNKNOWN	EQU	0
	// 311 DRONE_AIRCRAFT	EQU	2
	// 312 DRONE_HELICOPT	EQU	4
	// 313 DRONE_TRUCK	EQU	6
	// 314 DRONE_TRAIN	EQU	8
	// 323 NUM_DRONES	EQU	90
	// 327 _DRONE_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_TYPE
	// 329 _DRONE_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_SIDE
	// 331 _DRONE_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_EVENT
	// 348 VEH_REC_SIZE	EQU	TYPE VEHICLE
	// 349 NEXT_VEHICLE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_REC_SIZE
	// 353 _VEH_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DRONE
	// 355 _VEH_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_SIDE
	// 357 _VEH_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_EVENT
	// 359 _VEH_NODE_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_NODE_PTR
	// 361 _VEH_DIST	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST
	// 363 _VEH_DIST_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST_FINE
	// 365 _VEH_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_XFINE
	// 367 _VEH_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_YFINE
	// 369 _VEH_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_ZFINE
	// 383 CNVY_REC_SIZE	EQU	TYPE CONVOY
	// 384 TRUCK		EQU	0
	// 385 TRAIN		EQU	2
	// 386 NUM_TRUCKS	EQU	4
	// 387 NUM_TRAINS	EQU	8
	// 403 ROUTE_REC_SIZE	EQU	TYPE ROUTE_NODE
	// 404 NUM_ROUTE_NODES	EQU	32		;num route nodes per route
	// 408 RN_END		EQU	00000001b	;end of route (terminate here)
	// 409 RN_LINK		EQU	00000010b	;link back to first node
	// 411 RN_EVENT	EQU	00000100b	;stop here and wait for event
	// 412 RN_DELAY	EQU	00001000b	;stop here and wait for delay period
	// 414 RN_UPSLOPE	EQU	00010000b	;start bridge ramp ascent here
	// 415 RN_DNSLOPE	EQU	00100000b	;start bridge ramp descent here
	// 428 RED_OXY		EQU	0000000000000001b	;oxygen system pressure low
	// 429 RED_L_FIRE	EQU	0000000000000010b	;left engine fire
	// 430 RED_R_FIRE	EQU	0000000000000100b	;right engine fire
	// 431 RED_AUT		EQU	0000000000001000b	;auto-pilot disengage
	// 432 RED_REV		EQU	0000000000010000b	;thrust reversers failure
	// 433 RED_SPILS	EQU	0000000000100000b	;SPILS failure
	// 434 RED_UC		EQU	0000000001000000b	;gear damaged (IAS > 350kts)
	// 435 RED_FUEL	EQU	0000000010000000b	;fuel low
	// 436 RED_L_ENG	EQU	0000000100000000b	;left engine failure
	// 437 RED_R_ENG	EQU	0000001000000000b	;right engine failure
	// 439 RED_CANCEL	EQU	NOT(RED_AUT)
	// 440 AMB_CNFG	EQU	0000000000000001b	;config error
	// 441 AMB_ADC		EQU	0000000000000010b	;air data computer failure
	// 442 AMB_ECM		EQU	0000000000000100b	;ECM failure
	// 443 AMB_UC		EQU	0000000000001000b	;gear warning (IAS > 250kts)
	// 444 AMB_WB		EQU	0000000000010000b	;wheelbrakes failure
	// 445 AMB_AB		EQU	0000000000100000b	;airbrakes failure
	// 446 AMB_FLPS	EQU	0000000001000000b	;flaps failure
	// 447 AMB_SWP		EQU	0000000010000000b	;sweep failure
	// 448 AMB_HUD		EQU	0000000100000000b	;HUD failure
	// 449 AMB_MFD1	EQU	0000001000000000b	;pilot's MFD failure
	// 450 AMB_MFD2	EQU	0000010000000000b	;navig's MFD failure
	// 451 AMB_L_TAB	EQU	0000100000000000b	;lh TAB failure
	// 452 AMB_R_TAB	EQU	0001000000000000b	;rh TAB failure
	// 453 AMB_RAD		EQU	0010000000000000b	;radar failure
	// 454 AMB_RWR		EQU	0100000000000000b	;RWR failure
	// 456 AMB_CANCEL	EQU	NOT(AMB_CNFG+AMB_UC)
	// 500 AC_REC_SIZE	EQU	TYPE AIRCRAFT
	// 501 AC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 505 _AC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE
	// 507 _AC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SIDE
	// 509 _AC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT
	// 511 _AC_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TYPE
	// 513 _AC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DELAY
	// 515 _AC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE_NUM
	// 517 _AC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT_NUM
	// 519 _AC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_CTRL_MODE
	// 521 _AC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WP_PTR
	// 523 _AC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_XFINE
	// 525 _AC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_YFINE
	// 527 _AC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ZFINE
	// 529 _AC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_HFINE
	// 531 _AC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PFINE
	// 533 _AC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_RFINE
	// 535 _AC_VTAS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS
	// 537 _AC_VTAS_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS_FINE
	// 539 _AC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_LIFT_VCTR
	// 541 _AC_AB_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AB_DELAY
	// 543 _AC_SWEEP_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SWEEP_DELAY
	// 545 _AC_TAXI_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_PTR
	// 547 _AC_TAXI_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_XFT
	// 549 _AC_TAXI_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_YFT
	// 551 _AC_ARM_LOCK	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ARM_LOCK
	// 553 _AC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_FLAGS
	// 555 _AC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DECOY_TIMER
	// 557 _AC_AA_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AA_TIMER
	// 559 _AC_OPP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_OPP_PTR
	// 561 _AC_PREV_PERR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PERR
	// 563 _AC_PREV_PRATE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PRATE
	// 565 _AC_SHELLS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SHELLS
	// 567 _AC_MISSILES	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_MISSILES
	// 569 _AC_WPN_INT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WPN_INT
	// 571 _AC_EVADE_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVADE_TIMER
	// 573 _AC_GMAX_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_GMAX_TIMER
	// 577 AC_WP_NULL	EQU	0		;no action
	// 578 AC_WP_TAKEOFF	EQU	2		;takeoff
	// 579 AC_WP_AIRBORNE	EQU	4		;start airborne
	// 580 AC_WP_TAXI	EQU	6		;taxi off runway
	// 581 AC_WP_RESTART	EQU	8		;resupply then restart
	// 585 GR4_TORNADO	EQU	0
	// 586 MIG27_FLOGGER	EQU	2
	// 587 F3_TORNADO	EQU	4
	// 588 MIG31_FOXHOUND	EQU	6
	// 589 F15_EAGLE	EQU	8
	// 590 SU27_FLANKER	EQU	10
	// 591 F16_FALCON	EQU	12
	// 592 MIG29_FULCRUM	EQU	14
	// 593 A10_THUNDERBOLT	EQU	16
	// 594 SU25_FROGFOOT	EQU	18
	// 595 E3D_SENTRY	EQU	20
	// 596 IL76_MAINSTAY	EQU	22
	// 597 C130_HERCULES	EQU	24
	// 598 IL76_CANDID	EQU	26
	// 602 AFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 603 AFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 604 AFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 605 AFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 606 AFLG_EVADE_HI	EQU	0000000000010000b	;evade missile (pull up)
	// 607 AFLG_EVADE_LO	EQU	0000000000100000b	;evade missile (roll and pull)
	// 608 AFLG_GMAX	EQU	0000000001000000b	;hard manoeuvring
	// 609 AFLG_UPRIGHT	EQU	0000000010000000b	;fly upright to break
	// 610 AFLG_BREAK	EQU	0000000100000000b	;break to land
	// 639 HC_REC_SIZE	EQU	TYPE HELICOPTER
	// 640 HC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
	// 644 _HC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE
	// 646 _HC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_SIDE
	// 648 _HC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT
	// 650 _HC_TYPE       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_TYPE
	// 652 _HC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DELAY
	// 654 _HC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE_NUM
	// 656 _HC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT_NUM
	// 658 _HC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_CTRL_MODE
	// 660 _HC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_WP_PTR
	// 662 _HC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_XFINE
	// 664 _HC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_YFINE
	// 666 _HC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ZFINE
	// 668 _HC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_HFINE
	// 670 _HC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_PFINE
	// 672 _HC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_RFINE
	// 674 _HC_VTAS       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS
	// 676 _HC_VTAS_FINE  	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS_FINE
	// 678 _HC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_LIFT_VCTR
	// 680 _HC_ACCEL_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ACCEL_PFINE
	// 682 _HC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_FLAGS
	// 684 _HC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DECOY_TIMER
	// 688 HC_WP_NULL	EQU	0		;no action
	// 689 HC_WP_TAKEOFF	EQU	2		;takeoff
	// 690 HC_WP_AIRBORNE	EQU	4		;start airborne
	// 691 HC_WP_STOP	EQU	6		;stop
	// 692 HC_WP_RESTART	EQU	8		;resupply then restart
	// 696 AH64_APACHE	EQU	0
	// 697 MI24_HIND	EQU	2
	// 698 CH47_CHINOOK	EQU	4
	// 699 MI26_HALO	EQU	6
	// 703 HFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 704 HFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 705 HFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 706 HFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 711 OBJECT_LIGHTS	EQU	00000000b	;0 = night lighting off
	// 712 OBJECT_ENEMY	EQU	01000000b	;1 = enemy
	// 713 OBJECT_DEAD	EQU	10000000b	;1 = dead
	// 714 OBJECT_CLEAR	EQU	11000000b	;clear animation with mask
	// 720 WING_SWEEP_FWD	EQU	00000000b
	// 721 WING_SWEEP_MID	EQU	00000001b
	// 722 WING_SWEEP_BCK	EQU	00000010b
	// 723 WING_SWEEP_ALL	EQU	00000011b
	// 724 GEAR_DOWN	EQU	00000100b
	// 725 REHEAT_L_ENG	EQU	00001000b
	// 726 REHEAT_R_ENG	EQU	00010000b
	// 727 REHEAT_ALL	EQU	00011000b
	// 728 AC_SPECIALS	EQU	00100000b
	// 734 ROTOR_POS1	EQU	00000000b
	// 735 ROTOR_POS2	EQU	00000001b
	// 736 ROTOR_POS3	EQU	00000010b
	// 737 ROTOR_ALL	EQU	00000011b
	// 743 HEADLAMPS	EQU	00000001b
	// 747 NULL_WEAPON	EQU	-1
	// 749 GPB1000		EQU	0		;1000lb slick bomb
	// 750 RET1000		EQU	2		;1000lb retarded bomb
	// 751 LGB1000		EQU	4		;1000lb laser guided bomb (Paveway II)
	// 752 BL755		EQU	6		;cluster bomb
	// 753 JP233		EQU	8		;JP233
	// 754 ALARM		EQU	10		;ALARM
	// 756 CANNON		EQU	12		;cannon
	// 757 SIDEWINDER	EQU	14		;Sidewinder (AIM-9L)
	// 758 SKYFLASH	EQU	16		;active Sky Flash (ADV only)
	// 760 PATRIOT		EQU	18		;radar guided SAM
	// 761 GECKO		EQU	20		;IR guided SAM
	// 763 CHAFF		EQU	22
	// 764 FLARE		EQU	24
	// 768 EXT_GPB1000   	EQU	0		;1000lb slick bomb
	// 769 EXT_RET1000   	EQU	2		;1000lb retarded bomb
	// 770 EXT_LGB1000   	EQU	4		;1000lb laser guided bomb (Paveway II)
	// 771 EXT_BL755     	EQU	6		;cluster bomb
	// 772 EXT_JP233     	EQU	8		;JP233
	// 773 EXT_ALARM     	EQU	10		;ALARM
	// 774 EXT_SIDEWINDER	EQU	12		;Sidewinder (AIM-9L)
	// 775 EXT_SKYFLASH	EQU	14		;active Sky Flash (ADV only)
	// 776 EXT_BOZ100    	EQU	16		;chaff / flare dispenser (IDS / ECR only)
	// 777 EXT_SKYSHADOW	EQU	18		;ECM jamming pod (IDS / ECR only)
	// 778 EXT_DROPTANK	EQU	20		;external fuel tank
	// 782 MAX_CANNON	EQU	180
	// 783 MAX_CHAFF	EQU	120
	// 784 MAX_FLARES	EQU	28
	// 788 RETARDED_BOMB	EQU	00000001b	;0 = slick bomb, 1 = retarded bomb
	// 789 CASING_OFF	EQU	00000010b	;0 = casing on, 1 = casing off
	// 790 SPLASH1		EQU	00000001b	;0 = stage 2, 1 = stage 1
	// 791 AIRBURST1	EQU	5		;first stage of airburst animation
	// 792 FLAME		EQU	00000001b	;0 = no flame, 1 = flame
	// 793 CHUTE		EQU	00000010b	;0 = no chute, 1 = chute
	// 795 RHS_CANNON	EQU	00000001b	;rhs cannon
	// 796 LHS_CANNON	EQU	00000010b	;lhs cannon
	// 816 WPN_REC_SIZE	EQU	TYPE WEAPON
	// 817 NUM_WEAPONS	EQU	128
	// 818 WPN_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_REC_SIZE
	// 823 WPN_BOMB_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 824 WPN_BOMB_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 826 WPN_LGB_TGT	EQU	WPN_USERW1	;target waypoint ptr
	// 827 WPN_LGB_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 829 WPN_CAN_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 830 WPN_CAN_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 831 WPN_CAN_TIMER	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 832 WPN_CAN_SRC	EQU	WPN_USERW4	;source ptr (source of cannon fire)
	// 835 WPN_MISS_TGT	EQU	WPN_USERW1	;target ptr (-1 = target lost)
	// 836 WPN_MISS_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 837 WPN_MISS_ACCEL	EQU	WPN_USERW3	;acceleration (ft/sec/sec * 8)
	// 838 WPN_MISS_TIMER	EQU	WPN_USERW4	;burntime / lifetime (secs * 100)
	// 839 WPN_MISS_DECOY	EQU	WPN_USERW5	;decoy distraction timer (secs * 100)
	// 841 WPN_ALM_VEL	EQU	WPN_USERW1	;velocity (ft/sec * 8)
	// 842 WPN_ALM_ACCEL	EQU	WPN_USERW2	;acceleration (ft/sec/sec * 8)
	// 843 WPN_ALM_TIMER	EQU	WPN_USERW3	;burntime / lifetime (secs * 100)
	// 844 WPN_ALM_XSEC	EQU	WPN_USERW4	;xsec )
	// 845 WPN_ALM_YSEC	EQU	WPN_USERW5	;ysec )  target
	// 846 WPN_ALM_XFT	EQU	WPN_USERW6	;xft  ) position
	// 847 WPN_ALM_YFT	EQU	WPN_USERW7	;yft  )
	// 849 WPN_DECOY_HVEL	EQU	WPN_BOMB_HVEL	;horizontal velocity (ft/sec * 8)
	// 850 WPN_DECOY_VVEL	EQU	WPN_BOMB_VVEL	;vertical velocity (ft/sec * 8)
	// 851 WPN_DECOY_LIFE	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 855 WFLG_ALARM_MODE	EQU	0000000000000111b	;ALARM control mode (DO NOT CHANGE)
	// 856 WFLG_TORNADO	EQU	0000000000001000b	;Tornado weapon release
	// 857 WFLG_SPLASH	EQU	0000000000010000b	;draw weapon as splash
	// 858 WFLG_UNGUIDED	EQU	0000000000100000b	;LGB assumes GPB behaviour
	// 859 WFLG_BOMBLET	EQU	0000000001000000b	;BL755 bomblet
	// 860 WFLG_BURNOUT	EQU	0000000010000000b	;missile motor burnt out
	// 861 WFLG_IR_SEEK	EQU	0000000100000000b	;IR missile (else assume radar)
	// 862 WFLG_AIRBURST	EQU	0000001000000000b	;draw weapon as airburst
	// 863 WFLG_NO_RADAR	EQU	0000010000000000b	;no radar targets for ALARM
	// 864 WFLG_TLOCK	EQU	0000100000000000b	;weapon locked onto Tornado
	// 866 ALARM_DIRECT	EQU	0		;direct
	// 867 ALARM_KILL	EQU	1		;kill
	// 868 ALARM_GUIDE	EQU	2		;guide
	// 869 ALARM_ZOOM	EQU	3		;zoom climb
	// 870 ALARM_FREEFALL	EQU	4		;freefall
	// 871 ALARM_LOITER	EQU	5		;loiter
	// 872 ALARM_DIVE	EQU	6		;dive
	// 876 _WPN_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_TYPE
	// 878 _WPN_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_FLAGS
	// 880 _WPN_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_HFINE
	// 882 _WPN_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_PFINE
	// 884 _WPN_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_XFINE
	// 886 _WPN_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_YFINE
	// 888 _WPN_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ZFINE
	// 890 _WPN_USERW1	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW1
	// 892 _WPN_USERW2	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW2
	// 894 _WPN_USERW3	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW3
	// 896 _WPN_USERW4	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW4
	// 897 _WPN_BOMB_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_HVEL
	// 899 _WPN_BOMB_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_VVEL
	// 900 _WPN_LGB_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_TGT
	// 902 _WPN_LGB_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_VEL
	// 903 _WPN_CAN_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_HVEL
	// 905 _WPN_CAN_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_VVEL
	// 907 _WPN_CAN_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_TIMER
	// 908 _WPN_MISS_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TGT
	// 910 _WPN_MISS_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_VEL
	// 912 _WPN_MISS_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_ACCEL
	// 914 _WPN_MISS_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TIMER
	// 916 _WPN_MISS_DECOY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_DECOY
	// 917 _WPN_ALM_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_VEL
	// 919 _WPN_ALM_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_ACCEL
	// 921 _WPN_ALM_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_TIMER
	// 923 _WPN_ALM_XSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XSEC
	// 925 _WPN_ALM_YSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YSEC
	// 927 _WPN_ALM_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XFT
	// 929 _WPN_ALM_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YFT
	// 930 _WPN_DECOY_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_HVEL
	// 932 _WPN_DECOY_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_VVEL
	// 934 _WPN_DECOY_LIFE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_LIFE
	// 938 WPN_EFFECT1	EQU	0
	// 939 WPN_EFFECT2	EQU	1
	// 940 WPN_EFFECT3	EQU	2
	// 941 WPN_EFFECT4	EQU	3
	// 951 PACK_REC_SIZE	EQU	TYPE PACKAGE
	// 952 NUM_PACKAGES	EQU	3
	// 956 ARM_OFF		EQU	0		;off
	// 957 ARM_MANUAL	EQU	2		;manual bombing
	// 958 ARM_LAYDOWN	EQU	4		;laydown bombing
	// 959 ARM_LOFT	EQU	6		;loft bombing
	// 960 ARM_LGB		EQU	8		;laser guided bomb
	// 961 ARM_JP233	EQU	10		;JP233
	// 962 ARM_ALARM_DIR	EQU	12		;ALARM (direct attack mode)
	// 963 ARM_ALARM_IND	EQU	14		;ALARM (indirect attack mode)
	// 964 ARM_CANNON	EQU	16		;cannon
	// 965 ARM_SIDEWINDER	EQU	18		;Sidewinder
	// 966 ARM_SKYFLASH	EQU	20		;Sky Flash
	// 972 SHAKE_NOSE_DOWN	EQU	5		;nose wheel touchdown
	// 973 SHAKE_LAND_GOOD	EQU	10		;good landing
	// 974 SHAKE_LAND_HVY	EQU	15		;heavy landing
	// 975 SHAKE_CANNON	EQU	45		;cannon fire
	// 976 SHAKE_JP233	EQU	50		;JP233 release
	// 977 SHAKE_DAMAGE	EQU	75		;hit by cannon fire / explosion damage
	// 978 SHAKE_COLLIDE	EQU	100		;collide with object
	// 980 SHAKE_BRAKE	EQU	240		;not moving, brakes on and reheat on
	// 981 SHAKE_BUFFET	EQU	245		;buffet due to excess speed wrt wing sweep
	// 982 SHAKE_OFF_HARD	EQU	250		;off hard surface (runway, taxiway etc.)
	// 983 SHAKE_WHEELS_UP	EQU	255		;wheels up landing
	// 987 LAND_GOOD	EQU	00000001b	;1 = good landing
	// 988 LAND_HEAVY	EQU	00000010b	;1 = heavy landing
	// 989 LAND_WHEELS_UP	EQU	00000100b	;1 = wheels up landing
	// 990 LAND_DEAD_STICK	EQU	00001000b	;1 = dead stick landing
	// 991 LAND_ROAD	EQU	00010000b	;1 = landed on road
	// 992 LAND_ENEMY	EQU	00100000b	;1 = landed in enemy territory
	// 993 LAND_STATIONARY	EQU	01000000b	;1 = stationary (when quit)
	// 997 MINOR_DAMAGE	EQU	1
	// 998 MAJOR_DAMAGE	EQU	2
	// 999 TOTAL_DAMAGE	EQU	3
	// 1010 ARAD_RNG_LO	EQU	ARAD_RNG
	// 1011 ARAD_RNG_HI	EQU	ARAD_RNG+2
	// 1012 ARAD_REC_SIZE	EQU	TYPE ARAD_TRACK
	// 1013 NUM_TRACKS	EQU	40		;max number of aircraft radar can track
	// 1017 ARAD_MIN_RANGE	EQU	0		;short range (guns)
	// 1018 ARAD_MED_RANGE	EQU	2		;medium range (Sidewinder)
	// 1019 ARAD_MAX_RANGE	EQU	4		;long range (SkyFlash)
	// 1031 IMP_REC_SIZE	EQU	TYPE IMPACT
	// 1032 NUM_IMPACTS	EQU	128
	// 1036 SECT_ENEMY	EQU	10000000b	;1 = enemy occupied sector
	// 1037 SECT_SAM	EQU	01000000b	;1 = SAM in sector
	// 1038 SECT_AAA	EQU	00100000b	;1 = AAA in sector
	// 1039 SECT_EWR	EQU	00010000b	;1 = EWR in sector
	// 1040 SECT_EWR_NUM	EQU	00001111b	;enemy EWR number (0 .. 15)
	// 1046 E_EWR_FLOOR	EQU	00001111b	;enemy EWR floor
	// 1047 A_EWR_FLOOR	EQU	11110000b	;allied EWR floor
	// 1051 NUM_SAM_AAA	EQU	128
	// 1052 NUM_EWR		EQU	8
	// 1060 RAD_REC_SIZE	EQU	TYPE RADARS
	// 1064 EWR_GROUND	EQU	0		;ground object (SECDATA1)
	// 1065 EWR_MOBILE	EQU	2		;mobile object (MSECDATA1)
	// 1075 EWR_REC_SIZE	EQU	EWR
	// 1079 THREAT_SAM	EQU	0
	// 1080 THREAT_AAA	EQU	2
	// 1081 THREAT_EWR	EQU	4
	// 1082 THREAT_AC	EQU	6
	// 1083 THREAT_RAD_MSL	EQU	8
	// 1084 THREAT_IR_MSL	EQU	10
	// 1098 RWR_RNG_LO	EQU	RWR_RNG
	// 1099 RWR_RNG_HI	EQU	RWR_RNG+2
	// 1100 RWR_REC_SIZE	EQU	RWR
	// 1101 NUM_RWR_THREATS	EQU	16
	// 1105 RWR_SAM		EQU	00010000b
	// 1106 RWR_AAA		EQU	00001000b
	// 1107 RWR_EWR		EQU	00000100b
	// 1108 RWR_AC		EQU	00000010b
	// 1109 RWR_MSL		EQU	00000001b
	// 1114 DAM_HARD_MASK	EQU	00000011b	;(DO NOT CHANGE)
	// 1115 DAM_HARD1	EQU	00000000b	;soft
	// 1116 DAM_HARD2	EQU	00000001b
	// 1117 DAM_HARD3	EQU	00000010b
	// 1118 DAM_HARD4	EQU	00000011b	;hard
	// 1120 DAM_DEBRIS_MASK	EQU	00011100b	;(DO NOT CHANGE)
	// 1121 DAM_DEBRIS1	EQU	00000000b	;crater 1	) MOBILES CAN ONLY
	// 1122 DAM_DEBRIS2	EQU	00000100b	;crater 2	) USE THESE VALUES
	// 1123 DAM_DEBRIS3	EQU	00001000b	;crater 3
	// 1124 DAM_DEBRIS4	EQU	00001100b	;NS road bridge
	// 1125 DAM_DEBRIS5	EQU	00010000b	;EW road bridge
	// 1126 DAM_DEBRIS6	EQU	00010100b	;NS rail bridge
	// 1127 DAM_DEBRIS7	EQU	00011000b	;EW rail bridge
	// 1128 DAM_DEBRIS8	EQU	00011100b	;embankment crater
	// 1131 DAM_EXPLO_MASK	EQU	11111111b	;(DO NOT CHANGE)
	// 1132 DAM_EXPLO1	EQU	00000000b	;burn only
	// 1133 DAM_EXPLO2	EQU	00100000b	;crater size 1 * 2
	// 1134 DAM_EXPLO3	EQU	01000000b	;crater size 2 * 2
	// 1135 DAM_EXPLO4	EQU	01100000b	;crater size 2 * 4
	// 1137 DAM_INVALID	EQU	10000000b	;(DO NOT CHANGE)
	// 1158 COMMS_REC_SIZE	EQU	TYPE COMMS
	// 1159 COMMS_ZFT_LO	EQU	COMMS_ZFT
	// 1160 COMMS_ZFT_HI	EQU	COMMS_ZFT+2
	// 1165 I_FIRE_CANNON	EQU	00000001b	;I have fired a cannon shell
	// 1166 I_FIRE_AIM9L	EQU	00000010b	;I have launched a Sidewinder
	// 1167 I_FIRE_SKYFLASH	EQU	00000100b	;I have launched a Sky Flash
	// 1168 I_REL_CHAFF	EQU	00001000b	;I have released chaff
	// 1169 I_REL_FLARE	EQU	00010000b	;I have released flare
	// 1170 I_EMIT_RADAR	EQU	00100000b	;I am emitting radar
	// 1171 I_EMIT_ECM	EQU	01000000b	;I am emitting ECM
	// 1172 I_ILLUM_YOU	EQU	10000000b	;I am illuminating you (on radar)
	// 1174 I_PAUSED	EQU	00000001b	;I have paused
	// 1175 I_RESUMED	EQU	00000010b	;I have resumed
	// 1177 I_NO_WEAPONS	EQU	00000001b	;I have no weapons
	// 1178 I_KILLED	EQU	00000010b	;I have been destroyed
	// 1179 I_EJECTED	EQU	00000100b	;I have ejected
	// 1180 I_QUIT		EQU	00001000b	;I have quit
	// 1181 I_KILLED_YOU	EQU	00010000b	;I have destroyed you
	// 1190 RDAM_REC_SIZE	EQU	TYPE RUNWAY_DAMAGE
	// 1191 NUM_RUNWAYS	EQU	8
	// 1214 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 1215 VP_ZFT_LO	EQU	VP_ZFT
	// 1216 VP_ZFT_HI	EQU	VP_ZFT+2
	// 1220 SEC_SCALE1 	EQU	0		;1/1 scale
	// 1221 SEC_SCALE2	EQU	2		;1/2 scale
	// 1222 SEC_SCALE8 	EQU	4		;1/8 scale
	// 1223 SEC_SCALE16 	EQU	6		;1/16 scale
	// 1227 INT_VIEWMODE	EQU	0		;internal views
	// 1228 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 1229 EXT_VIEWMODE	EQU	4		;external views
	// 1230 TV1_VIEWMODE	EQU	6		;TV1 display
	// 1231 TV2_VIEWMODE	EQU	8		;TV2 display
	// 1232 TV3_VIEWMODE	EQU	10		;TV3 display
	// 1233 TV4_VIEWMODE	EQU	12		;TV4 display
	// 1234 TV5_VIEWMODE	EQU	14		;TV5 display
	// 1235 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 1239 ROTATE_NULL	EQU	0		;no rotation
	// 1240 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 1241 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 1242 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 1243 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 1244 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 1245 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 1249 $MID		EQU	128
	// 1250 $0		EQU	0
	// 1251 $256		EQU	2
	// 1252 $512		EQU	4
	// 1253 $1024		EQU	8
	// 1254 $2048		EQU	16
	// 1255 $4096		EQU	32
	// 1256 $8192		EQU	64
	// 1265 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 1269 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 1270 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 1274 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 1275 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 1279 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 1283 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 1284 OBJ_SCALE2	EQU	2		;2/1 scale
	// 1285 OBJ_SCALE4	EQU	4		;4/1 scale
	// 1286 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 1287 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 1291 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 1292 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 1293 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 1294 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 1295 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 1299 @MID		EQU	64
	// 1300 @0		EQU	0
	// 1301 @16		EQU	2
	// 1302 @32		EQU	4
	// 1303 @48		EQU	6
	// 1304 @64		EQU	8
	// 1305 @80		EQU	10
	// 1306 @96		EQU	12
	// 1307 @112		EQU	14
	// 1308 @128		EQU	16
	// 1309 @192		EQU	24
	// 1310 @256		EQU	32
	// 1311 @384		EQU	48
	// 1312 @512		EQU	64
	// 1330 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 1332 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 1333 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 1335 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 1336 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 1337 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 1339 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 1341 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 1342 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 1343 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 1344 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 1345 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 1346 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 1348 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 1350 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 1351 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 1355 OTYPE_GROUND	EQU	0		;static ground objects
	// 1356 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 1357 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 1358 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 1359 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 1360 OTYPE_HILLFACE	EQU	10		;hill face
	// 1361 OTYPE_SMOKE	EQU	12		;smoke
	// 1375 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 1376 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 1380 NUM_OBJECTS	EQU	256		;max number of objects
	// 1381 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 1382 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 1383 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 1384 BEHIND_BIN	EQU	0		;behind bin index
	// 1385 IN_FRONT_BIN	EQU	2		;in front bin index
	// 1389 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 1390 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 1391 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 1392 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 1393 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 1394 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 1395 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 1405 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 1409 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 1410 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 1411 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 1412 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 1413 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 1414 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 1415 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 1416 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 1417 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 1418 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 1422 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 1428 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 1441 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 1452 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 1456 SURFACE_UNKNOWN	EQU	0
	// 1457 SURFACE_RUNWAY	EQU	2
	// 1458 SURFACE_TAXIWAY	EQU	4
	// 1459 SURFACE_HARD	EQU	6
	// 1460 SURFACE_ROAD	EQU	8
	// 1461 SURFACE_RAILWAY	EQU	10
	// 1462 SURFACE_RIVER	EQU	12
	// 1463 SURFACE_LAKE	EQU	14
	// 1467 NUM_CRATERS	EQU	128
	// 1468 CRATER_NULL	EQU	0
	// 1469 CRATER_SIZE1	EQU	1		;small
	// 1470 CRATER_SIZE2	EQU	2		;large
	// 1471 CRATER_HEAVE	EQU	3		;heave
	// 1472 CRATER_SHELL	EQU	4		;cannon shell
	// 1483 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 1487 NUM_SMOKE	EQU	128
	// 1489 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 1490 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 1491 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 1492 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 1493 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 1494 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 1495 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 1497 STYPE_NULL	EQU	0		;no smoke
	// 1498 STYPE_GND1	EQU	2		;ground smoke type 1
	// 1499 STYPE_AIR1	EQU	4		;air smoke type 1
	// 1515 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 1516 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 1517 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 1518 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 1540 RWY_REC_SIZE	EQU	TYPE RUNWAY
	// 1542 RWY_1836	EQU	0*8		;end 1 =  S end, end 2 =  N end
	// 1543 RWY_1331	EQU	1*8		;end 1 = SE end, end 2 = NW end
	// 1544 RWY_0927	EQU	2*8		;end 1 =  E end, end 2 =  W end
	// 1545 RWY_0422	EQU	3*8		;end 1 = NE end, end 2 = SW end
	// 1547 RWY_WIDTH256	EQU	0
	// 1548 RWY_WIDTH192	EQU	2
	// 1549 RWY_WIDTH128	EQU	4
	// 1566 ILS_REC_SIZE	EQU	TYPE ILS
	// 1570 ILS_N		EQU	1000b		;north approach ILS
	// 1571 ILS_S		EQU	0100b		;south approach ILS
	// 1572 ILS_E		EQU	0010b		;east approach ILS
	// 1573 ILS_W		EQU	0001b		;west approach ILS
	// 1582 TAXI_REC_SIZE	EQU	TYPE	TAXI
	// 1590 TNODE_REC_SIZE	EQU	TYPE	TNODE
	// 0 ;* OctTable index:-
	// 0 ;*
	// 0 ;*    b0: 0
	// 0 ;*    b1: 0
	// 0 ;*    b2: 1 = abs(Dx) > abs(Dy)
	// 0 ;*    b3: 1 = -Dy
	// 0 ;*    b4: 1 = -Dx
	// 0 ;*		DW	offset, sign
	// 0 ;  0 + theta
	// 0 ; 90 - theta
	// 0 ;180 - theta
	// 0 ; 90 + theta
	// 0 ;360 - theta
	// 0 ;270 + theta
	// 0 ;180 + theta
	// 0 ;270 - theta
	// 1820 MAX_TIME	EQU	(60*60)-1	;59 mins : 59 secs
	// 0 ;59 mins : 59 secs
	// 0 ;------------
	// 0 ;* flat range
	// 0 ;------------
	// 0 ;-------------
	// 0 ;* slant range
	// 0 ;-------------

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

