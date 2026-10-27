/* THIS IS GENERATED FILE */

        
#include "collide.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 187 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 188 VP_ZFT_LO	EQU	VP_ZFT
	// 189 VP_ZFT_HI	EQU	VP_ZFT+2
	// 193 SEC_SCALE1 	EQU	0		;1/1 scale
	// 194 SEC_SCALE2	EQU	2		;1/2 scale
	// 195 SEC_SCALE8 	EQU	4		;1/8 scale
	// 196 SEC_SCALE16 	EQU	6		;1/16 scale
	// 200 INT_VIEWMODE	EQU	0		;internal views
	// 201 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 202 EXT_VIEWMODE	EQU	4		;external views
	// 203 TV1_VIEWMODE	EQU	6		;TV1 display
	// 204 TV2_VIEWMODE	EQU	8		;TV2 display
	// 205 TV3_VIEWMODE	EQU	10		;TV3 display
	// 206 TV4_VIEWMODE	EQU	12		;TV4 display
	// 207 TV5_VIEWMODE	EQU	14		;TV5 display
	// 208 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 212 ROTATE_NULL	EQU	0		;no rotation
	// 213 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 214 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 215 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 216 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 217 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 218 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 222 $MID		EQU	128
	// 223 $0		EQU	0
	// 224 $256		EQU	2
	// 225 $512		EQU	4
	// 226 $1024		EQU	8
	// 227 $2048		EQU	16
	// 228 $4096		EQU	32
	// 229 $8192		EQU	64
	// 238 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 242 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 243 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 247 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 248 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 252 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 256 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 257 OBJ_SCALE2	EQU	2		;2/1 scale
	// 258 OBJ_SCALE4	EQU	4		;4/1 scale
	// 259 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 260 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 264 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 265 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 266 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 267 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 268 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 272 @MID		EQU	64
	// 273 @0		EQU	0
	// 274 @16		EQU	2
	// 275 @32		EQU	4
	// 276 @48		EQU	6
	// 277 @64		EQU	8
	// 278 @80		EQU	10
	// 279 @96		EQU	12
	// 280 @112		EQU	14
	// 281 @128		EQU	16
	// 282 @192		EQU	24
	// 283 @256		EQU	32
	// 284 @384		EQU	48
	// 285 @512		EQU	64
	// 303 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 305 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 306 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 308 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 309 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 310 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 312 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 314 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 315 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 316 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 317 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 318 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 319 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 321 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 323 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 324 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 328 OTYPE_GROUND	EQU	0		;static ground objects
	// 329 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 330 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 331 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 332 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 333 OTYPE_HILLFACE	EQU	10		;hill face
	// 334 OTYPE_SMOKE	EQU	12		;smoke
	// 348 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 349 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 353 NUM_OBJECTS	EQU	256		;max number of objects
	// 354 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 355 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 356 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 357 BEHIND_BIN	EQU	0		;behind bin index
	// 358 IN_FRONT_BIN	EQU	2		;in front bin index
	// 362 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 363 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 364 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 365 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 366 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 367 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 368 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 378 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 382 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 383 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 384 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 385 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 386 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 387 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 388 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 389 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 390 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 391 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 395 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 401 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 414 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 425 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 429 SURFACE_UNKNOWN	EQU	0
	// 430 SURFACE_RUNWAY	EQU	2
	// 431 SURFACE_TAXIWAY	EQU	4
	// 432 SURFACE_HARD	EQU	6
	// 433 SURFACE_ROAD	EQU	8
	// 434 SURFACE_RAILWAY	EQU	10
	// 435 SURFACE_RIVER	EQU	12
	// 436 SURFACE_LAKE	EQU	14
	// 440 NUM_CRATERS	EQU	128
	// 441 CRATER_NULL	EQU	0
	// 442 CRATER_SIZE1	EQU	1		;small
	// 443 CRATER_SIZE2	EQU	2		;large
	// 444 CRATER_HEAVE	EQU	3		;heave
	// 445 CRATER_SHELL	EQU	4		;cannon shell
	// 456 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 460 NUM_SMOKE	EQU	128
	// 462 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 463 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 464 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 465 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 466 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 467 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 468 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 470 STYPE_NULL	EQU	0		;no smoke
	// 471 STYPE_GND1	EQU	2		;ground smoke type 1
	// 472 STYPE_AIR1	EQU	4		;air smoke type 1
	// 488 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 489 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 490 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 491 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 551 RWY_REC_SIZE	EQU	TYPE RUNWAY
	// 553 RWY_1836	EQU	0*8		;end 1 =  S end, end 2 =  N end
	// 554 RWY_1331	EQU	1*8		;end 1 = SE end, end 2 = NW end
	// 555 RWY_0927	EQU	2*8		;end 1 =  E end, end 2 =  W end
	// 556 RWY_0422	EQU	3*8		;end 1 = NE end, end 2 = SW end
	// 558 RWY_WIDTH256	EQU	0
	// 559 RWY_WIDTH192	EQU	2
	// 560 RWY_WIDTH128	EQU	4
	// 577 ILS_REC_SIZE	EQU	TYPE ILS
	// 581 ILS_N		EQU	1000b		;north approach ILS
	// 582 ILS_S		EQU	0100b		;south approach ILS
	// 583 ILS_E		EQU	0010b		;east approach ILS
	// 584 ILS_W		EQU	0001b		;west approach ILS
	// 593 TAXI_REC_SIZE	EQU	TYPE	TAXI
	// 601 TNODE_REC_SIZE	EQU	TYPE	TNODE
	// 603 GND_BUNKERB		EQU	1
	// 604 GND_CITBLK1		EQU	2
	// 605 GND_CITBLK10		EQU	3
	// 606 GND_CITBLK2		EQU	4
	// 607 GND_CITBLK3		EQU	5
	// 608 GND_CITBLK4		EQU	6
	// 609 GND_CITBLK5		EQU	7
	// 610 GND_CITBLK6		EQU	8
	// 611 GND_CITBLK7		EQU	9
	// 612 GND_CITBLK8		EQU	10
	// 613 GND_CITBLK9		EQU	11
	// 614 GND_COOLTWR		EQU	12
	// 615 GND_COPSEA		EQU	13
	// 616 GND_COPSEB		EQU	14
	// 617 GND_COPSEC		EQU	15
	// 618 GND_COPSED		EQU	16
	// 619 GND_CTWRA1		EQU	17
	// 620 GND_EHASB		EQU	18
	// 621 GND_EMBE1		EQU	19
	// 622 GND_EMBE2		EQU	20
	// 623 GND_EMBE3		EQU	21
	// 624 GND_EMBE4		EQU	22
	// 625 GND_EMBEW1		EQU	23
	// 626 GND_EMBEWE1		EQU	24
	// 627 GND_EMBEWW1		EQU	25
	// 628 GND_EMBNRTH2		EQU	26
	// 629 GND_EMBNRTH3		EQU	27
	// 630 GND_EMBNRTH4		EQU	28
	// 631 GND_EMBNS1		EQU	29
	// 632 GND_EMBNSN1		EQU	30
	// 633 GND_EMBNSS1		EQU	31
	// 634 GND_EMBNTH1		EQU	32
	// 635 GND_EMBSTH1		EQU	33
	// 636 GND_EMBSTH2		EQU	34
	// 637 GND_EMBSTH3		EQU	35
	// 638 GND_EMBSTH4		EQU	36
	// 639 GND_EMBW1		EQU	37
	// 640 GND_EMBW2		EQU	38
	// 641 GND_EMBW3		EQU	39
	// 642 GND_EMBW4		EQU	40
	// 643 GND_EWR_1		EQU	41
	// 644 GND_PTANK		EQU	42
	// 645 GND_GENTANKS		EQU	43
	// 646 GND_INDCHIM		EQU	44
	// 647 GND_CRATER1		EQU	45
	// 648 GND_CRATER2		EQU	46
	// 649 GND_CRATER3		EQU	47
	// 650 GND_ILSGLD		EQU	48
	// 651 GND_ILSLOC09		EQU	49
	// 652 GND_ILSLOC18		EQU	50
	// 653 GND_ILSLOC27		EQU	51
	// 654 GND_ILSLOC36		EQU	52
	// 655 GND_FUELPT		EQU	53
	// 656 GND_GBMLAE		EQU	54
	// 657 GND_GBMLAN		EQU	55
	// 658 GND_HASCLSD1		EQU	56
	// 659 GND_HASOPEN1		EQU	57
	// 660 GND_MNHAN1		EQU	58
	// 661 GND_MNHANE1		EQU	59
	// 662 GND_MRLY1		EQU	60
	// 663 GND_OFF1		EQU	61
	// 664 GND_OFF2		EQU	62
	// 665 GND_OFF3		EQU	63
	// 666 GND_PBF1		EQU	64
	// 667 GND_PSTNN		EQU	65
	// 668 GND_PWRLINE		EQU	66
	// 669 GND_PWRLINN		EQU	67
	// 670 GND_RDBRGEW1		EQU	68
	// 671 GND_RDBRGN1		EQU	69
	// 672 GND_RDSBRGE1		EQU	70
	// 673 GND_RDSBRGN1		EQU	71
	// 674 GND_RLBRAEW1		EQU	72
	// 675 GND_RLBRAM1		EQU	73
	// 676 GND_RLBRBEW1		EQU	74
	// 677 GND_RLBRBNM1		EQU	75
	// 678 GND_STATION		EQU	76
	// 679 GND_TVMAST		EQU	77
	// 680 GND_UNITA1		EQU	78
	// 681 GND_UNITB1		EQU	79
	// 682 GND_UNITC1		EQU	80
	// 683 GND_WTOWER		EQU	81
	// 684 GND_FLYOTE1		EQU	82
	// 685 GND_FLYOTE2		EQU	83
	// 686 GND_FLYOTN1		EQU	84
	// 687 GND_FLYOTN2		EQU	85
	// 688 GND_FLYOTS1		EQU	86
	// 689 GND_FLYOTS2		EQU	87
	// 690 GND_FLYOTW1		EQU	88
	// 691 GND_FLYOTW2		EQU	89
	// 692 GND_CAMTENT		EQU	90
	// 693 GND_MUNSTOR		EQU	91
	// 694 GND_VSTRE0		EQU	92
	// 695 GND_VSTRN1		EQU	93
	// 696 GND_VSTRS1		EQU	94
	// 697 GND_VSTRW1		EQU	95
	// 698 GND_PWRLNTN		EQU	96
	// 699 GND_PWRLNTS		EQU	97
	// 700 GND_PWRLNTE		EQU	98
	// 701 GND_PWRLNTW		EQU	99
	// 702 GND_RBEWD		EQU	100
	// 703 GND_RBNSD		EQU	101
	// 704 GND_RLBEWD		EQU	102
	// 705 GND_RLBNSD		EQU	103
	// 706 GND_EMBCRATER		EQU	104
	// 0 ;------------------
	// 0 ;* current position
	// 0 ;------------------
	// 0 ;-8192 .. 8191
	// 0 ;-8192 .. 8191
	// 0 ;------------------------------------
	// 0 ;* number of logical colours per face
	// 0 ;------------------------------------
	// 0 ;standard = 1, clouds = 2
	// 0 ;--------------------------------
	// 0 ;* road layer wrt sector quadrant
	// 0 ;--------------------------------
	// 0 ;+x, +y (00)
	// 0 ;+x, -y (01)
	// 0 ;-x, +y (10)
	// 0 ;-x, -y (11)
	// 0 ;-------------------
	// 0 ;* road length table
	// 0 ;-------------------
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
	// 0 ;----------------------
	// 0 ;* railway length table
	// 0 ;----------------------
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
	// 0 ;----------------------------
	// 0 ;* road / railway width table
	// 0 ;----------------------------
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
	// 0 ;---------------------------------------
	// 0 ;* select end type data wrt runway width
	// 0 ;---------------------------------------
	// 0 ;RWY_WIDTH256
	// 0 ;RWY_WIDTH192
	// 0 ;RWY_WIDTH128
	// 0 ;---------------------------------------------------------
	// 0 ;* lh and rh x, y offsets for 256ft width runway end types
	// 0 ;---------------------------------------------------------
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
	// 0 ;---------------------------------------------------------
	// 0 ;* lh and rh x, y offsets for 192ft width runway end types
	// 0 ;---------------------------------------------------------
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
	// 0 ;---------------------------------------------------------
	// 0 ;* lh and rh x, y offsets for 128ft width runway end types
	// 0 ;---------------------------------------------------------
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
	// 0 ;---------------------------------------------------------
	// 0 ;* lh and rh x, y offsets for 64ft width taxiway end types
	// 0 ;---------------------------------------------------------
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
	// 0 ;---------------------------
	// 0 ;* collision check temp vars
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

