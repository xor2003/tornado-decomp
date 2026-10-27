/* THIS IS GENERATED FILE */

        
#include "modellib.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initctrldevice:
	// 1720 
	/* call	RecalJoysticks ;* kill: assume all */
	CALLF(recaljoysticks, 0);
edummylabel1:
	// 4369 
	/* mov	bx,ControlDevice */
	bx = controldevice;
__disp=*(dw*)(((db*)&initctrlswitch)+bx);
	/* jmp	InitCtrlSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
initkbd1:
	// 4371 
	// 0 ;---------------------------
	/* mov	EleKbdWash,32768 */
	elekbdwash = 32768;
	/* mov	AilKbdWash,32768 */
	ailkbdwash = 32768;
	/* mov	RudKbdWash,32768 */
	rudkbdwash = 32768;
	// 0 ;* ensure joystick buttons are clear
	/* xor	al,al */
	XOR(al, al);
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
initkbd2:
	// 4373 
	// 0 ;---------------------------
	/* mov	EleKbdWash,4000 */
	elekbdwash = 4000;
	/* mov	AilKbdWash,2000 */
	ailkbdwash = 2000;
	/* mov	RudKbdWash,2000 */
	rudkbdwash = 2000;
	// 0 ;* ensure joystick buttons are clear
	/* xor	al,al */
	XOR(al, al);
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
initjoy1:
	// 4375 
	// 0 ;---------------------------
	// 0 ;* if single joystick not fitted then default to keyboard
	/* test	JoyA_Flag,1	;joystick fitted? */
	TEST(joya_flag, 1);
	/* jnz	@F		;yes -> */
	if ((joya_flag & 1) != 0) {goto dummylabel1;}
	/* mov	ControlDevice,CTRL_DEV_KBD1 */
	controldevice = 0;
	/* jmp	InitKbd1 */
	goto initkbd1;
dummylabel1:
	// 4377 
	/* @@:		mov	RudKbdWash,32768 */
	rudkbdwash = 32768;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
initjoy2:
	// 4379 
	// 0 ;---------------------------
	// 0 ;* if both joysticks not fitted then default to keyboard
	/* mov	al,JoyA_Flag */
	al = joya_flag;
	/* test	al,JoyB_Flag	;joysticks fitted? */
	TEST(al, joyb_flag);
	/* jnz	@F		;yes -> */
	if ((al & joyb_flag) != 0) {goto dummylabel2;}
	/* mov	ControlDevice,CTRL_DEV_KBD1 */
	controldevice = 0;
	/* jmp	InitKbd1 */
	goto initkbd1;
dummylabel2:
	// 4381 
	/* @@:		mov	ThrottleFine,0	;reset throttle fine */
	throttlefine = 0;
	/* mov	ReheatFine,0	;reset reheat fine */
	reheatfine = 0;
	/* ret */
	RETF(0);
limitpfine:
	// 1803 
	/* cmp	bx,128*128	;pitch <= 90 degs? */
	CMP(bx, 128*128);
edummylabel2:
	// 4383 
	/* jbe	@F		;yes -> */
	if ((CF || ZF)) {goto dummylabel3;}
	/* cmp	bx,384*128	;pitch >= -90 degs */
	CMP(bx, 384*128);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(384*128)) {goto dummylabel3;}
	/* sub	bx,256*128	;flip pitch 180 degs */
	SUB(bx, 256*128);
	/* neg	bx		;invert sign */
	NEG(bx);
	/* sub	ax,256*128	;flip heading 180 degs */
	SUB(ax, 256*128);
	/* sub	cx,256*128	;flip roll 180 degs */
	SUB(cx, 256*128);
	/* not	dx		;flip pitch direction */
	dx = ~dx;
dummylabel3:
	// 4385 
	/* @@:		ret */
	RETF(0);
limitpitch:
	// 1829 
	/* cmp	bx,128		;pitch <= 90 degs? */
	CMP(bx, 128);
edummylabel3:
	// 4387 
	/* jbe	@F		;yes -> */
	if ((CF || ZF)) {goto dummylabel4;}
	/* cmp	bx,384		;pitch >= -90 degs */
	CMP(bx, 384);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(384)) {goto dummylabel4;}
	/* sub	bx,256		;flip pitch 180 degs */
	SUB(bx, 256);
	/* neg	bx		;invert sign */
	NEG(bx);
	/* and	bx,001ffh	;(0 .. 511) */
	AND(bx, 0x001ff);
	/* sub	ax,256		;flip heading 180 degs */
	SUB(ax, 256);
	/* and	ax,001ffh	;(0 .. 511) */
	AND(ax, 0x001ff);
	/* sub	cx,256		;flip roll 180 degs */
	SUB(cx, 256);
	/* and	cx,001ffh	;(0 .. 511) */
	AND(cx, 0x001ff);
	/* not	dx		;flip pitch direction */
	dx = ~dx;
dummylabel4:
	// 4389 
	/* @@:		ret */
	RETF(0);
moveviewpoint:
	// 1855 
	// 0 ;----------------
	// 0 ;* calc new x pos
	// 0 ;----------------
	// 0 ;* linear xft = xsec * 16384 + xft + 8192
