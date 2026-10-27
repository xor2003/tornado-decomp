/* THIS IS GENERATED FILE */

        
#include "trees.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 182 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 183 VP_ZFT_LO	EQU	VP_ZFT
	// 184 VP_ZFT_HI	EQU	VP_ZFT+2
	// 188 SEC_SCALE1 	EQU	0		;1/1 scale
	// 189 SEC_SCALE2	EQU	2		;1/2 scale
	// 190 SEC_SCALE8 	EQU	4		;1/8 scale
	// 191 SEC_SCALE16 	EQU	6		;1/16 scale
	// 195 INT_VIEWMODE	EQU	0		;internal views
	// 196 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 197 EXT_VIEWMODE	EQU	4		;external views
	// 198 TV1_VIEWMODE	EQU	6		;TV1 display
	// 199 TV2_VIEWMODE	EQU	8		;TV2 display
	// 200 TV3_VIEWMODE	EQU	10		;TV3 display
	// 201 TV4_VIEWMODE	EQU	12		;TV4 display
	// 202 TV5_VIEWMODE	EQU	14		;TV5 display
	// 203 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 207 ROTATE_NULL	EQU	0		;no rotation
	// 208 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 209 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 210 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 211 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 212 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 213 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 217 $MID		EQU	128
	// 218 $0		EQU	0
	// 219 $256		EQU	2
	// 220 $512		EQU	4
	// 221 $1024		EQU	8
	// 222 $2048		EQU	16
	// 223 $4096		EQU	32
	// 224 $8192		EQU	64
	// 233 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 237 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 238 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 242 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 243 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 247 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 251 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 252 OBJ_SCALE2	EQU	2		;2/1 scale
	// 253 OBJ_SCALE4	EQU	4		;4/1 scale
	// 254 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 255 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 259 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 260 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 261 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 262 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 263 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 267 @MID		EQU	64
	// 268 @0		EQU	0
	// 269 @16		EQU	2
	// 270 @32		EQU	4
	// 271 @48		EQU	6
	// 272 @64		EQU	8
	// 273 @80		EQU	10
	// 274 @96		EQU	12
	// 275 @112		EQU	14
	// 276 @128		EQU	16
	// 277 @192		EQU	24
	// 278 @256		EQU	32
	// 279 @384		EQU	48
	// 280 @512		EQU	64
	// 298 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 300 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 301 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 303 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 304 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 305 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 307 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 309 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 310 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 311 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 312 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 313 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 314 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 316 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 318 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 319 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 323 OTYPE_GROUND	EQU	0		;static ground objects
	// 324 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 325 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 326 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 327 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 328 OTYPE_HILLFACE	EQU	10		;hill face
	// 329 OTYPE_SMOKE	EQU	12		;smoke
	// 343 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 344 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 348 NUM_OBJECTS	EQU	256		;max number of objects
	// 349 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 350 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 351 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 352 BEHIND_BIN	EQU	0		;behind bin index
	// 353 IN_FRONT_BIN	EQU	2		;in front bin index
	// 357 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 358 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 359 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 360 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 361 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 362 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 363 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 373 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 377 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 378 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 379 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 380 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 381 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 382 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 383 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 384 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 385 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 386 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 390 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 396 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 409 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 420 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 424 SURFACE_UNKNOWN	EQU	0
	// 425 SURFACE_RUNWAY	EQU	2
	// 426 SURFACE_TAXIWAY	EQU	4
	// 427 SURFACE_HARD	EQU	6
	// 428 SURFACE_ROAD	EQU	8
	// 429 SURFACE_RAILWAY	EQU	10
	// 430 SURFACE_RIVER	EQU	12
	// 431 SURFACE_LAKE	EQU	14
	// 435 NUM_CRATERS	EQU	128
	// 436 CRATER_NULL	EQU	0
	// 437 CRATER_SIZE1	EQU	1		;small
	// 438 CRATER_SIZE2	EQU	2		;large
	// 439 CRATER_HEAVE	EQU	3		;heave
	// 440 CRATER_SHELL	EQU	4		;cannon shell
	// 451 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 455 NUM_SMOKE	EQU	128
	// 457 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 458 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 459 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 460 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 461 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 462 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 463 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 465 STYPE_NULL	EQU	0		;no smoke
	// 466 STYPE_GND1	EQU	2		;ground smoke type 1
	// 467 STYPE_AIR1	EQU	4		;air smoke type 1
	// 483 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 484 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 485 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 486 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 488 GND_BUNKERB		EQU	1
	// 489 GND_CITBLK1		EQU	2
	// 490 GND_CITBLK10		EQU	3
	// 491 GND_CITBLK2		EQU	4
	// 492 GND_CITBLK3		EQU	5
	// 493 GND_CITBLK4		EQU	6
	// 494 GND_CITBLK5		EQU	7
	// 495 GND_CITBLK6		EQU	8
	// 496 GND_CITBLK7		EQU	9
	// 497 GND_CITBLK8		EQU	10
	// 498 GND_CITBLK9		EQU	11
	// 499 GND_COOLTWR		EQU	12
	// 500 GND_COPSEA		EQU	13
	// 501 GND_COPSEB		EQU	14
	// 502 GND_COPSEC		EQU	15
	// 503 GND_COPSED		EQU	16
	// 504 GND_CTWRA1		EQU	17
	// 505 GND_EHASB		EQU	18
	// 506 GND_EMBE1		EQU	19
	// 507 GND_EMBE2		EQU	20
	// 508 GND_EMBE3		EQU	21
	// 509 GND_EMBE4		EQU	22
	// 510 GND_EMBEW1		EQU	23
	// 511 GND_EMBEWE1		EQU	24
	// 512 GND_EMBEWW1		EQU	25
	// 513 GND_EMBNRTH2		EQU	26
	// 514 GND_EMBNRTH3		EQU	27
	// 515 GND_EMBNRTH4		EQU	28
	// 516 GND_EMBNS1		EQU	29
	// 517 GND_EMBNSN1		EQU	30
	// 518 GND_EMBNSS1		EQU	31
	// 519 GND_EMBNTH1		EQU	32
	// 520 GND_EMBSTH1		EQU	33
	// 521 GND_EMBSTH2		EQU	34
	// 522 GND_EMBSTH3		EQU	35
	// 523 GND_EMBSTH4		EQU	36
	// 524 GND_EMBW1		EQU	37
	// 525 GND_EMBW2		EQU	38
	// 526 GND_EMBW3		EQU	39
	// 527 GND_EMBW4		EQU	40
	// 528 GND_EWR_1		EQU	41
	// 529 GND_PTANK		EQU	42
	// 530 GND_GENTANKS		EQU	43
	// 531 GND_INDCHIM		EQU	44
	// 532 GND_CRATER1		EQU	45
	// 533 GND_CRATER2		EQU	46
	// 534 GND_CRATER3		EQU	47
	// 535 GND_ILSGLD		EQU	48
	// 536 GND_ILSLOC09		EQU	49
	// 537 GND_ILSLOC18		EQU	50
	// 538 GND_ILSLOC27		EQU	51
	// 539 GND_ILSLOC36		EQU	52
	// 540 GND_FUELPT		EQU	53
	// 541 GND_GBMLAE		EQU	54
	// 542 GND_GBMLAN		EQU	55
	// 543 GND_HASCLSD1		EQU	56
	// 544 GND_HASOPEN1		EQU	57
	// 545 GND_MNHAN1		EQU	58
	// 546 GND_MNHANE1		EQU	59
	// 547 GND_MRLY1		EQU	60
	// 548 GND_OFF1		EQU	61
	// 549 GND_OFF2		EQU	62
	// 550 GND_OFF3		EQU	63
	// 551 GND_PBF1		EQU	64
	// 552 GND_PSTNN		EQU	65
	// 553 GND_PWRLINE		EQU	66
	// 554 GND_PWRLINN		EQU	67
	// 555 GND_RDBRGEW1		EQU	68
	// 556 GND_RDBRGN1		EQU	69
	// 557 GND_RDSBRGE1		EQU	70
	// 558 GND_RDSBRGN1		EQU	71
	// 559 GND_RLBRAEW1		EQU	72
	// 560 GND_RLBRAM1		EQU	73
	// 561 GND_RLBRBEW1		EQU	74
	// 562 GND_RLBRBNM1		EQU	75
	// 563 GND_STATION		EQU	76
	// 564 GND_TVMAST		EQU	77
	// 565 GND_UNITA1		EQU	78
	// 566 GND_UNITB1		EQU	79
	// 567 GND_UNITC1		EQU	80
	// 568 GND_WTOWER		EQU	81
	// 569 GND_FLYOTE1		EQU	82
	// 570 GND_FLYOTE2		EQU	83
	// 571 GND_FLYOTN1		EQU	84
	// 572 GND_FLYOTN2		EQU	85
	// 573 GND_FLYOTS1		EQU	86
	// 574 GND_FLYOTS2		EQU	87
	// 575 GND_FLYOTW1		EQU	88
	// 576 GND_FLYOTW2		EQU	89
	// 577 GND_CAMTENT		EQU	90
	// 578 GND_MUNSTOR		EQU	91
	// 579 GND_VSTRE0		EQU	92
	// 580 GND_VSTRN1		EQU	93
	// 581 GND_VSTRS1		EQU	94
	// 582 GND_VSTRW1		EQU	95
	// 583 GND_PWRLNTN		EQU	96
	// 584 GND_PWRLNTS		EQU	97
	// 585 GND_PWRLNTE		EQU	98
	// 586 GND_PWRLNTW		EQU	99
	// 587 GND_RBEWD		EQU	100
	// 588 GND_RBNSD		EQU	101
	// 589 GND_RLBEWD		EQU	102
	// 590 GND_RLBNSD		EQU	103
	// 591 GND_EMBCRATER		EQU	104
	// 0 ;1 = trees enabled
	// 0 ;--------------------
	// 0 ;* tree layout tables
	// 0 ;--------------------
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
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
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
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
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
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
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
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

