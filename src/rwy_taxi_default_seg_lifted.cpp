/* THIS IS GENERATED FILE */

        
#include "rwy_taxi.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 174 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 175 VP_ZFT_LO	EQU	VP_ZFT
	// 176 VP_ZFT_HI	EQU	VP_ZFT+2
	// 180 SEC_SCALE1 	EQU	0		;1/1 scale
	// 181 SEC_SCALE2	EQU	2		;1/2 scale
	// 182 SEC_SCALE8 	EQU	4		;1/8 scale
	// 183 SEC_SCALE16 	EQU	6		;1/16 scale
	// 187 INT_VIEWMODE	EQU	0		;internal views
	// 188 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 189 EXT_VIEWMODE	EQU	4		;external views
	// 190 TV1_VIEWMODE	EQU	6		;TV1 display
	// 191 TV2_VIEWMODE	EQU	8		;TV2 display
	// 192 TV3_VIEWMODE	EQU	10		;TV3 display
	// 193 TV4_VIEWMODE	EQU	12		;TV4 display
	// 194 TV5_VIEWMODE	EQU	14		;TV5 display
	// 195 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 199 ROTATE_NULL	EQU	0		;no rotation
	// 200 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 201 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 202 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 203 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 204 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 205 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 209 $MID		EQU	128
	// 210 $0		EQU	0
	// 211 $256		EQU	2
	// 212 $512		EQU	4
	// 213 $1024		EQU	8
	// 214 $2048		EQU	16
	// 215 $4096		EQU	32
	// 216 $8192		EQU	64
	// 225 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 229 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 230 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 234 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 235 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 239 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 243 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 244 OBJ_SCALE2	EQU	2		;2/1 scale
	// 245 OBJ_SCALE4	EQU	4		;4/1 scale
	// 246 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 247 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 251 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 252 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 253 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 254 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 255 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 259 @MID		EQU	64
	// 260 @0		EQU	0
	// 261 @16		EQU	2
	// 262 @32		EQU	4
	// 263 @48		EQU	6
	// 264 @64		EQU	8
	// 265 @80		EQU	10
	// 266 @96		EQU	12
	// 267 @112		EQU	14
	// 268 @128		EQU	16
	// 269 @192		EQU	24
	// 270 @256		EQU	32
	// 271 @384		EQU	48
	// 272 @512		EQU	64
	// 290 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 292 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 293 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 295 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 296 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 297 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 299 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 301 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 302 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 303 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 304 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 305 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 306 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 308 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 310 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 311 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 315 OTYPE_GROUND	EQU	0		;static ground objects
	// 316 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 317 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 318 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 319 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 320 OTYPE_HILLFACE	EQU	10		;hill face
	// 321 OTYPE_SMOKE	EQU	12		;smoke
	// 335 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 336 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 340 NUM_OBJECTS	EQU	256		;max number of objects
	// 341 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 342 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 343 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 344 BEHIND_BIN	EQU	0		;behind bin index
	// 345 IN_FRONT_BIN	EQU	2		;in front bin index
	// 349 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 350 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 351 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 352 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 353 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 354 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 355 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 365 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 369 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 370 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 371 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 372 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 373 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 374 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 375 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 376 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 377 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 378 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 382 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 388 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 401 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 412 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 416 SURFACE_UNKNOWN	EQU	0
	// 417 SURFACE_RUNWAY	EQU	2
	// 418 SURFACE_TAXIWAY	EQU	4
	// 419 SURFACE_HARD	EQU	6
	// 420 SURFACE_ROAD	EQU	8
	// 421 SURFACE_RAILWAY	EQU	10
	// 422 SURFACE_RIVER	EQU	12
	// 423 SURFACE_LAKE	EQU	14
	// 427 NUM_CRATERS	EQU	128
	// 428 CRATER_NULL	EQU	0
	// 429 CRATER_SIZE1	EQU	1		;small
	// 430 CRATER_SIZE2	EQU	2		;large
	// 431 CRATER_HEAVE	EQU	3		;heave
	// 432 CRATER_SHELL	EQU	4		;cannon shell
	// 443 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 447 NUM_SMOKE	EQU	128
	// 449 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 450 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 451 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 452 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 453 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 454 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 455 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 457 STYPE_NULL	EQU	0		;no smoke
	// 458 STYPE_GND1	EQU	2		;ground smoke type 1
	// 459 STYPE_AIR1	EQU	4		;air smoke type 1
	// 475 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 476 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 477 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 478 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 493 FOG_COL_START	EQU	8
	// 494 FOG_COL_COUNT	EQU	104
	// 496 NIGHT_COL_START	EQU	24
	// 497 NIGHT_COL_COUNT	EQU	88
	// 499 IR_COL_START	EQU	8
	// 500 IR_COL_COUNT	EQU	104
	// 504 COL_BLACK	EQU	0
	// 505 COL_LT_RED	EQU	1
	// 506 COL_YELLOW	EQU	2
	// 507 COL_LT_CYAN	EQU	3
	// 508 COL_WHITE	EQU	4
	// 512 COL_TEXT_NORM1	EQU	5
	// 513 COL_TEXT_NORM2	EQU	6
	// 514 COL_TEXT_ALERT	EQU	7
	// 518 COL_NT_WHITE1	EQU	8
	// 519 COL_NT_GREY1	EQU	9
	// 520 COL_NT_GREY2	EQU	10
	// 521 COL_NT_GREY3	EQU	11
	// 522 COL_NT_GREY4	EQU	12
	// 523 COL_NT_RED1	EQU	13
	// 524 COL_NT_RED2	EQU	14
	// 525 COL_NT_RED3	EQU	15
	// 526 COL_NT_BLUE1	EQU	16
	// 527 COL_NT_BLUE2	EQU	17
	// 528 COL_NT_YELLOW1	EQU	18
	// 529 COL_NT_AMBER1	EQU	19
	// 530 COL_NT_AMBER2	EQU	20
	// 531 COL_NT_GREEN1	EQU	21
	// 532 COL_NT_R_WHITE1	EQU	22
	// 533 COL_NT_B_WHITE1	EQU	23
	// 537 COL_WHITE1	EQU	24
	// 538 COL_GREY1	EQU	25
	// 539 COL_GREY2	EQU	26
	// 540 COL_GREY3	EQU	27
	// 541 COL_GREY4	EQU	28
	// 542 COL_BLACK1	EQU	29
	// 543 COL_CYAN_GREY1	EQU	30
	// 544 COL_CYAN_GREY2	EQU	31
	// 545 COL_CYAN_GREY3	EQU	32
	// 546 COL_CYAN_GREY4	EQU	33
	// 547 COL_CYAN_GREY5	EQU	34
	// 548 COL_CYAN_GREY6	EQU	35
	// 549 COL_SAND1	EQU	36
	// 550 COL_SAND2	EQU	37
	// 551 COL_SAND3	EQU	38
	// 552 COL_SAND4	EQU	39
	// 553 COL_SAND5	EQU	40
	// 554 COL_RUST1	EQU	41
	// 555 COL_RUST2	EQU	42
	// 556 COL_RUST3	EQU	43
	// 557 COL_RUST4	EQU	44
	// 558 COL_RUST5	EQU	45
	// 559 COL_NEW_GREY1	EQU	46
	// 560 COL_NEW_GREY2	EQU	47
	// 561 COL_NEW_GREY3	EQU	48
	// 562 COL_NEW_GREY4	EQU	49
	// 563 COL_YELLOW1	EQU	50
	// 564 COL_AMBER1	EQU	51
	// 565 COL_AMBER2	EQU	52
	// 566 COL_AMBER3	EQU	53
	// 567 COL_AMBER4	EQU	54
	// 568 COL_RED1	EQU	55
	// 569 COL_GREEN1	EQU	56
	// 570 COL_GREEN2	EQU	57
	// 571 COL_GREEN3	EQU	58
	// 572 COL_GREEN4	EQU	59
	// 573 COL_DK_CYAN1	EQU	60
	// 574 COL_DK_CYAN2	EQU	61
	// 575 COL_DK_CYAN3	EQU	62
	// 576 COL_DK_CYAN4	EQU	63
	// 577 COL_OLIVE1	EQU	64
	// 578 COL_OLIVE2	EQU	65
	// 579 COL_OLIVE3	EQU	66
	// 580 COL_OLIVE4	EQU	67
	// 581 COL_OLIVE5	EQU	68
	// 582 COL_OLIVE6	EQU	69
	// 583 COL_NEAR_WHITE1	EQU	70
	// 584 COL_SMOKE_GREY1	EQU	71
	// 585 COL_SMOKE_GREY2	EQU	72
	// 589 COL_ROAD1	EQU	73
	// 590 COL_RWY1	EQU	74
	// 591 COL_GND1	EQU	75
	// 592 COL_GND2	EQU	76
	// 593 COL_RAIL1	EQU	77
	// 594 COL_RAIL2	EQU	78
	// 595 COL_RIVER1	EQU	79
	// 599 COL_HILL1	EQU	80
	// 600 COL_HILL2	EQU	81
	// 601 COL_HILL3	EQU	82
	// 602 COL_HILL4	EQU	83
	// 603 COL_HILL5	EQU	84
	// 604 COL_HILL6	EQU	85
	// 605 COL_HILL7	EQU	86
	// 606 COL_HILL8	EQU	87
	// 607 COL_HILL9	EQU	88
	// 608 COL_HILL10	EQU	89
	// 609 COL_HILL11	EQU	90
	// 610 COL_HILL12	EQU	91
	// 611 COL_HILL13	EQU	92
	// 612 COL_HILL14	EQU	93
	// 613 COL_HILL15	EQU	94
	// 614 COL_HILL16	EQU	95
	// 618 COL_SKY1	EQU	96
	// 619 COL_SKY2	EQU	97
	// 620 COL_SKY3	EQU	98
	// 621 COL_SKY4	EQU	99
	// 622 COL_SKY5	EQU	100
	// 623 COL_SKY6	EQU	101
	// 624 COL_SKY7	EQU	102
	// 625 COL_SKY8	EQU	103
	// 626 COL_SKY9	EQU	104
	// 627 COL_SKY10	EQU	105
	// 628 COL_SKY11	EQU	106
	// 629 COL_SKY12	EQU	107
	// 630 COL_SKY13	EQU	108
	// 631 COL_SKY14	EQU	109
	// 632 COL_SKY15	EQU	110
	// 633 COL_SKY16	EQU	111
	// 637 COL_MAP_HILL1	EQU	112
	// 638 COL_MAP_HILL2	EQU	113
	// 639 COL_MAP_HILL3	EQU	114
	// 640 COL_MAP_HILL4	EQU	115
	// 641 COL_MAP_HILL5	EQU	116
	// 642 COL_MAP_HILL6	EQU	117
	// 643 COL_MAP_HILL7	EQU	118
	// 644 COL_MAP_HILL8	EQU	119
	// 645 COL_MAP_HILL9	EQU	120
	// 646 COL_MAP_HILL10	EQU	121
	// 647 COL_MAP_HILL11	EQU	122
	// 648 COL_MAP_HILL12	EQU	123
	// 649 COL_MAP_HILL13	EQU	124
	// 650 COL_MAP_HILL14	EQU	125
	// 651 COL_MAP_HILL15	EQU	126
	// 652 COL_MAP_HILL16	EQU	127
	// 656 COL_NEEDLE	EQU	128
	// 657 COL_COUNTER	EQU	129
	// 658 COL_RED_NEEDLE	EQU	130
	// 659 COL_ADI_SKY	EQU	131
	// 660 COL_ADI_GND	EQU	132
	// 661 COL_HUD		EQU	133
	// 662 COL_BUG		EQU	134
	// 663 COL_AOA		EQU	135
	// 664 COL_KNEE_PAD	EQU	136
	// 665 COL_KNEE_INK1	EQU	137
	// 666 COL_KNEE_INK2	EQU	138
	// 667 COL_KNEE_PEN	EQU	139
	// 668 COL_KNEE_NUM	EQU	140
	// 669 COL_SIGHT	EQU	141
	// 671 COL_TIALD_SYM	EQU	COL_BLACK
	// 674 COL_MAP_SYM	EQU	COL_BLACK
	// 676 COL_REF_SYM	EQU	COL_BLACK
	// 678 COL_RADAR_MASK	EQU	COL_BLACK
	// 680 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 681 COL_IR_MISS	EQU	COL_CRT_RED
	// 683 COL_LOCAL1	EQU	209		;day
	// 684 COL_LOCAL2	EQU	213
	// 685 COL_LOCAL3	EQU	215
	// 686 COL_LOCAL4	EQU	218
	// 687 COL_LOCAL5	EQU	220
	// 688 COL_NT_LOCAL1	EQU	233		;night
	// 689 COL_NT_LOCAL2	EQU	234
	// 690 COL_NT_LOCAL3	EQU	235
	// 691 COL_NT_LOCAL4	EQU	236
	// 692 COL_NT_LOCAL5	EQU	255
	// 694 COL_GLIDE1	EQU	210		;day
	// 695 COL_GLIDE2	EQU	216
	// 696 COL_GLIDE3	EQU	220
	// 697 COL_NT_GLIDE1	EQU	234		;night
	// 698 COL_NT_GLIDE2	EQU	235
	// 699 COL_NT_GLIDE3	EQU	236
	// 707 COL_MAP_GND1	EQU	144
	// 708 COL_MAP_ROAD1	EQU	145
	// 709 COL_MAP_RAIL1	EQU	146
	// 710 COL_MAP_RWY1	EQU	147
	// 711 COL_MAP_RIVER1	EQU	148
	// 712 COL_MAP_GREEN1	EQU	149
	// 713 COL_MAP_GREEN2	EQU	150
	// 714 COL_MAP_COMPASS	EQU	151
	// 715 COL_MAP_LOCATOR	EQU	152
	// 716 COL_MAP_ALLIED	EQU	153
	// 717 COL_MAP_BORDER	EQU	154
	// 718 COL_COMPASS	EQU	155
	// 719 COL_LOCATOR	EQU	156
	// 720 COL_MAP_RWY2	EQU	157
	// 721 COL_MAP_ENEMY	EQU	158
	// 725 COL_CRT_RED	EQU	159
	// 726 COL_CRT1	EQU	160
	// 727 COL_CRT2	EQU	161
	// 728 COL_CRT3	EQU	162
	// 729 COL_CRT4	EQU	163
	// 730 COL_CRT5	EQU	164
	// 731 COL_CRT6	EQU	165
	// 732 COL_CRT7	EQU	166
	// 733 COL_CRT8	EQU	167
	// 734 COL_CRT9	EQU	168
	// 735 COL_CRT10	EQU	169
	// 736 COL_CRT11	EQU	170
	// 737 COL_CRT12	EQU	171
	// 738 COL_CRT13	EQU	172
	// 739 COL_CRT14	EQU	173
	// 740 COL_CRT15	EQU	174
	// 741 COL_CRT16	EQU	175
	// 763 RWY_REC_SIZE	EQU	TYPE RUNWAY
	// 765 RWY_1836	EQU	0*8		;end 1 =  S end, end 2 =  N end
	// 766 RWY_1331	EQU	1*8		;end 1 = SE end, end 2 = NW end
	// 767 RWY_0927	EQU	2*8		;end 1 =  E end, end 2 =  W end
	// 768 RWY_0422	EQU	3*8		;end 1 = NE end, end 2 = SW end
	// 770 RWY_WIDTH256	EQU	0
	// 771 RWY_WIDTH192	EQU	2
	// 772 RWY_WIDTH128	EQU	4
	// 789 ILS_REC_SIZE	EQU	TYPE ILS
	// 793 ILS_N		EQU	1000b		;north approach ILS
	// 794 ILS_S		EQU	0100b		;south approach ILS
	// 795 ILS_E		EQU	0010b		;east approach ILS
	// 796 ILS_W		EQU	0001b		;west approach ILS
	// 805 TAXI_REC_SIZE	EQU	TYPE	TAXI
	// 813 TNODE_REC_SIZE	EQU	TYPE	TNODE
	// 0 ;-------------
	// 0 ;* runway data
	// 0 ;-------------
	// 0 ;* sort runway switch (wrt sector scale mode)
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* select end type data wrt runway width
	// 0 ;RWY_WIDTH256
	// 0 ;RWY_WIDTH192
	// 0 ;RWY_WIDTH128
	// 0 ;* lh and rh x, y offsets for 256ft width runway end types (1/1 scaling)
	// 0 ;xl - end type 0 (180 - 360)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 1 (135 - 315)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 2 (090 - 270)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 3 (045 - 225)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;* lh and rh x, y offsets for 192ft width runway end types (1/1 scaling)
	// 0 ;xl - end type 0 (180 - 360)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 1 (135 - 315)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 2 (090 - 270)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 3 (045 - 225)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;* lh and rh x, y offsets for 128ft width runway end types (1/1 scaling)
	// 0 ;xl - end type 0 (180 - 360)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 1 (135 - 315)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 2 (090 - 270)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 3 (045 - 225)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;--------------
	// 0 ;* taxiway data
	// 0 ;--------------
	// 0 ;* approximation threshold wrt ZFT (max value = 8192)
	// 1072 Z_APPROX_THRES	EQU	8192
	// 0 ;* scan vertex list switch (wrt sector scale mode)
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;* make vertex switch (wrt sector scale mode)
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;* taxiway polygon
	// 0 ;* lh and rh x, y offsets for 64ft width taxiway end types (1/1 scaling)
	// 0 ;xl - end type 0 (N)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 1 (NE)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 2 (E)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 3 (SE)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 4 (S)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 5 (SW)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 6 (W)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - end type 7 (NW)
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;-----------------------------------------
	// 0 ;* runway / taxiway / approach lights data
	// 0 ;-----------------------------------------
	// 0 ;1 = active runway and (night or fog)
	// 0 ;* sector sub-division offsets to generate approach light datum points
	// 0 ;*
	// 0 ;*		DW	x offset, y offset	;256ft to left of runway centre
	// 0 ;*		DW	x offset, y offset	;4,096ft from runway end
	// 0 ;RWY_1836
	// 0 ;RWY_1331
	// 0 ;RWY_0927
	// 0 ;RWY_0422

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

