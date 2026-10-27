/* THIS IS GENERATED FILE */

        
#include "misclib.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
printegaspace:
	// 387 
	/* mov	ax,ScreenMode ;* kill: assume all */
	ax = screenmode;
edummylabel1:
	// 4369 
	/* cmp	ax,EGA */
	CMP(ax, ega);
	/* jne	SkipFreeSpace */
	if ((dw)(ax) != (dw)(ega)) {goto skipfreespace;}
	/* mov	si,OFFSET Free$ */
	si = m2c::near_offset_external(freedol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	KeyPress */
	CALLF(keypress, 0);
skipfreespace:
	// 4371 
	/* SkipFreeSpace:	ret */
	RETF(0);
selectmode:
	// 413 
	/* push	ax ;* kill: assume all */
	PUSH(ax);
edummylabel2:
	// 4373 
	/* mov	ah,9 */
	ah = 9;
	/* mov	dx,OFFSET Prompt$ */
	dx = m2c::near_offset_external(promptdol);
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* mov	ah,al */
	ah = al;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* mov	cx,8 */
	cx = 8;
modeprintloop:
	// 4375 
	/* ModePrintLoop:	ror	al,1 */
	ROR(al, 1);
	/* jnc	SkipPrint */
	if (!CF) {goto skipprint;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ah,9 */
	ah = 9;
	/* mov	dx,Mode$Ptrs[bx] */
	dx = *(dw*)(((db*)&modedolptrs)+bx);
	/* int	021h */
	_INT(0x021);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skipprint:
	// 4377 
	/* SkipPrint:	add	bx,2 */
	ADD(bx, 2);
	/* loop	ModePrintLoop */
	LOOP(modeprintloop);
	/* push	ax */
	PUSH(ax);
	/* mov	ah,9 */
	ah = 9;
	/* mov	dx,OFFSET Tail$ */
	dx = m2c::near_offset_external(taildol);
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* mov	dh,ah */
	dh = ah;
selectloop:
	// 4379 
	/* SelectLoop:	call	GetChar */
	CALLF(getchar, 0);
	/* mov	dl,dh */
	dl = dh;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* mov	cx,8 */
	cx = 8;
keytestloop:
	// 4381 
	/* KeyTestLoop:	ror	dl,1 */
	ROR(dl, 1);
	/* jnc	SkipKeyTest */
	if (!CF) {goto skipkeytest;}
	/* cmp	al,ModeKeys[bx] */
	CMP(al, *((&modekeys)+bx));
	/* je	FoundMode */
	if ((db)(al) == (db)(*((&modekeys)+bx))) {goto foundmode;}
skipkeytest:
	// 4383 
	/* SkipKeyTest:	inc	bx */
	INC(bx);
	/* loop	KeyTestLoop */
	LOOP(keytestloop);
	/* jmp	SelectLoop */
	goto selectloop;
foundmode:
	// 4385 
	/* FoundMode:	mov	ax,bx */
	ax = bx;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	ScreenMode,ax */
	screenmode = ax;
	/* ret */
	RETF(0);
cls:
	// 465 
	/* mov	bl,0 ;* kill: assume all */
	bl = 0;
edummylabel3:
	// 4387 
	/* mov	bh,199 */
	bh = 199;
	/* mov	cx,0 */
	cx = 0;
	/* mov	dx,319 */
	dx = 319;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* ret */
	RETF(0);
convpdegdol:
	// 482 
	/* mov	dx,46080 ;* kill: ax, bx, dx, bp, flags */
	dx = 46080;
edummylabel4:
	// 4389 
	/* mul	dx		;pdeg * (360 / 512) */
	MUL1_2(dx);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx		;store real degrees */
	bp = dx;
	/* test	dx,dx */
	TEST(dx, dx);
	/* jnz	SkipPDeg360	;not 360 degrees -> */
	if ((dx & dx) != 0) {goto skippdeg360;}
	/* mov	dx,360 */
	dx = 360;
skippdeg360:
	// 4391 
	/* SkipPDeg360:	mov	al,' ' */
	al = ' ';
	/* mov	[di+0],al */
	m2c::setdata(&(*(raddr(ds,di+0))), m2c::getdata(al));
	/* mov	[di+1],al */
	m2c::setdata(&(*(raddr(ds,di+1))), m2c::getdata(al));
	/* mov	[di+2],al */
	m2c::setdata(&(*(raddr(ds,di+2))), m2c::getdata(al));
	/* mov	ax,dx */
	ax = dx;
	/* mov	bx,10 */
	bx = 10;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+2],al */
	m2c::setdata(&(*(raddr(ds,di+2))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DonePDeg */
	if (!(ax & ax)) {goto donepdeg;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+1],al */
	m2c::setdata(&(*(raddr(ds,di+1))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DonePDeg */
	if (!(ax & ax)) {goto donepdeg;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* mov	al,dl */
	al = dl;
	/* mov	[di+0],al */
	m2c::setdata(&(*(raddr(ds,di+0))), m2c::getdata(al));
donepdeg:
	// 4393 
	/* DonePDeg:	mov	ax,bp		;restore real degrees */
	ax = bp;
	/* ret */
	RETF(0);
libcode_0_proc:
	// 532 
zdecworddol:
	// 4395 
	// 0 ;* kill: ax, bx, dx, flags
	/* mov	dx,ax */
	dx = ax;
	/* mov	al,'0' */
	al = '0';
	/* jmp	ClearBuffer */
	goto clearbuffer;
decworddol:
	// 536 
	/* mov	dx,ax */
	dx = ax;
edummylabel5:
	// 4397 
	/* mov	al,' ' */
	al = ' ';
clearbuffer:
	// 4399 
	/* ClearBuffer:	mov	[di+0],al */
	m2c::setdata(&(*(raddr(ds,di+0))), m2c::getdata(al));
	/* mov	[di+1],al */
	m2c::setdata(&(*(raddr(ds,di+1))), m2c::getdata(al));
	/* mov	[di+2],al */
	m2c::setdata(&(*(raddr(ds,di+2))), m2c::getdata(al));
	/* mov	[di+3],al */
	m2c::setdata(&(*(raddr(ds,di+3))), m2c::getdata(al));
	/* mov	[di+4],al */
	m2c::setdata(&(*(raddr(ds,di+4))), m2c::getdata(al));
	/* mov	ax,dx */
	ax = dx;
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	ZeroWord	;0 -> */
	if (!(ax & ax)) {goto zeroword;}
	/* mov	bx,10 */
	bx = 10;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+4],al */
	m2c::setdata(&(*(raddr(ds,di+4))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DoneWord */
	if (!(ax & ax)) {goto doneword;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+3],al */
	m2c::setdata(&(*(raddr(ds,di+3))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DoneWord */
	if (!(ax & ax)) {goto doneword;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+2],al */
	m2c::setdata(&(*(raddr(ds,di+2))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DoneWord */
	if (!(ax & ax)) {goto doneword;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* xchg	al,dl */
	XCHG(al, dl);
	/* mov	[di+1],al */
	m2c::setdata(&(*(raddr(ds,di+1))), m2c::getdata(al));
	/* xchg	al,dl */
	XCHG(al, dl);
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	DoneWord */
	if (!(ax & ax)) {goto doneword;}
	/* xor	dx,dx */
	XOR(dx, dx);
	/* div	bx */
	DIV2(bx);
	/* add	dl,'0' */
	ADD(dl, '0');
	/* mov	al,dl */
	al = dl;
	/* mov	[di+0],al */
	m2c::setdata(&(*(raddr(ds,di+0))), m2c::getdata(al));
doneword:
	// 4401 
	/* DoneWord:	ret */
	RETF(0);
zeroword:
	// 4403 
	/* ZeroWord:    	mov	al,'0' */
	al = '0';
	/* mov	[di+4],al */
	m2c::setdata(&(*(raddr(ds,di+4))), m2c::getdata(al));
	/* ret */
	RETF(0);
hexworddol:
	// 599 
	/* mov	bx,OFFSET HexChars ;* kill: ax, bx, cx, dx, di, flags */
	bx = m2c::near_offset_external(hexchars);
edummylabel6:
	// 4405 
	/* mov	cx,4 */
	cx = 4;
	/* mov	dx,ax */
	dx = ax;
hexworddolloop:
	// 4407 
	/* HexWord$Loop:	mov	al,dh */
	al = dh;
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat */
	XLAT;
	/* stosb */
	{ STOSB; }
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* loop	HexWord$Loop */
	LOOP(hexworddolloop);
	/* ret */
	RETF(0);
hexbytedol:
	// 626 
	/* mov	ah,al ;* kill: ax, bx, di, flags */
	ah = al;
edummylabel7:
	// 4409 
	/* mov	bx,OFFSET HexChars */
	bx = m2c::near_offset_external(hexchars);
	/* mov	al,ah */
	al = ah;
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat */
	XLAT;
	/* stosb */
	{ STOSB; }
	/* mov	al,ah */
	al = ah;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* xlat */
	XLAT;
	/* stosb */
	{ STOSB; }
	/* ret */
	RETF(0);
convnumdol:
	// 653 
	/* xor	bx,bx		;reset string index */
	XOR(bx, bx);
edummylabel8:
	// 4411 
	/* mov	cx,5		;max of 5 digits */
	cx = 5;
	// 0 ;* search for end of string (locate least significant digit)
checknextdigit:
	// 4413 
	/* CheckNextDigit:	mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* cmp	al,'0'		;valid digit? */
	CMP(al, '0');
	/* jb	ConvNumber	;no -> */
	if ((db)(al) < (db)('0')) {goto convnumber;}
	/* cmp	al,'9'		;valid digit? */
	CMP(al, '9');
	/* ja	ConvNumber	;no -> */
	if ((db)(al) > (db)('9')) {goto convnumber;}
	/* inc	bx		;next digit */
	INC(bx);
	/* loop	CheckNextDigit */
	LOOP(checknextdigit);
convnumber:
	// 4415 
	/* ConvNumber:	xor	cx,cx		;clear temp result */
	XOR(cx, cx);
	/* xor	di,di */
	XOR(di, di);
	/* mov	bp,1		;multiplier */
	bp = 1;
convnumloop:
	// 4417 
	/* ConvNumLoop:	dec	bx */
	DEC(bx);
	/* js	ConvNumExit	;done all digits -> */
	if ((short)(bx) < 0) {goto convnumexit;}
	/* mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* sub	al,'0' */
	SUB(al, '0');
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mul	bp */
	MUL1_2(bp);
	/* add	cx,ax */
	ADD(cx, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* shl	bp,1		;*2 */
	SHL(bp, 1);
	/* mov	ax,bp */
	ax = bp;
	/* shl	bp,1		;*4 */
	SHL(bp, 1);
	/* shl	bp,1		;*8 */
	SHL(bp, 1);
	/* add	bp,ax		;multiplier * 10 */
	ADD(bp, ax);
	/* jmp	ConvNumLoop */
	goto convnumloop;
convnumexit:
	// 4419 
	/* ConvNumExit:	mov	dx,di */
	dx = di;
	/* mov	ax,cx */
	ax = cx;
	/* ret */
	RETF(0);
quicksetup:
	// 694 
	// 0 ;* set video mode
edummylabel9:
	// 4421 
	/* mov	ScreenMode,ax */
	screenmode = ax;
	/* mov	FlipMode,GAME_MODE */
	flipmode = game_mode;
	/* call	SetVideoMode */
	CALLF(setvideomode, 0);
	// 0 ;* clear real screen and work screen
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	// 0 ;* init sprite window wrt screen mode (max screen size)
	/* mov	bl,0 */
	bl = 0;
	/* mov	bh,199 */
	bh = 199;
	/* mov	cx,0 */
	cx = 0;
	/* mov	dx,319 */
	dx = 319;
	/* call	SetSSpriteClip */
	CALLF(setsspriteclip, 0);
	// 0 ;* init sprites
	/* call	InitSSprites */
	CALLF(initssprites, 0);
	/* call	InitMSprites */
	CALLF(initmsprites, 0);
	/* call	InitQSprites */
	CALLF(initqsprites, 0);
	// 0 ;* clear work screen again (may have been used as buffer for sprite init)
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	// 0 ;* miscellaneous
	/* call	ReSeed */
	CALLF(reseed, 0);
	/* ret */
	RETF(0);
runlendecode:
	// 749 
	/* lodsw			;length of data */
	{ LODSW; }
edummylabel10:
	// 4423 
	/* mov	bp,ax */
	bp = ax;
	/* add	bp,si		;ds:bp -> end of data + 1 */
	ADD(bp, si);
nextdata:
	// 4425 
	/* NextData:	lodsb	      		;fetch counter */
	{ LODSB; }
	/* cbw */
	CBW;
	/* cmp	ax,-128		;16-bit counter following? */
	CMP(ax, -128);
	/* jne	TestCntrType	;no -> */
	if ((dw)(ax) != (dw)(-128)) {goto testcntrtype;}
	/* lodsw			;fetch 16-bit counter */
	{ LODSW; }
testcntrtype:
	// 4427 
	/* TestCntrType:	test	ax,ax */
	TEST(ax, ax);
	/* js	RepeatCopy */
	if ((short)((ax & ax)) < 0) {goto repeatcopy;}
	// 0 ;* copy the next n + 1 bytes literally
literalcopy:
	// 4429 
	/* LiteralCopy:	mov	cx,ax */
	cx = ax;
	/* inc	cx */
	INC(cx);
	// 764 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* jmp	TestForDataEnd */
	goto testfordataend;
	// 0 ;* copy the next byte -n + 1 times
repeatcopy:
	// 4431 
	/* RepeatCopy:	neg	ax */
	NEG(ax);
	/* mov	cx,ax */
	cx = ax;
	/* inc	cx */
	INC(cx);
	/* lodsb */
	{ LODSB; }
	// 772 rep	stosb
	/* rep	stosb */
	REP STOSB;
testfordataend:
	// 4433 
	/* TestForDataEnd:	cmp	si,bp */
	CMP(si, bp);
	/* jb	NextData */
	if ((dw)(si) < (dw)(bp)) {goto nextdata;}
	/* ret */
	RETF(0);
calcbitfieldval:
	// 804 
	/* push	cx ;*	 call	CalcBitFieldVal		;ax = 0 .. 3 */
	PUSH(cx);
edummylabel11:
	// 4435 
	/* push	dx */
	PUSH(dx);
	/* and	dx,ax		;clear unwanted bits */
	AND(dx, ax);
	// 0 ;* calc position of status bit (b0 .. b15)
	/* mov	cx,15 */
	cx = 15;
statusbitloop:
	// 4437 
	/* StatusBitLoop:	shl	dx,1  		;(msb into cf) */
	SHL(dx, 1);
	/* jc	FoundStatusBit */
	if (CF) {goto foundstatusbit;}
	/* loop	StatusBitLoop */
	LOOP(statusbitloop);
foundstatusbit:
	// 4439 
	/* FoundStatusBit:	mov	dx,cx		;0 .. 15 = b0 .. b15 */
	dx = cx;
	// 0 ;* calc position of first bit of bit field mask
	/* mov	cx,15 */
	cx = 15;
firstbitloop:
	// 4441 
	/* FirstBitLoop:	shr	ax,1		;(lsb into cf) */
	SHR(ax, 1);
	/* jc	FoundFirstBit */
	if (CF) {goto foundfirstbit;}
	/* loop	FirstBitLoop */
	LOOP(firstbitloop);
foundfirstbit:
	// 4443 
	/* FoundFirstBit:	mov	ax,15 */
	ax = 15;
	/* sub	ax,cx		;0 .. 15 = b0 .. b15 */
	SUB(ax, cx);
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx		;status bit pos wrt first bit pos */
	SUB(ax, dx);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	// 0 ;return ax = 0 if error
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* ret */
	RETF(0);
testbitstatus:
	// 858 
	/* test	dx,ax ;*	 call	TestBitStatus		;ax = 0 or 1 */
	TEST(dx, ax);
edummylabel12:
	// 4445 
	/* mov	ax,0		;assume reset */
	ax = 0;
	/* jz	TestBitExit	;reset -> */
	if (ZF) {goto testbitexit;}
	/* mov	ax,1 */
	ax = 1;
testbitexit:
	// 4447 
	/* TestBitExit:	ret */
	RETF(0);
drawrectangle:
	// 877 
	// 0 ;* x min, y min ----> x max, y min
edummylabel13:
	// 4449 
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	bh,bl */
	bh = bl;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* x max, y min ----> x max, y max
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	cx,dx */
	cx = dx;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* x max, y max ----> x min, y max
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	bl,bh */
	bl = bh;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* x min, y max ----> x min, y min
	/* mov	dx,cx */
	dx = cx;
	/* call	LineDraw */
	CALLF(linedraw, 0);
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
                case m2c::kcalcbitfieldval: 	goto calcbitfieldval;
        case m2c::kchecknextdigit: 	goto checknextdigit;
        case m2c::kclearbuffer: 	goto clearbuffer;
        case m2c::kcls: 	goto cls;
        case m2c::kconvnumber: 	goto convnumber;
        case m2c::kconvnumdol: 	goto convnumdol;
        case m2c::kconvnumexit: 	goto convnumexit;
        case m2c::kconvnumloop: 	goto convnumloop;
        case m2c::kconvpdegdol: 	goto convpdegdol;
        case m2c::kdecworddol: 	goto decworddol;
        case m2c::kdonepdeg: 	goto donepdeg;
        case m2c::kdoneword: 	goto doneword;
        case m2c::kdrawrectangle: 	goto drawrectangle;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kfirstbitloop: 	goto firstbitloop;
        case m2c::kfoundfirstbit: 	goto foundfirstbit;
        case m2c::kfoundmode: 	goto foundmode;
        case m2c::kfoundstatusbit: 	goto foundstatusbit;
        case m2c::khexbytedol: 	goto hexbytedol;
        case m2c::khexworddol: 	goto hexworddol;
        case m2c::khexworddolloop: 	goto hexworddolloop;
        case m2c::kkeytestloop: 	goto keytestloop;
        case m2c::klibcode_0_proc: 	goto libcode_0_proc;
        case m2c::kliteralcopy: 	goto literalcopy;
        case m2c::kmodeprintloop: 	goto modeprintloop;
        case m2c::knextdata: 	goto nextdata;
        case m2c::kprintegaspace: 	goto printegaspace;
        case m2c::kquicksetup: 	goto quicksetup;
        case m2c::krepeatcopy: 	goto repeatcopy;
        case m2c::krunlendecode: 	goto runlendecode;
        case m2c::kselectloop: 	goto selectloop;
        case m2c::kselectmode: 	goto selectmode;
        case m2c::kskipfreespace: 	goto skipfreespace;
        case m2c::kskipkeytest: 	goto skipkeytest;
        case m2c::kskippdeg360: 	goto skippdeg360;
        case m2c::kskipprint: 	goto skipprint;
        case m2c::kstatusbitloop: 	goto statusbitloop;
        case m2c::ktestbitexit: 	goto testbitexit;
        case m2c::ktestbitstatus: 	goto testbitstatus;
        case m2c::ktestcntrtype: 	goto testcntrtype;
        case m2c::ktestfordataend: 	goto testfordataend;
        case m2c::kzdecworddol: 	goto zdecworddol;
        case m2c::kzeroword: 	goto zeroword;
        default: return __dispatch_call(__disp, _state);
    };
}

