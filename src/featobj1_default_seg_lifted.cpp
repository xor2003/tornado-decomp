/* THIS IS GENERATED FILE */

        
#include "featobj1.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 43 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 44 VP_ZFT_LO	EQU	VP_ZFT
	// 45 VP_ZFT_HI	EQU	VP_ZFT+2
	// 49 SEC_SCALE1 	EQU	0		;1/1 scale
	// 50 SEC_SCALE2	EQU	2		;1/2 scale
	// 51 SEC_SCALE8 	EQU	4		;1/8 scale
	// 52 SEC_SCALE16 	EQU	6		;1/16 scale
	// 56 INT_VIEWMODE	EQU	0		;internal views
	// 57 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 58 EXT_VIEWMODE	EQU	4		;external views
	// 59 TV1_VIEWMODE	EQU	6		;TV1 display
	// 60 TV2_VIEWMODE	EQU	8		;TV2 display
	// 61 TV3_VIEWMODE	EQU	10		;TV3 display
	// 62 TV4_VIEWMODE	EQU	12		;TV4 display
	// 63 TV5_VIEWMODE	EQU	14		;TV5 display
	// 64 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 68 ROTATE_NULL	EQU	0		;no rotation
	// 69 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 70 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 71 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 72 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 73 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 74 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 78 $MID		EQU	128
	// 79 $0		EQU	0
	// 80 $256		EQU	2
	// 81 $512		EQU	4
	// 82 $1024		EQU	8
	// 83 $2048		EQU	16
	// 84 $4096		EQU	32
	// 85 $8192		EQU	64
	// 94 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 98 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 99 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 103 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 104 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 108 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 112 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 113 OBJ_SCALE2	EQU	2		;2/1 scale
	// 114 OBJ_SCALE4	EQU	4		;4/1 scale
	// 115 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 116 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 120 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 121 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 122 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 123 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 124 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 128 @MID		EQU	64
	// 129 @0		EQU	0
	// 130 @16		EQU	2
	// 131 @32		EQU	4
	// 132 @48		EQU	6
	// 133 @64		EQU	8
	// 134 @80		EQU	10
	// 135 @96		EQU	12
	// 136 @112		EQU	14
	// 137 @128		EQU	16
	// 138 @192		EQU	24
	// 139 @256		EQU	32
	// 140 @384		EQU	48
	// 141 @512		EQU	64
	// 159 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 161 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 162 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 164 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 165 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 166 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 168 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 170 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 171 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 172 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 173 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 174 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 175 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 177 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 179 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 180 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 184 OTYPE_GROUND	EQU	0		;static ground objects
	// 185 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 186 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 187 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 188 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 189 OTYPE_HILLFACE	EQU	10		;hill face
	// 190 OTYPE_SMOKE	EQU	12		;smoke
	// 204 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 205 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 209 NUM_OBJECTS	EQU	256		;max number of objects
	// 210 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 211 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 212 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 213 BEHIND_BIN	EQU	0		;behind bin index
	// 214 IN_FRONT_BIN	EQU	2		;in front bin index
	// 218 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 219 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 220 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 221 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 222 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 223 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 224 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 234 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 238 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 239 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 240 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 241 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 242 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 243 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 244 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 245 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 246 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 247 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 251 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 257 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 270 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 281 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 285 SURFACE_UNKNOWN	EQU	0
	// 286 SURFACE_RUNWAY	EQU	2
	// 287 SURFACE_TAXIWAY	EQU	4
	// 288 SURFACE_HARD	EQU	6
	// 289 SURFACE_ROAD	EQU	8
	// 290 SURFACE_RAILWAY	EQU	10
	// 291 SURFACE_RIVER	EQU	12
	// 292 SURFACE_LAKE	EQU	14
	// 296 NUM_CRATERS	EQU	128
	// 297 CRATER_NULL	EQU	0
	// 298 CRATER_SIZE1	EQU	1		;small
	// 299 CRATER_SIZE2	EQU	2		;large
	// 300 CRATER_HEAVE	EQU	3		;heave
	// 301 CRATER_SHELL	EQU	4		;cannon shell
	// 312 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 316 NUM_SMOKE	EQU	128
	// 318 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 319 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 320 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 321 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 322 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 323 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 324 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 326 STYPE_NULL	EQU	0		;no smoke
	// 327 STYPE_GND1	EQU	2		;ground smoke type 1
	// 328 STYPE_AIR1	EQU	4		;air smoke type 1
	// 344 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 345 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 346 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 347 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 362 FOG_COL_START	EQU	8
	// 363 FOG_COL_COUNT	EQU	104
	// 365 NIGHT_COL_START	EQU	24
	// 366 NIGHT_COL_COUNT	EQU	88
	// 368 IR_COL_START	EQU	8
	// 369 IR_COL_COUNT	EQU	104
	// 373 COL_BLACK	EQU	0
	// 374 COL_LT_RED	EQU	1
	// 375 COL_YELLOW	EQU	2
	// 376 COL_LT_CYAN	EQU	3
	// 377 COL_WHITE	EQU	4
	// 381 COL_TEXT_NORM1	EQU	5
	// 382 COL_TEXT_NORM2	EQU	6
	// 383 COL_TEXT_ALERT	EQU	7
	// 387 COL_NT_WHITE1	EQU	8
	// 388 COL_NT_GREY1	EQU	9
	// 389 COL_NT_GREY2	EQU	10
	// 390 COL_NT_GREY3	EQU	11
	// 391 COL_NT_GREY4	EQU	12
	// 392 COL_NT_RED1	EQU	13
	// 393 COL_NT_RED2	EQU	14
	// 394 COL_NT_RED3	EQU	15
	// 395 COL_NT_BLUE1	EQU	16
	// 396 COL_NT_BLUE2	EQU	17
	// 397 COL_NT_YELLOW1	EQU	18
	// 398 COL_NT_AMBER1	EQU	19
	// 399 COL_NT_AMBER2	EQU	20
	// 400 COL_NT_GREEN1	EQU	21
	// 401 COL_NT_R_WHITE1	EQU	22
	// 402 COL_NT_B_WHITE1	EQU	23
	// 406 COL_WHITE1	EQU	24
	// 407 COL_GREY1	EQU	25
	// 408 COL_GREY2	EQU	26
	// 409 COL_GREY3	EQU	27
	// 410 COL_GREY4	EQU	28
	// 411 COL_BLACK1	EQU	29
	// 412 COL_CYAN_GREY1	EQU	30
	// 413 COL_CYAN_GREY2	EQU	31
	// 414 COL_CYAN_GREY3	EQU	32
	// 415 COL_CYAN_GREY4	EQU	33
	// 416 COL_CYAN_GREY5	EQU	34
	// 417 COL_CYAN_GREY6	EQU	35
	// 418 COL_SAND1	EQU	36
	// 419 COL_SAND2	EQU	37
	// 420 COL_SAND3	EQU	38
	// 421 COL_SAND4	EQU	39
	// 422 COL_SAND5	EQU	40
	// 423 COL_RUST1	EQU	41
	// 424 COL_RUST2	EQU	42
	// 425 COL_RUST3	EQU	43
	// 426 COL_RUST4	EQU	44
	// 427 COL_RUST5	EQU	45
	// 428 COL_NEW_GREY1	EQU	46
	// 429 COL_NEW_GREY2	EQU	47
	// 430 COL_NEW_GREY3	EQU	48
	// 431 COL_NEW_GREY4	EQU	49
	// 432 COL_YELLOW1	EQU	50
	// 433 COL_AMBER1	EQU	51
	// 434 COL_AMBER2	EQU	52
	// 435 COL_AMBER3	EQU	53
	// 436 COL_AMBER4	EQU	54
	// 437 COL_RED1	EQU	55
	// 438 COL_GREEN1	EQU	56
	// 439 COL_GREEN2	EQU	57
	// 440 COL_GREEN3	EQU	58
	// 441 COL_GREEN4	EQU	59
	// 442 COL_DK_CYAN1	EQU	60
	// 443 COL_DK_CYAN2	EQU	61
	// 444 COL_DK_CYAN3	EQU	62
	// 445 COL_DK_CYAN4	EQU	63
	// 446 COL_OLIVE1	EQU	64
	// 447 COL_OLIVE2	EQU	65
	// 448 COL_OLIVE3	EQU	66
	// 449 COL_OLIVE4	EQU	67
	// 450 COL_OLIVE5	EQU	68
	// 451 COL_OLIVE6	EQU	69
	// 452 COL_NEAR_WHITE1	EQU	70
	// 453 COL_SMOKE_GREY1	EQU	71
	// 454 COL_SMOKE_GREY2	EQU	72
	// 458 COL_ROAD1	EQU	73
	// 459 COL_RWY1	EQU	74
	// 460 COL_GND1	EQU	75
	// 461 COL_GND2	EQU	76
	// 462 COL_RAIL1	EQU	77
	// 463 COL_RAIL2	EQU	78
	// 464 COL_RIVER1	EQU	79
	// 468 COL_HILL1	EQU	80
	// 469 COL_HILL2	EQU	81
	// 470 COL_HILL3	EQU	82
	// 471 COL_HILL4	EQU	83
	// 472 COL_HILL5	EQU	84
	// 473 COL_HILL6	EQU	85
	// 474 COL_HILL7	EQU	86
	// 475 COL_HILL8	EQU	87
	// 476 COL_HILL9	EQU	88
	// 477 COL_HILL10	EQU	89
	// 478 COL_HILL11	EQU	90
	// 479 COL_HILL12	EQU	91
	// 480 COL_HILL13	EQU	92
	// 481 COL_HILL14	EQU	93
	// 482 COL_HILL15	EQU	94
	// 483 COL_HILL16	EQU	95
	// 487 COL_SKY1	EQU	96
	// 488 COL_SKY2	EQU	97
	// 489 COL_SKY3	EQU	98
	// 490 COL_SKY4	EQU	99
	// 491 COL_SKY5	EQU	100
	// 492 COL_SKY6	EQU	101
	// 493 COL_SKY7	EQU	102
	// 494 COL_SKY8	EQU	103
	// 495 COL_SKY9	EQU	104
	// 496 COL_SKY10	EQU	105
	// 497 COL_SKY11	EQU	106
	// 498 COL_SKY12	EQU	107
	// 499 COL_SKY13	EQU	108
	// 500 COL_SKY14	EQU	109
	// 501 COL_SKY15	EQU	110
	// 502 COL_SKY16	EQU	111
	// 506 COL_MAP_HILL1	EQU	112
	// 507 COL_MAP_HILL2	EQU	113
	// 508 COL_MAP_HILL3	EQU	114
	// 509 COL_MAP_HILL4	EQU	115
	// 510 COL_MAP_HILL5	EQU	116
	// 511 COL_MAP_HILL6	EQU	117
	// 512 COL_MAP_HILL7	EQU	118
	// 513 COL_MAP_HILL8	EQU	119
	// 514 COL_MAP_HILL9	EQU	120
	// 515 COL_MAP_HILL10	EQU	121
	// 516 COL_MAP_HILL11	EQU	122
	// 517 COL_MAP_HILL12	EQU	123
	// 518 COL_MAP_HILL13	EQU	124
	// 519 COL_MAP_HILL14	EQU	125
	// 520 COL_MAP_HILL15	EQU	126
	// 521 COL_MAP_HILL16	EQU	127
	// 525 COL_NEEDLE	EQU	128
	// 526 COL_COUNTER	EQU	129
	// 527 COL_RED_NEEDLE	EQU	130
	// 528 COL_ADI_SKY	EQU	131
	// 529 COL_ADI_GND	EQU	132
	// 530 COL_HUD		EQU	133
	// 531 COL_BUG		EQU	134
	// 532 COL_AOA		EQU	135
	// 533 COL_KNEE_PAD	EQU	136
	// 534 COL_KNEE_INK1	EQU	137
	// 535 COL_KNEE_INK2	EQU	138
	// 536 COL_KNEE_PEN	EQU	139
	// 537 COL_KNEE_NUM	EQU	140
	// 538 COL_SIGHT	EQU	141
	// 540 COL_TIALD_SYM	EQU	COL_BLACK
	// 543 COL_MAP_SYM	EQU	COL_BLACK
	// 545 COL_REF_SYM	EQU	COL_BLACK
	// 547 COL_RADAR_MASK	EQU	COL_BLACK
	// 549 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 550 COL_IR_MISS	EQU	COL_CRT_RED
	// 552 COL_LOCAL1	EQU	209		;day
	// 553 COL_LOCAL2	EQU	213
	// 554 COL_LOCAL3	EQU	215
	// 555 COL_LOCAL4	EQU	218
	// 556 COL_LOCAL5	EQU	220
	// 557 COL_NT_LOCAL1	EQU	233		;night
	// 558 COL_NT_LOCAL2	EQU	234
	// 559 COL_NT_LOCAL3	EQU	235
	// 560 COL_NT_LOCAL4	EQU	236
	// 561 COL_NT_LOCAL5	EQU	255
	// 563 COL_GLIDE1	EQU	210		;day
	// 564 COL_GLIDE2	EQU	216
	// 565 COL_GLIDE3	EQU	220
	// 566 COL_NT_GLIDE1	EQU	234		;night
	// 567 COL_NT_GLIDE2	EQU	235
	// 568 COL_NT_GLIDE3	EQU	236
	// 576 COL_MAP_GND1	EQU	144
	// 577 COL_MAP_ROAD1	EQU	145
	// 578 COL_MAP_RAIL1	EQU	146
	// 579 COL_MAP_RWY1	EQU	147
	// 580 COL_MAP_RIVER1	EQU	148
	// 581 COL_MAP_GREEN1	EQU	149
	// 582 COL_MAP_GREEN2	EQU	150
	// 583 COL_MAP_COMPASS	EQU	151
	// 584 COL_MAP_LOCATOR	EQU	152
	// 585 COL_MAP_ALLIED	EQU	153
	// 586 COL_MAP_BORDER	EQU	154
	// 587 COL_COMPASS	EQU	155
	// 588 COL_LOCATOR	EQU	156
	// 589 COL_MAP_RWY2	EQU	157
	// 590 COL_MAP_ENEMY	EQU	158
	// 594 COL_CRT_RED	EQU	159
	// 595 COL_CRT1	EQU	160
	// 596 COL_CRT2	EQU	161
	// 597 COL_CRT3	EQU	162
	// 598 COL_CRT4	EQU	163
	// 599 COL_CRT5	EQU	164
	// 600 COL_CRT6	EQU	165
	// 601 COL_CRT7	EQU	166
	// 602 COL_CRT8	EQU	167
	// 603 COL_CRT9	EQU	168
	// 604 COL_CRT10	EQU	169
	// 605 COL_CRT11	EQU	170
	// 606 COL_CRT12	EQU	171
	// 607 COL_CRT13	EQU	172
	// 608 COL_CRT14	EQU	173
	// 609 COL_CRT15	EQU	174
	// 610 COL_CRT16	EQU	175
	// 0 ;============================================================================
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;  0
	// 0 ;  1
	// 0 ;  2
	// 0 ;  3
	// 0 ;  4
	// 0 ;  5
	// 0 ;  6
	// 0 ;  7
	// 0 ;  8
	// 0 ;  9
	// 0 ; 10
	// 0 ; 11
	// 0 ; 12
	// 0 ; 13
	// 0 ; 14
	// 0 ; 15
	// 0 ; 16
	// 0 ; 17
	// 0 ; 18
	// 0 ; 19
	// 0 ; 20
	// 0 ; 21
	// 0 ; 22
	// 0 ; 23
	// 0 ; 24
	// 0 ; 25
	// 0 ; 26
	// 0 ; 27
	// 0 ; 28
	// 0 ; 29
	// 0 ; 30
	// 0 ; 31
	// 0 ; 32
	// 0 ; 33
	// 0 ; 34
	// 0 ; 35
	// 0 ; 36
	// 0 ; 37
	// 0 ; 38
	// 0 ; 39
	// 0 ; 40
	// 0 ; 41
	// 0 ; 42
	// 0 ; 43
	// 0 ; 44
	// 0 ; 45
	// 0 ; 46
	// 0 ; 47
	// 0 ; 48
	// 0 ; 49
	// 0 ; 50
	// 0 ; 51
	// 0 ; 52
	// 0 ; 53
	// 0 ; 54
	// 0 ; 55
	// 0 ; 56
	// 0 ; 57
	// 0 ; 58
	// 0 ; 59
	// 0 ; 60
	// 0 ; 61
	// 0 ; 62
	// 0 ; 63
	// 0 ; 64
	// 0 ; 65
	// 0 ; 66
	// 0 ; 67
	// 0 ; 68
	// 0 ; 69
	// 0 ; 70
	// 0 ; 71
	// 0 ; 72
	// 0 ; 73
	// 0 ; 74
	// 0 ; 75
	// 0 ; 76
	// 0 ; 77
	// 0 ; 78
	// 0 ; 79
	// 0 ; 80
	// 0 ; 81
	// 0 ; 82
	// 0 ; 83
	// 0 ; 84
	// 0 ; 85
	// 0 ; 86
	// 0 ; 87
	// 0 ; 88
	// 0 ; 89
	// 0 ; 90
	// 0 ; 91
	// 0 ; 92
	// 0 ; 93
	// 0 ; 94
	// 0 ; 95
	// 0 ; 96
	// 0 ; 97
	// 0 ; 98
	// 0 ; 99
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;0
	// 0 ;1				DW	OFFSET RivTile2;2
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
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;  0
	// 0 ;  1
	// 0 ;  2
	// 0 ;  3
	// 0 ;  4
	// 0 ;  5
	// 0 ;  6
	// 0 ;  7
	// 0 ;  8
	// 0 ;  9
	// 0 ; 10
	// 0 ; 11
	// 0 ; 12
	// 0 ; 13
	// 0 ; 14
	// 0 ; 15
	// 0 ; 16
	// 0 ; 17
	// 0 ; 18
	// 0 ; 19
	// 0 ; 20
	// 0 ; 21
	// 0 ; 22
	// 0 ; 23
	// 0 ; 24
	// 0 ; 25
	// 0 ; 26
	// 0 ; 27
	// 0 ; 28

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

