/* THIS IS GENERATED FILE */

        
#include "ext_clip.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
ext_scalevp:
	// 245 
	// 0 ;* check z eye in range
edummylabel1:
	// 4369 
	/* cmp	cx,26214	;z eye > max input value?   32,767 x 4/5 */
	CMP(cx, 26214);
	/* jg	SetZMax		;yes -> */
	if ((short)(cx) > (short)(26214)) {goto setzmax;}
	/* cmp	cx,-26215	;z eye < min input value? */
	CMP(cx, -26215);
	/* jl	SetZMin		;yes -> */
	if ((short)(cx) < (short)(-26215)) {goto setzmin;}
	// 0 ;* scale z eye
	/* mov	bp,cx		;bp = z eye */
	bp = cx;
	/* sar	bp,1		;bp = z eye / 2 */
	SAR(bp, 1);
	/* sar	bp,1		;bp = z eye / 4 */
	SAR(bp, 1);
	/* add	cx,bp		;cx = z eye * 5 / 4 */
	ADD(cx, bp);
	/* mov	Ze[si],cx */
	*(dw*)(((db*)&ze)+si) = cx;
	/* ret */
	RETN(0);
setzmax:
	// 4371 
	/* SetZMax:	mov	cx,32767 */
	cx = 32767;
	/* mov	Ze[si],cx */
	*(dw*)(((db*)&ze)+si) = cx;
	/* ret */
	RETN(0);
setzmin:
	// 4373 
	/* SetZMin:	mov	cx,-32768 */
	cx = -32768;
	/* mov	Ze[si],cx */
	*(dw*)(((db*)&ze)+si) = cx;
	/* ret */
	RETN(0);
viscode_0_proc:
	// 278 
ycrtzero:
	// 4375 
	// 0 ;*       y crt = -(((z eye / y eye) * 96) - 96)
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
_ycrtzero:
	// 4399 
	// 0 ;*       y crt = -(((z eye / y eye) * 96) - 96)
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
ext_calccrt:
	// 283 
	/* test	bx,bx		;y eye <= 0? */
	TEST(bx, bx);
edummylabel2:
	// 4377 
	/* jle	YCrtZero	;yes -> */
	if ((ZF || SF != OF)) {goto ycrtzero;}
	/* push	si */
	PUSH(si);
	// 0 ;------------
	// 0 ;* calc x crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* mov	dh,dl		;*256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* sar	bp,1		;*128 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sar	bp,1		;*64 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* add	ax,si		;x eye * 320 */
	ADD(ax, si);
	/* adc	dx,bp */
	ADC(dx, bp);
	// 0 ;* check for overflow
	/* js	CheckOvXNeg	;x eye < 0 -> */
	if ((short)(dx) < 0) {goto checkovxneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	XYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto xycalc;}
