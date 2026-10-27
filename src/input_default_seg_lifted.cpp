/* THIS IS GENERATED FILE */

        
#include "input.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 96 NUL		EQU	0
	// 97 DEL		EQU	8
	// 98 ENT		EQU	13
	// 99 ESCP		EQU	27
	// 103 K_ESC		EQU	1
	// 104 K_SPACE		EQU	57
	// 105 K_DEL1		EQU	14
	// 106 K_DEL2		EQU	83
	// 107 K_DEL3		EQU	75
	// 108 K_SYSREQ    	EQU	84
	// 109 K_NUMLOCK	EQU	69
	// 110 K_CAPSLOCK	EQU	58
	// 111 K_CTRL		EQU	29
	// 112 K_SHIFT    	EQU	42
	// 113 K_SHIFT1    	EQU	42		;mapped to K_SHIFT2
	// 114 K_SHIFT2    	EQU	54		;mapped to K_SHIFT1
	// 115 K_ENTER		EQU	28
	// 116 K_BACKSPACE	EQU	14
	// 117 K_ALT		EQU	56
	// 118 K_TAB		EQU	15
	// 119 K_PLUS		EQU	13		;mapped to K_PAD_PLUS
	// 120 K_MINUS		EQU	12		;mapped to K_PAD_MINUS
	// 121 K_LESSTHAN	EQU	51
	// 122 K_GRTRTHAN	EQU	52
	// 123 K_HASH		EQU	43
	// 124 K_OPN_SQ_BRKT	EQU	26
	// 125 K_CLS_SQ_BRKT	EQU	27
	// 126 K_APOSTROPHE	EQU	40
	// 127 K_SEMICOLON	EQU	39
	// 128 K_BACKSLASH	EQU	86
	// 129 K_PAD_INS	EQU	82
	// 130 K_PAD_DEL	EQU	83
	// 131 K_PAD_PLUS	EQU	78		;mapped to K_PLUS
	// 132 K_PAD_MINUS	EQU	74		;mapped to K_MINUS
	// 133 K_PAD_STAR	EQU	55
	// 134 K_HOME		EQU	71
	// 135 K_END		EQU	79
	// 136 K_PGUP		EQU	73
	// 137 K_PGDN		EQU	81
	// 138 K_CRSRLF    	EQU	75
	// 139 K_CRSRRT    	EQU	77
	// 140 K_CRSRUP    	EQU	72
	// 141 K_CRSRDN    	EQU	80
	// 142 K_CENTRE	EQU	76
	// 143 K_MOUSELF	EQU	71
	// 144 K_MOUSERT	EQU	73
	// 145 K_AMS_JOYLF	EQU	122
	// 146 K_AMS_JOYRT	EQU	121
	// 147 K_AMS_JOYUP	EQU	124
	// 148 K_AMS_JOYDN	EQU	123
	// 149 K_AMS_JOYF1	EQU	120
	// 150 K_AMS_JOYF2	EQU	119
	// 151 K_AMS_MOUSELF	EQU	126
	// 152 K_AMS_MOUSERT	EQU	125
	// 153 K_1		EQU	2
	// 154 K_2		EQU	3
	// 155 K_3		EQU	4
	// 156 K_4		EQU	5
	// 157 K_5		EQU	6
	// 158 K_6		EQU	7
	// 159 K_7		EQU	8
	// 160 K_8		EQU	9
	// 161 K_9		EQU	10
	// 162 K_0		EQU	11
	// 163 K_F1		EQU	59
	// 164 K_F2		EQU	60
	// 165 K_F3		EQU	61
	// 166 K_F4		EQU	62
	// 167 K_F5		EQU	63
	// 168 K_F6		EQU	64
	// 169 K_F7		EQU	65
	// 170 K_F8		EQU	66
	// 171 K_F9		EQU	67
	// 172 K_F10		EQU	68
	// 173 K_F11		EQU	87
	// 174 K_F12		EQU	88
	// 175 K_A		EQU	30
	// 176 K_B		EQU	48
	// 177 K_C		EQU	46
	// 178 K_D		EQU	32
	// 179 K_E		EQU	18
	// 180 K_F		EQU	33
	// 181 K_G		EQU	34
	// 182 K_H		EQU	35
	// 183 K_I		EQU	23
	// 184 K_J		EQU	36
	// 185 K_K		EQU	37
	// 186 K_L		EQU	38
	// 187 K_M		EQU	50
	// 188 K_N		EQU	49
	// 189 K_O		EQU	24
	// 190 K_P		EQU	25
	// 191 K_Q		EQU	16
	// 192 K_R		EQU	19
	// 193 K_S		EQU	31
	// 194 K_T		EQU	20
	// 195 K_U		EQU	22
	// 196 K_V		EQU	47
	// 197 K_W		EQU	17
	// 198 K_X		EQU	45
	// 199 K_Y		EQU	21
	// 200 K_Z		EQU	44
	// 220 INPUT_ALL	EQU	0
	// 221 INPUT_ALPHA	EQU	1
	// 222 INPUT_NUM	EQU	2
	// 223 P_EXT		EQU	31
	// 0 ;(see PRINT.INC)
	// 0 ;INPUT_ALL
	// 0 ;INPUT_ALPHA
	// 0 ;INPUT_NUM
	// 0 ;0
	// 0 ;8
	// 0 ;16
	// 0 ;24
	// 0 ;32
	// 0 ;40
	// 0 ;48
	// 0 ;56
	// 0 ;64
	// 0 ;72
	// 0 ;80
	// 0 ;0
	// 0 ;8
	// 0 ;16
	// 0 ;24
	// 0 ;32
	// 0 ;40
	// 0 ;48
	// 0 ;56
	// 0 ;64
	// 0 ;72
	// 0 ;80
	// 0 ;* menu keys:-
	// 0 ;*
	// 0 ;*    ESC      : exit
	// 0 ;*    SPACE    : default option
	// 0 ;*    F1 .. F10: used to select options
	// 0 ;old value
	// 267 MKEY_REC_SIZE	EQU	TYPE MENUKEY
	// 0 ;highest priority
	// 0 ;lowest priority
	// 0 ;list terminator

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

