/* THIS IS GENERATED FILE */

        
#include "vga_drvr.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    unsigned _wsn;
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
vga_vmode:
	// 643 
	/* mov	ah,0 		;service 0, set video mode */
	ah = 0;
edummylabel1:
	// 4369 
	/* mov	al,013h		;320 * 200, 256 colour */
	al = 0x013;
	/* int	010h		;BIOS */
	_INT(0x010);
	/* call	ResetMouse */
	CALLF(resetmouse, 0);
	/* mov	ax,VGA_PAGE_1 */
	ax = 0x0a400;
	/* mov	WorkScrPtr,ax */
	workscrptr = ax;
	/* mov	ax,VGA_PAGE_0 */
	ax = 0x0a000;
	/* mov	RealScrPtr,ax */
	realscrptr = ax;
	/* mov	ScreenPage,2 */
	screenpage = 2;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
	// 0 ;* change addressing mode of video memory to linear
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MEMMOD */
	al = 0x004;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 008h	;disable chain 4 */
	AND(al, ~0x008);
	/* or	al,004h		;disable odd/even */
	OR(al, 0x004);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 010h	;disable odd/even */
	AND(al, ~0x010);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MISC */
	al = 0x006;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 002h	;disable chain */
	AND(al, ~0x002);
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* now clear all of video memory so that the switch to linear is not messy
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* push	es */
	PUSH(es);
	/* mov	ax,VGA_PAGE_0 */
	ax = 0x0a000;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	cx,08000h */
	cx = 0x08000;
	/* xor	di,di */
	XOR(di, di);
	// 696 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* pop	es */
	POP(es);
	// 0 ;* change CRTC scanning from doubleword to byte mode
	/* mov	dx,VGA_CRTC */
	dx = 0x003d4;
	/* mov	al,VGA_CRTC_ULINE */
	al = 0x014;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 040h	;disable doubleword */
	AND(al, ~0x040);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CRTC */
	dx = 0x003d4;
	/* mov	al,VGA_CRTC_MODE */
	al = 0x017;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,040h		;enable byte mode */
	OR(al, 0x040);
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* reset fade 3 (internal fade) in case FadeOut used before setting video mode
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* ret */
	RETF(0);
vga_dload:
	// 740 
	// 0 ;* if fade params changed or (SetPaletteFlag = 1 and (FadeLevel1 <> 0 or FadeLevel2 <> 0)) then
	// 0 ;*    fade palette
	// 0 ;* end
edummylabel2:
	// 4371 
	/* mov	ax,FadeParams1 */
	ax = fadeparams1;
	/* mov	dx,FadeParams1+2 */
	dx = *(dw*)(((db*)&fadeparams1)+2);
	/* xchg	ax,_FadeParams1 */
	XCHG(ax, _fadeparams1);
	/* xchg	dx,_FadeParams1+2 */
	XCHG(dx, *(dw*)(((db*)&_fadeparams1)+2));
	/* cmp	ax,_FadeParams1 */
	CMP(ax, _fadeparams1);
	/* jne	ContFade */
	if ((dw)(ax) != (dw)(_fadeparams1)) {goto contfade;}
	/* cmp	dx,_FadeParams1+2 */
	CMP(dx, *(dw*)(((db*)&_fadeparams1)+2));
	/* jne	ContFade */
	if ((dw)(dx) != (dw)(*(dw*)(((db*)&_fadeparams1)+2))) {goto contfade;}
	/* mov	ax,FadeParams2 */
	ax = fadeparams2;
	/* mov	dx,FadeParams2+2 */
	dx = *(dw*)(((db*)&fadeparams2)+2);
	/* xchg	ax,_FadeParams2 */
	XCHG(ax, _fadeparams2);
	/* xchg	dx,_FadeParams2+2 */
	XCHG(dx, *(dw*)(((db*)&_fadeparams2)+2));
	/* cmp	ax,_FadeParams2 */
	CMP(ax, _fadeparams2);
	/* jne	ContFade */
	if ((dw)(ax) != (dw)(_fadeparams2)) {goto contfade;}
	/* cmp	dx,_FadeParams2+2 */
	CMP(dx, *(dw*)(((db*)&_fadeparams2)+2));
	/* jne	ContFade */
	if ((dw)(dx) != (dw)(*(dw*)(((db*)&_fadeparams2)+2))) {goto contfade;}
	/* test	SetPaletteFlag,1 */
	TEST(setpaletteflag, 1);
	/* jz	SkipFade */
	if (!(setpaletteflag & 1)) {goto skipfade;}
	/* cmp	FadeLevel1,0 */
	CMP(fadelevel1, 0);
	/* jne	ContFade */
	if ((dw)(fadelevel1) != (dw)(0)) {goto contfade;}
	/* cmp	FadeLevel2,0 */
	CMP(fadelevel2, 0);
	/* je	SkipFade */
	if ((dw)(fadelevel2) == (dw)(0)) {goto skipfade;}
contfade:
	// 4373 
	/* ContFade: 	call	FadePalette */
	CALLF(fadepalette, 0);
skipfade:
	// 4375 
	/* SkipFade:	mov	bx,FlipMode */
	bx = flipmode;
__disp=*(dw*)(((db*)&dloadmode)+bx);
	/* jmp	DLoadMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
dloadcopy:
	// 4377 
	// 0 ;---------------------------
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,RealScrPtr */
	ax = realscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si */
	XOR(si, si);
	/* xor	di,di */
	XOR(di, di);
	/* mov	cx,VGA_LINEADD*200 */
	cx = 80*200;
	// 798 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* jmp	SortPalette */
	goto sortpalette;
	// 0 ;---------------------------
dloadflip:
	// 4379 
	// 0 ;---------------------------
	/* cli */
	CLI;
	/* mov	ax,RealScrPtr */
	ax = realscrptr;
	/* xchg	ax,WorkScrPtr */
	XCHG(ax, workscrptr);
	/* mov	RealScrPtr,ax */
	realscrptr = ax;
	/* mov	bx,ScreenPage */
	bx = screenpage;
	/* mov	ax,VGAScrStart[bx] */
	ax = *(dw*)(((db*)vgascrstart)+bx);
	/* xchg	ax,bx */
	XCHG(ax, bx);
	/* xor	ax,10b		;0 <-> 2 */
	XOR(ax, 0x2);
	/* mov	ScreenPage,ax */
	screenpage = ax;
	/* mov	dx,VGA_CRTC */
	dx = 0x003d4;
	/* mov	al,VGA_CRTC_HI */
	al = 0x00c;
	/* mov	ah,bh */
	ah = bh;
	/* out	dx,ax */
	OUT(dx, ax);
	/* jmp 	$+2		;wait a few cycles */
	J({;});
	/* mov	al,VGA_CRTC_LO */
	al = 0x00d;
	/* mov	ah,bl */
	ah = bl;
	/* out	dx,ax */
	OUT(dx, ax);
	/* jmp	$+2		;wait a few cycles */
	J({;});
	// 0 ;----------------------------
	// 0 ;* reset horizontal pixel pan (ensure screen normalized at end of shake)
	// 0 ;----------------------------
	// 0 ;* clear flip-flop to allow attribute register index to be selected
	/* mov	dx,VGA_INPUT_1 */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	// 0 ;* select index for horizontal pixel panning register
	/* mov	dx,VGA_ATTR */
	dx = 0x003c0;
	/* mov	al,VGA_ATTR_HPAN */
	al = 0x033;
	/* out	dx,al */
	OUT(dx, al);
	/* xor	al,al */
	XOR(al, al);
	/* out	dx,al */
	OUT(dx, al);
	/* sti */
	STI;
	// 0 ;* start address is loaded at the start of v trace, so wait for v trace
vloop1:
	// 4381 
	/* VLoop1:	    	mov	dx,VGA_CRT_STAT ;make sure v trace is not occuring */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,VGA_VSYNC */
	TEST(al, 0x8);
	/* jnz	VLoop1 */
	if ((al & 0x8) != 0) {goto vloop1;}
vloop2:
	// 4383 
	/* VLoop2:		mov	dx,VGA_CRT_STAT	;wait for vertical retrace to occur */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	/* test 	al,VGA_VSYNC */
	TEST(al, 0x8);
	/* jz 	VLoop2 */
	if (!(al & 0x8)) {goto vloop2;}
	// 0 ;-----------------------------------------
	// 0 ;* load VGA palette registers if requested
	// 0 ;-----------------------------------------
sortpalette:
	// 4385 
	/* SortPalette:	mov	si,OFFSET VGA_RGB_Fade	;assume fade palette */
	si = m2c::near_offset_external(vga_rgb_fade);
	/* test	FadeFlag,1		;fade palette? */
	TEST(*(fadeflag), 1);
	/* jnz	@F			;yes -> */
	if ((*(fadeflag) & 1) != 0) {goto dummylabel1;}
	/* test	SetPaletteFlag,1	;load VGA palette registers? */
	TEST(setpaletteflag, 1);
	/* jz	SkipLoad      		;no -> */
	if (!(setpaletteflag & 1)) {goto skipload;}
	/* mov	si,OFFSET VGA_RGB_Data */
	si = m2c::near_offset_external(vga_rgb_data);
dummylabel1:
	// 4387 
	/* @@:		push	ds */
	PUSH(ds);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	al,al */
	XOR(al, al);
	/* mov	cx,256 */
	cx = 256;
	/* call	SetDACBlock */
	CALLF(setdacblock, 0);
	/* pop	ds */
	POP(ds);
	/* mov	SetPaletteFlag,0 */
	setpaletteflag = 0;
	/* mov	FadeFlag,0 */
	*(fadeflag) = 0;
skipload:
	// 4389 
	/* SkipLoad: 	ret */
	RETF(0);
vga_setpx:
	// 885 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel3:
	// 4391 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* call	VGA_CalcAddr	;es:di -> screen */
	CALL(vga_calcaddr, 0);
	/* mov 	si,cx */
	si = cx;
	/* and 	si,3 */
	AND(si, 3);
	/* mov 	al,ColMask[si] */
	al = *((&colmask)+si);
	/* out	dx,al		;set bit mask */
	OUT(dx, al);
	/* mov	al,PixelCol */
	al = pixelcol;
	/* stosb */
	{ STOSB; }
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
vga_line:
	// 915 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel4:
	// 4393 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* test for vertical and horizontal lines (use faster routines)
	/* cmp	cx,dx		;x1 = x2? */
	CMP(cx, dx);
	/* je	VLineLink	;yes, draw vertical line -> */
	if ((dw)(cx) == (dw)(dx)) {goto vlinelink;}
	/* cmp	bl,bh		;y1 = y2? */
	CMP(bl, bh);
	/* je	HLineLink	;yes, draw horizontal line -> */
	if ((db)(bl) == (db)(bh)) {goto hlinelink;}
	/* jb	NoSwap		;y1 < y2 -> */
	if ((db)(bl) < (db)(bh)) {goto noswap;}
	/* xchg	bl,bh */
	XCHG(bl, bh);
	/* xchg	cx,dx */
	XCHG(cx, dx);
noswap:
	// 4395 
	/* NoSwap:		sub	bh,bl		;bh = abs(Dy) */
	SUB(bh, bl);
	/* mov	di,bx */
	di = bx;
	/* and	di,000ffh	;di = y1 */
	AND(di, 0x000ff);
	/* xchg	bl,bh */
	XCHG(bl, bh);
	/* xor	bh,bh		;bx = abs(Dy) */
	XOR(bh, bh);
	/* xor	si,si		;jmp offset 0 */
	XOR(si, si);
	/* sub	dx,cx		;dx = Dx */
	SUB(dx, cx);
	/* rcl	si,1		;jmp offset = 1 if Dx < 0 */
	RCL(si, 1);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	dx,ax		;dx = abs(Dx) */
	dx = ax;
	/* cmp	bx,dx		;abs(Dx) > abs(Dy)? */
	CMP(bx, dx);
	/* rcl	si,1		;jmp offset * 2 + 1 if abs(Dx) > abs(Dy) */
	RCL(si, 1);
	/* shl	si,1		;jmp offset = 0, 2, 4, or 6 */
	SHL(si, 1);
	// 0 ;* bx = Dy
	// 0 ;* cx = x1
	// 0 ;* dx = Dx
	// 0 ;* di = y1
	// 0 ;* si = octant jump table offset
	/* shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* mov	bp,bx */
	bp = bx;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3 */
	AND(bx, 3);
	/* mov	ah,ColMask[bx] */
	ah = *((&colmask)+bx);
	/* mov	bx,bp */
	bx = bp;
	/* shr	cx,1		;/2 */
	SHR(cx, 1);
	/* shr	cx,1		;/4 */
	SHR(cx, 1);
	/* add	di,cx */
	ADD(di, cx);
	/* mov	bp,dx */
	bp = dx;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,ah */
	al = ah;
__disp=*(dw*)(((db*)&octtable)+si);
	/* jmp	OctTable[si]	;jump to octant routine */
	J(return __dispatch_call_ext(__disp, _state));
vlinelink:
	// 4397 
	/* VLineLink:	jmp	IntoVLine	;jump into VLine routine -> */
	goto intovline;
hlinelink:
	// 4399 
	/* HLineLink:	jmp	IntoHLine	;jump into HLine routine -> */
	goto intohline;
	// 0 ;* al = mask
	// 0 ;* bx = Dy
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di = screen ptr
	// 0 ;* bp = Dx
	// 0 ;* octant 1: Dx > 0, Dx > Dy
oct1:
	// 4401 
	/* Oct1:		mov	cx,bp */
	cx = bp;
	/* inc	cx		;count = Dx + 1 */
	INC(cx);
	/* mov	si,bp */
	si = bp;
	/* shr	si,1		;error = Dx / 2 */
	SHR(si, 1);
	/* adc	si,0		;1/2 bit round up */
	ADC(si, 0);
	/* xor	ah,ah		;clear x mask */
	XOR(ah, ah);
oct1lp:
	// 4403 
	/* Oct1Lp:		or	ah,al		;set x */
	OR(ah, al);
	/* dec	cx		;count = count - 1 */
	DEC(cx);
	/* jz	Oct1End		;count = 0 -> */
	if (cx == 0) {goto oct1end;}
	/* rol	al,1		;x = x + 1 */
	ROL(al, 1);
	/* jc	Oct1Ov		;overflow into next byte -> */
	if (CF) {goto oct1ov;}
