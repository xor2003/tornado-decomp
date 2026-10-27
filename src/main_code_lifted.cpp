/* THIS IS GENERATED FILE */

        
#include "main.h"

                

 static bool code_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    code_0_proc:
    _begin:
asmmain:
	// 4369 
	/* Main:		mov	ax,ds ;============================================================================ */
	ax = ds;
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	PSP,dx		;store program segment prefix */
	psp = dx;
	/* mov	ax,ss */
	ax = ss;
	/* mov	SSTemp,ax */
	sstemp = ax;
	/* mov	ax,sp */
	ax = sp;
	/* mov	SPTemp,ax */
	sptemp = ax;
	/* cld	    		;auto-increment */
	CLD;
	/* mov	ah,00fh		;get current video mode */
	ah = 0x00f;
	/* int	010h */
	_INT(0x010);
	/* mov	VideoMode,al */
	videomode = al;
	/* call	ParseCmndLine */
	CALLF(parsecmndline, 0);
	/* call	InstallKbd */
	CALLF(installkbd, 0);
	/* call	InstallTimer */
	CALLF(installtimer, 0);
	/* call	InstallCritErr */
	CALLF(installcriterr, 0);
	/* call	InstallOverflow */
	CALLF(installoverflow, 0);
	/* call	InstallMouse */
	CALLF(installmouse, 0);
	/* call	Control */
	CALL(control_proc, 0);
aborttodos:
	// 4371 
	/* AbortToDOS:	call	RestoreMouse */
	CALLF(restoremouse, 0);
	/* call	RestoreOverflow */
	CALLF(restoreoverflow, 0);
	/* call	RestoreCritErr */
	CALLF(restorecriterr, 0);
	/* call	RestoreTimer */
	CALLF(restoretimer, 0);
	/* call	RestoreKbd */
	CALLF(restorekbd, 0);
	// 0 ;* set time and date from real time clock
	/* call	SetTimeDate */
	CALLF(settimedate, 0);
	// 0 ;* normalise sound (in case exit via SysReq)
	/* call	NormaliseSound */
	CALLF(normalisesound, 0);
	/* call	NormaliseMusic */
	CALLF(normalisemusic, 0);
	// 0 ;* if two player then stop comms (in case exit via SysReq)
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jz	@F */
	if (!(twoplayer & 1)) {goto dummylabel1;}
	/* call	StopComms */
	CALLF(stopcomms, 0);
dummylabel1:
	// 4373 
	/* @@:		mov	al,OverflowFlag */
	al = overflowflag;
	/* test	al,al */
	TEST(al, al);
	/* jnz	ReturnToDOS */
	if ((al & al) != 0) {goto returntodos;}
	/* mov	ah,0		;set video mode */
	ah = 0;
	/* mov	al,VideoMode */
	al = videomode;
	/* and	al,07fh		;ensure clear screen enabled */
	AND(al, 0x07f);
	/* int	010h */
	_INT(0x010);
returntodos:
	// 4375 
	/* ReturnToDOS:	mov	al,ReturnCode */
	al = returncode;
	/* mov	ah,04ch		;terminate process */
	ah = 0x04c;
	/* int	021h */
	_INT(0x021);
	/* retf */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kaborttodos: 	goto aborttodos;
        case m2c::kmain: 	goto asmmain;
        case m2c::kcode_0_proc: 	goto code_0_proc;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kreturntodos: 	goto returntodos;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

