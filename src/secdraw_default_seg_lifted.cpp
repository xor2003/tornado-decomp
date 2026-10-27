/* THIS IS GENERATED FILE */

        
#include "secdraw.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 156 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 157 VP_ZFT_LO	EQU	VP_ZFT
	// 158 VP_ZFT_HI	EQU	VP_ZFT+2
	// 162 SEC_SCALE1 	EQU	0		;1/1 scale
	// 163 SEC_SCALE2	EQU	2		;1/2 scale
	// 164 SEC_SCALE8 	EQU	4		;1/8 scale
	// 165 SEC_SCALE16 	EQU	6		;1/16 scale
	// 169 INT_VIEWMODE	EQU	0		;internal views
	// 170 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 171 EXT_VIEWMODE	EQU	4		;external views
	// 172 TV1_VIEWMODE	EQU	6		;TV1 display
	// 173 TV2_VIEWMODE	EQU	8		;TV2 display
	// 174 TV3_VIEWMODE	EQU	10		;TV3 display
	// 175 TV4_VIEWMODE	EQU	12		;TV4 display
	// 176 TV5_VIEWMODE	EQU	14		;TV5 display
	// 177 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 181 ROTATE_NULL	EQU	0		;no rotation
	// 182 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 183 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 184 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 185 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 186 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 187 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 191 $MID		EQU	128
	// 192 $0		EQU	0
	// 193 $256		EQU	2
	// 194 $512		EQU	4
	// 195 $1024		EQU	8
	// 196 $2048		EQU	16
	// 197 $4096		EQU	32
	// 198 $8192		EQU	64
	// 207 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 211 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 212 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 216 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 217 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 221 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 225 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 226 OBJ_SCALE2	EQU	2		;2/1 scale
	// 227 OBJ_SCALE4	EQU	4		;4/1 scale
	// 228 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 229 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 233 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 234 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 235 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 236 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 237 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 241 @MID		EQU	64
	// 242 @0		EQU	0
	// 243 @16		EQU	2
	// 244 @32		EQU	4
	// 245 @48		EQU	6
	// 246 @64		EQU	8
	// 247 @80		EQU	10
	// 248 @96		EQU	12
	// 249 @112		EQU	14
	// 250 @128		EQU	16
	// 251 @192		EQU	24
	// 252 @256		EQU	32
	// 253 @384		EQU	48
	// 254 @512		EQU	64
	// 272 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 274 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 275 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 277 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 278 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 279 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 281 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 283 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 284 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 285 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 286 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 287 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 288 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 290 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 292 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 293 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 297 OTYPE_GROUND	EQU	0		;static ground objects
	// 298 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 299 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 300 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 301 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 302 OTYPE_HILLFACE	EQU	10		;hill face
	// 303 OTYPE_SMOKE	EQU	12		;smoke
	// 317 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 318 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 322 NUM_OBJECTS	EQU	256		;max number of objects
	// 323 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 324 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 325 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 326 BEHIND_BIN	EQU	0		;behind bin index
	// 327 IN_FRONT_BIN	EQU	2		;in front bin index
	// 331 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 332 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 333 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 334 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 335 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 336 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 337 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 347 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 351 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 352 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 353 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 354 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 355 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 356 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 357 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 358 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 359 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 360 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 364 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 370 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 383 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 394 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 398 SURFACE_UNKNOWN	EQU	0
	// 399 SURFACE_RUNWAY	EQU	2
	// 400 SURFACE_TAXIWAY	EQU	4
	// 401 SURFACE_HARD	EQU	6
	// 402 SURFACE_ROAD	EQU	8
	// 403 SURFACE_RAILWAY	EQU	10
	// 404 SURFACE_RIVER	EQU	12
	// 405 SURFACE_LAKE	EQU	14
	// 409 NUM_CRATERS	EQU	128
	// 410 CRATER_NULL	EQU	0
	// 411 CRATER_SIZE1	EQU	1		;small
	// 412 CRATER_SIZE2	EQU	2		;large
	// 413 CRATER_HEAVE	EQU	3		;heave
	// 414 CRATER_SHELL	EQU	4		;cannon shell
	// 425 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 429 NUM_SMOKE	EQU	128
	// 431 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 432 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 433 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 434 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 435 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 436 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 437 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 439 STYPE_NULL	EQU	0		;no smoke
	// 440 STYPE_GND1	EQU	2		;ground smoke type 1
	// 441 STYPE_AIR1	EQU	4		;air smoke type 1
	// 457 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 458 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 459 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 460 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling

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

