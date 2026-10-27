/* THIS IS GENERATED FILE */

        
#include "helicops.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 115 IDS_TORNADO	EQU	0		;interdictor strike
	// 116 ADV_TORNADO	EQU	2		;air defence variant
	// 117 ECR_TORNADO	EQU	4		;electronic combat and reconnaissance
	// 121 CTRL_DEV_KBD1	EQU	0		;keyboard (self centring)
	// 122 CTRL_DEV_KBD2	EQU	2		;keyboard
	// 123 CTRL_DEV_JOY1	EQU	4		;single joystick
	// 124 CTRL_DEV_JOY2	EQU	6		;dual joysticks
	// 128 SND_NULL	EQU	0		;no sound card
	// 129 SND_SPEAKER	EQU	2		;internal speaker
	// 130 SND_SBLASTER	EQU	4		;SoundBlaster
	// 131 SND_ADLIB	EQU	6		;AdLib
	// 132 SND_ROLAND	EQU	8		;Roland LAPC1
	// 136 SHAKE_OPT_OFF	EQU	0		;shake effects off
	// 137 SHAKE_OPT_ON	EQU	1		;shake effects on
	// 141 SOUND_OPT_OFF	EQU	0		;sound off
	// 142 SOUND_OPT_ON	EQU	1		;sound on (less engine sound)
	// 143 SOUND_OPT_ENG	EQU	2		;sound on (with engine sound)
	// 147 VIEW_PILOT	EQU	0 		;pilot's panel view
	// 148 VIEW_LPILOT	EQU	2		;pilot's left view
	// 149 VIEW_RPILOT	EQU	4		;pilot's right view
	// 150 VIEW_NAVIG	EQU	6		;navigator's panel view
	// 151 VIEW_LNAVIG	EQU	8		;navigator's left view
	// 152 VIEW_RNAVIG	EQU	10		;navigator's right view
	// 153 VIEW_TRACKING	EQU	12		;tracking camera
	// 154 VIEW_SATELLITE	EQU	14		;satellite camera
	// 155 VIEW_MAP	EQU	16		;map view
	// 156 VIEW_DRONE	EQU	18		;drone view
	// 157 VIEW_SPECTATOR	EQU	20		;spectator view
	// 158 VIEW_REMOTE	EQU	22		;remote view
	// 159 VIEW_LOOKDOWN	EQU	24		;pilot's look down
	// 160 VIEW_LOOKUP	EQU	26		;pilot's look up
	// 161 VIEW_DEMO	EQU	28		;demo view
	// 162 VIEW_DESTROYED	EQU	30		;Tornado destroyed view
	// 163 VIEW_WEAPON	EQU	32		;weapon view
	// 164 VIEW_ZRK EQU 34         ;ZRK ROMB (SA-8) to Tornado view
	// 165 VIEW_ZSU1 EQU 36         ;ZSU-23-4 Shilka to Tornado view1
	// 166 VIEW_ZSU2 EQU 38         ;ZSU-23-4 Shilka to Tornado view2
	// 167 VIEW_ZRK_AAA EQU 40         ;ZSU-23-4 Shilka to Tornado view2
	// 171 PILOTPAN	EQU	0   	;pilot's front panel
	// 172 PSIDEPAN	EQU	2		;pilot's left and right side panel
	// 173 NAVIGPAN	EQU	4		;navigator's front panel
	// 174 NSIDEPAN	EQU	6		;navigator's left and right side panel
	// 175 EXTRNPAN	EQU	8		;external panel
	// 176 LOOKDOWN	EQU	10		;look down panel
	// 177 LOOKUP		EQU	12		;look up panel
	// 178 MAPPAN		EQU	14		;map panel
	// 182 CREW_PILOT	EQU	0		;pilot in control
	// 183 CREW_NAVIG	EQU	2		;navigator in control
	// 187 AUTO_OFF	EQU	0		;off (manual)
	// 188 AUTO_APPROACH	EQU	2		;approach (autoland)
	// 189 AUTO_TRACK	EQU	4		;track acquire (fly to next waypoint)
	// 190 AUTO_HOLD	EQU	6		;altitude and heading hold
	// 191 AUTO_TF		EQU	8		;terrain follow
	// 195 ALT_MANUAL	EQU	0
	// 196 ALT_APPROACH	EQU	2
	// 197 ALT_ACQUIRE	EQU	4
	// 198 ALT_TF		EQU	6
	// 202 HDG_MANUAL	EQU	0
	// 203 HDG_APPROACH	EQU	2
	// 204 HDG_ACQUIRE	EQU	4
	// 205 HDG_TRACK	EQU	6
	// 209 JET_NULL	EQU	0		;nothing
	// 210 JET_EXT_TANKS	EQU	1		;ext fuel tanks
	// 211 JET_EXT_STORES	EQU	2		;ext fuel tanks + ext stores
	// 212 JET_ALL		EQU	3		;ext fuel tanks + ext stores + int fuel
	// 216 DIE_QUIT	EQU	1		;quit game
	// 217 DIE_HYPOXIA	EQU	2		;lack of oxygen
	// 218 DIE_BREAK_UP	EQU	3		;break up due to buffeting
	// 219 DIE_CRASH_HILL	EQU	4		;crashed into hill
	// 220 DIE_CRASH_GND	EQU	5		;crashed into ground
	// 221 DIE_DITCHED	EQU	6		;ditched
	// 222 DIE_GND_SPD_HI	EQU	7		;crashed - ground speed too high
	// 223 DIE_SINK_HI	EQU	8		;crashed - sink rate too high
	// 224 DIE_ROLL_HI	EQU	9		;crashed - roll too high on landing
	// 225 DIE_NOSE_WHEEL	EQU	10		;crashed - nose wheel collapsed
	// 226 DIE_TAIL_SCRAPE	EQU	11		;crashed - tail scrape on landing
	// 227 DIE_COLLAPSE	EQU	12		;crashed - gear collapsed
	// 228 DIE_FIRE	EQU	13		;destroyed by fire
	// 229 DIE_EJECT	EQU	14		;ejected
	// 230 DIE_MISSILE	EQU	15		;shot down by air-to-air missile
	// 231 DIE_CANNON	EQU	16		;shot down by cannon fire
	// 232 DIE_SAM		EQU	17		;shot down by surface-to-air missile
	// 233 DIE_AAA		EQU	18		;shot down by anti-aircraft artillery
	// 234 DIE_GND_EXPLO	EQU	19		;destroyed by ground explosion
	// 235 DIE_AIR_EXPLO	EQU	20		;destroyed by air explosion
	// 236 DIE_HIT_GND_OBJ	EQU	21		;crashed into ground object
	// 237 DIE_HIT_MOB_OBJ	EQU	22		;crashed into mobile object
	// 238 DIE_2_PLYR_WIN	EQU	23		;two player win
	// 239 DIE_2_PLYR_DRAW	EQU	24		;two player draw
	// 240 DIE_2_PLYR_LOSE	EQU	25		;two player lose
	// 244 SYS_ERR_MOUSE	EQU	255		;mouse driver not present
	// 245 SYS_ERR_PANELS	EQU	254		;error occurred loading panel data
	// 246 SYS_ERR_RGB	EQU	253		;error occurred loading palette RGB data
	// 247 SYS_ERR_LD_GAME	EQU	252		;error occurred loading GAMEPLAY.IN
	// 248 SYS_ERR_SV_GAME	EQU	251		;error occurred saving GAMEPLAY.OUT
	// 249 SYS_ERR_LD_LYR	EQU	250		;error occurred loading LAYER.IN
	// 250 SYS_ERR_LD_OBJ	EQU	249		;error occurred loading OBSECDEF.IN
	// 251 SYS_ERR_SV_OBJ	EQU	248		;error occurred saving OBSECDEF.OUT
	// 252 SYS_ERR_LD_MOB	EQU	247		;error occurred loading MSECDEF.IN
	// 253 SYS_ERR_SV_MOB	EQU	246		;error occurred saving MSECDEF.OUT
	// 254 SYS_ERR_MAP_OK	EQU	245		;completed map test ok
	// 255 SYS_ERR_RESIZE	EQU	244		;error occurred resizing memory
	// 256 SYS_ERR_SMEM	EQU	243		;error occurred allocating memory for sound driver
	// 257 SYS_ERR_SDRVR	EQU	242		;error occurred loading sound driver
	// 258 SYS_ERR_SCARD	EQU	241		;sound card not present
	// 259 SYS_ERR_LD_PIC	EQU	240		;error occurred loading digitized picture file
	// 260 SYS_ERR_LD_PREV	EQU	239		;error occurred loading PREVIEW.BT2
	// 261 SYS_ERR_SV_IMP	EQU	238		;error occurred saving IMPACT.OUT
	// 262 SYS_ERR_LD_MISC	EQU	237		;error occurred loading MISCDATA.IN
	// 263 SYS_ERR_TIMEOUT	EQU	236		;global timeout (end of demo)
	// 264 SYS_ERR_SYNC_TO	EQU	235		;comms sync timeout / user abort
	// 265 SYS_ERR_MMEM	EQU	234		;error occurred allocating memory for music driver
	// 266 SYS_ERR_MDRVR	EQU	233		;error occurred loading music driver
	// 267 SYS_ERR_MCARD	EQU	232		;music card not present
	// 271 DIP_GLOC	EQU	00000001b	;blackout / redout
	// 272 DIP_HYPOXIA	EQU	00000010b	;lack of oxygen
	// 273 DIP_EJECT	EQU	00000100b	;eject
	// 274 DIP_DESTROYED	EQU	00001000b	;aircraft destroyed
	// 275 DIP_DEMO	EQU	10000000b	;demo mode
	// 295 WAY_REC_SIZE	EQU	TYPE WAYPOINT
	// 296 WP_SPEED	EQU	WP_TIME		;time / speed share same location
	// 298 WP_TYPE		EQU	00000001b	;1 = target (fly over waypoint)
	// 300 WP_LINK		EQU	00000010b	;1 = link back to waypoint (where WP_HERE = 1)
	// 302 WP_HERE		EQU	00000100b	;1 = link back to here label
	// 304 WP_TF		EQU	00001000b	;1 = terrain follow to waypoint
	// 306 WP_ILS		EQU	00010000b	;1 = fly ILS glide slope to waypoint (WP_TYPE = 1)
	// 308 WP_COORD	EQU	00100000b	;1 = calc speed to arrive at specified time
	// 310 WP_BREAK	EQU	01000000b	;1 = break to here to land label (WP_TYPE = 1)
	// 312 WP_VALID	EQU	10000000b	;1 = waypoint valid
	// 314 NUM_WP_LONG	EQU	16		;number of waypoints for long route
	// 315 NUM_WP_SHORT	EQU	9		;number of waypoints for short route
	// 324 WPACK_MODE_MASK	EQU	00001111b
	// 325 WPACK_NUM_MASK	EQU	11110000b
	// 326 WPACK_NULL	EQU	0		;no package
	// 327 WPACK_GPB1000	EQU	2		;GPB1000 (laydown)
	// 328 WPACK_RET1000	EQU	4		;RET1000 (laydown)
	// 329 WPACK_LGB1000	EQU	6		;LGB1000 (laser guided)
	// 330 WPACK_BL755	EQU	8		;BL755 (laydown)
	// 331 WPACK_JP233	EQU	10		;JP233 (laydown)
	// 332 WPACK_ALARM	EQU	12		;ALARM (indirect)
	// 333 WPACK_AGM	EQU	14		;AGM (ALARM direct)
	// 337 NUL_RADAR	EQU	0
	// 338 GND_RADAR	EQU	2
	// 339 AIR_RADAR	EQU	4
	// 357 AF_REC_SIZE	EQU	TYPE AIRFIELD
	// 358 NUM_AIRFIELDS	EQU	4
	// 362 DEAD		EQU	0
	// 363 ALLIED		EQU	1
	// 364 ENEMY		EQU	2
	// 368 DRONE_UNKNOWN	EQU	0
	// 369 DRONE_AIRCRAFT	EQU	2
	// 370 DRONE_HELICOPT	EQU	4
	// 371 DRONE_TRUCK	EQU	6
	// 372 DRONE_TRAIN	EQU	8
	// 381 NUM_DRONES	EQU	90
	// 385 _DRONE_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_TYPE
	// 387 _DRONE_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_SIDE
	// 389 _DRONE_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_EVENT
	// 406 VEH_REC_SIZE	EQU	TYPE VEHICLE
	// 407 NEXT_VEHICLE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_REC_SIZE
	// 411 _VEH_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DRONE
	// 413 _VEH_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_SIDE
	// 415 _VEH_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_EVENT
	// 417 _VEH_NODE_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_NODE_PTR
	// 419 _VEH_DIST	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST
	// 421 _VEH_DIST_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST_FINE
	// 423 _VEH_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_XFINE
	// 425 _VEH_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_YFINE
	// 427 _VEH_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_ZFINE
	// 441 CNVY_REC_SIZE	EQU	TYPE CONVOY
	// 442 TRUCK		EQU	0
	// 443 TRAIN		EQU	2
	// 444 NUM_TRUCKS	EQU	4
	// 445 NUM_TRAINS	EQU	8
	// 461 ROUTE_REC_SIZE	EQU	TYPE ROUTE_NODE
	// 462 NUM_ROUTE_NODES	EQU	32		;num route nodes per route
	// 466 RN_END		EQU	00000001b	;end of route (terminate here)
	// 467 RN_LINK		EQU	00000010b	;link back to first node
	// 469 RN_EVENT	EQU	00000100b	;stop here and wait for event
	// 470 RN_DELAY	EQU	00001000b	;stop here and wait for delay period
	// 472 RN_UPSLOPE	EQU	00010000b	;start bridge ramp ascent here
	// 473 RN_DNSLOPE	EQU	00100000b	;start bridge ramp descent here
	// 486 RED_OXY		EQU	0000000000000001b	;oxygen system pressure low
	// 487 RED_L_FIRE	EQU	0000000000000010b	;left engine fire
	// 488 RED_R_FIRE	EQU	0000000000000100b	;right engine fire
	// 489 RED_AUT		EQU	0000000000001000b	;auto-pilot disengage
	// 490 RED_REV		EQU	0000000000010000b	;thrust reversers failure
	// 491 RED_SPILS	EQU	0000000000100000b	;SPILS failure
	// 492 RED_UC		EQU	0000000001000000b	;gear damaged (IAS > 350kts)
	// 493 RED_FUEL	EQU	0000000010000000b	;fuel low
	// 494 RED_L_ENG	EQU	0000000100000000b	;left engine failure
	// 495 RED_R_ENG	EQU	0000001000000000b	;right engine failure
	// 497 RED_CANCEL	EQU	NOT(RED_AUT)
	// 498 AMB_CNFG	EQU	0000000000000001b	;config error
	// 499 AMB_ADC		EQU	0000000000000010b	;air data computer failure
	// 500 AMB_ECM		EQU	0000000000000100b	;ECM failure
	// 501 AMB_UC		EQU	0000000000001000b	;gear warning (IAS > 250kts)
	// 502 AMB_WB		EQU	0000000000010000b	;wheelbrakes failure
	// 503 AMB_AB		EQU	0000000000100000b	;airbrakes failure
	// 504 AMB_FLPS	EQU	0000000001000000b	;flaps failure
	// 505 AMB_SWP		EQU	0000000010000000b	;sweep failure
	// 506 AMB_HUD		EQU	0000000100000000b	;HUD failure
	// 507 AMB_MFD1	EQU	0000001000000000b	;pilot's MFD failure
	// 508 AMB_MFD2	EQU	0000010000000000b	;navig's MFD failure
	// 509 AMB_L_TAB	EQU	0000100000000000b	;lh TAB failure
	// 510 AMB_R_TAB	EQU	0001000000000000b	;rh TAB failure
	// 511 AMB_RAD		EQU	0010000000000000b	;radar failure
	// 512 AMB_RWR		EQU	0100000000000000b	;RWR failure
	// 514 AMB_CANCEL	EQU	NOT(AMB_CNFG+AMB_UC)
	// 558 AC_REC_SIZE	EQU	TYPE AIRCRAFT
	// 559 AC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 563 _AC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE
	// 565 _AC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SIDE
	// 567 _AC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT
	// 569 _AC_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TYPE
	// 571 _AC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DELAY
	// 573 _AC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE_NUM
	// 575 _AC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT_NUM
	// 577 _AC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_CTRL_MODE
	// 579 _AC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WP_PTR
	// 581 _AC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_XFINE
	// 583 _AC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_YFINE
	// 585 _AC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ZFINE
	// 587 _AC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_HFINE
	// 589 _AC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PFINE
	// 591 _AC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_RFINE
	// 593 _AC_VTAS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS
	// 595 _AC_VTAS_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS_FINE
	// 597 _AC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_LIFT_VCTR
	// 599 _AC_AB_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AB_DELAY
	// 601 _AC_SWEEP_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SWEEP_DELAY
	// 603 _AC_TAXI_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_PTR
	// 605 _AC_TAXI_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_XFT
	// 607 _AC_TAXI_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_YFT
	// 609 _AC_ARM_LOCK	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ARM_LOCK
	// 611 _AC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_FLAGS
	// 613 _AC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DECOY_TIMER
	// 615 _AC_AA_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AA_TIMER
	// 617 _AC_OPP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_OPP_PTR
	// 619 _AC_PREV_PERR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PERR
	// 621 _AC_PREV_PRATE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PRATE
	// 623 _AC_SHELLS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SHELLS
	// 625 _AC_MISSILES	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_MISSILES
	// 627 _AC_WPN_INT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WPN_INT
	// 629 _AC_EVADE_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVADE_TIMER
	// 631 _AC_GMAX_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_GMAX_TIMER
	// 635 AC_WP_NULL	EQU	0		;no action
	// 636 AC_WP_TAKEOFF	EQU	2		;takeoff
	// 637 AC_WP_AIRBORNE	EQU	4		;start airborne
	// 638 AC_WP_TAXI	EQU	6		;taxi off runway
	// 639 AC_WP_RESTART	EQU	8		;resupply then restart
	// 643 GR4_TORNADO	EQU	0
	// 644 MIG27_FLOGGER	EQU	2
	// 645 F3_TORNADO	EQU	4
	// 646 MIG31_FOXHOUND	EQU	6
	// 647 F15_EAGLE	EQU	8
	// 648 SU27_FLANKER	EQU	10
	// 649 F16_FALCON	EQU	12
	// 650 MIG29_FULCRUM	EQU	14
	// 651 A10_THUNDERBOLT	EQU	16
	// 652 SU25_FROGFOOT	EQU	18
	// 653 E3D_SENTRY	EQU	20
	// 654 IL76_MAINSTAY	EQU	22
	// 655 C130_HERCULES	EQU	24
	// 656 IL76_CANDID	EQU	26
	// 660 AFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 661 AFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 662 AFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 663 AFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 664 AFLG_EVADE_HI	EQU	0000000000010000b	;evade missile (pull up)
	// 665 AFLG_EVADE_LO	EQU	0000000000100000b	;evade missile (roll and pull)
	// 666 AFLG_GMAX	EQU	0000000001000000b	;hard manoeuvring
	// 667 AFLG_UPRIGHT	EQU	0000000010000000b	;fly upright to break
	// 668 AFLG_BREAK	EQU	0000000100000000b	;break to land
	// 697 HC_REC_SIZE	EQU	TYPE HELICOPTER
	// 698 HC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
	// 702 _HC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE
	// 704 _HC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_SIDE
	// 706 _HC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT
	// 708 _HC_TYPE       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_TYPE
	// 710 _HC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DELAY
	// 712 _HC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE_NUM
	// 714 _HC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT_NUM
	// 716 _HC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_CTRL_MODE
	// 718 _HC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_WP_PTR
	// 720 _HC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_XFINE
	// 722 _HC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_YFINE
	// 724 _HC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ZFINE
	// 726 _HC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_HFINE
	// 728 _HC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_PFINE
	// 730 _HC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_RFINE
	// 732 _HC_VTAS       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS
	// 734 _HC_VTAS_FINE  	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS_FINE
	// 736 _HC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_LIFT_VCTR
	// 738 _HC_ACCEL_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ACCEL_PFINE
	// 740 _HC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_FLAGS
	// 742 _HC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DECOY_TIMER
	// 746 HC_WP_NULL	EQU	0		;no action
	// 747 HC_WP_TAKEOFF	EQU	2		;takeoff
	// 748 HC_WP_AIRBORNE	EQU	4		;start airborne
	// 749 HC_WP_STOP	EQU	6		;stop
	// 750 HC_WP_RESTART	EQU	8		;resupply then restart
	// 754 AH64_APACHE	EQU	0
	// 755 MI24_HIND	EQU	2
	// 756 CH47_CHINOOK	EQU	4
	// 757 MI26_HALO	EQU	6
	// 761 HFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 762 HFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 763 HFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 764 HFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 769 OBJECT_LIGHTS	EQU	00000000b	;0 = night lighting off
	// 770 OBJECT_ENEMY	EQU	01000000b	;1 = enemy
	// 771 OBJECT_DEAD	EQU	10000000b	;1 = dead
	// 772 OBJECT_CLEAR	EQU	11000000b	;clear animation with mask
	// 778 WING_SWEEP_FWD	EQU	00000000b
	// 779 WING_SWEEP_MID	EQU	00000001b
	// 780 WING_SWEEP_BCK	EQU	00000010b
	// 781 WING_SWEEP_ALL	EQU	00000011b
	// 782 GEAR_DOWN	EQU	00000100b
	// 783 REHEAT_L_ENG	EQU	00001000b
	// 784 REHEAT_R_ENG	EQU	00010000b
	// 785 REHEAT_ALL	EQU	00011000b
	// 786 AC_SPECIALS	EQU	00100000b
	// 792 ROTOR_POS1	EQU	00000000b
	// 793 ROTOR_POS2	EQU	00000001b
	// 794 ROTOR_POS3	EQU	00000010b
	// 795 ROTOR_ALL	EQU	00000011b
	// 801 HEADLAMPS	EQU	00000001b
	// 805 NULL_WEAPON	EQU	-1
	// 807 GPB1000		EQU	0		;1000lb slick bomb
	// 808 RET1000		EQU	2		;1000lb retarded bomb
	// 809 LGB1000		EQU	4		;1000lb laser guided bomb (Paveway II)
	// 810 BL755		EQU	6		;cluster bomb
	// 811 JP233		EQU	8		;JP233
	// 812 ALARM		EQU	10		;ALARM
	// 814 CANNON		EQU	12		;cannon
	// 815 SIDEWINDER	EQU	14		;Sidewinder (AIM-9L)
	// 816 SKYFLASH	EQU	16		;active Sky Flash (ADV only)
	// 818 PATRIOT		EQU	18		;radar guided SAM
	// 819 GECKO		EQU	20		;IR guided SAM
	// 821 CHAFF		EQU	22
	// 822 FLARE		EQU	24
	// 826 EXT_GPB1000   	EQU	0		;1000lb slick bomb
	// 827 EXT_RET1000   	EQU	2		;1000lb retarded bomb
	// 828 EXT_LGB1000   	EQU	4		;1000lb laser guided bomb (Paveway II)
	// 829 EXT_BL755     	EQU	6		;cluster bomb
	// 830 EXT_JP233     	EQU	8		;JP233
	// 831 EXT_ALARM     	EQU	10		;ALARM
	// 832 EXT_SIDEWINDER	EQU	12		;Sidewinder (AIM-9L)
	// 833 EXT_SKYFLASH	EQU	14		;active Sky Flash (ADV only)
	// 834 EXT_BOZ100    	EQU	16		;chaff / flare dispenser (IDS / ECR only)
	// 835 EXT_SKYSHADOW	EQU	18		;ECM jamming pod (IDS / ECR only)
	// 836 EXT_DROPTANK	EQU	20		;external fuel tank
	// 840 MAX_CANNON	EQU	180
	// 841 MAX_CHAFF	EQU	120
	// 842 MAX_FLARES	EQU	28
	// 846 RETARDED_BOMB	EQU	00000001b	;0 = slick bomb, 1 = retarded bomb
	// 847 CASING_OFF	EQU	00000010b	;0 = casing on, 1 = casing off
	// 848 SPLASH1		EQU	00000001b	;0 = stage 2, 1 = stage 1
	// 849 AIRBURST1	EQU	5		;first stage of airburst animation
	// 850 FLAME		EQU	00000001b	;0 = no flame, 1 = flame
	// 851 CHUTE		EQU	00000010b	;0 = no chute, 1 = chute
	// 853 RHS_CANNON	EQU	00000001b	;rhs cannon
	// 854 LHS_CANNON	EQU	00000010b	;lhs cannon
	// 874 WPN_REC_SIZE	EQU	TYPE WEAPON
	// 875 NUM_WEAPONS	EQU	128
	// 876 WPN_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_REC_SIZE
	// 881 WPN_BOMB_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 882 WPN_BOMB_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 884 WPN_LGB_TGT	EQU	WPN_USERW1	;target waypoint ptr
	// 885 WPN_LGB_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 887 WPN_CAN_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 888 WPN_CAN_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 889 WPN_CAN_TIMER	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 890 WPN_CAN_SRC	EQU	WPN_USERW4	;source ptr (source of cannon fire)
	// 893 WPN_MISS_TGT	EQU	WPN_USERW1	;target ptr (-1 = target lost)
	// 894 WPN_MISS_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 895 WPN_MISS_ACCEL	EQU	WPN_USERW3	;acceleration (ft/sec/sec * 8)
	// 896 WPN_MISS_TIMER	EQU	WPN_USERW4	;burntime / lifetime (secs * 100)
	// 897 WPN_MISS_DECOY	EQU	WPN_USERW5	;decoy distraction timer (secs * 100)
	// 899 WPN_ALM_VEL	EQU	WPN_USERW1	;velocity (ft/sec * 8)
	// 900 WPN_ALM_ACCEL	EQU	WPN_USERW2	;acceleration (ft/sec/sec * 8)
	// 901 WPN_ALM_TIMER	EQU	WPN_USERW3	;burntime / lifetime (secs * 100)
	// 902 WPN_ALM_XSEC	EQU	WPN_USERW4	;xsec )
	// 903 WPN_ALM_YSEC	EQU	WPN_USERW5	;ysec )  target
	// 904 WPN_ALM_XFT	EQU	WPN_USERW6	;xft  ) position
	// 905 WPN_ALM_YFT	EQU	WPN_USERW7	;yft  )
	// 907 WPN_DECOY_HVEL	EQU	WPN_BOMB_HVEL	;horizontal velocity (ft/sec * 8)
	// 908 WPN_DECOY_VVEL	EQU	WPN_BOMB_VVEL	;vertical velocity (ft/sec * 8)
	// 909 WPN_DECOY_LIFE	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 913 WFLG_ALARM_MODE	EQU	0000000000000111b	;ALARM control mode (DO NOT CHANGE)
	// 914 WFLG_TORNADO	EQU	0000000000001000b	;Tornado weapon release
	// 915 WFLG_SPLASH	EQU	0000000000010000b	;draw weapon as splash
	// 916 WFLG_UNGUIDED	EQU	0000000000100000b	;LGB assumes GPB behaviour
	// 917 WFLG_BOMBLET	EQU	0000000001000000b	;BL755 bomblet
	// 918 WFLG_BURNOUT	EQU	0000000010000000b	;missile motor burnt out
	// 919 WFLG_IR_SEEK	EQU	0000000100000000b	;IR missile (else assume radar)
	// 920 WFLG_AIRBURST	EQU	0000001000000000b	;draw weapon as airburst
	// 921 WFLG_NO_RADAR	EQU	0000010000000000b	;no radar targets for ALARM
	// 922 WFLG_TLOCK	EQU	0000100000000000b	;weapon locked onto Tornado
	// 924 ALARM_DIRECT	EQU	0		;direct
	// 925 ALARM_KILL	EQU	1		;kill
	// 926 ALARM_GUIDE	EQU	2		;guide
	// 927 ALARM_ZOOM	EQU	3		;zoom climb
	// 928 ALARM_FREEFALL	EQU	4		;freefall
	// 929 ALARM_LOITER	EQU	5		;loiter
	// 930 ALARM_DIVE	EQU	6		;dive
	// 934 _WPN_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_TYPE
	// 936 _WPN_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_FLAGS
	// 938 _WPN_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_HFINE
	// 940 _WPN_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_PFINE
	// 942 _WPN_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_XFINE
	// 944 _WPN_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_YFINE
	// 946 _WPN_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ZFINE
	// 948 _WPN_USERW1	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW1
	// 950 _WPN_USERW2	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW2
	// 952 _WPN_USERW3	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW3
	// 954 _WPN_USERW4	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW4
	// 955 _WPN_BOMB_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_HVEL
	// 957 _WPN_BOMB_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_VVEL
	// 958 _WPN_LGB_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_TGT
	// 960 _WPN_LGB_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_VEL
	// 961 _WPN_CAN_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_HVEL
	// 963 _WPN_CAN_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_VVEL
	// 965 _WPN_CAN_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_TIMER
	// 966 _WPN_MISS_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TGT
	// 968 _WPN_MISS_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_VEL
	// 970 _WPN_MISS_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_ACCEL
	// 972 _WPN_MISS_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TIMER
	// 974 _WPN_MISS_DECOY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_DECOY
	// 975 _WPN_ALM_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_VEL
	// 977 _WPN_ALM_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_ACCEL
	// 979 _WPN_ALM_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_TIMER
	// 981 _WPN_ALM_XSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XSEC
	// 983 _WPN_ALM_YSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YSEC
	// 985 _WPN_ALM_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XFT
	// 987 _WPN_ALM_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YFT
	// 988 _WPN_DECOY_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_HVEL
	// 990 _WPN_DECOY_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_VVEL
	// 992 _WPN_DECOY_LIFE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_LIFE
	// 996 WPN_EFFECT1	EQU	0
	// 997 WPN_EFFECT2	EQU	1
	// 998 WPN_EFFECT3	EQU	2
	// 999 WPN_EFFECT4	EQU	3
	// 1009 PACK_REC_SIZE	EQU	TYPE PACKAGE
	// 1010 NUM_PACKAGES	EQU	3
	// 1014 ARM_OFF		EQU	0		;off
	// 1015 ARM_MANUAL	EQU	2		;manual bombing
	// 1016 ARM_LAYDOWN	EQU	4		;laydown bombing
	// 1017 ARM_LOFT	EQU	6		;loft bombing
	// 1018 ARM_LGB		EQU	8		;laser guided bomb
	// 1019 ARM_JP233	EQU	10		;JP233
	// 1020 ARM_ALARM_DIR	EQU	12		;ALARM (direct attack mode)
	// 1021 ARM_ALARM_IND	EQU	14		;ALARM (indirect attack mode)
	// 1022 ARM_CANNON	EQU	16		;cannon
	// 1023 ARM_SIDEWINDER	EQU	18		;Sidewinder
	// 1024 ARM_SKYFLASH	EQU	20		;Sky Flash
	// 1030 SHAKE_NOSE_DOWN	EQU	5		;nose wheel touchdown
	// 1031 SHAKE_LAND_GOOD	EQU	10		;good landing
	// 1032 SHAKE_LAND_HVY	EQU	15		;heavy landing
	// 1033 SHAKE_CANNON	EQU	45		;cannon fire
	// 1034 SHAKE_JP233	EQU	50		;JP233 release
	// 1035 SHAKE_DAMAGE	EQU	75		;hit by cannon fire / explosion damage
	// 1036 SHAKE_COLLIDE	EQU	100		;collide with object
	// 1038 SHAKE_BRAKE	EQU	240		;not moving, brakes on and reheat on
	// 1039 SHAKE_BUFFET	EQU	245		;buffet due to excess speed wrt wing sweep
	// 1040 SHAKE_OFF_HARD	EQU	250		;off hard surface (runway, taxiway etc.)
	// 1041 SHAKE_WHEELS_UP	EQU	255		;wheels up landing
	// 1045 LAND_GOOD	EQU	00000001b	;1 = good landing
	// 1046 LAND_HEAVY	EQU	00000010b	;1 = heavy landing
	// 1047 LAND_WHEELS_UP	EQU	00000100b	;1 = wheels up landing
	// 1048 LAND_DEAD_STICK	EQU	00001000b	;1 = dead stick landing
	// 1049 LAND_ROAD	EQU	00010000b	;1 = landed on road
	// 1050 LAND_ENEMY	EQU	00100000b	;1 = landed in enemy territory
	// 1051 LAND_STATIONARY	EQU	01000000b	;1 = stationary (when quit)
	// 1055 MINOR_DAMAGE	EQU	1
	// 1056 MAJOR_DAMAGE	EQU	2
	// 1057 TOTAL_DAMAGE	EQU	3
	// 1068 ARAD_RNG_LO	EQU	ARAD_RNG
	// 1069 ARAD_RNG_HI	EQU	ARAD_RNG+2
	// 1070 ARAD_REC_SIZE	EQU	TYPE ARAD_TRACK
	// 1071 NUM_TRACKS	EQU	40		;max number of aircraft radar can track
	// 1075 ARAD_MIN_RANGE	EQU	0		;short range (guns)
	// 1076 ARAD_MED_RANGE	EQU	2		;medium range (Sidewinder)
	// 1077 ARAD_MAX_RANGE	EQU	4		;long range (SkyFlash)
	// 1089 IMP_REC_SIZE	EQU	TYPE IMPACT
	// 1090 NUM_IMPACTS	EQU	128
	// 1094 SECT_ENEMY	EQU	10000000b	;1 = enemy occupied sector
	// 1095 SECT_SAM	EQU	01000000b	;1 = SAM in sector
	// 1096 SECT_AAA	EQU	00100000b	;1 = AAA in sector
	// 1097 SECT_EWR	EQU	00010000b	;1 = EWR in sector
	// 1098 SECT_EWR_NUM	EQU	00001111b	;enemy EWR number (0 .. 15)
	// 1104 E_EWR_FLOOR	EQU	00001111b	;enemy EWR floor
	// 1105 A_EWR_FLOOR	EQU	11110000b	;allied EWR floor
	// 1109 NUM_SAM_AAA	EQU	128
	// 1110 NUM_EWR		EQU	8
	// 1118 RAD_REC_SIZE	EQU	TYPE RADARS
	// 1122 EWR_GROUND	EQU	0		;ground object (SECDATA1)
	// 1123 EWR_MOBILE	EQU	2		;mobile object (MSECDATA1)
	// 1133 EWR_REC_SIZE	EQU	EWR
	// 1137 THREAT_SAM	EQU	0
	// 1138 THREAT_AAA	EQU	2
	// 1139 THREAT_EWR	EQU	4
	// 1140 THREAT_AC	EQU	6
	// 1141 THREAT_RAD_MSL	EQU	8
	// 1142 THREAT_IR_MSL	EQU	10
	// 1156 RWR_RNG_LO	EQU	RWR_RNG
	// 1157 RWR_RNG_HI	EQU	RWR_RNG+2
	// 1158 RWR_REC_SIZE	EQU	RWR
	// 1159 NUM_RWR_THREATS	EQU	16
	// 1163 RWR_SAM		EQU	00010000b
	// 1164 RWR_AAA		EQU	00001000b
	// 1165 RWR_EWR		EQU	00000100b
	// 1166 RWR_AC		EQU	00000010b
	// 1167 RWR_MSL		EQU	00000001b
	// 1172 DAM_HARD_MASK	EQU	00000011b	;(DO NOT CHANGE)
	// 1173 DAM_HARD1	EQU	00000000b	;soft
	// 1174 DAM_HARD2	EQU	00000001b
	// 1175 DAM_HARD3	EQU	00000010b
	// 1176 DAM_HARD4	EQU	00000011b	;hard
	// 1178 DAM_DEBRIS_MASK	EQU	00011100b	;(DO NOT CHANGE)
	// 1179 DAM_DEBRIS1	EQU	00000000b	;crater 1	) MOBILES CAN ONLY
	// 1180 DAM_DEBRIS2	EQU	00000100b	;crater 2	) USE THESE VALUES
	// 1181 DAM_DEBRIS3	EQU	00001000b	;crater 3
	// 1182 DAM_DEBRIS4	EQU	00001100b	;NS road bridge
	// 1183 DAM_DEBRIS5	EQU	00010000b	;EW road bridge
	// 1184 DAM_DEBRIS6	EQU	00010100b	;NS rail bridge
	// 1185 DAM_DEBRIS7	EQU	00011000b	;EW rail bridge
	// 1186 DAM_DEBRIS8	EQU	00011100b	;embankment crater
	// 1189 DAM_EXPLO_MASK	EQU	11111111b	;(DO NOT CHANGE)
	// 1190 DAM_EXPLO1	EQU	00000000b	;burn only
	// 1191 DAM_EXPLO2	EQU	00100000b	;crater size 1 * 2
	// 1192 DAM_EXPLO3	EQU	01000000b	;crater size 2 * 2
	// 1193 DAM_EXPLO4	EQU	01100000b	;crater size 2 * 4
	// 1195 DAM_INVALID	EQU	10000000b	;(DO NOT CHANGE)
	// 1216 COMMS_REC_SIZE	EQU	TYPE COMMS
	// 1217 COMMS_ZFT_LO	EQU	COMMS_ZFT
	// 1218 COMMS_ZFT_HI	EQU	COMMS_ZFT+2
	// 1223 I_FIRE_CANNON	EQU	00000001b	;I have fired a cannon shell
	// 1224 I_FIRE_AIM9L	EQU	00000010b	;I have launched a Sidewinder
	// 1225 I_FIRE_SKYFLASH	EQU	00000100b	;I have launched a Sky Flash
	// 1226 I_REL_CHAFF	EQU	00001000b	;I have released chaff
	// 1227 I_REL_FLARE	EQU	00010000b	;I have released flare
	// 1228 I_EMIT_RADAR	EQU	00100000b	;I am emitting radar
	// 1229 I_EMIT_ECM	EQU	01000000b	;I am emitting ECM
	// 1230 I_ILLUM_YOU	EQU	10000000b	;I am illuminating you (on radar)
	// 1232 I_PAUSED	EQU	00000001b	;I have paused
	// 1233 I_RESUMED	EQU	00000010b	;I have resumed
	// 1235 I_NO_WEAPONS	EQU	00000001b	;I have no weapons
	// 1236 I_KILLED	EQU	00000010b	;I have been destroyed
	// 1237 I_EJECTED	EQU	00000100b	;I have ejected
	// 1238 I_QUIT		EQU	00001000b	;I have quit
	// 1239 I_KILLED_YOU	EQU	00010000b	;I have destroyed you
	// 1248 RDAM_REC_SIZE	EQU	TYPE RUNWAY_DAMAGE
	// 1249 NUM_RUNWAYS	EQU	8
	// 1272 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 1273 VP_ZFT_LO	EQU	VP_ZFT
	// 1274 VP_ZFT_HI	EQU	VP_ZFT+2
	// 1278 SEC_SCALE1 	EQU	0		;1/1 scale
	// 1279 SEC_SCALE2	EQU	2		;1/2 scale
	// 1280 SEC_SCALE8 	EQU	4		;1/8 scale
	// 1281 SEC_SCALE16 	EQU	6		;1/16 scale
	// 1285 INT_VIEWMODE	EQU	0		;internal views
	// 1286 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 1287 EXT_VIEWMODE	EQU	4		;external views
	// 1288 TV1_VIEWMODE	EQU	6		;TV1 display
	// 1289 TV2_VIEWMODE	EQU	8		;TV2 display
	// 1290 TV3_VIEWMODE	EQU	10		;TV3 display
	// 1291 TV4_VIEWMODE	EQU	12		;TV4 display
	// 1292 TV5_VIEWMODE	EQU	14		;TV5 display
	// 1293 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 1297 ROTATE_NULL	EQU	0		;no rotation
	// 1298 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 1299 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 1300 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 1301 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 1302 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 1303 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 1307 $MID		EQU	128
	// 1308 $0		EQU	0
	// 1309 $256		EQU	2
	// 1310 $512		EQU	4
	// 1311 $1024		EQU	8
	// 1312 $2048		EQU	16
	// 1313 $4096		EQU	32
	// 1314 $8192		EQU	64
	// 1323 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 1327 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 1328 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 1332 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 1333 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 1337 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 1341 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 1342 OBJ_SCALE2	EQU	2		;2/1 scale
	// 1343 OBJ_SCALE4	EQU	4		;4/1 scale
	// 1344 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 1345 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 1349 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 1350 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 1351 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 1352 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 1353 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 1357 @MID		EQU	64
	// 1358 @0		EQU	0
	// 1359 @16		EQU	2
	// 1360 @32		EQU	4
	// 1361 @48		EQU	6
	// 1362 @64		EQU	8
	// 1363 @80		EQU	10
	// 1364 @96		EQU	12
	// 1365 @112		EQU	14
	// 1366 @128		EQU	16
	// 1367 @192		EQU	24
	// 1368 @256		EQU	32
	// 1369 @384		EQU	48
	// 1370 @512		EQU	64
	// 1388 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 1390 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 1391 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 1393 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 1394 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 1395 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 1397 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 1399 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 1400 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 1401 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 1402 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 1403 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 1404 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 1406 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 1408 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 1409 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 1413 OTYPE_GROUND	EQU	0		;static ground objects
	// 1414 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 1415 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 1416 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 1417 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 1418 OTYPE_HILLFACE	EQU	10		;hill face
	// 1419 OTYPE_SMOKE	EQU	12		;smoke
	// 1433 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 1434 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 1438 NUM_OBJECTS	EQU	256		;max number of objects
	// 1439 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 1440 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 1441 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 1442 BEHIND_BIN	EQU	0		;behind bin index
	// 1443 IN_FRONT_BIN	EQU	2		;in front bin index
	// 1447 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 1448 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 1449 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 1450 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 1451 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 1452 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 1453 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 1463 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 1467 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 1468 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 1469 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 1470 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 1471 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 1472 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 1473 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 1474 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 1475 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 1476 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 1480 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 1486 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 1499 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 1510 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 1514 SURFACE_UNKNOWN	EQU	0
	// 1515 SURFACE_RUNWAY	EQU	2
	// 1516 SURFACE_TAXIWAY	EQU	4
	// 1517 SURFACE_HARD	EQU	6
	// 1518 SURFACE_ROAD	EQU	8
	// 1519 SURFACE_RAILWAY	EQU	10
	// 1520 SURFACE_RIVER	EQU	12
	// 1521 SURFACE_LAKE	EQU	14
	// 1525 NUM_CRATERS	EQU	128
	// 1526 CRATER_NULL	EQU	0
	// 1527 CRATER_SIZE1	EQU	1		;small
	// 1528 CRATER_SIZE2	EQU	2		;large
	// 1529 CRATER_HEAVE	EQU	3		;heave
	// 1530 CRATER_SHELL	EQU	4		;cannon shell
	// 1541 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 1545 NUM_SMOKE	EQU	128
	// 1547 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 1548 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 1549 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 1550 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 1551 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 1552 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 1553 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 1555 STYPE_NULL	EQU	0		;no smoke
	// 1556 STYPE_GND1	EQU	2		;ground smoke type 1
	// 1557 STYPE_AIR1	EQU	4		;air smoke type 1
	// 1573 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 1574 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 1575 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 1576 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;****************************************************************************
	// 0 ;* The HC_ suffix on some variables is necessary to differentiate them from *
	// 0 ;* similar global vars (in case they need to be made public for debugging). *
	// 0 ;****************************************************************************
	// 0 ;helicopter data / waypoint ptr
	// 0 ;helicopter performance data ptr
	// 0 ;---------------------------------------------------------
	// 0 ;* working copy of current helicopter's data and waypoints
	// 0 ;---------------------------------------------------------
	// 1837 HC_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
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
	// 1858 FIXED_DECEL	EQU	10*8		;fixed decel rate (ft/sec/sec * 8)
	// 0 ;fixed decel rate (ft/sec/sec * 8)
	// 1859 ACC_PITCH_RATE	EQU	32*128		;pitch rate wrt accel (fine pdegs)
	// 0 ;pitch rate wrt accel (fine pdegs)
	// 0 ;--------------
	// 0 ;* CalcTurnDist
	// 0 ;--------------
	// 0 ;angle vp(A) -> wp(B)
	// 0 ;angle wp(B) -> wp(C)
	// 0 ;angle vp(A) -> wp(B) -> wp(C)
	// 0 ;turning radius (0 .. 32,767ft)
	// 0 ;--------------------------
	// 0 ;* helicopter control modes
	// 0 ;--------------------------
	// 1872 CTRL_NULL	EQU	0		;do nothing
	// 0 ;do nothing
	// 1873 CTRL_TAKEOFF	EQU	2		;takeoff
	// 0 ;takeoff
	// 1874 CTRL_TRACK	EQU	4		;fly from waypoint to waypoint
	// 0 ;fly from waypoint to waypoint
	// 1875 CTRL_APPROACH	EQU	6		;final approach to hover
	// 0 ;final approach to hover
	// 1876 CTRL_TOUCHDOWN	EQU	8		;descend and touchdown
	// 0 ;descend and touchdown
	// 0 ;CTRL_NULL
	// 0 ;CTRL_TAKEOFF
	// 0 ;CTRL_TRACK
	// 0 ;CTRL_APPROACH
	// 0 ;CTRL_TOUCHDOWN
	// 0 ;--------------------------------------
	// 0 ;* helicopter performance data pointers
	// 0 ;--------------------------------------
	// 0 ;AH64_APACHE
	// 0 ;MI24_HIND
	// 0 ;CH47_CHINOOK
	// 0 ;MI26_HALO
	// 0 ;-----------------------------
	// 0 ;* helicopter performance data
	// 0 ;-----------------------------
	// 0 ;cruise data ptr
	// 0 ;--------------------
	// 0 ;* takeoff parameters
	// 0 ;--------------------
	// 0 ;climb rate (ft/sec * 8)
	// 1911 DLY_AFTER_EVENT	EQU	30*100		;delay after event (1/100ths sec)
	// 0 ;delay after event (1/100ths sec)
	// 0 ;----------------------------------
	// 0 ;* takeoff climb rate = 2,500ft/min
	// 0 ;----------------------------------
	// 0 ;----------------------------------
	// 0 ;* takeoff climb rate = 1,500ft/min
	// 0 ;----------------------------------
	// 0 ;-------------------
	// 0 ;* cruise parameters
	// 0 ;-------------------
	// 0 ;1 = heavy helicopter
	// 0 ;----------------------------------
	// 0 ;* ceiling = 15,000ft
	// 0 ;* max speed at sea level = 160kts
	// 0 ;* acceleration = 12ft/sec/sec
	// 0 ;* light helicopter
	// 0 ;----------------------------------
	// 0 ;----------------------------------
	// 0 ;* ceiling = 15,000ft
	// 0 ;* max speed at sea level = 135kts
	// 0 ;* acceleration = 8ft/sec/sec
	// 0 ;* heavy helicopter
	// 0 ;----------------------------------
	// 0 ;--------------------
	// 0 ;* landing parameters
	// 0 ;--------------------
	// 1954 LAND_ZDOT	EQU	10*8		;descend rate (ft/sec * 8)
	// 0 ;descend rate (ft/sec * 8)
	// 1955 RESUPPLY_DELAY	EQU	15*100		;time to resupply aircraft (1/100ths sec)
	// 0 ;time to resupply aircraft (1/100ths sec)
	// 0 ;------------------
	// 0 ;* track parameters
	// 0 ;------------------
	// 1960 AH_MAX_ROLL	EQU	85*128		;60 degs
	// 0 ;60 degs
	// 1961 AH_ROLL_RATE	EQU	64*128		;45 degs / sec
	// 0 ;45 degs / sec

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

