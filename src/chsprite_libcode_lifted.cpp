/* THIS IS GENERATED FILE */

        
#include "chsprite.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
charsprite:
	// 50 
	/* mov	Col,al ;* kill: assume all */
	*(col) = al;
	// 0 ;* offset x, y to top lh corner of char
edummylabel1:
	// 4369 
	/* sub	cx,1 */
	SUB(cx, 1);
	/* sub	bx,2 */
	SUB(bx, 2);
	// 0 ;* calc ptr to char cell data
	/* sub	dl,' '		;char set starts with space */
	SUB(dl, ' ');
	/* xor	dh,dh */
	XOR(dh, dh);
	/* mov	si,OFFSET Standard_3by5 */
	si = m2c::near_offset_external(standard_3by5);
	/* add	si,dx		;char * 1 */
	ADD(si, dx);
	/* shl	dx,1		;*2 */
	SHL(dx, 1);
	/* shl	dx,1		;*4 */
	SHL(dx, 1);
	/* add	si,dx		;char * 5 */
	ADD(si, dx);
	// 0 ;* y print loop
	/* mov	ah,5		;y cntr */
	ah = 5;
	/* jmp	YLoop */
	goto yloop;
nexty:
	// 4371 
	/* NextY:		inc	bx		;y = y + 1 */
	INC(bx);
	/* dec	ah */
	DEC(ah);
	/* jnz	YLoop */
	if (ah != 0) {goto yloop;}
	/* ret */
	RETF(0);
yloop:
	// 4373 
	/* YLoop:		lodsb			;fetch char cell data */
	{ LODSB; }
	/* test	al,al		;blank? */
	TEST(al, al);
	/* jz	NextY		;yes -> */
	if (!(al & al)) {goto nexty;}
	/* cmp	bx,CellYMin	;above clipping window? */
	CMP(bx, cellymin);
	/* jl	NextY		;yes -> */
	if ((short)(bx) < (short)(cellymin)) {goto nexty;}
	/* cmp	bx,CellYMax	;below clipping window? */
	CMP(bx, cellymax);
	/* jg	NextY		;yes -> */
	if ((short)(bx) > (short)(cellymax)) {goto nexty;}
	/* push	cx		;store x co-ord */
	PUSH(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel1;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel1;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel1;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel1:
	// 4375 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel2;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel2;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel2;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel2:
	// 4377 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel3;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel3;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel3;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel3:
	// 4379 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel4;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel4;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel4;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel4:
	// 4381 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 178 call	SetPixel */
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 179 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 180 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 181 call	SetPixel
	/* pop	cx		;restore x co-ord */
	POP(cx);
	/* jmp	NextY */
	goto nexty;
edummylabel2:
	// 4383 
	/* ret */
	RETF(0);
cellsprite:
	// 209 
	/* mov	Col,al ;*       	........ 7 */
	*(col) = al;
	// 0 ;* offset x, y to top lh corner of cell
edummylabel3:
	// 4385 
	/* sub	cx,3 */
	SUB(cx, 3);
	/* sub	bx,3 */
	SUB(bx, 3);
	// 0 ;* y print loop
	/* mov	ah,8		;y cntr */
	ah = 8;
	/* jmp	CellYLoop */
	goto cellyloop;
cellnexty:
	// 4387 
	/* CellNextY:	inc	bx		;y = y + 1 */
	INC(bx);
	/* dec	ah */
	DEC(ah);
	/* jnz	CellYLoop */
	if (ah != 0) {goto cellyloop;}
	/* ret */
	RETF(0);
cellyloop:
	// 4389 
	/* CellYLoop:	lodsb			;fetch char cell data */
	{ LODSB; }
	/* test	al,al		;blank? */
	TEST(al, al);
	/* jz	CellNextY	;yes -> */
	if (!(al & al)) {goto cellnexty;}
	/* cmp	bx,CellYMin	;above clipping window? */
	CMP(bx, cellymin);
	/* jl	CellNextY	;yes -> */
	if ((short)(bx) < (short)(cellymin)) {goto cellnexty;}
	/* cmp	bx,CellYMax	;below clipping window? */
	CMP(bx, cellymax);
	/* jg	CellNextY 	;yes -> */
	if ((short)(bx) > (short)(cellymax)) {goto cellnexty;}
	/* push	cx		;store x co-ord */
	PUSH(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel5;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel5;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel5;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel5:
	// 4391 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel6;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel6;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel6;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel6:
	// 4393 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel7;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel7;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel7;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel7:
	// 4395 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel8;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel8;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel8;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel8:
	// 4397 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel9;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel9;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel9;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel9:
	// 4399 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel10;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel10;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel10;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel10:
	// 4401 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel11;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel11;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel11;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel11:
	// 4403 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* shl	al,1		;draw pixel? */
	SHL(al, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel12;}
	/* cmp	cx,CellXMin	;left of clipping window? */
	CMP(cx, cellxmin);
	/* jl	@F		;yes -> */
	if ((short)(cx) < (short)(cellxmin)) {goto dummylabel12;}
	/* cmp	cx,CellXMax	;right of clipping window? */
	CMP(cx, cellxmax);
	/* jg	@F		;yes -> */
	if ((short)(cx) > (short)(cellxmax)) {goto dummylabel12;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	al,Col */
	al = *(col);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
dummylabel12:
	// 4405 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 424 call	SetPixel */
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 425 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 426 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 427 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 428 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 429 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 430 call	SetPixel
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 431 call	SetPixel
	/* pop	cx		;restore x co-ord */
	POP(cx);
	/* jmp	CellNextY */
	goto cellnexty;
edummylabel4:
	// 4407 
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
                case m2c::kcellnexty: 	goto cellnexty;
        case m2c::kcellsprite: 	goto cellsprite;
        case m2c::kcellyloop: 	goto cellyloop;
        case m2c::kcharsprite: 	goto charsprite;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
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
        case m2c::knexty: 	goto nexty;
        case m2c::kyloop: 	goto yloop;
        default: return __dispatch_call(__disp, _state);
    };
}

