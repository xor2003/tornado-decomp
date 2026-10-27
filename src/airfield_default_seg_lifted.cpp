/* THIS IS GENERATED FILE */

        
#include "airfield.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 51 FOG_COL_START	EQU	8
	// 52 FOG_COL_COUNT	EQU	104
	// 54 NIGHT_COL_START	EQU	24
	// 55 NIGHT_COL_COUNT	EQU	88
	// 57 IR_COL_START	EQU	8
	// 58 IR_COL_COUNT	EQU	104
	// 62 COL_BLACK	EQU	0
	// 63 COL_LT_RED	EQU	1
	// 64 COL_YELLOW	EQU	2
	// 65 COL_LT_CYAN	EQU	3
	// 66 COL_WHITE	EQU	4
	// 70 COL_TEXT_NORM1	EQU	5
	// 71 COL_TEXT_NORM2	EQU	6
	// 72 COL_TEXT_ALERT	EQU	7
	// 76 COL_NT_WHITE1	EQU	8
	// 77 COL_NT_GREY1	EQU	9
	// 78 COL_NT_GREY2	EQU	10
	// 79 COL_NT_GREY3	EQU	11
	// 80 COL_NT_GREY4	EQU	12
	// 81 COL_NT_RED1	EQU	13
	// 82 COL_NT_RED2	EQU	14
	// 83 COL_NT_RED3	EQU	15
	// 84 COL_NT_BLUE1	EQU	16
	// 85 COL_NT_BLUE2	EQU	17
	// 86 COL_NT_YELLOW1	EQU	18
	// 87 COL_NT_AMBER1	EQU	19
	// 88 COL_NT_AMBER2	EQU	20
	// 89 COL_NT_GREEN1	EQU	21
	// 90 COL_NT_R_WHITE1	EQU	22
	// 91 COL_NT_B_WHITE1	EQU	23
	// 95 COL_WHITE1	EQU	24
	// 96 COL_GREY1	EQU	25
	// 97 COL_GREY2	EQU	26
	// 98 COL_GREY3	EQU	27
	// 99 COL_GREY4	EQU	28
	// 100 COL_BLACK1	EQU	29
	// 101 COL_CYAN_GREY1	EQU	30
	// 102 COL_CYAN_GREY2	EQU	31
	// 103 COL_CYAN_GREY3	EQU	32
	// 104 COL_CYAN_GREY4	EQU	33
	// 105 COL_CYAN_GREY5	EQU	34
	// 106 COL_CYAN_GREY6	EQU	35
	// 107 COL_SAND1	EQU	36
	// 108 COL_SAND2	EQU	37
	// 109 COL_SAND3	EQU	38
	// 110 COL_SAND4	EQU	39
	// 111 COL_SAND5	EQU	40
	// 112 COL_RUST1	EQU	41
	// 113 COL_RUST2	EQU	42
	// 114 COL_RUST3	EQU	43
	// 115 COL_RUST4	EQU	44
	// 116 COL_RUST5	EQU	45
	// 117 COL_NEW_GREY1	EQU	46
	// 118 COL_NEW_GREY2	EQU	47
	// 119 COL_NEW_GREY3	EQU	48
	// 120 COL_NEW_GREY4	EQU	49
	// 121 COL_YELLOW1	EQU	50
	// 122 COL_AMBER1	EQU	51
	// 123 COL_AMBER2	EQU	52
	// 124 COL_AMBER3	EQU	53
	// 125 COL_AMBER4	EQU	54
	// 126 COL_RED1	EQU	55
	// 127 COL_GREEN1	EQU	56
	// 128 COL_GREEN2	EQU	57
	// 129 COL_GREEN3	EQU	58
	// 130 COL_GREEN4	EQU	59
	// 131 COL_DK_CYAN1	EQU	60
	// 132 COL_DK_CYAN2	EQU	61
	// 133 COL_DK_CYAN3	EQU	62
	// 134 COL_DK_CYAN4	EQU	63
	// 135 COL_OLIVE1	EQU	64
	// 136 COL_OLIVE2	EQU	65
	// 137 COL_OLIVE3	EQU	66
	// 138 COL_OLIVE4	EQU	67
	// 139 COL_OLIVE5	EQU	68
	// 140 COL_OLIVE6	EQU	69
	// 141 COL_NEAR_WHITE1	EQU	70
	// 142 COL_SMOKE_GREY1	EQU	71
	// 143 COL_SMOKE_GREY2	EQU	72
	// 147 COL_ROAD1	EQU	73
	// 148 COL_RWY1	EQU	74
	// 149 COL_GND1	EQU	75
	// 150 COL_GND2	EQU	76
	// 151 COL_RAIL1	EQU	77
	// 152 COL_RAIL2	EQU	78
	// 153 COL_RIVER1	EQU	79
	// 157 COL_HILL1	EQU	80
	// 158 COL_HILL2	EQU	81
	// 159 COL_HILL3	EQU	82
	// 160 COL_HILL4	EQU	83
	// 161 COL_HILL5	EQU	84
	// 162 COL_HILL6	EQU	85
	// 163 COL_HILL7	EQU	86
	// 164 COL_HILL8	EQU	87
	// 165 COL_HILL9	EQU	88
	// 166 COL_HILL10	EQU	89
	// 167 COL_HILL11	EQU	90
	// 168 COL_HILL12	EQU	91
	// 169 COL_HILL13	EQU	92
	// 170 COL_HILL14	EQU	93
	// 171 COL_HILL15	EQU	94
	// 172 COL_HILL16	EQU	95
	// 176 COL_SKY1	EQU	96
	// 177 COL_SKY2	EQU	97
	// 178 COL_SKY3	EQU	98
	// 179 COL_SKY4	EQU	99
	// 180 COL_SKY5	EQU	100
	// 181 COL_SKY6	EQU	101
	// 182 COL_SKY7	EQU	102
	// 183 COL_SKY8	EQU	103
	// 184 COL_SKY9	EQU	104
	// 185 COL_SKY10	EQU	105
	// 186 COL_SKY11	EQU	106
	// 187 COL_SKY12	EQU	107
	// 188 COL_SKY13	EQU	108
	// 189 COL_SKY14	EQU	109
	// 190 COL_SKY15	EQU	110
	// 191 COL_SKY16	EQU	111
	// 195 COL_MAP_HILL1	EQU	112
	// 196 COL_MAP_HILL2	EQU	113
	// 197 COL_MAP_HILL3	EQU	114
	// 198 COL_MAP_HILL4	EQU	115
	// 199 COL_MAP_HILL5	EQU	116
	// 200 COL_MAP_HILL6	EQU	117
	// 201 COL_MAP_HILL7	EQU	118
	// 202 COL_MAP_HILL8	EQU	119
	// 203 COL_MAP_HILL9	EQU	120
	// 204 COL_MAP_HILL10	EQU	121
	// 205 COL_MAP_HILL11	EQU	122
	// 206 COL_MAP_HILL12	EQU	123
	// 207 COL_MAP_HILL13	EQU	124
	// 208 COL_MAP_HILL14	EQU	125
	// 209 COL_MAP_HILL15	EQU	126
	// 210 COL_MAP_HILL16	EQU	127
	// 214 COL_NEEDLE	EQU	128
	// 215 COL_COUNTER	EQU	129
	// 216 COL_RED_NEEDLE	EQU	130
	// 217 COL_ADI_SKY	EQU	131
	// 218 COL_ADI_GND	EQU	132
	// 219 COL_HUD		EQU	133
	// 220 COL_BUG		EQU	134
	// 221 COL_AOA		EQU	135
	// 222 COL_KNEE_PAD	EQU	136
	// 223 COL_KNEE_INK1	EQU	137
	// 224 COL_KNEE_INK2	EQU	138
	// 225 COL_KNEE_PEN	EQU	139
	// 226 COL_KNEE_NUM	EQU	140
	// 227 COL_SIGHT	EQU	141
	// 229 COL_TIALD_SYM	EQU	COL_BLACK
	// 232 COL_MAP_SYM	EQU	COL_BLACK
	// 234 COL_REF_SYM	EQU	COL_BLACK
	// 236 COL_RADAR_MASK	EQU	COL_BLACK
	// 238 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 239 COL_IR_MISS	EQU	COL_CRT_RED
	// 241 COL_LOCAL1	EQU	209		;day
	// 242 COL_LOCAL2	EQU	213
	// 243 COL_LOCAL3	EQU	215
	// 244 COL_LOCAL4	EQU	218
	// 245 COL_LOCAL5	EQU	220
	// 246 COL_NT_LOCAL1	EQU	233		;night
	// 247 COL_NT_LOCAL2	EQU	234
	// 248 COL_NT_LOCAL3	EQU	235
	// 249 COL_NT_LOCAL4	EQU	236
	// 250 COL_NT_LOCAL5	EQU	255
	// 252 COL_GLIDE1	EQU	210		;day
	// 253 COL_GLIDE2	EQU	216
	// 254 COL_GLIDE3	EQU	220
	// 255 COL_NT_GLIDE1	EQU	234		;night
	// 256 COL_NT_GLIDE2	EQU	235
	// 257 COL_NT_GLIDE3	EQU	236
	// 265 COL_MAP_GND1	EQU	144
	// 266 COL_MAP_ROAD1	EQU	145
	// 267 COL_MAP_RAIL1	EQU	146
	// 268 COL_MAP_RWY1	EQU	147
	// 269 COL_MAP_RIVER1	EQU	148
	// 270 COL_MAP_GREEN1	EQU	149
	// 271 COL_MAP_GREEN2	EQU	150
	// 272 COL_MAP_COMPASS	EQU	151
	// 273 COL_MAP_LOCATOR	EQU	152
	// 274 COL_MAP_ALLIED	EQU	153
	// 275 COL_MAP_BORDER	EQU	154
	// 276 COL_COMPASS	EQU	155
	// 277 COL_LOCATOR	EQU	156
	// 278 COL_MAP_RWY2	EQU	157
	// 279 COL_MAP_ENEMY	EQU	158
	// 283 COL_CRT_RED	EQU	159
	// 284 COL_CRT1	EQU	160
	// 285 COL_CRT2	EQU	161
	// 286 COL_CRT3	EQU	162
	// 287 COL_CRT4	EQU	163
	// 288 COL_CRT5	EQU	164
	// 289 COL_CRT6	EQU	165
	// 290 COL_CRT7	EQU	166
	// 291 COL_CRT8	EQU	167
	// 292 COL_CRT9	EQU	168
	// 293 COL_CRT10	EQU	169
	// 294 COL_CRT11	EQU	170
	// 295 COL_CRT12	EQU	171
	// 296 COL_CRT13	EQU	172
	// 297 COL_CRT14	EQU	173
	// 298 COL_CRT15	EQU	174
	// 299 COL_CRT16	EQU	175
	// 321 RWY_REC_SIZE	EQU	TYPE RUNWAY
	// 323 RWY_1836	EQU	0*8		;end 1 =  S end, end 2 =  N end
	// 324 RWY_1331	EQU	1*8		;end 1 = SE end, end 2 = NW end
	// 325 RWY_0927	EQU	2*8		;end 1 =  E end, end 2 =  W end
	// 326 RWY_0422	EQU	3*8		;end 1 = NE end, end 2 = SW end
	// 328 RWY_WIDTH256	EQU	0
	// 329 RWY_WIDTH192	EQU	2
	// 330 RWY_WIDTH128	EQU	4
	// 347 ILS_REC_SIZE	EQU	TYPE ILS
	// 351 ILS_N		EQU	1000b		;north approach ILS
	// 352 ILS_S		EQU	0100b		;south approach ILS
	// 353 ILS_E		EQU	0010b		;east approach ILS
	// 354 ILS_W		EQU	0001b		;west approach ILS
	// 363 TAXI_REC_SIZE	EQU	TYPE	TAXI
	// 371 TNODE_REC_SIZE	EQU	TYPE	TNODE
	// 0 ;----------------
	// 0 ;* airfield table
	// 0 ;----------------
	// 0 ;* index = (special number - AIRFIELD_1) * 4
	// 0 ;1 (AIRFIELD_1)
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;8 (AIRFIELD_N)
	// 0 ;-------------
	// 0 ;* runway data
	// 0 ;-------------
	// 0 ;* Note: The active runway should always be the last runway in the list so
	// 0 ;*       that it is drawn last. This reduces runway light obstruction.
	// 0 ;----------
	// 0 ;* ILS data
	// 0 ;----------
	// 0 ;-----------------
	// 0 ;* taxi route data (taxi drone aircraft off runway)
	// 0 ;-----------------
	// 0 ;* Taxi routes are only specified for the active runway. Drone aircraft will
	// 0 ;* only land on active runways. The taxi route should begin somewhere after
	// 0 ;* the midpoint of the runway to allow the landing aircraft to decelerate.
	// 0 ;* The last taxiway should be long enough to cater for a queue of aircraft.
	// 0 ;*
	// 0 ;* TAXI data block:-
	// 0 ;*
	// 0 ;* TAXI_END_PTR : Pointer to last co-ord in taxi route list.
	// 0 ;* TAXI_X_MOD   : Modifies last x co-ord (wrt hdg) after aircraft has stopped.
	// 0 ;* TAXI_Y_MOD   : Modifies last y co-ord (wrt hdg) after aircraft has stopped.
	// 0 ;*
	// 0 ;* Route co-ord range = -8,192 .. +8,191ft (ie. standard sector size).
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;N
	// 0 ;E
	// 0 ;S
	// 0 ;W

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

