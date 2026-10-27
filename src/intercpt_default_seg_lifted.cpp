/* THIS IS GENERATED FILE */

        
#include "intercpt.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 46 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 47 VP_ZFT_LO	EQU	VP_ZFT
	// 48 VP_ZFT_HI	EQU	VP_ZFT+2
	// 52 SEC_SCALE1 	EQU	0		;1/1 scale
	// 53 SEC_SCALE2	EQU	2		;1/2 scale
	// 54 SEC_SCALE8 	EQU	4		;1/8 scale
	// 55 SEC_SCALE16 	EQU	6		;1/16 scale
	// 59 INT_VIEWMODE	EQU	0		;internal views
	// 60 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 61 EXT_VIEWMODE	EQU	4		;external views
	// 62 TV1_VIEWMODE	EQU	6		;TV1 display
	// 63 TV2_VIEWMODE	EQU	8		;TV2 display
	// 64 TV3_VIEWMODE	EQU	10		;TV3 display
	// 65 TV4_VIEWMODE	EQU	12		;TV4 display
	// 66 TV5_VIEWMODE	EQU	14		;TV5 display
	// 67 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 71 ROTATE_NULL	EQU	0		;no rotation
	// 72 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 73 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 74 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 75 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 76 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 77 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 81 $MID		EQU	128
	// 82 $0		EQU	0
	// 83 $256		EQU	2
	// 84 $512		EQU	4
	// 85 $1024		EQU	8
	// 86 $2048		EQU	16
	// 87 $4096		EQU	32
	// 88 $8192		EQU	64
	// 97 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 101 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 102 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 106 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 107 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 111 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 115 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 116 OBJ_SCALE2	EQU	2		;2/1 scale
	// 117 OBJ_SCALE4	EQU	4		;4/1 scale
	// 118 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 119 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 123 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 124 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 125 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 126 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 127 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 131 @MID		EQU	64
	// 132 @0		EQU	0
	// 133 @16		EQU	2
	// 134 @32		EQU	4
	// 135 @48		EQU	6
	// 136 @64		EQU	8
	// 137 @80		EQU	10
	// 138 @96		EQU	12
	// 139 @112		EQU	14
	// 140 @128		EQU	16
	// 141 @192		EQU	24
	// 142 @256		EQU	32
	// 143 @384		EQU	48
	// 144 @512		EQU	64
	// 162 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 164 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 165 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 167 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 168 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 169 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 171 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 173 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 174 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 175 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 176 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 177 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 178 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 180 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 182 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 183 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 187 OTYPE_GROUND	EQU	0		;static ground objects
	// 188 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 189 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 190 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 191 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 192 OTYPE_HILLFACE	EQU	10		;hill face
	// 193 OTYPE_SMOKE	EQU	12		;smoke
	// 207 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 208 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 212 NUM_OBJECTS	EQU	256		;max number of objects
	// 213 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 214 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 215 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 216 BEHIND_BIN	EQU	0		;behind bin index
	// 217 IN_FRONT_BIN	EQU	2		;in front bin index
	// 221 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 222 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 223 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 224 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 225 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 226 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 227 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 237 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 241 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 242 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 243 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 244 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 245 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 246 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 247 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 248 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 249 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 250 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 254 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 260 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 273 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 284 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 288 SURFACE_UNKNOWN	EQU	0
	// 289 SURFACE_RUNWAY	EQU	2
	// 290 SURFACE_TAXIWAY	EQU	4
	// 291 SURFACE_HARD	EQU	6
	// 292 SURFACE_ROAD	EQU	8
	// 293 SURFACE_RAILWAY	EQU	10
	// 294 SURFACE_RIVER	EQU	12
	// 295 SURFACE_LAKE	EQU	14
	// 299 NUM_CRATERS	EQU	128
	// 300 CRATER_NULL	EQU	0
	// 301 CRATER_SIZE1	EQU	1		;small
	// 302 CRATER_SIZE2	EQU	2		;large
	// 303 CRATER_HEAVE	EQU	3		;heave
	// 304 CRATER_SHELL	EQU	4		;cannon shell
	// 315 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 319 NUM_SMOKE	EQU	128
	// 321 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 322 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 323 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 324 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 325 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 326 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 327 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 329 STYPE_NULL	EQU	0		;no smoke
	// 330 STYPE_GND1	EQU	2		;ground smoke type 1
	// 331 STYPE_AIR1	EQU	4		;air smoke type 1
	// 347 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 348 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 349 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 350 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 0 ;* unit vector of target motion

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

