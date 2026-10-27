/* THIS IS GENERATED FILE */

        
#include "clouds.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 177 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 178 VP_ZFT_LO	EQU	VP_ZFT
	// 179 VP_ZFT_HI	EQU	VP_ZFT+2
	// 183 SEC_SCALE1 	EQU	0		;1/1 scale
	// 184 SEC_SCALE2	EQU	2		;1/2 scale
	// 185 SEC_SCALE8 	EQU	4		;1/8 scale
	// 186 SEC_SCALE16 	EQU	6		;1/16 scale
	// 190 INT_VIEWMODE	EQU	0		;internal views
	// 191 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 192 EXT_VIEWMODE	EQU	4		;external views
	// 193 TV1_VIEWMODE	EQU	6		;TV1 display
	// 194 TV2_VIEWMODE	EQU	8		;TV2 display
	// 195 TV3_VIEWMODE	EQU	10		;TV3 display
	// 196 TV4_VIEWMODE	EQU	12		;TV4 display
	// 197 TV5_VIEWMODE	EQU	14		;TV5 display
	// 198 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 202 ROTATE_NULL	EQU	0		;no rotation
	// 203 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 204 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 205 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 206 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 207 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 208 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 212 $MID		EQU	128
	// 213 $0		EQU	0
	// 214 $256		EQU	2
	// 215 $512		EQU	4
	// 216 $1024		EQU	8
	// 217 $2048		EQU	16
	// 218 $4096		EQU	32
	// 219 $8192		EQU	64
	// 228 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 232 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 233 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 237 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 238 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 242 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 246 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 247 OBJ_SCALE2	EQU	2		;2/1 scale
	// 248 OBJ_SCALE4	EQU	4		;4/1 scale
	// 249 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 250 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 254 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 255 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 256 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 257 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 258 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 262 @MID		EQU	64
	// 263 @0		EQU	0
	// 264 @16		EQU	2
	// 265 @32		EQU	4
	// 266 @48		EQU	6
	// 267 @64		EQU	8
	// 268 @80		EQU	10
	// 269 @96		EQU	12
	// 270 @112		EQU	14
	// 271 @128		EQU	16
	// 272 @192		EQU	24
	// 273 @256		EQU	32
	// 274 @384		EQU	48
	// 275 @512		EQU	64
	// 293 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 295 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 296 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 298 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 299 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 300 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 302 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 304 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 305 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 306 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 307 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 308 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 309 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 311 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 313 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 314 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 318 OTYPE_GROUND	EQU	0		;static ground objects
	// 319 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 320 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 321 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 322 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 323 OTYPE_HILLFACE	EQU	10		;hill face
	// 324 OTYPE_SMOKE	EQU	12		;smoke
	// 338 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 339 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 343 NUM_OBJECTS	EQU	256		;max number of objects
	// 344 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 345 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 346 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 347 BEHIND_BIN	EQU	0		;behind bin index
	// 348 IN_FRONT_BIN	EQU	2		;in front bin index
	// 352 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 353 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 354 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 355 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 356 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 357 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 358 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 368 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 372 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 373 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 374 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 375 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 376 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 377 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 378 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 379 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 380 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 381 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 385 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 391 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 404 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 415 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 419 SURFACE_UNKNOWN	EQU	0
	// 420 SURFACE_RUNWAY	EQU	2
	// 421 SURFACE_TAXIWAY	EQU	4
	// 422 SURFACE_HARD	EQU	6
	// 423 SURFACE_ROAD	EQU	8
	// 424 SURFACE_RAILWAY	EQU	10
	// 425 SURFACE_RIVER	EQU	12
	// 426 SURFACE_LAKE	EQU	14
	// 430 NUM_CRATERS	EQU	128
	// 431 CRATER_NULL	EQU	0
	// 432 CRATER_SIZE1	EQU	1		;small
	// 433 CRATER_SIZE2	EQU	2		;large
	// 434 CRATER_HEAVE	EQU	3		;heave
	// 435 CRATER_SHELL	EQU	4		;cannon shell
	// 446 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 450 NUM_SMOKE	EQU	128
	// 452 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 453 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 454 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 455 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 456 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 457 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 458 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 460 STYPE_NULL	EQU	0		;no smoke
	// 461 STYPE_GND1	EQU	2		;ground smoke type 1
	// 462 STYPE_AIR1	EQU	4		;air smoke type 1
	// 478 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 479 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 480 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 481 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;1 = enabled, 0 = disabled
	// 666 CLOUD_MODE1	EQU	0		;viewpoint below clouds
	// 0 ;viewpoint below clouds
	// 667 CLOUD_MODE2	EQU	2		;viewpoint in clouds
	// 0 ;viewpoint in clouds
	// 668 CLOUD_MODE3	EQU	4		;viewpoint above clouds
	// 0 ;viewpoint above clouds
	// 0 ;0 .. 100,000ft (keep above hills 4,096)
	// 0 ;0 .. 8,192ft step 256ft
	// 0 ;(initialized in RandomizeClouds)
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* cyclics for cloud layer 1 wrt CloudMode
	// 0 ;CLOUD_MODE1
	// 0 ;CLOUD_MODE2
	// 0 ;CLOUD_MODE3
	// 0 ;* cyclics for cloud layer 2 wrt CloudMode
	// 0 ;CLOUD_MODE1
	// 0 ;CLOUD_MODE2
	// 0 ;CLOUD_MODE3
	// 0 ;* copies of visual variables which require re-calculation

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

