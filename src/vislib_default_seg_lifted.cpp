/* THIS IS GENERATED FILE */

        
#include "vislib.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 161 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 162 VP_ZFT_LO	EQU	VP_ZFT
	// 163 VP_ZFT_HI	EQU	VP_ZFT+2
	// 167 SEC_SCALE1 	EQU	0		;1/1 scale
	// 168 SEC_SCALE2	EQU	2		;1/2 scale
	// 169 SEC_SCALE8 	EQU	4		;1/8 scale
	// 170 SEC_SCALE16 	EQU	6		;1/16 scale
	// 174 INT_VIEWMODE	EQU	0		;internal views
	// 175 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 176 EXT_VIEWMODE	EQU	4		;external views
	// 177 TV1_VIEWMODE	EQU	6		;TV1 display
	// 178 TV2_VIEWMODE	EQU	8		;TV2 display
	// 179 TV3_VIEWMODE	EQU	10		;TV3 display
	// 180 TV4_VIEWMODE	EQU	12		;TV4 display
	// 181 TV5_VIEWMODE	EQU	14		;TV5 display
	// 182 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 186 ROTATE_NULL	EQU	0		;no rotation
	// 187 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 188 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 189 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 190 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 191 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 192 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 196 $MID		EQU	128
	// 197 $0		EQU	0
	// 198 $256		EQU	2
	// 199 $512		EQU	4
	// 200 $1024		EQU	8
	// 201 $2048		EQU	16
	// 202 $4096		EQU	32
	// 203 $8192		EQU	64
	// 212 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 216 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 217 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 221 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 222 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 226 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 230 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 231 OBJ_SCALE2	EQU	2		;2/1 scale
	// 232 OBJ_SCALE4	EQU	4		;4/1 scale
	// 233 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 234 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 238 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 239 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 240 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 241 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 242 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 246 @MID		EQU	64
	// 247 @0		EQU	0
	// 248 @16		EQU	2
	// 249 @32		EQU	4
	// 250 @48		EQU	6
	// 251 @64		EQU	8
	// 252 @80		EQU	10
	// 253 @96		EQU	12
	// 254 @112		EQU	14
	// 255 @128		EQU	16
	// 256 @192		EQU	24
	// 257 @256		EQU	32
	// 258 @384		EQU	48
	// 259 @512		EQU	64
	// 277 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 279 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 280 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 282 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 283 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 284 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 286 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 288 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 289 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 290 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 291 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 292 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 293 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 295 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 297 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 298 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 302 OTYPE_GROUND	EQU	0		;static ground objects
	// 303 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 304 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 305 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 306 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 307 OTYPE_HILLFACE	EQU	10		;hill face
	// 308 OTYPE_SMOKE	EQU	12		;smoke
	// 322 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 323 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 327 NUM_OBJECTS	EQU	256		;max number of objects
	// 328 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 329 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 330 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 331 BEHIND_BIN	EQU	0		;behind bin index
	// 332 IN_FRONT_BIN	EQU	2		;in front bin index
	// 336 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 337 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 338 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 339 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 340 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 341 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 342 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 352 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 356 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 357 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 358 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 359 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 360 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 361 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 362 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 363 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 364 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 365 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 369 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 375 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 388 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 399 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 403 SURFACE_UNKNOWN	EQU	0
	// 404 SURFACE_RUNWAY	EQU	2
	// 405 SURFACE_TAXIWAY	EQU	4
	// 406 SURFACE_HARD	EQU	6
	// 407 SURFACE_ROAD	EQU	8
	// 408 SURFACE_RAILWAY	EQU	10
	// 409 SURFACE_RIVER	EQU	12
	// 410 SURFACE_LAKE	EQU	14
	// 414 NUM_CRATERS	EQU	128
	// 415 CRATER_NULL	EQU	0
	// 416 CRATER_SIZE1	EQU	1		;small
	// 417 CRATER_SIZE2	EQU	2		;large
	// 418 CRATER_HEAVE	EQU	3		;heave
	// 419 CRATER_SHELL	EQU	4		;cannon shell
	// 430 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 434 NUM_SMOKE	EQU	128
	// 436 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 437 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 438 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 439 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 440 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 441 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 442 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 444 STYPE_NULL	EQU	0		;no smoke
	// 445 STYPE_GND1	EQU	2		;ground smoke type 1
	// 446 STYPE_AIR1	EQU	4		;air smoke type 1
	// 462 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 463 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 464 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 465 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;case z scaled < MAX_RANGE16
	// 0 ;case z scaled < MAX_RANGE8
	// 0 ;case z scaled < MAX_RANGE4
	// 0 ;case z scaled < MAX_RANGE2
	// 0 ;case else
	// 0 ;* jump tables for calc object sub-divisions (variable size)
	// 723 COUNT		=	0
	// 759 COUNT		=	0
	// 0 ;--------------------
	// 0 ;* rotate view switch
	// 0 ;--------------------
	// 0 ;ROTATE_NULL
	// 0 ;ROTATE_VIEW_RT
	// 0 ;ROTATE_VIEW_LT
	// 0 ;ROTATE_VIEW_UP
	// 0 ;ROTATE_VIEW_DN
	// 0 ;ROTATE_VIEW_BK
	// 0 ;ROTATE_VIEW_FT
	// 1124 SIN_HDG		EQU	si
	// 1125 COS_HDG		EQU	di
	// 1288 SIN_PITCH	EQU	si
	// 1289 COS_PITCH	EQU	di
	// 1452 SIN_ROLL	EQU	si
	// 1453 COS_ROLL	EQU	di

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

