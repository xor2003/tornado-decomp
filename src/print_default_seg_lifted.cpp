/* THIS IS GENERATED FILE */

        
#include "print.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 402 CHAR_TYPE1	EQU	0	  	;7*9 characters
	// 0 ;7*9 characters
	// 403 CHAR_TYPE2	EQU	4		;3*5 characters
	// 0 ;3*5 characters
	// 404 CHAR_TYPE3	EQU	8		;5*9 characters
	// 0 ;5*9 characters
	// 0 ;* HexAttr - b0: print leading '$'
	// 0 ;*           b1: print leading '0'
	// 0 ;*           b2: print trailing 'h'
	// 0 ;*           b3: print trailing ' '
	// 0 ;* DecAttr - b0: ) digit field width
	// 0 ;*           b1: ) 1 - 15 (0 = use default width)
	// 0 ;*           b2: ) if the number is signed then an additional
	// 0 ;*           b3: ) character is printed for the sign
	// 0 ;*           b4: 0 = right justify, 1 = left justify
	// 0 ;*           b5: 0 = leading spaces, 1 = leading zeroes (if right justified)
	// 0 ;*           b6: 0 = use ' ' for '+', 1 = use '+' for '+' (if positive signed)
	// 0 ;*           b7: 0 = unsigned, 1 = signed
	// 0 ;* sprite types
	// 438 S_SPRITE	EQU	0
	// 439 M_SPRITE	EQU	4
	// 440 Q_SPRITE	EQU	8
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;24
	// 0 ;25
	// 0 ;26
	// 0 ;27
	// 0 ;28
	// 0 ;29
	// 0 ;30
	// 0 ;31
	// 0 ; 0
	// 0 ; 1
	// 0 ; 2
	// 0 ; 3
	// 0 ; 4
	// 0 ; 5
	// 0 ; 6
	// 0 ; 7
	// 0 ; 8
	// 0 ; 9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;24
	// 0 ;25
	// 0 ;26
	// 0 ;27
	// 0 ;28
	// 0 ;29
	// 0 ;30
	// 0 ;31
	// 0 ;32
	// 0 ;33
	// 0 ;34
	// 0 ;35
	// 0 ;36
	// 0 ;37
	// 0 ;38
	// 0 ;39
	// 0 ;40
	// 0 ;41
	// 0 ;42
	// 0 ;43
	// 0 ;44
	// 0 ;45
	// 0 ;46
	// 0 ;47
	// 0 ;48
	// 0 ;49
	// 0 ;50
	// 0 ;51
	// 0 ;52
	// 0 ;53
	// 0 ;54
	// 0 ;55
	// 0 ;56
	// 0 ;57
	// 0 ;58
	// 0 ;59
	// 0 ;60
	// 0 ;61
	// 0 ;62
	// 0 ;63
	// 0 ;64
	// 0 ;65
	// 0 ;66
	// 0 ;67
	// 0 ;68
	// 0 ;69
	// 0 ;70
	// 0 ;71
	// 0 ;72
	// 0 ;73
	// 0 ;74
	// 0 ;75
	// 0 ;76
	// 0 ;77
	// 0 ;78
	// 0 ;79
	// 0 ;80
	// 0 ;81
	// 0 ;82
	// 0 ;83
	// 0 ;84
	// 0 ;85
	// 0 ;86
	// 0 ;87
	// 0 ;88
	// 0 ;89
	// 0 ;90
	// 0 ;91
	// 0 ;92
	// 0 ;93
	// 0 ;94
	// 0 ;95
	// 572 MAX_EXT_FN	EQU	95

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

