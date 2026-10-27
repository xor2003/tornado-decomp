/* THIS IS GENERATED FILE */

        
#include "visdata.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 149 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 150 VP_ZFT_LO	EQU	VP_ZFT
	// 151 VP_ZFT_HI	EQU	VP_ZFT+2
	// 155 SEC_SCALE1 	EQU	0		;1/1 scale
	// 156 SEC_SCALE2	EQU	2		;1/2 scale
	// 157 SEC_SCALE8 	EQU	4		;1/8 scale
	// 158 SEC_SCALE16 	EQU	6		;1/16 scale
	// 162 INT_VIEWMODE	EQU	0		;internal views
	// 163 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 164 EXT_VIEWMODE	EQU	4		;external views
	// 165 TV1_VIEWMODE	EQU	6		;TV1 display
	// 166 TV2_VIEWMODE	EQU	8		;TV2 display
	// 167 TV3_VIEWMODE	EQU	10		;TV3 display
	// 168 TV4_VIEWMODE	EQU	12		;TV4 display
	// 169 TV5_VIEWMODE	EQU	14		;TV5 display
	// 170 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 174 ROTATE_NULL	EQU	0		;no rotation
	// 175 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 176 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 177 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 178 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 179 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 180 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 184 $MID		EQU	128
	// 185 $0		EQU	0
	// 186 $256		EQU	2
	// 187 $512		EQU	4
	// 188 $1024		EQU	8
	// 189 $2048		EQU	16
	// 190 $4096		EQU	32
	// 191 $8192		EQU	64
	// 200 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 204 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 205 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 209 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 210 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 214 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 218 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 219 OBJ_SCALE2	EQU	2		;2/1 scale
	// 220 OBJ_SCALE4	EQU	4		;4/1 scale
	// 221 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 222 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 226 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 227 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 228 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 229 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 230 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 234 @MID		EQU	64
	// 235 @0		EQU	0
	// 236 @16		EQU	2
	// 237 @32		EQU	4
	// 238 @48		EQU	6
	// 239 @64		EQU	8
	// 240 @80		EQU	10
	// 241 @96		EQU	12
	// 242 @112		EQU	14
	// 243 @128		EQU	16
	// 244 @192		EQU	24
	// 245 @256		EQU	32
	// 246 @384		EQU	48
	// 247 @512		EQU	64
	// 265 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 267 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 268 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 270 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 271 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 272 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 274 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 276 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 277 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 278 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 279 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 280 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 281 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 283 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 285 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 286 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 290 OTYPE_GROUND	EQU	0		;static ground objects
	// 291 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 292 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 293 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 294 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 295 OTYPE_HILLFACE	EQU	10		;hill face
	// 296 OTYPE_SMOKE	EQU	12		;smoke
	// 310 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 311 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 315 NUM_OBJECTS	EQU	256		;max number of objects
	// 316 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 317 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 318 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 319 BEHIND_BIN	EQU	0		;behind bin index
	// 320 IN_FRONT_BIN	EQU	2		;in front bin index
	// 324 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 325 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 326 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 327 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 328 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 329 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 330 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 340 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 344 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 345 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 346 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 347 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 348 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 349 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 350 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 351 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 352 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 353 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 357 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 363 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 376 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 387 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 391 SURFACE_UNKNOWN	EQU	0
	// 392 SURFACE_RUNWAY	EQU	2
	// 393 SURFACE_TAXIWAY	EQU	4
	// 394 SURFACE_HARD	EQU	6
	// 395 SURFACE_ROAD	EQU	8
	// 396 SURFACE_RAILWAY	EQU	10
	// 397 SURFACE_RIVER	EQU	12
	// 398 SURFACE_LAKE	EQU	14
	// 402 NUM_CRATERS	EQU	128
	// 403 CRATER_NULL	EQU	0
	// 404 CRATER_SIZE1	EQU	1		;small
	// 405 CRATER_SIZE2	EQU	2		;large
	// 406 CRATER_HEAVE	EQU	3		;heave
	// 407 CRATER_SHELL	EQU	4		;cannon shell
	// 418 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 422 NUM_SMOKE	EQU	128
	// 424 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 425 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 426 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 427 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 428 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 429 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 430 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 432 STYPE_NULL	EQU	0		;no smoke
	// 433 STYPE_GND1	EQU	2		;ground smoke type 1
	// 434 STYPE_AIR1	EQU	4		;air smoke type 1
	// 450 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 451 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 452 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 453 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;----------------------
	// 0 ;* viewpoint data block
	// 0 ;----------------------
	// 0 ;see VISDATA.INC
	// 0 ;-----------
	// 0 ;* view mode
	// 0 ;-----------
	// 0 ;see VISDATA.INC
	// 0 ;------------------
	// 0 ;* view rotate mode
	// 0 ;------------------
	// 0 ;see VISDATA.INC
	// 0 ;----------------
	// 0 ;* compressed zft
	// 0 ;----------------
	// 0 ;-------------------------------------
	// 0 ;* heading, pitch and roll trig values
	// 0 ;-------------------------------------
	// 0 ;-----------------------------
	// 0 ;* rotation matrix "A" factors
	// 0 ;-----------------------------
	// 0 ;-----------------------------
	// 0 ;* rotation matrix "B" factors
	// 0 ;-----------------------------
	// 0 ;-----------------------------
	// 0 ;* rotation matrix "C" factors
	// 0 ;-----------------------------
	// 0 ;-----------------------------
	// 0 ;* rotation matrix "D" factors
	// 0 ;-----------------------------
	// 0 ;--------------
	// 0 ;* sector grids
	// 0 ;--------------
	// 0 ;--------------
	// 0 ;* object grids
	// 0 ;--------------
	// 0 ;----------------------
	// 0 ;* rotated object grids
	// 0 ;----------------------
	// 0 ;---------------------
	// 0 ;* variable grid sizes
	// 0 ;---------------------
	// 0 ;----------------------------------
	// 0 ;* object scale convert to ft table
	// 0 ;----------------------------------
	// 0 ;OBJ_SCALE1  (*16)
	// 0 ;OBJ_SCALE16 (*1)
	// 0 ;----------------------------------------------
	// 0 ;* current sector visual variables (SEC_SCALE1)
	// 0 ;----------------------------------------------
	// 0 ;sector sub-division grid co-ords
	// 0 ;sector sub-div offset rel co-ords
	// 0 ;sector sub-div offset eye co-ords
	// 0 ;* modified values for XE01, YE01 and ZE01 for overscaled objects
	// 0 ;2 * overscaled objects
	// 0 ;4 * overscaled objects
	// 0 ;8 * overscaled objects
	// 0 ;16 * overscaled objects
	// 0 ;sector centre position
	// 0 ;1 = 2 * overscaled vars are valid
	// 0 ;1 = 4 * overscaled vars are valid
	// 0 ;1 = 8 * overscaled vars are valid
	// 0 ;1 = 16 * overscaled vars are valid
	// 0 ;---------------------------------------------
	// 0 ;* 3 by 3 sector visual variables (SEC_SCALE2)
	// 0 ;---------------------------------------------
	// 0 ;sector sub-division grid co-ords
	// 0 ;sector sub-div offset rel co-ords
	// 0 ;sector sub-div offset eye co-ords
	// 0 ;sector centre position
	// 0 ;---------------------------------------------
	// 0 ;* 7 by 7 sector visual variables (SEC_SCALE8)
	// 0 ;---------------------------------------------
	// 0 ;sector sub-division grid co-ords
	// 0 ;sector sub-div offset rel co-ords
	// 0 ;sector sub-div offset eye co-ords
	// 0 ;sector centre position
	// 0 ;------------------------------------------------
	// 0 ;* 15 by 15 sector visual variables (SEC_SCALE16)
	// 0 ;------------------------------------------------
	// 0 ;sector sub-division grid co-ords
	// 0 ;sector sub-div offset rel co-ords
	// 0 ;sector sub-div offset eye co-ords
	// 0 ;sector centre position
	// 0 ;------------------------
	// 0 ;* object centre position
	// 0 ;------------------------
	// 0 ;-------------------
	// 0 ;* eye co-ord arrays
	// 0 ;-------------------
	// 681 NUM_POINTS	EQU	128		;max number of points per object
	// 0 ;max number of points per object
	// 0 ;------------------------
	// 0 ;* crt and outcode arrays
	// 0 ;------------------------
	// 0 ;----------------------
	// 0 ;* logical colour store
	// 0 ;----------------------
	// 0 ;-------------------------------
	// 0 ;* standard polygon vertex lists
	// 0 ;-------------------------------
	// 0 ;4 points
	// 0 ;3 points
	// 0 ;----------------
	// 0 ;* object buffers (required for depth buffering)
	// 0 ;----------------
	// 0 ;* ObjectDist1[] - objects below clouds (all ground objects + mobile objects)
	// 0 ;*
	// 0 ;* ObjectDist1[BEHIND_BIN]     : no sort
	// 0 ;* ObjectDist1[IN_FRONT_BIN+n] : bin sort (n = y eye / 256 * 2) + insertion sort
	// 0 ;* ObjectDist2[] - objects in clouds (mobile objects only)
	// 0 ;*
	// 0 ;* ObjectDist2[BEHIND_BIN]   : no sort
	// 0 ;* ObjectDist2[IN_FRONT_BIN] : insertion sort
	// 0 ;* ObjectDist3[] - objects above clouds (mobile objects only)
	// 0 ;*
	// 0 ;* ObjectDist3[BEHIND_BIN]   : no sort
	// 0 ;* ObjectDist3[IN_FRONT_BIN] : insertion sort
	// 0 ;--------------------------
	// 0 ;* sector drawing variables
	// 0 ;--------------------------
	// 0 ;xsec of sector being drawn
	// 0 ;ysec of sector being drawn
	// 0 ;1 = no mans land
	// 0 ;* scaling factors wrt sector scale mode
	// 0 ;SEC_SCALE1  (/1)
	// 0 ;SEC_SCALE2  (/2)
	// 0 ;SEC_SCALE8  (/8)
	// 0 ;SEC_SCALE16 (/16)
	// 0 ;* look up y pos wrt sector scale mode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* flat ground feature sector scan vars
	// 0 ;MIN_SEC_SCAN .. MAX_SEC_SCAN step 2
	// 0 ;* cloud sector scan vars
	// 0 ;MIN_SEC_SCAN .. MAX_SEC_SCAN step 2
	// 0 ;------------------------------------
	// 0 ;* object drawing variables / buffers
	// 0 ;------------------------------------
	// 0 ;+1 = clk, 0 = invalid, -1 = anti-clk
	// 0 ;flat object data record
	// 0 ;--------------------------------
	// 0 ;* mobile object sector sort bins
	// 0 ;--------------------------------
	// 0 ;number of active mobiles

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

