/* THIS IS GENERATED FILE */

        
#include "newmouse.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installmouse:
	// 120 
	/* push	es ;* kill: assume all (BIOS routines used) */
	PUSH(es);
edummylabel1:
	// 4369 
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,033h		;mouse interrupt */
	al = 0x033;
	/* int	021h  		;DOS */
	_INT(0x021);
	// 0 ;* test for null pointer (es:bx -> mouse interrupt routine)
	/* mov	ax,es */
	ax = es;
	/* or	ax,bx */
	OR(ax, bx);
	/* jz	InstallExit	;null ptr -> */
	if (ax == 0) {goto installexit;}
	// 0 ;* test for first instruction being IRET
	/* cmp	BYTE PTR ES:[bx],0cfh */
	CMP(*(raddr(es,bx)), 0x0cf);
	/* je	InstallExit	;IRET -> */
	if ((db)(*(raddr(es,bx))) == (db)(0x0cf)) {goto installexit;}
	/* mov	ax,MOUSE_RESET */
	ax = 0;
	/* int	033h */
	_INT(0x033);
	/* cmp	ax,-1		;installed? */
	CMP(ax, -1);
	/* jne	InstallExit	;no -> */
	if ((dw)(ax) != (dw)(-1)) {goto installexit;}
	/* cmp	bx,2		;2 button mode? */
	CMP(bx, 2);
	/* je	@F		;yes -> */
	if ((dw)(bx) == (dw)(2)) {goto dummylabel1;}
	/* cmp	bx,3		;3 button mode? */
	CMP(bx, 3);
	/* jne	InstallExit	;no (mouse not recognized) -> */
	if ((dw)(bx) != (dw)(3)) {goto installexit;}
dummylabel1:
	// 4371 
	/* @@:		mov	MouseFlag,1 */
	*(mouseflag) = 1;
	/* mov	ax,HIDE_CURSOR */
	ax = 2;
	/* int	033h */
	_INT(0x033);
	/* call	FAR PTR SetMouseLimits */
	CALLF(setmouselimits, 0);
installexit:
	// 4373 
	/* InstallExit:	pop	es */
	POP(es);
	/* ret */
	RETF(0);
restoremouse:
	// 157 
	/* test	MouseFlag,1	;mouse installed? */
	TEST(*(mouseflag), 1);
edummylabel2:
	// 4375 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel2;}
	/* mov	ax,MOUSE_RESET */
	ax = 0;
	/* int	033h */
	_INT(0x033);
dummylabel2:
	// 4377 
	/* @@:		ret */
	RETF(0);
resetmouse:
	// 186 
	/* test	MouseFlag,1	;mouse installed? */
	TEST(*(mouseflag), 1);
edummylabel3:
	// 4379 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel3;}
	/* mov	ax,MOUSE_RESET */
	ax = 0;
	/* int	033h */
	_INT(0x033);
	/* mov	ax,HIDE_CURSOR */
	ax = 2;
	/* int	033h */
	_INT(0x033);
	/* call	FAR PTR SetMouseLimits */
	CALLF(setmouselimits, 0);
dummylabel3:
	// 4381 
	/* @@:		ret */
	RETF(0);
setmouselimits:
	// 214 
	/* test	MouseFlag,1	;mouse installed? */
	TEST(*(mouseflag), 1);
edummylabel4:
	// 4383 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel4;}
	/* mov	ax,SET_HORIZ */
	ax = 7;
	/* mov	cx,MouseXMin */
	cx = mousexmin;
	/* mov	dx,MouseXMax */
	dx = mousexmax;
	/* int	033h */
	_INT(0x033);
	/* mov	ax,SET_VERT */
	ax = 8;
	/* mov	cx,MouseYMin */
	cx = mouseymin;
	/* mov	dx,MouseYMax */
	dx = mouseymax;
	/* int	033h */
	_INT(0x033);
	/* mov	cx,MouseXMax */
	cx = mousexmax;
	/* sub	cx,MouseXMin */
	SUB(cx, mousexmin);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* add	cx,MouseXMin */
	ADD(cx, mousexmin);
	/* mov	bx,MouseYMax */
	bx = mouseymax;
	/* sub	bx,MouseYMin */
	SUB(bx, mouseymin);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* add	bx,MouseYMin */
	ADD(bx, mouseymin);
	/* call	FAR PTR SetMousePos */
	CALLF(setmousepos, 0);
dummylabel4:
	// 4385 
	/* @@:		ret */
	RETF(0);
setmousepos:
	// 250 
	/* test	MouseFlag,1	;mouse installed? */
	TEST(*(mouseflag), 1);
edummylabel5:
	// 4387 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel5;}
	/* mov	dx,bx */
	dx = bx;
	/* mov	MouseX,cx */
	mousex = cx;
	/* mov	MouseY,dx */
	mousey = dx;
	/* mov	_MouseX,cx */
	_mousex = cx;
	/* mov	_MouseY,dx */
	_mousey = dx;
	/* mov	ax,SET_POSITION */
	ax = 4;
	/* int	033h */
	_INT(0x033);
dummylabel5:
	// 4389 
	/* @@:		ret */
	RETF(0);
readmouse:
	// 275 
	// 0 ;* assume mouse not installed