xoverflow:
	// 4379 
	/* XOverflow:	pop	si */
	POP(si);
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
checkovxneg:
	// 4381 
	/* CheckOvXNeg:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jae	XOverflow	;yes -> */
	if ((dw)(dx) >= (dw)(bx)) {goto xoverflow;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
xycalc:
	// 4383 
	/* XYCalc:  	sar	dx,1		;x eye * 160 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;(x eye / y eye) * 160 */
	IDIV2(bx);
	/* add	ax,160		;160 + (x eye / y eye) * 160 */
	ADD(ax, 160);
	/* jns	XCrtOk1		;x crt >= 0 -> */
	if ((short)(ax) >= 0) {goto xcrtok1;}
	/* xor	ax,ax */
	XOR(ax, ax);
xcrtok1:
	// 4385 
	/* XCrtOk1:	cmp	ax,319 */
	CMP(ax, 319);
	/* jbe	XCrtOk2		;x crt <= 319 -> */
	if ((dw)(ax) <= (dw)(319)) {goto xcrtok2;}
	/* mov	ax,319 */
	ax = 319;
xcrtok2:
	// 4387 
	/* XCrtOk2:	xchg	ax,cx		;cx = x crt value */
	XCHG(ax, cx);
	// 0 ;------------
	// 0 ;* calc y crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* mov	dh,dl		;*256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* sar	bp,1		;*128 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sar	bp,1		;*64 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sub	ax,si		;z eye * 192 */
	SUB(ax, si);
	/* sbb	dx,bp */
	SBB(dx, bp);
	// 0 ;* check for overflow
	/* js	CheckOvZNeg	;z eye < 0 -> */
	if ((short)(dx) < 0) {goto checkovzneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	ZYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto zycalc;}
yoverflow:
	// 4389 
	/* YOverflow:	pop	si */
	POP(si);
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
checkovzneg:
	// 4391 
	/* CheckOvZNeg:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jae	YOverflow	;yes -> */
	if ((dw)(dx) >= (dw)(bx)) {goto yoverflow;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
zycalc:
	// 4393 
	/* ZYCalc:  	sar	dx,1		;z eye * 96 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;z eye / y eye * 96 */
	IDIV2(bx);
	/* sub	ax,96		;((z eye / y eye) * 96) - 96 */
	SUB(ax, 96);
	/* neg	ax		;-(((z eye / y eye) * 96) - 96) */
	NEG(ax);
	/* jns	YCrtOk1		;y crt >= 0 -> */
	if ((short)(ax) >= 0) {goto ycrtok1;}
	/* xor	ax,ax */
	XOR(ax, ax);
ycrtok1:
	// 4395 
	/* YCrtOk1:	cmp	ax,191 */
	CMP(ax, 191);
	/* jbe	YCrtOk2 	;y crt <= 191 -> */
	if ((dw)(ax) <= (dw)(191)) {goto ycrtok2;}
	/* mov	ax,191 */
	ax = 191;
ycrtok2:
	// 4397 
	/* YCrtOk2:	mov	bx,ax		;bx = y crt value */
	bx = ax;
	/* pop	si */
	POP(si);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
ext_circlecrt:
	// 404 
	/* test	bx,bx		;y eye <= 0? */
	TEST(bx, bx);
edummylabel3:
	// 4401 
	/* jle	_YCrtZero	;yes -> */
	if ((ZF || SF != OF)) {goto _ycrtzero;}
	/* push	si */
	PUSH(si);
	// 0 ;------------
	// 0 ;* calc x crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* mov	dh,dl		;*256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* sar	bp,1		;*128 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sar	bp,1		;*64 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* add	ax,si		;x eye * 320 */
	ADD(ax, si);
	/* adc	dx,bp */
	ADC(dx, bp);
	// 0 ;* check for overflow
	/* js	_CheckOvXNeg	;x eye < 0 -> */
	if ((short)(dx) < 0) {goto _checkovxneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	_XYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto _xycalc;}
_xoverflow:
	// 4403 
	/* _XOverflow:	pop	si */
	POP(si);
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
_checkovxneg:
	// 4405 
	/* _CheckOvXNeg:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jae	_XOverflow	;yes -> */
	if ((dw)(dx) >= (dw)(bx)) {goto _xoverflow;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
_xycalc:
	// 4407 
	/* _XYCalc:  	sar	dx,1		;x eye * 160 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;(x eye / y eye) * 160 */
	IDIV2(bx);
	/* add	ax,160		;160 + (x eye / y eye) * 160 */
	ADD(ax, 160);
	/* xchg	ax,cx		;cx = x crt value */
	XCHG(ax, cx);
	// 0 ;------------
	// 0 ;* calc y crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* mov	dh,dl		;*256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* sar	bp,1		;*128 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sar	bp,1		;*64 */
	SAR(bp, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* sub	ax,si		;z eye * 192 */
	SUB(ax, si);
	/* sbb	dx,bp */
	SBB(dx, bp);
	// 0 ;* check for overflow
	/* js	_CheckOvZNeg	;z eye < 0 -> */
	if ((short)(dx) < 0) {goto _checkovzneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	_ZYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto _zycalc;}
_yoverflow:
	// 4409 
	/* _YOverflow:	pop	si */
	POP(si);
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
_checkovzneg:
	// 4411 
	/* _CheckOvZNeg:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jae	_YOverflow	;yes -> */
	if ((dw)(dx) >= (dw)(bx)) {goto _yoverflow;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
_zycalc:
	// 4413 
	/* _ZYCalc:  	sar	dx,1		;z eye * 96 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;z eye / y eye * 96 */
	IDIV2(bx);
	/* sub	ax,96		;((z eye / y eye) * 96) - 96 */
	SUB(ax, 96);
	/* neg	ax		;-(((z eye / y eye) * 96) - 96) */
	NEG(ax);
	/* mov	bx,ax		;bx = y crt value */
	bx = ax;
	/* pop	si */
	POP(si);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k_checkovxneg: 	goto _checkovxneg;
        case m2c::k_checkovzneg: 	goto _checkovzneg;
        case m2c::k_xoverflow: 	goto _xoverflow;
        case m2c::k_xycalc: 	goto _xycalc;
        case m2c::k_ycrtzero: 	goto _ycrtzero;
        case m2c::k_yoverflow: 	goto _yoverflow;
        case m2c::k_zycalc: 	goto _zycalc;
        case m2c::kcheckovxneg: 	goto checkovxneg;
        case m2c::kcheckovzneg: 	goto checkovzneg;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kext_calccrt: 	goto ext_calccrt;
        case m2c::kext_circlecrt: 	goto ext_circlecrt;
        case m2c::kext_scalevp: 	goto ext_scalevp;
        case m2c::ksetzmax: 	goto setzmax;
        case m2c::ksetzmin: 	goto setzmin;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kxcrtok1: 	goto xcrtok1;
        case m2c::kxcrtok2: 	goto xcrtok2;
        case m2c::kxoverflow: 	goto xoverflow;
        case m2c::kxycalc: 	goto xycalc;
        case m2c::kycrtok1: 	goto ycrtok1;
        case m2c::kycrtok2: 	goto ycrtok2;
        case m2c::kycrtzero: 	goto ycrtzero;
        case m2c::kyoverflow: 	goto yoverflow;
        case m2c::kzycalc: 	goto zycalc;
        default: return __dispatch_call(__disp, _state);
    };
}

