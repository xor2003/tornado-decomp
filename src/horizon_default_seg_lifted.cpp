/* THIS IS GENERATED FILE */

        
#include "horizon.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 214 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 215 VP_ZFT_LO	EQU	VP_ZFT
	// 216 VP_ZFT_HI	EQU	VP_ZFT+2
	// 220 SEC_SCALE1 	EQU	0		;1/1 scale
	// 221 SEC_SCALE2	EQU	2		;1/2 scale
	// 222 SEC_SCALE8 	EQU	4		;1/8 scale
	// 223 SEC_SCALE16 	EQU	6		;1/16 scale
	// 227 INT_VIEWMODE	EQU	0		;internal views
	// 228 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 229 EXT_VIEWMODE	EQU	4		;external views
	// 230 TV1_VIEWMODE	EQU	6		;TV1 display
	// 231 TV2_VIEWMODE	EQU	8		;TV2 display
	// 232 TV3_VIEWMODE	EQU	10		;TV3 display
	// 233 TV4_VIEWMODE	EQU	12		;TV4 display
	// 234 TV5_VIEWMODE	EQU	14		;TV5 display
	// 235 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 239 ROTATE_NULL	EQU	0		;no rotation
	// 240 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 241 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 242 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 243 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 244 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 245 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 249 $MID		EQU	128
	// 250 $0		EQU	0
	// 251 $256		EQU	2
	// 252 $512		EQU	4
	// 253 $1024		EQU	8
	// 254 $2048		EQU	16
	// 255 $4096		EQU	32
	// 256 $8192		EQU	64
	// 265 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 269 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 270 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 274 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 275 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 279 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 283 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 284 OBJ_SCALE2	EQU	2		;2/1 scale
	// 285 OBJ_SCALE4	EQU	4		;4/1 scale
	// 286 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 287 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 291 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 292 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 293 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 294 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 295 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 299 @MID		EQU	64
	// 300 @0		EQU	0
	// 301 @16		EQU	2
	// 302 @32		EQU	4
	// 303 @48		EQU	6
	// 304 @64		EQU	8
	// 305 @80		EQU	10
	// 306 @96		EQU	12
	// 307 @112		EQU	14
	// 308 @128		EQU	16
	// 309 @192		EQU	24
	// 310 @256		EQU	32
	// 311 @384		EQU	48
	// 312 @512		EQU	64
	// 330 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 332 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 333 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 335 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 336 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 337 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 339 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 341 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 342 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 343 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 344 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 345 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 346 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 348 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 350 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 351 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 355 OTYPE_GROUND	EQU	0		;static ground objects
	// 356 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 357 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 358 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 359 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 360 OTYPE_HILLFACE	EQU	10		;hill face
	// 361 OTYPE_SMOKE	EQU	12		;smoke
	// 375 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 376 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 380 NUM_OBJECTS	EQU	256		;max number of objects
	// 381 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 382 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 383 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 384 BEHIND_BIN	EQU	0		;behind bin index
	// 385 IN_FRONT_BIN	EQU	2		;in front bin index
	// 389 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 390 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 391 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 392 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 393 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 394 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 395 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 405 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 409 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 410 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 411 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 412 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 413 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 414 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 415 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 416 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 417 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 418 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 422 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 428 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 441 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 452 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 456 SURFACE_UNKNOWN	EQU	0
	// 457 SURFACE_RUNWAY	EQU	2
	// 458 SURFACE_TAXIWAY	EQU	4
	// 459 SURFACE_HARD	EQU	6
	// 460 SURFACE_ROAD	EQU	8
	// 461 SURFACE_RAILWAY	EQU	10
	// 462 SURFACE_RIVER	EQU	12
	// 463 SURFACE_LAKE	EQU	14
	// 467 NUM_CRATERS	EQU	128
	// 468 CRATER_NULL	EQU	0
	// 469 CRATER_SIZE1	EQU	1		;small
	// 470 CRATER_SIZE2	EQU	2		;large
	// 471 CRATER_HEAVE	EQU	3		;heave
	// 472 CRATER_SHELL	EQU	4		;cannon shell
	// 483 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 487 NUM_SMOKE	EQU	128
	// 489 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 490 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 491 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 492 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 493 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 494 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 495 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 497 STYPE_NULL	EQU	0		;no smoke
	// 498 STYPE_GND1	EQU	2		;ground smoke type 1
	// 499 STYPE_AIR1	EQU	4		;air smoke type 1
	// 515 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 516 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 517 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 518 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 533 FOG_COL_START	EQU	8
	// 534 FOG_COL_COUNT	EQU	104
	// 536 NIGHT_COL_START	EQU	24
	// 537 NIGHT_COL_COUNT	EQU	88
	// 539 IR_COL_START	EQU	8
	// 540 IR_COL_COUNT	EQU	104
	// 544 COL_BLACK	EQU	0
	// 545 COL_LT_RED	EQU	1
	// 546 COL_YELLOW	EQU	2
	// 547 COL_LT_CYAN	EQU	3
	// 548 COL_WHITE	EQU	4
	// 552 COL_TEXT_NORM1	EQU	5
	// 553 COL_TEXT_NORM2	EQU	6
	// 554 COL_TEXT_ALERT	EQU	7
	// 558 COL_NT_WHITE1	EQU	8
	// 559 COL_NT_GREY1	EQU	9
	// 560 COL_NT_GREY2	EQU	10
	// 561 COL_NT_GREY3	EQU	11
	// 562 COL_NT_GREY4	EQU	12
	// 563 COL_NT_RED1	EQU	13
	// 564 COL_NT_RED2	EQU	14
	// 565 COL_NT_RED3	EQU	15
	// 566 COL_NT_BLUE1	EQU	16
	// 567 COL_NT_BLUE2	EQU	17
	// 568 COL_NT_YELLOW1	EQU	18
	// 569 COL_NT_AMBER1	EQU	19
	// 570 COL_NT_AMBER2	EQU	20
	// 571 COL_NT_GREEN1	EQU	21
	// 572 COL_NT_R_WHITE1	EQU	22
	// 573 COL_NT_B_WHITE1	EQU	23
	// 577 COL_WHITE1	EQU	24
	// 578 COL_GREY1	EQU	25
	// 579 COL_GREY2	EQU	26
	// 580 COL_GREY3	EQU	27
	// 581 COL_GREY4	EQU	28
	// 582 COL_BLACK1	EQU	29
	// 583 COL_CYAN_GREY1	EQU	30
	// 584 COL_CYAN_GREY2	EQU	31
	// 585 COL_CYAN_GREY3	EQU	32
	// 586 COL_CYAN_GREY4	EQU	33
	// 587 COL_CYAN_GREY5	EQU	34
	// 588 COL_CYAN_GREY6	EQU	35
	// 589 COL_SAND1	EQU	36
	// 590 COL_SAND2	EQU	37
	// 591 COL_SAND3	EQU	38
	// 592 COL_SAND4	EQU	39
	// 593 COL_SAND5	EQU	40
	// 594 COL_RUST1	EQU	41
	// 595 COL_RUST2	EQU	42
	// 596 COL_RUST3	EQU	43
	// 597 COL_RUST4	EQU	44
	// 598 COL_RUST5	EQU	45
	// 599 COL_NEW_GREY1	EQU	46
	// 600 COL_NEW_GREY2	EQU	47
	// 601 COL_NEW_GREY3	EQU	48
	// 602 COL_NEW_GREY4	EQU	49
	// 603 COL_YELLOW1	EQU	50
	// 604 COL_AMBER1	EQU	51
	// 605 COL_AMBER2	EQU	52
	// 606 COL_AMBER3	EQU	53
	// 607 COL_AMBER4	EQU	54
	// 608 COL_RED1	EQU	55
	// 609 COL_GREEN1	EQU	56
	// 610 COL_GREEN2	EQU	57
	// 611 COL_GREEN3	EQU	58
	// 612 COL_GREEN4	EQU	59
	// 613 COL_DK_CYAN1	EQU	60
	// 614 COL_DK_CYAN2	EQU	61
	// 615 COL_DK_CYAN3	EQU	62
	// 616 COL_DK_CYAN4	EQU	63
	// 617 COL_OLIVE1	EQU	64
	// 618 COL_OLIVE2	EQU	65
	// 619 COL_OLIVE3	EQU	66
	// 620 COL_OLIVE4	EQU	67
	// 621 COL_OLIVE5	EQU	68
	// 622 COL_OLIVE6	EQU	69
	// 623 COL_NEAR_WHITE1	EQU	70
	// 624 COL_SMOKE_GREY1	EQU	71
	// 625 COL_SMOKE_GREY2	EQU	72
	// 629 COL_ROAD1	EQU	73
	// 630 COL_RWY1	EQU	74
	// 631 COL_GND1	EQU	75
	// 632 COL_GND2	EQU	76
	// 633 COL_RAIL1	EQU	77
	// 634 COL_RAIL2	EQU	78
	// 635 COL_RIVER1	EQU	79
	// 639 COL_HILL1	EQU	80
	// 640 COL_HILL2	EQU	81
	// 641 COL_HILL3	EQU	82
	// 642 COL_HILL4	EQU	83
	// 643 COL_HILL5	EQU	84
	// 644 COL_HILL6	EQU	85
	// 645 COL_HILL7	EQU	86
	// 646 COL_HILL8	EQU	87
	// 647 COL_HILL9	EQU	88
	// 648 COL_HILL10	EQU	89
	// 649 COL_HILL11	EQU	90
	// 650 COL_HILL12	EQU	91
	// 651 COL_HILL13	EQU	92
	// 652 COL_HILL14	EQU	93
	// 653 COL_HILL15	EQU	94
	// 654 COL_HILL16	EQU	95
	// 658 COL_SKY1	EQU	96
	// 659 COL_SKY2	EQU	97
	// 660 COL_SKY3	EQU	98
	// 661 COL_SKY4	EQU	99
	// 662 COL_SKY5	EQU	100
	// 663 COL_SKY6	EQU	101
	// 664 COL_SKY7	EQU	102
	// 665 COL_SKY8	EQU	103
	// 666 COL_SKY9	EQU	104
	// 667 COL_SKY10	EQU	105
	// 668 COL_SKY11	EQU	106
	// 669 COL_SKY12	EQU	107
	// 670 COL_SKY13	EQU	108
	// 671 COL_SKY14	EQU	109
	// 672 COL_SKY15	EQU	110
	// 673 COL_SKY16	EQU	111
	// 677 COL_MAP_HILL1	EQU	112
	// 678 COL_MAP_HILL2	EQU	113
	// 679 COL_MAP_HILL3	EQU	114
	// 680 COL_MAP_HILL4	EQU	115
	// 681 COL_MAP_HILL5	EQU	116
	// 682 COL_MAP_HILL6	EQU	117
	// 683 COL_MAP_HILL7	EQU	118
	// 684 COL_MAP_HILL8	EQU	119
	// 685 COL_MAP_HILL9	EQU	120
	// 686 COL_MAP_HILL10	EQU	121
	// 687 COL_MAP_HILL11	EQU	122
	// 688 COL_MAP_HILL12	EQU	123
	// 689 COL_MAP_HILL13	EQU	124
	// 690 COL_MAP_HILL14	EQU	125
	// 691 COL_MAP_HILL15	EQU	126
	// 692 COL_MAP_HILL16	EQU	127
	// 696 COL_NEEDLE	EQU	128
	// 697 COL_COUNTER	EQU	129
	// 698 COL_RED_NEEDLE	EQU	130
	// 699 COL_ADI_SKY	EQU	131
	// 700 COL_ADI_GND	EQU	132
	// 701 COL_HUD		EQU	133
	// 702 COL_BUG		EQU	134
	// 703 COL_AOA		EQU	135
	// 704 COL_KNEE_PAD	EQU	136
	// 705 COL_KNEE_INK1	EQU	137
	// 706 COL_KNEE_INK2	EQU	138
	// 707 COL_KNEE_PEN	EQU	139
	// 708 COL_KNEE_NUM	EQU	140
	// 709 COL_SIGHT	EQU	141
	// 711 COL_TIALD_SYM	EQU	COL_BLACK
	// 714 COL_MAP_SYM	EQU	COL_BLACK
	// 716 COL_REF_SYM	EQU	COL_BLACK
	// 718 COL_RADAR_MASK	EQU	COL_BLACK
	// 720 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 721 COL_IR_MISS	EQU	COL_CRT_RED
	// 723 COL_LOCAL1	EQU	209		;day
	// 724 COL_LOCAL2	EQU	213
	// 725 COL_LOCAL3	EQU	215
	// 726 COL_LOCAL4	EQU	218
	// 727 COL_LOCAL5	EQU	220
	// 728 COL_NT_LOCAL1	EQU	233		;night
	// 729 COL_NT_LOCAL2	EQU	234
	// 730 COL_NT_LOCAL3	EQU	235
	// 731 COL_NT_LOCAL4	EQU	236
	// 732 COL_NT_LOCAL5	EQU	255
	// 734 COL_GLIDE1	EQU	210		;day
	// 735 COL_GLIDE2	EQU	216
	// 736 COL_GLIDE3	EQU	220
	// 737 COL_NT_GLIDE1	EQU	234		;night
	// 738 COL_NT_GLIDE2	EQU	235
	// 739 COL_NT_GLIDE3	EQU	236
	// 747 COL_MAP_GND1	EQU	144
	// 748 COL_MAP_ROAD1	EQU	145
	// 749 COL_MAP_RAIL1	EQU	146
	// 750 COL_MAP_RWY1	EQU	147
	// 751 COL_MAP_RIVER1	EQU	148
	// 752 COL_MAP_GREEN1	EQU	149
	// 753 COL_MAP_GREEN2	EQU	150
	// 754 COL_MAP_COMPASS	EQU	151
	// 755 COL_MAP_LOCATOR	EQU	152
	// 756 COL_MAP_ALLIED	EQU	153
	// 757 COL_MAP_BORDER	EQU	154
	// 758 COL_COMPASS	EQU	155
	// 759 COL_LOCATOR	EQU	156
	// 760 COL_MAP_RWY2	EQU	157
	// 761 COL_MAP_ENEMY	EQU	158
	// 765 COL_CRT_RED	EQU	159
	// 766 COL_CRT1	EQU	160
	// 767 COL_CRT2	EQU	161
	// 768 COL_CRT3	EQU	162
	// 769 COL_CRT4	EQU	163
	// 770 COL_CRT5	EQU	164
	// 771 COL_CRT6	EQU	165
	// 772 COL_CRT7	EQU	166
	// 773 COL_CRT8	EQU	167
	// 774 COL_CRT9	EQU	168
	// 775 COL_CRT10	EQU	169
	// 776 COL_CRT11	EQU	170
	// 777 COL_CRT12	EQU	171
	// 778 COL_CRT13	EQU	172
	// 779 COL_CRT14	EQU	173
	// 780 COL_CRT15	EQU	174
	// 781 COL_CRT16	EQU	175
	// 0 ;* weather conditions / time of day
	// 0 ;1 = overcast, 0 = clear
	// 0 ;0 = clear
	// 0 ;1 = light fog (Overcast = 1)
	// 0 ;2 = pea souper (Overcast = 1)
	// 0 ;0 = day
	// 0 ;1 = night 1 (dusk)
	// 0 ;2 = night 2
	// 0 ;3 = night 3
	// 0 ;4 = night 4 (midnight)
	// 0 ;* logical colours for ground / sky
	// 0 ;* horizon crt co-ords
	// 0 ;* horizon end point eye co-ords
	// 1013 XEYE		EQU	4096
	// 1014 YEYE		EQU	1024		;changed from  256 (grad hrzn mod)
	// 0 ;changed from  256 (grad hrzn mod)
	// 1015 ZEYE 		EQU	-2048		;changed fram -512 (grad hrzn mod)
	// 0 ;changed fram -512 (grad hrzn mod)
	// 0 ;* modified pitch (wrt altitude)
	// 0 ;* horizon octant vector routines
	// 0 ;Dx > 0, Dy > 0, Dy > Dx
	// 0 ;Dx > 0, Dy > 0, Dx > Dy
	// 0 ;Dx < 0, Dy > 0, Dy > Dx
	// 0 ;Dx < 0, Dy > 0, Dx > Dy
	// 0 ;* graduated horizon vars
	// 1027 ZT		EQU	256		;translate horizon value
	// 0 ;translate horizon value
	// 0 ;1 = graduated horizon enabled
	// 0 ;1 = graduated horizon visible
	// 0 ;graduation polygon
	// 0 ;* ground / sky RGB ptrs
	// 0 ;* draw overcast sky switch (wrt CloudMode)
	// 0 ;CLOUD_MODE1
	// 0 ;CLOUD_MODE2
	// 0 ;CLOUD_MODE3

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

