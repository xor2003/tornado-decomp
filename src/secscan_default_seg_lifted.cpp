/* THIS IS GENERATED FILE */

        
#include "secscan.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 165 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 166 VP_ZFT_LO	EQU	VP_ZFT
	// 167 VP_ZFT_HI	EQU	VP_ZFT+2
	// 171 SEC_SCALE1 	EQU	0		;1/1 scale
	// 172 SEC_SCALE2	EQU	2		;1/2 scale
	// 173 SEC_SCALE8 	EQU	4		;1/8 scale
	// 174 SEC_SCALE16 	EQU	6		;1/16 scale
	// 178 INT_VIEWMODE	EQU	0		;internal views
	// 179 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 180 EXT_VIEWMODE	EQU	4		;external views
	// 181 TV1_VIEWMODE	EQU	6		;TV1 display
	// 182 TV2_VIEWMODE	EQU	8		;TV2 display
	// 183 TV3_VIEWMODE	EQU	10		;TV3 display
	// 184 TV4_VIEWMODE	EQU	12		;TV4 display
	// 185 TV5_VIEWMODE	EQU	14		;TV5 display
	// 186 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 190 ROTATE_NULL	EQU	0		;no rotation
	// 191 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 192 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 193 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 194 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 195 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 196 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 200 $MID		EQU	128
	// 201 $0		EQU	0
	// 202 $256		EQU	2
	// 203 $512		EQU	4
	// 204 $1024		EQU	8
	// 205 $2048		EQU	16
	// 206 $4096		EQU	32
	// 207 $8192		EQU	64
	// 216 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 220 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 221 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 225 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 226 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 230 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 234 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 235 OBJ_SCALE2	EQU	2		;2/1 scale
	// 236 OBJ_SCALE4	EQU	4		;4/1 scale
	// 237 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 238 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 242 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 243 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 244 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 245 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 246 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 250 @MID		EQU	64
	// 251 @0		EQU	0
	// 252 @16		EQU	2
	// 253 @32		EQU	4
	// 254 @48		EQU	6
	// 255 @64		EQU	8
	// 256 @80		EQU	10
	// 257 @96		EQU	12
	// 258 @112		EQU	14
	// 259 @128		EQU	16
	// 260 @192		EQU	24
	// 261 @256		EQU	32
	// 262 @384		EQU	48
	// 263 @512		EQU	64
	// 281 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 283 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 284 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 286 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 287 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 288 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 290 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 292 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 293 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 294 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 295 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 296 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 297 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 299 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 301 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 302 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 306 OTYPE_GROUND	EQU	0		;static ground objects
	// 307 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 308 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 309 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 310 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 311 OTYPE_HILLFACE	EQU	10		;hill face
	// 312 OTYPE_SMOKE	EQU	12		;smoke
	// 326 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 327 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 331 NUM_OBJECTS	EQU	256		;max number of objects
	// 332 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 333 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 334 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 335 BEHIND_BIN	EQU	0		;behind bin index
	// 336 IN_FRONT_BIN	EQU	2		;in front bin index
	// 340 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 341 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 342 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 343 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 344 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 345 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 346 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 356 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 360 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 361 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 362 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 363 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 364 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 365 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 366 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 367 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 368 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 369 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 373 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 379 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 392 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 403 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 407 SURFACE_UNKNOWN	EQU	0
	// 408 SURFACE_RUNWAY	EQU	2
	// 409 SURFACE_TAXIWAY	EQU	4
	// 410 SURFACE_HARD	EQU	6
	// 411 SURFACE_ROAD	EQU	8
	// 412 SURFACE_RAILWAY	EQU	10
	// 413 SURFACE_RIVER	EQU	12
	// 414 SURFACE_LAKE	EQU	14
	// 418 NUM_CRATERS	EQU	128
	// 419 CRATER_NULL	EQU	0
	// 420 CRATER_SIZE1	EQU	1		;small
	// 421 CRATER_SIZE2	EQU	2		;large
	// 422 CRATER_HEAVE	EQU	3		;heave
	// 423 CRATER_SHELL	EQU	4		;cannon shell
	// 434 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 438 NUM_SMOKE	EQU	128
	// 440 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 441 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 442 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 443 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 444 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 445 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 446 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 448 STYPE_NULL	EQU	0		;no smoke
	// 449 STYPE_GND1	EQU	2		;ground smoke type 1
	// 450 STYPE_AIR1	EQU	4		;air smoke type 1
	// 466 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 467 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 468 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 469 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 653 OBJ_Z_THRES	EQU	(16384-7500)*4	;object z threshold (scaled)
	// 0 ;object z threshold (scaled)
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;flat scan size max offset
	// 0 ;0 = normal sector, 1 = hills only sector
	// 0 ;1 = complete (slow) sector reject test
	// 0 ;0 = incomplete (fast) sector reject test

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