edummylabel4:
	// 4391 
	/* mov	bp,VP_XSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* xor	di,di */
	XOR(di, di);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* rcr	di,1 */
	RCR(di, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* rcr	di,1 */
	RCR(di, 1);
	/* push	ax */
	PUSH(ax);
	/* mov	ax,VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* add	di,ax */
	ADD(di, ax);
	/* adc	bp,0 */
	ADC(bp, 0);
	/* pop	ax */
	POP(ax);
	// 0 ;* new x pos = linear xft + x offset
	/* add	di,ax */
	ADD(di, ax);
	/* adc	bp,dx */
	ADC(bp, dx);
	// 0 ;* xsec = linear xft / 16384, xft = (linear xft and 03fffh) - 8192
	/* mov	ax,di */
	ax = di;
	/* shl	di,1 */
	SHL(di, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* shl	di,1 */
	SHL(di, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* mov	VP_XSEC[si],bp */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec))), m2c::getdata(bp));
	/* and	ax,03fffh */
	AND(ax, 0x03fff);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	/* mov	VP_XFT[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft))), m2c::getdata(ax));
	// 0 ;----------------
	// 0 ;* calc new y pos
	// 0 ;----------------
	// 0 ;* linear yft = ysec * 16384 + (-yft + 8191)
	/* mov	bp,VP_YSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* xor	di,di */
	XOR(di, di);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* rcr	di,1 */
	RCR(di, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* rcr	di,1 */
	RCR(di, 1);
	/* mov	ax,VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* neg	ax */
	NEG(ax);
	/* add	ax,8191 */
	ADD(ax, 8191);
	/* add	di,ax */
	ADD(di, ax);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;* new y pos = linear yft - y offset
	/* sub	di,bx */
	SUB(di, bx);
	/* sbb	bp,cx */
	SBB(bp, cx);
	// 0 ;* ysec = linear yft / 16384, yft = -((linear yft and 03fffh) - 8191)
	/* mov	ax,di */
	ax = di;
	/* shl	di,1 */
	SHL(di, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* shl	di,1 */
	SHL(di, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* mov	VP_YSEC[si],bp */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec))), m2c::getdata(bp));
	/* and	ax,03fffh */
	AND(ax, 0x03fff);
	/* sub	ax,8191 */
	SUB(ax, 8191);
	/* neg	ax */
	NEG(ax);
	/* mov	VP_YFT[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft))), m2c::getdata(ax));
	/* ret */
	RETF(0);
calcsinefine:
	// 1936 
	/* cwd ;* note: Only valid for angles +90 .. -90degs. */
	CWD;
edummylabel5:
	// 4393 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(frac), dx = sign(frac)
	/* mov	bp,dx		;store sign(frac) */
	bp = dx;
	/* mov	dx,ax		;store abs(frac) */
	dx = ax;
	/* mov	cl,7		;prime for /128 */
	cl = 7;
	/* mov	bx,ax */
	bx = ax;
	/* shr	bx,cl		;/128 */
	SHR(bx, cl);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* and	dx,0007fh	;extract remaining bits */
	AND(dx, 0x0007f);
	/* jz	@F		;(trap PFine = 04000h case) -> */
	if (dx == 0) {goto dummylabel5;}
	/* mov	si,ax */
	si = ax;
	/* mov	ax,SinTable[bx+2] */
	ax = *(dw*)(((db*)&sintable)+bx+2);
	/* sub	ax,si		;ax = diff */
	SUB(ax, si);
	/* mul	dx */
	MUL1_2(dx);
	/* shr	ax,cl		;/128 */
	SHR(ax, cl);
	/* adc	ax,si		;(1/2 bit round up) */
	ADC(ax, si);
dummylabel5:
	// 4395 
	/* @@:		xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* ret */
	RETF(0);
calcvias:
	// 1970 
	// 0 ;* look up sqrt(rho) (tabulated from 0 .. 70,000ft step 1,000ft)
edummylabel6:
	// 4397 
	/* mov	bx,1000 */
	bx = 1000;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,70 */
	CMP(ax, 70);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(70)) {goto dummylabel6;}
	/* mov	ax,70 */
	ax = 70;
dummylabel6:
	// 4399 
	/* @@:		mov	bx,ax */
	bx = ax;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,SqrtRhoTable[bx] */
	ax = *(dw*)(((db*)&sqrtrhotable)+bx);
	// 0 ;* vias = vtas * sqrt(rho)
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* ret */
	RETF(0);
calcvkts:
	// 2000 
	// 0 ;* vkts = vias [*8] / 1.7 * 8 = vias * 2409 / 32768
edummylabel7:
	// 4401 
	/* mov	dx,2409 */
	dx = 2409;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcalcsinefine: 	goto calcsinefine;
        case m2c::kcalcvias: 	goto calcvias;
        case m2c::kcalcvkts: 	goto calcvkts;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kinitctrldevice: 	goto initctrldevice;
        case m2c::kinitjoy1: 	goto initjoy1;
        case m2c::kinitjoy2: 	goto initjoy2;
        case m2c::kinitkbd1: 	goto initkbd1;
        case m2c::kinitkbd2: 	goto initkbd2;
        case m2c::klimitpfine: 	goto limitpfine;
        case m2c::klimitpitch: 	goto limitpitch;
        case m2c::kmoveviewpoint: 	goto moveviewpoint;
        default: return __dispatch_call(__disp, _state);
    };
}

