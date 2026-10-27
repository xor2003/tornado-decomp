/* THIS IS GENERATED FILE */

        
#include "trig.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
tangent:
	// 2103 
	/* mov	bx,ax		;bx = tan table index */
	bx = ax;
edummylabel1:
	// 4369 
	/* cmp	bx,90		;quad 1? */
	CMP(bx, 90);
	/* jbe	TanQuad1	;yes -> */
	if ((dw)(bx) <= (dw)(90)) {goto tanquad1;}
	/* cmp	bx,422		;quad 4? */
	CMP(bx, 422);
	/* jae	TanQuad4	;yes -> */
	if ((dw)(bx) >= (dw)(422)) {goto tanquad4;}
	/* xor	dx,dx		;error, return 0 */
	XOR(dx, dx);
	/* ret */
	RETF(0);
tanquad1:
	// 4371 
	/* TanQuad1:      	shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	dx,SS:TanTable[bx] */
	dx = *(dw*)(((db*)&tantable)+bx);
	/* ret */
	RETF(0);
tanquad4:
	// 4373 
	/* TanQuad4:	sub	bx,512		;reverse tan table index */
	SUB(bx, 512);
	/* neg	bx */
	NEG(bx);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	dx,SS:TanTable[bx] */
	dx = *(dw*)(((db*)&tantable)+bx);
	/* neg	dx */
	NEG(dx);
	/* ret */
	RETF(0);
fastarctan:
	// 2129 
	/* cwd ;* kill: bx, cx, dx, flags */
	CWD;
edummylabel2:
	// 4375 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(frac), dx = sign(frac)
	/* mov	cl,7		;prime for /128 */
	cl = 7;
	/* mov	bx,ax */
	bx = ax;
	/* shr	bx,cl		;/128 */
	SHR(bx, cl);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SS:ArcTanTable[bx] */
	ax = *(dw*)(((db*)&arctantable)+bx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETF(0);
arctan:
	// 2153 
	/* cwd ;* kill: bx, cx, dx, si, bp, flags */
	CWD;
edummylabel3:
	// 4377 
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
	/* mov	ax,SS:ArcTanTable[bx] */
	ax = *(dw*)(((db*)&arctantable)+bx);
	/* and	dx,0007fh	;extract remaining bits */
	AND(dx, 0x0007f);
	/* jz	@F		;(trap frac = 08000h case) -> */
	if (dx == 0) {goto dummylabel1;}
	/* mov	si,ax */
	si = ax;
	/* mov	ax,SS:ArcTanTable[bx+2] */
	ax = *(dw*)(((db*)&arctantable)+bx+2);
	/* sub	ax,si		;ax = diff */
	SUB(ax, si);
	/* mul	dx */
	MUL1_2(dx);
	/* shr	ax,cl		;/128 */
	SHR(ax, cl);
	/* adc	ax,si		;(1/2 bit round up) */
	ADC(ax, si);
dummylabel1:
	// 4379 
	/* @@:		xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* ret */
	RETF(0);
fastarctan2:
	// 2186 
	/* cwd ;* kill: bx, cx, dx, flags */
	CWD;
edummylabel4:
	// 4381 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(frac), dx = sign(frac)
	/* mov	cl,6		;prime for /64 */
	cl = 6;
	/* mov	bx,ax */
	bx = ax;
	/* shr	bx,cl		;/64 */
	SHR(bx, cl);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SS:ArcTanTable[bx] */
	ax = *(dw*)(((db*)&arctantable)+bx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETF(0);
arctan2:
	// 2210 
	/* cwd ;* kill: bx, cx, dx, si, bp, flags */
	CWD;
edummylabel5:
	// 4383 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(frac), dx = sign(frac)
	/* mov	bp,dx		;store sign(frac) */
	bp = dx;
	/* mov	dx,ax		;store abs(frac) */
	dx = ax;
	/* mov	cl,6		;prime for /64 */
	cl = 6;
	/* mov	bx,ax */
	bx = ax;
	/* shr	bx,cl		;/64 */
	SHR(bx, cl);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SS:ArcTanTable[bx] */
	ax = *(dw*)(((db*)&arctantable)+bx);
	/* and	dx,0003fh	;extract remaining bits */
	AND(dx, 0x0003f);
	/* jz	@F		;(trap frac = 08000h case) -> */
	if (dx == 0) {goto dummylabel2;}
	/* mov	si,ax */
	si = ax;
	/* mov	ax,SS:ArcTanTable[bx+2] */
	ax = *(dw*)(((db*)&arctantable)+bx+2);
	/* sub	ax,si		;ax = diff */
	SUB(ax, si);
	/* mul	dx */
	MUL1_2(dx);
	/* shr	ax,cl		;/64 */
	SHR(ax, cl);
	/* adc	ax,si		;(1/2 bit round up) */
	ADC(ax, si);
dummylabel2:
	// 4385 
	/* @@:		xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* ret */
	RETF(0);
fastarcsin:
	// 2243 
	/* cwd ;* kill: cx, dx, bp, flags */
	CWD;
edummylabel6:
	// 4387 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cl,7		;/128 */
	cl = 7;
	/* mov	bp,ax */
	bp = ax;
	/* shr	bp,cl		;/128 */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* shl	bp,1		;*2 word index */
	SHL(bp, 1);
	/* mov	ax,ArcSinTable[bp] */
	ax = *(dw*)(((db*)&arcsintable)+bp);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETF(0);
fastarccos:
	// 2266 
	/* cwd ;* kill: cx, dx, bp, flags */
	CWD;
edummylabel7:
	// 4389 
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cl,7		;/128 */
	cl = 7;
	/* mov	bp,ax */
	bp = ax;
	/* shr	bp,cl		;/128 */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* shl	bp,1		;*2 word index */
	SHL(bp, 1);
	/* mov	ax,ArcCosTable[bp] */
	ax = *(dw*)(((db*)&arccostable)+bp);
	// 0 ;* if frac < 0 then return 180 - arccos(frac)
	/* test	dx,dx		;frac < 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel3;}
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,(256*128)-1	;(-1 keeps result +ve) */
	ax = (256*128)-1;
	/* sub	ax,dx */
	SUB(ax, dx);
dummylabel3:
	// 4391 
	/* @@:		ret */
	RETF(0);
arctan360:
	// 2295 
	/* xor	bx,bx		;clear quad index */
	XOR(bx, bx);
edummylabel8:
	// 4393 
	/* test	cx,cx */
	TEST(cx, cx);
	/* jz	XZero		;sort x = 0 -> */
	if (!(cx & cx)) {goto xzero;}
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel4;}
	/* neg	cx */
	NEG(cx);
	/* or	bx,0010b */
	OR(bx, 0x2);
dummylabel4:
	// 4395 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jz	YZero		;sort y = 0 -> */
	if (!(dx & dx)) {goto yzero;}
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel5;}
	/* neg	dx */
	NEG(dx);
	/* or	bx,0100b */
	OR(bx, 0x4);
