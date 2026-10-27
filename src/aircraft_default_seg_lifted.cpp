/* THIS IS GENERATED FILE */

        
#include "aircraft.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 204 IDS_TORNADO	EQU	0		;interdictor strike
	// 205 ADV_TORNADO	EQU	2		;air defence variant
	// 206 ECR_TORNADO	EQU	4		;electronic combat and reconnaissance
	// 210 CTRL_DEV_KBD1	EQU	0		;keyboard (self centring)
	// 211 CTRL_DEV_KBD2	EQU	2		;keyboard
	// 212 CTRL_DEV_JOY1	EQU	4		;single joystick
	// 213 CTRL_DEV_JOY2	EQU	6		;dual joysticks
	// 217 SND_NULL	EQU	0		;no sound card
	// 218 SND_SPEAKER	EQU	2		;internal speaker
	// 219 SND_SBLASTER	EQU	4		;SoundBlaster
	// 220 SND_ADLIB	EQU	6		;AdLib
	// 221 SND_ROLAND	EQU	8		;Roland LAPC1
	// 225 SHAKE_OPT_OFF	EQU	0		;shake effects off
	// 226 SHAKE_OPT_ON	EQU	1		;shake effects on
	// 230 SOUND_OPT_OFF	EQU	0		;sound off
	// 231 SOUND_OPT_ON	EQU	1		;sound on (less engine sound)
	// 232 SOUND_OPT_ENG	EQU	2		;sound on (with engine sound)
	// 236 VIEW_PILOT	EQU	0 		;pilot's panel view
	// 237 VIEW_LPILOT	EQU	2		;pilot's left view
	// 238 VIEW_RPILOT	EQU	4		;pilot's right view
	// 239 VIEW_NAVIG	EQU	6		;navigator's panel view
	// 240 VIEW_LNAVIG	EQU	8		;navigator's left view
	// 241 VIEW_RNAVIG	EQU	10		;navigator's right view
	// 242 VIEW_TRACKING	EQU	12		;tracking camera
	// 243 VIEW_SATELLITE	EQU	14		;satellite camera
	// 244 VIEW_MAP	EQU	16		;map view
	// 245 VIEW_DRONE	EQU	18		;drone view
	// 246 VIEW_SPECTATOR	EQU	20		;spectator view
	// 247 VIEW_REMOTE	EQU	22		;remote view
	// 248 VIEW_LOOKDOWN	EQU	24		;pilot's look down
	// 249 VIEW_LOOKUP	EQU	26		;pilot's look up
	// 250 VIEW_DEMO	EQU	28		;demo view
	// 251 VIEW_DESTROYED	EQU	30		;Tornado destroyed view
	// 252 VIEW_WEAPON	EQU	32		;weapon view
	// 253 VIEW_ZRK EQU 34         ;ZRK ROMB (SA-8) to Tornado view
	// 254 VIEW_ZSU1 EQU 36         ;ZSU-23-4 Shilka to Tornado view1
	// 255 VIEW_ZSU2 EQU 38         ;ZSU-23-4 Shilka to Tornado view2
	// 256 VIEW_ZRK_AAA EQU 40         ;ZSU-23-4 Shilka to Tornado view2
	// 260 PILOTPAN	EQU	0   	;pilot's front panel
	// 261 PSIDEPAN	EQU	2		;pilot's left and right side panel
	// 262 NAVIGPAN	EQU	4		;navigator's front panel
	// 263 NSIDEPAN	EQU	6		;navigator's left and right side panel
	// 264 EXTRNPAN	EQU	8		;external panel
	// 265 LOOKDOWN	EQU	10		;look down panel
	// 266 LOOKUP		EQU	12		;look up panel
	// 267 MAPPAN		EQU	14		;map panel
	// 271 CREW_PILOT	EQU	0		;pilot in control
	// 272 CREW_NAVIG	EQU	2		;navigator in control
	// 276 AUTO_OFF	EQU	0		;off (manual)
	// 277 AUTO_APPROACH	EQU	2		;approach (autoland)
	// 278 AUTO_TRACK	EQU	4		;track acquire (fly to next waypoint)
	// 279 AUTO_HOLD	EQU	6		;altitude and heading hold
	// 280 AUTO_TF		EQU	8		;terrain follow
	// 284 ALT_MANUAL	EQU	0
	// 285 ALT_APPROACH	EQU	2
	// 286 ALT_ACQUIRE	EQU	4
	// 287 ALT_TF		EQU	6
	// 291 HDG_MANUAL	EQU	0
	// 292 HDG_APPROACH	EQU	2
	// 293 HDG_ACQUIRE	EQU	4
	// 294 HDG_TRACK	EQU	6
	// 298 JET_NULL	EQU	0		;nothing
	// 299 JET_EXT_TANKS	EQU	1		;ext fuel tanks
	// 300 JET_EXT_STORES	EQU	2		;ext fuel tanks + ext stores
	// 301 JET_ALL		EQU	3		;ext fuel tanks + ext stores + int fuel
	// 305 DIE_QUIT	EQU	1		;quit game
	// 306 DIE_HYPOXIA	EQU	2		;lack of oxygen
	// 307 DIE_BREAK_UP	EQU	3		;break up due to buffeting
	// 308 DIE_CRASH_HILL	EQU	4		;crashed into hill
	// 309 DIE_CRASH_GND	EQU	5		;crashed into ground
	// 310 DIE_DITCHED	EQU	6		;ditched
	// 311 DIE_GND_SPD_HI	EQU	7		;crashed - ground speed too high
	// 312 DIE_SINK_HI	EQU	8		;crashed - sink rate too high
	// 313 DIE_ROLL_HI	EQU	9		;crashed - roll too high on landing
	// 314 DIE_NOSE_WHEEL	EQU	10		;crashed - nose wheel collapsed
	// 315 DIE_TAIL_SCRAPE	EQU	11		;crashed - tail scrape on landing
	// 316 DIE_COLLAPSE	EQU	12		;crashed - gear collapsed
	// 317 DIE_FIRE	EQU	13		;destroyed by fire
	// 318 DIE_EJECT	EQU	14		;ejected
	// 319 DIE_MISSILE	EQU	15		;shot down by air-to-air missile
	// 320 DIE_CANNON	EQU	16		;shot down by cannon fire
	// 321 DIE_SAM		EQU	17		;shot down by surface-to-air missile
	// 322 DIE_AAA		EQU	18		;shot down by anti-aircraft artillery
	// 323 DIE_GND_EXPLO	EQU	19		;destroyed by ground explosion
	// 324 DIE_AIR_EXPLO	EQU	20		;destroyed by air explosion
	// 325 DIE_HIT_GND_OBJ	EQU	21		;crashed into ground object
	// 326 DIE_HIT_MOB_OBJ	EQU	22		;crashed into mobile object
	// 327 DIE_2_PLYR_WIN	EQU	23		;two player win
	// 328 DIE_2_PLYR_DRAW	EQU	24		;two player draw
	// 329 DIE_2_PLYR_LOSE	EQU	25		;two player lose
	// 333 SYS_ERR_MOUSE	EQU	255		;mouse driver not present
	// 334 SYS_ERR_PANELS	EQU	254		;error occurred loading panel data
	// 335 SYS_ERR_RGB	EQU	253		;error occurred loading palette RGB data
	// 336 SYS_ERR_LD_GAME	EQU	252		;error occurred loading GAMEPLAY.IN
	// 337 SYS_ERR_SV_GAME	EQU	251		;error occurred saving GAMEPLAY.OUT
	// 338 SYS_ERR_LD_LYR	EQU	250		;error occurred loading LAYER.IN
	// 339 SYS_ERR_LD_OBJ	EQU	249		;error occurred loading OBSECDEF.IN
	// 340 SYS_ERR_SV_OBJ	EQU	248		;error occurred saving OBSECDEF.OUT
	// 341 SYS_ERR_LD_MOB	EQU	247		;error occurred loading MSECDEF.IN
	// 342 SYS_ERR_SV_MOB	EQU	246		;error occurred saving MSECDEF.OUT
	// 343 SYS_ERR_MAP_OK	EQU	245		;completed map test ok
	// 344 SYS_ERR_RESIZE	EQU	244		;error occurred resizing memory
	// 345 SYS_ERR_SMEM	EQU	243		;error occurred allocating memory for sound driver
	// 346 SYS_ERR_SDRVR	EQU	242		;error occurred loading sound driver
	// 347 SYS_ERR_SCARD	EQU	241		;sound card not present
	// 348 SYS_ERR_LD_PIC	EQU	240		;error occurred loading digitized picture file
	// 349 SYS_ERR_LD_PREV	EQU	239		;error occurred loading PREVIEW.BT2
	// 350 SYS_ERR_SV_IMP	EQU	238		;error occurred saving IMPACT.OUT
	// 351 SYS_ERR_LD_MISC	EQU	237		;error occurred loading MISCDATA.IN
	// 352 SYS_ERR_TIMEOUT	EQU	236		;global timeout (end of demo)
	// 353 SYS_ERR_SYNC_TO	EQU	235		;comms sync timeout / user abort
	// 354 SYS_ERR_MMEM	EQU	234		;error occurred allocating memory for music driver
	// 355 SYS_ERR_MDRVR	EQU	233		;error occurred loading music driver
	// 356 SYS_ERR_MCARD	EQU	232		;music card not present
	// 360 DIP_GLOC	EQU	00000001b	;blackout / redout
	// 361 DIP_HYPOXIA	EQU	00000010b	;lack of oxygen
	// 362 DIP_EJECT	EQU	00000100b	;eject
	// 363 DIP_DESTROYED	EQU	00001000b	;aircraft destroyed
	// 364 DIP_DEMO	EQU	10000000b	;demo mode
	// 384 WAY_REC_SIZE	EQU	TYPE WAYPOINT
	// 385 WP_SPEED	EQU	WP_TIME		;time / speed share same location
	// 387 WP_TYPE		EQU	00000001b	;1 = target (fly over waypoint)
	// 389 WP_LINK		EQU	00000010b	;1 = link back to waypoint (where WP_HERE = 1)
	// 391 WP_HERE		EQU	00000100b	;1 = link back to here label
	// 393 WP_TF		EQU	00001000b	;1 = terrain follow to waypoint
	// 395 WP_ILS		EQU	00010000b	;1 = fly ILS glide slope to waypoint (WP_TYPE = 1)
	// 397 WP_COORD	EQU	00100000b	;1 = calc speed to arrive at specified time
	// 399 WP_BREAK	EQU	01000000b	;1 = break to here to land label (WP_TYPE = 1)
	// 401 WP_VALID	EQU	10000000b	;1 = waypoint valid
	// 403 NUM_WP_LONG	EQU	16		;number of waypoints for long route
	// 404 NUM_WP_SHORT	EQU	9		;number of waypoints for short route
	// 413 WPACK_MODE_MASK	EQU	00001111b
	// 414 WPACK_NUM_MASK	EQU	11110000b
	// 415 WPACK_NULL	EQU	0		;no package
	// 416 WPACK_GPB1000	EQU	2		;GPB1000 (laydown)
	// 417 WPACK_RET1000	EQU	4		;RET1000 (laydown)
	// 418 WPACK_LGB1000	EQU	6		;LGB1000 (laser guided)
	// 419 WPACK_BL755	EQU	8		;BL755 (laydown)
	// 420 WPACK_JP233	EQU	10		;JP233 (laydown)
	// 421 WPACK_ALARM	EQU	12		;ALARM (indirect)
	// 422 WPACK_AGM	EQU	14		;AGM (ALARM direct)
	// 426 NUL_RADAR	EQU	0
	// 427 GND_RADAR	EQU	2
	// 428 AIR_RADAR	EQU	4
	// 446 AF_REC_SIZE	EQU	TYPE AIRFIELD
	// 447 NUM_AIRFIELDS	EQU	4
	// 451 DEAD		EQU	0
	// 452 ALLIED		EQU	1
	// 453 ENEMY		EQU	2
	// 457 DRONE_UNKNOWN	EQU	0
	// 458 DRONE_AIRCRAFT	EQU	2
	// 459 DRONE_HELICOPT	EQU	4
	// 460 DRONE_TRUCK	EQU	6
	// 461 DRONE_TRAIN	EQU	8
	// 470 NUM_DRONES	EQU	90
	// 474 _DRONE_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_TYPE
	// 476 _DRONE_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_SIDE
	// 478 _DRONE_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_EVENT
	// 495 VEH_REC_SIZE	EQU	TYPE VEHICLE
	// 496 NEXT_VEHICLE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_REC_SIZE
	// 500 _VEH_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DRONE
	// 502 _VEH_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_SIDE
	// 504 _VEH_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_EVENT
	// 506 _VEH_NODE_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_NODE_PTR
	// 508 _VEH_DIST	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST
	// 510 _VEH_DIST_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST_FINE
	// 512 _VEH_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_XFINE
	// 514 _VEH_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_YFINE
	// 516 _VEH_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_ZFINE
	// 530 CNVY_REC_SIZE	EQU	TYPE CONVOY
	// 531 TRUCK		EQU	0
	// 532 TRAIN		EQU	2
	// 533 NUM_TRUCKS	EQU	4
	// 534 NUM_TRAINS	EQU	8
	// 550 ROUTE_REC_SIZE	EQU	TYPE ROUTE_NODE
	// 551 NUM_ROUTE_NODES	EQU	32		;num route nodes per route
	// 555 RN_END		EQU	00000001b	;end of route (terminate here)
	// 556 RN_LINK		EQU	00000010b	;link back to first node
	// 558 RN_EVENT	EQU	00000100b	;stop here and wait for event
	// 559 RN_DELAY	EQU	00001000b	;stop here and wait for delay period
	// 561 RN_UPSLOPE	EQU	00010000b	;start bridge ramp ascent here
	// 562 RN_DNSLOPE	EQU	00100000b	;start bridge ramp descent here
	// 575 RED_OXY		EQU	0000000000000001b	;oxygen system pressure low
	// 576 RED_L_FIRE	EQU	0000000000000010b	;left engine fire
	// 577 RED_R_FIRE	EQU	0000000000000100b	;right engine fire
	// 578 RED_AUT		EQU	0000000000001000b	;auto-pilot disengage
	// 579 RED_REV		EQU	0000000000010000b	;thrust reversers failure
	// 580 RED_SPILS	EQU	0000000000100000b	;SPILS failure
	// 581 RED_UC		EQU	0000000001000000b	;gear damaged (IAS > 350kts)
	// 582 RED_FUEL	EQU	0000000010000000b	;fuel low
	// 583 RED_L_ENG	EQU	0000000100000000b	;left engine failure
	// 584 RED_R_ENG	EQU	0000001000000000b	;right engine failure
	// 586 RED_CANCEL	EQU	NOT(RED_AUT)
	// 587 AMB_CNFG	EQU	0000000000000001b	;config error
	// 588 AMB_ADC		EQU	0000000000000010b	;air data computer failure
	// 589 AMB_ECM		EQU	0000000000000100b	;ECM failure
	// 590 AMB_UC		EQU	0000000000001000b	;gear warning (IAS > 250kts)
	// 591 AMB_WB		EQU	0000000000010000b	;wheelbrakes failure
	// 592 AMB_AB		EQU	0000000000100000b	;airbrakes failure
	// 593 AMB_FLPS	EQU	0000000001000000b	;flaps failure
	// 594 AMB_SWP		EQU	0000000010000000b	;sweep failure
	// 595 AMB_HUD		EQU	0000000100000000b	;HUD failure
	// 596 AMB_MFD1	EQU	0000001000000000b	;pilot's MFD failure
	// 597 AMB_MFD2	EQU	0000010000000000b	;navig's MFD failure
	// 598 AMB_L_TAB	EQU	0000100000000000b	;lh TAB failure
	// 599 AMB_R_TAB	EQU	0001000000000000b	;rh TAB failure
	// 600 AMB_RAD		EQU	0010000000000000b	;radar failure
	// 601 AMB_RWR		EQU	0100000000000000b	;RWR failure
	// 603 AMB_CANCEL	EQU	NOT(AMB_CNFG+AMB_UC)
	// 647 AC_REC_SIZE	EQU	TYPE AIRCRAFT
	// 648 AC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 652 _AC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE
	// 654 _AC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SIDE
	// 656 _AC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT
	// 658 _AC_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TYPE
	// 660 _AC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DELAY
	// 662 _AC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE_NUM
	// 664 _AC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT_NUM
	// 666 _AC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_CTRL_MODE
	// 668 _AC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WP_PTR
	// 670 _AC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_XFINE
	// 672 _AC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_YFINE
	// 674 _AC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ZFINE
	// 676 _AC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_HFINE
	// 678 _AC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PFINE
	// 680 _AC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_RFINE
	// 682 _AC_VTAS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS
	// 684 _AC_VTAS_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS_FINE
	// 686 _AC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_LIFT_VCTR
	// 688 _AC_AB_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AB_DELAY
	// 690 _AC_SWEEP_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SWEEP_DELAY
	// 692 _AC_TAXI_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_PTR
	// 694 _AC_TAXI_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_XFT
	// 696 _AC_TAXI_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_YFT
	// 698 _AC_ARM_LOCK	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ARM_LOCK
	// 700 _AC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_FLAGS
	// 702 _AC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DECOY_TIMER
	// 704 _AC_AA_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AA_TIMER
	// 706 _AC_OPP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_OPP_PTR
	// 708 _AC_PREV_PERR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PERR
	// 710 _AC_PREV_PRATE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PRATE
	// 712 _AC_SHELLS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SHELLS
	// 714 _AC_MISSILES	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_MISSILES
	// 716 _AC_WPN_INT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WPN_INT
	// 718 _AC_EVADE_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVADE_TIMER
	// 720 _AC_GMAX_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_GMAX_TIMER
	// 724 AC_WP_NULL	EQU	0		;no action
	// 725 AC_WP_TAKEOFF	EQU	2		;takeoff
	// 726 AC_WP_AIRBORNE	EQU	4		;start airborne
	// 727 AC_WP_TAXI	EQU	6		;taxi off runway
	// 728 AC_WP_RESTART	EQU	8		;resupply then restart
	// 732 GR4_TORNADO	EQU	0
	// 733 MIG27_FLOGGER	EQU	2
	// 734 F3_TORNADO	EQU	4
	// 735 MIG31_FOXHOUND	EQU	6
	// 736 F15_EAGLE	EQU	8
	// 737 SU27_FLANKER	EQU	10
	// 738 F16_FALCON	EQU	12
	// 739 MIG29_FULCRUM	EQU	14
	// 740 A10_THUNDERBOLT	EQU	16
	// 741 SU25_FROGFOOT	EQU	18
	// 742 E3D_SENTRY	EQU	20
	// 743 IL76_MAINSTAY	EQU	22
	// 744 C130_HERCULES	EQU	24
	// 745 IL76_CANDID	EQU	26
	// 749 AFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 750 AFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 751 AFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 752 AFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 753 AFLG_EVADE_HI	EQU	0000000000010000b	;evade missile (pull up)
	// 754 AFLG_EVADE_LO	EQU	0000000000100000b	;evade missile (roll and pull)
	// 755 AFLG_GMAX	EQU	0000000001000000b	;hard manoeuvring
	// 756 AFLG_UPRIGHT	EQU	0000000010000000b	;fly upright to break
	// 757 AFLG_BREAK	EQU	0000000100000000b	;break to land
	// 786 HC_REC_SIZE	EQU	TYPE HELICOPTER
	// 787 HC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
	// 791 _HC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE
	// 793 _HC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_SIDE
	// 795 _HC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT
	// 797 _HC_TYPE       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_TYPE
	// 799 _HC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DELAY
	// 801 _HC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE_NUM
	// 803 _HC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT_NUM
	// 805 _HC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_CTRL_MODE
	// 807 _HC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_WP_PTR
	// 809 _HC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_XFINE
	// 811 _HC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_YFINE
	// 813 _HC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ZFINE
	// 815 _HC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_HFINE
	// 817 _HC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_PFINE
	// 819 _HC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_RFINE
	// 821 _HC_VTAS       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS
	// 823 _HC_VTAS_FINE  	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS_FINE
	// 825 _HC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_LIFT_VCTR
	// 827 _HC_ACCEL_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ACCEL_PFINE
	// 829 _HC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_FLAGS
	// 831 _HC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DECOY_TIMER
	// 835 HC_WP_NULL	EQU	0		;no action
	// 836 HC_WP_TAKEOFF	EQU	2		;takeoff
	// 837 HC_WP_AIRBORNE	EQU	4		;start airborne
	// 838 HC_WP_STOP	EQU	6		;stop
	// 839 HC_WP_RESTART	EQU	8		;resupply then restart
	// 843 AH64_APACHE	EQU	0
	// 844 MI24_HIND	EQU	2
	// 845 CH47_CHINOOK	EQU	4
	// 846 MI26_HALO	EQU	6
	// 850 HFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 851 HFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 852 HFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 853 HFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 858 OBJECT_LIGHTS	EQU	00000000b	;0 = night lighting off
	// 859 OBJECT_ENEMY	EQU	01000000b	;1 = enemy
	// 860 OBJECT_DEAD	EQU	10000000b	;1 = dead
	// 861 OBJECT_CLEAR	EQU	11000000b	;clear animation with mask
	// 867 WING_SWEEP_FWD	EQU	00000000b
	// 868 WING_SWEEP_MID	EQU	00000001b
	// 869 WING_SWEEP_BCK	EQU	00000010b
	// 870 WING_SWEEP_ALL	EQU	00000011b
	// 871 GEAR_DOWN	EQU	00000100b
	// 872 REHEAT_L_ENG	EQU	00001000b
	// 873 REHEAT_R_ENG	EQU	00010000b
	// 874 REHEAT_ALL	EQU	00011000b
	// 875 AC_SPECIALS	EQU	00100000b
	// 881 ROTOR_POS1	EQU	00000000b
	// 882 ROTOR_POS2	EQU	00000001b
	// 883 ROTOR_POS3	EQU	00000010b
	// 884 ROTOR_ALL	EQU	00000011b
	// 890 HEADLAMPS	EQU	00000001b
	// 894 NULL_WEAPON	EQU	-1
	// 896 GPB1000		EQU	0		;1000lb slick bomb
	// 897 RET1000		EQU	2		;1000lb retarded bomb
	// 898 LGB1000		EQU	4		;1000lb laser guided bomb (Paveway II)
	// 899 BL755		EQU	6		;cluster bomb
	// 900 JP233		EQU	8		;JP233
	// 901 ALARM		EQU	10		;ALARM
	// 903 CANNON		EQU	12		;cannon
	// 904 SIDEWINDER	EQU	14		;Sidewinder (AIM-9L)
	// 905 SKYFLASH	EQU	16		;active Sky Flash (ADV only)
	// 907 PATRIOT		EQU	18		;radar guided SAM
	// 908 GECKO		EQU	20		;IR guided SAM
	// 910 CHAFF		EQU	22
	// 911 FLARE		EQU	24
	// 915 EXT_GPB1000   	EQU	0		;1000lb slick bomb
	// 916 EXT_RET1000   	EQU	2		;1000lb retarded bomb
	// 917 EXT_LGB1000   	EQU	4		;1000lb laser guided bomb (Paveway II)
	// 918 EXT_BL755     	EQU	6		;cluster bomb
	// 919 EXT_JP233     	EQU	8		;JP233
	// 920 EXT_ALARM     	EQU	10		;ALARM
	// 921 EXT_SIDEWINDER	EQU	12		;Sidewinder (AIM-9L)
	// 922 EXT_SKYFLASH	EQU	14		;active Sky Flash (ADV only)
	// 923 EXT_BOZ100    	EQU	16		;chaff / flare dispenser (IDS / ECR only)
	// 924 EXT_SKYSHADOW	EQU	18		;ECM jamming pod (IDS / ECR only)
	// 925 EXT_DROPTANK	EQU	20		;external fuel tank
	// 929 MAX_CANNON	EQU	180
	// 930 MAX_CHAFF	EQU	120
	// 931 MAX_FLARES	EQU	28
	// 935 RETARDED_BOMB	EQU	00000001b	;0 = slick bomb, 1 = retarded bomb
	// 936 CASING_OFF	EQU	00000010b	;0 = casing on, 1 = casing off
	// 937 SPLASH1		EQU	00000001b	;0 = stage 2, 1 = stage 1
	// 938 AIRBURST1	EQU	5		;first stage of airburst animation
	// 939 FLAME		EQU	00000001b	;0 = no flame, 1 = flame
	// 940 CHUTE		EQU	00000010b	;0 = no chute, 1 = chute
	// 942 RHS_CANNON	EQU	00000001b	;rhs cannon
	// 943 LHS_CANNON	EQU	00000010b	;lhs cannon
	// 963 WPN_REC_SIZE	EQU	TYPE WEAPON
	// 964 NUM_WEAPONS	EQU	128
	// 965 WPN_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_REC_SIZE
	// 970 WPN_BOMB_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 971 WPN_BOMB_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 973 WPN_LGB_TGT	EQU	WPN_USERW1	;target waypoint ptr
	// 974 WPN_LGB_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 976 WPN_CAN_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 977 WPN_CAN_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 978 WPN_CAN_TIMER	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 979 WPN_CAN_SRC	EQU	WPN_USERW4	;source ptr (source of cannon fire)
	// 982 WPN_MISS_TGT	EQU	WPN_USERW1	;target ptr (-1 = target lost)
	// 983 WPN_MISS_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 984 WPN_MISS_ACCEL	EQU	WPN_USERW3	;acceleration (ft/sec/sec * 8)
	// 985 WPN_MISS_TIMER	EQU	WPN_USERW4	;burntime / lifetime (secs * 100)
	// 986 WPN_MISS_DECOY	EQU	WPN_USERW5	;decoy distraction timer (secs * 100)
	// 988 WPN_ALM_VEL	EQU	WPN_USERW1	;velocity (ft/sec * 8)
	// 989 WPN_ALM_ACCEL	EQU	WPN_USERW2	;acceleration (ft/sec/sec * 8)
	// 990 WPN_ALM_TIMER	EQU	WPN_USERW3	;burntime / lifetime (secs * 100)
	// 991 WPN_ALM_XSEC	EQU	WPN_USERW4	;xsec )
	// 992 WPN_ALM_YSEC	EQU	WPN_USERW5	;ysec )  target
	// 993 WPN_ALM_XFT	EQU	WPN_USERW6	;xft  ) position
	// 994 WPN_ALM_YFT	EQU	WPN_USERW7	;yft  )
	// 996 WPN_DECOY_HVEL	EQU	WPN_BOMB_HVEL	;horizontal velocity (ft/sec * 8)
	// 997 WPN_DECOY_VVEL	EQU	WPN_BOMB_VVEL	;vertical velocity (ft/sec * 8)
	// 998 WPN_DECOY_LIFE	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 1002 WFLG_ALARM_MODE	EQU	0000000000000111b	;ALARM control mode (DO NOT CHANGE)
	// 1003 WFLG_TORNADO	EQU	0000000000001000b	;Tornado weapon release
	// 1004 WFLG_SPLASH	EQU	0000000000010000b	;draw weapon as splash
	// 1005 WFLG_UNGUIDED	EQU	0000000000100000b	;LGB assumes GPB behaviour
	// 1006 WFLG_BOMBLET	EQU	0000000001000000b	;BL755 bomblet
	// 1007 WFLG_BURNOUT	EQU	0000000010000000b	;missile motor burnt out
	// 1008 WFLG_IR_SEEK	EQU	0000000100000000b	;IR missile (else assume radar)
	// 1009 WFLG_AIRBURST	EQU	0000001000000000b	;draw weapon as airburst
	// 1010 WFLG_NO_RADAR	EQU	0000010000000000b	;no radar targets for ALARM
	// 1011 WFLG_TLOCK	EQU	0000100000000000b	;weapon locked onto Tornado
	// 1013 ALARM_DIRECT	EQU	0		;direct
	// 1014 ALARM_KILL	EQU	1		;kill
	// 1015 ALARM_GUIDE	EQU	2		;guide
	// 1016 ALARM_ZOOM	EQU	3		;zoom climb
	// 1017 ALARM_FREEFALL	EQU	4		;freefall
	// 1018 ALARM_LOITER	EQU	5		;loiter
	// 1019 ALARM_DIVE	EQU	6		;dive
	// 1023 _WPN_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_TYPE
	// 1025 _WPN_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_FLAGS
	// 1027 _WPN_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_HFINE
	// 1029 _WPN_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_PFINE
	// 1031 _WPN_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_XFINE
	// 1033 _WPN_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_YFINE
	// 1035 _WPN_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ZFINE
	// 1037 _WPN_USERW1	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW1
	// 1039 _WPN_USERW2	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW2
	// 1041 _WPN_USERW3	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW3
	// 1043 _WPN_USERW4	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW4
	// 1044 _WPN_BOMB_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_HVEL
	// 1046 _WPN_BOMB_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_VVEL
	// 1047 _WPN_LGB_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_TGT
	// 1049 _WPN_LGB_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_VEL
	// 1050 _WPN_CAN_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_HVEL
	// 1052 _WPN_CAN_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_VVEL
	// 1054 _WPN_CAN_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_TIMER
	// 1055 _WPN_MISS_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TGT
	// 1057 _WPN_MISS_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_VEL
	// 1059 _WPN_MISS_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_ACCEL
	// 1061 _WPN_MISS_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TIMER
	// 1063 _WPN_MISS_DECOY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_DECOY
	// 1064 _WPN_ALM_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_VEL
	// 1066 _WPN_ALM_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_ACCEL
	// 1068 _WPN_ALM_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_TIMER
	// 1070 _WPN_ALM_XSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XSEC
	// 1072 _WPN_ALM_YSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YSEC
	// 1074 _WPN_ALM_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XFT
	// 1076 _WPN_ALM_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YFT
	// 1077 _WPN_DECOY_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_HVEL
	// 1079 _WPN_DECOY_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_VVEL
	// 1081 _WPN_DECOY_LIFE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_LIFE
	// 1085 WPN_EFFECT1	EQU	0
	// 1086 WPN_EFFECT2	EQU	1
	// 1087 WPN_EFFECT3	EQU	2
	// 1088 WPN_EFFECT4	EQU	3
	// 1098 PACK_REC_SIZE	EQU	TYPE PACKAGE
	// 1099 NUM_PACKAGES	EQU	3
	// 1103 ARM_OFF		EQU	0		;off
	// 1104 ARM_MANUAL	EQU	2		;manual bombing
	// 1105 ARM_LAYDOWN	EQU	4		;laydown bombing
	// 1106 ARM_LOFT	EQU	6		;loft bombing
	// 1107 ARM_LGB		EQU	8		;laser guided bomb
	// 1108 ARM_JP233	EQU	10		;JP233
	// 1109 ARM_ALARM_DIR	EQU	12		;ALARM (direct attack mode)
	// 1110 ARM_ALARM_IND	EQU	14		;ALARM (indirect attack mode)
	// 1111 ARM_CANNON	EQU	16		;cannon
	// 1112 ARM_SIDEWINDER	EQU	18		;Sidewinder
	// 1113 ARM_SKYFLASH	EQU	20		;Sky Flash
	// 1119 SHAKE_NOSE_DOWN	EQU	5		;nose wheel touchdown
	// 1120 SHAKE_LAND_GOOD	EQU	10		;good landing
	// 1121 SHAKE_LAND_HVY	EQU	15		;heavy landing
	// 1122 SHAKE_CANNON	EQU	45		;cannon fire
	// 1123 SHAKE_JP233	EQU	50		;JP233 release
	// 1124 SHAKE_DAMAGE	EQU	75		;hit by cannon fire / explosion damage
	// 1125 SHAKE_COLLIDE	EQU	100		;collide with object
	// 1127 SHAKE_BRAKE	EQU	240		;not moving, brakes on and reheat on
	// 1128 SHAKE_BUFFET	EQU	245		;buffet due to excess speed wrt wing sweep
	// 1129 SHAKE_OFF_HARD	EQU	250		;off hard surface (runway, taxiway etc.)
	// 1130 SHAKE_WHEELS_UP	EQU	255		;wheels up landing
	// 1134 LAND_GOOD	EQU	00000001b	;1 = good landing
	// 1135 LAND_HEAVY	EQU	00000010b	;1 = heavy landing
	// 1136 LAND_WHEELS_UP	EQU	00000100b	;1 = wheels up landing
	// 1137 LAND_DEAD_STICK	EQU	00001000b	;1 = dead stick landing
	// 1138 LAND_ROAD	EQU	00010000b	;1 = landed on road
	// 1139 LAND_ENEMY	EQU	00100000b	;1 = landed in enemy territory
	// 1140 LAND_STATIONARY	EQU	01000000b	;1 = stationary (when quit)
	// 1144 MINOR_DAMAGE	EQU	1
	// 1145 MAJOR_DAMAGE	EQU	2
	// 1146 TOTAL_DAMAGE	EQU	3
	// 1157 ARAD_RNG_LO	EQU	ARAD_RNG
	// 1158 ARAD_RNG_HI	EQU	ARAD_RNG+2
	// 1159 ARAD_REC_SIZE	EQU	TYPE ARAD_TRACK
	// 1160 NUM_TRACKS	EQU	40		;max number of aircraft radar can track
	// 1164 ARAD_MIN_RANGE	EQU	0		;short range (guns)
	// 1165 ARAD_MED_RANGE	EQU	2		;medium range (Sidewinder)
	// 1166 ARAD_MAX_RANGE	EQU	4		;long range (SkyFlash)
	// 1178 IMP_REC_SIZE	EQU	TYPE IMPACT
	// 1179 NUM_IMPACTS	EQU	128
	// 1183 SECT_ENEMY	EQU	10000000b	;1 = enemy occupied sector
	// 1184 SECT_SAM	EQU	01000000b	;1 = SAM in sector
	// 1185 SECT_AAA	EQU	00100000b	;1 = AAA in sector
	// 1186 SECT_EWR	EQU	00010000b	;1 = EWR in sector
	// 1187 SECT_EWR_NUM	EQU	00001111b	;enemy EWR number (0 .. 15)
	// 1193 E_EWR_FLOOR	EQU	00001111b	;enemy EWR floor
	// 1194 A_EWR_FLOOR	EQU	11110000b	;allied EWR floor
	// 1198 NUM_SAM_AAA	EQU	128
	// 1199 NUM_EWR		EQU	8
	// 1207 RAD_REC_SIZE	EQU	TYPE RADARS
	// 1211 EWR_GROUND	EQU	0		;ground object (SECDATA1)
	// 1212 EWR_MOBILE	EQU	2		;mobile object (MSECDATA1)
	// 1222 EWR_REC_SIZE	EQU	EWR
	// 1226 THREAT_SAM	EQU	0
	// 1227 THREAT_AAA	EQU	2
	// 1228 THREAT_EWR	EQU	4
	// 1229 THREAT_AC	EQU	6
	// 1230 THREAT_RAD_MSL	EQU	8
	// 1231 THREAT_IR_MSL	EQU	10
	// 1245 RWR_RNG_LO	EQU	RWR_RNG
	// 1246 RWR_RNG_HI	EQU	RWR_RNG+2
	// 1247 RWR_REC_SIZE	EQU	RWR
	// 1248 NUM_RWR_THREATS	EQU	16
	// 1252 RWR_SAM		EQU	00010000b
	// 1253 RWR_AAA		EQU	00001000b
	// 1254 RWR_EWR		EQU	00000100b
	// 1255 RWR_AC		EQU	00000010b
	// 1256 RWR_MSL		EQU	00000001b
	// 1261 DAM_HARD_MASK	EQU	00000011b	;(DO NOT CHANGE)
	// 1262 DAM_HARD1	EQU	00000000b	;soft
	// 1263 DAM_HARD2	EQU	00000001b
	// 1264 DAM_HARD3	EQU	00000010b
	// 1265 DAM_HARD4	EQU	00000011b	;hard
	// 1267 DAM_DEBRIS_MASK	EQU	00011100b	;(DO NOT CHANGE)
	// 1268 DAM_DEBRIS1	EQU	00000000b	;crater 1	) MOBILES CAN ONLY
	// 1269 DAM_DEBRIS2	EQU	00000100b	;crater 2	) USE THESE VALUES
	// 1270 DAM_DEBRIS3	EQU	00001000b	;crater 3
	// 1271 DAM_DEBRIS4	EQU	00001100b	;NS road bridge
	// 1272 DAM_DEBRIS5	EQU	00010000b	;EW road bridge
	// 1273 DAM_DEBRIS6	EQU	00010100b	;NS rail bridge
	// 1274 DAM_DEBRIS7	EQU	00011000b	;EW rail bridge
	// 1275 DAM_DEBRIS8	EQU	00011100b	;embankment crater
	// 1278 DAM_EXPLO_MASK	EQU	11111111b	;(DO NOT CHANGE)
	// 1279 DAM_EXPLO1	EQU	00000000b	;burn only
	// 1280 DAM_EXPLO2	EQU	00100000b	;crater size 1 * 2
	// 1281 DAM_EXPLO3	EQU	01000000b	;crater size 2 * 2
	// 1282 DAM_EXPLO4	EQU	01100000b	;crater size 2 * 4
	// 1284 DAM_INVALID	EQU	10000000b	;(DO NOT CHANGE)
	// 1305 COMMS_REC_SIZE	EQU	TYPE COMMS
	// 1306 COMMS_ZFT_LO	EQU	COMMS_ZFT
	// 1307 COMMS_ZFT_HI	EQU	COMMS_ZFT+2
	// 1312 I_FIRE_CANNON	EQU	00000001b	;I have fired a cannon shell
	// 1313 I_FIRE_AIM9L	EQU	00000010b	;I have launched a Sidewinder
	// 1314 I_FIRE_SKYFLASH	EQU	00000100b	;I have launched a Sky Flash
	// 1315 I_REL_CHAFF	EQU	00001000b	;I have released chaff
	// 1316 I_REL_FLARE	EQU	00010000b	;I have released flare
	// 1317 I_EMIT_RADAR	EQU	00100000b	;I am emitting radar
	// 1318 I_EMIT_ECM	EQU	01000000b	;I am emitting ECM
	// 1319 I_ILLUM_YOU	EQU	10000000b	;I am illuminating you (on radar)
	// 1321 I_PAUSED	EQU	00000001b	;I have paused
	// 1322 I_RESUMED	EQU	00000010b	;I have resumed
	// 1324 I_NO_WEAPONS	EQU	00000001b	;I have no weapons
	// 1325 I_KILLED	EQU	00000010b	;I have been destroyed
	// 1326 I_EJECTED	EQU	00000100b	;I have ejected
	// 1327 I_QUIT		EQU	00001000b	;I have quit
	// 1328 I_KILLED_YOU	EQU	00010000b	;I have destroyed you
	// 1337 RDAM_REC_SIZE	EQU	TYPE RUNWAY_DAMAGE
	// 1338 NUM_RUNWAYS	EQU	8
	// 1361 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 1362 VP_ZFT_LO	EQU	VP_ZFT
	// 1363 VP_ZFT_HI	EQU	VP_ZFT+2
	// 1367 SEC_SCALE1 	EQU	0		;1/1 scale
	// 1368 SEC_SCALE2	EQU	2		;1/2 scale
	// 1369 SEC_SCALE8 	EQU	4		;1/8 scale
	// 1370 SEC_SCALE16 	EQU	6		;1/16 scale
	// 1374 INT_VIEWMODE	EQU	0		;internal views
	// 1375 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 1376 EXT_VIEWMODE	EQU	4		;external views
	// 1377 TV1_VIEWMODE	EQU	6		;TV1 display
	// 1378 TV2_VIEWMODE	EQU	8		;TV2 display
	// 1379 TV3_VIEWMODE	EQU	10		;TV3 display
	// 1380 TV4_VIEWMODE	EQU	12		;TV4 display
	// 1381 TV5_VIEWMODE	EQU	14		;TV5 display
	// 1382 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 1386 ROTATE_NULL	EQU	0		;no rotation
	// 1387 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 1388 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 1389 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 1390 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 1391 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 1392 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 1396 $MID		EQU	128
	// 1397 $0		EQU	0
	// 1398 $256		EQU	2
	// 1399 $512		EQU	4
	// 1400 $1024		EQU	8
	// 1401 $2048		EQU	16
	// 1402 $4096		EQU	32
	// 1403 $8192		EQU	64
	// 1412 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 1416 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 1417 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 1421 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 1422 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 1426 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 1430 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 1431 OBJ_SCALE2	EQU	2		;2/1 scale
	// 1432 OBJ_SCALE4	EQU	4		;4/1 scale
	// 1433 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 1434 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 1438 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 1439 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 1440 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 1441 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 1442 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 1446 @MID		EQU	64
	// 1447 @0		EQU	0
	// 1448 @16		EQU	2
	// 1449 @32		EQU	4
	// 1450 @48		EQU	6
	// 1451 @64		EQU	8
	// 1452 @80		EQU	10
	// 1453 @96		EQU	12
	// 1454 @112		EQU	14
	// 1455 @128		EQU	16
	// 1456 @192		EQU	24
	// 1457 @256		EQU	32
	// 1458 @384		EQU	48
	// 1459 @512		EQU	64
	// 1477 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 1479 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 1480 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 1482 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 1483 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 1484 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 1486 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 1488 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 1489 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 1490 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 1491 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 1492 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 1493 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 1495 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 1497 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 1498 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 1502 OTYPE_GROUND	EQU	0		;static ground objects
	// 1503 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 1504 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 1505 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 1506 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 1507 OTYPE_HILLFACE	EQU	10		;hill face
	// 1508 OTYPE_SMOKE	EQU	12		;smoke
	// 1522 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 1523 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 1527 NUM_OBJECTS	EQU	256		;max number of objects
	// 1528 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 1529 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 1530 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 1531 BEHIND_BIN	EQU	0		;behind bin index
	// 1532 IN_FRONT_BIN	EQU	2		;in front bin index
	// 1536 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 1537 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 1538 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 1539 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 1540 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 1541 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 1542 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 1552 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 1556 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 1557 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 1558 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 1559 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 1560 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 1561 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 1562 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 1563 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 1564 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 1565 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 1569 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 1575 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 1588 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 1599 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 1603 SURFACE_UNKNOWN	EQU	0
	// 1604 SURFACE_RUNWAY	EQU	2
	// 1605 SURFACE_TAXIWAY	EQU	4
	// 1606 SURFACE_HARD	EQU	6
	// 1607 SURFACE_ROAD	EQU	8
	// 1608 SURFACE_RAILWAY	EQU	10
	// 1609 SURFACE_RIVER	EQU	12
	// 1610 SURFACE_LAKE	EQU	14
	// 1614 NUM_CRATERS	EQU	128
	// 1615 CRATER_NULL	EQU	0
	// 1616 CRATER_SIZE1	EQU	1		;small
	// 1617 CRATER_SIZE2	EQU	2		;large
	// 1618 CRATER_HEAVE	EQU	3		;heave
	// 1619 CRATER_SHELL	EQU	4		;cannon shell
	// 1630 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 1634 NUM_SMOKE	EQU	128
	// 1636 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 1637 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 1638 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 1639 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 1640 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 1641 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 1642 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 1644 STYPE_NULL	EQU	0		;no smoke
	// 1645 STYPE_GND1	EQU	2		;ground smoke type 1
	// 1646 STYPE_AIR1	EQU	4		;air smoke type 1
	// 1662 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 1663 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 1664 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 1665 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 1725 RWY_REC_SIZE	EQU	TYPE RUNWAY
	// 1727 RWY_1836	EQU	0*8		;end 1 =  S end, end 2 =  N end
	// 1728 RWY_1331	EQU	1*8		;end 1 = SE end, end 2 = NW end
	// 1729 RWY_0927	EQU	2*8		;end 1 =  E end, end 2 =  W end
	// 1730 RWY_0422	EQU	3*8		;end 1 = NE end, end 2 = SW end
	// 1732 RWY_WIDTH256	EQU	0
	// 1733 RWY_WIDTH192	EQU	2
	// 1734 RWY_WIDTH128	EQU	4
	// 1751 ILS_REC_SIZE	EQU	TYPE ILS
	// 1755 ILS_N		EQU	1000b		;north approach ILS
	// 1756 ILS_S		EQU	0100b		;south approach ILS
	// 1757 ILS_E		EQU	0010b		;east approach ILS
	// 1758 ILS_W		EQU	0001b		;west approach ILS
	// 1767 TAXI_REC_SIZE	EQU	TYPE	TAXI
	// 1775 TNODE_REC_SIZE	EQU	TYPE	TNODE
	// 0 ;****************************************************************************
	// 0 ;* The AC_ suffix on some variables is necessary to differentiate them from *
	// 0 ;* similar global vars (in case they need to be made public for debugging). *
	// 0 ;****************************************************************************
	// 0 ;aircraft data / waypoint ptr
	// 0 ;aircraft performance data ptr
	// 0 ;-------------------------------------------------------
	// 0 ;* working copy of current aircraft's data and waypoints
	// 0 ;-------------------------------------------------------
	// 2003 AC_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 0 ;-----------
	// 0 ;* AutoRoute
	// 0 ;-----------
	// 0 ;heading to acquire (fine pdegs)
	// 0 ;altitude to acquire (ft)
	// 0 ;speed to acquire (ft/sec * 8)
	// 0 ;waypoint range
	// 0 ;waypoint bearing (pdeg)
	// 0 ;waypoint bearing (fine pdeg)
	// 0 ;--------------
	// 0 ;* AutoThrottle
	// 0 ;--------------
	// 0 ;min speed (ft/sec * 8)
	// 0 ;max speed (ft/sec * 8)
	// 0 ;min speed for level flight (ft/sec * 8)
	// 2027 FIXED_DECEL	EQU	10*8		;fixed decel rate (ft/sec/sec * 8)
	// 0 ;fixed decel rate (ft/sec/sec * 8)
	// 0 ;--------------
	// 0 ;* CalcTurnDist
	// 0 ;--------------
	// 0 ;angle vp(A) -> wp(B)
	// 0 ;angle wp(B) -> wp(C)
	// 0 ;angle vp(A) -> wp(B) -> wp(C)
	// 0 ;turning radius (0 .. 32,767ft)
	// 0 ;------------------------
	// 0 ;* aircraft control modes
	// 0 ;------------------------
	// 2040 CTRL_NULL	EQU	0		;do nothing
	// 0 ;do nothing
	// 2041 CTRL_TAKEOFF	EQU	2		;takeoff
	// 0 ;takeoff
	// 2042 CTRL_TRACK	EQU	4		;fly from waypoint to waypoint
	// 0 ;fly from waypoint to waypoint
	// 2043 CTRL_APPROACH	EQU	6		;final approach
	// 0 ;final approach
	// 2044 CTRL_TOUCHDOWN	EQU	8		;pitch flare and touchdown
	// 0 ;pitch flare and touchdown
	// 2045 CTRL_LANDING	EQU	10		;landing run
	// 0 ;landing run
	// 2046 CTRL_TAXI	EQU	12		;taxi off runway
	// 0 ;taxi off runway
	// 2047 CTRL_COMBAT	EQU	14		;combat
	// 0 ;combat
	// 0 ;CTRL_NULL
	// 0 ;CTRL_TAKEOFF
	// 0 ;CTRL_TRACK
	// 0 ;CTRL_APPROACH
	// 0 ;CTRL_TOUCHDOWN
	// 0 ;CTRL_LANDING
	// 0 ;CTRL_TAXI
	// 0 ;CTRL_COMBAT
	// 0 ;------------------------------------
	// 0 ;* air-to-ground weapon arming switch
	// 0 ;------------------------------------
	// 0 ;WPACK_NULL
	// 0 ;WPACK_GPB1000
	// 0 ;WPACK_RET1000
	// 0 ;WPACK_LGB1000
	// 0 ;WPACK_BL755
	// 0 ;WPACK_JP233
	// 0 ;WPACK_ALARM
	// 0 ;WPACK_AGM
	// 0 ;-------------
	// 0 ;* weapon data
	// 0 ;-------------
	// 0 ;* note: DEBUG_WEAPONS is not available for LGBs as the "Tornado release"
	// 0 ;*       flag checks that the weapon has guidance from the Tornado TIALD.
	// 2077 DEBUG_WEAPONS	EQU	0		;1 = view drone weapons (debugging)
	// 0 ;1 = view drone weapons (debugging)
	// 2078 WPN_CLR_DELAY	EQU	1*100		;weapon clearance delay (secs * 100)
	// 0 ;weapon clearance delay (secs * 100)
	// 2079 LGB_DELAY	EQU	2*100		;delay between LGB release (secs * 100)
	// 0 ;delay between LGB release (secs * 100)
	// 2080 ALARM_DELAY	EQU	1*100		;delay between ALARM launch (secs * 100)
	// 0 ;delay between ALARM launch (secs * 100)
	// 2081 AGM_DELAY	EQU	1*100		;delay between AGM launch (secs * 100)
	// 0 ;delay between AGM launch (secs * 100)
	// 0 ;------------------------------------
	// 0 ;* aircraft performance data pointers
	// 0 ;------------------------------------
	// 0 ;GR4_TORNADO
	// 0 ;MIG27_FLOGGER
	// 0 ;F3_TORNADO
	// 0 ;MIG31_FOXHOUND
	// 0 ;F15_EAGLE
	// 0 ;SU27_FLANKER
	// 0 ;F16_FALCON
	// 0 ;MIG29_FULCRUM
	// 0 ;A10_THUNDERBOLT
	// 0 ;SU25_FROGFOOT
	// 0 ;E3D_SENTRY
	// 0 ;IL76_MAINSTAY
	// 0 ;C130_HERCULES
	// 0 ;IL76_CANDID
	// 0 ;---------------------------
	// 0 ;* aircraft performance data
	// 0 ;---------------------------
	// 0 ;combat data ptr (-1 = no combat)
	// 0 ;--------------------
	// 0 ;* takeoff parameters
	// 0 ;--------------------
	// 0 ;* calc takeoff parameters given:-
	// 0 ;*
	// 0 ;* ThetaR = pitch angle (rotation) at takeoff (assume 12 degs all aircraft)
	// 0 ;* Vto = takeoff speed (ft/sec)
	// 0 ;* Dto = takeoff run (ft)
	// 0 ;*
	// 0 ;* acceleration (Accel) = (Vto * Vto) / (2 * Dto)
	// 0 ;*
	// 0 ;* rotation rate = ThetaR / tr
	// 0 ;*
	// 0 ;*    where tr = Vto / (8 * Accel) (rotation speed = Vto * 7 / 8)
	// 0 ;*
	// 0 ;* lift vector rate = Theta / tl
	// 0 ;*
	// 0 ;*    where tl = (Vtrim - Vto) / Accel
	// 0 ;*
	// 0 ;*    where manoeuvre speed (Vtrim) = 4 * Vto * tan(ThetaR) + Vto
	// 0 ;lift vector rate (fine pdegs / sec)
	// 2154 ROTATION_ANGLE	EQU	2185		;12degs (fine pdegs)
	// 0 ;12degs (fine pdegs)
	// 2155 DLY_AFTER_EVENT	EQU	30*100		;delay after event (1/100ths sec)
	// 0 ;delay after event (1/100ths sec)
	// 0 ;------------------------
	// 0 ;* takeoff run = 1,000ft
	// 0 ;* takeoff speed = 125kts
	// 0 ;------------------------
	// 0 ;------------------------
	// 0 ;* takeoff run = 2,000ft
	// 0 ;* takeoff speed = 150kts
	// 0 ;------------------------
	// 0 ;------------------------
	// 0 ;* takeoff run = 3,000ft
	// 0 ;* takeoff speed = 130kts
	// 0 ;------------------------
	// 0 ;-------------------
	// 0 ;* cruise parameters
	// 0 ;-------------------
	// 0 ;* note: Mach 1 at sea level = 1123ft/sec (660kts)
	// 0 ;*       Mach 1 at 36,000ft = 974ft/sec (573kts)
	// 0 ;*
	// 0 ;*       CRS_MXSPEED_SL < CRS_MXSPEED_36
	// 0 ;1 = heavy aircraft
	// 0 ;----------------------------------
	// 0 ;* ceiling = 50,000ft
	// 0 ;* max speed at sea level = 800kts
	// 0 ;* max speed at 36,000ft = Mach 2.2
	// 0 ;* acceleration = 10ft/sec/sec
	// 0 ;* light aircraft
	// 0 ;----------------------------------
	// 0 ;----------------------------------
	// 0 ;* ceiling = 60,000ft
	// 0 ;* max speed at sea level = 700kts
	// 0 ;* max speed at 36,000ft = Mach 2.2
	// 0 ;* acceleration = 20ft/sec/sec
	// 0 ;* light aircraft
	// 0 ;----------------------------------
	// 0 ;----------------------------------
	// 0 ;* ceiling = 22,000ft
	// 0 ;* max speed at sea level = 350kts
	// 0 ;* max speed at 36,000ft = 680kts (approx. 450kts at 22,000ft)
	// 0 ;* acceleration = 10ft/sec/sec
	// 0 ;* light aircraft
	// 0 ;----------------------------------
	// 0 ;----------------------------------
	// 0 ;* ceiling = 40,000ft
	// 0 ;* max speed at sea level = 250kts
	// 0 ;* max speed at 36,000ft = 450kts
	// 0 ;* acceleration = 5ft/sec/sec
	// 0 ;* heavy aircraft
	// 0 ;----------------------------------
	// 0 ;------------------------------------------
	// 0 ;* minimum true airspeed table wrt altitude (ft/sec * 8)
	// 0 ;------------------------------------------
	// 0 ;0ft
	// 0 ;1,024ft
	// 0 ;2,048ft
	// 0 ;3,072ft
	// 0 ;4,096ft
	// 0 ;5,120ft
	// 0 ;6,144ft
	// 0 ;7,168ft
	// 0 ;8,192ft
	// 0 ;9,216ft
	// 0 ;10,240ft
	// 0 ;11,264ft
	// 0 ;12,288ft
	// 0 ;13,312ft
	// 0 ;14,336ft
	// 0 ;15,360ft
	// 0 ;16,384ft
	// 0 ;17,408ft
	// 0 ;18,432ft
	// 0 ;19,456ft
	// 0 ;20,480ft
	// 0 ;21,504ft
	// 0 ;22,528ft
	// 0 ;23,552ft
	// 0 ;24,576ft
	// 0 ;25,600ft
	// 0 ;26,624ft
	// 0 ;27,648ft
	// 0 ;28,672ft
	// 0 ;29,696ft
	// 0 ;30,720ft
	// 0 ;31,744ft
	// 0 ;32,768ft
	// 0 ;33,792ft
	// 0 ;34,816ft
	// 0 ;35,840ft
	// 0 ;36,864ft
	// 0 ;37,888ft
	// 0 ;38,912ft
	// 0 ;39,936ft
	// 0 ;40,960ft
	// 0 ;41,984ft
	// 0 ;43,008ft
	// 0 ;44,032ft
	// 0 ;45,056ft
	// 0 ;46,080ft
	// 0 ;47,104ft
	// 0 ;48,128ft
	// 0 ;49,152ft
	// 0 ;50,176ft
	// 0 ;51,200ft
	// 0 ;52,224ft
	// 0 ;53,248ft
	// 0 ;54,272ft
	// 0 ;55,296ft
	// 0 ;56,320ft
	// 0 ;57,344ft
	// 0 ;58,368ft
	// 0 ;59,392ft
	// 0 ;60,416ft
	// 0 ;61,440ft
	// 0 ;62,464ft
	// 0 ;63,488ft
	// 0 ;64,512ft
	// 0 ;65,536ft
	// 0 ;--------------------
	// 0 ;* landing parameters
	// 0 ;--------------------
	// 0 ;* Assume all aircraft land at 130kts, therefore:-
	// 0 ;*
	// 0 ;*    decel = (130 * 1.7)^2 / 2 * landing run * 8 scaling
	// 0 ;deceleration (ft/sec/sec * 8)
	// 2310 LAND_PITCH_DN	EQU	8*128		;landing pitch down rate (fine pdegs / sec)
	// 0 ;landing pitch down rate (fine pdegs / sec)
	// 2311 RESUPPLY_DELAY	EQU	15*100		;time to resupply aircraft (1/100ths sec)
	// 0 ;time to resupply aircraft (1/100ths sec)
	// 0 ;-----------------------
	// 0 ;* landing run = 1,500ft
	// 0 ;-----------------------
	// 0 ;-----------------------
	// 0 ;* landing run = 2,000ft
	// 0 ;-----------------------
	// 0 ;-----------------------
	// 0 ;* landing run = 3,000ft
	// 0 ;-----------------------
	// 0 ;-------------------
	// 0 ;* combat parameters
	// 0 ;-------------------
	// 2331 MIN_GMAX	EQU	6*16		;keep g max >= 6g
	// 0 ;keep g max >= 6g
	// 0 ;acceleration (ft/sec/sec * 8)
	// 0 ;------------------------
	// 0 ;* F3 Tornado combat data
	// 0 ;------------------------
	// 0 ;-----------------------------
	// 0 ;* Mig-31 Foxhound combat data
	// 0 ;-----------------------------
	// 0 ;------------------------
	// 0 ;* F-15 Eagle combat data
	// 0 ;------------------------
	// 0 ;---------------------------
	// 0 ;* Su-27 Flanker combat data
	// 0 ;---------------------------
	// 0 ;-------------------------
	// 0 ;* F-16 Falcon combat data
	// 0 ;-------------------------
	// 0 ;----------------------------
	// 0 ;* Mig-29 Fulcrum combat data
	// 0 ;----------------------------
	// 0 ;------------------
	// 0 ;* track parameters
	// 0 ;------------------
	// 2374 AH_MAX_ROLL	EQU	85*128		;60 degs
	// 0 ;60 degs
	// 2375 AH_ROLL_RATE	EQU	64*128		;45 degs / sec
	// 0 ;45 degs / sec
	// 0 ;-----------
	// 0 ;* taxi data
	// 0 ;-----------
	// 0 ;temporary waypoint for taxiing
	// 2381 TAXI_SPEED_FAST	EQU	680		;50kts
	// 0 ;50kts
	// 2382 TAXI_SPEED_SLOW	EQU	204		;15kts
	// 0 ;15kts
	// 0 ;-------------
	// 0 ;* combat data
	// 0 ;-------------
	// 2387 COMBAT_FLOOR	EQU	200
	// 2388 COMBAT_CEILING	EQU	50000
	// 2389 GND_CHECK_ALT	EQU	10000
	// 2390 BREAK_ALT	EQU	5000
	// 0 ;vias used in division (100kts min)
	// 0 ;vtas used in division (100kts min)
	// 0 ;intercept point
	// 0 ; )
	// 0 ; ) transformed co-ords
	// 0 ; )
	// 0 ;max roll rate (fine pdegs/sec)
	// 0 ;max pitch rate (fine pdegs/sec)
	// 0 ;max g-force [*16]
	// 0 ;roll demand (fine pdegs)
	// 0 ;damped roll demand (fine pdegs)
	// 0 ;pitch rate (fine pdegs/sec)
	// 0 ;opponent speed (ft/sec * 8)
	// 0 ;-1 = no opponent
	// 0 ;interceptor response time (secs * 100)
	// 0 ;EWR exposure timer (secs * 100)
	// 0 ;forced break timer (secs * 100)
	// 2417 VERY_LOW	EQU	600		;(chosen so not too near TF alt)
	// 0 ;(chosen so not too near TF alt)
	// 0 ;(used to be an EQUate)
	// 0 ;enforced break flag

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