oct1ok:
	// 4405 
	/* Oct1Ok:		sub	si,bx		;error = error - Dy */
	SUB(si, bx);
	/* ja	Oct1Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct1lp;}
	/* xchg	al,ah		;write accumulated x mask to screen */
	XCHG(al, ah);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* add	si,bp		;error = error + Dx */
	ADD(si, bp);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* jmp	Oct1Lp */
	goto oct1lp;
oct1end:
	// 4407 
	/* Oct1End:	mov	al,ah		;write accumulated x mask to screen */
	al = ah;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
oct1ov:
	// 4409 
	/* Oct1Ov:	 	xchg	al,ah		;write accumulated x mask to screen */
	XCHG(al, ah);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* inc	di */
	INC(di);
	/* jmp	Oct1Ok */
	goto oct1ok;
	// 0 ;* octant 2: Dx > 0, Dy > Dx
oct2:
	// 4411 
	/* Oct2:		mov	ah,LineCol */
	ah = linecol;
	/* mov	cx,bx */
	cx = bx;
	/* inc	cx		;count = Dy + 1 */
	INC(cx);
	/* mov	si,bx */
	si = bx;
	/* shr	si,1		;error = Dy / 2 */
	SHR(si, 1);
	/* adc	si,0		;1/2 bit round up */
	ADC(si, 0);
oct2lp:
	// 4413 
	/* Oct2Lp:		out	dx,al		;plot x, y */
	OUT(dx, al);
	/* mov	es:[di],ah */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(ah));
	/* dec	cx		;count = count - 1 */
	DEC(cx);
	/* jz	Oct2End		;exit if count = 0 */
	if (cx == 0) {goto oct2end;}
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* sub	si,bp		;error = error - Dx */
	SUB(si, bp);
	/* ja	Oct2Lp		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct2lp;}
	/* add	si,bx		;error = error + Dy */
	ADD(si, bx);
	/* rol	al,1		;x = x + 1 */
	ROL(al, 1);
	/* adc	di,0		;inc di if mask wrap around */
	ADC(di, 0);
	/* jmp	Oct2Lp */
	goto oct2lp;
oct2end:
	// 4415 
	/* Oct2End:        pop	es */
	POP(es);
	/* ret */
	RETF(0);
	// 0 ;* octant 7: Dx < 0, Dy > Dx
oct7:
	// 4417 
	/* Oct7:		mov	ah,LineCol */
	ah = linecol;
	/* mov	cx,bx */
	cx = bx;
	/* inc	cx		;count = Dy + 1 */
	INC(cx);
	/* mov	si,bx */
	si = bx;
	/* shr	si,1		;error = Dy / 2 */
	SHR(si, 1);
	/* adc	si,0		;1/2 bit round up */
	ADC(si, 0);
oct7lp:
	// 4419 
	/* Oct7Lp:		out	dx,al		;plot x, y */
	OUT(dx, al);
	/* mov	es:[di],ah */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(ah));
	/* dec	cx		;count = count - 1 */
	DEC(cx);
	/* jz	Oct7End		;exit if count = 0 */
	if (cx == 0) {goto oct7end;}
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* sub	si,bp		;error = error - Dx */
	SUB(si, bp);
	/* ja	Oct7Lp		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct7lp;}
	/* add	si,bx		;error = error + Dy */
	ADD(si, bx);
	/* ror	al,1		;x = x - 1 */
	ROR(al, 1);
	/* sbb	di,0		;dec di if mask wrap around */
	SBB(di, 0);
	/* jmp	Oct7Lp */
	goto oct7lp;
oct7end:
	// 4421 
	/* Oct7End:	pop	es */
	POP(es);
	/* ret */
	RETF(0);
	// 0 ;* octant 8: Dx < 0, Dx > Dy
oct8:
	// 4423 
	/* Oct8:		mov	cx,bp */
	cx = bp;
	/* inc	cx		;count = Dx + 1 */
	INC(cx);
	/* mov	si,bp */
	si = bp;
	/* shr	si,1		;error = Dx / 2 */
	SHR(si, 1);
	/* adc	si,0		;1/2 bit round up */
	ADC(si, 0);
	/* xor	ah,ah		;clear x mask */
	XOR(ah, ah);
oct8lp:
	// 4425 
	/* Oct8Lp:		or	ah,al		;set x */
	OR(ah, al);
	/* dec	cx		;count = count - 1 */
	DEC(cx);
	/* jz	Oct8End		;count = 0 -> */
	if (cx == 0) {goto oct8end;}
	/* ror	al,1		;x = x - 1 */
	ROR(al, 1);
	/* jc	Oct8Ov		;overflow into next byte -> */
	if (CF) {goto oct8ov;}
oct8ok:
	// 4427 
	/* Oct8Ok:		sub	si,bx		;error = error - Dy */
	SUB(si, bx);
	/* ja	Oct8Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct8lp;}
	/* xchg	al,ah		;write accumulated x mask to screen */
	XCHG(al, ah);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* add	si,bp		;error = error + Dx */
	ADD(si, bp);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* jmp	Oct8Lp */
	goto oct8lp;
oct8end:
	// 4429 
	/* Oct8End:	mov	al,ah		;write accumulated x mask to screen */
	al = ah;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
oct8ov:
	// 4431 
	/* Oct8Ov:	 	xchg	al,ah		;write accumulated x mask to screen */
	XCHG(al, ah);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,LineCol */
	al = linecol;
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* dec	di */
	DEC(di);
	/* jmp	Oct8Ok */
	goto oct8ok;
vga_vline:
	// 1113 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel5:
	// 4433 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
intovline:
	// 4435 
	/* IntoVLine:	cmp	bl,bh		;y1 <= y2? */
	CMP(bl, bh);
	/* jbe	VLineYOk	;yes, co-ords ok -> */
	if ((db)(bl) <= (db)(bh)) {goto vlineyok;}
	/* xchg	bl,bh */
	XCHG(bl, bh);
