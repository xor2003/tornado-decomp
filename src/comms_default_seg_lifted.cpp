/* THIS IS GENERATED FILE */

        
#include "comms.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 139 NUL		EQU	0
	// 140 DEL		EQU	8
	// 141 ENT		EQU	13
	// 142 ESCP		EQU	27
	// 146 K_ESC		EQU	1
	// 147 K_SPACE		EQU	57
	// 148 K_DEL1		EQU	14
	// 149 K_DEL2		EQU	83
	// 150 K_DEL3		EQU	75
	// 151 K_SYSREQ    	EQU	84
	// 152 K_NUMLOCK	EQU	69
	// 153 K_CAPSLOCK	EQU	58
	// 154 K_CTRL		EQU	29
	// 155 K_SHIFT    	EQU	42
	// 156 K_SHIFT1    	EQU	42		;mapped to K_SHIFT2
	// 157 K_SHIFT2    	EQU	54		;mapped to K_SHIFT1
	// 158 K_ENTER		EQU	28
	// 159 K_BACKSPACE	EQU	14
	// 160 K_ALT		EQU	56
	// 161 K_TAB		EQU	15
	// 162 K_PLUS		EQU	13		;mapped to K_PAD_PLUS
	// 163 K_MINUS		EQU	12		;mapped to K_PAD_MINUS
	// 164 K_LESSTHAN	EQU	51
	// 165 K_GRTRTHAN	EQU	52
	// 166 K_HASH		EQU	43
	// 167 K_OPN_SQ_BRKT	EQU	26
	// 168 K_CLS_SQ_BRKT	EQU	27
	// 169 K_APOSTROPHE	EQU	40
	// 170 K_SEMICOLON	EQU	39
	// 171 K_BACKSLASH	EQU	86
	// 172 K_PAD_INS	EQU	82
	// 173 K_PAD_DEL	EQU	83
	// 174 K_PAD_PLUS	EQU	78		;mapped to K_PLUS
	// 175 K_PAD_MINUS	EQU	74		;mapped to K_MINUS
	// 176 K_PAD_STAR	EQU	55
	// 177 K_HOME		EQU	71
	// 178 K_END		EQU	79
	// 179 K_PGUP		EQU	73
	// 180 K_PGDN		EQU	81
	// 181 K_CRSRLF    	EQU	75
	// 182 K_CRSRRT    	EQU	77
	// 183 K_CRSRUP    	EQU	72
	// 184 K_CRSRDN    	EQU	80
	// 185 K_CENTRE	EQU	76
	// 186 K_MOUSELF	EQU	71
	// 187 K_MOUSERT	EQU	73
	// 188 K_AMS_JOYLF	EQU	122
	// 189 K_AMS_JOYRT	EQU	121
	// 190 K_AMS_JOYUP	EQU	124
	// 191 K_AMS_JOYDN	EQU	123
	// 192 K_AMS_JOYF1	EQU	120
	// 193 K_AMS_JOYF2	EQU	119
	// 194 K_AMS_MOUSELF	EQU	126
	// 195 K_AMS_MOUSERT	EQU	125
	// 196 K_1		EQU	2
	// 197 K_2		EQU	3
	// 198 K_3		EQU	4
	// 199 K_4		EQU	5
	// 200 K_5		EQU	6
	// 201 K_6		EQU	7
	// 202 K_7		EQU	8
	// 203 K_8		EQU	9
	// 204 K_9		EQU	10
	// 205 K_0		EQU	11
	// 206 K_F1		EQU	59
	// 207 K_F2		EQU	60
	// 208 K_F3		EQU	61
	// 209 K_F4		EQU	62
	// 210 K_F5		EQU	63
	// 211 K_F6		EQU	64
	// 212 K_F7		EQU	65
	// 213 K_F8		EQU	66
	// 214 K_F9		EQU	67
	// 215 K_F10		EQU	68
	// 216 K_F11		EQU	87
	// 217 K_F12		EQU	88
	// 218 K_A		EQU	30
	// 219 K_B		EQU	48
	// 220 K_C		EQU	46
	// 221 K_D		EQU	32
	// 222 K_E		EQU	18
	// 223 K_F		EQU	33
	// 224 K_G		EQU	34
	// 225 K_H		EQU	35
	// 226 K_I		EQU	23
	// 227 K_J		EQU	36
	// 228 K_K		EQU	37
	// 229 K_L		EQU	38
	// 230 K_M		EQU	50
	// 231 K_N		EQU	49
	// 232 K_O		EQU	24
	// 233 K_P		EQU	25
	// 234 K_Q		EQU	16
	// 235 K_R		EQU	19
	// 236 K_S		EQU	31
	// 237 K_T		EQU	20
	// 238 K_U		EQU	22
	// 239 K_V		EQU	47
	// 240 K_W		EQU	17
	// 241 K_X		EQU	45
	// 242 K_Y		EQU	21
	// 243 K_Z		EQU	44
	// 0 ;* comms device (COM1: or COM2:) forms UART register ms address
	// 248 COM1		EQU	3
	// 249 COM2		EQU	2
	// 0 ;* DOS comms interrupt vector
	// 0 ;DOS comms intr segment
	// 0 ;DOS comms intr offset
	// 0 ;* 8250 UART registers (ls addresses)
	// 257 TX_HOLD		EQU	0f8h		;tx holding reg
	// 0 ;tx holding reg
	// 258 RX_DATA		EQU	0f8h		;rx data reg
	// 0 ;rx data reg
	// 259 LS_BAUD		EQU	0f8h		;Baud rate divisor LSB
	// 0 ;Baud rate divisor LSB
	// 260 MS_BAUD		EQU	0f9h		;Baud rate divisor MSB
	// 0 ;Baud rate divisor MSB
	// 261 INTR_ENABLE	EQU	0f9h		;interrupt enable reg
	// 0 ;interrupt enable reg
	// 262 INTR_IDENT	EQU	0fah		;interrupt identification reg
	// 0 ;interrupt identification reg
	// 263 LINE_CTRL	EQU	0fbh		;line control reg
	// 0 ;line control reg
	// 264 MODEM_CTRL	EQU	0fch		;modem control reg
	// 0 ;modem control reg
	// 265 LINE_STAT	EQU	0fdh		;line status reg
	// 0 ;line status reg
	// 266 MODEM_STAT	EQU	0feh		;modem status reg
	// 0 ;modem status reg
	// 0 ;* 8259 registers
	// 269 INTR_CMND	EQU	00020h		;interrupt command reg
	// 0 ;interrupt command reg
	// 270 INTR_MASK	EQU	00021h		;interrupt mask reg
	// 0 ;interrupt mask reg
	// 271 EOI		EQU	020h		;end-of-interrupt command
	// 0 ;end-of-interrupt command
	// 0 ;* interrupt vector table locations
	// 274 COM1_VECTOR	EQU	12		;COM1: interrupt vector address
	// 0 ;COM1: interrupt vector address
	// 275 COM2_VECTOR	EQU	11		;COM2: interrupt vector address
	// 0 ;COM2: interrupt vector address
	// 0 ;comms interrupt wrt device
	// 0 ;* transmit queue (cyclic)
	// 0 ;transmit queue
	// 0 ;tx queue write pointer
	// 0 ;tx queue read pointer
	// 0 ;* receive queue (cyclic)
	// 0 ;receive queue
	// 0 ;rx queue write pointer
	// 0 ;rx queue read pointer
	// 0 ;* comms error flags
	// 292 ERR_TX_OVRFLW	EQU	1000000000000000b	;tx queue overflow
	// 0 ;tx queue overflow
	// 293 ERR_RX_OVRFLW	EQU	0100000000000000b	;rx queue overflow
	// 0 ;rx queue overflow
	// 294 ERR_CHECKSUM	EQU	0010000000000000b	;checksum error
	// 0 ;checksum error
	// 295 ERR_SYNC_TMOUT	EQU	0001000000000000b	;sync timeout
	// 0 ;sync timeout
	// 296 ERR_SYNC_ABORT	EQU	0000100000000000b	;sync user abort
	// 0 ;sync user abort
	// 297 ERR_DATA_TMOUT	EQU	0000010000000000b	;data timeout
	// 0 ;data timeout
	// 298 ERR_NO_CABLE	EQU	0000001000000000b	;no cable
	// 0 ;no cable
	// 299 ERR_BREAK	EQU	0000000000010000b	;break detect
	// 0 ;break detect
	// 300 ERR_FRAME	EQU	0000000000001000b	;framing error
	// 0 ;framing error
	// 301 ERR_PARITY	EQU	0000000000000100b	;parity error
	// 0 ;parity error
	// 302 ERR_OVERRUN	EQU	0000000000000010b	;overrun error
	// 0 ;overrun error
	// 0 ;* Baud rates
	// 305 BAUD50		EQU	0
	// 306 BAUD300		EQU	2
	// 307 BAUD600		EQU	4
	// 308 BAUD1200	EQU	6
	// 309 BAUD2400	EQU	8
	// 310 BAUD4800	EQU	10
	// 311 BAUD9600	EQU	12
	// 312 BAUD14400	EQU	14
	// 313 BAUD19200	EQU	16
	// 314 BAUD38400	EQU	18
	// 315 BAUD57600	EQU	20
	// 316 BAUD115200	EQU	22
	// 0 ;default Baud rate
	// 0 ;BAUD50
	// 0 ;BAUD300
	// 0 ;BAUD600
	// 0 ;BAUD1200
	// 0 ;BAUD2400
	// 0 ;BAUD4800
	// 0 ;BAUD9600
	// 0 ;BAUD14400
	// 0 ;BAUD19200
	// 0 ;BAUD38400
	// 0 ;BAUD57600
	// 0 ;BAUD115200
	// 0 ;1 = user abort enabled

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

