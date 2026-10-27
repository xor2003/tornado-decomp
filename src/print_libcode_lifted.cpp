/* THIS IS GENERATED FILE */

        
#include "print.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
printdol:
	// 587 
	/* push	ax ;* note: This routine is RECURSIVE. */
	PUSH(ax);
edummylabel1:
	// 4369 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
printdolloop:
	// 4371 
	/* Print$Loop:	lodsb */
	{ LODSB; }
	/* cmp	al,' '		;print function? */
	CMP(al, ' ');
	/* jb	SortPrint$Fn	;yes -> */
	if ((db)(al) < (db)(' ')) {goto sortprintdolfn;}
	/* call	FAR PTR PrintChar */
	CALLF(printchar, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
sortprintdolfn:
	// 4373 
	/* SortPrint$Fn:	mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
__disp=*(dw*)(((db*)&printdolfn)+bx);
	/* jmp	Print$Fn[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* Print$ functions
p_end:
	// 4375 
	/* P_END:		pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
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
p_input:
	// 4377 
	/* P_INPUT:	lodsb */
	{ LODSB; }
	/* mov	InputMode,al */
	inputmode = al;
	/* jmp	Print$Loop */
	goto printdolloop;
p_over0:
	// 4379 
	/* P_OVER0:	mov	PrintOver,0 */
	printover = 0;
	/* jmp	Print$Loop */
	goto printdolloop;
p_over1:
	// 4381 
	/* P_OVER1:	mov	PrintOver,1 */
	printover = 1;
	/* jmp	Print$Loop */
	goto printdolloop;
p_char1:
	// 4383 
	/* P_CHAR1:	mov	CharType,CHAR_TYPE1 */
	chartype = 0;
	/* jmp	Print$Loop */
	goto printdolloop;
p_char2:
	// 4385 
	/* P_CHAR2:	mov	CharType,CHAR_TYPE2 */
	chartype = 4;
	/* jmp	Print$Loop */
	goto printdolloop;
p_char3:
	// 4387 
	/* P_CHAR3:	mov	CharType,CHAR_TYPE3 */
	chartype = 8;
	/* jmp	Print$Loop */
	goto printdolloop;
p_crsr:
	// 4389 
	/* P_CRSR:		lodsb */
	{ LODSB; }
	/* mov	CursorChar,al */
	cursorchar = al;
	/* jmp	Print$Loop */
	goto printdolloop;
p_hexat:
	// 4391 
	/* P_HEXAT:	lodsb */
	{ LODSB; }
	/* mov	HexAttr,al */
	*(hexattr) = al;
	/* jmp	Print$Loop */
	goto printdolloop;
p_decat:
	// 4393 
	/* P_DECAT:	lodsb */
	{ LODSB; }
	/* mov	DecAttr,al */
	*(decattr) = al;
	/* jmp	Print$Loop */
	goto printdolloop;
p_bcdat:
	// 4395 
	/* P_BCDAT:	lodsb */
	{ LODSB; }
	/* mov	BCDAttr,al */
	*(bcdattr) = al;
	/* jmp	Print$Loop */
	goto printdolloop;
p_defcl:
	// 4397 
	/* P_DEFCL:	push	si */
	PUSH(si);
	/* mov	si,OFFSET DefaultCols */
	si = m2c::near_offset_external(defaultcols);
	/* call	SetAttributes */
	CALLF(setattributes, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
p_title:
	// 4399 
	/* P_TITLE:  	mov	CharType,CHAR_TYPE3 */
	chartype = 8;
	/* mov	PrintOver,0 */
	printover = 0;
	/* push	si */
	PUSH(si);
	/* mov	si,OFFSET DialogTitle */
	si = m2c::near_offset_external(dialogtitle);
	/* call	SetAttributes */
	CALLF(setattributes, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
p_text:
	// 4401 
	/* P_TEXT:		mov	CharType,CHAR_TYPE3 */
	chartype = 8;
	/* mov	PrintOver,0 */
	printover = 0;
	/* push	si */
	PUSH(si);
	/* mov	si,OFFSET DialogText */
	si = m2c::near_offset_external(dialogtext);
	/* call	SetAttributes */
	CALLF(setattributes, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
p_uline:
	// 4403 
	/* P_ULINE:     	mov	ax,PrtLn */
	ax = prtln;
	/* mov	TmpPrtLn,ax */
	tmpprtln = ax;
	/* mov	ax,PrtCl */
	ax = prtcl;
	/* mov	TmpPrtCl,ax */
	tmpprtcl = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
p_ulend:
	// 4405 
	/* P_ULEND:	cmp	CharType,CHAR_TYPE2 */
	CMP(chartype, 4);
	/* je	@F */
	if ((dw)(chartype) == (dw)(4)) {goto dummylabel1;}
	/* lodsb */
	{ LODSB; }
	/* mov	cx,TmpPrtCl */
	cx = tmpprtcl;
	/* mov	bl,BYTE PTR TmpPrtLn */
	bl = *(db*)(&tmpprtln);
	/* add	bl,9 */
	ADD(bl, 9);
	/* mov	dx,PrtCl */
	dx = prtcl;
	/* sub	dx,2 */
	SUB(dx, 2);
	/* push	si */
	PUSH(si);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
dummylabel1:
	// 4407 
	/* @@:		lodsb */
	{ LODSB; }
	/* mov	cx,TmpPrtCl */
	cx = tmpprtcl;
	/* mov	bl,BYTE PTR TmpPrtLn */
	bl = *(db*)(&tmpprtln);
	/* add	bl,6 */
	ADD(bl, 6);
	/* mov	dx,PrtCl */
	dx = prtcl;
	/* sub	dx,2 */
	SUB(dx, 2);
	/* push	si */
	PUSH(si);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
p_rect:
	// 4409 
	/* P_RECT:     	mov	ax,PrtLn */
	ax = prtln;
	/* mov	TmpPrtLn,ax */
	tmpprtln = ax;
	/* mov	ax,PrtCl */
	ax = prtcl;
	/* mov	TmpPrtCl,ax */
	tmpprtcl = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
p_rend:
	// 4411 
	/* P_REND:		cmp	CharType,CHAR_TYPE2 */
	CMP(chartype, 4);
	/* je	@F */
	if ((dw)(chartype) == (dw)(4)) {goto dummylabel2;}
	/* lodsb */
	{ LODSB; }
	/* mov	cx,TmpPrtCl */
	cx = tmpprtcl;
	/* sub	cx,3 */
	SUB(cx, 3);
	/* mov	bl,BYTE PTR TmpPrtLn */
	bl = *(db*)(&tmpprtln);
	/* sub	bl,3 */
	SUB(bl, 3);
	/* mov	dx,PrtCl */
	dx = prtcl;
	/* add	dx,1 */
	ADD(dx, 1);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,12 */
	ADD(bh, 12);
	/* push	si */
	PUSH(si);
	/* call	DrawRectangle */
	CALLF(drawrectangle, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
dummylabel2:
	// 4413 
	/* @@:		lodsb */
	{ LODSB; }
	/* mov	cx,TmpPrtCl */
	cx = tmpprtcl;
	/* sub	cx,2 */
	SUB(cx, 2);
	/* mov	bl,BYTE PTR TmpPrtLn */
	bl = *(db*)(&tmpprtln);
	/* sub	bl,2 */
	SUB(bl, 2);
	/* mov	dx,PrtCl */
	dx = prtcl;
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,8 */
	ADD(bh, 8);
	/* push	si */
	PUSH(si);
	/* call	DrawRectangle */
	CALLF(drawrectangle, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
p_nop:
	// 4415 
	/* P_NOP:		jmp	Print$Loop */
	goto printdolloop;
p_ext:
	// 4417 
	/* P_EXT:		lodsb			;fetch extended code */
	{ LODSB; }
	/* cmp	al,MAX_EXT_FN	;in range? */
	CMP(al, 95);
	/* jbe	ExtOk		;yes -> */
	if ((db)(al) <= (db)(95)) {goto extok;}
	/* jmp	P_END		;terminate string -> */
	goto p_end;
extok:
	// 4419 
	/* ExtOk:		mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
__disp=*(dw*)(((db*)&extprintdolfn)+bx);
	/* jmp	ExtPrint$Fn[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* extended Print$ functions
pv_chr:
	// 4421 
	/* PV_CHR:		lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	al,[bx] */
	al = m2c::getdata(*(raddr(ds,bx)));
	/* call	FAR PTR PrintChar */
	CALLF(printchar, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_str:
	// 4423 
	/* PV_STR:		lodsw */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* call	Print$ */
	CALLF(printdol, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
pp_str:
	// 4425 
	/* PP_STR:		lodsw */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* mov	ax,[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* mov	si,ax */
	si = ax;
	/* call	Print$ */
	CALLF(printdol, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_hexb:
	// 4427 
	/* PD_HEXB:	lodsb */
	{ LODSB; }
	/* call	FAR PTR PrintHexByte */
	CALLF(printhexbyte, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_hexb:
	// 4429 
	/* PV_HEXB:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	al,[bx] */
	al = m2c::getdata(*(raddr(ds,bx)));
	/* call	FAR PTR PrintHexByte */
	CALLF(printhexbyte, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_hexw:
	// 4431 
	/* PD_HEXW:	lodsw */
	{ LODSW; }
	/* call	FAR PTR PrintHexWord */
	CALLF(printhexword, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_hexw:
	// 4433 
	/* PV_HEXW:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* call	FAR PTR PrintHexWord */
	CALLF(printhexword, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_hexl:
	// 4435 
	/* PD_HEXL:	lodsw */
	{ LODSW; }
	/* mov	dx,ax */
	dx = ax;
	/* lodsw */
	{ LODSW; }
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* call	FAR PTR PrintHexLong */
	CALLF(printhexlong, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_hexl:
	// 4437 
	/* PV_HEXL:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	dx,[bx+2] */
	dx = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* call	FAR PTR PrintHexLong */
	CALLF(printhexlong, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_decb:
	// 4439 
	/* PD_DECB:	lodsb */
	{ LODSB; }
	/* call	FAR PTR PrintDecByte */
	CALLF(printdecbyte, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_decb:
	// 4441 
	/* PV_DECB:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	al,[bx] */
	al = m2c::getdata(*(raddr(ds,bx)));
	/* call	FAR PTR PrintDecByte */
	CALLF(printdecbyte, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_decw:
	// 4443 
	/* PD_DECW:	lodsw */
	{ LODSW; }
	/* call	FAR PTR PrintDecWord */
	CALLF(printdecword, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_decw:
	// 4445 
	/* PV_DECW:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* call	FAR PTR PrintDecWord */
	CALLF(printdecword, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pp_decw:
	// 4447 
	/* PP_DECW:	lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* call	FAR PTR PrintDecWord */
	CALLF(printdecword, 0);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_x:
	// 4449 
	/* PD_X:		lodsw */
	{ LODSW; }
	/* mov	PrtCl,ax */
	prtcl = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pv_x:
	// 4451 
	/* PV_X:		lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	PrtCl,ax */
	prtcl = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pd_y:
	// 4453 
	/* PD_Y:		lodsw */
	{ LODSW; }
	/* mov	PrtLn,ax */
	prtln = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pv_y:
	// 4455 
	/* PV_Y:		lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	PrtLn,ax */
	prtln = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pd_xy:
	// 4457 
	/* PD_XY:		lodsw */
	{ LODSW; }
	/* mov	PrtCl,ax */
	prtcl = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	PrtLn,ax */
	prtln = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pv_xy:
	// 4459 
	/* PV_XY:		lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	PrtCl,ax */
	prtcl = ax;
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	PrtLn,ax */
	prtln = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pd_xmov:
	// 4461 
	/* PD_XMOV:	lodsw */
	{ LODSW; }
	/* add	PrtCl,ax */
	ADD(prtcl, ax);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_ymov:
	// 4463 
	/* PD_YMOV:  	lodsw */
	{ LODSW; }
	/* add	PrtLn,ax */
	ADD(prtln, ax);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_xymv:
	// 4465 
	/* PD_XYMV:  	lodsw */
	{ LODSW; }
	/* add	PrtCl,ax */
	ADD(prtcl, ax);
	/* lodsw */
	{ LODSW; }
	/* add	PrtLn,ax */
	ADD(prtln, ax);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_attr:
	// 4467 
	/* PD_ATTR:	call	SetAttributes */
	CALLF(setattributes, 0);
	/* add	si,8 */
	ADD(si, 8);
	/* jmp	Print$Loop */
	goto printdolloop;
pv_attr:
	// 4469 
	/* PV_ATTR:	lodsw */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* call	SetAttributes */
	CALLF(setattributes, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
pp_attr:
	// 4471 
	/* PP_ATTR:	lodsw */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* mov	ax,[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* mov	si,ax */
	si = ax;
	/* call	SetAttributes */
	CALLF(setattributes, 0);
	/* pop	si */
	POP(si);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_sspr:
	// 4473 
	/* PD_SSPR:	mov	bx,S_SPRITE */
	bx = 0;
	/* jmp	ContDSprite */
	goto contdsprite;
pd_mspr:
	// 4475 
	/* PD_MSPR:	mov	bx,M_SPRITE */
	bx = 4;
	/* jmp	ContDSprite */
	goto contdsprite;
pd_qspr:
	// 4477 
	/* PD_QSPR:	mov	bx,Q_SPRITE */
	bx = 8;
contdsprite:
	// 4479 
	/* ContDSprite:	push	si */
	PUSH(si);
	/* call	SpriteType[bx] */
	CALLF(__dispatch_call_ext, *(dd*)(((db*)&spritetype)+bx));
	/* pop	si */
	POP(si);
	/* add	si,6 */
	ADD(si, 6);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_line:
	// 4481 
	/* PD_LINE:	mov	al,[si+0]	;col */
	al = m2c::getdata(*(raddr(ds,si+0)));
	/* mov	cx,[si+2]	;x1 */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+2)));
	/* mov	bl,[si+4]	;y1 */
	bl = m2c::getdata(*(raddr(ds,si+4)));
	/* mov	dx,[si+6]	;x2 */
	dx = m2c::getdata(*(dw*)(raddr(ds,si+6)));
	/* mov	bh,[si+8]	;y2 */
	bh = m2c::getdata(*(raddr(ds,si+8)));
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* add	si,10 */
	ADD(si, 10);
	/* jmp	Print$Loop */
	goto printdolloop;
pd_vga:
	// 4483 
	/* PD_VGA:		lodsb */
	{ LODSB; }
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR ForeCol,ax */
	*(dw*)(&forecol) = ax;
	/* lodsb */
	{ LODSB; }
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR BackCol,ax */
	*(dw*)(&backcol) = ax;
	/* jmp	Print$Loop */
	goto printdolloop;
pv_pdeg:
	// 4485 
	/* PV_PDEG:	push	WORD PTR DecAttr */
	PUSH(*(dw*)(decattr));
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* mov	dx,23040 */
	dx = 23040;
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
	/* jnz	@F */
	if (dx != 0) {goto dummylabel3;}
	/* mov	ax,360 */
	ax = 360;
dummylabel3:
	// 4487 
	/* @@:		mov	DecAttr,00100011b	;(unsigned, 3 digits, leading zeroes) */
	*(decattr) = 0x23;
	/* call	FAR PTR PrintDecWord */
	CALLF(printdecword, 0);
	/* pop	WORD PTR DecAttr */
	POP(*(dw*)(decattr));
	/* jmp	Print$Loop */
	goto printdolloop;
pv_rng:
	// 4489 
	/* PV_RNG:		push	WORD PTR DecAttr */
	PUSH(*(dw*)(decattr));
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* push	dx */
	PUSH(dx);
	/* mov	DecAttr,00000011b	;(unsigned, 3 digits, leading spaces) */
	*(decattr) = 0x3;
	/* call	FAR PTR PrintDecWord */
	CALLF(printdecword, 0);
	/* mov	al,'.' */
	al = '.';
	/* call	FAR PTR PrintChar */
	CALLF(printchar, 0);
	/* pop	ax */
	POP(ax);
	/* add	al,'0' */
	ADD(al, '0');
	/* call	FAR PTR PrintChar */
	CALLF(printchar, 0);
	/* pop	WORD PTR DecAttr */
	POP(*(dw*)(decattr));
	/* jmp	Print$Loop */
	goto printdolloop;
pv_eta:
	// 4491 
	/* PV_ETA:		push	WORD PTR DecAttr */
	PUSH(*(dw*)(decattr));
	/* lodsw */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,[bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,bx)));
	/* cmp	ax,(60*60)-1 */
	CMP(ax, (60*60)-1);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)((60*60)-1)) {goto dummylabel4;}
	/* mov	ax,(60*60)-1 */
	ax = (60*60)-1;
dummylabel4:
	// 4493 
	/* @@:		mov	bl,60 */
	bl = 60;
	/* div	bl */
	DIV1(bl);
	/* mov	DecAttr,00000010b	;(unsigned, 2 digits, leading spaces) */
	*(decattr) = 0x2;
	/* call	FAR PTR PrintDecByte */
	CALLF(printdecbyte, 0);
	/* mov	al,':' */
	al = ':';
	/* call	FAR PTR PrintChar */
	CALLF(printchar, 0);
	/* mov	al,ah */
	al = ah;
	/* mov	DecAttr,00100010b	;(unsigned, 2 digits, leading zeroes) */
	*(decattr) = 0x22;
	/* call	FAR PTR PrintDecByte */
	CALLF(printdecbyte, 0);
	/* pop	WORD PTR DecAttr */
	POP(*(dw*)(decattr));
	/* jmp	Print$Loop */
	goto printdolloop;
printchar:
	// 950 
	/* push	bp ;*       No checks are made for PrtLn and PrtCl being off screen. */
	PUSH(bp);
	/* mov	bp,CharType */
	bp = chartype;
	/* call	_PrintChar[bp] */
	CALLF(__dispatch_call_ext, *(dd*)(((db*)&_printchar)+bp));
	/* pop	bp */
	POP(bp);
	/* ret */
	RETF(0);
printhexbyte:
	// 967 
	/* push	ax ;* kill: flags */
	PUSH(ax);
edummylabel2:
	// 4495 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	cl,al */
	cl = al;
	/* call	HexHeader */
	CALL(hexheader, 0);
	/* mov	al,cl */
	al = cl;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* call	HexFooter */
	CALL(hexfooter, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
printhexword:
	// 991 
	/* push	ax ;* kill: flags */
	PUSH(ax);
edummylabel3:
	// 4497 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	cx,ax */
	cx = ax;
	/* call	HexHeader */
	CALL(hexheader, 0);
	/* mov	al,ch */
	al = ch;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* mov	al,cl */
	al = cl;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* call	HexFooter */
	CALL(hexfooter, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
printhexlong:
	// 1017 
	/* push	ax ;* kill: flags */
	PUSH(ax);
edummylabel4:
	// 4499 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	cx,ax */
	cx = ax;
	/* call	HexHeader */
	CALL(hexheader, 0);
	/* mov	al,dh */
	al = dh;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* mov	al,dl */
	al = dl;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* mov	al,ch */
	al = ch;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* mov	al,cl */
	al = cl;
	/* call	HexByte */
	CALL(hexbyte, 0);
	/* call	HexFooter */
	CALL(hexfooter, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETF(0);
hexheader:
	// 1045 
	/* mov	ah,HexAttr ;* kill: ax, flags */
	ah = *(hexattr);
edummylabel5:
	// 4501 
	/* test	ah,0001b	;leading '$'? */
	TEST(ah, 0x1);
	/* jz	NoHex_$ */
	if (!(ah & 0x1)) {goto nohex_dol;}
	/* mov	al,'$' */
	al = '$';
	/* call	PrintChar */
	CALLF(printchar, 0);
nohex_dol:
	// 4503 
	/* NoHex_$:  	test	ah,0010b	;leading '0'? */
	TEST(ah, 0x2);
	/* jz	NoHex_0 */
	if (!(ah & 0x2)) {goto nohex_0;}
	/* mov	al,'0' */
	al = '0';
	/* call	PrintChar */
	CALLF(printchar, 0);
nohex_0:
	// 4505 
	/* NoHex_0:  	ret */
	RETN(0);
hexbyte:
	// 1065 
	/* mov	bx,OFFSET HexChars ;* kill: ax, bx, flags */
	bx = m2c::near_offset_external(hexchars);
edummylabel6:
	// 4507 
	/* mov	ah,al */
	ah = al;
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
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* mov	al,ah */
	al = ah;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* xlat */
	XLAT;
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* ret */
	RETN(0);
hexfooter:
	// 1088 
	/* mov	ah,HexAttr ;* kill: ax, flags */
	ah = *(hexattr);
edummylabel7:
	// 4509 
	/* test	ah,0100b	;trailing 'h'? */
	TEST(ah, 0x4);
	/* jz	NoHex_h */
	if (!(ah & 0x4)) {goto nohex_h;}
	/* mov	al,'h' */
	al = 'h';
	/* call	PrintChar */
	CALLF(printchar, 0);
nohex_h:
	// 4511 
	/* NoHex_h: 	test	ah,1000b	;trailing ' '? */
	TEST(ah, 0x8);
	/* jz	NoHex_Sp */
	if (!(ah & 0x8)) {goto nohex_sp;}
	/* mov	al,' ' */
	al = ' ';
	/* call	PrintChar */
	CALLF(printchar, 0);
nohex_sp:
	// 4513 
	/* NoHex_Sp:	ret */
	RETN(0);
printdecbyte:
	// 1110 
	/* push 	ax ;* kill: flags */
	PUSH(ax);
edummylabel8:
	// 4515 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	bl,DecAttr	;attribute flags */
	bl = *(decattr);
	/* mov	cx,3		;default digit field width */
	cx = 3;
	/* mov	bh,al */
	bh = al;
	/* and	al,bl		;b7 = 1 if negative and signed */
	AND(al, bl);
	/* cbw */
	CBW;
	/* mov	al,bh		;ax = decimal word */
	al = bh;
	/* jmp	PrintDecCom	;use PrintDecWord routime -> */
	goto printdeccom;
printdecword:
	// 1132 
	/* push 	ax ;* kill: flags */
	PUSH(ax);
edummylabel9:
	// 4517 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	bl,DecAttr	;attribute flags */
	bl = *(decattr);
	/* mov	cx,5		;default digit field width */
	cx = 5;
printdeccom:
	// 4519 
	/* PrintDecCom:	push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* set digit field width
	/* test	bl,1111b	;use default digit field width? */
	TEST(bl, 0xf);
	/* jz	DefaultWidth	;yes -> */
	if (!(bl & 0xf)) {goto defaultwidth;}
	/* mov	cx,bx */
	cx = bx;
	/* and	cx,1111b	;digit field width */
	AND(cx, 0xf);
	// 0 ;* look up sign character
defaultwidth:
	// 4521 
	/* DefaultWidth:	xor	si,si */
	XOR(si, si);
	/* xor	dx,dx		;assume unsigned */
	XOR(dx, dx);
	/* shl	bl,1	       	;is number signed? */
	SHL(bl, 1);
	/* jnc	UnsignedNum	;no -> */
	if (!CF) {goto unsignednum;}
	/* rcl	si,1 */
	RCL(si, 1);
	/* cwd */
	CWD;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx		;two's comp */
	SUB(ax, dx);
unsignednum:
	// 4523 
	/* UnsignedNum:	shl	bl,1		;use ' ' or '+' for pos signed numbers */
	SHL(bl, 1);
	/* rcl	si,1 */
	RCL(si, 1);
	/* shl	dx,1		;sign of number */
	SHL(dx, 1);
	/* rcl	si,1 */
	RCL(si, 1);
	/* mov	bh,SignChar[si] */
	bh = *((signchar)+si);
	// 0 ;* look up leading character
	/* xor	si,si */
	XOR(si, si);
	/* shl	bl,1		;leading char for right justified */
	SHL(bl, 1);
	/* rcl	si,1 */
	RCL(si, 1);
	/* shl	bl,1		;right or left justify */
	SHL(bl, 1);
	/* rcl	si,1 */
	RCL(si, 1);
	/* mov	bl,LeadingChar[si] */
	bl = *((leadingchar)+si);
	// 0 ;* clear num buffer
	/* mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	di,OFFSET NumBuffer */
	di = m2c::near_offset_external(numbuffer);
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* stosw */
	{ STOSW; }
	/* mov	ax,dx */
	ax = dx;
	/* dec	di */
	DEC(di);
	// 0 ;* ax = absolute number
	// 0 ;* bl = leading character
	// 0 ;* bh = sign character
	// 0 ;* cx = digit field width
	// 0 ;* di -> end of NumBuffer
	// 0 ;* sort out decimal number
	/* mov	si,10 */
	si = 10;
decdivloop:
	// 4525 
	/* DecDivLoop:	xor	dx,dx */
	XOR(dx, dx);
	/* div	si		;dl = lsd */
	DIV2(si);
	/* add	dl,'0'		;convert to ASCII */
	ADD(dl, '0');
	/* mov	[di],dl */
	m2c::setdata(&(*(raddr(ds,di))), m2c::getdata(dl));
	/* dec	di */
	DEC(di);
	/* dec	cx */
	DEC(cx);
	/* test	ax,ax		;is quotient 0? */
	TEST(ax, ax);
	/* jz	DecDivDone	;yes -> */
	if (!(ax & ax)) {goto decdivdone;}
	/* test	cx,cx		;all digits done? */
	TEST(cx, cx);
	/* jnz	DecDivLoop	;no -> */
	if ((cx & cx) != 0) {goto decdivloop;}
	// 0 ;* sort out sign and leading characters
decdivdone:
	// 4527 
	/* DecDivDone:	std			;<<<< AUTO-DECREMENT !!! <<<<< */
	STD;
	/* cmp	bl,'0'		;is leading char '0'? */
	CMP(bl, '0');
	/* je	LeadingZero	;yes, sign char not required yet -> */
	if ((db)(bl) == (db)('0')) {goto leadingzero;}
	/* mov	al,bh */
	al = bh;
	/* stosb			;insert sign char into buffer */
	{ STOSB; }
leadingzero:
	// 4529 
	/* LeadingZero:	mov	al,bl */
	al = bl;
	// 1212 rep	stosb		;insert leading chars (if any)
	/* rep	stosb		;insert leading chars (if any) */
	REP STOSB;
skipleadingchar:
	// 4531 
	/* SkipLeadingChar:cmp	bl,'0'		;is leading char '0'? */
	CMP(bl, '0');
	/* jne	PrintNumBuffer	;no, sign char already inserted -> */
	if ((db)(bl) != (db)('0')) {goto printnumbuffer;}
	/* mov	al,bh */
	al = bh;
	/* stosb */
	{ STOSB; }
	// 0 ;* now print the buffer
printnumbuffer:
	// 4533 
	/* PrintNumBuffer:	cld			;<<<<< AUTO-INCREMENT !!! <<<<< */
	CLD;
	/* mov	cx,16 */
	cx = 16;
	/* mov	si,OFFSET NumBuffer */
	si = m2c::near_offset_external(numbuffer);
printnumloop:
	// 4535 
	/* PrintNumLoop:	lodsb */
	{ LODSB; }
	/* test	al,al		;null character? */
	TEST(al, al);
	/* jz	NullChar	;yes -> */
	if (!(al & al)) {goto nullchar;}
	/* call	PrintChar */
	CALLF(printchar, 0);
nullchar:
	// 4537 
	/* NullChar:	loop	PrintNumLoop */
	LOOP(printnumloop);
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

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcontdsprite: 	goto contdsprite;
        case m2c::kdecdivdone: 	goto decdivdone;
        case m2c::kdecdivloop: 	goto decdivloop;
        case m2c::kdefaultwidth: 	goto defaultwidth;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kextok: 	goto extok;
        case m2c::khexbyte: 	goto hexbyte;
        case m2c::khexfooter: 	goto hexfooter;
        case m2c::khexheader: 	goto hexheader;
        case m2c::kleadingzero: 	goto leadingzero;
        case m2c::knohex_0: 	goto nohex_0;
        case m2c::knohex_dol: 	goto nohex_dol;
        case m2c::knohex_h: 	goto nohex_h;
        case m2c::knohex_sp: 	goto nohex_sp;
        case m2c::knullchar: 	goto nullchar;
        case m2c::kp_bcdat: 	goto p_bcdat;
        case m2c::kp_char1: 	goto p_char1;
        case m2c::kp_char2: 	goto p_char2;
        case m2c::kp_char3: 	goto p_char3;
        case m2c::kp_crsr: 	goto p_crsr;
        case m2c::kp_decat: 	goto p_decat;
        case m2c::kp_defcl: 	goto p_defcl;
        case m2c::kp_end: 	goto p_end;
        case m2c::kp_ext: 	goto p_ext;
        case m2c::kp_hexat: 	goto p_hexat;
        case m2c::kp_input: 	goto p_input;
        case m2c::kp_nop: 	goto p_nop;
        case m2c::kp_over0: 	goto p_over0;
        case m2c::kp_over1: 	goto p_over1;
        case m2c::kp_rect: 	goto p_rect;
        case m2c::kp_rend: 	goto p_rend;
        case m2c::kp_text: 	goto p_text;
        case m2c::kp_title: 	goto p_title;
        case m2c::kp_ulend: 	goto p_ulend;
        case m2c::kp_uline: 	goto p_uline;
        case m2c::kpd_attr: 	goto pd_attr;
        case m2c::kpd_decb: 	goto pd_decb;
        case m2c::kpd_decw: 	goto pd_decw;
        case m2c::kpd_hexb: 	goto pd_hexb;
        case m2c::kpd_hexl: 	goto pd_hexl;
        case m2c::kpd_hexw: 	goto pd_hexw;
        case m2c::kpd_line: 	goto pd_line;
        case m2c::kpd_mspr: 	goto pd_mspr;
        case m2c::kpd_qspr: 	goto pd_qspr;
        case m2c::kpd_sspr: 	goto pd_sspr;
        case m2c::kpd_vga: 	goto pd_vga;
        case m2c::kpd_x: 	goto pd_x;
        case m2c::kpd_xmov: 	goto pd_xmov;
        case m2c::kpd_xy: 	goto pd_xy;
        case m2c::kpd_xymv: 	goto pd_xymv;
        case m2c::kpd_y: 	goto pd_y;
        case m2c::kpd_ymov: 	goto pd_ymov;
        case m2c::kpp_attr: 	goto pp_attr;
        case m2c::kpp_decw: 	goto pp_decw;
        case m2c::kpp_str: 	goto pp_str;
        case m2c::kprintchar: 	goto printchar;
        case m2c::kprintdecbyte: 	goto printdecbyte;
        case m2c::kprintdeccom: 	goto printdeccom;
        case m2c::kprintdecword: 	goto printdecword;
        case m2c::kprintdol: 	goto printdol;
        case m2c::kprintdolloop: 	goto printdolloop;
        case m2c::kprinthexbyte: 	goto printhexbyte;
        case m2c::kprinthexlong: 	goto printhexlong;
        case m2c::kprinthexword: 	goto printhexword;
        case m2c::kprintnumbuffer: 	goto printnumbuffer;
        case m2c::kprintnumloop: 	goto printnumloop;
        case m2c::kpv_attr: 	goto pv_attr;
        case m2c::kpv_chr: 	goto pv_chr;
        case m2c::kpv_decb: 	goto pv_decb;
        case m2c::kpv_decw: 	goto pv_decw;
        case m2c::kpv_eta: 	goto pv_eta;
        case m2c::kpv_hexb: 	goto pv_hexb;
        case m2c::kpv_hexl: 	goto pv_hexl;
        case m2c::kpv_hexw: 	goto pv_hexw;
        case m2c::kpv_pdeg: 	goto pv_pdeg;
        case m2c::kpv_rng: 	goto pv_rng;
        case m2c::kpv_str: 	goto pv_str;
        case m2c::kpv_x: 	goto pv_x;
        case m2c::kpv_xy: 	goto pv_xy;
        case m2c::kpv_y: 	goto pv_y;
        case m2c::kskipleadingchar: 	goto skipleadingchar;
        case m2c::ksortprintdolfn: 	goto sortprintdolfn;
        case m2c::kunsignednum: 	goto unsignednum;
        default: return __dispatch_call(__disp, _state);
    };
}