vlineyok:
	// 4437 
	/* VLineYOk:	mov	di,bx */
	di = bx;
	/* and	di,000ffh	;di = y1 */
	AND(di, 0x000ff);
	/* sub	bh,bl		;bh = y2 - y1 */
	SUB(bh, bl);
	/* mov	bl,bh */
	bl = bh;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* inc	bx		;count = (y2 - y1) + 1 */
	INC(bx);
	/* mov	bp,bx */
	bp = bx;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3 */
	AND(bx, 3);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,ColMask[bx] */
	al = *((&colmask)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* shr	cx,1		;/2 */
	SHR(cx, 1);
	/* shr	cx,1		;/4 */
	SHR(cx, 1);
	/* add	di,cx		;y * 80 + x / 4 */
	ADD(di, cx);
	/* mov	cx,bp */
	cx = bp;
	/* mov	bp,VGA_LINEADD-1 */
	bp = 80-1;
	/* mov	al,LineCol */
	al = linecol;
vlineloop:
	// 4439 
	/* VLineLoop:	stosb */
	{ STOSB; }
	/* add	di,bp */
	ADD(di, bp);
	/* loop	VLineLoop */
	LOOP(vlineloop);
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
vga_hline:
	// 1168 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel6:
	// 4441 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
intohline:
	// 4443 
	/* IntoHLine:	cmp	cx,dx		;x1 <= x2? */
	CMP(cx, dx);
	/* jbe	HLineXOk	;yes, co-ords ok -> */
	if ((dw)(cx) <= (dw)(dx)) {goto hlinexok;}
	/* xchg	cx,dx */
	XCHG(cx, dx);
hlinexok:
	// 4445 
	/* HLineXOk:   	mov	bp,dx */
	bp = dx;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	di,bx */
	di = bx;
	/* and	di,000ffh */
	AND(di, 0x000ff);
	/* shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* mov	ax,cx */
	ax = cx;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y * 80 + x / 4 */
	ADD(di, ax);
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,LineCol */
	ah = linecol;
	/* js	ShortHLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shorthline;}
	/* mov	al,LMask[bx]	;mask in lh line end */
	al = *((&lmask)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,1111b	;fill line middle */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1215 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,RMask[si]	;mask in rh line end */
	al = *((&rmask)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
hlineexit:
	// 4447 
	/* HLineExit:	pop	es */
	POP(es);
	/* ret */
	RETF(0);
	// 0 ;* short horizontal line draw (exception)
shorthline:
	// 4449 
	/* ShortHLine:	mov	al,LMask[bx] */
	al = *((&lmask)+bx);
	/* and	al,RMask[si] */
	AND(al, *((&rmask)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	HLineExit */
	goto hlineexit;
vga_pfill:
	// 1242 
	/* push	si ;*       VGA_SEQ_MAPMSK */
	PUSH(si);
edummylabel7:
	// 4451 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	bx,MinY */
	bx = miny;
	/* mov	cx,MaxY */
	cx = maxy;
	/* sub	cx,bx */
	SUB(cx, bx);
	/* inc	cx		;cx = number of lines */
	INC(cx);
	{static int _pfd=-1;if(_pfd<0)_pfd=getenv("M2C_PFILL")?1:0;if(_pfd){int _l=(int)(int16_t)(*(dw*)(((db*)&lhsx)+((int)miny*2)));int _r=(int)(int16_t)(*(dw*)(((db*)&rhsx)+((int)miny*2)));fprintf(stderr,"[PFILL] miny=%d maxy=%d nlines=%d L=%d R=%d w=%d fillcol=%d work=%04x real=%04x\n",(int)(int16_t)miny,(int)(int16_t)maxy,(int)cx,_l,_r,_r-_l,(int)fillcol,(int)workscrptr,(int)realscrptr);}}
	/* shl	bx,1		;bx = x table index */
	SHL(bx, 1);
	/* mov	di,bx */
	di = bx;
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;*80 */
	ADD(di, ax);
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextfillline:
	// 4453 
	/* NextFillLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixPoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixpoints;}
pointsfixed:
	// 4455 
	/* PointsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortline;}
	/* mov	al,LMask[bx]	;mask in lh line end */
	al = *((&lmask)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,1111b	;fill line middle */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1301 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,RMask[si]	;mask in rh line end */
	al = *((&rmask)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
fillendloop:
	// 4457 
	/* FillEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* loop	NextFillLine */
	LOOP(nextfillline);
	/* pop	es */
	POP(es);
	/* pop	si */
	POP(si);
	/* ret */
	RETF(0);
	// 0 ;* lh x > rh x error condition (exception)
fixpoints:
	// 4459 
	/* FixPoints:	mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	PointsFixed */
	goto pointsfixed;
	// 0 ;* short line draw (exception)
shortline:
	// 4461 
	/* ShortLine:	mov	al,LMask[bx] */
	al = *((&lmask)+bx);
	/* and	al,RMask[si] */
	AND(al, *((&rmask)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	FillEndLoop */
	goto fillendloop;
vga_mfill:
	// 1343 
	/* push	si ;*       VGA_SEQ_MAPMSK */
	PUSH(si);
edummylabel8:
	// 4463 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	bx,MinY */
	bx = miny;
	/* mov	cx,MaxY */
	cx = maxy;
	/* sub	cx,bx */
	SUB(cx, bx);
	/* inc	cx		;cx = number of lines */
	INC(cx);
	/* shl	bx,1		;bx = x table index */
	SHL(bx, 1);
	/* mov	di,bx */
	di = bx;
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;*80 */
	ADD(di, ax);
	/* test	bx,0010b	;start on even or odd hatch? */
	TEST(bx, 0x2);
	/* jz	NextEMeshLine	;even hatch -> */
	if (!(bx & 0x2)) {goto nextemeshline;}
	/* jmp	NextOMeshLine	;odd hatch -> */
	goto nextomeshline;
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextemeshline:
	// 4465 
	/* NextEMeshLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixEMeshPoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixemeshpoints;}
emeshptsfixed:
	// 4467 
	/* EMeshPtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortEMeshLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortemeshline;}
	/* mov	al,EHatchLMask[bx] */
	al = *((&ehatchlmask)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,EVEN_HATCH */
	al = 0xa;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1405 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,EHatchRMask[si] */
	al = *((&ehatchrmask)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
emeshendloop:
	// 4469 
	/* EMeshEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jnz	NextOMeshLine */
	if (cx != 0) {goto nextomeshline;}
	/* jmp	MeshFillExit */
	goto meshfillexit;
	// 0 ;* lh x > rh x error condition (exception)
fixemeshpoints:
	// 4471 
	/* FixEMeshPoints:	mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	EMeshPtsFixed */
	goto emeshptsfixed;
	// 0 ;* short line draw (exception)
shortemeshline:
	// 4473 
	/* ShortEMeshLine:	mov	al,EHatchLMask[bx] */
	al = *((&ehatchlmask)+bx);
	/* and	al,EHatchRMask[si] */
	AND(al, *((&ehatchrmask)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	EMeshEndLoop */
	goto emeshendloop;
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextomeshline:
	// 4475 
	/* NextOMeshLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixOMeshPoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixomeshpoints;}
omeshptsfixed:
	// 4477 
	/* OMeshPtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortOMeshLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortomeshline;}
	/* mov	al,OHatchLMask[bx] */
	al = *((&ohatchlmask)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,ODD_HATCH */
	al = 0x5;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1470 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,OHatchRMask[si] */
	al = *((&ohatchrmask)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
omeshendloop:
	// 4479 
	/* OMeshEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jz	MeshFillExit */
	if (cx == 0) {goto meshfillexit;}
	/* jmp	NextEMeshLine */
	goto nextemeshline;
	// 0 ;* lh x > rh x error condition (exception)
fixomeshpoints:
	// 4481 
	/* FixOMeshPoints:	mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	OMeshPtsFixed */
	goto omeshptsfixed;
	// 0 ;* short line draw (exception)
shortomeshline:
	// 4483 
	/* ShortOMeshLine:	mov	al,OHatchLMask[bx] */
	al = *((&ohatchlmask)+bx);
	/* and	al,OHatchRMask[si] */
	AND(al, *((&ohatchrmask)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	OMeshEndLoop */
	goto omeshendloop;
meshfillexit:
	// 4485 
	/* MeshFillExit:	pop	es */
	POP(es);
	/* pop	si */
	POP(si);
	/* ret */
	RETF(0);
vga_sfill:
	// 1514 
	/* push	si ;*       VGA_SEQ_MAPMSK */
	PUSH(si);
edummylabel9:
	// 4487 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	bx,MinY */
	bx = miny;
	/* mov	cx,MaxY */
	cx = maxy;
	/* sub	cx,bx */
	SUB(cx, bx);
	/* inc	cx		;cx = number of lines */
	INC(cx);
	/* shl	bx,1		;bx = x table index */
	SHL(bx, 1);
	/* mov	di,bx */
	di = bx;
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;*80 */
	ADD(di, ax);
	// 0 ;--------------------------------------
	// 0 ;--------------------------------------
	// 0 ;* select pattern 1 or pattern 2 wrt odd or even colour
	/* mov	al,FillCol */
	al = fillcol;
	/* and	ax,0001b */
	AND(ax, 0x1);
	// 0 ;* select odd or even hatch wrt start y
	/* mov	si,bx */
	si = bx;
	/* and	si,0010b */
	AND(si, 0x2);
	// 0 ;* combine
	/* add	si,ax */
	ADD(si, ax);
	/* shl	si,1 */
	SHL(si, 1);
__disp=*(dw*)(((db*)&smokestart)+si);
	/* jmp	SmokeStart[si] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;-----------------------------------
	// 0 ;* >>>>> SMOKE HATCH PATTERN 1 <<<<<
	// 0 ;-----------------------------------
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextesmokeline:
	// 4489 
	/* NextESmokeLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixESmokePoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixesmokepoints;}
esmokeptsfixed:
	// 4491 
	/* ESmokePtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortESmokeLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortesmokeline;}
	/* mov	al,ESmokeLMask1[bx] */
	al = *((&esmokelmask1)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,EVEN_SMOKE1 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1594 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,ESmokeRMask1[si] */
	al = *((&esmokermask1)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
esmokeendloop:
	// 4493 
	/* ESmokeEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jnz	NextOSmokeLine */
	if (cx != 0) {goto nextosmokeline;}
	/* jmp	SmokeFillExit */
	goto smokefillexit;
	// 0 ;* lh x > rh x error condition (exception)
fixesmokepoints:
	// 4495 
	/* FixESmokePoints:mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	ESmokePtsFixed */
	goto esmokeptsfixed;
	// 0 ;* short line draw (exception)
shortesmokeline:
	// 4497 
	/* ShortESmokeLine:mov	al,ESmokeLMask1[bx] */
	al = *((&esmokelmask1)+bx);
	/* and	al,ESmokeRMask1[si] */
	AND(al, *((&esmokermask1)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	ESmokeEndLoop */
	goto esmokeendloop;
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextosmokeline:
	// 4499 
	/* NextOSmokeLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixOSmokePoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixosmokepoints;}
osmokeptsfixed:
	// 4501 
	/* OSmokePtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortOSmokeLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortosmokeline;}
	/* mov	al,OSmokeLMask1[bx] */
	al = *((&osmokelmask1)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,ODD_SMOKE1 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1659 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,OSmokeRMask1[si] */
	al = *((&osmokermask1)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
osmokeendloop:
	// 4503 
	/* OSmokeEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jz	SmokeFillExit */
	if (cx == 0) {goto smokefillexit;}
	/* jmp	NextESmokeLine */
	goto nextesmokeline;
	// 0 ;* lh x > rh x error condition (exception)
fixosmokepoints:
	// 4505 
	/* FixOSmokePoints:mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	OSmokePtsFixed */
	goto osmokeptsfixed;
	// 0 ;* short line draw (exception)
shortosmokeline:
	// 4507 
	/* ShortOSmokeLine:mov	al,OSmokeLMask1[bx] */
	al = *((&osmokelmask1)+bx);
	/* and	al,OSmokeRMask1[si] */
	AND(al, *((&osmokermask1)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	OSmokeEndLoop */
	goto osmokeendloop;
smokefillexit:
	// 4509 
	/* SmokeFillExit:	pop	es */
	POP(es);
	/* pop	si */
	POP(si);
	/* ret */
	RETF(0);
	// 0 ;-----------------------------------
	// 0 ;* >>>>> SMOKE HATCH PATTERN 2 <<<<<
	// 0 ;-----------------------------------
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextesmkline:
	// 4511 
	/* NextESmkLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixESmkPoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixesmkpoints;}
esmkptsfixed:
	// 4513 
	/* ESmkPtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortESmkLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortesmkline;}
	/* mov	al,ESmokeLMask2[bx] */
	al = *((&esmokelmask2)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,EVEN_SMOKE2 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1731 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,ESmokeRMask2[si] */
	al = *((&esmokermask2)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
esmkendloop:
	// 4515 
	/* ESmkEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jnz	NextOSmkLine */
	if (cx != 0) {goto nextosmkline;}
	/* jmp	SmkFillExit */
	goto smkfillexit;
	// 0 ;* lh x > rh x error condition (exception)
fixesmkpoints:
	// 4517 
	/* FixESmkPoints:	mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	ESmkPtsFixed */
	goto esmkptsfixed;
	// 0 ;* short line draw (exception)
shortesmkline:
	// 4519 
	/* ShortESmkLine:	mov	al,ESmokeLMask2[bx] */
	al = *((&esmokelmask2)+bx);
	/* and	al,ESmokeRMask2[si] */
	AND(al, *((&esmokermask2)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	ESmkEndLoop */
	goto esmkendloop;
	// 0 ;* bx = x table index
	// 0 ;* cx = number of lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* di -> screen (x = 0)
nextosmkline:
	// 4521 
	/* NextOSmkLine:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	ax,RhsX[bx] */
	ax = *(dw*)(((db*)&rhsx)+bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,LhsX[bx] */
	ax = *(dw*)(((db*)&lhsx)+bx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,cx */
	bx = cx;
	/* and	bx,3		;lhs byte disp */
	AND(bx, 3);
	/* mov	si,bp */
	si = bp;
	/* and	si,3		;rhs byte disp */
	AND(si, 3);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* ja	FixOSmkPoints	;error lh x > rh x -> */
	if ((!CF && !ZF)) {goto fixosmkpoints;}
osmkptsfixed:
	// 4523 
	/* OSmkPtsFixed:	neg	cx */
	NEG(cx);
	/* add	cx,bx		;trim off lh side */
	ADD(cx, bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* sub	cx,si		;trim off rh side */
	SUB(cx, si);
	/* mov	bp,di		;save screen address */
	bp = di;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y + x / 4 */
	ADD(di, ax);
	/* sar	cx,1		;4 pixels / byte */
	SAR(cx, 1);
	/* sar	cx,1		;cx = number of whole bytes to fill */
	SAR(cx, 1);
	/* mov	ah,FillCol */
	ah = fillcol;
	/* js	ShortOSmkLine	;cx < 0 = short line -> */
	if ((short)(cx) < 0) {goto shortosmkline;}
	/* mov	al,OSmokeLMask2[bx] */
	al = *((&osmokelmask2)+bx);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* mov	al,ODD_SMOKE2 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	// 1796 rep	stosb
	/* rep	stosb */
	REP STOSB;
	/* mov	al,OSmokeRMask2[si] */
	al = *((&osmokermask2)+si);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
osmkendloop:
	// 4525 
	/* OSmkEndLoop:	mov	di,bp		;restore screen address */
	di = bp;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next table index */
	ADD(bx, 2);
	/* add	di,VGA_LINEADD	;y = y + 1 */
	ADD(di, 80);
	/* dec	cx */
	DEC(cx);
	/* jz	SmkFillExit */
	if (cx == 0) {goto smkfillexit;}
	/* jmp	NextESmkLine */
	goto nextesmkline;
	// 0 ;* lh x > rh x error condition (exception)
fixosmkpoints:
	// 4527 
	/* FixOSmkPoints:	mov	cx,ax		;cx = lh x */
	cx = ax;
	/* xchg	cx,bp		;swap lh x, rh x */
	XCHG(cx, bp);
	/* mov	ax,cx		;ax = lh x */
	ax = cx;
	/* xchg	bx,si		;swap lh disp, rh disp */
	XCHG(bx, si);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* jmp	OSmkPtsFixed */
	goto osmkptsfixed;
	// 0 ;* short line draw (exception)
shortosmkline:
	// 4529 
	/* ShortOSmkLine:	mov	al,OSmokeLMask2[bx] */
	al = *((&osmokelmask2)+bx);
	/* and	al,OSmokeRMask2[si] */
	AND(al, *((&osmokermask2)+si));
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* jmp	OSmkEndLoop */
	goto osmkendloop;
smkfillexit:
	// 4531 
	/* SmkFillExit:	pop	es */
	POP(es);
	/* pop	si */
	POP(si);
	/* ret */
	RETF(0);
vga_calcaddr:
	// 1838 
	/* mov	al,bl ;* kill: ax, flags */
	al = bl;
edummylabel10:
	// 4533 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1   	     	;*16 */
	SHL(ax, 1);
	/* mov	di,ax */
	di = ax;
	/* shl	ax,1		;*32 */
	SHL(ax, 1);
	/* shl	ax,1		;*64 */
	SHL(ax, 1);
	/* add	di,ax		;*80 */
	ADD(di, ax);
	/* mov	ax,cx */
	ax = cx;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax */
	ADD(di, ax);
	/* ret */
	RETN(0);
vga_prtc1:
	// 1872 
	/* push	ax ;*       No checks are made for PrtLn and PrtCl being off screen. */
	PUSH(ax);
edummylabel11:
	// 4535 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* sub	al,' '		;character set starts with space */
	SUB(al, ' ');
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	si,ax		;si = char * 9 */
	ADD(si, ax);
	/* add	si,CharSetPtr1	;si -> char pattern data */
	ADD(si, charsetptr1);
	/* mov	bl,BYTE PTR PrtLn */
	bl = *(db*)(&prtln);
	/* mov	cx,PrtCl */
	cx = prtcl;
	/* call	VGA_CalcAddr 	;di -> screen */
	CALL(vga_calcaddr, 0);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	bx,OFFSET FlipNibble */
	bx = m2c::near_offset_external(flipnibble);
	/* mov	cx,9 */
	cx = 9;
	/* mov	bp,WORD PTR PrintOver */
	bp = *(dw*)(&printover);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
prtc1loop:
	// 4537 
	/* PrtC1Loop:	test	bp,bp		;print "over" mode? */
	TEST(bp, bp);
	/* jnz	PrtC1Over	;yes -> */
	if ((bp & bp) != 0) {goto prtc1over;}
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x00f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,BackCol */
	al = backcol;
	/* stosb */
	{ STOSB; }
	/* stosb */
	{ STOSB; }
	/* sub	di,2		;restore screen address */
	SUB(di, 2);
prtc1over:
	// 4539 
	/* PrtC1Over:	lodsb			;fetch char pattern data */
	{ LODSB; }
	/* mov	ah,al */
	ah = al;
	/* shr	al,1		;require data in high nibble */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ForeCol */
	al = forecol;
	/* stosb */
	{ STOSB; }
	/* xchg	al,ah */
	XCHG(al, ah);
	/* and	al,00fh		;require data in low nibble */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* add	di,VGA_LINEADD-2;next line */
	ADD(di, 80-2);
	/* loop	PrtC1Loop */
	LOOP(prtc1loop);
prtc1exit:
	// 4541 
	/* PrtC1Exit:	add	PrtCl,8		;next column */
	ADD(prtcl, 8);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
vga_prtc2:
	// 1955 
	/* push	ax ;*       Optimized for speed (inline code). */
	PUSH(ax);
edummylabel12:
	// 4543 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* sub	al,' '		;character set starts with space */
	SUB(al, ' ');
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	si,ax		;si = char * 5 */
	ADD(si, ax);
	/* add	si,CharSetPtr2	;si -> char pattern data */
	ADD(si, charsetptr2);
	/* mov	bl,BYTE PTR PrtLn */
	bl = *(db*)(&prtln);
	/* mov	cx,PrtCl */
	cx = prtcl;
	/* call	VGA_CalcAddr 	;di -> screen */
	CALL(vga_calcaddr, 0);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	bx,OFFSET FlipNibble */
	bx = m2c::near_offset_external(flipnibble);
	/* mov	cl,ForeCol */
	cl = forecol;
	/* mov	ch,BackCol */
	ch = backcol;
	/* mov	bp,VGA_LINEADD-1 */
	bp = 80-1;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,PrintOver */
	al = printover;
	/* test	al,al	     	;print over? */
	TEST(al, al);
	/* jz	VGA_PrtC2Norm	;no -> */
	if (!(al & al)) {goto vga_prtc2norm;}
	// 0 ;* inline print
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* jmp	VGA_PrtC2Com */
	goto vga_prtc2com;
	// 0 ;* inline print
vga_prtc2norm:
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x0f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ch		;fetch background colour */
	al = ch;
	/* stosb			;set background pixels */
	{ STOSB; }
	/* dec	di		;restore screen address */
	DEC(di);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x0f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ch		;fetch background colour */
	al = ch;
	/* stosb			;set background pixels */
	{ STOSB; }
	/* dec	di		;restore screen address */
	DEC(di);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x0f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ch		;fetch background colour */
	al = ch;
	/* stosb			;set background pixels */
	{ STOSB; }
	/* dec	di		;restore screen address */
	DEC(di);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x0f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ch		;fetch background colour */
	al = ch;
	/* stosb			;set background pixels */
	{ STOSB; }
	/* dec	di		;restore screen address */
	DEC(di);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* mov	al,00fh		;set all pixels to background colour */
	al = 0x0f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ch		;fetch background colour */
	al = ch;
	/* stosb			;set background pixels */
	{ STOSB; }
	/* dec	di		;restore screen address */
	DEC(di);
	/* lodsb			;al = char pattern data */
	{ LODSB; }
	/* and	al,00fh		;clear unwanted bits */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al		;set foreground pixels to update */
	OUT(dx, al);
	/* mov	al,cl		;fetch foreground colour */
	al = cl;
	/* stosb			;set foreground pixels */
	{ STOSB; }
	/* add	di,bp		;next line */
	ADD(di, bp);
vga_prtc2com:
	// 4547 
	/* VGA_PrtC2Com:	add	PrtCl,4		;next column */
	ADD(prtcl, 4);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
vga_prtc3:
	// 2089 
	/* push	ax ;*       No checks are made for PrtLn and PrtCl being off screen. */
	PUSH(ax);
edummylabel13:
	// 4549 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* sub	al,' '		;character set starts with space */
	SUB(al, ' ');
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	si,ax		;si = char * 9 */
	ADD(si, ax);
	/* add	si,CharSetPtr3	;si -> char pattern data */
	ADD(si, charsetptr3);
	/* mov	bl,BYTE PTR PrtLn */
	bl = *(db*)(&prtln);
	/* mov	cx,PrtCl */
	cx = prtcl;
	/* call	VGA_CalcAddr 	;di -> screen */
	CALL(vga_calcaddr, 0);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	bx,OFFSET FlipNibble */
	bx = m2c::near_offset_external(flipnibble);
	/* mov	cx,9 */
	cx = 9;
	// 0 ;* bp flags: b0 = 1 = print over
	// 0 ;*           b1 = 1 = 2 pixel offset
	/* mov	bp,PrtCl */
	bp = prtcl;
	/* and	bp,0010b */
	AND(bp, 0x2);
	/* or	bp,WORD PTR PrintOver */
	OR(bp, *(dw*)(&printover));
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
prtc3loop:
	// 4551 
	/* PrtC3Loop:	test	bp,0001b	;print "over" mode? */
	TEST(bp, 0x1);
	/* jnz	PrtC3Over	;yes -> */
	if ((bp & 0x1) != 0) {goto prtc3over;}
	/* test	bp,0010b	;2 pixel offset? */
	TEST(bp, 0x2);
	/* jz	@F		;no -> */
	if (!(bp & 0x2)) {goto dummylabel2;}
	/* mov	al,00ch		;set all pixels to background colour */
	al = 0x00c;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,BackCol */
	al = backcol;
	/* stosb */
	{ STOSB; }
	/* mov	al,00fh */
	al = 0x00f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,BackCol */
	al = backcol;
	/* stosb */
	{ STOSB; }
	/* sub	di,2		;restore screen address */
	SUB(di, 2);
	/* jmp	PrtC3Over */
	goto prtc3over;
dummylabel2:
	// 4553 
	/* @@:  		mov	al,00fh		;set all pixels to background colour */
	al = 0x00f;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,BackCol */
	al = backcol;
	/* stosb */
	{ STOSB; }
	/* mov	al,003h */
	al = 0x003;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,BackCol */
	al = backcol;
	/* stosb */
	{ STOSB; }
	/* sub	di,2		;restore screen address */
	SUB(di, 2);
prtc3over:
	// 4555 
	/* PrtC3Over:	lodsb			;fetch char pattern data */
	{ LODSB; }
	/* test	bp,0010b	;2 pixel offset? */
	TEST(bp, 0x2);
	/* jz	@F		;no -> */
	if (!(bp & 0x2)) {goto dummylabel3;}
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
dummylabel3:
	// 4557 
	/* @@:		mov	ah,al */
	ah = al;
	/* shr	al,1		;require data in high nibble */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ForeCol */
	al = forecol;
	/* stosb */
	{ STOSB; }
	/* xchg	al,ah */
	XCHG(al, ah);
	/* and	al,00fh		;require data in low nibble */
	AND(al, 0x00f);
	/* xlat			;reverse bits */
	XLAT;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah */
	al = ah;
	/* stosb */
	{ STOSB; }
	/* add	di,VGA_LINEADD-2;next line */
	ADD(di, 80-2);
	/* loop	PrtC3Loop */
	LOOP(prtc3loop);
prtc3exit:
	// 4559 
	/* PrtC3Exit:	add	PrtCl,6		;next column */
	ADD(prtcl, 6);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
gcode_0_proc:
	// 2189 
sspriteout:
	// 4561 
	/* SSpriteOut:	pop	ds		 ;* note: x co-ord is rounded to even pixel. */
	POP(ds);
	/* pop	ax */
	POP(ax);
	/* pop	ax */
	POP(ax);
	/* clc			;exception - sprite not visible */
	CLC;
	/* jmp	SSpriteExit */
	goto sspriteexit;
vga_ssprite:
	// 2194 
	/* push	ds */
	PUSH(ds);
edummylabel14:
	// 4563 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	// 0 ;* fetch logical data
	/* lodsw */
	{ LODSW; }
	/* mov	bp,ax		;x */
	bp = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	di,ax		;y */
	di = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	si,ax		;ptr */
	si = ax;
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG SSpriteID */
	ax = m2c::segment_of_external(sspriteid);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* fetch ptr to physical data from list
	/* mov	si,[si] */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	// 0 ;* fetch physical data
	/* lodsw */
	{ LODSW; }
	/* mov	cx,ax		;width in bytes (/4) */
	cx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	dx,ax		;depth */
	dx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax		;size */
	bx = ax;
	/* push	ax */
	PUSH(ax);
	/* lodsw */
	{ LODSW; }
	/* add	bp,ax		;x offset */
	ADD(bp, ax);
	/* lodsw */
	{ LODSW; }
	/* add	di,ax		;y offset */
	ADD(di, ax);
	/* lodsw */
	{ LODSW; }
	/* push	ax		;mask colour */
	PUSH(ax);
	// 0 ;* if 2 pixel offset then use shifted sprite
	/* test	bp,0010b	;2 pixel offset */
	TEST(bp, 0x2);
	/* jz	OffsetOk	;no, use unshifted sprite -> */
	if (!(bp & 0x2)) {goto offsetok;}
	/* inc	cx		;width + 1 */
	INC(cx);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;size * 4 */
	SHL(bx, 1);
	/* add	si,bx		;si -> shifted data */
	ADD(si, bx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	ax,dx	    	;modify size on stack */
	ADD(ax, dx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
offsetok:
	// 4565 
	/* OffsetOk:	sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;x byte offset */
	SAR(bp, 1);
	// 0 ;* cx = width (bytes)
	// 0 ;* dx = depth
	// 0 ;* bp = x byte offset
	// 0 ;* di = y
	// 0 ;*
	// 0 ;* ds:si -> sprite mask / pattern data
	// 0 ;*
	// 0 ;* stack: ds
	// 0 ;*        es
	// 0 ;*        size
	// 0 ;* (top): mask col
	// 0 ;* test if sprite is visible
contbsprite:
	// 4567 
	/* ContBSprite:	push	ds */
	PUSH(ds);
	/* mov	ax,SEG ClipXMin */
	ax = m2c::segment_of_external(clipxmin);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ax,di		;y */
	ax = di;
	/* cmp	ax,ClipYMax	;y <= y max? */
	CMP(ax, clipymax);
	/* jg	SSpriteOut	;no -> */
	if ((short)(ax) > (short)(clipymax)) {goto sspriteout;}
	/* add	ax,dx		;y + depth */
	ADD(ax, dx);
	/* dec	ax		;y + depth - 1 */
	DEC(ax);
	/* cmp	ax,ClipYMin	;(y + depth - 1) >= y min? */
	CMP(ax, clipymin);
	/* jl	SSpriteOut	;no -> */
	if ((short)(ax) < (short)(clipymin)) {goto sspriteout;}
	/* mov	ax,bp		;x */
	ax = bp;
	/* cmp	ax,ClipXMax	;x <= x max? */
	CMP(ax, clipxmax);
	/* jg	SSpriteOut	;no -> */
	if ((short)(ax) > (short)(clipxmax)) {goto sspriteout;}
	/* add	ax,cx		;x + width */
	ADD(ax, cx);
	/* dec	ax		;x + width - 1 */
	DEC(ax);
	/* cmp	ax,ClipXMin	;(x + width - 1) >= x min? */
	CMP(ax, clipxmin);
	/* jl	SSpriteOut	;no -> */
	if ((short)(ax) < (short)(clipxmin)) {goto sspriteout;}
	// 0 ;* if above - reduce depth and modify ptr
aboveclip:
	// 4569 
	/* AboveClip:	mov	ax,ClipYMin */
	ax = clipymin;
	/* cmp	di,ax		;y < y min? */
	CMP(di, ax);
	/* jge	BelowClip	;no -> */
	if ((short)(di) >= (short)(ax)) {goto belowclip;}
	/* mov	bx,ax		;y min */
	bx = ax;
	/* xchg	ax,di		;di = y = y min, ax = original y */
	XCHG(ax, di);
	/* sub	bx,ax		;y min - y */
	SUB(bx, ax);
	/* sub	dx,bx		;depth = depth - (y min - y) */
	SUB(dx, bx);
	/* mov	ax,cx		;width */
	ax = cx;
	/* xchg	bx,dx		;preserve depth */
	XCHG(bx, dx);
	/* mul	dx		;(y min - y) * width */
	MUL1_2(dx);
	/* xchg	bx,dx		;restore depth */
	XCHG(bx, dx);
	/* add	si,ax		;ptr = ptr + (y min - y) * width */
	ADD(si, ax);
	// 0 ;* if below - reduce depth
belowclip:
	// 4571 
	/* BelowClip:	mov	ax,di		;y */
	ax = di;
	/* add	ax,dx		;y + depth */
	ADD(ax, dx);
	/* dec 	ax		;y + depth - 1 */
	DEC(ax);
	/* cmp	ax,ClipYMax	;(y + depth - 1) > y max */
	CMP(ax, clipymax);
	/* jle	LeftClip	;no -> */
	if ((short)(ax) <= (short)(clipymax)) {goto leftclip;}
	/* sub	ax,ClipYMax	;y + depth - 1 - y max */
	SUB(ax, clipymax);
	/* sub	dx,ax		;depth = depth - (y+depth-1-y max) */
	SUB(dx, ax);
	// 0 ;* if left - reduce width, modify ptr and calc add on
leftclip:
	// 4573 
	/* LeftClip:	xor	bx,bx		;add on = 0 */
	XOR(bx, bx);
	/* mov	ax,ClipXMin */
	ax = clipxmin;
	/* cmp	bp,ax		;x < x min? */
	CMP(bp, ax);
	/* jge	RightClip	;no -> */
	if ((short)(bp) >= (short)(ax)) {goto rightclip;}
	/* mov	bx,ax		;x min */
	bx = ax;
	/* xchg	ax,bp		;bp = x = x min, ax = original x */
	XCHG(ax, bp);
	/* sub	bx,ax		;x min - x */
	SUB(bx, ax);
	/* sub	cx,bx		;width = width - (x min - x) */
	SUB(cx, bx);
	/* add	si,bx		;ptr = ptr + (x min - x) */
	ADD(si, bx);
	// 0 ;* if right - reduce width, modfiy add on
rightclip:
	// 4575 
	/* RightClip:	mov	ax,bp		;x */
	ax = bp;
	/* add	ax,cx		;x + width */
	ADD(ax, cx);
	/* dec	ax		;x + width - 1 */
	DEC(ax);
	/* cmp	ax,ClipXMax	;(x + width - 1) > x max? */
	CMP(ax, clipxmax);
	/* jle	ClipDone	;no -> */
	if ((short)(ax) <= (short)(clipxmax)) {goto clipdone;}
	/* sub	ax,ClipXMax	;x + width - 1 - x max */
	SUB(ax, clipxmax);
	/* sub	cx,ax		;width = width - (x+width-1-x max) */
	SUB(cx, ax);
	/* add	bx,ax		;modify add on */
	ADD(bx, ax);
clipdone:
	// 4577 
	/* ClipDone:	pop	ds */
	POP(ds);
	// 0 ;* bx = sprite data add on
	// 0 ;* cx = width (bytes)
	// 0 ;* dx = depth
	// 0 ;* bp = x byte offset
	// 0 ;* di = y
	// 0 ;*
	// 0 ;* ds:si -> sprite mask / pattern data
	// 0 ;*
	// 0 ;* stack: ds
	// 0 ;*        es
	// 0 ;*        size
	// 0 ;* (top): mask col
contmsprite:
	// 4579 
	/* ContMSprite:	shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* add	di,bp		;y * 80 + x byte offset */
	ADD(di, bp);
	/* mov	bp,VGA_LINEADD */
	bp = 80;
	/* sub	bp,cx		;screen add on */
	SUB(bp, cx);
	// 0 ;* calc computed jump for width
	/* mov	ax,VGA_LINEADD */
	ax = 80;
	/* sub	ax,cx */
	SUB(ax, cx);
	/* mov	cx,ax */
	cx = ax;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* add	ax,cx		;*9 */
	ADD(ax, cx);
	/* lea	cx,WSpriteBytes */
	cx = m2c::kwspritebytes;
	/* add	cx,ax		;cx = computed jump wrt width */
	ADD(cx, ax);
	/* pop	ax   		;mask colour */
	POP(ax);
	/* mov	dh,al */
	dh = al;
	// 0 ;* bx = sprite data add on
	// 0 ;* cx = width (computed jump)
	// 0 ;* dl = depth
	// 0 ;* dh = mask colour
	// 0 ;* bp = screen address add on
	// 0 ;*
	// 0 ;* ds:si -> sprite mask / pattern data
	// 0 ;* es:di -> screen
	// 0 ;*
	// 0 ;* stack: ds
	// 0 ;*        es
	// 0 ;* (top)  size
	// 0 ;* map 0
	/* push	dx */
	PUSH(dx);
	/* mov	dx,VGA_SEQ+1 */
	dx = 0x003c4+1;
	/* mov	al,0001b */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* pop	dx */
	POP(dx);
	/* call	WriteSprite */
	CALL(writesprite, 0);
	/* pop	ax		;size */
	POP(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* push	ax */
	PUSH(ax);
	// 0 ;* map 1
	/* push	dx */
	PUSH(dx);
	/* mov	dx,VGA_SEQ+1 */
	dx = 0x003c4+1;
	/* mov	al,0010b */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* pop	dx */
	POP(dx);
	/* call	WriteSprite */
	CALL(writesprite, 0);
	/* pop	ax		;size */
	POP(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* push	ax */
	PUSH(ax);
	// 0 ;* map 2
	/* push	dx */
	PUSH(dx);
	/* mov	dx,VGA_SEQ+1 */
	dx = 0x003c4+1;
	/* mov	al,0100b */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* pop	dx */
	POP(dx);
	/* call	WriteSprite */
	CALL(writesprite, 0);
	/* pop	ax		;size */
	POP(ax);
	/* add	si,ax */
	ADD(si, ax);
	// 0 ;* map 3
	/* push	dx */
	PUSH(dx);
	/* mov	dx,VGA_SEQ+1 */
	dx = 0x003c4+1;
	/* mov	al,1000b */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* pop	dx */
	POP(dx);
	/* call	WriteSprite */
	CALL(writesprite, 0);
sspritedone:
	// 4581 
	/* SSpriteDone:	stc			;sprite visible */
	STC;
sspriteexit:
	// 4583 
	/* SSpriteExit:   	pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_msprite:
	// 2432 
	/* push	ds ;* kill: assume all */
	PUSH(ds);
edummylabel15:
	// 4585 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	// 0 ;* fetch logical data
	/* lodsw */
	{ LODSW; }
	/* mov	bp,ax		;x */
	bp = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	di,ax		;y */
	di = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	si,ax		;ptr */
	si = ax;
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG MSpriteID */
	ax = m2c::segment_of_external(mspriteid);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* fetch ptr to physical data from list
	/* mov	si,[si] */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	// 0 ;* fetch physical data
	/* lodsw */
	{ LODSW; }
	/* mov	cx,ax		;width in bytes (/4) */
	cx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	dx,ax		;depth */
	dx = ax;
	/* lodsw */
	{ LODSW; }
	/* push	ax		;size */
	PUSH(ax);
	/* add	si,4		;skip over x, y offsets */
	ADD(si, 4);
	/* lodsw */
	{ LODSW; }
	/* push	ax		;mask col */
	PUSH(ax);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;x byte offset */
	SAR(bp, 1);
	/* xor	bx,bx		;add on = 0 */
	XOR(bx, bx);
	/* jmp	ContMSprite */
	goto contmsprite;
vga_bsprite:
	// 2486 
	/* push	ds ;* note: x co-ord is rounded to byte boundary */
	PUSH(ds);
edummylabel16:
	// 4587 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	// 0 ;* fetch logical data
	/* lodsw */
	{ LODSW; }
	/* mov	bp,ax		;x */
	bp = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	di,ax		;y */
	di = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	si,ax		;ptr */
	si = ax;
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG MSpriteID */
	ax = m2c::segment_of_external(mspriteid);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* fetch ptr to physical data from list
	/* mov	si,[si] */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	// 0 ;* fetch physical data
	/* lodsw */
	{ LODSW; }
	/* mov	cx,ax		;width in bytes (/4) */
	cx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	dx,ax		;depth */
	dx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax		;size */
	bx = ax;
	/* push	ax */
	PUSH(ax);
	/* lodsw */
	{ LODSW; }
	/* add	bp,ax		;x offset */
	ADD(bp, ax);
	/* lodsw */
	{ LODSW; }
	/* add	di,ax		;y offset */
	ADD(di, ax);
	/* lodsw */
	{ LODSW; }
	/* push	ax		;mask colour */
	PUSH(ax);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;x byte offset */
	SAR(bp, 1);
	/* jmp	ContBSprite */
	goto contbsprite;
writesprite:
	// 2547 
	/* push	dx ;* kill: flags */
	PUSH(dx);
edummylabel17:
	// 4589 
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	ah,dh */
	ah = dh;
	/* xor	dh,dh */
	XOR(dh, dh);
wspriteloop:
	// 4591 
	/* WSpriteLoop:	jmp	cx		;jump wrt width */
	goto wspritebytes;
	// 0 ;* this macro generates 9 bytes of code each iteration
wspritebytes:
	// 4593 
	/* computed jump target: cx = WSpriteBytes + (80 - width) * 9 enters the
	 * unrolled blit `width` iterations before its end -- lowered to a loop. */
	_wsn = 80 - ((cx - m2c::kwspritebytes) / 9);
	while (_wsn--) {
		/* lodsb			;fetch mask / pattern data */
		{ LODSB; }
		/* cmp	al,ah		;mask or pattern data? */
		CMP(al, ah);
		/* je	@F			;mask -> */
		if (al == ah) {goto dummylabel4;}
		/* mov	es:[di],al	;write pattern */
		m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
dummylabel4:
		/* inc	di		;next screen address */
		INC(di);
	}
	ADD(si, bx);
	/* add	di,bp		;next screen line */
	ADD(di, bp);
	/* dec	dx		;any more lines? */
	DEC(dx);
	/* jz	WSpriteDone	;no -> */
	if (dx == 0) {goto wspritedone;}
	/* jmp	WSpriteLoop */
	goto wspriteloop;
wspritedone:
	// 4597 
	/* WSpriteDone:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* ret */
	RETN(0);
vga_qsprite:
	// 2663 
	/* push	ds ;* kill: assume all */
	PUSH(ds);
edummylabel18:
	// 4599 
	/* push	es */
	PUSH(es);
	// 0 ;* fetch logical data
	/* lodsw */
	{ LODSW; }
	/* mov	bp,ax		;x */
	bp = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	di,ax		;y */
	di = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	si,ax		;ptr */
	si = ax;
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG QSpriteID */
	ax = m2c::segment_of_external(qspriteid);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* fetch ptr to physical data from list
	/* mov	si,[si] */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	// 0 ;* fetch physical data
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax		;width in bytes (/4) */
	bx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	dx,ax		;depth */
	dx = ax;
	/* add	si,2		;skip size */
	ADD(si, 2);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;x byte offset */
	SAR(bp, 1);
	/* shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* add	di,bp		;y * 80 + x byte offset */
	ADD(di, bp);
	/* mov	bp,VGA_LINEADD */
	bp = 80;
	/* sub	bp,bx		;screen add on */
	SUB(bp, bx);
	/* shr	bx,1		;/2 for word width */
	SHR(bx, 1);
	/* mov	ah,dl		;depth */
	ah = dl;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	// 0 ;* ah = depth
	// 0 ;* bx = width in words
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* bp = screen address add on
	// 0 ;*
	// 0 ;* ds:si -> sprite data
	// 0 ;* es:di -> screen
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah		;al = depth */
	al = ah;
	/* push	di		;store start screen addr */
	PUSH(di);
qsloop1:
	// 4601 
	/* QSLoop1:	mov	cx,bx		;cx = width */
	cx = bx;
	// 2723 rep	movsw		;copy sprite data
	/* rep	movsw		;copy sprite data */
	REP MOVSW;
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* dec	al		;any more lines? */
	DEC(al);
	/* jnz	QSLoop1		;yes -> */
	if (al != 0) {goto qsloop1;}
	/* pop	di		;restore start screen addr */
	POP(di);
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah		;al = depth */
	al = ah;
	/* push	di		;store start screen addr */
	PUSH(di);
qsloop2:
	// 4603 
	/* QSLoop2:  	mov	cx,bx		;cx = width */
	cx = bx;
	// 2733 rep	movsw		;copy sprite data
	/* rep	movsw		;copy sprite data */
	REP MOVSW;
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* dec	al		;any more lines? */
	DEC(al);
	/* jnz	QSLoop2		;yes -> */
	if (al != 0) {goto qsloop2;}
	/* pop	di		;restore start screen addr */
	POP(di);
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah		;al = depth */
	al = ah;
	/* push	di		;store start screen addr */
	PUSH(di);
qsloop3:
	// 4605 
	/* QSLoop3:	mov	cx,bx		;cx = width */
	cx = bx;
	// 2743 rep	movsw		;copy sprite data
	/* rep	movsw		;copy sprite data */
	REP MOVSW;
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* dec	al		;any more lines? */
	DEC(al);
	/* jnz	QSLoop3		;yes -> */
	if (al != 0) {goto qsloop3;}
	/* pop	di		;restore start screen addr */
	POP(di);
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	al,ah		;al = depth */
	al = ah;
qsloop4:
	// 4607 
	/* QSLoop4:	mov	cx,bx		;cx = width */
	cx = bx;
	// 2752 rep	movsw		;copy sprite data
	/* rep	movsw		;copy sprite data */
	REP MOVSW;
	/* add	di,bp		;next line */
	ADD(di, bp);
	/* dec	al		;any more lines? */
	DEC(al);
	/* jnz	QSLoop4		;yes -> */
	if (al != 0) {goto qsloop4;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_initss:
	// 2780 
	/* push	ds ;*       Refer to SS_VGA_1.ASM for SSprite data formats. */
	PUSH(ds);
edummylabel19:
	// 4609 
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG SSpriteList */
	ax = m2c::segment_of_external(sspritelist);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
initssloop:
	// 4611 
	/* InitSSLoop:  	mov	si,SSpriteList[bx] */
	si = *(dw*)(((db*)&sspritelist)+bx);
	/* cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	InitSSExit	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto initssexit;}
	/* push	bx		;store list index */
	PUSH(bx);
	// 0 ;* copy unshifted sprite data to shifted sprite buffer with 2 pixel offset
	/* push	si		;store sprite ptr */
	PUSH(si);
	/* mov	bx,[si+SS_WIDTH] */
	bx = m2c::getdata(*(dw*)(raddr(ds,si+0)));
	/* mov	cx,[si+SS_SIZE] */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+4)));
	/* mov	dx,[si+SS_DEPTH] */
	dx = m2c::getdata(*(dw*)(raddr(ds,si+2)));
	/* add	si,SS_DATA */
	ADD(si, 12);
	/* shl	cx,1		;*2 */
	SHL(cx, 1);
	/* shl	cx,1		;size * 4 */
	SHL(cx, 1);
	/* mov	di,si */
	di = si;
	/* add	di,cx		;di -> shifted sprite buffer */
	ADD(di, cx);
	/* shl	bx,1		;width * 2 = num words width */
	SHL(bx, 1);
	/* add	di,2		;add 2 pixel offset */
	ADD(di, 2);
	// 0 ;* bx = width (words)
	// 0 ;* dx = depth
	// 0 ;* si -> unshifted sprite data
	// 0 ;* di -> shifted sprite buffer + 2 pixel offset
copyssloop:
	// 4613 
	/* CopySSLoop:	mov	cx,bx */
	cx = bx;
	// 2812 rep	movsw		;copy one line
	/* rep	movsw		;copy one line */
	REP MOVSW;
	/* add	di,4		;next line + 2 pixel offset */
	ADD(di, 4);
	/* dec	dx		;any more lines? */
	DEC(dx);
	/* jnz	CopySSLoop	;yes -> */
	if (dx != 0) {goto copyssloop;}
	/* pop	si		;restore sprite ptr */
	POP(si);
	// 0 ;* interleave unshifted sprite data
	/* push	si		;store sprite ptr */
	PUSH(si);
	/* mov	cx,[si+SS_SIZE] */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+4)));
	/* add	si,SS_DATA */
	ADD(si, 12);
	/* call	ConvertVGAData */
	CALL(convertvgadata, 0);
	/* pop	si		;restore sprite ptr */
	POP(si);
	// 0 ;* interleave shifted sprite data
	/* mov	cx,[si+SS_SIZE] */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+4)));
	/* mov	dx,[si+SS_DEPTH] */
	dx = m2c::getdata(*(dw*)(raddr(ds,si+2)));
	/* add	si,SS_DATA */
	ADD(si, 12);
	/* mov	ax,cx */
	ax = cx;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;size * 4 */
	SHL(ax, 1);
	/* add	si,ax		;si -> shifted sprite data */
	ADD(si, ax);
	/* add	cx,dx		;modify size */
	ADD(cx, dx);
	/* call	ConvertVGAData */
	CALL(convertvgadata, 0);
	/* pop	bx		;restore list index */
	POP(bx);
	/* add	bx,2  		;next sprite */
	ADD(bx, 2);
	/* jmp	InitSSLoop */
	goto initssloop;
initssexit:
	// 4615 
	/* InitSSExit:	pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_initms:
	// 2862 
	/* push	ds ;*       Refer to MS_VGA_1.ASM for MSprite data formats. */
	PUSH(ds);
edummylabel20:
	// 4617 
	/* mov	ax,SEG MSpriteList */
	ax = m2c::segment_of_external(mspritelist);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
initmsloop:
	// 4619 
	/* InitMSLoop:	mov	si,MSpriteList[bx] */
	si = *(dw*)(((db*)&mspritelist)+bx);
	/* cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	InitMSExit	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto initmsexit;}
	/* push	bx */
	PUSH(bx);
	/* mov	cx,[si+MS_SIZE] */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+4)));
	/* add	si,MS_DATA */
	ADD(si, 12);
	/* call	ConvertVGAData */
	CALL(convertvgadata, 0);
	/* pop	bx */
	POP(bx);
	/* add	bx,2  		;next sprite */
	ADD(bx, 2);
	/* jmp	InitMSLoop */
	goto initmsloop;
initmsexit:
	// 4621 
	/* InitMSExit:	pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_initqs:
	// 2898 
	/* push	ds ;*       Refer to QS_VGA_1.ASM for QSprite data formats. */
	PUSH(ds);
edummylabel21:
	// 4623 
	/* mov	ax,SEG QSpriteList */
	ax = m2c::segment_of_external(qspritelist);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
initqsloop:
	// 4625 
	/* InitQSLoop:	mov	si,QSpriteList[bx] */
	si = *(dw*)(((db*)&qspritelist)+bx);
	/* cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	InitQSExit	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto initqsexit;}
	/* push	bx */
	PUSH(bx);
	/* mov	cx,[si+QS_SIZE] */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+4)));
	/* add	si,QS_DATA */
	ADD(si, 6);
	/* call	ConvertVGAData */
	CALL(convertvgadata, 0);
	/* pop	bx */
	POP(bx);
	/* add	bx,2  		;next sprite */
	ADD(bx, 2);
	/* jmp	InitQSLoop */
	goto initqsloop;
initqsexit:
	// 4627 
	/* InitQSExit:	pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
convertvgadata:
	// 2929 
	/* push	ds ;* kill: assume all */
	PUSH(ds);
edummylabel22:
	// 4629 
	/* push	es */
	PUSH(es);
	/* push	ds */
	PUSH(ds);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	// 0 ;-----------------
	// 0 ;* sort map 0 data
	// 0 ;-----------------
	/* mov	bx,0		;map 0 */
	bx = 0;
	/* push	cx		;store size */
	PUSH(cx);
convloop0:
	// 4631 
	/* ConvLoop0:	mov	al,[si+bx]	;fetch map data */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb			;store map data */
	{ STOSB; }
	/* add	bx,4		;next map data */
	ADD(bx, 4);
	/* loop	ConvLoop0 */
	LOOP(convloop0);
	/* pop	cx		;restore size */
	POP(cx);
	// 0 ;-----------------
	// 0 ;* sort map 1 data
	// 0 ;-----------------
	/* mov	bx,1		;map 1 */
	bx = 1;
	/* push	cx		;store size */
	PUSH(cx);
convloop1:
	// 4633 
	/* ConvLoop1:	mov	al,[si+bx]	;fetch map data */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb			;store map data */
	{ STOSB; }
	/* add	bx,4		;next map data */
	ADD(bx, 4);
	/* loop	ConvLoop1 */
	LOOP(convloop1);
	/* pop	cx		;restore size */
	POP(cx);
	// 0 ;-----------------
	// 0 ;* sort map 2 data
	// 0 ;-----------------
	/* mov	bx,2		;map 2 */
	bx = 2;
	/* push	cx		;store size */
	PUSH(cx);
convloop2:
	// 4635 
	/* ConvLoop2:	mov	al,[si+bx]	;fetch map data */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb			;store map data */
	{ STOSB; }
	/* add	bx,4		;next map data */
	ADD(bx, 4);
	/* loop	ConvLoop2 */
	LOOP(convloop2);
	/* pop	cx		;restore size */
	POP(cx);
	// 0 ;-----------------
	// 0 ;* sort map 3 data
	// 0 ;-----------------
	/* mov	bx,3		;map 3 */
	bx = 3;
	/* push	cx		;store size */
	PUSH(cx);
convloop3:
	// 4637 
	/* ConvLoop3:	mov	al,[si+bx]	;fetch map data */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb			;store map data */
	{ STOSB; }
	/* add	bx,4		;next map data */
	ADD(bx, 4);
	/* loop	ConvLoop3 */
	LOOP(convloop3);
	/* pop	cx		;restore size */
	POP(cx);
	/* pop	es */
	POP(es);
	/* mov	di,si		;es:di -> sprite pattern */
	di = si;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si		;ds:si -> start of WorkScreen */
	XOR(si, si);
	/* shl	cx,1	 	;size * 2 = num words */
	SHL(cx, 1);
	// 2986 rep	movsw		;copy interleaved data to sprite data
	/* rep	movsw		;copy interleaved data to sprite data */
	REP MOVSW;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
vga_bfill:
	// 3004 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel23:
	// 4639 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	bp,dx */
	bp = dx;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* shl	di,1		;*2 */
	SHL(di, 1);
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* shr	cx,1		;(4 pixels / byte) */
	SHR(cx, 1);
	/* add	di,cx		;y * 80 + x / 4 */
	ADD(di, cx);
	/* shl	bx,1		;line width (bytes) */
	SHL(bx, 1);
	/* mov	si,VGA_LINEADD */
	si = 80;
	/* sub	si,bx		;si = line add on */
	SUB(si, bx);
	/* mov	ax,WORD PTR FillCol */
	ax = *(dw*)(&fillcol);
	/* shr	bx,1		;num words */
	SHR(bx, 1);
vga_bfillloop:
	// 4641 
	/* VGA_BFillLoop:	mov	cx,bx		;width (words) */
	cx = bx;
	// 3033 rep	stosw		;fill line
	/* rep	stosw		;fill line */
	REP STOSW;
	/* add	di,si		;next line */
	ADD(di, si);
	/* dec	bp */
	DEC(bp);
	/* jnz	VGA_BFillLoop */
	if (bp != 0) {goto vga_bfillloop;}
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
vga_savemouse:
	// 3050 
	/* push	ds ;*       VGA_CTRL_RDMAP */
	PUSH(ds);
edummylabel24:
	// 4643 
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG MouseHouse */
	ax = m2c::segment_of_external(mousehouse);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* call	VGA_CalcAddr */
	CALL(vga_calcaddr, 0);
	/* mov	si,di		;ds:si -> mouse background */
	si = di;
	/* mov	di,OFFSET MouseHouse */
	di = m2c::near_offset_external(mousehouse);
	/* mov	ah,0	  	;read map */
	ah = 0;
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_RDMAP */
	al = 0x004;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
vga_svmsemaplp:
	// 4645 
	/* VGA_SvMseMapLp:	mov	al,ah */
	al = ah;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,si */
	bx = si;
	/* mov	bp,16		;16 lines */
	bp = 16;
vga_svmseloop1:
	// 4647 
	/* VGA_SvMseLoop1:	mov	cx,5		;5 bytes wide (16 pixels + shift byte) */
	cx = 5;
vga_svmseloop2:
	// 4649 
	/* VGA_SvMseLoop2:	cmp	si,VGA_LINEADD*200 */
	CMP(si, 80*200);
	/* jae	VGA_SvMseExit	;screen ptr outside screen limits -> */
	if ((dw)(si) >= (dw)(80*200)) {goto vga_svmseexit;}
	/* movsb			;copy byte */
	{ MOVSB; }
	/* loop	VGA_SvMseLoop2	;next byte */
	LOOP(vga_svmseloop2);
	/* add	si,VGA_LINEADD-5 */
	ADD(si, 80-5);
	/* dec	bp		;next line */
	DEC(bp);
	/* jnz	VGA_SvMseLoop1 */
	if (bp != 0) {goto vga_svmseloop1;}
vga_svmseexit:
	// 4651 
	/* VGA_SvMseExit:	mov	si,bx */
	si = bx;
	/* inc	ah		;next plane */
	INC(ah);
	/* cmp	ah,4		;done all planes yet? */
	CMP(ah, 4);
	/* jne	VGA_SvMseMapLp	;no -> */
	if ((db)(ah) != (db)(4)) {goto vga_svmsemaplp;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_loadmouse:
	// 3097 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel25:
	// 4653 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG MouseHouse */
	ax = m2c::segment_of_external(mousehouse);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* call	VGA_CalcAddr	;es:di -> mouse background */
	CALL(vga_calcaddr, 0);
	/* mov	si,OFFSET MouseHouse */
	si = m2c::near_offset_external(mousehouse);
	/* mov	ah,0001b	;write map */
	ah = 0x1;
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
vga_ldmsemaplp:
	// 4655 
	/* VGA_LdMseMapLp:	mov	al,ah */
	al = ah;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,di */
	bx = di;
	/* mov	bp,16		;16 lines */
	bp = 16;
vga_ldmseloop1:
	// 4657 
	/* VGA_LdMseLoop1:	mov	cx,5		;5 bytes wide (16 pixels + shift byte) */
	cx = 5;
vga_ldmseloop2:
	// 4659 
	/* VGA_LdMseLoop2:	cmp	di,VGA_LINEADD*200 */
	CMP(di, 80*200);
	/* jae	VGA_LdMseExit	;screen ptr outside screen limits -> */
	if ((dw)(di) >= (dw)(80*200)) {goto vga_ldmseexit;}
	/* movsb			;copy byte */
	{ MOVSB; }
	/* loop	VGA_LdMseLoop2	;next byte */
	LOOP(vga_ldmseloop2);
	/* add	di,VGA_LINEADD-5 */
	ADD(di, 80-5);
	/* dec	bp		;next line */
	DEC(bp);
	/* jnz	VGA_LdMseLoop1 */
	if (bp != 0) {goto vga_ldmseloop1;}
vga_ldmseexit:
	// 4661 
	/* VGA_LdMseExit:	mov	di,bx */
	di = bx;
	/* shl	ah,1		;next plane */
	SHL(ah, 1);
	/* test	ah,10000b	;done all planes yet? */
	TEST(ah, 0x10);
	/* jz	VGA_LdMseMapLp	;no -> */
	if (!(ah & 0x10)) {goto vga_ldmsemaplp;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_savescreen:
	// 3141 
	/* push	ds ;*       VGA_CTRL_RDMAP */
	PUSH(ds);
edummylabel26:
	// 4663 
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_RDMAP */
	al = 0x004;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	di,OFFSET WorkScreen */
	di = m2c::near_offset_external(workscreen);
	/* mov	al,0		;map 0 */
	al = 0;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	si,si */
	XOR(si, si);
	// 3158 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,1		;map 1 */
	al = 1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	si,si */
	XOR(si, si);
	// 3163 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,2		;map 2 */
	al = 2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	si,si */
	XOR(si, si);
	// 3168 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,3		;map 3 */
	al = 3;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	si,si */
	XOR(si, si);
	// 3173 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_loadscreen:
	// 3188 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel27:
	// 4665 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	si,OFFSET WorkScreen */
	si = m2c::near_offset_external(workscreen);
	/* mov	al,0001b    	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	di,di */
	XOR(di, di);
	// 3205 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,0010b    	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	di,di */
	XOR(di, di);
	// 3210 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,0100b    	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	di,di */
	XOR(di, di);
	// 3215 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	al,1000b    	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*VGA_LINEADD/2 */
	cx = 200*80/2;
	/* xor	di,di */
	XOR(di, di);
	// 3220 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_hfill:
	// 3239 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel28:
	// 4667 
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* shl	si,1		;*2 LhsX[] index */
	SHL(si, 1);
	/* mov	di,si */
	di = si;
	/* shl	di,1		;*4 */
	SHL(di, 1);
	/* shl	di,1		;*8 */
	SHL(di, 1);
	/* shl	di,1		;*16 */
	SHL(di, 1);
	/* mov	ax,di */
	ax = di;
	/* shl	di,1		;*32 */
	SHL(di, 1);
	/* shl	di,1		;*64 */
	SHL(di, 1);
	/* add	di,ax		;y * 80 */
	ADD(di, ax);
	/* mov	ax,HrznXMin */
	ax = hrznxmin;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;/4 */
	SHR(ax, 1);
	/* add	di,ax		;y * 80 + x min / 4 */
	ADD(di, ax);
	/* add	si,OFFSET LhsX	;si -> LhsX[y min] */
	ADD(si, m2c::near_offset_external(lhsx));
	/* mov	bx,OFFSET HrznMask */
	bx = m2c::near_offset_external(hrznmask);
	// 0 ;* bx -> HrznMask
	// 0 ;* cx = num lines
	// 0 ;* dx = addresses VGA_SEQ_MAPMSK
	// 0 ;* si -> LhsX[y min]
	// 0 ;* di -> screen
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al		;set mask for solid fill */
	OUT(dx, al);
vga_hfilllp:
	// 4669 
	/* VGA_HFillLp:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	/* lodsw			;fetch x value */
	{ LODSW; }
	/* mov	bp,ax		;store x value */
	bp = ax;
	/* sub	ax,HrznXMin	;x - x min */
	SUB(ax, hrznxmin);
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;(x - x min) / 4 */
	SHR(ax, 1);
	/* inc	ax		;(x - x min) / 4 + 1 */
	INC(ax);
	/* mov	cx,ax		;cx = num whole bytes to fill */
	cx = ax;
	/* mov	al,HrznLhsCol */
	al = hrznlhscol;
	// 3281 rep	stosb	  	;fill solid lhs
	/* rep	stosb	  	;fill solid lhs */
	REP STOSB;
	/* dec	di		;move back to screen byte to be masked */
	DEC(di);
	/* mov	ax,bp */
	ax = bp;
	/* and	ax,3		;x offset within screen byte */
	AND(ax, 3);
	/* xlat			;fetch mask wrt x offset */
	XLAT;
	/* out	dx,al		;set mask */
	OUT(dx, al);
	/* mov	al,HrznRhsCol */
	al = hrznrhscol;
	/* stosb			;mask rhs colour into middle byte */
	{ STOSB; }
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al		;set mask for solid fill */
	OUT(dx, al);
	/* mov	ax,HrznXMax */
	ax = hrznxmax;
	/* sub	ax,bp		;x max - x */
	SUB(ax, bp);
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;(x max - x) / 4 */
	SHR(ax, 1);
	/* mov	cx,ax		;cx = num whole bytes to fill */
	cx = ax;
	/* mov	al,HrznRhsCol */
	al = hrznrhscol;
	// 3297 rep	stosb	  	;fill solid rhs
	/* rep	stosb	  	;fill solid rhs */
	REP STOSB;
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* add	di,VGA_LINEADD */
	ADD(di, 80);
	/* loop	VGA_HFillLp */
	LOOP(vga_hfilllp);
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
setdacblock:
	// 3315 
	// 0 ;* set start colour
edummylabel29:
	// 4671 
	/* mov	dx,VGA_PEL_WRITE */
	dx = 0x003c8;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* update n colours
	/* mov	dx,VGA_PEL_DATA */
	dx = 0x003c9;
dummylabel5:
	// 4673 
	/* @@:		lodsb			;red */
	{ LODSB; }
	/* out	dx,al */
	OUT(dx, al);
	/* lodsb			;green */
	{ LODSB; }
	/* out	dx,al */
	OUT(dx, al);
	/* lodsb			;blue */
	{ LODSB; }
	/* out	dx,al */
	OUT(dx, al);
	/* loop	@B */
	LOOP(dummylabel5);
	/* ret */
	RETF(0);
readdacblock:
	// 3342 
	// 0 ;* set start colour
edummylabel30:
	// 4675 
	/* mov	dx,VGA_PEL_READ */
	dx = 0x003c7;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* read n colours
	/* mov	dx,VGA_PEL_DATA */
	dx = 0x003c9;
dummylabel6:
	// 4677 
	/* @@:    		in	al,dx		;red */
	IN(al, dx);
	/* stosb */
	{ STOSB; }
	/* in	al,dx		;green */
	IN(al, dx);
	/* stosb */
	{ STOSB; }
	/* in	al,dx		;blue */
	IN(al, dx);
	/* stosb */
	{ STOSB; }
	/* loop	@B */
	LOOP(dummylabel6);
	/* ret */
	RETF(0);
fadepalette:
	// 3368 
	/* push	ds ;formerly NEAR */
	PUSH(ds);
edummylabel31:
	// 4679 
	/* push	es */
	PUSH(es);
	/* push	FadeParams3 */
	PUSH(fadeparams3);
	/* push	FadeParams3+2 */
	PUSH(*(dw*)(((db*)&fadeparams3)+2));
	/* push	FadeStart3 */
	PUSH(fadestart3);
	/* push	FadeCount3 */
	PUSH(fadecount3);
	/* push	FadeParams2 */
	PUSH(fadeparams2);
	/* push	FadeParams2+2 */
	PUSH(*(dw*)(((db*)&fadeparams2)+2));
	/* push	FadeStart2 */
	PUSH(fadestart2);
	/* push	FadeCount2 */
	PUSH(fadecount2);
	/* mov	bl,FadeLevel1 */
	bl = fadelevel1;
	/* mov	bh,FadeRCol1 */
	bh = fadercol1;
	/* mov	dl,FadeGCol1 */
	dl = fadegcol1;
	/* mov	dh,FadeBCol1 */
	dh = fadebcol1;
	/* mov	ax,FadeStart1 */
	ax = fadestart1;
	/* mov	bp,FadeCount1 */
	bp = fadecount1;
	/* mov	cx,SEG VGA_RGB_Data */
	cx = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	es,cx */
	m2c::set_segment_register(es, cx);
	// 0 ;* copy current palette data
	/* mov	si,OFFSET VGA_RGB_Data */
	si = m2c::near_offset_external(vga_rgb_data);
	/* mov	di,OFFSET VGA_RGB_Fade */
	di = m2c::near_offset_external(vga_rgb_fade);
	/* mov	cx,256*3/2 */
	cx = 256*3/2;
	// 3393 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;----------------
	// 0 ;* palette fade 1
	// 0 ;----------------
	// 0 ;* skip fade if fade level = 0
	/* test	bl,bl		;fade level = 0? */
	TEST(bl, bl);
	/* jz	FadeDone1	;yes -> */
	if (!(bl & bl)) {goto fadedone1;}
	// 0 ;* calc ptr to start of fade range
	/* mov	si,OFFSET VGA_RGB_Fade */
	si = m2c::near_offset_external(vga_rgb_fade);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	// 0 ;* fade range of colours
fadeloop1:
	// 4681 
	/* FadeLoop1:	mov	al,bh		;new R */
	al = bh;
	/* sub	al,[si]		;new R - old R */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new R - old R) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new R - old R) * fade + old R */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dl		;new G */
	al = dl;
	/* sub	al,[si]		;new G - old G */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new G - old G) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new G - old G) * fade + old G */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dh		;new B */
	al = dh;
	/* sub	al,[si]		;new B - old B */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new B - old B) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new B - old B) * fade + old B */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* dec	bp */
	DEC(bp);
	/* jnz	FadeLoop1 */
	if (bp != 0) {goto fadeloop1;}
fadedone1:
	// 4683 
	/* FadeDone1:	pop	bp */
	POP(bp);
	/* pop	ax */
	POP(ax);
	/* pop	dx */
	POP(dx);
	/* pop	bx */
	POP(bx);
	// 0 ;----------------
	// 0 ;* palette fade 2
	// 0 ;----------------
	// 0 ;* skip fade if fade level = 0
	/* test	bl,bl		;fade level = 0? */
	TEST(bl, bl);
	/* jz	FadeDone2	;yes -> */
	if (!(bl & bl)) {goto fadedone2;}
	// 0 ;* calc ptr to start of fade range
	/* mov	si,OFFSET VGA_RGB_Fade */
	si = m2c::near_offset_external(vga_rgb_fade);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	// 0 ;* fade range of colours
fadeloop2:
	// 4685 
	/* FadeLoop2:	mov	al,bh		;new R */
	al = bh;
	/* sub	al,[si]		;new R - old R */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new R - old R) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new R - old R) * fade + old R */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dl		;new G */
	al = dl;
	/* sub	al,[si]		;new G - old G */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new G - old G) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new G - old G) * fade + old G */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dh		;new B */
	al = dh;
	/* sub	al,[si]		;new B - old B */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new B - old B) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new B - old B) * fade + old B */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* dec	bp */
	DEC(bp);
	/* jnz	FadeLoop2 */
	if (bp != 0) {goto fadeloop2;}
fadedone2:
	// 4687 
	/* FadeDone2:	pop	bp */
	POP(bp);
	/* pop	ax */
	POP(ax);
	/* pop	dx */
	POP(dx);
	/* pop	bx */
	POP(bx);
	// 0 ;----------------
	// 0 ;* palette fade 3
	// 0 ;----------------
	// 0 ;* skip fade if fade level = 0
	/* test	bl,bl		;fade level = 0? */
	TEST(bl, bl);
	/* jz	FadeDone3	;yes -> */
	if (!(bl & bl)) {goto fadedone3;}
	// 0 ;* calc ptr to start of fade range
	/* mov	si,OFFSET VGA_RGB_Fade */
	si = m2c::near_offset_external(vga_rgb_fade);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	/* add	si,ax */
	ADD(si, ax);
	// 0 ;* fade range of colours
fadeloop3:
	// 4689 
	/* FadeLoop3:	mov	al,bh		;new R */
	al = bh;
	/* sub	al,[si]		;new R - old R */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new R - old R) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new R - old R) * fade + old R */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dl		;new G */
	al = dl;
	/* sub	al,[si]		;new G - old G */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new G - old G) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new G - old G) * fade + old G */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* mov	al,dh		;new B */
	al = dh;
	/* sub	al,[si]		;new B - old B */
	SUB(al, *(raddr(ds,si)));
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;al = abs(delta), ah = sign(delta)
	/* mov	cl,ah */
	cl = ah;
	/* mul	bl		;(new B - old B) * fade */
	MUL1_1(bl);
	/* shl	ax,1		;frac adjust */
	SHL(ax, 1);
	/* shl	al,1		;expose 1/2 bit */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* xor	ah,cl		;restore sign */
	XOR(ah, cl);
	/* sub	ah,cl */
	SUB(ah, cl);
	/* add	[si],ah		;(new B - old B) * fade + old B */
	ADD(*(raddr(ds,si)), ah);
	/* inc	si		;next col */
	INC(si);
	/* dec	bp */
	DEC(bp);
	/* jnz	FadeLoop3 */
	if (bp != 0) {goto fadeloop3;}
fadedone3:
	// 4691 
	/* FadeDone3:	pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* mov	FadeFlag,1 */
	*(fadeflag) = 1;
	/* ret */
	RETF(0);
fadeout:
	// 3604 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel32:
	// 4693 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	Frames,ax */
	frames = ax;
	// 0 ;---------------
	// 0 ;* fade out loop
	// 0 ;---------------
fadeoutloop:
	// 4695 
	/* FadeOutLoop: 	mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,Frames */
	ax = frames;
	/* cmp	ax,127 */
	CMP(ax, 127);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(127)) {goto dummylabel7;}
	/* mov	ax,127 */
	ax = 127;
	// 0 ;* allow a little longer delay ...
dummylabel7:
	// 4697 
	/* @@:		cmp	Frames,200 */
	CMP(frames, 200);
	/* jb	FadeOutLoop */
	if ((dw)(frames) < (dw)(200)) {goto fadeoutloop;}
	/* ret */
	RETF(0);
qfadeout:
	// 3641 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel33:
	// 4699 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	Frames,ax */
	frames = ax;
	// 0 ;---------------
	// 0 ;* fade out loop
	// 0 ;---------------
dummylabel8:
	// 4701 
	/* @@:	 	shl	al,1		;*2 */
	SHL(al, 1);
	/* shl	al,1		;*4 */
	SHL(al, 1);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,Frames */
	ax = frames;
	/* cmp	ax,31 */
	CMP(ax, 31);
	/* jbe	@B */
	if ((dw)(ax) <= (dw)(31)) {goto dummylabel8;}
	/* mov	FadeLevel3,127 */
	fadelevel3 = 127;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
fadein:
	// 3677 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel34:
	// 4703 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,127 */
	fadelevel3 = 127;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	ax,127 */
	ax = 127;
	/* mov	CountDown,ax */
	countdown = ax;
	// 0 ;--------------
	// 0 ;* fade in loop
	// 0 ;--------------
dummylabel9:
	// 4705 
	/* @@:		mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,CountDown */
	ax = countdown;
	/* test	ax,ax */
	TEST(ax, ax);
	/* jnz	@B */
	if ((ax & ax) != 0) {goto dummylabel9;}
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
qfadein:
	// 3712 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel35:
	// 4707 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,127 */
	fadelevel3 = 127;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	ax,31 */
	ax = 31;
	/* mov	CountDown,ax */
	countdown = ax;
	// 0 ;--------------
	// 0 ;* fade in loop
	// 0 ;--------------
dummylabel10:
	// 4709 
	/* @@:		shl	al,1		;*2 */
	SHL(al, 1);
	/* shl	al,1		;*4 */
	SHL(al, 1);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,CountDown */
	ax = countdown;
	/* test	ax,ax */
	TEST(ax, ax);
	/* jnz	@B */
	if ((ax & ax) != 0) {goto dummylabel10;}
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
instantfadeout:
	// 3753 
	/* xor	ax,ax ;*       the screen to (say) black first. */
	XOR(ax, ax);
edummylabel36:
	// 4711 
	/* mov	FadeLevel3,127 */
	fadelevel3 = 127;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
instantfadein:
	// 3776 
	/* xor	ax,ax ;*       the screen to (say) black first. */
	XOR(ax, ax);
edummylabel37:
	// 4713 
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
fadedown:
	// 3795 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel38:
	// 4715 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	Frames,ax */
	frames = ax;
	// 0 ;----------------
	// 0 ;* fade down loop
	// 0 ;----------------
dummylabel11:
	// 4717 
	/* @@:		mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,Frames */
	ax = frames;
	/* cmp	ax,12 */
	CMP(ax, 12);
	/* jb	@B */
	if ((dw)(ax) < (dw)(12)) {goto dummylabel11;}
	/* mov	FadeLevel3,12 */
	fadelevel3 = 12;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
fadeup:
	// 3829 
	// 0 ;-----------------
	// 0 ;* initialize fade
	// 0 ;-----------------
edummylabel39:
	// 4719 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FadeLevel3,12 */
	fadelevel3 = 12;
	/* mov	FadeRCol3,al */
	fadercol3 = al;
	/* mov	FadeGCol3,al */
	fadegcol3 = al;
	/* mov	FadeBCol3,al */
	fadebcol3 = al;
	/* mov	FadeStart3,ax */
	fadestart3 = ax;
	/* mov	FadeCount3,256 */
	fadecount3 = 256;
	/* mov	ax,12 */
	ax = 12;
	/* mov	CountDown,ax */
	countdown = ax;
	// 0 ;--------------
	// 0 ;* fade up loop
	// 0 ;--------------
dummylabel12:
	// 4721 
	/* @@:		mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* mov	ax,CountDown */
	ax = countdown;
	/* test	ax,ax */
	TEST(ax, ax);
	/* jnz	@B */
	if ((ax & ax) != 0) {goto dummylabel12;}
	/* mov	FadeLevel3,al */
	fadelevel3 = al;
	/* call	UpdateFade */
	CALL(updatefade, 0);
	/* ret */
	RETF(0);
updatefade:
	// 3864 
	/* call	FadePalette ;* kill: assume all */
	CALLF(fadepalette, 0);
	// 0 ;------------------
	// 0 ;* wait for retrace
	// 0 ;------------------
dummylabel13:
	// 4723 
	/* @@:	    	mov	dx,VGA_CRT_STAT */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,VGA_VSYNC */
	TEST(al, 0x8);
	/* jnz	@B */
	if ((al & 0x8) != 0) {goto dummylabel13;}
dummylabel14:
	// 4725 
	/* @@:		mov	dx,VGA_CRT_STAT */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	/* test 	al,VGA_VSYNC */
	TEST(al, 0x8);
	/* jz 	@B */
	if (!(al & 0x8)) {goto dummylabel14;}
	// 0 ;-------------
	// 0 ;* update DACs
	// 0 ;-------------
	/* mov	si,OFFSET VGA_RGB_Fade */
	si = m2c::near_offset_external(vga_rgb_fade);
	/* push	ds */
	PUSH(ds);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	al,al */
	XOR(al, al);
	/* mov	cx,256 */
	cx = 256;
	/* call	SetDACBlock */
	CALLF(setdacblock, 0);
	/* pop	ds */
	POP(ds);
	/* mov	FadeFlag,0	;prevent repeat fade in DownLoad */
	*(fadeflag) = 0;
	/* ret */
	RETN(0);
unpackdeltapic:
	// 3922 
	/* push	ds ;*       palette has been sorted in some order (grey scaled?). */
	PUSH(ds);
edummylabel40:
	// 4727 
	/* push	es */
	PUSH(es);
	/* mov	ax,RealScrPtr */
	ax = realscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	si,OFFSET WorkScreen+(256*3)	;start of delta data */
	si = m2c::near_offset_external(workscreen)+(256*3);
	/* xor	di,di		;start of screen */
	XOR(di, di);
	/* mov	al,0001b	;map mask = map 0 */
	al = 0x1;
	/* mov	ah,0f0h		;nibble mask */
	ah = 0x0f0;
	/* xor	bl,bl		;pixel = 0 */
	XOR(bl, bl);
	/* mov	cl,4		;nibble shift count */
	cl = 4;
unpackloop:
	// 4729 
	// 0 ;* read nibble
	/* mov	bh,[si]		;fetch nibble */
	bh = m2c::getdata(*(raddr(ds,si)));
	/* cmp	ah,0f0h		;hi nibble? */
	CMP(ah, 0x0f0);
	/* je	@F		;yes -> */
	if ((db)(ah) == (db)(0x0f0)) {goto dummylabel15;}
	/* shl	bh,cl		;lo nibble -> hi nibble */
	SHL(bh, cl);
	/* inc	si		;next byte */
	INC(si);
dummylabel15:
	// 4731 
	/* @@:		sar	bh,cl		;sign extend into lo nibble */
	SAR(bh, cl);
	/* not	ah		;toggle nibble */
	ah = ~ah;
	/* cmp	bh,-8		;delta data or new pixel value? */
	CMP(bh, -8);
	/* jne	SortDelta	;delta data -> */
	if ((db)(bh) != (db)(-8)) {goto sortdelta;}
	/* mov	bl,[si] */
	bl = m2c::getdata(*(raddr(ds,si)));
	/* cmp	ah,0f0h		;extract hi then lo? */
	CMP(ah, 0x0f0);
	/* jne	@F		;no (extract lo then hi) -> */
	if ((db)(ah) != (db)(0x0f0)) {goto dummylabel16;}
	/* rol	bl,cl		;swap nibbles */
	ROL(bl, cl);
	/* inc	si		;next byte */
	INC(si);
	/* jmp	PixelOk */
	goto pixelok;
dummylabel16:
	// 4733 
	/* @@:		and	bl,ah		;lo nibble */
	AND(bl, ah);
	/* inc	si		;next byte */
	INC(si);
	/* mov	bh,[si] */
	bh = m2c::getdata(*(raddr(ds,si)));
	/* and 	bh,0f0h		;hi nibble */
	AND(bh, 0x0f0);
	/* or	bl,bh */
	OR(bl, bh);
	/* jmp	PixelOk */
	goto pixelok;
sortdelta:
	// 4735 
	/* SortDelta:	add	bl,bh		;pixel + delta */
	ADD(bl, bh);
	// 0 ;* write pixel
pixelok:
	// 4737 
	/* PixelOk:	out	dx,al		;select map */
	OUT(dx, al);
	/* mov	es:[di],bl	;store pixel */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(bl));
	/* shl	al,1		;next map */
	SHL(al, 1);
	/* test	al,10000b	;all maps done? */
	TEST(al, 0x10);
	/* jz	UnpackLoop	;no -> */
	if (!(al & 0x10)) {goto unpackloop;}
	/* mov	al,0001b	;map mask = map 0 */
	al = 0x1;
	/* inc	di		;next screen address */
	INC(di);
	/* cmp	di,(320*200)/4	;end of screen? */
	CMP(di, (320*200)/4);
	/* jb	UnpackLoop	;no -> */
	if ((dw)(di) < (dw)((320*200)/4)) {goto unpackloop;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
screenshaker:
	// 3992 
	// 0 ;------------------
	// 0 ;* horizontal shake
	// 0 ;------------------
	// 0 ;* clear flip-flop to allow attribute register index to be selected
edummylabel41:
	// 4739 
	/* mov	dx,VGA_INPUT_1 */
	dx = 0x003da;
	/* in	al,dx */
	IN(al, dx);
	// 0 ;* select index for horizontal pixel panning register
	/* mov	dx,VGA_ATTR */
	dx = 0x003c0;
	/* mov	al,VGA_ATTR_HPAN */
	al = 0x033;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* set random pan value
	/* call	FastRandX */
	CALLF(fastrandx, 0);
	/* and	al,HShake */
	AND(al, hshake);
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;----------------
	// 0 ;* vertical shake
	// 0 ;----------------
	/* call	FastRandX */
	CALLF(fastrandx, 0);
	/* and	al,VShake */
	AND(al, vshake);
	/* mov	bx,OFFSET VShakeTable */
	bx = m2c::near_offset_external(vshaketable);
	/* xlat */
	XLAT;
	/* mov	dx,VGA_CRTC */
	dx = 0x003d4;
	/* mov	ah,al */
	ah = al;
	/* mov	al,VGA_CRTC_LO */
	al = 0x00d;
	/* out	dx,ax */
	OUT(dx, ax);
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
                case m2c::kaboveclip: 	goto aboveclip;
        case m2c::kbelowclip: 	goto belowclip;
        case m2c::kclipdone: 	goto clipdone;
        case m2c::kcontbsprite: 	goto contbsprite;
        case m2c::kcontfade: 	goto contfade;
        case m2c::kcontmsprite: 	goto contmsprite;
        case m2c::kconvertvgadata: 	goto convertvgadata;
        case m2c::kconvloop0: 	goto convloop0;
        case m2c::kconvloop1: 	goto convloop1;
        case m2c::kconvloop2: 	goto convloop2;
        case m2c::kconvloop3: 	goto convloop3;
        case m2c::kcopyssloop: 	goto copyssloop;
        case m2c::kdloadcopy: 	goto dloadcopy;
        case m2c::kdloadflip: 	goto dloadflip;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel18: 	goto edummylabel18;
        case m2c::kedummylabel19: 	goto edummylabel19;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel20: 	goto edummylabel20;
        case m2c::kedummylabel21: 	goto edummylabel21;
        case m2c::kedummylabel22: 	goto edummylabel22;
        case m2c::kedummylabel23: 	goto edummylabel23;
        case m2c::kedummylabel24: 	goto edummylabel24;
        case m2c::kedummylabel25: 	goto edummylabel25;
        case m2c::kedummylabel26: 	goto edummylabel26;
        case m2c::kedummylabel27: 	goto edummylabel27;
        case m2c::kedummylabel28: 	goto edummylabel28;
        case m2c::kedummylabel29: 	goto edummylabel29;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel30: 	goto edummylabel30;
        case m2c::kedummylabel31: 	goto edummylabel31;
        case m2c::kedummylabel32: 	goto edummylabel32;
        case m2c::kedummylabel33: 	goto edummylabel33;
        case m2c::kedummylabel34: 	goto edummylabel34;
        case m2c::kedummylabel35: 	goto edummylabel35;
        case m2c::kedummylabel36: 	goto edummylabel36;
        case m2c::kedummylabel37: 	goto edummylabel37;
        case m2c::kedummylabel38: 	goto edummylabel38;
        case m2c::kedummylabel39: 	goto edummylabel39;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel40: 	goto edummylabel40;
        case m2c::kedummylabel41: 	goto edummylabel41;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kemeshendloop: 	goto emeshendloop;
        case m2c::kemeshptsfixed: 	goto emeshptsfixed;
        case m2c::kesmkendloop: 	goto esmkendloop;
        case m2c::kesmkptsfixed: 	goto esmkptsfixed;
        case m2c::kesmokeendloop: 	goto esmokeendloop;
        case m2c::kesmokeptsfixed: 	goto esmokeptsfixed;
        case m2c::kfadedone1: 	goto fadedone1;
        case m2c::kfadedone2: 	goto fadedone2;
        case m2c::kfadedone3: 	goto fadedone3;
        case m2c::kfadedown: 	goto fadedown;
        case m2c::kfadein: 	goto fadein;
        case m2c::kfadeloop1: 	goto fadeloop1;
        case m2c::kfadeloop2: 	goto fadeloop2;
        case m2c::kfadeloop3: 	goto fadeloop3;
        case m2c::kfadeout: 	goto fadeout;
        case m2c::kfadeoutloop: 	goto fadeoutloop;
        case m2c::kfadepalette: 	goto fadepalette;
        case m2c::kfadeup: 	goto fadeup;
        case m2c::kfillendloop: 	goto fillendloop;
        case m2c::kfixemeshpoints: 	goto fixemeshpoints;
        case m2c::kfixesmkpoints: 	goto fixesmkpoints;
        case m2c::kfixesmokepoints: 	goto fixesmokepoints;
        case m2c::kfixomeshpoints: 	goto fixomeshpoints;
        case m2c::kfixosmkpoints: 	goto fixosmkpoints;
        case m2c::kfixosmokepoints: 	goto fixosmokepoints;
        case m2c::kfixpoints: 	goto fixpoints;
        case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::khlineexit: 	goto hlineexit;
        case m2c::khlinelink: 	goto hlinelink;
        case m2c::khlinexok: 	goto hlinexok;
        case m2c::kinitmsexit: 	goto initmsexit;
        case m2c::kinitmsloop: 	goto initmsloop;
        case m2c::kinitqsexit: 	goto initqsexit;
        case m2c::kinitqsloop: 	goto initqsloop;
        case m2c::kinitssexit: 	goto initssexit;
        case m2c::kinitssloop: 	goto initssloop;
        case m2c::kinstantfadein: 	goto instantfadein;
        case m2c::kinstantfadeout: 	goto instantfadeout;
        case m2c::kintohline: 	goto intohline;
        case m2c::kintovline: 	goto intovline;
        case m2c::kleftclip: 	goto leftclip;
        case m2c::kmeshfillexit: 	goto meshfillexit;
        case m2c::knextemeshline: 	goto nextemeshline;
        case m2c::knextesmkline: 	goto nextesmkline;
        case m2c::knextesmokeline: 	goto nextesmokeline;
        case m2c::knextfillline: 	goto nextfillline;
        case m2c::knextomeshline: 	goto nextomeshline;
        case m2c::knextosmkline: 	goto nextosmkline;
        case m2c::knextosmokeline: 	goto nextosmokeline;
        case m2c::knoswap: 	goto noswap;
        case m2c::koct1: 	goto oct1;
        case m2c::koct1end: 	goto oct1end;
        case m2c::koct1lp: 	goto oct1lp;
        case m2c::koct1ok: 	goto oct1ok;
        case m2c::koct1ov: 	goto oct1ov;
        case m2c::koct2: 	goto oct2;
        case m2c::koct2end: 	goto oct2end;
        case m2c::koct2lp: 	goto oct2lp;
        case m2c::koct7: 	goto oct7;
        case m2c::koct7end: 	goto oct7end;
        case m2c::koct7lp: 	goto oct7lp;
        case m2c::koct8: 	goto oct8;
        case m2c::koct8end: 	goto oct8end;
        case m2c::koct8lp: 	goto oct8lp;
        case m2c::koct8ok: 	goto oct8ok;
        case m2c::koct8ov: 	goto oct8ov;
        case m2c::koffsetok: 	goto offsetok;
        case m2c::komeshendloop: 	goto omeshendloop;
        case m2c::komeshptsfixed: 	goto omeshptsfixed;
        case m2c::kosmkendloop: 	goto osmkendloop;
        case m2c::kosmkptsfixed: 	goto osmkptsfixed;
        case m2c::kosmokeendloop: 	goto osmokeendloop;
        case m2c::kosmokeptsfixed: 	goto osmokeptsfixed;
        case m2c::kpixelok: 	goto pixelok;
        case m2c::kpointsfixed: 	goto pointsfixed;
        case m2c::kprtc1exit: 	goto prtc1exit;
        case m2c::kprtc1loop: 	goto prtc1loop;
        case m2c::kprtc1over: 	goto prtc1over;
        case m2c::kprtc3exit: 	goto prtc3exit;
        case m2c::kprtc3loop: 	goto prtc3loop;
        case m2c::kprtc3over: 	goto prtc3over;
        case m2c::kqfadein: 	goto qfadein;
        case m2c::kqfadeout: 	goto qfadeout;
        case m2c::kqsloop1: 	goto qsloop1;
        case m2c::kqsloop2: 	goto qsloop2;
        case m2c::kqsloop3: 	goto qsloop3;
        case m2c::kqsloop4: 	goto qsloop4;
        case m2c::kreaddacblock: 	goto readdacblock;
        case m2c::krightclip: 	goto rightclip;
        case m2c::kscreenshaker: 	goto screenshaker;
        case m2c::ksetdacblock: 	goto setdacblock;
        case m2c::kshortemeshline: 	goto shortemeshline;
        case m2c::kshortesmkline: 	goto shortesmkline;
        case m2c::kshortesmokeline: 	goto shortesmokeline;
        case m2c::kshorthline: 	goto shorthline;
        case m2c::kshortline: 	goto shortline;
        case m2c::kshortomeshline: 	goto shortomeshline;
        case m2c::kshortosmkline: 	goto shortosmkline;
        case m2c::kshortosmokeline: 	goto shortosmokeline;
        case m2c::kskipfade: 	goto skipfade;
        case m2c::kskipload: 	goto skipload;
        case m2c::ksmkfillexit: 	goto smkfillexit;
        case m2c::ksmokefillexit: 	goto smokefillexit;
        case m2c::ksortdelta: 	goto sortdelta;
        case m2c::ksortpalette: 	goto sortpalette;
        case m2c::ksspritedone: 	goto sspritedone;
        case m2c::ksspriteexit: 	goto sspriteexit;
        case m2c::ksspriteout: 	goto sspriteout;
        case m2c::kunpackdeltapic: 	goto unpackdeltapic;
        case m2c::kunpackloop: 	goto unpackloop;
        case m2c::kupdatefade: 	goto updatefade;
        case m2c::kvga_bfill: 	goto vga_bfill;
        case m2c::kvga_bfillloop: 	goto vga_bfillloop;
        case m2c::kvga_bsprite: 	goto vga_bsprite;
        case m2c::kvga_calcaddr: 	goto vga_calcaddr;
        case m2c::kvga_dload: 	goto vga_dload;
        case m2c::kvga_hfill: 	goto vga_hfill;
        case m2c::kvga_hfilllp: 	goto vga_hfilllp;
        case m2c::kvga_hline: 	goto vga_hline;
        case m2c::kvga_initms: 	goto vga_initms;
        case m2c::kvga_initqs: 	goto vga_initqs;
        case m2c::kvga_initss: 	goto vga_initss;
        case m2c::kvga_ldmseexit: 	goto vga_ldmseexit;
        case m2c::kvga_ldmseloop1: 	goto vga_ldmseloop1;
        case m2c::kvga_ldmseloop2: 	goto vga_ldmseloop2;
        case m2c::kvga_ldmsemaplp: 	goto vga_ldmsemaplp;
        case m2c::kvga_line: 	goto vga_line;
        case m2c::kvga_loadmouse: 	goto vga_loadmouse;
        case m2c::kvga_loadscreen: 	goto vga_loadscreen;
        case m2c::kvga_mfill: 	goto vga_mfill;
        case m2c::kvga_msprite: 	goto vga_msprite;
        case m2c::kvga_pfill: 	goto vga_pfill;
        case m2c::kvga_prtc1: 	goto vga_prtc1;
        case m2c::kvga_prtc2: 	goto vga_prtc2;
        case m2c::kvga_prtc2com: 	goto vga_prtc2com;
        case m2c::kvga_prtc2norm: 	goto vga_prtc2norm;
        case m2c::kvga_prtc3: 	goto vga_prtc3;
        case m2c::kvga_qsprite: 	goto vga_qsprite;
        case m2c::kvga_savemouse: 	goto vga_savemouse;
        case m2c::kvga_savescreen: 	goto vga_savescreen;
        case m2c::kvga_setpx: 	goto vga_setpx;
        case m2c::kvga_sfill: 	goto vga_sfill;
        case m2c::kvga_ssprite: 	goto vga_ssprite;
        case m2c::kvga_svmseexit: 	goto vga_svmseexit;
        case m2c::kvga_svmseloop1: 	goto vga_svmseloop1;
        case m2c::kvga_svmseloop2: 	goto vga_svmseloop2;
        case m2c::kvga_svmsemaplp: 	goto vga_svmsemaplp;
        case m2c::kvga_vline: 	goto vga_vline;
        case m2c::kvga_vmode: 	goto vga_vmode;
        case m2c::kvlinelink: 	goto vlinelink;
        case m2c::kvlineloop: 	goto vlineloop;
        case m2c::kvlineyok: 	goto vlineyok;
        case m2c::kvloop1: 	goto vloop1;
        case m2c::kvloop2: 	goto vloop2;
        case m2c::kwritesprite: 	goto writesprite;
        case m2c::kwspritebytes: 	goto wspritebytes;
        case m2c::kwspritedone: 	goto wspritedone;
        case m2c::kwspriteloop: 	goto wspriteloop;
        default: return __dispatch_call(__disp, _state);
    };
}