edummylabel6:
	// 4391 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	cx,MouseX */
	cx = mousex;
	/* mov	bx,MouseY */
	bx = mousey;
	/* test	MouseFlag,1 	;mouse installed? */
	TEST(*(mouseflag), 1);
	/* jz	UpdateExit	;no -> */
	if (!(*(mouseflag) & 1)) {goto updateexit;}
	// 0 ;* store previous mouse position
	/* mov	ax,MouseX */
	ax = mousex;
	/* mov	_MouseX,ax */
	_mousex = ax;
	/* mov	ax,MouseY */
	ax = mousey;
	/* mov	_MouseY,ax */
	_mousey = ax;
	// 0 ;* store previous button values
	/* mov	al,LhsButton */
	al = lhsbutton;
	/* mov	_LhsButton,al */
	_lhsbutton = al;
	/* mov	al,RhsButton */
	al = rhsbutton;
	/* mov	_RhsButton,al */
	_rhsbutton = al;
	// 0 ;* read mouse position / button status
	/* mov	ax,GET_POSITION */
	ax = 3;
	/* int	033h */
	_INT(0x033);
	/* mov	MouseX,cx */
	mousex = cx;
	/* mov	MouseY,dx */
	mousey = dx;
	/* mov	bp,dx		;store y pos */
	bp = dx;
	// 0 ;* test for lhs button
	/* mov	al,bl */
	al = bl;
	/* and	al,001b */
	AND(al, 0x1);
	/* mov	LhsButton,al */
	lhsbutton = al;
	/* mov	dl,al */
	dl = al;
	/* jz	@F		;not pressed -> */
	if (al == 0) {goto dummylabel6;}
	/* xor	dl,_LhsButton	;1 = just pressed (0 -> 1) */
	XOR(dl, _lhsbutton);
	// 0 ;* test for rhs button
dummylabel6:
	// 4393 
	/* @@:		mov	ah,bl */
	ah = bl;
	/* and	ah,010b */
	AND(ah, 0x2);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* mov	RhsButton,ah */
	rhsbutton = ah;
	/* mov	dh,ah */
	dh = ah;
	/* jz	@F		;not pressed -> */
	if (ah == 0) {goto dummylabel7;}
	/* xor	dh,_RhsButton	;1 = just pressed (0 -> 1) */
	XOR(dh, _rhsbutton);
dummylabel7:
	// 4395 
	/* @@:		mov	bx,bp		;restore y pos */
	bx = bp;
updateexit:
	// 4397 
	/* UpdateExit:	ret */
	RETF(0);
readmousemotion:
	// 336 
	// 0 ;* assume mouse not installed
edummylabel7:
	// 4399 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	XMickeys,cx */
	xmickeys = cx;
	/* mov	YMickeys,dx */
	ymickeys = dx;
	/* test	MouseFlag,1 	;mouse installed? */
	TEST(*(mouseflag), 1);
	/* jz	ReadMotionExit	;no -> */
	if (!(*(mouseflag) & 1)) {goto readmotionexit;}
	// 0 ;* store previous button values
	/* mov	al,LhsButton */
	al = lhsbutton;
	/* mov	_LhsButton,al */
	_lhsbutton = al;
	/* mov	al,RhsButton */
	al = rhsbutton;
	/* mov	_RhsButton,al */
	_rhsbutton = al;
	// 0 ;* read mouse motion
	/* mov	ax,GET_MOTION */
	ax = 11;
	/* int	033h */
	_INT(0x033);
	/* mov	XMickeys,cx */
	xmickeys = cx;
	/* mov	YMickeys,dx */
	ymickeys = dx;
	// 0 ;* read mouse button status
	/* mov	ax,GET_BUTTONS */
	ax = 5;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* int	033h */
	_INT(0x033);
	/* mov	ah,al		;store rhs button status */
	ah = al;
	// 0 ;* test for lhs button
	/* and	al,001b */
	AND(al, 0x1);
	/* mov	LhsButton,al */
	lhsbutton = al;
	/* mov	dl,al */
	dl = al;
	/* jz	@F		;not pressed -> */
	if (al == 0) {goto dummylabel8;}
	/* xor	dl,_LhsButton	;1 = just pressed (0 -> 1) */
	XOR(dl, _lhsbutton);
	// 0 ;* test for rhs button
dummylabel8:
	// 4401 
	/* @@:		and	ah,010b */
	AND(ah, 0x2);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* mov	RhsButton,ah */
	rhsbutton = ah;
	/* mov	dh,ah */
	dh = ah;
	/* jz	@F		;not pressed -> */
	if (ah == 0) {goto dummylabel9;}
	/* xor	dh,_RhsButton	;1 = just pressed (0 -> 1) */
	XOR(dh, _rhsbutton);
	// 0 ;* return motion counters
dummylabel9:
	// 4403 
	/* @@:		mov	cx,XMickeys */
	cx = xmickeys;
	/* mov	bx,YMickeys */
	bx = ymickeys;
readmotionexit:
	// 4405 
	/* ReadMotionExit:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kinstallexit: 	goto installexit;
        case m2c::kinstallmouse: 	goto installmouse;
        case m2c::kreadmotionexit: 	goto readmotionexit;
        case m2c::kreadmouse: 	goto readmouse;
        case m2c::kreadmousemotion: 	goto readmousemotion;
        case m2c::kresetmouse: 	goto resetmouse;
        case m2c::krestoremouse: 	goto restoremouse;
        case m2c::ksetmouselimits: 	goto setmouselimits;
        case m2c::ksetmousepos: 	goto setmousepos;
        case m2c::kupdateexit: 	goto updateexit;
        default: return __dispatch_call(__disp, _state);
    };
}

