/* THIS IS GENERATED FILE */

        
#include "ground.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 208 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 209 VP_ZFT_LO	EQU	VP_ZFT
	// 210 VP_ZFT_HI	EQU	VP_ZFT+2
	// 214 SEC_SCALE1 	EQU	0		;1/1 scale
	// 215 SEC_SCALE2	EQU	2		;1/2 scale
	// 216 SEC_SCALE8 	EQU	4		;1/8 scale
	// 217 SEC_SCALE16 	EQU	6		;1/16 scale
	// 221 INT_VIEWMODE	EQU	0		;internal views
	// 222 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 223 EXT_VIEWMODE	EQU	4		;external views
	// 224 TV1_VIEWMODE	EQU	6		;TV1 display
	// 225 TV2_VIEWMODE	EQU	8		;TV2 display
	// 226 TV3_VIEWMODE	EQU	10		;TV3 display
	// 227 TV4_VIEWMODE	EQU	12		;TV4 display
	// 228 TV5_VIEWMODE	EQU	14		;TV5 display
	// 229 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 233 ROTATE_NULL	EQU	0		;no rotation
	// 234 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 235 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 236 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 237 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 238 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 239 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 243 $MID		EQU	128
	// 244 $0		EQU	0
	// 245 $256		EQU	2
	// 246 $512		EQU	4
	// 247 $1024		EQU	8
	// 248 $2048		EQU	16
	// 249 $4096		EQU	32
	// 250 $8192		EQU	64
	// 259 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 263 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 264 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 268 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 269 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 273 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 277 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 278 OBJ_SCALE2	EQU	2		;2/1 scale
	// 279 OBJ_SCALE4	EQU	4		;4/1 scale
	// 280 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 281 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 285 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 286 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 287 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 288 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 289 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 293 @MID		EQU	64
	// 294 @0		EQU	0
	// 295 @16		EQU	2
	// 296 @32		EQU	4
	// 297 @48		EQU	6
	// 298 @64		EQU	8
	// 299 @80		EQU	10
	// 300 @96		EQU	12
	// 301 @112		EQU	14
	// 302 @128		EQU	16
	// 303 @192		EQU	24
	// 304 @256		EQU	32
	// 305 @384		EQU	48
	// 306 @512		EQU	64
	// 324 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 326 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 327 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 329 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 330 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 331 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 333 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 335 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 336 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 337 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 338 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 339 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 340 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 342 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 344 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 345 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 349 OTYPE_GROUND	EQU	0		;static ground objects
	// 350 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 351 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 352 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 353 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 354 OTYPE_HILLFACE	EQU	10		;hill face
	// 355 OTYPE_SMOKE	EQU	12		;smoke
	// 369 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 370 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 374 NUM_OBJECTS	EQU	256		;max number of objects
	// 375 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 376 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 377 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 378 BEHIND_BIN	EQU	0		;behind bin index
	// 379 IN_FRONT_BIN	EQU	2		;in front bin index
	// 383 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 384 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 385 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 386 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 387 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 388 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 389 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 399 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 403 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 404 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 405 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 406 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 407 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 408 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 409 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 410 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 411 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 412 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 416 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 422 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 435 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 446 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 450 SURFACE_UNKNOWN	EQU	0
	// 451 SURFACE_RUNWAY	EQU	2
	// 452 SURFACE_TAXIWAY	EQU	4
	// 453 SURFACE_HARD	EQU	6
	// 454 SURFACE_ROAD	EQU	8
	// 455 SURFACE_RAILWAY	EQU	10
	// 456 SURFACE_RIVER	EQU	12
	// 457 SURFACE_LAKE	EQU	14
	// 461 NUM_CRATERS	EQU	128
	// 462 CRATER_NULL	EQU	0
	// 463 CRATER_SIZE1	EQU	1		;small
	// 464 CRATER_SIZE2	EQU	2		;large
	// 465 CRATER_HEAVE	EQU	3		;heave
	// 466 CRATER_SHELL	EQU	4		;cannon shell
	// 477 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 481 NUM_SMOKE	EQU	128
	// 483 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 484 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 485 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 486 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 487 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 488 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 489 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 491 STYPE_NULL	EQU	0		;no smoke
	// 492 STYPE_GND1	EQU	2		;ground smoke type 1
	// 493 STYPE_AIR1	EQU	4		;air smoke type 1
	// 509 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 510 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 511 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 512 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;* calc object position wrt scale mode
	// 0 ;OBJ_SCALE1
	// 0 ;OBJ_SCALE2
	// 0 ;OBJ_SCALE4
	// 0 ;OBJ_SCALE8
	// 0 ;OBJ_SCALE16

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

