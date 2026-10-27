/* THIS IS GENERATED FILE */

        
#include "features_m2c.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 272 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 273 VP_ZFT_LO	EQU	VP_ZFT
	// 274 VP_ZFT_HI	EQU	VP_ZFT+2
	// 278 SEC_SCALE1 	EQU	0		;1/1 scale
	// 279 SEC_SCALE2	EQU	2		;1/2 scale
	// 280 SEC_SCALE8 	EQU	4		;1/8 scale
	// 281 SEC_SCALE16 	EQU	6		;1/16 scale
	// 285 INT_VIEWMODE	EQU	0		;internal views
	// 286 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 287 EXT_VIEWMODE	EQU	4		;external views
	// 288 TV1_VIEWMODE	EQU	6		;TV1 display
	// 289 TV2_VIEWMODE	EQU	8		;TV2 display
	// 290 TV3_VIEWMODE	EQU	10		;TV3 display
	// 291 TV4_VIEWMODE	EQU	12		;TV4 display
	// 292 TV5_VIEWMODE	EQU	14		;TV5 display
	// 293 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 297 ROTATE_NULL	EQU	0		;no rotation
	// 298 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 299 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 300 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 301 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 302 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 303 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 307 $MID		EQU	128
	// 308 $0		EQU	0
	// 309 $256		EQU	2
	// 310 $512		EQU	4
	// 311 $1024		EQU	8
	// 312 $2048		EQU	16
	// 313 $4096		EQU	32
	// 314 $8192		EQU	64
	// 323 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 327 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 328 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 332 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 333 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 337 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 341 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 342 OBJ_SCALE2	EQU	2		;2/1 scale
	// 343 OBJ_SCALE4	EQU	4		;4/1 scale
	// 344 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 345 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 349 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 350 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 351 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 352 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 353 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 357 @MID		EQU	64
	// 358 @0		EQU	0
	// 359 @16		EQU	2
	// 360 @32		EQU	4
	// 361 @48		EQU	6
	// 362 @64		EQU	8
	// 363 @80		EQU	10
	// 364 @96		EQU	12
	// 365 @112		EQU	14
	// 366 @128		EQU	16
	// 367 @192		EQU	24
	// 368 @256		EQU	32
	// 369 @384		EQU	48
	// 370 @512		EQU	64
	// 388 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 390 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 391 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 393 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 394 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 395 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 397 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 399 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 400 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 401 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 402 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 403 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 404 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 406 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 408 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 409 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 413 OTYPE_GROUND	EQU	0		;static ground objects
	// 414 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 415 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 416 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 417 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 418 OTYPE_HILLFACE	EQU	10		;hill face
	// 419 OTYPE_SMOKE	EQU	12		;smoke
	// 433 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 434 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 438 NUM_OBJECTS	EQU	256		;max number of objects
	// 439 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 440 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 441 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 442 BEHIND_BIN	EQU	0		;behind bin index
	// 443 IN_FRONT_BIN	EQU	2		;in front bin index
	// 447 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 448 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 449 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 450 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 451 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 452 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 453 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 463 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 467 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 468 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 469 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 470 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 471 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 472 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 473 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 474 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 475 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 476 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 480 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 486 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 499 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 510 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 514 SURFACE_UNKNOWN	EQU	0
	// 515 SURFACE_RUNWAY	EQU	2
	// 516 SURFACE_TAXIWAY	EQU	4
	// 517 SURFACE_HARD	EQU	6
	// 518 SURFACE_ROAD	EQU	8
	// 519 SURFACE_RAILWAY	EQU	10
	// 520 SURFACE_RIVER	EQU	12
	// 521 SURFACE_LAKE	EQU	14
	// 525 NUM_CRATERS	EQU	128
	// 526 CRATER_NULL	EQU	0
	// 527 CRATER_SIZE1	EQU	1		;small
	// 528 CRATER_SIZE2	EQU	2		;large
	// 529 CRATER_HEAVE	EQU	3		;heave
	// 530 CRATER_SHELL	EQU	4		;cannon shell
	// 541 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 545 NUM_SMOKE	EQU	128
	// 547 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 548 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 549 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 550 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 551 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 552 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 553 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 555 STYPE_NULL	EQU	0		;no smoke
	// 556 STYPE_GND1	EQU	2		;ground smoke type 1
	// 557 STYPE_AIR1	EQU	4		;air smoke type 1
	// 573 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 574 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 575 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 576 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;1 = ground texture enabled
	// 761 LAKE_FEATURE	EQU	32		;features 1 .. 32 reserved for lakes
	// 0 ;features 1 .. 32 reserved for lakes
	// 762 HARD_FEATURE1	EQU	77		;features 77 .. 84 reserved
	// 0 ;features 77 .. 84 reserved
	// 763 HARD_FEATURE8	EQU	84		;for airfield hardstandings
	// 0 ;for airfield hardstandings
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16

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

