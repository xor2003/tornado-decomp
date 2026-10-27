/* THIS IS GENERATED FILE */

        
#include "trnsfrm.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 55 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 56 VP_ZFT_LO	EQU	VP_ZFT
	// 57 VP_ZFT_HI	EQU	VP_ZFT+2
	// 61 SEC_SCALE1 	EQU	0		;1/1 scale
	// 62 SEC_SCALE2	EQU	2		;1/2 scale
	// 63 SEC_SCALE8 	EQU	4		;1/8 scale
	// 64 SEC_SCALE16 	EQU	6		;1/16 scale
	// 68 INT_VIEWMODE	EQU	0		;internal views
	// 69 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 70 EXT_VIEWMODE	EQU	4		;external views
	// 71 TV1_VIEWMODE	EQU	6		;TV1 display
	// 72 TV2_VIEWMODE	EQU	8		;TV2 display
	// 73 TV3_VIEWMODE	EQU	10		;TV3 display
	// 74 TV4_VIEWMODE	EQU	12		;TV4 display
	// 75 TV5_VIEWMODE	EQU	14		;TV5 display
	// 76 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 80 ROTATE_NULL	EQU	0		;no rotation
	// 81 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 82 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 83 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 84 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 85 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 86 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 90 $MID		EQU	128
	// 91 $0		EQU	0
	// 92 $256		EQU	2
	// 93 $512		EQU	4
	// 94 $1024		EQU	8
	// 95 $2048		EQU	16
	// 96 $4096		EQU	32
	// 97 $8192		EQU	64
	// 106 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 110 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 111 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 115 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 116 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 120 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 124 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 125 OBJ_SCALE2	EQU	2		;2/1 scale
	// 126 OBJ_SCALE4	EQU	4		;4/1 scale
	// 127 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 128 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 132 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 133 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 134 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 135 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 136 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 140 @MID		EQU	64
	// 141 @0		EQU	0
	// 142 @16		EQU	2
	// 143 @32		EQU	4
	// 144 @48		EQU	6
	// 145 @64		EQU	8
	// 146 @80		EQU	10
	// 147 @96		EQU	12
	// 148 @112		EQU	14
	// 149 @128		EQU	16
	// 150 @192		EQU	24
	// 151 @256		EQU	32
	// 152 @384		EQU	48
	// 153 @512		EQU	64
	// 171 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 173 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 174 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 176 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 177 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 178 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 180 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 182 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 183 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 184 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 185 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 186 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 187 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 189 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 191 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 192 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 196 OTYPE_GROUND	EQU	0		;static ground objects
	// 197 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 198 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 199 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 200 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 201 OTYPE_HILLFACE	EQU	10		;hill face
	// 202 OTYPE_SMOKE	EQU	12		;smoke
	// 216 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 217 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 221 NUM_OBJECTS	EQU	256		;max number of objects
	// 222 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 223 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 224 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 225 BEHIND_BIN	EQU	0		;behind bin index
	// 226 IN_FRONT_BIN	EQU	2		;in front bin index
	// 230 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 231 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 232 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 233 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 234 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 235 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 236 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 246 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 250 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 251 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 252 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 253 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 254 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 255 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 256 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 257 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 258 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 259 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 263 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 269 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 282 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 293 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 297 SURFACE_UNKNOWN	EQU	0
	// 298 SURFACE_RUNWAY	EQU	2
	// 299 SURFACE_TAXIWAY	EQU	4
	// 300 SURFACE_HARD	EQU	6
	// 301 SURFACE_ROAD	EQU	8
	// 302 SURFACE_RAILWAY	EQU	10
	// 303 SURFACE_RIVER	EQU	12
	// 304 SURFACE_LAKE	EQU	14
	// 308 NUM_CRATERS	EQU	128
	// 309 CRATER_NULL	EQU	0
	// 310 CRATER_SIZE1	EQU	1		;small
	// 311 CRATER_SIZE2	EQU	2		;large
	// 312 CRATER_HEAVE	EQU	3		;heave
	// 313 CRATER_SHELL	EQU	4		;cannon shell
	// 324 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 328 NUM_SMOKE	EQU	128
	// 330 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 331 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 332 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 333 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 334 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 335 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 336 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 338 STYPE_NULL	EQU	0		;no smoke
	// 339 STYPE_GND1	EQU	2		;ground smoke type 1
	// 340 STYPE_AIR1	EQU	4		;air smoke type 1
	// 356 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 357 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 358 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 359 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;-------------------------------------
	// 0 ;* heading, pitch and roll trig values
	// 0 ;-------------------------------------
	// 0 ;-----------------------------
	// 0 ;* rotation matrix "A" factors
	// 0 ;-----------------------------
	// 0 ;-----------
	// 0 ;* temp vars
	// 0 ;-----------

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

