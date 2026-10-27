/* THIS IS GENERATED FILE */

        
#include "mathfunc.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
calcdeltatime:
	// 329 
	// 0 ;* check LastFrame <= max time
edummylabel1:
	// 4369 
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* cmp	ax,100 */
	CMP(ax, 100);
	/* jbe	TimeOk */
	if ((dw)(ax) <= (dw)(100)) {goto timeok;}
	/* mov	ax,100 */
	ax = 100;
	/* mov	LastFrame,ax */
	lastframe = ax;
	// 0 ;* look up DeltaTime wrt LastFrame
timeok:
	// 4371 
	/* TimeOk:		mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,DeltaTable[bx] */
	ax = *(dw*)(((db*)&deltatable)+bx);
	/* mov	DeltaTime,ax */
	deltatime = (getenv("M2C_LFC") && atoi(getenv("M2C_LFC"))>0) ? atoi(getenv("M2C_LFC")) : ax;
	/* ret */
	RETF(0);
calcdeltaxy:
	// 356 
	/* mov	bp,dx		;store factor */
	bp = dx;
edummylabel2:
	// 4373 
	/* shl	ax,1		;0 .. 511 * 2 */
	SHL(ax, 1);
	/* mov	bl,al		;bl = 0 .. 127 * 2 (within quadrant) */
	bl = al;
	/* shl	ax,1		;ah = octant (0 .. 7) */
	SHL(ax, 1);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* and	ax,0111b */
	AND(ax, 0x7);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* mov	di,ax		;di = octant trig / sign table index */
	di = ax;
	/* mov	al,bl */
	al = bl;
	/* cbw */
	CBW;
	/* xor	al,ah		;1s comp */
	XOR(al, ah);
	/* sub	al,ah		;2s comp */
	SUB(al, ah);
	// 0 ;neg angle if 64 .. 127 * 2
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh		;bx = sin / cos table index */
	XOR(bh, bh);
	/* mov	si,OctTrigTable[di] */
	si = *(dw*)(((db*)&octtrigtable)+di);
	/* mov	ax,[si+bx]	;ax = trig(theta) */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
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
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = trig(theta) * factor
	/* mov	ax,OctSignTable[di] */
	ax = *(dw*)(((db*)&octsigntable)+di);
	/* xor	cx,ax		;restore sign */
	XOR(cx, ax);
	/* sub	cx,ax		;cx = delta x */
	SUB(cx, ax);
	/* mov	si,OctTrigTable[di+2] */
	si = *(dw*)(((db*)&octtrigtable)+di+2);
	/* mov	ax,[si+bx]	;ax = trig(theta) */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
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
	/* mov	bx,dx */
	bx = dx;
	// 0 ;bx = trig(theta) * factor
	/* mov	ax,OctSignTable[di+2] */
	ax = *(dw*)(((db*)&octsigntable)+di+2);
	/* xor	bx,ax		;restore sign */
	XOR(bx, ax);
	/* sub	bx,ax		;bx = delta y */
	SUB(bx, ax);
	/* ret */
	RETF(0);
sqrt:
	// 431 
	/* test	ax,ax		;zero? */
	TEST(ax, ax);
edummylabel3:
	// 4375 
	/* jz	SqrtExit	;yes -> */
	if (ZF) {goto sqrtexit;}
	/* mov	bp,ax		;bp = n */
	bp = ax;
	/* mov	dx,0c000h	;dx = mask */
	dx = 0x0c000;
	/* mov	bx,080h		;bx = approx */
	bx = 0x080;
dummylabel1:
	// 4377 
	/* @@:		test	ax,dx		;while not (num and mask) */
	TEST(ax, dx);
	/* jnz	@F */
	if ((ax & dx) != 0) {goto dummylabel2;}
	/* shr	dx,1		;mask >> 2 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	bx,1		;approx >> 1 */
	SHR(bx, 1);
	/* jmp	@B */
	goto dummylabel1;
dummylabel2:
	// 4379 
	/* @@:		mov	dx,bx		;root = approx */
	dx = bx;
