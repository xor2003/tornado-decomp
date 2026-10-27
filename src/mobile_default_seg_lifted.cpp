/* THIS IS GENERATED FILE */

        
#include "mobile.h"

                

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
	// 0 ;* calc object position wrt scale mode
	// 0 ;OBJ_SCALE1
	// 0 ;OBJ_SCALE2
	// 0 ;OBJ_SCALE4
	// 0 ;OBJ_SCALE8
	// 0 ;OBJ_SCALE16
	// 0 ;* orientation of rotated object grid

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

