/* THIS IS GENERATED FILE */

        
#include "mobsort.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 157 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 158 VP_ZFT_LO	EQU	VP_ZFT
	// 159 VP_ZFT_HI	EQU	VP_ZFT+2
	// 163 SEC_SCALE1 	EQU	0		;1/1 scale
	// 164 SEC_SCALE2	EQU	2		;1/2 scale
	// 165 SEC_SCALE8 	EQU	4		;1/8 scale
	// 166 SEC_SCALE16 	EQU	6		;1/16 scale
	// 170 INT_VIEWMODE	EQU	0		;internal views
	// 171 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 172 EXT_VIEWMODE	EQU	4		;external views
	// 173 TV1_VIEWMODE	EQU	6		;TV1 display
	// 174 TV2_VIEWMODE	EQU	8		;TV2 display
	// 175 TV3_VIEWMODE	EQU	10		;TV3 display
	// 176 TV4_VIEWMODE	EQU	12		;TV4 display
	// 177 TV5_VIEWMODE	EQU	14		;TV5 display
	// 178 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 182 ROTATE_NULL	EQU	0		;no rotation
	// 183 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 184 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 185 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 186 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 187 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 188 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 192 $MID		EQU	128
	// 193 $0		EQU	0
	// 194 $256		EQU	2
	// 195 $512		EQU	4
	// 196 $1024		EQU	8
	// 197 $2048		EQU	16
	// 198 $4096		EQU	32
	// 199 $8192		EQU	64
	// 208 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 212 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 213 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 217 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 218 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 222 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 226 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 227 OBJ_SCALE2	EQU	2		;2/1 scale
	// 228 OBJ_SCALE4	EQU	4		;4/1 scale
	// 229 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 230 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 234 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 235 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 236 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 237 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 238 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 242 @MID		EQU	64
	// 243 @0		EQU	0
	// 244 @16		EQU	2
	// 245 @32		EQU	4
	// 246 @48		EQU	6
	// 247 @64		EQU	8
	// 248 @80		EQU	10
	// 249 @96		EQU	12
	// 250 @112		EQU	14
	// 251 @128		EQU	16
	// 252 @192		EQU	24
	// 253 @256		EQU	32
	// 254 @384		EQU	48
	// 255 @512		EQU	64
	// 273 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 275 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 276 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 278 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 279 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 280 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 282 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 284 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 285 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 286 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 287 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 288 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 289 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 291 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 293 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 294 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 298 OTYPE_GROUND	EQU	0		;static ground objects
	// 299 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 300 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 301 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 302 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 303 OTYPE_HILLFACE	EQU	10		;hill face
	// 304 OTYPE_SMOKE	EQU	12		;smoke
	// 318 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 319 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 323 NUM_OBJECTS	EQU	256		;max number of objects
	// 324 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 325 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 326 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 327 BEHIND_BIN	EQU	0		;behind bin index
	// 328 IN_FRONT_BIN	EQU	2		;in front bin index
	// 332 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 333 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 334 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 335 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 336 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 337 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 338 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 348 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 352 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 353 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 354 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 355 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 356 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 357 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 358 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 359 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 360 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 361 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 365 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 371 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 384 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 395 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 399 SURFACE_UNKNOWN	EQU	0
	// 400 SURFACE_RUNWAY	EQU	2
	// 401 SURFACE_TAXIWAY	EQU	4
	// 402 SURFACE_HARD	EQU	6
	// 403 SURFACE_ROAD	EQU	8
	// 404 SURFACE_RAILWAY	EQU	10
	// 405 SURFACE_RIVER	EQU	12
	// 406 SURFACE_LAKE	EQU	14
	// 410 NUM_CRATERS	EQU	128
	// 411 CRATER_NULL	EQU	0
	// 412 CRATER_SIZE1	EQU	1		;small
	// 413 CRATER_SIZE2	EQU	2		;large
	// 414 CRATER_HEAVE	EQU	3		;heave
	// 415 CRATER_SHELL	EQU	4		;cannon shell
	// 426 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 430 NUM_SMOKE	EQU	128
	// 432 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 433 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 434 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 435 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 436 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 437 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 438 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 440 STYPE_NULL	EQU	0		;no smoke
	// 441 STYPE_GND1	EQU	2		;ground smoke type 1
	// 442 STYPE_AIR1	EQU	4		;air smoke type 1
	// 458 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 459 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 460 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 461 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 502 END_SORT_BINS	EQU	OFFSET MobSortBins+(MSORT_REC_SIZE*NUM_MOBILES)
	// 0 ;============================================================================

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

