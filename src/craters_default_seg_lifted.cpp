/* THIS IS GENERATED FILE */

        
#include "craters.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 49 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 50 VP_ZFT_LO	EQU	VP_ZFT
	// 51 VP_ZFT_HI	EQU	VP_ZFT+2
	// 55 SEC_SCALE1 	EQU	0		;1/1 scale
	// 56 SEC_SCALE2	EQU	2		;1/2 scale
	// 57 SEC_SCALE8 	EQU	4		;1/8 scale
	// 58 SEC_SCALE16 	EQU	6		;1/16 scale
	// 62 INT_VIEWMODE	EQU	0		;internal views
	// 63 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 64 EXT_VIEWMODE	EQU	4		;external views
	// 65 TV1_VIEWMODE	EQU	6		;TV1 display
	// 66 TV2_VIEWMODE	EQU	8		;TV2 display
	// 67 TV3_VIEWMODE	EQU	10		;TV3 display
	// 68 TV4_VIEWMODE	EQU	12		;TV4 display
	// 69 TV5_VIEWMODE	EQU	14		;TV5 display
	// 70 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 74 ROTATE_NULL	EQU	0		;no rotation
	// 75 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 76 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 77 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 78 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 79 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 80 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 84 $MID		EQU	128
	// 85 $0		EQU	0
	// 86 $256		EQU	2
	// 87 $512		EQU	4
	// 88 $1024		EQU	8
	// 89 $2048		EQU	16
	// 90 $4096		EQU	32
	// 91 $8192		EQU	64
	// 100 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 104 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 105 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 109 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 110 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 114 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 118 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 119 OBJ_SCALE2	EQU	2		;2/1 scale
	// 120 OBJ_SCALE4	EQU	4		;4/1 scale
	// 121 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 122 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 126 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 127 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 128 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 129 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 130 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 134 @MID		EQU	64
	// 135 @0		EQU	0
	// 136 @16		EQU	2
	// 137 @32		EQU	4
	// 138 @48		EQU	6
	// 139 @64		EQU	8
	// 140 @80		EQU	10
	// 141 @96		EQU	12
	// 142 @112		EQU	14
	// 143 @128		EQU	16
	// 144 @192		EQU	24
	// 145 @256		EQU	32
	// 146 @384		EQU	48
	// 147 @512		EQU	64
	// 165 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 167 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 168 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 170 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 171 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 172 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 174 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 176 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 177 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 178 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 179 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 180 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 181 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 183 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 185 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 186 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 190 OTYPE_GROUND	EQU	0		;static ground objects
	// 191 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 192 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 193 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 194 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 195 OTYPE_HILLFACE	EQU	10		;hill face
	// 196 OTYPE_SMOKE	EQU	12		;smoke
	// 210 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 211 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 215 NUM_OBJECTS	EQU	256		;max number of objects
	// 216 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 217 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 218 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 219 BEHIND_BIN	EQU	0		;behind bin index
	// 220 IN_FRONT_BIN	EQU	2		;in front bin index
	// 224 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 225 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 226 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 227 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 228 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 229 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 230 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 240 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 244 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 245 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 246 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 247 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 248 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 249 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 250 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 251 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 252 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 253 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 257 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 263 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 276 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 287 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 291 SURFACE_UNKNOWN	EQU	0
	// 292 SURFACE_RUNWAY	EQU	2
	// 293 SURFACE_TAXIWAY	EQU	4
	// 294 SURFACE_HARD	EQU	6
	// 295 SURFACE_ROAD	EQU	8
	// 296 SURFACE_RAILWAY	EQU	10
	// 297 SURFACE_RIVER	EQU	12
	// 298 SURFACE_LAKE	EQU	14
	// 302 NUM_CRATERS	EQU	128
	// 303 CRATER_NULL	EQU	0
	// 304 CRATER_SIZE1	EQU	1		;small
	// 305 CRATER_SIZE2	EQU	2		;large
	// 306 CRATER_HEAVE	EQU	3		;heave
	// 307 CRATER_SHELL	EQU	4		;cannon shell
	// 318 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 322 NUM_SMOKE	EQU	128
	// 324 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 325 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 326 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 327 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 328 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 329 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 330 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 332 STYPE_NULL	EQU	0		;no smoke
	// 333 STYPE_GND1	EQU	2		;ground smoke type 1
	// 334 STYPE_AIR1	EQU	4		;air smoke type 1
	// 350 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 351 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 352 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 353 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 355 MOB_A10			EQU	1
	// 356 MOB_AH64		EQU	2
	// 357 MOB_LOCO1		EQU	3
	// 358 MOB_RLTANK1		EQU	4
	// 359 MOB_HIND1		EQU	5
	// 360 MOB_IL76		EQU	6
	// 361 MOB_SU27_1		EQU	7
	// 362 MOB_RDTNKR1		EQU	8
	// 363 MOB_TORNADO1		EQU	9
	// 364 MOB_SU25		EQU	10
	// 365 MOB_C130		EQU	11
	// 366 MOB_T80			EQU	12
	// 367 MOB_CHINOOK		EQU	13
	// 368 MOB_F16			EQU	14
	// 369 MOB_MAZ543		EQU	15
	// 370 MOB_MIG29		EQU	16
	// 371 MOB_RLTTRANS		EQU	17
	// 372 MOB_RLWAGONA		EQU	18
	// 373 MOB_ZSU23		EQU	19
	// 374 MOB_BMP2		EQU	20
	// 375 MOB_E3D			EQU	21
	// 376 MOB_F15			EQU	22
	// 377 MOB_MOBRAD		EQU	23
	// 378 MOB_ROMB		EQU	24
	// 379 MOB_TORNADV1		EQU	25
	// 380 MOB_AIRBURST		EQU	26
	// 381 MOB_MIG31		EQU	27
	// 382 MOB_AIM9L		EQU	28
	// 383 MOB_CHAL1		EQU	29
	// 384 MOB_MI26		EQU	30
	// 385 MOB_MIG27_1		EQU	31
	// 386 MOB_MLRS1		EQU	32
	// 387 MOB_PAT1		EQU	33
	// 388 MOB_WARRIOR1		EQU	34
	// 389 MOB_CANCRAT		EQU	35
	// 390 MOB_CRATER1M		EQU	36
	// 391 MOB_CRATER2M		EQU	37
	// 392 MOB_BOMB		EQU	38
	// 393 MOB_ALARM		EQU	39
	// 394 MOB_BOMBLET		EQU	40
	// 395 MOB_LGB			EQU	41
	// 396 MOB_HEAVE		EQU	42
	// 397 MOB_SG357		EQU	43
	// 398 MOB_SKYFLASH		EQU	44
	// 399 MOB_SPLASH		EQU	45
	// 400 MOB_FLARE		EQU	46
	// 401 MOB_CHAFF		EQU	47
	// 402 MOB_TRACER		EQU	48
	// 403 MOB_TRACERB		EQU	49
	// 0 ;============================================================================
	// 0 ;CRATER_NULL
	// 0 ;CRATER_SIZE1
	// 0 ;CRATER_SIZE2
	// 0 ;CRATER_HEAVE
	// 0 ;CRATER_SHELL

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

