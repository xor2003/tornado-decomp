/* THIS IS GENERATED FILE */

        
#include "soundfx.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 102 IDS_TORNADO	EQU	0		;interdictor strike
	// 103 ADV_TORNADO	EQU	2		;air defence variant
	// 104 ECR_TORNADO	EQU	4		;electronic combat and reconnaissance
	// 108 CTRL_DEV_KBD1	EQU	0		;keyboard (self centring)
	// 109 CTRL_DEV_KBD2	EQU	2		;keyboard
	// 110 CTRL_DEV_JOY1	EQU	4		;single joystick
	// 111 CTRL_DEV_JOY2	EQU	6		;dual joysticks
	// 115 SND_NULL	EQU	0		;no sound card
	// 116 SND_SPEAKER	EQU	2		;internal speaker
	// 117 SND_SBLASTER	EQU	4		;SoundBlaster
	// 118 SND_ADLIB	EQU	6		;AdLib
	// 119 SND_ROLAND	EQU	8		;Roland LAPC1
	// 123 SHAKE_OPT_OFF	EQU	0		;shake effects off
	// 124 SHAKE_OPT_ON	EQU	1		;shake effects on
	// 128 SOUND_OPT_OFF	EQU	0		;sound off
	// 129 SOUND_OPT_ON	EQU	1		;sound on (less engine sound)
	// 130 SOUND_OPT_ENG	EQU	2		;sound on (with engine sound)
	// 134 VIEW_PILOT	EQU	0 		;pilot's panel view
	// 135 VIEW_LPILOT	EQU	2		;pilot's left view
	// 136 VIEW_RPILOT	EQU	4		;pilot's right view
	// 137 VIEW_NAVIG	EQU	6		;navigator's panel view
	// 138 VIEW_LNAVIG	EQU	8		;navigator's left view
	// 139 VIEW_RNAVIG	EQU	10		;navigator's right view
	// 140 VIEW_TRACKING	EQU	12		;tracking camera
	// 141 VIEW_SATELLITE	EQU	14		;satellite camera
	// 142 VIEW_MAP	EQU	16		;map view
	// 143 VIEW_DRONE	EQU	18		;drone view
	// 144 VIEW_SPECTATOR	EQU	20		;spectator view
	// 145 VIEW_REMOTE	EQU	22		;remote view
	// 146 VIEW_LOOKDOWN	EQU	24		;pilot's look down
	// 147 VIEW_LOOKUP	EQU	26		;pilot's look up
	// 148 VIEW_DEMO	EQU	28		;demo view
	// 149 VIEW_DESTROYED	EQU	30		;Tornado destroyed view
	// 150 VIEW_WEAPON	EQU	32		;weapon view
	// 151 VIEW_ZRK EQU 34         ;ZRK ROMB (SA-8) to Tornado view
	// 152 VIEW_ZSU1 EQU 36         ;ZSU-23-4 Shilka to Tornado view1
	// 153 VIEW_ZSU2 EQU 38         ;ZSU-23-4 Shilka to Tornado view2
	// 154 VIEW_ZRK_AAA EQU 40         ;ZSU-23-4 Shilka to Tornado view2
	// 158 PILOTPAN	EQU	0   	;pilot's front panel
	// 159 PSIDEPAN	EQU	2		;pilot's left and right side panel
	// 160 NAVIGPAN	EQU	4		;navigator's front panel
	// 161 NSIDEPAN	EQU	6		;navigator's left and right side panel
	// 162 EXTRNPAN	EQU	8		;external panel
	// 163 LOOKDOWN	EQU	10		;look down panel
	// 164 LOOKUP		EQU	12		;look up panel
	// 165 MAPPAN		EQU	14		;map panel
	// 169 CREW_PILOT	EQU	0		;pilot in control
	// 170 CREW_NAVIG	EQU	2		;navigator in control
	// 174 AUTO_OFF	EQU	0		;off (manual)
	// 175 AUTO_APPROACH	EQU	2		;approach (autoland)
	// 176 AUTO_TRACK	EQU	4		;track acquire (fly to next waypoint)
	// 177 AUTO_HOLD	EQU	6		;altitude and heading hold
	// 178 AUTO_TF		EQU	8		;terrain follow
	// 182 ALT_MANUAL	EQU	0
	// 183 ALT_APPROACH	EQU	2
	// 184 ALT_ACQUIRE	EQU	4
	// 185 ALT_TF		EQU	6
	// 189 HDG_MANUAL	EQU	0
	// 190 HDG_APPROACH	EQU	2
	// 191 HDG_ACQUIRE	EQU	4
	// 192 HDG_TRACK	EQU	6
	// 196 JET_NULL	EQU	0		;nothing
	// 197 JET_EXT_TANKS	EQU	1		;ext fuel tanks
	// 198 JET_EXT_STORES	EQU	2		;ext fuel tanks + ext stores
	// 199 JET_ALL		EQU	3		;ext fuel tanks + ext stores + int fuel
	// 203 DIE_QUIT	EQU	1		;quit game
	// 204 DIE_HYPOXIA	EQU	2		;lack of oxygen
	// 205 DIE_BREAK_UP	EQU	3		;break up due to buffeting
	// 206 DIE_CRASH_HILL	EQU	4		;crashed into hill
	// 207 DIE_CRASH_GND	EQU	5		;crashed into ground
	// 208 DIE_DITCHED	EQU	6		;ditched
	// 209 DIE_GND_SPD_HI	EQU	7		;crashed - ground speed too high
	// 210 DIE_SINK_HI	EQU	8		;crashed - sink rate too high
	// 211 DIE_ROLL_HI	EQU	9		;crashed - roll too high on landing
	// 212 DIE_NOSE_WHEEL	EQU	10		;crashed - nose wheel collapsed
	// 213 DIE_TAIL_SCRAPE	EQU	11		;crashed - tail scrape on landing
	// 214 DIE_COLLAPSE	EQU	12		;crashed - gear collapsed
	// 215 DIE_FIRE	EQU	13		;destroyed by fire
	// 216 DIE_EJECT	EQU	14		;ejected
	// 217 DIE_MISSILE	EQU	15		;shot down by air-to-air missile
	// 218 DIE_CANNON	EQU	16		;shot down by cannon fire
	// 219 DIE_SAM		EQU	17		;shot down by surface-to-air missile
	// 220 DIE_AAA		EQU	18		;shot down by anti-aircraft artillery
	// 221 DIE_GND_EXPLO	EQU	19		;destroyed by ground explosion
	// 222 DIE_AIR_EXPLO	EQU	20		;destroyed by air explosion
	// 223 DIE_HIT_GND_OBJ	EQU	21		;crashed into ground object
	// 224 DIE_HIT_MOB_OBJ	EQU	22		;crashed into mobile object
	// 225 DIE_2_PLYR_WIN	EQU	23		;two player win
	// 226 DIE_2_PLYR_DRAW	EQU	24		;two player draw
	// 227 DIE_2_PLYR_LOSE	EQU	25		;two player lose
	// 231 SYS_ERR_MOUSE	EQU	255		;mouse driver not present
	// 232 SYS_ERR_PANELS	EQU	254		;error occurred loading panel data
	// 233 SYS_ERR_RGB	EQU	253		;error occurred loading palette RGB data
	// 234 SYS_ERR_LD_GAME	EQU	252		;error occurred loading GAMEPLAY.IN
	// 235 SYS_ERR_SV_GAME	EQU	251		;error occurred saving GAMEPLAY.OUT
	// 236 SYS_ERR_LD_LYR	EQU	250		;error occurred loading LAYER.IN
	// 237 SYS_ERR_LD_OBJ	EQU	249		;error occurred loading OBSECDEF.IN
	// 238 SYS_ERR_SV_OBJ	EQU	248		;error occurred saving OBSECDEF.OUT
	// 239 SYS_ERR_LD_MOB	EQU	247		;error occurred loading MSECDEF.IN
	// 240 SYS_ERR_SV_MOB	EQU	246		;error occurred saving MSECDEF.OUT
	// 241 SYS_ERR_MAP_OK	EQU	245		;completed map test ok
	// 242 SYS_ERR_RESIZE	EQU	244		;error occurred resizing memory
	// 243 SYS_ERR_SMEM	EQU	243		;error occurred allocating memory for sound driver
	// 244 SYS_ERR_SDRVR	EQU	242		;error occurred loading sound driver
	// 245 SYS_ERR_SCARD	EQU	241		;sound card not present
	// 246 SYS_ERR_LD_PIC	EQU	240		;error occurred loading digitized picture file
	// 247 SYS_ERR_LD_PREV	EQU	239		;error occurred loading PREVIEW.BT2
	// 248 SYS_ERR_SV_IMP	EQU	238		;error occurred saving IMPACT.OUT
	// 249 SYS_ERR_LD_MISC	EQU	237		;error occurred loading MISCDATA.IN
	// 250 SYS_ERR_TIMEOUT	EQU	236		;global timeout (end of demo)
	// 251 SYS_ERR_SYNC_TO	EQU	235		;comms sync timeout / user abort
	// 252 SYS_ERR_MMEM	EQU	234		;error occurred allocating memory for music driver
	// 253 SYS_ERR_MDRVR	EQU	233		;error occurred loading music driver
	// 254 SYS_ERR_MCARD	EQU	232		;music card not present
	// 258 DIP_GLOC	EQU	00000001b	;blackout / redout
	// 259 DIP_HYPOXIA	EQU	00000010b	;lack of oxygen
	// 260 DIP_EJECT	EQU	00000100b	;eject
	// 261 DIP_DESTROYED	EQU	00001000b	;aircraft destroyed
	// 262 DIP_DEMO	EQU	10000000b	;demo mode
	// 282 WAY_REC_SIZE	EQU	TYPE WAYPOINT
	// 283 WP_SPEED	EQU	WP_TIME		;time / speed share same location
	// 285 WP_TYPE		EQU	00000001b	;1 = target (fly over waypoint)
	// 287 WP_LINK		EQU	00000010b	;1 = link back to waypoint (where WP_HERE = 1)
	// 289 WP_HERE		EQU	00000100b	;1 = link back to here label
	// 291 WP_TF		EQU	00001000b	;1 = terrain follow to waypoint
	// 293 WP_ILS		EQU	00010000b	;1 = fly ILS glide slope to waypoint (WP_TYPE = 1)
	// 295 WP_COORD	EQU	00100000b	;1 = calc speed to arrive at specified time
	// 297 WP_BREAK	EQU	01000000b	;1 = break to here to land label (WP_TYPE = 1)
	// 299 WP_VALID	EQU	10000000b	;1 = waypoint valid
	// 301 NUM_WP_LONG	EQU	16		;number of waypoints for long route
	// 302 NUM_WP_SHORT	EQU	9		;number of waypoints for short route
	// 311 WPACK_MODE_MASK	EQU	00001111b
	// 312 WPACK_NUM_MASK	EQU	11110000b
	// 313 WPACK_NULL	EQU	0		;no package
	// 314 WPACK_GPB1000	EQU	2		;GPB1000 (laydown)
	// 315 WPACK_RET1000	EQU	4		;RET1000 (laydown)
	// 316 WPACK_LGB1000	EQU	6		;LGB1000 (laser guided)
	// 317 WPACK_BL755	EQU	8		;BL755 (laydown)
	// 318 WPACK_JP233	EQU	10		;JP233 (laydown)
	// 319 WPACK_ALARM	EQU	12		;ALARM (indirect)
	// 320 WPACK_AGM	EQU	14		;AGM (ALARM direct)
	// 324 NUL_RADAR	EQU	0
	// 325 GND_RADAR	EQU	2
	// 326 AIR_RADAR	EQU	4
	// 344 AF_REC_SIZE	EQU	TYPE AIRFIELD
	// 345 NUM_AIRFIELDS	EQU	4
	// 349 DEAD		EQU	0
	// 350 ALLIED		EQU	1
	// 351 ENEMY		EQU	2
	// 355 DRONE_UNKNOWN	EQU	0
	// 356 DRONE_AIRCRAFT	EQU	2
	// 357 DRONE_HELICOPT	EQU	4
	// 358 DRONE_TRUCK	EQU	6
	// 359 DRONE_TRAIN	EQU	8
	// 368 NUM_DRONES	EQU	90
	// 372 _DRONE_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_TYPE
	// 374 _DRONE_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_SIDE
	// 376 _DRONE_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_EVENT
	// 393 VEH_REC_SIZE	EQU	TYPE VEHICLE
	// 394 NEXT_VEHICLE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_REC_SIZE
	// 398 _VEH_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DRONE
	// 400 _VEH_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_SIDE
	// 402 _VEH_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_EVENT
	// 404 _VEH_NODE_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_NODE_PTR
	// 406 _VEH_DIST	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST
	// 408 _VEH_DIST_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST_FINE
	// 410 _VEH_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_XFINE
	// 412 _VEH_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_YFINE
	// 414 _VEH_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_ZFINE
	// 428 CNVY_REC_SIZE	EQU	TYPE CONVOY
	// 429 TRUCK		EQU	0
	// 430 TRAIN		EQU	2
	// 431 NUM_TRUCKS	EQU	4
	// 432 NUM_TRAINS	EQU	8
	// 448 ROUTE_REC_SIZE	EQU	TYPE ROUTE_NODE
	// 449 NUM_ROUTE_NODES	EQU	32		;num route nodes per route
	// 453 RN_END		EQU	00000001b	;end of route (terminate here)
	// 454 RN_LINK		EQU	00000010b	;link back to first node
	// 456 RN_EVENT	EQU	00000100b	;stop here and wait for event
	// 457 RN_DELAY	EQU	00001000b	;stop here and wait for delay period
	// 459 RN_UPSLOPE	EQU	00010000b	;start bridge ramp ascent here
	// 460 RN_DNSLOPE	EQU	00100000b	;start bridge ramp descent here
	// 473 RED_OXY		EQU	0000000000000001b	;oxygen system pressure low
	// 474 RED_L_FIRE	EQU	0000000000000010b	;left engine fire
	// 475 RED_R_FIRE	EQU	0000000000000100b	;right engine fire
	// 476 RED_AUT		EQU	0000000000001000b	;auto-pilot disengage
	// 477 RED_REV		EQU	0000000000010000b	;thrust reversers failure
	// 478 RED_SPILS	EQU	0000000000100000b	;SPILS failure
	// 479 RED_UC		EQU	0000000001000000b	;gear damaged (IAS > 350kts)
	// 480 RED_FUEL	EQU	0000000010000000b	;fuel low
	// 481 RED_L_ENG	EQU	0000000100000000b	;left engine failure
	// 482 RED_R_ENG	EQU	0000001000000000b	;right engine failure
	// 484 RED_CANCEL	EQU	NOT(RED_AUT)
	// 485 AMB_CNFG	EQU	0000000000000001b	;config error
	// 486 AMB_ADC		EQU	0000000000000010b	;air data computer failure
	// 487 AMB_ECM		EQU	0000000000000100b	;ECM failure
	// 488 AMB_UC		EQU	0000000000001000b	;gear warning (IAS > 250kts)
	// 489 AMB_WB		EQU	0000000000010000b	;wheelbrakes failure
	// 490 AMB_AB		EQU	0000000000100000b	;airbrakes failure
	// 491 AMB_FLPS	EQU	0000000001000000b	;flaps failure
	// 492 AMB_SWP		EQU	0000000010000000b	;sweep failure
	// 493 AMB_HUD		EQU	0000000100000000b	;HUD failure
	// 494 AMB_MFD1	EQU	0000001000000000b	;pilot's MFD failure
	// 495 AMB_MFD2	EQU	0000010000000000b	;navig's MFD failure
	// 496 AMB_L_TAB	EQU	0000100000000000b	;lh TAB failure
	// 497 AMB_R_TAB	EQU	0001000000000000b	;rh TAB failure
	// 498 AMB_RAD		EQU	0010000000000000b	;radar failure
	// 499 AMB_RWR		EQU	0100000000000000b	;RWR failure
	// 501 AMB_CANCEL	EQU	NOT(AMB_CNFG+AMB_UC)
	// 545 AC_REC_SIZE	EQU	TYPE AIRCRAFT
	// 546 AC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 550 _AC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE
	// 552 _AC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SIDE
	// 554 _AC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT
	// 556 _AC_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TYPE
	// 558 _AC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DELAY
	// 560 _AC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE_NUM
	// 562 _AC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT_NUM
	// 564 _AC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_CTRL_MODE
	// 566 _AC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WP_PTR
	// 568 _AC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_XFINE
	// 570 _AC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_YFINE
	// 572 _AC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ZFINE
	// 574 _AC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_HFINE
	// 576 _AC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PFINE
	// 578 _AC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_RFINE
	// 580 _AC_VTAS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS
	// 582 _AC_VTAS_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS_FINE
	// 584 _AC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_LIFT_VCTR
	// 586 _AC_AB_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AB_DELAY
	// 588 _AC_SWEEP_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SWEEP_DELAY
	// 590 _AC_TAXI_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_PTR
	// 592 _AC_TAXI_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_XFT
	// 594 _AC_TAXI_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_YFT
	// 596 _AC_ARM_LOCK	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ARM_LOCK
	// 598 _AC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_FLAGS
	// 600 _AC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DECOY_TIMER
	// 602 _AC_AA_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AA_TIMER
	// 604 _AC_OPP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_OPP_PTR
	// 606 _AC_PREV_PERR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PERR
	// 608 _AC_PREV_PRATE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PRATE
	// 610 _AC_SHELLS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SHELLS
	// 612 _AC_MISSILES	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_MISSILES
	// 614 _AC_WPN_INT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WPN_INT
	// 616 _AC_EVADE_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVADE_TIMER
	// 618 _AC_GMAX_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_GMAX_TIMER
	// 622 AC_WP_NULL	EQU	0		;no action
	// 623 AC_WP_TAKEOFF	EQU	2		;takeoff
	// 624 AC_WP_AIRBORNE	EQU	4		;start airborne
	// 625 AC_WP_TAXI	EQU	6		;taxi off runway
	// 626 AC_WP_RESTART	EQU	8		;resupply then restart
	// 630 GR4_TORNADO	EQU	0
	// 631 MIG27_FLOGGER	EQU	2
	// 632 F3_TORNADO	EQU	4
	// 633 MIG31_FOXHOUND	EQU	6
	// 634 F15_EAGLE	EQU	8
	// 635 SU27_FLANKER	EQU	10
	// 636 F16_FALCON	EQU	12
	// 637 MIG29_FULCRUM	EQU	14
	// 638 A10_THUNDERBOLT	EQU	16
	// 639 SU25_FROGFOOT	EQU	18
	// 640 E3D_SENTRY	EQU	20
	// 641 IL76_MAINSTAY	EQU	22
	// 642 C130_HERCULES	EQU	24
	// 643 IL76_CANDID	EQU	26
	// 647 AFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 648 AFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 649 AFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 650 AFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 651 AFLG_EVADE_HI	EQU	0000000000010000b	;evade missile (pull up)
	// 652 AFLG_EVADE_LO	EQU	0000000000100000b	;evade missile (roll and pull)
	// 653 AFLG_GMAX	EQU	0000000001000000b	;hard manoeuvring
	// 654 AFLG_UPRIGHT	EQU	0000000010000000b	;fly upright to break
	// 655 AFLG_BREAK	EQU	0000000100000000b	;break to land
	// 684 HC_REC_SIZE	EQU	TYPE HELICOPTER
	// 685 HC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
	// 689 _HC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE
	// 691 _HC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_SIDE
	// 693 _HC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT
	// 695 _HC_TYPE       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_TYPE
	// 697 _HC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DELAY
	// 699 _HC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE_NUM
	// 701 _HC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT_NUM
	// 703 _HC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_CTRL_MODE
	// 705 _HC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_WP_PTR
	// 707 _HC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_XFINE
	// 709 _HC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_YFINE
	// 711 _HC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ZFINE
	// 713 _HC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_HFINE
	// 715 _HC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_PFINE
	// 717 _HC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_RFINE
	// 719 _HC_VTAS       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS
	// 721 _HC_VTAS_FINE  	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS_FINE
	// 723 _HC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_LIFT_VCTR
	// 725 _HC_ACCEL_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ACCEL_PFINE
	// 727 _HC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_FLAGS
	// 729 _HC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DECOY_TIMER
	// 733 HC_WP_NULL	EQU	0		;no action
	// 734 HC_WP_TAKEOFF	EQU	2		;takeoff
	// 735 HC_WP_AIRBORNE	EQU	4		;start airborne
	// 736 HC_WP_STOP	EQU	6		;stop
	// 737 HC_WP_RESTART	EQU	8		;resupply then restart
	// 741 AH64_APACHE	EQU	0
	// 742 MI24_HIND	EQU	2
	// 743 CH47_CHINOOK	EQU	4
	// 744 MI26_HALO	EQU	6
	// 748 HFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 749 HFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 750 HFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 751 HFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 756 OBJECT_LIGHTS	EQU	00000000b	;0 = night lighting off
	// 757 OBJECT_ENEMY	EQU	01000000b	;1 = enemy
	// 758 OBJECT_DEAD	EQU	10000000b	;1 = dead
	// 759 OBJECT_CLEAR	EQU	11000000b	;clear animation with mask
	// 765 WING_SWEEP_FWD	EQU	00000000b
	// 766 WING_SWEEP_MID	EQU	00000001b
	// 767 WING_SWEEP_BCK	EQU	00000010b
	// 768 WING_SWEEP_ALL	EQU	00000011b
	// 769 GEAR_DOWN	EQU	00000100b
	// 770 REHEAT_L_ENG	EQU	00001000b
	// 771 REHEAT_R_ENG	EQU	00010000b
	// 772 REHEAT_ALL	EQU	00011000b
	// 773 AC_SPECIALS	EQU	00100000b
	// 779 ROTOR_POS1	EQU	00000000b
	// 780 ROTOR_POS2	EQU	00000001b
	// 781 ROTOR_POS3	EQU	00000010b
	// 782 ROTOR_ALL	EQU	00000011b
	// 788 HEADLAMPS	EQU	00000001b
	// 792 NULL_WEAPON	EQU	-1
	// 794 GPB1000		EQU	0		;1000lb slick bomb
	// 795 RET1000		EQU	2		;1000lb retarded bomb
	// 796 LGB1000		EQU	4		;1000lb laser guided bomb (Paveway II)
	// 797 BL755		EQU	6		;cluster bomb
	// 798 JP233		EQU	8		;JP233
	// 799 ALARM		EQU	10		;ALARM
	// 801 CANNON		EQU	12		;cannon
	// 802 SIDEWINDER	EQU	14		;Sidewinder (AIM-9L)
	// 803 SKYFLASH	EQU	16		;active Sky Flash (ADV only)
	// 805 PATRIOT		EQU	18		;radar guided SAM
	// 806 GECKO		EQU	20		;IR guided SAM
	// 808 CHAFF		EQU	22
	// 809 FLARE		EQU	24
	// 813 EXT_GPB1000   	EQU	0		;1000lb slick bomb
	// 814 EXT_RET1000   	EQU	2		;1000lb retarded bomb
	// 815 EXT_LGB1000   	EQU	4		;1000lb laser guided bomb (Paveway II)
	// 816 EXT_BL755     	EQU	6		;cluster bomb
	// 817 EXT_JP233     	EQU	8		;JP233
	// 818 EXT_ALARM     	EQU	10		;ALARM
	// 819 EXT_SIDEWINDER	EQU	12		;Sidewinder (AIM-9L)
	// 820 EXT_SKYFLASH	EQU	14		;active Sky Flash (ADV only)
	// 821 EXT_BOZ100    	EQU	16		;chaff / flare dispenser (IDS / ECR only)
	// 822 EXT_SKYSHADOW	EQU	18		;ECM jamming pod (IDS / ECR only)
	// 823 EXT_DROPTANK	EQU	20		;external fuel tank
	// 827 MAX_CANNON	EQU	180
	// 828 MAX_CHAFF	EQU	120
	// 829 MAX_FLARES	EQU	28
	// 833 RETARDED_BOMB	EQU	00000001b	;0 = slick bomb, 1 = retarded bomb
	// 834 CASING_OFF	EQU	00000010b	;0 = casing on, 1 = casing off
	// 835 SPLASH1		EQU	00000001b	;0 = stage 2, 1 = stage 1
	// 836 AIRBURST1	EQU	5		;first stage of airburst animation
	// 837 FLAME		EQU	00000001b	;0 = no flame, 1 = flame
	// 838 CHUTE		EQU	00000010b	;0 = no chute, 1 = chute
	// 840 RHS_CANNON	EQU	00000001b	;rhs cannon
	// 841 LHS_CANNON	EQU	00000010b	;lhs cannon
	// 861 WPN_REC_SIZE	EQU	TYPE WEAPON
	// 862 NUM_WEAPONS	EQU	128
	// 863 WPN_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_REC_SIZE
	// 868 WPN_BOMB_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 869 WPN_BOMB_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 871 WPN_LGB_TGT	EQU	WPN_USERW1	;target waypoint ptr
	// 872 WPN_LGB_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 874 WPN_CAN_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 875 WPN_CAN_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 876 WPN_CAN_TIMER	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 877 WPN_CAN_SRC	EQU	WPN_USERW4	;source ptr (source of cannon fire)
	// 880 WPN_MISS_TGT	EQU	WPN_USERW1	;target ptr (-1 = target lost)
	// 881 WPN_MISS_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 882 WPN_MISS_ACCEL	EQU	WPN_USERW3	;acceleration (ft/sec/sec * 8)
	// 883 WPN_MISS_TIMER	EQU	WPN_USERW4	;burntime / lifetime (secs * 100)
	// 884 WPN_MISS_DECOY	EQU	WPN_USERW5	;decoy distraction timer (secs * 100)
	// 886 WPN_ALM_VEL	EQU	WPN_USERW1	;velocity (ft/sec * 8)
	// 887 WPN_ALM_ACCEL	EQU	WPN_USERW2	;acceleration (ft/sec/sec * 8)
	// 888 WPN_ALM_TIMER	EQU	WPN_USERW3	;burntime / lifetime (secs * 100)
	// 889 WPN_ALM_XSEC	EQU	WPN_USERW4	;xsec )
	// 890 WPN_ALM_YSEC	EQU	WPN_USERW5	;ysec )  target
	// 891 WPN_ALM_XFT	EQU	WPN_USERW6	;xft  ) position
	// 892 WPN_ALM_YFT	EQU	WPN_USERW7	;yft  )
	// 894 WPN_DECOY_HVEL	EQU	WPN_BOMB_HVEL	;horizontal velocity (ft/sec * 8)
	// 895 WPN_DECOY_VVEL	EQU	WPN_BOMB_VVEL	;vertical velocity (ft/sec * 8)
	// 896 WPN_DECOY_LIFE	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 900 WFLG_ALARM_MODE	EQU	0000000000000111b	;ALARM control mode (DO NOT CHANGE)
	// 901 WFLG_TORNADO	EQU	0000000000001000b	;Tornado weapon release
	// 902 WFLG_SPLASH	EQU	0000000000010000b	;draw weapon as splash
	// 903 WFLG_UNGUIDED	EQU	0000000000100000b	;LGB assumes GPB behaviour
	// 904 WFLG_BOMBLET	EQU	0000000001000000b	;BL755 bomblet
	// 905 WFLG_BURNOUT	EQU	0000000010000000b	;missile motor burnt out
	// 906 WFLG_IR_SEEK	EQU	0000000100000000b	;IR missile (else assume radar)
	// 907 WFLG_AIRBURST	EQU	0000001000000000b	;draw weapon as airburst
	// 908 WFLG_NO_RADAR	EQU	0000010000000000b	;no radar targets for ALARM
	// 909 WFLG_TLOCK	EQU	0000100000000000b	;weapon locked onto Tornado
	// 911 ALARM_DIRECT	EQU	0		;direct
	// 912 ALARM_KILL	EQU	1		;kill
	// 913 ALARM_GUIDE	EQU	2		;guide
	// 914 ALARM_ZOOM	EQU	3		;zoom climb
	// 915 ALARM_FREEFALL	EQU	4		;freefall
	// 916 ALARM_LOITER	EQU	5		;loiter
	// 917 ALARM_DIVE	EQU	6		;dive
	// 921 _WPN_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_TYPE
	// 923 _WPN_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_FLAGS
	// 925 _WPN_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_HFINE
	// 927 _WPN_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_PFINE
	// 929 _WPN_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_XFINE
	// 931 _WPN_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_YFINE
	// 933 _WPN_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ZFINE
	// 935 _WPN_USERW1	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW1
	// 937 _WPN_USERW2	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW2
	// 939 _WPN_USERW3	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW3
	// 941 _WPN_USERW4	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW4
	// 942 _WPN_BOMB_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_HVEL
	// 944 _WPN_BOMB_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_VVEL
	// 945 _WPN_LGB_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_TGT
	// 947 _WPN_LGB_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_VEL
	// 948 _WPN_CAN_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_HVEL
	// 950 _WPN_CAN_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_VVEL
	// 952 _WPN_CAN_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_TIMER
	// 953 _WPN_MISS_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TGT
	// 955 _WPN_MISS_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_VEL
	// 957 _WPN_MISS_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_ACCEL
	// 959 _WPN_MISS_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TIMER
	// 961 _WPN_MISS_DECOY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_DECOY
	// 962 _WPN_ALM_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_VEL
	// 964 _WPN_ALM_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_ACCEL
	// 966 _WPN_ALM_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_TIMER
	// 968 _WPN_ALM_XSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XSEC
	// 970 _WPN_ALM_YSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YSEC
	// 972 _WPN_ALM_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XFT
	// 974 _WPN_ALM_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YFT
	// 975 _WPN_DECOY_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_HVEL
	// 977 _WPN_DECOY_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_VVEL
	// 979 _WPN_DECOY_LIFE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_LIFE
	// 983 WPN_EFFECT1	EQU	0
	// 984 WPN_EFFECT2	EQU	1
	// 985 WPN_EFFECT3	EQU	2
	// 986 WPN_EFFECT4	EQU	3
	// 996 PACK_REC_SIZE	EQU	TYPE PACKAGE
	// 997 NUM_PACKAGES	EQU	3
	// 1001 ARM_OFF		EQU	0		;off
	// 1002 ARM_MANUAL	EQU	2		;manual bombing
	// 1003 ARM_LAYDOWN	EQU	4		;laydown bombing
	// 1004 ARM_LOFT	EQU	6		;loft bombing
	// 1005 ARM_LGB		EQU	8		;laser guided bomb
	// 1006 ARM_JP233	EQU	10		;JP233
	// 1007 ARM_ALARM_DIR	EQU	12		;ALARM (direct attack mode)
	// 1008 ARM_ALARM_IND	EQU	14		;ALARM (indirect attack mode)
	// 1009 ARM_CANNON	EQU	16		;cannon
	// 1010 ARM_SIDEWINDER	EQU	18		;Sidewinder
	// 1011 ARM_SKYFLASH	EQU	20		;Sky Flash
	// 1017 SHAKE_NOSE_DOWN	EQU	5		;nose wheel touchdown
	// 1018 SHAKE_LAND_GOOD	EQU	10		;good landing
	// 1019 SHAKE_LAND_HVY	EQU	15		;heavy landing
	// 1020 SHAKE_CANNON	EQU	45		;cannon fire
	// 1021 SHAKE_JP233	EQU	50		;JP233 release
	// 1022 SHAKE_DAMAGE	EQU	75		;hit by cannon fire / explosion damage
	// 1023 SHAKE_COLLIDE	EQU	100		;collide with object
	// 1025 SHAKE_BRAKE	EQU	240		;not moving, brakes on and reheat on
	// 1026 SHAKE_BUFFET	EQU	245		;buffet due to excess speed wrt wing sweep
	// 1027 SHAKE_OFF_HARD	EQU	250		;off hard surface (runway, taxiway etc.)
	// 1028 SHAKE_WHEELS_UP	EQU	255		;wheels up landing
	// 1032 LAND_GOOD	EQU	00000001b	;1 = good landing
	// 1033 LAND_HEAVY	EQU	00000010b	;1 = heavy landing
	// 1034 LAND_WHEELS_UP	EQU	00000100b	;1 = wheels up landing
	// 1035 LAND_DEAD_STICK	EQU	00001000b	;1 = dead stick landing
	// 1036 LAND_ROAD	EQU	00010000b	;1 = landed on road
	// 1037 LAND_ENEMY	EQU	00100000b	;1 = landed in enemy territory
	// 1038 LAND_STATIONARY	EQU	01000000b	;1 = stationary (when quit)
	// 1042 MINOR_DAMAGE	EQU	1
	// 1043 MAJOR_DAMAGE	EQU	2
	// 1044 TOTAL_DAMAGE	EQU	3
	// 1055 ARAD_RNG_LO	EQU	ARAD_RNG
	// 1056 ARAD_RNG_HI	EQU	ARAD_RNG+2
	// 1057 ARAD_REC_SIZE	EQU	TYPE ARAD_TRACK
	// 1058 NUM_TRACKS	EQU	40		;max number of aircraft radar can track
	// 1062 ARAD_MIN_RANGE	EQU	0		;short range (guns)
	// 1063 ARAD_MED_RANGE	EQU	2		;medium range (Sidewinder)
	// 1064 ARAD_MAX_RANGE	EQU	4		;long range (SkyFlash)
	// 1076 IMP_REC_SIZE	EQU	TYPE IMPACT
	// 1077 NUM_IMPACTS	EQU	128
	// 1081 SECT_ENEMY	EQU	10000000b	;1 = enemy occupied sector
	// 1082 SECT_SAM	EQU	01000000b	;1 = SAM in sector
	// 1083 SECT_AAA	EQU	00100000b	;1 = AAA in sector
	// 1084 SECT_EWR	EQU	00010000b	;1 = EWR in sector
	// 1085 SECT_EWR_NUM	EQU	00001111b	;enemy EWR number (0 .. 15)
	// 1091 E_EWR_FLOOR	EQU	00001111b	;enemy EWR floor
	// 1092 A_EWR_FLOOR	EQU	11110000b	;allied EWR floor
	// 1096 NUM_SAM_AAA	EQU	128
	// 1097 NUM_EWR		EQU	8
	// 1105 RAD_REC_SIZE	EQU	TYPE RADARS
	// 1109 EWR_GROUND	EQU	0		;ground object (SECDATA1)
	// 1110 EWR_MOBILE	EQU	2		;mobile object (MSECDATA1)
	// 1120 EWR_REC_SIZE	EQU	EWR
	// 1124 THREAT_SAM	EQU	0
	// 1125 THREAT_AAA	EQU	2
	// 1126 THREAT_EWR	EQU	4
	// 1127 THREAT_AC	EQU	6
	// 1128 THREAT_RAD_MSL	EQU	8
	// 1129 THREAT_IR_MSL	EQU	10
	// 1143 RWR_RNG_LO	EQU	RWR_RNG
	// 1144 RWR_RNG_HI	EQU	RWR_RNG+2
	// 1145 RWR_REC_SIZE	EQU	RWR
	// 1146 NUM_RWR_THREATS	EQU	16
	// 1150 RWR_SAM		EQU	00010000b
	// 1151 RWR_AAA		EQU	00001000b
	// 1152 RWR_EWR		EQU	00000100b
	// 1153 RWR_AC		EQU	00000010b
	// 1154 RWR_MSL		EQU	00000001b
	// 1159 DAM_HARD_MASK	EQU	00000011b	;(DO NOT CHANGE)
	// 1160 DAM_HARD1	EQU	00000000b	;soft
	// 1161 DAM_HARD2	EQU	00000001b
	// 1162 DAM_HARD3	EQU	00000010b
	// 1163 DAM_HARD4	EQU	00000011b	;hard
	// 1165 DAM_DEBRIS_MASK	EQU	00011100b	;(DO NOT CHANGE)
	// 1166 DAM_DEBRIS1	EQU	00000000b	;crater 1	) MOBILES CAN ONLY
	// 1167 DAM_DEBRIS2	EQU	00000100b	;crater 2	) USE THESE VALUES
	// 1168 DAM_DEBRIS3	EQU	00001000b	;crater 3
	// 1169 DAM_DEBRIS4	EQU	00001100b	;NS road bridge
	// 1170 DAM_DEBRIS5	EQU	00010000b	;EW road bridge
	// 1171 DAM_DEBRIS6	EQU	00010100b	;NS rail bridge
	// 1172 DAM_DEBRIS7	EQU	00011000b	;EW rail bridge
	// 1173 DAM_DEBRIS8	EQU	00011100b	;embankment crater
	// 1176 DAM_EXPLO_MASK	EQU	11111111b	;(DO NOT CHANGE)
	// 1177 DAM_EXPLO1	EQU	00000000b	;burn only
	// 1178 DAM_EXPLO2	EQU	00100000b	;crater size 1 * 2
	// 1179 DAM_EXPLO3	EQU	01000000b	;crater size 2 * 2
	// 1180 DAM_EXPLO4	EQU	01100000b	;crater size 2 * 4
	// 1182 DAM_INVALID	EQU	10000000b	;(DO NOT CHANGE)
	// 1203 COMMS_REC_SIZE	EQU	TYPE COMMS
	// 1204 COMMS_ZFT_LO	EQU	COMMS_ZFT
	// 1205 COMMS_ZFT_HI	EQU	COMMS_ZFT+2
	// 1210 I_FIRE_CANNON	EQU	00000001b	;I have fired a cannon shell
	// 1211 I_FIRE_AIM9L	EQU	00000010b	;I have launched a Sidewinder
	// 1212 I_FIRE_SKYFLASH	EQU	00000100b	;I have launched a Sky Flash
	// 1213 I_REL_CHAFF	EQU	00001000b	;I have released chaff
	// 1214 I_REL_FLARE	EQU	00010000b	;I have released flare
	// 1215 I_EMIT_RADAR	EQU	00100000b	;I am emitting radar
	// 1216 I_EMIT_ECM	EQU	01000000b	;I am emitting ECM
	// 1217 I_ILLUM_YOU	EQU	10000000b	;I am illuminating you (on radar)
	// 1219 I_PAUSED	EQU	00000001b	;I have paused
	// 1220 I_RESUMED	EQU	00000010b	;I have resumed
	// 1222 I_NO_WEAPONS	EQU	00000001b	;I have no weapons
	// 1223 I_KILLED	EQU	00000010b	;I have been destroyed
	// 1224 I_EJECTED	EQU	00000100b	;I have ejected
	// 1225 I_QUIT		EQU	00001000b	;I have quit
	// 1226 I_KILLED_YOU	EQU	00010000b	;I have destroyed you
	// 1235 RDAM_REC_SIZE	EQU	TYPE RUNWAY_DAMAGE
	// 1236 NUM_RUNWAYS	EQU	8
	// 0 ;-------
	// 0 ;* flags
	// 0 ;-------
	// 0 ;1 = sound on
	// 0 ;1 = engine sound on
	// 0 ;1 = installed
	// 0 ;1 = normalised
	// 0 ;1 = fault
	// 0 ;-----------
	// 0 ;* temp data
	// 0 ;-----------
	// 0 ;----------------
	// 0 ;* sound channels
	// 0 ;----------------
	// 0 ;0 = free, 1 = low, 255 = high
	// 0 ;0 = free, 1 = low, 255 = high
	// 0 ;0 = free, 1 = low, 255 = high
	// 0 ;secs * 50
	// 0 ;secs * 50
	// 0 ;secs * 50
	// 0 ;---------------------
	// 0 ;* sound channel flags
	// 0 ;---------------------
	// 1458 SFLG_LOOP	EQU	00000001b	;looping sound (stop when timer reaches zero)
	// 0 ;looping sound (stop when timer reaches zero)
	// 0 ;-----------------------
	// 0 ;* sound driver overlays
	// 0 ;-----------------------
	// 0 ;* file names
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;* file sizes
	// 1473 FSIZE_SPEAKER	EQU	2046			;SND_SPEAKER
	// 0 ;SND_SPEAKER
	// 1474 FSIZE_SBLASTER	EQU	24832			;SND_SBLASTER
	// 0 ;SND_SBLASTER
	// 1475 FSIZE_ADLIB	EQU	4424			;SND_ADLIB
	// 0 ;SND_ADLIB
	// 1476 FSIZE_ROLAND	EQU	7492			;SND_ROLAND
	// 0 ;SND_ROLAND
	// 0 ;* file paragraph sizes (16 byte units)
	// 1479 PSIZE_SPEAKER	EQU	(FSIZE_SPEAKER/16)+1 	;SND_SPEAKER
	// 0 ;SND_SPEAKER
	// 1480 PSIZE_SBLASTER	EQU	(FSIZE_SBLASTER/16)+1	;SND_SBLASTER
	// 0 ;SND_SBLASTER
	// 1481 PSIZE_ADLIB	EQU	(FSIZE_ADLIB/16)+1   	;SND_ADLIB
	// 0 ;SND_ADLIB
	// 1482 PSIZE_ROLAND	EQU	(FSIZE_ROLAND/16)+1  	;SND_ROLAND
	// 0 ;SND_ROLAND
	// 0 ;* sound driver segments
	// 0 ;------------------------
	// 0 ;* sound routine switches (wrt SoundCard)
	// 0 ;------------------------
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;SND_NULL
	// 0 ;SND_SPEAKER
	// 0 ;SND_SBLASTER
	// 0 ;SND_ADLIB
	// 0 ;SND_ROLAND
	// 0 ;-----------------
	// 0 ;* speaker equates
	// 0 ;-----------------
	// 0 ;* procedure codes
	// 1587 SPKR_NORM	EQU	002h		;normalise
	// 0 ;normalise
	// 1588 SPKR_REFRESH	EQU	001h		;refresh
	// 0 ;refresh
	// 1589 SPKR_FXON1	EQU	004h		;start effect (ch1)
	// 0 ;start effect (ch1)
	// 1590 SPKR_FXOFF1	EQU	005h		;stop effect (ch1)
	// 0 ;stop effect (ch1)
	// 1591 SPKR_REVS1	EQU	007h		;set engine revs (ch1) (0 .. 255 min)
	// 0 ;set engine revs (ch1) (0 .. 255 min)
	// 0 ;* effect codes
	// 1594 SPKR_FX_INT_ENG	EQU	000h		;internal engine
	// 0 ;internal engine
	// 1595 SPKR_FX_EXT_ENG	EQU	001h		;external engine
	// 0 ;external engine
	// 1596 SPKR_FX_ATTN	EQU	00dh		;attention getters
	// 0 ;attention getters
	// 1597 SPKR_FX_RWR	EQU	00ch		;RWR alert
	// 0 ;RWR alert
	// 1598 SPKR_FX_CANNON	EQU	008h		;cannon
	// 0 ;cannon
	// 1599 SPKR_FX_EXPLO1	EQU	003h		;explosion 1
	// 0 ;explosion 1
	// 1600 SPKR_FX_EXPLO2	EQU	004h		;explosion 2
	// 0 ;explosion 2
	// 1601 SPKR_FX_EXPLO3	EQU	002h		;explosion 3
	// 0 ;explosion 3
	// 1602 SPKR_FX_LAUNCH	EQU	007h		;missile launch
	// 0 ;missile launch
	// 1603 SPKR_FX_SCREECH	EQU	00ah		;wheel screech
	// 0 ;wheel screech
	// 1604 SPKR_FX_DECOY	EQU	005h		;chaff / flare
	// 0 ;chaff / flare
	// 1605 SPKR_FX_MDOT	EQU	013h		;Morse dot
	// 0 ;Morse dot
	// 1606 SPKR_FX_MDASH	EQU	012h		;Morse dash
	// 0 ;Morse dash
	// 1607 SPKR_FX_GEAR	EQU	010h		;gear up / down
	// 0 ;gear up / down
	// 1608 SPKR_FX_GROWL	EQU	00bh		;lock on growl
	// 0 ;lock on growl
	// 1609 SPKR_FX_RUMBLE	EQU	009h		;rumble
	// 0 ;rumble
	// 0 ;* sound priorities (each effect must have a unique priority (identifer))
	// 1612 SPKR_PR_LAUNCH	EQU	255		;missile launch
	// 0 ;missile launch
	// 1613 SPKR_PR_ATTN	EQU	250		;attention getters
	// 0 ;attention getters
	// 1614 SPKR_PR_RWR	EQU	240		;RWR alert
	// 0 ;RWR alert
	// 1615 SPKR_PR_CANNON	EQU	210		;cannon
	// 0 ;cannon
	// 1616 SPKR_PR_EXPLO1	EQU	200		;explosion 1
	// 0 ;explosion 1
	// 1617 SPKR_PR_EXPLO2	EQU	190		;explosion 2 - 190
	// 0 ;explosion 2 - 190
	// 1618 SPKR_PR_EXPLO3	EQU	180		;explosion 3 - 180
	// 0 ;explosion 3 - 180
	// 1619 SPKR_PR_SCREECH	EQU	150		;wheel screech
	// 0 ;wheel screech
	// 1620 SPKR_PR_DECOY	EQU	125		;chaff / flare
	// 0 ;chaff / flare
	// 1621 SPKR_PR_MDOT	EQU	100		;Morse dot
	// 0 ;Morse dot
	// 1622 SPKR_PR_MDASH	EQU	99		;Morse dash
	// 0 ;Morse dash
	// 1623 SPKR_PR_GEAR	EQU	80		;gear up / down
	// 0 ;gear up / down
	// 1624 SPKR_PR_GROWL	EQU	5		;lock on growl
	// 0 ;lock on growl
	// 1625 SPKR_PR_RUMBLE	EQU	1		;rumble
	// 0 ;rumble
	// 0 ;* sound flags
	// 1628 SPKR_FL_ATTN	EQU	SFLG_LOOP	;attention getters
	// 0 ;attention getters
	// 1629 SPKR_FL_RWR	EQU	SFLG_LOOP	;RWR alert
	// 0 ;RWR alert
	// 1630 SPKR_FL_CANNON	EQU	0		;cannon
	// 0 ;cannon
	// 1631 SPKR_FL_EXPLO1	EQU	0		;explosion 1
	// 0 ;explosion 1
	// 1632 SPKR_FL_EXPLO2	EQU	0		;explosion 2
	// 0 ;explosion 2
	// 1633 SPKR_FL_EXPLO3	EQU	0		;explosion 3
	// 0 ;explosion 3
	// 1634 SPKR_FL_LAUNCH	EQU	0		;missile launch
	// 0 ;missile launch
	// 1635 SPKR_FL_SCREECH	EQU	0		;wheel screech
	// 0 ;wheel screech
	// 1636 SPKR_FL_DECOY	EQU	0		;chaff / flare
	// 0 ;chaff / flare
	// 1637 SPKR_FL_MDOT	EQU	0		;Morse dot
	// 0 ;Morse dot
	// 1638 SPKR_FL_MDASH	EQU	0		;Morse dash
	// 0 ;Morse dash
	// 1639 SPKR_FL_GEAR	EQU	0		;gear up / down
	// 0 ;gear up / down
	// 1640 SPKR_FL_GROWL	EQU	0		;lock on growl
	// 0 ;lock on growl
	// 1641 SPKR_FL_RUMBLE	EQU	0		;rumble
	// 0 ;rumble
	// 0 ;* timer values (secs * 50) (-1 = continuous)
	// 1644 SPKR_TM_ATTN	EQU	150		;attention getters
	// 0 ;attention getters
	// 1645 SPKR_TM_RWR	EQU	50		;RWR alert
	// 0 ;RWR alert
	// 1646 SPKR_TM_CANNON	EQU	25		;cannon
	// 0 ;cannon
	// 1647 SPKR_TM_EXPLO1	EQU	50		;explosion 1
	// 0 ;explosion 1
	// 1648 SPKR_TM_EXPLO2	EQU	50		;explosion 2
	// 0 ;explosion 2
	// 1649 SPKR_TM_EXPLO3	EQU	25		;explosion 3
	// 0 ;explosion 3
	// 1650 SPKR_TM_LAUNCH	EQU	10		;missile launch
	// 0 ;missile launch
	// 1651 SPKR_TM_SCREECH	EQU	8		;wheel screech
	// 0 ;wheel screech
	// 1652 SPKR_TM_DECOY	EQU	5		;chaff / flare
	// 0 ;chaff / flare
	// 1653 SPKR_TM_MDOT	EQU	5		;Morse dot
	// 0 ;Morse dot
	// 1654 SPKR_TM_MDASH	EQU	20		;Morse dash
	// 0 ;Morse dash
	// 1655 SPKR_TM_GEAR	EQU	40		;gear up / down
	// 0 ;gear up / down
	// 1656 SPKR_TM_GROWL	EQU	-1		;lock on growl
	// 0 ;lock on growl
	// 1657 SPKR_TM_RUMBLE	EQU	-1		;rumble
	// 0 ;rumble
	// 0 ;----------------------
	// 0 ;* SoundBlaster equates
	// 0 ;----------------------
	// 0 ;* procedure codes
	// 1664 BLST_INIT	EQU	005h		;initialize
	// 0 ;initialize
	// 1665 BLST_NORM	EQU	002h		;normalise
	// 0 ;normalise
	// 1666 BLST_FXON1	EQU	000h		;start effect (ch1)
	// 0 ;start effect (ch1)
	// 1667 BLST_FXOFF1	EQU	001h		;stop effect (ch1)
	// 0 ;stop effect (ch1)
	// 1668 BLST_REVS1	EQU	004h		;set engine revs (ch1) (0 .. 212 max)
	// 0 ;set engine revs (ch1) (0 .. 212 max)
	// 1669 BLST_FAULT	EQU	006h		;test for DSP fault
	// 0 ;test for DSP fault
	// 0 ;* effect codes
	// 1672 BLST_FX_INT_ENG	EQU	007h		;internal engine
	// 0 ;internal engine
	// 1673 BLST_FX_EXT_ENG	EQU	003h		;external engine
	// 0 ;external engine
	// 1674 BLST_FX_CANNON	EQU	000h		;cannon
	// 0 ;cannon
	// 1675 BLST_FX_EXPLO1	EQU	001h		;explosion 1
	// 0 ;explosion 1
	// 1676 BLST_FX_EXPLO2	EQU	002h		;explosion 2
	// 0 ;explosion 2
	// 1677 BLST_FX_EXPLO3	EQU	004h		;explosion 3
	// 0 ;explosion 3
	// 1678 BLST_FX_SCREECH	EQU	008h		;wheel screech
	// 0 ;wheel screech
	// 0 ;* sound priorities (each effect must have a unique priority (identifer))
	// 1681 BLST_PR_CANNON	EQU	210		;cannon
	// 0 ;cannon
	// 1682 BLST_PR_EXPLO1	EQU	200		;explosion 1
	// 0 ;explosion 1
	// 1683 BLST_PR_EXPLO2	EQU	190		;explosion 2
	// 0 ;explosion 2
	// 1684 BLST_PR_EXPLO3	EQU	180		;explosion 3
	// 0 ;explosion 3
	// 1685 BLST_PR_SCREECH	EQU	150		;wheel screech
	// 0 ;wheel screech
	// 0 ;* sound flags
	// 1688 BLST_FL_CANNON	EQU	0		;cannon
	// 0 ;cannon
	// 1689 BLST_FL_EXPLO1	EQU	0		;explosion 1
	// 0 ;explosion 1
	// 1690 BLST_FL_EXPLO2	EQU	0	 	;explosion 2
	// 0 ;explosion 2
	// 1691 BLST_FL_EXPLO3	EQU	0	 	;explosion 3
	// 0 ;explosion 3
	// 1692 BLST_FL_SCREECH	EQU	0	 	;wheel screech
	// 0 ;wheel screech
	// 0 ;* timer values (secs * 50) (-1 = continuous)
	// 1695 BLST_TM_CANNON	EQU	25		;cannon
	// 0 ;cannon
	// 1696 BLST_TM_EXPLO1	EQU	65		;explosion 1
	// 0 ;explosion 1
	// 1697 BLST_TM_EXPLO2	EQU	65		;explosion 2
	// 0 ;explosion 2
	// 1698 BLST_TM_EXPLO3	EQU	35		;explosion 3
	// 0 ;explosion 3
	// 1699 BLST_TM_SCREECH	EQU	8		;wheel screech
	// 0 ;wheel screech
	// 0 ;---------------
	// 0 ;* AdLib equates
	// 0 ;---------------
	// 0 ;* procedure codes
	// 1706 ADLB_INIT	EQU	014h		;initialize
	// 0 ;initialize
	// 1707 ADLB_NORM	EQU	002h		;normalise
	// 0 ;normalise
	// 1708 ADLB_REFRESH	EQU	001h		;refresh
	// 0 ;refresh
	// 1709 ADLB_FXON1	EQU	004h		;start effect (ch1)
	// 0 ;start effect (ch1)
	// 1710 ADLB_FXON2	EQU	005h		;start effect (ch2)
	// 0 ;start effect (ch2)
	// 1711 ADLB_FXOFF1	EQU	006h		;stop effect (ch1)
	// 0 ;stop effect (ch1)
	// 1712 ADLB_FXOFF2	EQU	007h		;stop effect (ch2)
	// 0 ;stop effect (ch2)
	// 1713 ADLB_REVS1	EQU	00ah		;set engine revs (ch1) (0 .. 255 max)
	// 0 ;set engine revs (ch1) (0 .. 255 max)
	// 1714 ADLB_REVS2	EQU	00bh		;set engine revs (ch2) (0 .. 255 max)
	// 0 ;set engine revs (ch2) (0 .. 255 max)
	// 1715 ADLB_VOL1	EQU	00eh		;set volume (ch1) (0 .. 63 max)
	// 0 ;set volume (ch1) (0 .. 63 max)
	// 1716 ADLB_VOL2	EQU	00fh		;set volume (ch2) (0 .. 63 max)
	// 0 ;set volume (ch2) (0 .. 63 max)
	// 0 ;* effect codes
	// 1719 ADLB_FX_INT_ENG	EQU	000h		;internal engine
	// 0 ;internal engine
	// 1720 ADLB_FX_EXT_ENG	EQU	001h		;external engine
	// 0 ;external engine
	// 1721 ADLB_FX_ATTN	EQU	00dh		;attention getters
	// 0 ;attention getters
	// 1722 ADLB_FX_RWR	EQU	00ch		;RWR alert
	// 0 ;RWR alert
	// 1723 ADLB_FX_CANNON	EQU	008h		;cannon
	// 0 ;cannon
	// 1724 ADLB_FX_EXPLO1	EQU	003h		;explosion 1
	// 0 ;explosion 1
	// 1725 ADLB_FX_EXPLO2	EQU	004h		;explosion 2
	// 0 ;explosion 2
	// 1726 ADLB_FX_EXPLO3	EQU	002h		;explosion 3
	// 0 ;explosion 3
	// 1727 ADLB_FX_LAUNCH	EQU	007h		;missile launch
	// 0 ;missile launch
	// 1728 ADLB_FX_SCREECH	EQU	00ah		;wheel screech
	// 0 ;wheel screech
	// 1729 ADLB_FX_DECOY	EQU	005h		;chaff / flare
	// 0 ;chaff / flare
	// 1730 ADLB_FX_MDOT	EQU	013h		;Morse dot
	// 0 ;Morse dot
	// 1731 ADLB_FX_MDASH	EQU	012h		;Morse dash
	// 0 ;Morse dash
	// 1732 ADLB_FX_GEAR	EQU	010h		;gear up / down
	// 0 ;gear up / down
	// 1733 ADLB_FX_GROWL	EQU	00bh		;lock on growl
	// 0 ;lock on growl
	// 1734 ADLB_FX_RUMBLE	EQU	009h		;rumble
	// 0 ;rumble
	// 0 ;* sound priorities (each effect must have a unique priority (identifer))
	// 1737 ADLB_PR_LAUNCH	EQU	255		;missile launch
	// 0 ;missile launch
	// 1738 ADLB_PR_ATTN	EQU	250		;attention getters
	// 0 ;attention getters
	// 1739 ADLB_PR_RWR	EQU	240		;RWR alert
	// 0 ;RWR alert
	// 1740 ADLB_PR_CANNON	EQU	210		;cannon
	// 0 ;cannon
	// 1741 ADLB_PR_EXPLO1	EQU	200		;explosion 1
	// 0 ;explosion 1
	// 1742 ADLB_PR_EXPLO2	EQU	190		;explosion 2
	// 0 ;explosion 2
	// 1743 ADLB_PR_EXPLO3	EQU	180		;explosion 3
	// 0 ;explosion 3
	// 1744 ADLB_PR_SCREECH	EQU	150		;wheel screech
	// 0 ;wheel screech
	// 1745 ADLB_PR_DECOY	EQU	125		;chaff / flare
	// 0 ;chaff / flare
	// 1746 ADLB_PR_MDOT	EQU	100		;Morse dot
	// 0 ;Morse dot
	// 1747 ADLB_PR_MDASH	EQU	99		;Morse dash
	// 0 ;Morse dash
	// 1748 ADLB_PR_GEAR	EQU	80		;gear up / down
	// 0 ;gear up / down
	// 1749 ADLB_PR_GROWL	EQU	5		;lock on growl
	// 0 ;lock on growl
	// 1750 ADLB_PR_RUMBLE	EQU	1		;rumble
	// 0 ;rumble
	// 0 ;* sound flags
	// 1753 ADLB_FL_ATTN	EQU	SFLG_LOOP	;attention getters
	// 0 ;attention getters
	// 1754 ADLB_FL_RWR	EQU	SFLG_LOOP	;RWR alert
	// 0 ;RWR alert
	// 1755 ADLB_FL_CANNON	EQU	0		;cannon
	// 0 ;cannon
	// 1756 ADLB_FL_EXPLO1	EQU	0		;explosion 1
	// 0 ;explosion 1
	// 1757 ADLB_FL_EXPLO2	EQU	0		;explosion 2
	// 0 ;explosion 2
	// 1758 ADLB_FL_EXPLO3	EQU	0		;explosion 3
	// 0 ;explosion 3
	// 1759 ADLB_FL_LAUNCH	EQU	0		;missile launch
	// 0 ;missile launch
	// 1760 ADLB_FL_SCREECH	EQU	0		;wheel screech
	// 0 ;wheel screech
	// 1761 ADLB_FL_DECOY	EQU	0		;chaff / flare
	// 0 ;chaff / flare
	// 1762 ADLB_FL_MDOT	EQU	0		;Morse dot
	// 0 ;Morse dot
	// 1763 ADLB_FL_MDASH	EQU	0		;Morse dash
	// 0 ;Morse dash
	// 1764 ADLB_FL_GEAR	EQU	0		;gear up / down
	// 0 ;gear up / down
	// 1765 ADLB_FL_GROWL	EQU	0		;lock on growl
	// 0 ;lock on growl
	// 1766 ADLB_FL_RUMBLE	EQU	0		;rumble
	// 0 ;rumble
	// 0 ;* timer values (secs * 50) (-1 = continuous)
	// 1769 ADLB_TM_ATTN	EQU	150		;attention getters
	// 0 ;attention getters
	// 1770 ADLB_TM_RWR	EQU	50		;RWR alert
	// 0 ;RWR alert
	// 1771 ADLB_TM_CANNON	EQU	25		;cannon
	// 0 ;cannon
	// 1772 ADLB_TM_EXPLO1	EQU	65		;explosion 1
	// 0 ;explosion 1
	// 1773 ADLB_TM_EXPLO2	EQU	65		;explosion 2
	// 0 ;explosion 2
	// 1774 ADLB_TM_EXPLO3	EQU	35		;explosion 3
	// 0 ;explosion 3
	// 1775 ADLB_TM_LAUNCH	EQU	40		;missile launch
	// 0 ;missile launch
	// 1776 ADLB_TM_SCREECH	EQU	8		;wheel screech
	// 0 ;wheel screech
	// 1777 ADLB_TM_DECOY	EQU	5		;chaff / flare
	// 0 ;chaff / flare
	// 1778 ADLB_TM_MDOT	EQU	5		;Morse dot
	// 0 ;Morse dot
	// 0 ;ADLB_TM_MDASH	EQU	20		;Morse dash
	// 1780 ADLB_TM_MDASH	EQU	-1		;Morse dash
	// 0 ;Morse dash
	// 1781 ADLB_TM_GEAR	EQU	75		;gear up / down
	// 0 ;gear up / down
	// 1782 ADLB_TM_GROWL	EQU	-1		;lock on growl
	// 0 ;lock on growl
	// 1783 ADLB_TM_RUMBLE	EQU	-1		;rumble
	// 0 ;rumble
	// 0 ;----------------
	// 0 ;* Roland equates
	// 0 ;----------------
	// 0 ;* procedure codes
	// 1790 RLND_INIT	EQU	014h		;initialize
	// 0 ;initialize
	// 1791 RLND_NORM	EQU	013h		;normalise
	// 0 ;normalise
	// 1792 RLND_REFRESH	EQU	001h		;refresh
	// 0 ;refresh
	// 1793 RLND_FXON1	EQU	004h		;start effect (ch1)
	// 0 ;start effect (ch1)
	// 1794 RLND_FXON2	EQU	005h		;start effect (ch2)
	// 0 ;start effect (ch2)
	// 1795 RLND_FXOFF1	EQU	006h		;stop effect (ch1)
	// 0 ;stop effect (ch1)
	// 1796 RLND_FXOFF2	EQU	007h		;stop effect (ch2)
	// 0 ;stop effect (ch2)
	// 1797 RLND_REVS1	EQU	00ah		;set engine revs (ch1) (0 .. 127 max)
	// 0 ;set engine revs (ch1) (0 .. 127 max)
	// 1798 RLND_REVS2	EQU	00bh		;set engine revs (ch2) (0 .. 127 max)
	// 0 ;set engine revs (ch2) (0 .. 127 max)
	// 1799 RLND_VOL1	EQU	00eh		;set volume (ch1) (0 .. 127 max)
	// 0 ;set volume (ch1) (0 .. 127 max)
	// 1800 RLND_VOL2	EQU	00fh		;set volume (ch2) (0 .. 127 max)
	// 0 ;set volume (ch2) (0 .. 127 max)
	// 0 ;* effect codes
	// 1803 RLND_FX_INT_ENG	EQU	000h		;internal engine
	// 0 ;internal engine
	// 1804 RLND_FX_EXT_ENG	EQU	001h		;external engine
	// 0 ;external engine
	// 1805 RLND_FX_ATTN	EQU	00dh		;attention getters
	// 0 ;attention getters
	// 1806 RLND_FX_RWR	EQU	00ch		;RWR alert
	// 0 ;RWR alert
	// 1807 RLND_FX_CANNON	EQU	008h		;cannon
	// 0 ;cannon
	// 1808 RLND_FX_EXPLO1	EQU	003h		;explosion 1
	// 0 ;explosion 1
	// 1809 RLND_FX_EXPLO2	EQU	004h		;explosion 2
	// 0 ;explosion 2
	// 1810 RLND_FX_EXPLO3	EQU	002h		;explosion 3
	// 0 ;explosion 3
	// 1811 RLND_FX_LAUNCH	EQU	007h		;missile launch
	// 0 ;missile launch
	// 1812 RLND_FX_SCREECH	EQU	00ah		;wheel screech
	// 0 ;wheel screech
	// 1813 RLND_FX_DECOY	EQU	005h		;chaff / flare
	// 0 ;chaff / flare
	// 1814 RLND_FX_MDOT	EQU	013h		;Morse dot
	// 0 ;Morse dot
	// 1815 RLND_FX_MDASH	EQU	012h		;Morse dash
	// 0 ;Morse dash
	// 1816 RLND_FX_GEAR	EQU	010h		;gear up / down
	// 0 ;gear up / down
	// 1817 RLND_FX_GROWL	EQU	00bh		;lock on growl
	// 0 ;lock on growl
	// 1818 RLND_FX_RUMBLE	EQU	009h		;rumble
	// 0 ;rumble
	// 0 ;* sound priorities (each effect must have a unique priority (identifer))
	// 1821 RLND_PR_LAUNCH	EQU	255		;missile launch
	// 0 ;missile launch
	// 1822 RLND_PR_ATTN	EQU	250		;attention getters
	// 0 ;attention getters
	// 1823 RLND_PR_RWR	EQU	240		;RWR alert
	// 0 ;RWR alert
	// 1824 RLND_PR_CANNON	EQU	210		;cannon
	// 0 ;cannon
	// 1825 RLND_PR_EXPLO1	EQU	200		;explosion 1
	// 0 ;explosion 1
	// 1826 RLND_PR_EXPLO2	EQU	190		;explosion 2
	// 0 ;explosion 2
	// 1827 RLND_PR_EXPLO3	EQU	180		;explosion 3
	// 0 ;explosion 3
	// 1828 RLND_PR_SCREECH	EQU	150		;wheel screech
	// 0 ;wheel screech
	// 1829 RLND_PR_DECOY	EQU	125		;chaff / flare
	// 0 ;chaff / flare
	// 1830 RLND_PR_MDOT	EQU	100		;Morse dot
	// 0 ;Morse dot
	// 1831 RLND_PR_MDASH	EQU	99		;Morse dash
	// 0 ;Morse dash
	// 1832 RLND_PR_GEAR	EQU	80		;gear up / down
	// 0 ;gear up / down
	// 1833 RLND_PR_GROWL	EQU	5		;lock on growl
	// 0 ;lock on growl
	// 1834 RLND_PR_RUMBLE	EQU	1		;rumble
	// 0 ;rumble
	// 0 ;* sound flags
	// 1837 RLND_FL_ATTN	EQU	SFLG_LOOP	;attention getters
	// 0 ;attention getters
	// 1838 RLND_FL_RWR	EQU	SFLG_LOOP	;RWR alert
	// 0 ;RWR alert
	// 1839 RLND_FL_CANNON	EQU	0		;cannon
	// 0 ;cannon
	// 1840 RLND_FL_EXPLO1	EQU	0		;explosion 1
	// 0 ;explosion 1
	// 1841 RLND_FL_EXPLO2	EQU	0		;explosion 2
	// 0 ;explosion 2
	// 1842 RLND_FL_EXPLO3	EQU	0		;explosion 3
	// 0 ;explosion 3
	// 1843 RLND_FL_LAUNCH	EQU	0		;missile launch
	// 0 ;missile launch
	// 1844 RLND_FL_SCREECH	EQU	0		;wheel screech
	// 0 ;wheel screech
	// 1845 RLND_FL_DECOY	EQU	0		;chaff / flare
	// 0 ;chaff / flare
	// 1846 RLND_FL_MDOT	EQU	0		;Morse dot
	// 0 ;Morse dot
	// 1847 RLND_FL_MDASH	EQU	0		;Morse dash
	// 0 ;Morse dash
	// 1848 RLND_FL_GEAR	EQU	0		;gear up / down
	// 0 ;gear up / down
	// 1849 RLND_FL_GROWL	EQU	0		;lock on growl
	// 0 ;lock on growl
	// 1850 RLND_FL_RUMBLE	EQU	0		;rumble
	// 0 ;rumble
	// 0 ;* timer values (secs * 50) (-1 = continuous)
	// 1853 RLND_TM_ATTN	EQU	150		;attention getters
	// 0 ;attention getters
	// 1854 RLND_TM_RWR	EQU	50		;RWR alert
	// 0 ;RWR alert
	// 1855 RLND_TM_CANNON	EQU	25		;cannon
	// 0 ;cannon
	// 1856 RLND_TM_EXPLO1	EQU	65		;explosion 1
	// 0 ;explosion 1
	// 1857 RLND_TM_EXPLO2	EQU	65		;explosion 2
	// 0 ;explosion 2
	// 1858 RLND_TM_EXPLO3	EQU	35		;explosion 3
	// 0 ;explosion 3
	// 1859 RLND_TM_LAUNCH	EQU	35		;missile launch
	// 0 ;missile launch
	// 1860 RLND_TM_SCREECH	EQU	8		;wheel screech
	// 0 ;wheel screech
	// 1861 RLND_TM_DECOY	EQU	5		;chaff / flare
	// 0 ;chaff / flare
	// 1862 RLND_TM_MDOT	EQU	5		;Morse dot
	// 0 ;Morse dot
	// 1863 RLND_TM_MDASH	EQU	20		;Morse dash
	// 0 ;Morse dash
	// 1864 RLND_TM_GEAR	EQU	75		;gear up / down
	// 0 ;gear up / down
	// 1865 RLND_TM_GROWL	EQU	-1		;lock on growl
	// 0 ;lock on growl
	// 1866 RLND_TM_RUMBLE	EQU	-1		;rumble
	// 0 ;rumble

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