dummylabel3:
	// 4381 
	/* @@:		shr	bx,1		;while (approx >> 1) */
	SHR(bx, 1);
	/* jc	@F */
	if (CF) {goto dummylabel4;}
	/* add	dx,bx		;root = root + approx */
	ADD(dx, bx);
	/* mov	al,dl */
	al = dl;
	/* mul	al		;test = root ^ 2 */
	MUL1_1(al);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* je	@F		;test = n -> */
	if ((dw)(ax) == (dw)(bp)) {goto dummylabel4;}
	/* jb	@B		;test < n -> */
	if ((dw)(ax) < (dw)(bp)) {goto dummylabel3;}
	/* sub	dx,bx		;root = root - approx */
	SUB(dx, bx);
	/* jmp	@B */
	goto dummylabel3;
dummylabel4:
	// 4383 
	/* @@:		mov	ax,dx		;return root */
	ax = dx;
sqrtexit:
	// 4385 
	/* SqrtExit:	ret */
	RETF(0);
sqrt32:
	// 465 
	/* test	dx,dx		;zero? */
	TEST(dx, dx);
edummylabel4:
	// 4387 
	/* jnz	@F		;no -> */
	if (!ZF) {goto dummylabel5;}
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	Sqrt32Exit	;yes -> */
	if (!(ax & ax)) {goto sqrt32exit;}
dummylabel5:
	// 4389 
	/* @@:		mov	cx,dx		;cx, bx = n */
	cx = dx;
	/* mov	bx,ax */
	bx = ax;
	/* mov	dx,0c000h	;dx, ax = mask */
	dx = 0x0c000;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	di,08000h 	;di = approx */
	di = 0x08000;
sqrt32loop1:
	// 4391 
	/* Sqrt32Loop1:	test	cx,dx		;while not (num and mask) */
	TEST(cx, dx);
	/* jnz	@F */
	if ((cx & dx) != 0) {goto dummylabel6;}
	/* test	bx,ax */
	TEST(bx, ax);
	/* jnz	@F */
	if ((bx & ax) != 0) {goto dummylabel6;}
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	di,1		;approx >> 1 */
	SHR(di, 1);
	/* jmp	Sqrt32Loop1 */
	goto sqrt32loop1;
dummylabel6:
	// 4393 
	/* @@:		mov	si,di		;root = approx */
	si = di;
sqrt32loop2:
	// 4395 
	/* Sqrt32Loop2: 	shr	di,1		;while (approx >> 1) */
	SHR(di, 1);
	/* jc	Sqrt32Result */
	if (CF) {goto sqrt32result;}
	/* add	si,di		;root = root + approx */
	ADD(si, di);
	/* mov	ax,si */
	ax = si;
	/* mul	ax		;test = root ^ 2 */
	MUL1_2(ax);
	/* cmp	dx,cx */
	CMP(dx, cx);
	/* jb	Sqrt32Loop2	;test < n -> */
	if ((dw)(dx) < (dw)(cx)) {goto sqrt32loop2;}
	/* ja	@F		;test > n -> */
	if ((dw)(dx) > (dw)(cx)) {goto dummylabel7;}
	/* cmp	ax,bx */
	CMP(ax, bx);
	/* jb	Sqrt32Loop2	;test < n -> */
	if ((dw)(ax) < (dw)(bx)) {goto sqrt32loop2;}
	/* je	Sqrt32Result	;test = n -> */
	if ((dw)(ax) == (dw)(bx)) {goto sqrt32result;}
dummylabel7:
	// 4397 
	/* @@:		sub	si,di		;root = root - approx */
	SUB(si, di);
	/* jmp	Sqrt32Loop2 */
	goto sqrt32loop2;
sqrt32result:
	// 4399 
	/* Sqrt32Result:	mov	ax,si		;return root */
	ax = si;
sqrt32exit:
	// 4401 
	/* Sqrt32Exit:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcalcdeltatime: 	goto calcdeltatime;
        case m2c::kcalcdeltaxy: 	goto calcdeltaxy;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::ksqrt: 	goto sqrt;
        case m2c::ksqrt32: 	goto sqrt32;
        case m2c::ksqrt32exit: 	goto sqrt32exit;
        case m2c::ksqrt32loop1: 	goto sqrt32loop1;
        case m2c::ksqrt32loop2: 	goto sqrt32loop2;
        case m2c::ksqrt32result: 	goto sqrt32result;
        case m2c::ksqrtexit: 	goto sqrtexit;
        case m2c::ktimeok: 	goto timeok;
        default: return __dispatch_call(__disp, _state);
    };
}

