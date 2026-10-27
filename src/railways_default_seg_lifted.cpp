/* THIS IS GENERATED FILE */

        
#include "railways.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 170 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 171 VP_ZFT_LO	EQU	VP_ZFT
	// 172 VP_ZFT_HI	EQU	VP_ZFT+2
	// 176 SEC_SCALE1 	EQU	0		;1/1 scale
	// 177 SEC_SCALE2	EQU	2		;1/2 scale
	// 178 SEC_SCALE8 	EQU	4		;1/8 scale
	// 179 SEC_SCALE16 	EQU	6		;1/16 scale
	// 183 INT_VIEWMODE	EQU	0		;internal views
	// 184 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 185 EXT_VIEWMODE	EQU	4		;external views
	// 186 TV1_VIEWMODE	EQU	6		;TV1 display
	// 187 TV2_VIEWMODE	EQU	8		;TV2 display
	// 188 TV3_VIEWMODE	EQU	10		;TV3 display
	// 189 TV4_VIEWMODE	EQU	12		;TV4 display
	// 190 TV5_VIEWMODE	EQU	14		;TV5 display
	// 191 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 195 ROTATE_NULL	EQU	0		;no rotation
	// 196 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 197 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 198 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 199 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 200 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 201 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 205 $MID		EQU	128
	// 206 $0		EQU	0
	// 207 $256		EQU	2
	// 208 $512		EQU	4
	// 209 $1024		EQU	8
	// 210 $2048		EQU	16
	// 211 $4096		EQU	32
	// 212 $8192		EQU	64
	// 221 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 225 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 226 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 230 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 231 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 235 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 239 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 240 OBJ_SCALE2	EQU	2		;2/1 scale
	// 241 OBJ_SCALE4	EQU	4		;4/1 scale
	// 242 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 243 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 247 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 248 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 249 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 250 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 251 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 255 @MID		EQU	64
	// 256 @0		EQU	0
	// 257 @16		EQU	2
	// 258 @32		EQU	4
	// 259 @48		EQU	6
	// 260 @64		EQU	8
	// 261 @80		EQU	10
	// 262 @96		EQU	12
	// 263 @112		EQU	14
	// 264 @128		EQU	16
	// 265 @192		EQU	24
	// 266 @256		EQU	32
	// 267 @384		EQU	48
	// 268 @512		EQU	64
	// 286 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 288 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 289 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 291 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 292 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 293 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 295 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 297 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 298 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 299 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 300 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 301 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 302 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 304 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 306 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 307 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 311 OTYPE_GROUND	EQU	0		;static ground objects
	// 312 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 313 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 314 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 315 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 316 OTYPE_HILLFACE	EQU	10		;hill face
	// 317 OTYPE_SMOKE	EQU	12		;smoke
	// 331 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 332 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 336 NUM_OBJECTS	EQU	256		;max number of objects
	// 337 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 338 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 339 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 340 BEHIND_BIN	EQU	0		;behind bin index
	// 341 IN_FRONT_BIN	EQU	2		;in front bin index
	// 345 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 346 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 347 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 348 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 349 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 350 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 351 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 361 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 365 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 366 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 367 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 368 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 369 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 370 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 371 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 372 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 373 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 374 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 378 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 384 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 397 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 408 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 412 SURFACE_UNKNOWN	EQU	0
	// 413 SURFACE_RUNWAY	EQU	2
	// 414 SURFACE_TAXIWAY	EQU	4
	// 415 SURFACE_HARD	EQU	6
	// 416 SURFACE_ROAD	EQU	8
	// 417 SURFACE_RAILWAY	EQU	10
	// 418 SURFACE_RIVER	EQU	12
	// 419 SURFACE_LAKE	EQU	14
	// 423 NUM_CRATERS	EQU	128
	// 424 CRATER_NULL	EQU	0
	// 425 CRATER_SIZE1	EQU	1		;small
	// 426 CRATER_SIZE2	EQU	2		;large
	// 427 CRATER_HEAVE	EQU	3		;heave
	// 428 CRATER_SHELL	EQU	4		;cannon shell
	// 439 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 443 NUM_SMOKE	EQU	128
	// 445 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 446 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 447 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 448 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 449 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 450 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 451 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 453 STYPE_NULL	EQU	0		;no smoke
	// 454 STYPE_GND1	EQU	2		;ground smoke type 1
	// 455 STYPE_AIR1	EQU	4		;air smoke type 1
	// 471 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 472 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 473 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 474 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 489 FOG_COL_START	EQU	8
	// 490 FOG_COL_COUNT	EQU	104
	// 492 NIGHT_COL_START	EQU	24
	// 493 NIGHT_COL_COUNT	EQU	88
	// 495 IR_COL_START	EQU	8
	// 496 IR_COL_COUNT	EQU	104
	// 500 COL_BLACK	EQU	0
	// 501 COL_LT_RED	EQU	1
	// 502 COL_YELLOW	EQU	2
	// 503 COL_LT_CYAN	EQU	3
	// 504 COL_WHITE	EQU	4
	// 508 COL_TEXT_NORM1	EQU	5
	// 509 COL_TEXT_NORM2	EQU	6
	// 510 COL_TEXT_ALERT	EQU	7
	// 514 COL_NT_WHITE1	EQU	8
	// 515 COL_NT_GREY1	EQU	9
	// 516 COL_NT_GREY2	EQU	10
	// 517 COL_NT_GREY3	EQU	11
	// 518 COL_NT_GREY4	EQU	12
	// 519 COL_NT_RED1	EQU	13
	// 520 COL_NT_RED2	EQU	14
	// 521 COL_NT_RED3	EQU	15
	// 522 COL_NT_BLUE1	EQU	16
	// 523 COL_NT_BLUE2	EQU	17
	// 524 COL_NT_YELLOW1	EQU	18
	// 525 COL_NT_AMBER1	EQU	19
	// 526 COL_NT_AMBER2	EQU	20
	// 527 COL_NT_GREEN1	EQU	21
	// 528 COL_NT_R_WHITE1	EQU	22
	// 529 COL_NT_B_WHITE1	EQU	23
	// 533 COL_WHITE1	EQU	24
	// 534 COL_GREY1	EQU	25
	// 535 COL_GREY2	EQU	26
	// 536 COL_GREY3	EQU	27
	// 537 COL_GREY4	EQU	28
	// 538 COL_BLACK1	EQU	29
	// 539 COL_CYAN_GREY1	EQU	30
	// 540 COL_CYAN_GREY2	EQU	31
	// 541 COL_CYAN_GREY3	EQU	32
	// 542 COL_CYAN_GREY4	EQU	33
	// 543 COL_CYAN_GREY5	EQU	34
	// 544 COL_CYAN_GREY6	EQU	35
	// 545 COL_SAND1	EQU	36
	// 546 COL_SAND2	EQU	37
	// 547 COL_SAND3	EQU	38
	// 548 COL_SAND4	EQU	39
	// 549 COL_SAND5	EQU	40
	// 550 COL_RUST1	EQU	41
	// 551 COL_RUST2	EQU	42
	// 552 COL_RUST3	EQU	43
	// 553 COL_RUST4	EQU	44
	// 554 COL_RUST5	EQU	45
	// 555 COL_NEW_GREY1	EQU	46
	// 556 COL_NEW_GREY2	EQU	47
	// 557 COL_NEW_GREY3	EQU	48
	// 558 COL_NEW_GREY4	EQU	49
	// 559 COL_YELLOW1	EQU	50
	// 560 COL_AMBER1	EQU	51
	// 561 COL_AMBER2	EQU	52
	// 562 COL_AMBER3	EQU	53
	// 563 COL_AMBER4	EQU	54
	// 564 COL_RED1	EQU	55
	// 565 COL_GREEN1	EQU	56
	// 566 COL_GREEN2	EQU	57
	// 567 COL_GREEN3	EQU	58
	// 568 COL_GREEN4	EQU	59
	// 569 COL_DK_CYAN1	EQU	60
	// 570 COL_DK_CYAN2	EQU	61
	// 571 COL_DK_CYAN3	EQU	62
	// 572 COL_DK_CYAN4	EQU	63
	// 573 COL_OLIVE1	EQU	64
	// 574 COL_OLIVE2	EQU	65
	// 575 COL_OLIVE3	EQU	66
	// 576 COL_OLIVE4	EQU	67
	// 577 COL_OLIVE5	EQU	68
	// 578 COL_OLIVE6	EQU	69
	// 579 COL_NEAR_WHITE1	EQU	70
	// 580 COL_SMOKE_GREY1	EQU	71
	// 581 COL_SMOKE_GREY2	EQU	72
	// 585 COL_ROAD1	EQU	73
	// 586 COL_RWY1	EQU	74
	// 587 COL_GND1	EQU	75
	// 588 COL_GND2	EQU	76
	// 589 COL_RAIL1	EQU	77
	// 590 COL_RAIL2	EQU	78
	// 591 COL_RIVER1	EQU	79
	// 595 COL_HILL1	EQU	80
	// 596 COL_HILL2	EQU	81
	// 597 COL_HILL3	EQU	82
	// 598 COL_HILL4	EQU	83
	// 599 COL_HILL5	EQU	84
	// 600 COL_HILL6	EQU	85
	// 601 COL_HILL7	EQU	86
	// 602 COL_HILL8	EQU	87
	// 603 COL_HILL9	EQU	88
	// 604 COL_HILL10	EQU	89
	// 605 COL_HILL11	EQU	90
	// 606 COL_HILL12	EQU	91
	// 607 COL_HILL13	EQU	92
	// 608 COL_HILL14	EQU	93
	// 609 COL_HILL15	EQU	94
	// 610 COL_HILL16	EQU	95
	// 614 COL_SKY1	EQU	96
	// 615 COL_SKY2	EQU	97
	// 616 COL_SKY3	EQU	98
	// 617 COL_SKY4	EQU	99
	// 618 COL_SKY5	EQU	100
	// 619 COL_SKY6	EQU	101
	// 620 COL_SKY7	EQU	102
	// 621 COL_SKY8	EQU	103
	// 622 COL_SKY9	EQU	104
	// 623 COL_SKY10	EQU	105
	// 624 COL_SKY11	EQU	106
	// 625 COL_SKY12	EQU	107
	// 626 COL_SKY13	EQU	108
	// 627 COL_SKY14	EQU	109
	// 628 COL_SKY15	EQU	110
	// 629 COL_SKY16	EQU	111
	// 633 COL_MAP_HILL1	EQU	112
	// 634 COL_MAP_HILL2	EQU	113
	// 635 COL_MAP_HILL3	EQU	114
	// 636 COL_MAP_HILL4	EQU	115
	// 637 COL_MAP_HILL5	EQU	116
	// 638 COL_MAP_HILL6	EQU	117
	// 639 COL_MAP_HILL7	EQU	118
	// 640 COL_MAP_HILL8	EQU	119
	// 641 COL_MAP_HILL9	EQU	120
	// 642 COL_MAP_HILL10	EQU	121
	// 643 COL_MAP_HILL11	EQU	122
	// 644 COL_MAP_HILL12	EQU	123
	// 645 COL_MAP_HILL13	EQU	124
	// 646 COL_MAP_HILL14	EQU	125
	// 647 COL_MAP_HILL15	EQU	126
	// 648 COL_MAP_HILL16	EQU	127
	// 652 COL_NEEDLE	EQU	128
	// 653 COL_COUNTER	EQU	129
	// 654 COL_RED_NEEDLE	EQU	130
	// 655 COL_ADI_SKY	EQU	131
	// 656 COL_ADI_GND	EQU	132
	// 657 COL_HUD		EQU	133
	// 658 COL_BUG		EQU	134
	// 659 COL_AOA		EQU	135
	// 660 COL_KNEE_PAD	EQU	136
	// 661 COL_KNEE_INK1	EQU	137
	// 662 COL_KNEE_INK2	EQU	138
	// 663 COL_KNEE_PEN	EQU	139
	// 664 COL_KNEE_NUM	EQU	140
	// 665 COL_SIGHT	EQU	141
	// 667 COL_TIALD_SYM	EQU	COL_BLACK
	// 670 COL_MAP_SYM	EQU	COL_BLACK
	// 672 COL_REF_SYM	EQU	COL_BLACK
	// 674 COL_RADAR_MASK	EQU	COL_BLACK
	// 676 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 677 COL_IR_MISS	EQU	COL_CRT_RED
	// 679 COL_LOCAL1	EQU	209		;day
	// 680 COL_LOCAL2	EQU	213
	// 681 COL_LOCAL3	EQU	215
	// 682 COL_LOCAL4	EQU	218
	// 683 COL_LOCAL5	EQU	220
	// 684 COL_NT_LOCAL1	EQU	233		;night
	// 685 COL_NT_LOCAL2	EQU	234
	// 686 COL_NT_LOCAL3	EQU	235
	// 687 COL_NT_LOCAL4	EQU	236
	// 688 COL_NT_LOCAL5	EQU	255
	// 690 COL_GLIDE1	EQU	210		;day
	// 691 COL_GLIDE2	EQU	216
	// 692 COL_GLIDE3	EQU	220
	// 693 COL_NT_GLIDE1	EQU	234		;night
	// 694 COL_NT_GLIDE2	EQU	235
	// 695 COL_NT_GLIDE3	EQU	236
	// 703 COL_MAP_GND1	EQU	144
	// 704 COL_MAP_ROAD1	EQU	145
	// 705 COL_MAP_RAIL1	EQU	146
	// 706 COL_MAP_RWY1	EQU	147
	// 707 COL_MAP_RIVER1	EQU	148
	// 708 COL_MAP_GREEN1	EQU	149
	// 709 COL_MAP_GREEN2	EQU	150
	// 710 COL_MAP_COMPASS	EQU	151
	// 711 COL_MAP_LOCATOR	EQU	152
	// 712 COL_MAP_ALLIED	EQU	153
	// 713 COL_MAP_BORDER	EQU	154
	// 714 COL_COMPASS	EQU	155
	// 715 COL_LOCATOR	EQU	156
	// 716 COL_MAP_RWY2	EQU	157
	// 717 COL_MAP_ENEMY	EQU	158
	// 721 COL_CRT_RED	EQU	159
	// 722 COL_CRT1	EQU	160
	// 723 COL_CRT2	EQU	161
	// 724 COL_CRT3	EQU	162
	// 725 COL_CRT4	EQU	163
	// 726 COL_CRT5	EQU	164
	// 727 COL_CRT6	EQU	165
	// 728 COL_CRT7	EQU	166
	// 729 COL_CRT8	EQU	167
	// 730 COL_CRT9	EQU	168
	// 731 COL_CRT10	EQU	169
	// 732 COL_CRT11	EQU	170
	// 733 COL_CRT12	EQU	171
	// 734 COL_CRT13	EQU	172
	// 735 COL_CRT14	EQU	173
	// 736 COL_CRT15	EQU	174
	// 737 COL_CRT16	EQU	175
	// 0 ;* line / polygon railway bed approximation threshold wrt ZFT
	// 923 Z_APPROX_THRES	EQU	8192		;<= 8192
	// 0 ;<= 8192
	// 0 ;* single / double track approximation threshold wrt ZFT
	// 926 Z_TRACK_THRES	EQU	1024		;<= Z_APPROX_THRES
	// 0 ;<= Z_APPROX_THRES
	// 0 ;* draw polygon rails wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* draw line rails wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* draw single line tracks wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;* draw double line tracks wrt SctrScaleMode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;* track scaling vars:- lsb = position * scale, msb = offset / scale
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;* rail length sector grid offsets (1/1 scaling)
	// 0 ;x - N rail
	// 0 ;y
	// 0 ;x - NE rail
	// 0 ;y
	// 0 ;x -  E rail
	// 0 ;y
	// 0 ;x - SE rail
	// 0 ;y
	// 0 ;x -  S rail
	// 0 ;y
	// 0 ;x - SW rail
	// 0 ;y
	// 0 ;x -  W rail
	// 0 ;y
	// 0 ;x - NW rail
	// 0 ;y
	// 0 ;* rail length sector grid offsets (1/2 scaling)
	// 0 ;x -  N rail
	// 0 ;y
	// 0 ;x - NE rail
	// 0 ;y
	// 0 ;x -  E rail
	// 0 ;y
	// 0 ;x - SE rail
	// 0 ;y
	// 0 ;x -  S rail
	// 0 ;y
	// 0 ;x - SW rail
	// 0 ;y
	// 0 ;x -  W rail
	// 0 ;y
	// 0 ;x - NW rail
	// 0 ;y
	// 0 ;* rail length sector grid offsets (1/8 scaling)
	// 0 ;x -  N rail
	// 0 ;y
	// 0 ;x - NE rail
	// 0 ;y
	// 0 ;x -  E rail
	// 0 ;y
	// 0 ;x - SE rail
	// 0 ;y
	// 0 ;x -  S rail
	// 0 ;y
	// 0 ;x - SW rail
	// 0 ;y
	// 0 ;x -  W rail
	// 0 ;y
	// 0 ;x - NW rail
	// 0 ;y
	// 0 ;* rail length sector grid offsets (1/16 scaling)
	// 0 ;x -  N rail
	// 0 ;y
	// 0 ;x - NE rail
	// 0 ;y
	// 0 ;x -  E rail
	// 0 ;y
	// 0 ;x - SE rail
	// 0 ;y
	// 0 ;x -  S rail
	// 0 ;y
	// 0 ;x - SW rail
	// 0 ;y
	// 0 ;x -  W rail
	// 0 ;y
	// 0 ;x - NW rail
	// 0 ;y
	// 0 ;* rail half width object grid offsets (1/1 scaling)
	// 0 ;x1 -  N rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NE rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  E rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SE rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  S rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SW rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  W rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NW rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;* rail half width object grid offsets (1/2 scaling)
	// 0 ;x1 -  N rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NE rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  E rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SE rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  S rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - SW rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 -  W rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;x1 - NW rail
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x3
	// 0 ;y3
	// 0 ;x4
	// 0 ;y4
	// 0 ;* single track end offsets (1/1 scaling)
	// 0 ;x1 -  N track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - NE track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  E track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - SE track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  S track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - SW track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  W track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - NW track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;* single track end offsets (1/2 scaling)
	// 0 ;x1 -  N track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - NE track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  E track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - SE track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  S track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - SW track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 -  W track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;x1 - NW track
	// 0 ;y1
	// 0 ;x2
	// 0 ;y2
	// 0 ;* double track end lh and rh offsets (1/16 scaling)
	// 0 ;xl -  N track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - NE track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl -  E track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - SE track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl -  S track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - SW track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl -  W track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;xl - NW track
	// 0 ;yl
	// 0 ;xr
	// 0 ;yr
	// 0 ;* track draw eye co-ord EQUates
	// 1261 P1		EQU	4		;centre point
	// 0 ;centre point
	// 1262 P2		EQU	6		;1/4 point
	// 0 ;1/4 point
	// 1263 P3		EQU	8		;1/2 point
	// 0 ;1/2 point
	// 1264 P4		EQU	10		;3/4 point
	// 0 ;3/4 point
	// 1265 P5		EQU	12		;end point
	// 0 ;end point
	// 1266 LH_P1		EQU	14		;lh centre point
	// 0 ;lh centre point
	// 1267 RH_P1		EQU	16		;rh centre point
	// 0 ;rh centre point
	// 1268 LH_P2		EQU	18		;lh 1/4 point
	// 0 ;lh 1/4 point
	// 1269 RH_P2		EQU	20		;rh 1/4 point
	// 0 ;rh 1/4 point
	// 1270 LH_P3		EQU	22		;lh 1/2 point
	// 0 ;lh 1/2 point
	// 1271 RH_P3		EQU	24		;rh 1/2 point
	// 0 ;rh 1/2 point
	// 1272 LH_P4		EQU	26		;lh 3/4 point
	// 0 ;lh 3/4 point
	// 1273 RH_P4		EQU	28		;rh 3/4 point
	// 0 ;rh 3/4 point
	// 1274 LH_P5		EQU	30		;lh end point
	// 0 ;lh end point
	// 1275 RH_P5		EQU	32		;rh end point
	// 0 ;rh end point

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

