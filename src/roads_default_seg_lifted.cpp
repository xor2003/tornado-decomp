/* THIS IS GENERATED FILE */

        
#include "roads.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 178 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 179 VP_ZFT_LO	EQU	VP_ZFT
	// 180 VP_ZFT_HI	EQU	VP_ZFT+2
	// 184 SEC_SCALE1 	EQU	0		;1/1 scale
	// 185 SEC_SCALE2	EQU	2		;1/2 scale
	// 186 SEC_SCALE8 	EQU	4		;1/8 scale
	// 187 SEC_SCALE16 	EQU	6		;1/16 scale
	// 191 INT_VIEWMODE	EQU	0		;internal views
	// 192 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 193 EXT_VIEWMODE	EQU	4		;external views
	// 194 TV1_VIEWMODE	EQU	6		;TV1 display
	// 195 TV2_VIEWMODE	EQU	8		;TV2 display
	// 196 TV3_VIEWMODE	EQU	10		;TV3 display
	// 197 TV4_VIEWMODE	EQU	12		;TV4 display
	// 198 TV5_VIEWMODE	EQU	14		;TV5 display
	// 199 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 203 ROTATE_NULL	EQU	0		;no rotation
	// 204 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 205 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 206 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 207 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 208 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 209 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 213 $MID		EQU	128
	// 214 $0		EQU	0
	// 215 $256		EQU	2
	// 216 $512		EQU	4
	// 217 $1024		EQU	8
	// 218 $2048		EQU	16
	// 219 $4096		EQU	32
	// 220 $8192		EQU	64
	// 229 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 233 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 234 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 238 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 239 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 243 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 247 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 248 OBJ_SCALE2	EQU	2		;2/1 scale
	// 249 OBJ_SCALE4	EQU	4		;4/1 scale
	// 250 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 251 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 255 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 256 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 257 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 258 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 259 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 263 @MID		EQU	64
	// 264 @0		EQU	0
	// 265 @16		EQU	2
	// 266 @32		EQU	4
	// 267 @48		EQU	6
	// 268 @64		EQU	8
	// 269 @80		EQU	10
	// 270 @96		EQU	12
	// 271 @112		EQU	14
	// 272 @128		EQU	16
	// 273 @192		EQU	24
	// 274 @256		EQU	32
	// 275 @384		EQU	48
	// 276 @512		EQU	64
	// 294 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 296 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 297 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 299 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 300 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 301 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 303 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 305 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 306 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 307 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 308 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 309 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 310 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 312 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 314 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 315 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 319 OTYPE_GROUND	EQU	0		;static ground objects
	// 320 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 321 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 322 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 323 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 324 OTYPE_HILLFACE	EQU	10		;hill face
	// 325 OTYPE_SMOKE	EQU	12		;smoke
	// 339 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 340 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 344 NUM_OBJECTS	EQU	256		;max number of objects
	// 345 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 346 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 347 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 348 BEHIND_BIN	EQU	0		;behind bin index
	// 349 IN_FRONT_BIN	EQU	2		;in front bin index
	// 353 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 354 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 355 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 356 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 357 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 358 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 359 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 369 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 373 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 374 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 375 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 376 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 377 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 378 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 379 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 380 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 381 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 382 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 386 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 392 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 405 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 416 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 420 SURFACE_UNKNOWN	EQU	0
	// 421 SURFACE_RUNWAY	EQU	2
	// 422 SURFACE_TAXIWAY	EQU	4
	// 423 SURFACE_HARD	EQU	6
	// 424 SURFACE_ROAD	EQU	8
	// 425 SURFACE_RAILWAY	EQU	10
	// 426 SURFACE_RIVER	EQU	12
	// 427 SURFACE_LAKE	EQU	14
	// 431 NUM_CRATERS	EQU	128
	// 432 CRATER_NULL	EQU	0
	// 433 CRATER_SIZE1	EQU	1		;small
	// 434 CRATER_SIZE2	EQU	2		;large
	// 435 CRATER_HEAVE	EQU	3		;heave
	// 436 CRATER_SHELL	EQU	4		;cannon shell
	// 447 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 451 NUM_SMOKE	EQU	128
	// 453 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 454 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 455 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 456 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 457 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 458 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 459 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 461 STYPE_NULL	EQU	0		;no smoke
	// 462 STYPE_GND1	EQU	2		;ground smoke type 1
	// 463 STYPE_AIR1	EQU	4		;air smoke type 1
	// 479 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 480 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 481 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 482 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 497 FOG_COL_START	EQU	8
	// 498 FOG_COL_COUNT	EQU	104
	// 500 NIGHT_COL_START	EQU	24
	// 501 NIGHT_COL_COUNT	EQU	88
	// 503 IR_COL_START	EQU	8
	// 504 IR_COL_COUNT	EQU	104
	// 508 COL_BLACK	EQU	0
	// 509 COL_LT_RED	EQU	1
	// 510 COL_YELLOW	EQU	2
	// 511 COL_LT_CYAN	EQU	3
	// 512 COL_WHITE	EQU	4
	// 516 COL_TEXT_NORM1	EQU	5
	// 517 COL_TEXT_NORM2	EQU	6
	// 518 COL_TEXT_ALERT	EQU	7
	// 522 COL_NT_WHITE1	EQU	8
	// 523 COL_NT_GREY1	EQU	9
	// 524 COL_NT_GREY2	EQU	10
	// 525 COL_NT_GREY3	EQU	11
	// 526 COL_NT_GREY4	EQU	12
	// 527 COL_NT_RED1	EQU	13
	// 528 COL_NT_RED2	EQU	14
	// 529 COL_NT_RED3	EQU	15
	// 530 COL_NT_BLUE1	EQU	16
	// 531 COL_NT_BLUE2	EQU	17
	// 532 COL_NT_YELLOW1	EQU	18
	// 533 COL_NT_AMBER1	EQU	19
	// 534 COL_NT_AMBER2	EQU	20
	// 535 COL_NT_GREEN1	EQU	21
	// 536 COL_NT_R_WHITE1	EQU	22
	// 537 COL_NT_B_WHITE1	EQU	23
	// 541 COL_WHITE1	EQU	24
	// 542 COL_GREY1	EQU	25
	// 543 COL_GREY2	EQU	26
	// 544 COL_GREY3	EQU	27
	// 545 COL_GREY4	EQU	28
	// 546 COL_BLACK1	EQU	29
	// 547 COL_CYAN_GREY1	EQU	30
	// 548 COL_CYAN_GREY2	EQU	31
	// 549 COL_CYAN_GREY3	EQU	32
	// 550 COL_CYAN_GREY4	EQU	33
	// 551 COL_CYAN_GREY5	EQU	34
	// 552 COL_CYAN_GREY6	EQU	35
	// 553 COL_SAND1	EQU	36
	// 554 COL_SAND2	EQU	37
	// 555 COL_SAND3	EQU	38
	// 556 COL_SAND4	EQU	39
	// 557 COL_SAND5	EQU	40
	// 558 COL_RUST1	EQU	41
	// 559 COL_RUST2	EQU	42
	// 560 COL_RUST3	EQU	43
	// 561 COL_RUST4	EQU	44
	// 562 COL_RUST5	EQU	45
	// 563 COL_NEW_GREY1	EQU	46
	// 564 COL_NEW_GREY2	EQU	47
	// 565 COL_NEW_GREY3	EQU	48
	// 566 COL_NEW_GREY4	EQU	49
	// 567 COL_YELLOW1	EQU	50
	// 568 COL_AMBER1	EQU	51
	// 569 COL_AMBER2	EQU	52
	// 570 COL_AMBER3	EQU	53
	// 571 COL_AMBER4	EQU	54
	// 572 COL_RED1	EQU	55
	// 573 COL_GREEN1	EQU	56
	// 574 COL_GREEN2	EQU	57
	// 575 COL_GREEN3	EQU	58
	// 576 COL_GREEN4	EQU	59
	// 577 COL_DK_CYAN1	EQU	60
	// 578 COL_DK_CYAN2	EQU	61
	// 579 COL_DK_CYAN3	EQU	62
	// 580 COL_DK_CYAN4	EQU	63
	// 581 COL_OLIVE1	EQU	64
	// 582 COL_OLIVE2	EQU	65
	// 583 COL_OLIVE3	EQU	66
	// 584 COL_OLIVE4	EQU	67
	// 585 COL_OLIVE5	EQU	68
	// 586 COL_OLIVE6	EQU	69
	// 587 COL_NEAR_WHITE1	EQU	70
	// 588 COL_SMOKE_GREY1	EQU	71
	// 589 COL_SMOKE_GREY2	EQU	72
	// 593 COL_ROAD1	EQU	73
	// 594 COL_RWY1	EQU	74
	// 595 COL_GND1	EQU	75
	// 596 COL_GND2	EQU	76
	// 597 COL_RAIL1	EQU	77
	// 598 COL_RAIL2	EQU	78
	// 599 COL_RIVER1	EQU	79
	// 603 COL_HILL1	EQU	80
	// 604 COL_HILL2	EQU	81
	// 605 COL_HILL3	EQU	82
	// 606 COL_HILL4	EQU	83
	// 607 COL_HILL5	EQU	84
	// 608 COL_HILL6	EQU	85
	// 609 COL_HILL7	EQU	86
	// 610 COL_HILL8	EQU	87
	// 611 COL_HILL9	EQU	88
	// 612 COL_HILL10	EQU	89
	// 613 COL_HILL11	EQU	90
	// 614 COL_HILL12	EQU	91
	// 615 COL_HILL13	EQU	92
	// 616 COL_HILL14	EQU	93
	// 617 COL_HILL15	EQU	94
	// 618 COL_HILL16	EQU	95
	// 622 COL_SKY1	EQU	96
	// 623 COL_SKY2	EQU	97
	// 624 COL_SKY3	EQU	98
	// 625 COL_SKY4	EQU	99
	// 626 COL_SKY5	EQU	100
	// 627 COL_SKY6	EQU	101
	// 628 COL_SKY7	EQU	102
	// 629 COL_SKY8	EQU	103
	// 630 COL_SKY9	EQU	104
	// 631 COL_SKY10	EQU	105
	// 632 COL_SKY11	EQU	106
	// 633 COL_SKY12	EQU	107
	// 634 COL_SKY13	EQU	108
	// 635 COL_SKY14	EQU	109
	// 636 COL_SKY15	EQU	110
	// 637 COL_SKY16	EQU	111
	// 641 COL_MAP_HILL1	EQU	112
	// 642 COL_MAP_HILL2	EQU	113
	// 643 COL_MAP_HILL3	EQU	114
	// 644 COL_MAP_HILL4	EQU	115
	// 645 COL_MAP_HILL5	EQU	116
	// 646 COL_MAP_HILL6	EQU	117
	// 647 COL_MAP_HILL7	EQU	118
	// 648 COL_MAP_HILL8	EQU	119
	// 649 COL_MAP_HILL9	EQU	120
	// 650 COL_MAP_HILL10	EQU	121
	// 651 COL_MAP_HILL11	EQU	122
	// 652 COL_MAP_HILL12	EQU	123
	// 653 COL_MAP_HILL13	EQU	124
	// 654 COL_MAP_HILL14	EQU	125
	// 655 COL_MAP_HILL15	EQU	126
	// 656 COL_MAP_HILL16	EQU	127
	// 660 COL_NEEDLE	EQU	128
	// 661 COL_COUNTER	EQU	129
	// 662 COL_RED_NEEDLE	EQU	130
	// 663 COL_ADI_SKY	EQU	131
	// 664 COL_ADI_GND	EQU	132
	// 665 COL_HUD		EQU	133
	// 666 COL_BUG		EQU	134
	// 667 COL_AOA		EQU	135
	// 668 COL_KNEE_PAD	EQU	136
	// 669 COL_KNEE_INK1	EQU	137
	// 670 COL_KNEE_INK2	EQU	138
	// 671 COL_KNEE_PEN	EQU	139
	// 672 COL_KNEE_NUM	EQU	140
	// 673 COL_SIGHT	EQU	141
	// 675 COL_TIALD_SYM	EQU	COL_BLACK
	// 678 COL_MAP_SYM	EQU	COL_BLACK
	// 680 COL_REF_SYM	EQU	COL_BLACK
	// 682 COL_RADAR_MASK	EQU	COL_BLACK
	// 684 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 685 COL_IR_MISS	EQU	COL_CRT_RED
	// 687 COL_LOCAL1	EQU	209		;day
	// 688 COL_LOCAL2	EQU	213
	// 689 COL_LOCAL3	EQU	215
	// 690 COL_LOCAL4	EQU	218
	// 691 COL_LOCAL5	EQU	220
	// 692 COL_NT_LOCAL1	EQU	233		;night
	// 693 COL_NT_LOCAL2	EQU	234
	// 694 COL_NT_LOCAL3	EQU	235
	// 695 COL_NT_LOCAL4	EQU	236
	// 696 COL_NT_LOCAL5	EQU	255
	// 698 COL_GLIDE1	EQU	210		;day
	// 699 COL_GLIDE2	EQU	216
	// 700 COL_GLIDE3	EQU	220
	// 701 COL_NT_GLIDE1	EQU	234		;night
	// 702 COL_NT_GLIDE2	EQU	235
	// 703 COL_NT_GLIDE3	EQU	236
	// 711 COL_MAP_GND1	EQU	144
	// 712 COL_MAP_ROAD1	EQU	145
	// 713 COL_MAP_RAIL1	EQU	146
	// 714 COL_MAP_RWY1	EQU	147
	// 715 COL_MAP_RIVER1	EQU	148
	// 716 COL_MAP_GREEN1	EQU	149
	// 717 COL_MAP_GREEN2	EQU	150
	// 718 COL_MAP_COMPASS	EQU	151
	// 719 COL_MAP_LOCATOR	EQU	152
	// 720 COL_MAP_ALLIED	EQU	153
	// 721 COL_MAP_BORDER	EQU	154
	// 722 COL_COMPASS	EQU	155
	// 723 COL_LOCATOR	EQU	156
	// 724 COL_MAP_RWY2	EQU	157
	// 725 COL_MAP_ENEMY	EQU	158
	// 729 COL_CRT_RED	EQU	159
	// 730 COL_CRT1	EQU	160
	// 731 COL_CRT2	EQU	161
	// 732 COL_CRT3	EQU	162
	// 733 COL_CRT4	EQU	163
	// 734 COL_CRT5	EQU	164
	// 735 COL_CRT6	EQU	165
	// 736 COL_CRT7	EQU	166
	// 737 COL_CRT8	EQU	167
	// 738 COL_CRT9	EQU	168
	// 739 COL_CRT10	EQU	169
	// 740 COL_CRT11	EQU	170
	// 741 COL_CRT12	EQU	171
	// 742 COL_CRT13	EQU	172
	// 743 COL_CRT14	EQU	173
	// 744 COL_CRT15	EQU	174
	// 745 COL_CRT16	EQU	175
	// 0 ;* approximation threshold wrt ZFT (max value = 8192)
	// 750 Z_APPROX_THRES	EQU	8192
	// 0 ;* calc node centre position wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* draw polygon roads wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* draw line roads wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* road length sector grid offsets (1/1 scaling)
	// 0 ;x -  N road
	// 0 ;y
	// 0 ;x - NE road
	// 0 ;y
	// 0 ;x -  E road
	// 0 ;y
	// 0 ;x - SE road
	// 0 ;y
	// 0 ;x -  S road
	// 0 ;y
	// 0 ;x - SW road
	// 0 ;y
	// 0 ;x -  W road
	// 0 ;y
	// 0 ;x - NW road
	// 0 ;y
	// 0 ;* road length sector grid offsets (1/2 scaling)
	// 0 ;x -  N road
	// 0 ;y
	// 0 ;x - NE road
	// 0 ;y
	// 0 ;x -  E road
	// 0 ;y
	// 0 ;x - SE road
	// 0 ;y
	// 0 ;x -  S road
	// 0 ;y
	// 0 ;x - SW road
	// 0 ;y
	// 0 ;x -  W road
	// 0 ;y
	// 0 ;x - NW road
	// 0 ;y
	// 0 ;* road length sector grid offsets (1/8 scaling)
	// 0 ;x -  N road
	// 0 ;y
	// 0 ;x - NE road
	// 0 ;y
	// 0 ;x -  E road
	// 0 ;y
	// 0 ;x - SE road
	// 0 ;y
	// 0 ;x -  S road
	// 0 ;y
	// 0 ;x - SW road
	// 0 ;y
	// 0 ;x -  W road
	// 0 ;y
	// 0 ;x - NW road
	// 0 ;y
	// 0 ;* road length sector grid offsets (1/16 scaling)
	// 0 ;x -  N road
	// 0 ;y
	// 0 ;x - NE road
	// 0 ;y
	// 0 ;x -  E road
	// 0 ;y
	// 0 ;x - SE road
	// 0 ;y
	// 0 ;x -  S road
	// 0 ;y
	// 0 ;x - SW road
	// 0 ;y
	// 0 ;x -  W road
	// 0 ;y
	// 0 ;x - NW road
	// 0 ;y
	// 0 ;* road half width object grid offsets (1/1 scaling)
	// 0 ;x1 -  N road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NE road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  E road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SE road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  S road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SW road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  W road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NW road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;* road half width object grid offsets (1/2 scaling)
	// 0 ;x1 -  N road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NE road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  E road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SE road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  S road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SW road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  W road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NW road
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4

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

