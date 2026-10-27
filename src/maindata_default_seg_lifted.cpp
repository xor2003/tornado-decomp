/* THIS IS GENERATED FILE */

        
#include "maindata.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 195 DRONE_AC_ON	EQU	1		;1 = drone aircraft enabled
	// 196 DRONE_HC_ON	EQU	1		;1 = drone helicopters enabled
	// 421 IDS_TORNADO	EQU	0		;interdictor strike
	// 422 ADV_TORNADO	EQU	2		;air defence variant
	// 423 ECR_TORNADO	EQU	4		;electronic combat and reconnaissance
	// 427 CTRL_DEV_KBD1	EQU	0		;keyboard (self centring)
	// 428 CTRL_DEV_KBD2	EQU	2		;keyboard
	// 429 CTRL_DEV_JOY1	EQU	4		;single joystick
	// 430 CTRL_DEV_JOY2	EQU	6		;dual joysticks
	// 434 SND_NULL	EQU	0		;no sound card
	// 435 SND_SPEAKER	EQU	2		;internal speaker
	// 436 SND_SBLASTER	EQU	4		;SoundBlaster
	// 437 SND_ADLIB	EQU	6		;AdLib
	// 438 SND_ROLAND	EQU	8		;Roland LAPC1
	// 442 SHAKE_OPT_OFF	EQU	0		;shake effects off
	// 443 SHAKE_OPT_ON	EQU	1		;shake effects on
	// 447 SOUND_OPT_OFF	EQU	0		;sound off
	// 448 SOUND_OPT_ON	EQU	1		;sound on (less engine sound)
	// 449 SOUND_OPT_ENG	EQU	2		;sound on (with engine sound)
	// 453 VIEW_PILOT	EQU	0 		;pilot's panel view
	// 454 VIEW_LPILOT	EQU	2		;pilot's left view
	// 455 VIEW_RPILOT	EQU	4		;pilot's right view
	// 456 VIEW_NAVIG	EQU	6		;navigator's panel view
	// 457 VIEW_LNAVIG	EQU	8		;navigator's left view
	// 458 VIEW_RNAVIG	EQU	10		;navigator's right view
	// 459 VIEW_TRACKING	EQU	12		;tracking camera
	// 460 VIEW_SATELLITE	EQU	14		;satellite camera
	// 461 VIEW_MAP	EQU	16		;map view
	// 462 VIEW_DRONE	EQU	18		;drone view
	// 463 VIEW_SPECTATOR	EQU	20		;spectator view
	// 464 VIEW_REMOTE	EQU	22		;remote view
	// 465 VIEW_LOOKDOWN	EQU	24		;pilot's look down
	// 466 VIEW_LOOKUP	EQU	26		;pilot's look up
	// 467 VIEW_DEMO	EQU	28		;demo view
	// 468 VIEW_DESTROYED	EQU	30		;Tornado destroyed view
	// 469 VIEW_WEAPON	EQU	32		;weapon view
	// 470 VIEW_ZRK EQU 34         ;ZRK ROMB (SA-8) to Tornado view
	// 471 VIEW_ZSU1 EQU 36         ;ZSU-23-4 Shilka to Tornado view1
	// 472 VIEW_ZSU2 EQU 38         ;ZSU-23-4 Shilka to Tornado view2
	// 473 VIEW_ZRK_AAA EQU 40         ;ZSU-23-4 Shilka to Tornado view2
	// 477 PILOTPAN	EQU	0   	;pilot's front panel
	// 478 PSIDEPAN	EQU	2		;pilot's left and right side panel
	// 479 NAVIGPAN	EQU	4		;navigator's front panel
	// 480 NSIDEPAN	EQU	6		;navigator's left and right side panel
	// 481 EXTRNPAN	EQU	8		;external panel
	// 482 LOOKDOWN	EQU	10		;look down panel
	// 483 LOOKUP		EQU	12		;look up panel
	// 484 MAPPAN		EQU	14		;map panel
	// 488 CREW_PILOT	EQU	0		;pilot in control
	// 489 CREW_NAVIG	EQU	2		;navigator in control
	// 493 AUTO_OFF	EQU	0		;off (manual)
	// 494 AUTO_APPROACH	EQU	2		;approach (autoland)
	// 495 AUTO_TRACK	EQU	4		;track acquire (fly to next waypoint)
	// 496 AUTO_HOLD	EQU	6		;altitude and heading hold
	// 497 AUTO_TF		EQU	8		;terrain follow
	// 501 ALT_MANUAL	EQU	0
	// 502 ALT_APPROACH	EQU	2
	// 503 ALT_ACQUIRE	EQU	4
	// 504 ALT_TF		EQU	6
	// 508 HDG_MANUAL	EQU	0
	// 509 HDG_APPROACH	EQU	2
	// 510 HDG_ACQUIRE	EQU	4
	// 511 HDG_TRACK	EQU	6
	// 515 JET_NULL	EQU	0		;nothing
	// 516 JET_EXT_TANKS	EQU	1		;ext fuel tanks
	// 517 JET_EXT_STORES	EQU	2		;ext fuel tanks + ext stores
	// 518 JET_ALL		EQU	3		;ext fuel tanks + ext stores + int fuel
	// 522 DIE_QUIT	EQU	1		;quit game
	// 523 DIE_HYPOXIA	EQU	2		;lack of oxygen
	// 524 DIE_BREAK_UP	EQU	3		;break up due to buffeting
	// 525 DIE_CRASH_HILL	EQU	4		;crashed into hill
	// 526 DIE_CRASH_GND	EQU	5		;crashed into ground
	// 527 DIE_DITCHED	EQU	6		;ditched
	// 528 DIE_GND_SPD_HI	EQU	7		;crashed - ground speed too high
	// 529 DIE_SINK_HI	EQU	8		;crashed - sink rate too high
	// 530 DIE_ROLL_HI	EQU	9		;crashed - roll too high on landing
	// 531 DIE_NOSE_WHEEL	EQU	10		;crashed - nose wheel collapsed
	// 532 DIE_TAIL_SCRAPE	EQU	11		;crashed - tail scrape on landing
	// 533 DIE_COLLAPSE	EQU	12		;crashed - gear collapsed
	// 534 DIE_FIRE	EQU	13		;destroyed by fire
	// 535 DIE_EJECT	EQU	14		;ejected
	// 536 DIE_MISSILE	EQU	15		;shot down by air-to-air missile
	// 537 DIE_CANNON	EQU	16		;shot down by cannon fire
	// 538 DIE_SAM		EQU	17		;shot down by surface-to-air missile
	// 539 DIE_AAA		EQU	18		;shot down by anti-aircraft artillery
	// 540 DIE_GND_EXPLO	EQU	19		;destroyed by ground explosion
	// 541 DIE_AIR_EXPLO	EQU	20		;destroyed by air explosion
	// 542 DIE_HIT_GND_OBJ	EQU	21		;crashed into ground object
	// 543 DIE_HIT_MOB_OBJ	EQU	22		;crashed into mobile object
	// 544 DIE_2_PLYR_WIN	EQU	23		;two player win
	// 545 DIE_2_PLYR_DRAW	EQU	24		;two player draw
	// 546 DIE_2_PLYR_LOSE	EQU	25		;two player lose
	// 550 SYS_ERR_MOUSE	EQU	255		;mouse driver not present
	// 551 SYS_ERR_PANELS	EQU	254		;error occurred loading panel data
	// 552 SYS_ERR_RGB	EQU	253		;error occurred loading palette RGB data
	// 553 SYS_ERR_LD_GAME	EQU	252		;error occurred loading GAMEPLAY.IN
	// 554 SYS_ERR_SV_GAME	EQU	251		;error occurred saving GAMEPLAY.OUT
	// 555 SYS_ERR_LD_LYR	EQU	250		;error occurred loading LAYER.IN
	// 556 SYS_ERR_LD_OBJ	EQU	249		;error occurred loading OBSECDEF.IN
	// 557 SYS_ERR_SV_OBJ	EQU	248		;error occurred saving OBSECDEF.OUT
	// 558 SYS_ERR_LD_MOB	EQU	247		;error occurred loading MSECDEF.IN
	// 559 SYS_ERR_SV_MOB	EQU	246		;error occurred saving MSECDEF.OUT
	// 560 SYS_ERR_MAP_OK	EQU	245		;completed map test ok
	// 561 SYS_ERR_RESIZE	EQU	244		;error occurred resizing memory
	// 562 SYS_ERR_SMEM	EQU	243		;error occurred allocating memory for sound driver
	// 563 SYS_ERR_SDRVR	EQU	242		;error occurred loading sound driver
	// 564 SYS_ERR_SCARD	EQU	241		;sound card not present
	// 565 SYS_ERR_LD_PIC	EQU	240		;error occurred loading digitized picture file
	// 566 SYS_ERR_LD_PREV	EQU	239		;error occurred loading PREVIEW.BT2
	// 567 SYS_ERR_SV_IMP	EQU	238		;error occurred saving IMPACT.OUT
	// 568 SYS_ERR_LD_MISC	EQU	237		;error occurred loading MISCDATA.IN
	// 569 SYS_ERR_TIMEOUT	EQU	236		;global timeout (end of demo)
	// 570 SYS_ERR_SYNC_TO	EQU	235		;comms sync timeout / user abort
	// 571 SYS_ERR_MMEM	EQU	234		;error occurred allocating memory for music driver
	// 572 SYS_ERR_MDRVR	EQU	233		;error occurred loading music driver
	// 573 SYS_ERR_MCARD	EQU	232		;music card not present
	// 577 DIP_GLOC	EQU	00000001b	;blackout / redout
	// 578 DIP_HYPOXIA	EQU	00000010b	;lack of oxygen
	// 579 DIP_EJECT	EQU	00000100b	;eject
	// 580 DIP_DESTROYED	EQU	00001000b	;aircraft destroyed
	// 581 DIP_DEMO	EQU	10000000b	;demo mode
	// 601 WAY_REC_SIZE	EQU	TYPE WAYPOINT
	// 602 WP_SPEED	EQU	WP_TIME		;time / speed share same location
	// 604 WP_TYPE		EQU	00000001b	;1 = target (fly over waypoint)
	// 606 WP_LINK		EQU	00000010b	;1 = link back to waypoint (where WP_HERE = 1)
	// 608 WP_HERE		EQU	00000100b	;1 = link back to here label
	// 610 WP_TF		EQU	00001000b	;1 = terrain follow to waypoint
	// 612 WP_ILS		EQU	00010000b	;1 = fly ILS glide slope to waypoint (WP_TYPE = 1)
	// 614 WP_COORD	EQU	00100000b	;1 = calc speed to arrive at specified time
	// 616 WP_BREAK	EQU	01000000b	;1 = break to here to land label (WP_TYPE = 1)
	// 618 WP_VALID	EQU	10000000b	;1 = waypoint valid
	// 620 NUM_WP_LONG	EQU	16		;number of waypoints for long route
	// 621 NUM_WP_SHORT	EQU	9		;number of waypoints for short route
	// 630 WPACK_MODE_MASK	EQU	00001111b
	// 631 WPACK_NUM_MASK	EQU	11110000b
	// 632 WPACK_NULL	EQU	0		;no package
	// 633 WPACK_GPB1000	EQU	2		;GPB1000 (laydown)
	// 634 WPACK_RET1000	EQU	4		;RET1000 (laydown)
	// 635 WPACK_LGB1000	EQU	6		;LGB1000 (laser guided)
	// 636 WPACK_BL755	EQU	8		;BL755 (laydown)
	// 637 WPACK_JP233	EQU	10		;JP233 (laydown)
	// 638 WPACK_ALARM	EQU	12		;ALARM (indirect)
	// 639 WPACK_AGM	EQU	14		;AGM (ALARM direct)
	// 643 NUL_RADAR	EQU	0
	// 644 GND_RADAR	EQU	2
	// 645 AIR_RADAR	EQU	4
	// 663 AF_REC_SIZE	EQU	TYPE AIRFIELD
	// 664 NUM_AIRFIELDS	EQU	4
	// 668 DEAD		EQU	0
	// 669 ALLIED		EQU	1
	// 670 ENEMY		EQU	2
	// 674 DRONE_UNKNOWN	EQU	0
	// 675 DRONE_AIRCRAFT	EQU	2
	// 676 DRONE_HELICOPT	EQU	4
	// 677 DRONE_TRUCK	EQU	6
	// 678 DRONE_TRAIN	EQU	8
	// 687 NUM_DRONES	EQU	90
	// 691 _DRONE_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_TYPE
	// 693 _DRONE_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_SIDE
	// 695 _DRONE_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+DRONE_EVENT
	// 712 VEH_REC_SIZE	EQU	TYPE VEHICLE
	// 713 NEXT_VEHICLE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_REC_SIZE
	// 717 _VEH_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DRONE
	// 719 _VEH_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_SIDE
	// 721 _VEH_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_EVENT
	// 723 _VEH_NODE_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_NODE_PTR
	// 725 _VEH_DIST	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST
	// 727 _VEH_DIST_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_DIST_FINE
	// 729 _VEH_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_XFINE
	// 731 _VEH_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_YFINE
	// 733 _VEH_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+VEH_ZFINE
	// 747 CNVY_REC_SIZE	EQU	TYPE CONVOY
	// 748 TRUCK		EQU	0
	// 749 TRAIN		EQU	2
	// 750 NUM_TRUCKS	EQU	4
	// 751 NUM_TRAINS	EQU	8
	// 767 ROUTE_REC_SIZE	EQU	TYPE ROUTE_NODE
	// 768 NUM_ROUTE_NODES	EQU	32		;num route nodes per route
	// 772 RN_END		EQU	00000001b	;end of route (terminate here)
	// 773 RN_LINK		EQU	00000010b	;link back to first node
	// 775 RN_EVENT	EQU	00000100b	;stop here and wait for event
	// 776 RN_DELAY	EQU	00001000b	;stop here and wait for delay period
	// 778 RN_UPSLOPE	EQU	00010000b	;start bridge ramp ascent here
	// 779 RN_DNSLOPE	EQU	00100000b	;start bridge ramp descent here
	// 792 RED_OXY		EQU	0000000000000001b	;oxygen system pressure low
	// 793 RED_L_FIRE	EQU	0000000000000010b	;left engine fire
	// 794 RED_R_FIRE	EQU	0000000000000100b	;right engine fire
	// 795 RED_AUT		EQU	0000000000001000b	;auto-pilot disengage
	// 796 RED_REV		EQU	0000000000010000b	;thrust reversers failure
	// 797 RED_SPILS	EQU	0000000000100000b	;SPILS failure
	// 798 RED_UC		EQU	0000000001000000b	;gear damaged (IAS > 350kts)
	// 799 RED_FUEL	EQU	0000000010000000b	;fuel low
	// 800 RED_L_ENG	EQU	0000000100000000b	;left engine failure
	// 801 RED_R_ENG	EQU	0000001000000000b	;right engine failure
	// 803 RED_CANCEL	EQU	NOT(RED_AUT)
	// 804 AMB_CNFG	EQU	0000000000000001b	;config error
	// 805 AMB_ADC		EQU	0000000000000010b	;air data computer failure
	// 806 AMB_ECM		EQU	0000000000000100b	;ECM failure
	// 807 AMB_UC		EQU	0000000000001000b	;gear warning (IAS > 250kts)
	// 808 AMB_WB		EQU	0000000000010000b	;wheelbrakes failure
	// 809 AMB_AB		EQU	0000000000100000b	;airbrakes failure
	// 810 AMB_FLPS	EQU	0000000001000000b	;flaps failure
	// 811 AMB_SWP		EQU	0000000010000000b	;sweep failure
	// 812 AMB_HUD		EQU	0000000100000000b	;HUD failure
	// 813 AMB_MFD1	EQU	0000001000000000b	;pilot's MFD failure
	// 814 AMB_MFD2	EQU	0000010000000000b	;navig's MFD failure
	// 815 AMB_L_TAB	EQU	0000100000000000b	;lh TAB failure
	// 816 AMB_R_TAB	EQU	0001000000000000b	;rh TAB failure
	// 817 AMB_RAD		EQU	0010000000000000b	;radar failure
	// 818 AMB_RWR		EQU	0100000000000000b	;RWR failure
	// 820 AMB_CANCEL	EQU	NOT(AMB_CNFG+AMB_UC)
	// 864 AC_REC_SIZE	EQU	TYPE AIRCRAFT
	// 865 AC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_REC_SIZE
	// 869 _AC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE
	// 871 _AC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SIDE
	// 873 _AC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT
	// 875 _AC_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TYPE
	// 877 _AC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DELAY
	// 879 _AC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DRONE_NUM
	// 881 _AC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVENT_NUM
	// 883 _AC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_CTRL_MODE
	// 885 _AC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WP_PTR
	// 887 _AC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_XFINE
	// 889 _AC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_YFINE
	// 891 _AC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ZFINE
	// 893 _AC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_HFINE
	// 895 _AC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PFINE
	// 897 _AC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_RFINE
	// 899 _AC_VTAS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS
	// 901 _AC_VTAS_FINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_VTAS_FINE
	// 903 _AC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_LIFT_VCTR
	// 905 _AC_AB_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AB_DELAY
	// 907 _AC_SWEEP_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SWEEP_DELAY
	// 909 _AC_TAXI_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_PTR
	// 911 _AC_TAXI_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_XFT
	// 913 _AC_TAXI_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_TAXI_YFT
	// 915 _AC_ARM_LOCK	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_ARM_LOCK
	// 917 _AC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_FLAGS
	// 919 _AC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_DECOY_TIMER
	// 921 _AC_AA_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_AA_TIMER
	// 923 _AC_OPP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_OPP_PTR
	// 925 _AC_PREV_PERR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PERR
	// 927 _AC_PREV_PRATE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_PREV_PRATE
	// 929 _AC_SHELLS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_SHELLS
	// 931 _AC_MISSILES	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_MISSILES
	// 933 _AC_WPN_INT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_WPN_INT
	// 935 _AC_EVADE_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_EVADE_TIMER
	// 937 _AC_GMAX_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+AC_GMAX_TIMER
	// 941 AC_WP_NULL	EQU	0		;no action
	// 942 AC_WP_TAKEOFF	EQU	2		;takeoff
	// 943 AC_WP_AIRBORNE	EQU	4		;start airborne
	// 944 AC_WP_TAXI	EQU	6		;taxi off runway
	// 945 AC_WP_RESTART	EQU	8		;resupply then restart
	// 949 GR4_TORNADO	EQU	0
	// 950 MIG27_FLOGGER	EQU	2
	// 951 F3_TORNADO	EQU	4
	// 952 MIG31_FOXHOUND	EQU	6
	// 953 F15_EAGLE	EQU	8
	// 954 SU27_FLANKER	EQU	10
	// 955 F16_FALCON	EQU	12
	// 956 MIG29_FULCRUM	EQU	14
	// 957 A10_THUNDERBOLT	EQU	16
	// 958 SU25_FROGFOOT	EQU	18
	// 959 E3D_SENTRY	EQU	20
	// 960 IL76_MAINSTAY	EQU	22
	// 961 C130_HERCULES	EQU	24
	// 962 IL76_CANDID	EQU	26
	// 966 AFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 967 AFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 968 AFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 969 AFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 970 AFLG_EVADE_HI	EQU	0000000000010000b	;evade missile (pull up)
	// 971 AFLG_EVADE_LO	EQU	0000000000100000b	;evade missile (roll and pull)
	// 972 AFLG_GMAX	EQU	0000000001000000b	;hard manoeuvring
	// 973 AFLG_UPRIGHT	EQU	0000000010000000b	;fly upright to break
	// 974 AFLG_BREAK	EQU	0000000100000000b	;break to land
	// 1003 HC_REC_SIZE	EQU	TYPE HELICOPTER
	// 1004 HC_WAYPOINTS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_REC_SIZE
	// 1008 _HC_DRONE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE
	// 1010 _HC_SIDE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_SIDE
	// 1012 _HC_EVENT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT
	// 1014 _HC_TYPE       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_TYPE
	// 1016 _HC_DELAY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DELAY
	// 1018 _HC_DRONE_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DRONE_NUM
	// 1020 _HC_EVENT_NUM	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_EVENT_NUM
	// 1022 _HC_CTRL_MODE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_CTRL_MODE
	// 1024 _HC_WP_PTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_WP_PTR
	// 1026 _HC_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_XFINE
	// 1028 _HC_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_YFINE
	// 1030 _HC_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ZFINE
	// 1032 _HC_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_HFINE
	// 1034 _HC_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_PFINE
	// 1036 _HC_RFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_RFINE
	// 1038 _HC_VTAS       	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS
	// 1040 _HC_VTAS_FINE  	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_VTAS_FINE
	// 1042 _HC_LIFT_VCTR	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_LIFT_VCTR
	// 1044 _HC_ACCEL_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_ACCEL_PFINE
	// 1046 _HC_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_FLAGS
	// 1048 _HC_DECOY_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+HC_DECOY_TIMER
	// 1052 HC_WP_NULL	EQU	0		;no action
	// 1053 HC_WP_TAKEOFF	EQU	2		;takeoff
	// 1054 HC_WP_AIRBORNE	EQU	4		;start airborne
	// 1055 HC_WP_STOP	EQU	6		;stop
	// 1056 HC_WP_RESTART	EQU	8		;resupply then restart
	// 1060 AH64_APACHE	EQU	0
	// 1061 MI24_HIND	EQU	2
	// 1062 CH47_CHINOOK	EQU	4
	// 1063 MI26_HALO	EQU	6
	// 1067 HFLG_IR_LOCK	EQU	0000000000000001b	;IR guided missile has lock
	// 1068 HFLG_RAD_LOCK	EQU	0000000000000010b	;radar guided missile has lock
	// 1069 HFLG_REL_CHAFF	EQU	0000000000000100b	;released chaff
	// 1070 HFLG_REL_FLARE	EQU	0000000000001000b	;released flare
	// 1075 OBJECT_LIGHTS	EQU	00000000b	;0 = night lighting off
	// 1076 OBJECT_ENEMY	EQU	01000000b	;1 = enemy
	// 1077 OBJECT_DEAD	EQU	10000000b	;1 = dead
	// 1078 OBJECT_CLEAR	EQU	11000000b	;clear animation with mask
	// 1084 WING_SWEEP_FWD	EQU	00000000b
	// 1085 WING_SWEEP_MID	EQU	00000001b
	// 1086 WING_SWEEP_BCK	EQU	00000010b
	// 1087 WING_SWEEP_ALL	EQU	00000011b
	// 1088 GEAR_DOWN	EQU	00000100b
	// 1089 REHEAT_L_ENG	EQU	00001000b
	// 1090 REHEAT_R_ENG	EQU	00010000b
	// 1091 REHEAT_ALL	EQU	00011000b
	// 1092 AC_SPECIALS	EQU	00100000b
	// 1098 ROTOR_POS1	EQU	00000000b
	// 1099 ROTOR_POS2	EQU	00000001b
	// 1100 ROTOR_POS3	EQU	00000010b
	// 1101 ROTOR_ALL	EQU	00000011b
	// 1107 HEADLAMPS	EQU	00000001b
	// 1111 NULL_WEAPON	EQU	-1
	// 1113 GPB1000		EQU	0		;1000lb slick bomb
	// 1114 RET1000		EQU	2		;1000lb retarded bomb
	// 1115 LGB1000		EQU	4		;1000lb laser guided bomb (Paveway II)
	// 1116 BL755		EQU	6		;cluster bomb
	// 1117 JP233		EQU	8		;JP233
	// 1118 ALARM		EQU	10		;ALARM
	// 1120 CANNON		EQU	12		;cannon
	// 1121 SIDEWINDER	EQU	14		;Sidewinder (AIM-9L)
	// 1122 SKYFLASH	EQU	16		;active Sky Flash (ADV only)
	// 1124 PATRIOT		EQU	18		;radar guided SAM
	// 1125 GECKO		EQU	20		;IR guided SAM
	// 1127 CHAFF		EQU	22
	// 1128 FLARE		EQU	24
	// 1132 EXT_GPB1000   	EQU	0		;1000lb slick bomb
	// 1133 EXT_RET1000   	EQU	2		;1000lb retarded bomb
	// 1134 EXT_LGB1000   	EQU	4		;1000lb laser guided bomb (Paveway II)
	// 1135 EXT_BL755     	EQU	6		;cluster bomb
	// 1136 EXT_JP233     	EQU	8		;JP233
	// 1137 EXT_ALARM     	EQU	10		;ALARM
	// 1138 EXT_SIDEWINDER	EQU	12		;Sidewinder (AIM-9L)
	// 1139 EXT_SKYFLASH	EQU	14		;active Sky Flash (ADV only)
	// 1140 EXT_BOZ100    	EQU	16		;chaff / flare dispenser (IDS / ECR only)
	// 1141 EXT_SKYSHADOW	EQU	18		;ECM jamming pod (IDS / ECR only)
	// 1142 EXT_DROPTANK	EQU	20		;external fuel tank
	// 1146 MAX_CANNON	EQU	180
	// 1147 MAX_CHAFF	EQU	120
	// 1148 MAX_FLARES	EQU	28
	// 1152 RETARDED_BOMB	EQU	00000001b	;0 = slick bomb, 1 = retarded bomb
	// 1153 CASING_OFF	EQU	00000010b	;0 = casing on, 1 = casing off
	// 1154 SPLASH1		EQU	00000001b	;0 = stage 2, 1 = stage 1
	// 1155 AIRBURST1	EQU	5		;first stage of airburst animation
	// 1156 FLAME		EQU	00000001b	;0 = no flame, 1 = flame
	// 1157 CHUTE		EQU	00000010b	;0 = no chute, 1 = chute
	// 1159 RHS_CANNON	EQU	00000001b	;rhs cannon
	// 1160 LHS_CANNON	EQU	00000010b	;lhs cannon
	// 1180 WPN_REC_SIZE	EQU	TYPE WEAPON
	// 1181 NUM_WEAPONS	EQU	128
	// 1182 WPN_DATA_SIZE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_REC_SIZE
	// 1187 WPN_BOMB_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 1188 WPN_BOMB_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 1190 WPN_LGB_TGT	EQU	WPN_USERW1	;target waypoint ptr
	// 1191 WPN_LGB_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 1193 WPN_CAN_HVEL	EQU	WPN_USERW1	;horizontal velocity (ft/sec * 8)
	// 1194 WPN_CAN_VVEL	EQU	WPN_USERW2	;vertical velocity (ft/sec * 8)
	// 1195 WPN_CAN_TIMER	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 1196 WPN_CAN_SRC	EQU	WPN_USERW4	;source ptr (source of cannon fire)
	// 1199 WPN_MISS_TGT	EQU	WPN_USERW1	;target ptr (-1 = target lost)
	// 1200 WPN_MISS_VEL	EQU	WPN_USERW2	;velocity (ft/sec * 8)
	// 1201 WPN_MISS_ACCEL	EQU	WPN_USERW3	;acceleration (ft/sec/sec * 8)
	// 1202 WPN_MISS_TIMER	EQU	WPN_USERW4	;burntime / lifetime (secs * 100)
	// 1203 WPN_MISS_DECOY	EQU	WPN_USERW5	;decoy distraction timer (secs * 100)
	// 1205 WPN_ALM_VEL	EQU	WPN_USERW1	;velocity (ft/sec * 8)
	// 1206 WPN_ALM_ACCEL	EQU	WPN_USERW2	;acceleration (ft/sec/sec * 8)
	// 1207 WPN_ALM_TIMER	EQU	WPN_USERW3	;burntime / lifetime (secs * 100)
	// 1208 WPN_ALM_XSEC	EQU	WPN_USERW4	;xsec )
	// 1209 WPN_ALM_YSEC	EQU	WPN_USERW5	;ysec )  target
	// 1210 WPN_ALM_XFT	EQU	WPN_USERW6	;xft  ) position
	// 1211 WPN_ALM_YFT	EQU	WPN_USERW7	;yft  )
	// 1213 WPN_DECOY_HVEL	EQU	WPN_BOMB_HVEL	;horizontal velocity (ft/sec * 8)
	// 1214 WPN_DECOY_VVEL	EQU	WPN_BOMB_VVEL	;vertical velocity (ft/sec * 8)
	// 1215 WPN_DECOY_LIFE	EQU	WPN_USERW3	;lifetime (secs * 100)
	// 1219 WFLG_ALARM_MODE	EQU	0000000000000111b	;ALARM control mode (DO NOT CHANGE)
	// 1220 WFLG_TORNADO	EQU	0000000000001000b	;Tornado weapon release
	// 1221 WFLG_SPLASH	EQU	0000000000010000b	;draw weapon as splash
	// 1222 WFLG_UNGUIDED	EQU	0000000000100000b	;LGB assumes GPB behaviour
	// 1223 WFLG_BOMBLET	EQU	0000000001000000b	;BL755 bomblet
	// 1224 WFLG_BURNOUT	EQU	0000000010000000b	;missile motor burnt out
	// 1225 WFLG_IR_SEEK	EQU	0000000100000000b	;IR missile (else assume radar)
	// 1226 WFLG_AIRBURST	EQU	0000001000000000b	;draw weapon as airburst
	// 1227 WFLG_NO_RADAR	EQU	0000010000000000b	;no radar targets for ALARM
	// 1228 WFLG_TLOCK	EQU	0000100000000000b	;weapon locked onto Tornado
	// 1230 ALARM_DIRECT	EQU	0		;direct
	// 1231 ALARM_KILL	EQU	1		;kill
	// 1232 ALARM_GUIDE	EQU	2		;guide
	// 1233 ALARM_ZOOM	EQU	3		;zoom climb
	// 1234 ALARM_FREEFALL	EQU	4		;freefall
	// 1235 ALARM_LOITER	EQU	5		;loiter
	// 1236 ALARM_DIVE	EQU	6		;dive
	// 1240 _WPN_TYPE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_TYPE
	// 1242 _WPN_FLAGS	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_FLAGS
	// 1244 _WPN_HFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_HFINE
	// 1246 _WPN_PFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_PFINE
	// 1248 _WPN_XFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_XFINE
	// 1250 _WPN_YFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_YFINE
	// 1252 _WPN_ZFINE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ZFINE
	// 1254 _WPN_USERW1	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW1
	// 1256 _WPN_USERW2	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW2
	// 1258 _WPN_USERW3	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW3
	// 1260 _WPN_USERW4	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_USERW4
	// 1261 _WPN_BOMB_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_HVEL
	// 1263 _WPN_BOMB_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_BOMB_VVEL
	// 1264 _WPN_LGB_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_TGT
	// 1266 _WPN_LGB_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_LGB_VEL
	// 1267 _WPN_CAN_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_HVEL
	// 1269 _WPN_CAN_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_VVEL
	// 1271 _WPN_CAN_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_CAN_TIMER
	// 1272 _WPN_MISS_TGT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TGT
	// 1274 _WPN_MISS_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_VEL
	// 1276 _WPN_MISS_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_ACCEL
	// 1278 _WPN_MISS_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_TIMER
	// 1280 _WPN_MISS_DECOY	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_MISS_DECOY
	// 1281 _WPN_ALM_VEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_VEL
	// 1283 _WPN_ALM_ACCEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_ACCEL
	// 1285 _WPN_ALM_TIMER	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_TIMER
	// 1287 _WPN_ALM_XSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XSEC
	// 1289 _WPN_ALM_YSEC	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YSEC
	// 1291 _WPN_ALM_XFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_XFT
	// 1293 _WPN_ALM_YFT	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_ALM_YFT
	// 1294 _WPN_DECOY_HVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_HVEL
	// 1296 _WPN_DECOY_VVEL	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_VVEL
	// 1298 _WPN_DECOY_LIFE	EQU	MOB_REC_SIZE+VIEW_REC_SIZE+WPN_DECOY_LIFE
	// 1302 WPN_EFFECT1	EQU	0
	// 1303 WPN_EFFECT2	EQU	1
	// 1304 WPN_EFFECT3	EQU	2
	// 1305 WPN_EFFECT4	EQU	3
	// 1315 PACK_REC_SIZE	EQU	TYPE PACKAGE
	// 1316 NUM_PACKAGES	EQU	3
	// 1320 ARM_OFF		EQU	0		;off
	// 1321 ARM_MANUAL	EQU	2		;manual bombing
	// 1322 ARM_LAYDOWN	EQU	4		;laydown bombing
	// 1323 ARM_LOFT	EQU	6		;loft bombing
	// 1324 ARM_LGB		EQU	8		;laser guided bomb
	// 1325 ARM_JP233	EQU	10		;JP233
	// 1326 ARM_ALARM_DIR	EQU	12		;ALARM (direct attack mode)
	// 1327 ARM_ALARM_IND	EQU	14		;ALARM (indirect attack mode)
	// 1328 ARM_CANNON	EQU	16		;cannon
	// 1329 ARM_SIDEWINDER	EQU	18		;Sidewinder
	// 1330 ARM_SKYFLASH	EQU	20		;Sky Flash
	// 1336 SHAKE_NOSE_DOWN	EQU	5		;nose wheel touchdown
	// 1337 SHAKE_LAND_GOOD	EQU	10		;good landing
	// 1338 SHAKE_LAND_HVY	EQU	15		;heavy landing
	// 1339 SHAKE_CANNON	EQU	45		;cannon fire
	// 1340 SHAKE_JP233	EQU	50		;JP233 release
	// 1341 SHAKE_DAMAGE	EQU	75		;hit by cannon fire / explosion damage
	// 1342 SHAKE_COLLIDE	EQU	100		;collide with object
	// 1344 SHAKE_BRAKE	EQU	240		;not moving, brakes on and reheat on
	// 1345 SHAKE_BUFFET	EQU	245		;buffet due to excess speed wrt wing sweep
	// 1346 SHAKE_OFF_HARD	EQU	250		;off hard surface (runway, taxiway etc.)
	// 1347 SHAKE_WHEELS_UP	EQU	255		;wheels up landing
	// 1351 LAND_GOOD	EQU	00000001b	;1 = good landing
	// 1352 LAND_HEAVY	EQU	00000010b	;1 = heavy landing
	// 1353 LAND_WHEELS_UP	EQU	00000100b	;1 = wheels up landing
	// 1354 LAND_DEAD_STICK	EQU	00001000b	;1 = dead stick landing
	// 1355 LAND_ROAD	EQU	00010000b	;1 = landed on road
	// 1356 LAND_ENEMY	EQU	00100000b	;1 = landed in enemy territory
	// 1357 LAND_STATIONARY	EQU	01000000b	;1 = stationary (when quit)
	// 1361 MINOR_DAMAGE	EQU	1
	// 1362 MAJOR_DAMAGE	EQU	2
	// 1363 TOTAL_DAMAGE	EQU	3
	// 1374 ARAD_RNG_LO	EQU	ARAD_RNG
	// 1375 ARAD_RNG_HI	EQU	ARAD_RNG+2
	// 1376 ARAD_REC_SIZE	EQU	TYPE ARAD_TRACK
	// 1377 NUM_TRACKS	EQU	40		;max number of aircraft radar can track
	// 1381 ARAD_MIN_RANGE	EQU	0		;short range (guns)
	// 1382 ARAD_MED_RANGE	EQU	2		;medium range (Sidewinder)
	// 1383 ARAD_MAX_RANGE	EQU	4		;long range (SkyFlash)
	// 1395 IMP_REC_SIZE	EQU	TYPE IMPACT
	// 1396 NUM_IMPACTS	EQU	128
	// 1400 SECT_ENEMY	EQU	10000000b	;1 = enemy occupied sector
	// 1401 SECT_SAM	EQU	01000000b	;1 = SAM in sector
	// 1402 SECT_AAA	EQU	00100000b	;1 = AAA in sector
	// 1403 SECT_EWR	EQU	00010000b	;1 = EWR in sector
	// 1404 SECT_EWR_NUM	EQU	00001111b	;enemy EWR number (0 .. 15)
	// 1410 E_EWR_FLOOR	EQU	00001111b	;enemy EWR floor
	// 1411 A_EWR_FLOOR	EQU	11110000b	;allied EWR floor
	// 1415 NUM_SAM_AAA	EQU	128
	// 1416 NUM_EWR		EQU	8
	// 1424 RAD_REC_SIZE	EQU	TYPE RADARS
	// 1428 EWR_GROUND	EQU	0		;ground object (SECDATA1)
	// 1429 EWR_MOBILE	EQU	2		;mobile object (MSECDATA1)
	// 1439 EWR_REC_SIZE	EQU	EWR
	// 1443 THREAT_SAM	EQU	0
	// 1444 THREAT_AAA	EQU	2
	// 1445 THREAT_EWR	EQU	4
	// 1446 THREAT_AC	EQU	6
	// 1447 THREAT_RAD_MSL	EQU	8
	// 1448 THREAT_IR_MSL	EQU	10
	// 1462 RWR_RNG_LO	EQU	RWR_RNG
	// 1463 RWR_RNG_HI	EQU	RWR_RNG+2
	// 1464 RWR_REC_SIZE	EQU	RWR
	// 1465 NUM_RWR_THREATS	EQU	16
	// 1469 RWR_SAM		EQU	00010000b
	// 1470 RWR_AAA		EQU	00001000b
	// 1471 RWR_EWR		EQU	00000100b
	// 1472 RWR_AC		EQU	00000010b
	// 1473 RWR_MSL		EQU	00000001b
	// 1478 DAM_HARD_MASK	EQU	00000011b	;(DO NOT CHANGE)
	// 1479 DAM_HARD1	EQU	00000000b	;soft
	// 1480 DAM_HARD2	EQU	00000001b
	// 1481 DAM_HARD3	EQU	00000010b
	// 1482 DAM_HARD4	EQU	00000011b	;hard
	// 1484 DAM_DEBRIS_MASK	EQU	00011100b	;(DO NOT CHANGE)
	// 1485 DAM_DEBRIS1	EQU	00000000b	;crater 1	) MOBILES CAN ONLY
	// 1486 DAM_DEBRIS2	EQU	00000100b	;crater 2	) USE THESE VALUES
	// 1487 DAM_DEBRIS3	EQU	00001000b	;crater 3
	// 1488 DAM_DEBRIS4	EQU	00001100b	;NS road bridge
	// 1489 DAM_DEBRIS5	EQU	00010000b	;EW road bridge
	// 1490 DAM_DEBRIS6	EQU	00010100b	;NS rail bridge
	// 1491 DAM_DEBRIS7	EQU	00011000b	;EW rail bridge
	// 1492 DAM_DEBRIS8	EQU	00011100b	;embankment crater
	// 1495 DAM_EXPLO_MASK	EQU	11111111b	;(DO NOT CHANGE)
	// 1496 DAM_EXPLO1	EQU	00000000b	;burn only
	// 1497 DAM_EXPLO2	EQU	00100000b	;crater size 1 * 2
	// 1498 DAM_EXPLO3	EQU	01000000b	;crater size 2 * 2
	// 1499 DAM_EXPLO4	EQU	01100000b	;crater size 2 * 4
	// 1501 DAM_INVALID	EQU	10000000b	;(DO NOT CHANGE)
	// 1522 COMMS_REC_SIZE	EQU	TYPE COMMS
	// 1523 COMMS_ZFT_LO	EQU	COMMS_ZFT
	// 1524 COMMS_ZFT_HI	EQU	COMMS_ZFT+2
	// 1529 I_FIRE_CANNON	EQU	00000001b	;I have fired a cannon shell
	// 1530 I_FIRE_AIM9L	EQU	00000010b	;I have launched a Sidewinder
	// 1531 I_FIRE_SKYFLASH	EQU	00000100b	;I have launched a Sky Flash
	// 1532 I_REL_CHAFF	EQU	00001000b	;I have released chaff
	// 1533 I_REL_FLARE	EQU	00010000b	;I have released flare
	// 1534 I_EMIT_RADAR	EQU	00100000b	;I am emitting radar
	// 1535 I_EMIT_ECM	EQU	01000000b	;I am emitting ECM
	// 1536 I_ILLUM_YOU	EQU	10000000b	;I am illuminating you (on radar)
	// 1538 I_PAUSED	EQU	00000001b	;I have paused
	// 1539 I_RESUMED	EQU	00000010b	;I have resumed
	// 1541 I_NO_WEAPONS	EQU	00000001b	;I have no weapons
	// 1542 I_KILLED	EQU	00000010b	;I have been destroyed
	// 1543 I_EJECTED	EQU	00000100b	;I have ejected
	// 1544 I_QUIT		EQU	00001000b	;I have quit
	// 1545 I_KILLED_YOU	EQU	00010000b	;I have destroyed you
	// 1554 RDAM_REC_SIZE	EQU	TYPE RUNWAY_DAMAGE
	// 1555 NUM_RUNWAYS	EQU	8
	// 1575 OPT_DEBUG  	EQU	1		;1 = enabled, 0 = disabled
	// 1579 OPT_TURBO	EQU	0		;1 = enabled, 0 = disabled
	// 1583 OPT_PHOTO	EQU	0		;1 = enabled, 0 = disabled
	// 1587 OPT_TITLE_PIC	EQU	0		;1 = enabled, 0 = disabled
	// 1591 OPT_LOGO_PIC	EQU	0		;1 = enabled, 0 = disabled
	// 1595 OPT_DEMO	EQU	0		;0 = no demo
	// 1601 OPT_FLY_DEMO	EQU	0		;1 = enabled, 0 = disabled
	// 1605 OPT_PREVIEW	EQU	0		;1 = enabled, 0 = disabled
	// 1609 OPT_NO_PICS	EQU	0		;1 = enabled, 0 = disabled
	// 1613 OPT_HOLOBYTE	EQU	0		;1 = enabled, 0 = disabled
	// 1617 OPT_COKTEL	EQU	0		;1 = enabled, 0 = disabled
	// 1621 OPT_LEADER	EQU	0		;1 = enabled, 0 = disabled
	// 1625 OPT_SYSTEM4	EQU	0		;1 = enabled, 0 = disabled
	// 1648 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 1649 VP_ZFT_LO	EQU	VP_ZFT
	// 1650 VP_ZFT_HI	EQU	VP_ZFT+2
	// 1654 SEC_SCALE1 	EQU	0		;1/1 scale
	// 1655 SEC_SCALE2	EQU	2		;1/2 scale
	// 1656 SEC_SCALE8 	EQU	4		;1/8 scale
	// 1657 SEC_SCALE16 	EQU	6		;1/16 scale
	// 1661 INT_VIEWMODE	EQU	0		;internal views
	// 1662 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 1663 EXT_VIEWMODE	EQU	4		;external views
	// 1664 TV1_VIEWMODE	EQU	6		;TV1 display
	// 1665 TV2_VIEWMODE	EQU	8		;TV2 display
	// 1666 TV3_VIEWMODE	EQU	10		;TV3 display
	// 1667 TV4_VIEWMODE	EQU	12		;TV4 display
	// 1668 TV5_VIEWMODE	EQU	14		;TV5 display
	// 1669 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 1673 ROTATE_NULL	EQU	0		;no rotation
	// 1674 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 1675 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 1676 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 1677 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 1678 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 1679 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 1683 $MID		EQU	128
	// 1684 $0		EQU	0
	// 1685 $256		EQU	2
	// 1686 $512		EQU	4
	// 1687 $1024		EQU	8
	// 1688 $2048		EQU	16
	// 1689 $4096		EQU	32
	// 1690 $8192		EQU	64
	// 1699 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 1703 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 1704 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 1708 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 1709 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 1713 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 1717 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 1718 OBJ_SCALE2	EQU	2		;2/1 scale
	// 1719 OBJ_SCALE4	EQU	4		;4/1 scale
	// 1720 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 1721 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 1725 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 1726 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 1727 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 1728 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 1729 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 1733 @MID		EQU	64
	// 1734 @0		EQU	0
	// 1735 @16		EQU	2
	// 1736 @32		EQU	4
	// 1737 @48		EQU	6
	// 1738 @64		EQU	8
	// 1739 @80		EQU	10
	// 1740 @96		EQU	12
	// 1741 @112		EQU	14
	// 1742 @128		EQU	16
	// 1743 @192		EQU	24
	// 1744 @256		EQU	32
	// 1745 @384		EQU	48
	// 1746 @512		EQU	64
	// 1764 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 1766 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 1767 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 1769 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 1770 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 1771 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 1773 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 1775 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 1776 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 1777 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 1778 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 1779 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 1780 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 1782 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 1784 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 1785 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 1789 OTYPE_GROUND	EQU	0		;static ground objects
	// 1790 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 1791 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 1792 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 1793 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 1794 OTYPE_HILLFACE	EQU	10		;hill face
	// 1795 OTYPE_SMOKE	EQU	12		;smoke
	// 1809 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 1810 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 1814 NUM_OBJECTS	EQU	256		;max number of objects
	// 1815 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 1816 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 1817 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 1818 BEHIND_BIN	EQU	0		;behind bin index
	// 1819 IN_FRONT_BIN	EQU	2		;in front bin index
	// 1823 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 1824 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 1825 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 1826 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 1827 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 1828 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 1829 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 1839 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 1843 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 1844 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 1845 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 1846 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 1847 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 1848 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 1849 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 1850 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 1851 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 1852 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 1856 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 1862 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 1875 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 1886 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 1890 SURFACE_UNKNOWN	EQU	0
	// 1891 SURFACE_RUNWAY	EQU	2
	// 1892 SURFACE_TAXIWAY	EQU	4
	// 1893 SURFACE_HARD	EQU	6
	// 1894 SURFACE_ROAD	EQU	8
	// 1895 SURFACE_RAILWAY	EQU	10
	// 1896 SURFACE_RIVER	EQU	12
	// 1897 SURFACE_LAKE	EQU	14
	// 1901 NUM_CRATERS	EQU	128
	// 1902 CRATER_NULL	EQU	0
	// 1903 CRATER_SIZE1	EQU	1		;small
	// 1904 CRATER_SIZE2	EQU	2		;large
	// 1905 CRATER_HEAVE	EQU	3		;heave
	// 1906 CRATER_SHELL	EQU	4		;cannon shell
	// 1917 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 1921 NUM_SMOKE	EQU	128
	// 1923 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 1924 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 1925 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 1926 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 1927 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 1928 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 1929 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 1931 STYPE_NULL	EQU	0		;no smoke
	// 1932 STYPE_GND1	EQU	2		;ground smoke type 1
	// 1933 STYPE_AIR1	EQU	4		;air smoke type 1
	// 1949 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 1950 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 1951 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 1952 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 1954 MOB_A10			EQU	1
	// 1955 MOB_AH64		EQU	2
	// 1956 MOB_LOCO1		EQU	3
	// 1957 MOB_RLTANK1		EQU	4
	// 1958 MOB_HIND1		EQU	5
	// 1959 MOB_IL76		EQU	6
	// 1960 MOB_SU27_1		EQU	7
	// 1961 MOB_RDTNKR1		EQU	8
	// 1962 MOB_TORNADO1		EQU	9
	// 1963 MOB_SU25		EQU	10
	// 1964 MOB_C130		EQU	11
	// 1965 MOB_T80			EQU	12
	// 1966 MOB_CHINOOK		EQU	13
	// 1967 MOB_F16			EQU	14
	// 1968 MOB_MAZ543		EQU	15
	// 1969 MOB_MIG29		EQU	16
	// 1970 MOB_RLTTRANS		EQU	17
	// 1971 MOB_RLWAGONA		EQU	18
	// 1972 MOB_ZSU23		EQU	19
	// 1973 MOB_BMP2		EQU	20
	// 1974 MOB_E3D			EQU	21
	// 1975 MOB_F15			EQU	22
	// 1976 MOB_MOBRAD		EQU	23
	// 1977 MOB_ROMB		EQU	24
	// 1978 MOB_TORNADV1		EQU	25
	// 1979 MOB_AIRBURST		EQU	26
	// 1980 MOB_MIG31		EQU	27
	// 1981 MOB_AIM9L		EQU	28
	// 1982 MOB_CHAL1		EQU	29
	// 1983 MOB_MI26		EQU	30
	// 1984 MOB_MIG27_1		EQU	31
	// 1985 MOB_MLRS1		EQU	32
	// 1986 MOB_PAT1		EQU	33
	// 1987 MOB_WARRIOR1		EQU	34
	// 1988 MOB_CANCRAT		EQU	35
	// 1989 MOB_CRATER1M		EQU	36
	// 1990 MOB_CRATER2M		EQU	37
	// 1991 MOB_BOMB		EQU	38
	// 1992 MOB_ALARM		EQU	39
	// 1993 MOB_BOMBLET		EQU	40
	// 1994 MOB_LGB			EQU	41
	// 1995 MOB_HEAVE		EQU	42
	// 1996 MOB_SG357		EQU	43
	// 1997 MOB_SKYFLASH		EQU	44
	// 1998 MOB_SPLASH		EQU	45
	// 1999 MOB_FLARE		EQU	46
	// 2000 MOB_CHAFF		EQU	47
	// 2001 MOB_TRACER		EQU	48
	// 2002 MOB_TRACERB		EQU	49
	// 0 ;--------------------
	// 0 ;* miscellaneous data
	// 0 ;--------------------
	// 0 ;see VISDATA.INC
	// 0 ;see VISDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;num valid waypoints (always > 0)
	// 0 ;see MAINDATA.INC
	// 0 ;SHAKE Effects
	// 0 ;-------------------
	// 0 ;* waypoint pointers
	// 0 ;-------------------
	// 0 ;current waypoint ptr
	// 0 ;ptr to last valid waypoint
	// 0 ;-------------------
	// 0 ;* floating waypoint (target of opportunity, navigation aid etc.)
	// 0 ;-------------------
	// 0 ;* note: Always keep WP_TYPE = 1, WP_TF = 1 and WP_COORD = 0.
	// 0 ;------------------------------------
	// 0 ;* current waypoint range and bearing
	// 0 ;------------------------------------
	// 0 ;waypoint range
	// 0 ;waypoint bearing (pdeg)
	// 0 ;waypoint bearing (fine pdeg)
	// 0 ;waypoint range (nautical miles * 10)
	// 0 ;waypoint ETA (seconds) (-1 = invalid)
	// 0 ;waypoint time early / late (secs * 100)
	// 0 ; -32768 = invalid
	// 0 ;    < 0 = late
	// 0 ;    = 0 = on time
	// 0 ;    > 0 = early
	// 0 ;--------------
	// 0 ;* red warnings (see MAINDATA.INC)
	// 0 ;--------------
	// 0 ;on lamps (acknowledged failures)
	// 0 ;flashing lamps (new failures)
	// 0 ;----------------
	// 0 ;* amber warnings (see MAINDATA.INC)
	// 0 ;----------------
	// 0 ;on lamps (acknowledged failures)
	// 0 ;flashing lamps (new failures)
	// 0 ;---------------------
	// 0 ;* miscellaneous flags
	// 0 ;---------------------
	// 0 ;screen shake priority (see MAINDATA.INC)
	// 0 ;see MAINDATA.INC
	// 0 ;----------------
	// 0 ;* drone pointers (keep NUM_DRONES up to date - see MAINDATA.INC)
	// 0 ;----------------
	// 0 ;0
	// 0 ;1
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;8
	// 0 ;9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;24
	// 0 ;25
	// 0 ;26
	// 0 ;27
	// 0 ;28
	// 0 ;29
	// 0 ;30
	// 0 ;31
	// 0 ;32
	// 0 ;33
	// 0 ;34
	// 0 ;35
	// 0 ;36
	// 0 ;37
	// 0 ;38
	// 0 ;39
	// 0 ;40
	// 0 ;41
	// 0 ;42
	// 0 ;43
	// 0 ;44
	// 0 ;45
	// 0 ;46
	// 0 ;47
	// 0 ;48
	// 0 ;49
	// 0 ;50
	// 0 ;51
	// 0 ;52
	// 0 ;53
	// 0 ;54
	// 0 ;55
	// 0 ;56
	// 0 ;57
	// 0 ;58
	// 0 ;59
	// 0 ;60
	// 0 ;61
	// 0 ;62
	// 0 ;63
	// 0 ;64
	// 0 ;65
	// 0 ;66
	// 0 ;67
	// 0 ;68
	// 0 ;69
	// 0 ;70
	// 0 ;71
	// 0 ;72
	// 0 ;73
	// 0 ;74
	// 0 ;75
	// 0 ;76
	// 0 ;77
	// 0 ;78
	// 0 ;79
	// 0 ;80
	// 0 ;81
	// 0 ;82
	// 0 ;83
	// 0 ;84
	// 0 ;85
	// 0 ;86
	// 0 ;87
	// 0 ;88
	// 0 ;89
	// 0 ;----------------------------------------------
	// 0 ;* drone ptr lists required for drone view mode
	// 0 ;----------------------------------------------
	// 0 ;allied aircraft
	// 0 ;enemy aircraft
	// 0 ;allied ground vehicles
	// 0 ;enemy ground vehicles
	// 0 ;----------------------------------------------------------------------------
	// 0 ;---------------------
	// 0 ;* game play data size
	// 0 ;---------------------
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;data start datum
	// 0 ;--------------------
	// 0 ;* miscellaneous data
	// 0 ;--------------------
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;start airborne airspeed (ias) 200 .. 800
	// 0 ;time limit for "global timeout" (secs * 100)
	// 0 ;allied pilot skill (0 .. 32767)
	// 0 ;enemy pilot skill (0 .. 32767)
	// 0 ;max crosswind velocity (ft/sec * 8)
	// 0 ;0 = no crosswinds
	// 0 ;range = XWIND_VMIN .. XWIND_VMAX
	// 0 ;crosswind direction (0 .. 511 pdegs)
	// 0 ;---------------------
	// 0 ;* miscellaneous flags
	// 0 ;---------------------
	// 0 ;1 = map explore mode enabled
	// 0 ;0 = no preview
	// 0 ;1 = object preview
	// 0 ;2 = auto-run object preview
	// 0 ;0 = no demo
	// 0 ;1 = drone cycling demo
	// 0 ;2 = flying demo
	// 0 ;1 = collision detection off
	// 0 ;see MAINDATA.INC (init to 0)
	// 0 ;see MAINDATA.INC (init to 0)
	// 0 ;1 = infinite weapons
	// 0 ;1 = infinite fuel
	// 0 ;1 = no blackouts or redouts
	// 0 ;1 = shown, 0 = hidden
	// 0 ;NightVisionState DB 0 ;1 = NVG is on, 0 = off
	// 0 ;1 = two player mode enabled
	// 0 ;see COMMS.ASM
	// 0 ;see COMMS.ASM
	// 0 ;see MAINDATA.INC
	// 0 ;see MAINDATA.INC
	// 0 ;1 = ejected
	// 0 ;1 = start airborne
	// 0 ;1 = start in track mode
	// 0 ;1 = start with damaged lh engine
	// 0 ;1 = start with damaged rh engine
	// 0 ;1 = set fixed weight to minimum
	// 0 ;1 = no hostile fire (allied or enemy)
	// 0 ;1 = global timeout enabled
	// 0 ;number of object crashed into (ground / mobile)
	// 0 ;---------------
	// 0 ;* 24 hour clock
	// 0 ;---------------
	// 0 ;* Note: -1 hours indicates that the time has not been passed from mission
	// 0 ;*       planning so read actual time from real-time clock (see InitGame).
	// 0 ;see MAINDATA.INC
	// 0 ;-------------------------
	// 0 ;* Tornado external stores
	// 0 ;-------------------------
	// 0 ;EXT_GPB1000
	// 0 ;EXT_RET1000
	// 0 ;EXT_LGB1000
	// 0 ;EXT_BL755
	// 0 ;EXT_JP233
	// 0 ;EXT_ALARM
	// 0 ;EXT_SIDEWINDER
	// 0 ;EXT_SKYFLASH (ADV only)
	// 0 ;EXT_BOZ100 (IDS / ECR only)
	// 0 ;EXT_SKYSHADOW (IDS / ECR only)
	// 0 ;EXT_DROPTANK
	// 0 ;------------------
	// 0 ;* weapons packages
	// 0 ;------------------
	// 0 ;Available ordnance:
	// 0 ;GPB1000  RET1000 LGB1000 BL755 JP233  ALARM BOZ100 SKYSHADOW
	// 0 ;Available arming modes:
	// 0 ;ARM_OFF		= off
	// 0 ;ARM_MANUAL	= manual bombing
	// 0 ;ARM_LAYDOWN	= laydown bombing
	// 0 ;ARM_LOFT	= loft bombing
	// 0 ;ARM_LGB		= laser guided bomb
	// 0 ;ARM_JP233	= JP233
	// 0 ;ARM_ALARM_DIR = ;ALARM (direct attack mode)
	// 0 ;ARM_ALARM_IND = ALARM (indirect attack mode)
	// 0 ;ARM_CANNON = cannon
	// 0 ;ARM_SIDEWINDER = Sidewinder
	// 0 ;ARM_SKYFLASH = Skyflas
	// 0 ;Previously the default IDS package was:
	// 0 ;PACKAGE	<'-',   ALARM, 4, ARM_ALARM_DIR>
	// 0 ;PACKAGE	<'-', LGB1000, 1, ARM_LGB>
	// 0 ;PACKAGE	<'-', GPB1000, 4, ARM_MANUAL>
	// 0 ;PACKAGE	<'-',   JP233, 1, ARM_JP233>
	// 0 ;Now the default IDS package is:
	// 0 ;-------------------
	// 0 ;* Tornado waypoints
	// 0 ;-------------------
	// 0 ;0 = 'A', 1 = 'B' etc.
	// 0 ;* note: This route has been set up for the flying demo. DO NOT CHANGE.
	// 0 ;-----------
	// 0 ;* airfields
	// 0 ;-----------
	// 0 ;1
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;--------------
	// 0 ;* kills tables (index using object number)
	// 0 ;--------------
	// 0 ;-------------------------
	// 0 ;* allied / enemy EWR data
	// 0 ;-------------------------
	// 0 ;(allied and enemy)
	// 0 ;-----------------------------------------
	// 0 ;* drone aircraft / helicopter data macros
	// 0 ;-----------------------------------------
	// 0 ;-----------------------------------
	// 0 ;* ///// allied drone aircraft /////
	// 0 ;-----------------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;air defence aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;air defence aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;close air support / attack aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;close air support / attack aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift transport aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift transport aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;airborne early warning aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;gunship helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;gunship helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift helicopters
	// 0 ;---------------------------
	// 0 ;----------------------------------
	// 0 ;* ///// enemy drone aircraft /////
	// 0 ;----------------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interdiction / strike aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;air defence aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;air defence aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;interceptor / air superiority aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;close air support / attack aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;close air support / attack aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift transport aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift transport aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;airborne early warning aircraft
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;gunship helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;gunship helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift helicopter
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;heavy lift helicopter
	// 0 ;---------------------------
	// 0 ;-----------------------------------
	// 0 ;* truck / train vehicles and routes (see VEHICLES.ASM)
	// 0 ;-----------------------------------
	// 0 ;-----------------------
	// 0 ;* allied truck convoy 1
	// 0 ;-----------------------
	// 0 ;-----------------------
	// 0 ;* allied truck convoy 2
	// 0 ;-----------------------
	// 0 ;----------------------
	// 0 ;* enemy truck convoy 1
	// 0 ;----------------------
	// 0 ;----------------------
	// 0 ;* enemy truck convoy 2
	// 0 ;----------------------
	// 0 ;----------------
	// 0 ;* allied train 1
	// 0 ;----------------
	// 0 ;* ATrain1_1 assumed to be locomotive
	// 0 ;----------------
	// 0 ;* allied train 2
	// 0 ;----------------
	// 0 ;* ATrain2_1 assumed to be locomotive
	// 0 ;---------------
	// 0 ;* enemy train 1
	// 0 ;---------------
	// 0 ;* ETrain1_1 assumed to be locomotive
	// 0 ;---------------
	// 0 ;* enemy train 2
	// 0 ;---------------
	// 0 ;* ETrain2_1 assumed to be locomotive
	// 0 ;----------------------
	// 0 ;* allied truck route 1
	// 0 ;----------------------
	// 0 ;1
	// 0 ;2
	// 0 ;----------------------
	// 0 ;* allied truck route 2
	// 0 ;----------------------
	// 0 ;---------------------
	// 0 ;* enemy truck route 1
	// 0 ;---------------------
	// 0 ;---------------------
	// 0 ;* enemy truck route 2
	// 0 ;---------------------
	// 0 ;----------------------
	// 0 ;* allied train route 1
	// 0 ;----------------------
	// 0 ;1
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;8
	// 0 ;9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;24
	// 0 ;25
	// 0 ;----------------------
	// 0 ;* allied train route 2
	// 0 ;----------------------
	// 0 ;---------------------
	// 0 ;* enemy train route 1
	// 0 ;---------------------
	// 0 ;---------------------
	// 0 ;* enemy train route 2
	// 0 ;---------------------
	// 0 ;---------------------
	// 0 ;* duplicate variables
	// 0 ;---------------------
	// 0 ;* model (refer to MODEL.ASM)
	// 0 ;* explore mode (refer to EXPLORE.ASM)
	// 0 ;* visual parameters
	// 0 ;* CH FlightStick Pro flag
	// 0 ;* ThrustMaster FCS flag
	// 0 ;* ThrustMaster calibration values
	// 0 ;---------------
	// 0 ;* runway damage
	// 0 ;---------------
	// 0 ;---------------------------
	// 0 ;---------------------------

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

