/* THIS IS GENERATED FILE */

        
#include "secdata1.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 54 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 55 VP_ZFT_LO	EQU	VP_ZFT
	// 56 VP_ZFT_HI	EQU	VP_ZFT+2
	// 60 SEC_SCALE1 	EQU	0		;1/1 scale
	// 61 SEC_SCALE2	EQU	2		;1/2 scale
	// 62 SEC_SCALE8 	EQU	4		;1/8 scale
	// 63 SEC_SCALE16 	EQU	6		;1/16 scale
	// 67 INT_VIEWMODE	EQU	0		;internal views
	// 68 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 69 EXT_VIEWMODE	EQU	4		;external views
	// 70 TV1_VIEWMODE	EQU	6		;TV1 display
	// 71 TV2_VIEWMODE	EQU	8		;TV2 display
	// 72 TV3_VIEWMODE	EQU	10		;TV3 display
	// 73 TV4_VIEWMODE	EQU	12		;TV4 display
	// 74 TV5_VIEWMODE	EQU	14		;TV5 display
	// 75 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 79 ROTATE_NULL	EQU	0		;no rotation
	// 80 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 81 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 82 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 83 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 84 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 85 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 89 $MID		EQU	128
	// 90 $0		EQU	0
	// 91 $256		EQU	2
	// 92 $512		EQU	4
	// 93 $1024		EQU	8
	// 94 $2048		EQU	16
	// 95 $4096		EQU	32
	// 96 $8192		EQU	64
	// 105 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 109 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 110 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 114 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 115 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 119 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 123 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 124 OBJ_SCALE2	EQU	2		;2/1 scale
	// 125 OBJ_SCALE4	EQU	4		;4/1 scale
	// 126 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 127 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 131 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 132 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 133 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 134 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 135 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 139 @MID		EQU	64
	// 140 @0		EQU	0
	// 141 @16		EQU	2
	// 142 @32		EQU	4
	// 143 @48		EQU	6
	// 144 @64		EQU	8
	// 145 @80		EQU	10
	// 146 @96		EQU	12
	// 147 @112		EQU	14
	// 148 @128		EQU	16
	// 149 @192		EQU	24
	// 150 @256		EQU	32
	// 151 @384		EQU	48
	// 152 @512		EQU	64
	// 170 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 172 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 173 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 175 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 176 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 177 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 179 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 181 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 182 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 183 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 184 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 185 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 186 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 188 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 190 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 191 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 195 OTYPE_GROUND	EQU	0		;static ground objects
	// 196 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 197 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 198 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 199 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 200 OTYPE_HILLFACE	EQU	10		;hill face
	// 201 OTYPE_SMOKE	EQU	12		;smoke
	// 215 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 216 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 220 NUM_OBJECTS	EQU	256		;max number of objects
	// 221 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 222 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 223 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 224 BEHIND_BIN	EQU	0		;behind bin index
	// 225 IN_FRONT_BIN	EQU	2		;in front bin index
	// 229 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 230 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 231 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 232 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 233 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 234 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 235 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 245 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 249 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 250 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 251 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 252 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 253 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 254 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 255 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 256 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 257 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 258 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 262 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 268 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 281 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 292 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 296 SURFACE_UNKNOWN	EQU	0
	// 297 SURFACE_RUNWAY	EQU	2
	// 298 SURFACE_TAXIWAY	EQU	4
	// 299 SURFACE_HARD	EQU	6
	// 300 SURFACE_ROAD	EQU	8
	// 301 SURFACE_RAILWAY	EQU	10
	// 302 SURFACE_RIVER	EQU	12
	// 303 SURFACE_LAKE	EQU	14
	// 307 NUM_CRATERS	EQU	128
	// 308 CRATER_NULL	EQU	0
	// 309 CRATER_SIZE1	EQU	1		;small
	// 310 CRATER_SIZE2	EQU	2		;large
	// 311 CRATER_HEAVE	EQU	3		;heave
	// 312 CRATER_SHELL	EQU	4		;cannon shell
	// 323 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 327 NUM_SMOKE	EQU	128
	// 329 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 330 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 331 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 332 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 333 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 334 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 335 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 337 STYPE_NULL	EQU	0		;no smoke
	// 338 STYPE_GND1	EQU	2		;ground smoke type 1
	// 339 STYPE_AIR1	EQU	4		;air smoke type 1
	// 355 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 356 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 357 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 358 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 360 GND_BUNKERB		EQU	1
	// 361 GND_CITBLK1		EQU	2
	// 362 GND_CITBLK10		EQU	3
	// 363 GND_CITBLK2		EQU	4
	// 364 GND_CITBLK3		EQU	5
	// 365 GND_CITBLK4		EQU	6
	// 366 GND_CITBLK5		EQU	7
	// 367 GND_CITBLK6		EQU	8
	// 368 GND_CITBLK7		EQU	9
	// 369 GND_CITBLK8		EQU	10
	// 370 GND_CITBLK9		EQU	11
	// 371 GND_COOLTWR		EQU	12
	// 372 GND_COPSEA		EQU	13
	// 373 GND_COPSEB		EQU	14
	// 374 GND_COPSEC		EQU	15
	// 375 GND_COPSED		EQU	16
	// 376 GND_CTWRA1		EQU	17
	// 377 GND_EHASB		EQU	18
	// 378 GND_EMBE1		EQU	19
	// 379 GND_EMBE2		EQU	20
	// 380 GND_EMBE3		EQU	21
	// 381 GND_EMBE4		EQU	22
	// 382 GND_EMBEW1		EQU	23
	// 383 GND_EMBEWE1		EQU	24
	// 384 GND_EMBEWW1		EQU	25
	// 385 GND_EMBNRTH2		EQU	26
	// 386 GND_EMBNRTH3		EQU	27
	// 387 GND_EMBNRTH4		EQU	28
	// 388 GND_EMBNS1		EQU	29
	// 389 GND_EMBNSN1		EQU	30
	// 390 GND_EMBNSS1		EQU	31
	// 391 GND_EMBNTH1		EQU	32
	// 392 GND_EMBSTH1		EQU	33
	// 393 GND_EMBSTH2		EQU	34
	// 394 GND_EMBSTH3		EQU	35
	// 395 GND_EMBSTH4		EQU	36
	// 396 GND_EMBW1		EQU	37
	// 397 GND_EMBW2		EQU	38
	// 398 GND_EMBW3		EQU	39
	// 399 GND_EMBW4		EQU	40
	// 400 GND_EWR_1		EQU	41
	// 401 GND_PTANK		EQU	42
	// 402 GND_GENTANKS		EQU	43
	// 403 GND_INDCHIM		EQU	44
	// 404 GND_CRATER1		EQU	45
	// 405 GND_CRATER2		EQU	46
	// 406 GND_CRATER3		EQU	47
	// 407 GND_ILSGLD		EQU	48
	// 408 GND_ILSLOC09		EQU	49
	// 409 GND_ILSLOC18		EQU	50
	// 410 GND_ILSLOC27		EQU	51
	// 411 GND_ILSLOC36		EQU	52
	// 412 GND_FUELPT		EQU	53
	// 413 GND_GBMLAE		EQU	54
	// 414 GND_GBMLAN		EQU	55
	// 415 GND_HASCLSD1		EQU	56
	// 416 GND_HASOPEN1		EQU	57
	// 417 GND_MNHAN1		EQU	58
	// 418 GND_MNHANE1		EQU	59
	// 419 GND_MRLY1		EQU	60
	// 420 GND_OFF1		EQU	61
	// 421 GND_OFF2		EQU	62
	// 422 GND_OFF3		EQU	63
	// 423 GND_PBF1		EQU	64
	// 424 GND_PSTNN		EQU	65
	// 425 GND_PWRLINE		EQU	66
	// 426 GND_PWRLINN		EQU	67
	// 427 GND_RDBRGEW1		EQU	68
	// 428 GND_RDBRGN1		EQU	69
	// 429 GND_RDSBRGE1		EQU	70
	// 430 GND_RDSBRGN1		EQU	71
	// 431 GND_RLBRAEW1		EQU	72
	// 432 GND_RLBRAM1		EQU	73
	// 433 GND_RLBRBEW1		EQU	74
	// 434 GND_RLBRBNM1		EQU	75
	// 435 GND_STATION		EQU	76
	// 436 GND_TVMAST		EQU	77
	// 437 GND_UNITA1		EQU	78
	// 438 GND_UNITB1		EQU	79
	// 439 GND_UNITC1		EQU	80
	// 440 GND_WTOWER		EQU	81
	// 441 GND_FLYOTE1		EQU	82
	// 442 GND_FLYOTE2		EQU	83
	// 443 GND_FLYOTN1		EQU	84
	// 444 GND_FLYOTN2		EQU	85
	// 445 GND_FLYOTS1		EQU	86
	// 446 GND_FLYOTS2		EQU	87
	// 447 GND_FLYOTW1		EQU	88
	// 448 GND_FLYOTW2		EQU	89
	// 449 GND_CAMTENT		EQU	90
	// 450 GND_MUNSTOR		EQU	91
	// 451 GND_VSTRE0		EQU	92
	// 452 GND_VSTRN1		EQU	93
	// 453 GND_VSTRS1		EQU	94
	// 454 GND_VSTRW1		EQU	95
	// 455 GND_PWRLNTN		EQU	96
	// 456 GND_PWRLNTS		EQU	97
	// 457 GND_PWRLNTE		EQU	98
	// 458 GND_PWRLNTW		EQU	99
	// 459 GND_RBEWD		EQU	100
	// 460 GND_RBNSD		EQU	101
	// 461 GND_RLBEWD		EQU	102
	// 462 GND_RLBNSD		EQU	103
	// 463 GND_EMBCRATER		EQU	104
	// 465 FLT_CHEV09_1		EQU	1
	// 466 FLT_CHEV18_1		EQU	2
	// 467 FLT_CHEV27_1		EQU	3
	// 468 FLT_CHEV36_1		EQU	4
	// 469 FLT_DISDIAG1		EQU	5
	// 470 FLT_DISNSEW1		EQU	6
	// 471 FLT_FIREPOOL		EQU	7
	// 472 FLT_HASTXYB1		EQU	8
	// 473 FLT_HASTXY_1		EQU	9
	// 474 FLT_RDENDE		EQU	10
	// 475 FLT_RDENDN		EQU	11
	// 476 FLT_RDENDS		EQU	12
	// 477 FLT_RDENDW		EQU	13
	// 478 FLT_RDEW		EQU	14
	// 479 FLT_RDNS		EQU	15
	// 480 FLT_RWY09_1		EQU	16
	// 481 FLT_RWY18_1		EQU	17
	// 482 FLT_RWY27_1		EQU	18
	// 483 FLT_RWY36_1		EQU	19
	// 484 FLT_SIDINGE		EQU	20
	// 485 FLT_RWYSTNS_1		EQU	21
	// 486 FLT_STNRAILS1		EQU	22
	// 487 FLT_STNRLNA1		EQU	23
	// 488 FLT_STNRLNB1		EQU	24
	// 489 FLT_STNRLSA1		EQU	25
	// 490 FLT_STNRLSB1		EQU	26
	// 491 FLT_RWYSTEW_1		EQU	27
	// 492 FLT_SIDINGEW		EQU	28
	// 493 FLT_SIDINGW		EQU	29
	// 494 FLT_SQRN		EQU	30
	// 495 FLT_SKID09		EQU	31
	// 496 FLT_SKID18		EQU	32
	// 497 FLT_SKID27		EQU	33
	// 498 FLT_SKID36		EQU	34
	// 499 FLT_RDRENDE		EQU	35
	// 500 FLT_RDRENDN		EQU	36
	// 501 FLT_RDREW		EQU	37
	// 502 FLT_RDRNS		EQU	38
	// 503 FLT_HELIPAD		EQU	39
	// 504 FLT_TARGET		EQU	40
	// 506 MOB_A10			EQU	1
	// 507 MOB_AH64		EQU	2
	// 508 MOB_LOCO1		EQU	3
	// 509 MOB_RLTANK1		EQU	4
	// 510 MOB_HIND1		EQU	5
	// 511 MOB_IL76		EQU	6
	// 512 MOB_SU27_1		EQU	7
	// 513 MOB_RDTNKR1		EQU	8
	// 514 MOB_TORNADO1		EQU	9
	// 515 MOB_SU25		EQU	10
	// 516 MOB_C130		EQU	11
	// 517 MOB_T80			EQU	12
	// 518 MOB_CHINOOK		EQU	13
	// 519 MOB_F16			EQU	14
	// 520 MOB_MAZ543		EQU	15
	// 521 MOB_MIG29		EQU	16
	// 522 MOB_RLTTRANS		EQU	17
	// 523 MOB_RLWAGONA		EQU	18
	// 524 MOB_ZSU23		EQU	19
	// 525 MOB_BMP2		EQU	20
	// 526 MOB_E3D			EQU	21
	// 527 MOB_F15			EQU	22
	// 528 MOB_MOBRAD		EQU	23
	// 529 MOB_ROMB		EQU	24
	// 530 MOB_TORNADV1		EQU	25
	// 531 MOB_AIRBURST		EQU	26
	// 532 MOB_MIG31		EQU	27
	// 533 MOB_AIM9L		EQU	28
	// 534 MOB_CHAL1		EQU	29
	// 535 MOB_MI26		EQU	30
	// 536 MOB_MIG27_1		EQU	31
	// 537 MOB_MLRS1		EQU	32
	// 538 MOB_PAT1		EQU	33
	// 539 MOB_WARRIOR1		EQU	34
	// 540 MOB_CANCRAT		EQU	35
	// 541 MOB_CRATER1M		EQU	36
	// 542 MOB_CRATER2M		EQU	37
	// 543 MOB_BOMB		EQU	38
	// 544 MOB_ALARM		EQU	39
	// 545 MOB_BOMBLET		EQU	40
	// 546 MOB_LGB			EQU	41
	// 547 MOB_HEAVE		EQU	42
	// 548 MOB_SG357		EQU	43
	// 549 MOB_SKYFLASH		EQU	44
	// 550 MOB_SPLASH		EQU	45
	// 551 MOB_FLARE		EQU	46
	// 552 MOB_CHAFF		EQU	47
	// 553 MOB_TRACER		EQU	48
	// 554 MOB_TRACERB		EQU	49
	// 0 ;============================================================================
	// 0 ;-------------------------------
	// 0 ;* flat objects / ground objects
	// 0 ;-------------------------------
	// 562 SEC_TBL_SIZE	EQU	256*SEC_REC_SIZE	;256 sectors * SEC_REC_SIZE
	// 0 ;256 sectors * SEC_REC_SIZE
	// 0 ;0
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
	// 0 ;100
	// 0 ;101
	// 0 ;102
	// 0 ;103
	// 0 ;104
	// 0 ;105
	// 0 ;106
	// 0 ;107
	// 0 ;108
	// 0 ;109
	// 0 ;110
	// 0 ;111
	// 0 ;112
	// 0 ;113
	// 0 ;114
	// 0 ;115
	// 0 ;116
	// 0 ;117
	// 0 ;118
	// 0 ;119
	// 0 ;120
	// 0 ;121
	// 0 ;122
	// 0 ;123
	// 0 ;124
	// 0 ;125
	// 0 ;126
	// 0 ;127
	// 0 ;128
	// 0 ;129
	// 0 ;130
	// 0 ;131
	// 0 ;132
	// 0 ;133
	// 0 ;134
	// 0 ;135
	// 0 ;136
	// 0 ;137
	// 0 ;138
	// 0 ;139
	// 0 ;140
	// 0 ;141
	// 0 ;142
	// 0 ;143
	// 0 ;144
	// 0 ;145
	// 0 ;146
	// 0 ;147
	// 0 ;148
	// 0 ;149
	// 0 ;150
	// 0 ;151
	// 0 ;152
	// 0 ;153
	// 0 ;154
	// 0 ;155
	// 0 ;156
	// 0 ;157
	// 0 ;158
	// 0 ;159
	// 0 ;160
	// 0 ;161
	// 0 ;162
	// 0 ;163
	// 0 ;164
	// 0 ;165
	// 0 ;166
	// 0 ;167
	// 0 ;168
	// 0 ;169
	// 0 ;170
	// 0 ;171
	// 0 ;172
	// 0 ;173
	// 0 ;174
	// 0 ;175
	// 0 ;176
	// 0 ;177
	// 0 ;178
	// 0 ;179
	// 0 ;180
	// 0 ;181
	// 0 ;182
	// 0 ;183
	// 0 ;184
	// 0 ;185
	// 0 ;186
	// 0 ;187
	// 0 ;188
	// 0 ;189
	// 0 ;190
	// 0 ;191
	// 0 ;192
	// 0 ;193
	// 0 ;194
	// 0 ;195
	// 0 ;196
	// 0 ;197
	// 0 ;198
	// 0 ;199
	// 0 ;200
	// 0 ;201
	// 0 ;202
	// 0 ;203
	// 0 ;204
	// 0 ;205
	// 0 ;206
	// 0 ;207
	// 0 ;208
	// 0 ;209
	// 0 ;210
	// 0 ;211
	// 0 ;212
	// 0 ;213
	// 0 ;214
	// 0 ;215
	// 0 ;216
	// 0 ;217
	// 0 ;218
	// 0 ;219
	// 0 ;220
	// 0 ;221
	// 0 ;222
	// 0 ;223
	// 0 ;224
	// 0 ;225
	// 0 ;226
	// 0 ;227
	// 0 ;228
	// 0 ;229
	// 0 ;230
	// 0 ;231
	// 0 ;232
	// 0 ;233
	// 0 ;234
	// 0 ;235
	// 0 ;236
	// 0 ;237
	// 0 ;238
	// 0 ;239
	// 0 ;240
	// 0 ;241
	// 0 ;242
	// 0 ;243
	// 0 ;244
	// 0 ;245
	// 0 ;246
	// 0 ;247
	// 0 ;248
	// 0 ;249
	// 0 ;250
	// 0 ;251
	// 0 ;-------------------------
	// 0 ;* "static" mobile objects
	// 0 ;-------------------------
	// 823 MSEC_TBL_SIZE	EQU	256*2		;256 sectors
	// 0 ;256 sectors
	// 0 ;0
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
	// 0 ;100
	// 0 ;101
	// 0 ;102
	// 0 ;103
	// 0 ;104
	// 0 ;105
	// 0 ;106
	// 0 ;107
	// 0 ;108
	// 0 ;109
	// 0 ;110
	// 0 ;111
	// 0 ;112
	// 0 ;113
	// 0 ;114
	// 0 ;115
	// 0 ;116
	// 0 ;117
	// 0 ;118
	// 0 ;119
	// 0 ;120
	// 0 ;121
	// 0 ;122
	// 0 ;123
	// 0 ;124
	// 0 ;125
	// 0 ;126
	// 0 ;127
	// 0 ;128
	// 0 ;129
	// 0 ;130
	// 0 ;131
	// 0 ;132
	// 0 ;133
	// 0 ;134
	// 0 ;135
	// 0 ;136
	// 0 ;137
	// 0 ;138
	// 0 ;139
	// 0 ;140
	// 0 ;141
	// 0 ;142
	// 0 ;143
	// 0 ;144
	// 0 ;145
	// 0 ;146
	// 0 ;147
	// 0 ;148
	// 0 ;149
	// 0 ;150
	// 0 ;151
	// 0 ;152
	// 0 ;153
	// 0 ;154
	// 0 ;155
	// 0 ;156
	// 0 ;157
	// 0 ;158
	// 0 ;159
	// 0 ;160
	// 0 ;161
	// 0 ;162
	// 0 ;163
	// 0 ;164
	// 0 ;165
	// 0 ;166
	// 0 ;167
	// 0 ;168
	// 0 ;169
	// 0 ;170
	// 0 ;171
	// 0 ;172
	// 0 ;173
	// 0 ;174
	// 0 ;175
	// 0 ;176
	// 0 ;177
	// 0 ;178
	// 0 ;179
	// 0 ;180
	// 0 ;181
	// 0 ;182
	// 0 ;183
	// 0 ;184
	// 0 ;185
	// 0 ;186
	// 0 ;187
	// 0 ;188
	// 0 ;189
	// 0 ;190
	// 0 ;191
	// 0 ;192
	// 0 ;193
	// 0 ;194
	// 0 ;195
	// 0 ;196
	// 0 ;197
	// 0 ;198
	// 0 ;199
	// 0 ;200
	// 0 ;201
	// 0 ;202
	// 0 ;203
	// 0 ;204
	// 0 ;205
	// 0 ;206
	// 0 ;207
	// 0 ;208
	// 0 ;209
	// 0 ;210
	// 0 ;211
	// 0 ;212
	// 0 ;213
	// 0 ;214
	// 0 ;215
	// 0 ;216
	// 0 ;217
	// 0 ;218
	// 0 ;219
	// 0 ;220
	// 0 ;221
	// 0 ;222
	// 0 ;223
	// 0 ;224
	// 0 ;225
	// 0 ;226
	// 0 ;227
	// 0 ;228
	// 0 ;229
	// 0 ;230
	// 0 ;231
	// 0 ;232
	// 0 ;233
	// 0 ;234
	// 0 ;235
	// 0 ;236
	// 0 ;237
	// 0 ;238
	// 0 ;239
	// 0 ;240
	// 0 ;241
	// 0 ;242
	// 0 ;243
	// 0 ;244
	// 0 ;245
	// 0 ;246
	// 0 ;247
	// 0 ;248
	// 0 ;249
	// 0 ;250
	// 0 ;251
	// 0 ;252
	// 0 ;253
	// 0 ;254
	// 0 ;255
	// 1090 SEC_MAP_SIZE	EQU	10000*4		;approx. 10,000 objects --> 10000*4
	// 11396 MSEC_MAP_SIZE	EQU	2000*STAT_REC_SIZE	;approx. 2,000 objects

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