dummylabel5:
	// 4397 
	/* @@:		cmp	cx,dx */
	CMP(cx, dx);
	/* jb	YGrtr		;y > x -> */
	if ((dw)(cx) < (dw)(dx)) {goto ygrtr;}
	/* ja	XGrtr		;x > y -> */
	if ((dw)(cx) > (dw)(dx)) {goto xgrtr;}
	/* mov	dx,64*128	;45 degs */
	dx = 64*128;
__disp=*(dw*)(((db*)&quadswitch)+bx);
	/* jmp	QuadSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
ygrtr:
	// 4399 
	// 0 ;---------------------------
	// 0 ;* theta = arctan(x / y)
	/* xchg	cx,dx */
	XCHG(cx, dx);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	cx */
	DIV2(cx);
	/* push	bx */
	PUSH(bx);
	/* call	ArcTan */
	CALLF(arctan, 0);
	/* pop	bx */
	POP(bx);
	/* mov	dx,ax */
	dx = ax;
__disp=*(dw*)(((db*)&quadswitch)+bx);
	/* jmp	QuadSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
xgrtr:
	// 4401 
	// 0 ;---------------------------
	// 0 ;* theta = 90 - arctan(y / x)
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	cx */
	DIV2(cx);
	/* push	bx */
	PUSH(bx);
	/* call	ArcTan */
	CALLF(arctan, 0);
	/* pop	bx */
	POP(bx);
	/* mov	dx,128*128 */
	dx = 128*128;
	/* sub	dx,ax */
	SUB(dx, ax);
__disp=*(dw*)(((db*)&quadswitch)+bx);
	/* jmp	QuadSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
quad1:
	// 4403 
	// 0 ;---------------------------
	// 0 ;* result = theta
	/* mov	ax,dx */
	ax = dx;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
quad2:
	// 4405 
	// 0 ;---------------------------
	// 0 ;* result = 180 - theta
	/* mov	ax,256*128 */
	ax = 256*128;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
quad3:
	// 4407 
	// 0 ;---------------------------
	// 0 ;* result = 180 + theta
	/* mov	ax,256*128 */
	ax = 256*128;
	/* add	ax,dx */
	ADD(ax, dx);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
quad4:
	// 4409 
	// 0 ;---------------------------
	// 0 ;* result = 360 - theta
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
xzero:
	// 4411 
	// 0 ;---------------------------
	/* test	dx,dx */
	TEST(dx, dx);
	/* js	@F */
	if ((short)((dx & dx)) < 0) {goto dummylabel6;}
	// 0 ;* result = 0
	/* xor	ax,ax */
	XOR(ax, ax);
	/* ret */
	RETF(0);
	// 0 ;* result = 180
dummylabel6:
	// 4413 
	/* @@:		mov	ax,256*128 */
	ax = 256*128;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
yzero:
	// 4415 
	// 0 ;---------------------------
	/* test	bx,0010b */
	TEST(bx, 0x2);
	/* jnz	@F */
	if ((bx & 0x2) != 0) {goto dummylabel7;}
	// 0 ;* result = 90
	/* mov	ax,128*128 */
	ax = 128*128;
	/* ret */
	RETF(0);
	// 0 ;* result = 270
dummylabel7:
	// 4417 
	/* @@:		mov	ax,384*128 */
	ax = 384*128;
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
                case m2c::karctan: 	goto arctan;
        case m2c::karctan2: 	goto arctan2;
        case m2c::karctan360: 	goto arctan360;
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
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kfastarccos: 	goto fastarccos;
        case m2c::kfastarcsin: 	goto fastarcsin;
        case m2c::kfastarctan: 	goto fastarctan;
        case m2c::kfastarctan2: 	goto fastarctan2;
        case m2c::kquad1: 	goto quad1;
        case m2c::kquad2: 	goto quad2;
        case m2c::kquad3: 	goto quad3;
        case m2c::kquad4: 	goto quad4;
        case m2c::ktangent: 	goto tangent;
        case m2c::ktanquad1: 	goto tanquad1;
        case m2c::ktanquad4: 	goto tanquad4;
        case m2c::kxgrtr: 	goto xgrtr;
        case m2c::kxzero: 	goto xzero;
        case m2c::kygrtr: 	goto ygrtr;
        case m2c::kyzero: 	goto yzero;
        default: return __dispatch_call(__disp, _state);
    };
}

