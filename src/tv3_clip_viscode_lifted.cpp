/* THIS IS GENERATED FILE */

        
#include "tv3_clip.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
tv3_scalevp:
	// 248 
	/* ret ;* kill: ) */
	RETN(0);
viscode_0_proc:
	// 262 
ycrtzero:
	// 4369 
	// 0 ;*       y crt = -(((z eye / y eye) * 36) - 36)
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
_ycrtzero:
	// 4393 
	// 0 ;*       y crt = -(((z eye / y eye) * 36) - 36)
	/* mov	bx,-1 */
	bx = -1;
	/* mov	cx,-1 */
	cx = -1;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
tv3_calccrt:
	// 267 
	/* test	bx,bx		;y eye <= 0? */
	TEST(bx, bx);
edummylabel1:
	// 4371 
	/* jle	YCrtZero	;yes -> */
	if ((ZF || SF != OF)) {goto ycrtzero;}
	/* push	si */
	PUSH(si);
	// 0 ;------------
	// 0 ;* calc x crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*32 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* shl	ax,1		;*64 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,si		;x eye * 96 */
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
	// 4373 
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
	// 4375 
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
	// 4377 
	/* XYCalc: 	sar	dx,1		;x eye * 48 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;(x eye / y eye) * 48 */
	IDIV2(bx);
	/* add	ax,48		;48 + (x eye / y eye) * 48 */
	ADD(ax, 48);
	/* jns	XCrtOk1		;x crt >= 0 -> */
	if ((short)(ax) >= 0) {goto xcrtok1;}
	/* xor	ax,ax */
	XOR(ax, ax);
xcrtok1:
	// 4379 
	/* XCrtOk1:	cmp	ax,95 */
	CMP(ax, 95);
	/* jbe	XCrtOk2		;x crt <= 95 -> */
	if ((dw)(ax) <= (dw)(95)) {goto xcrtok2;}
	/* mov	ax,95 */
	ax = 95;
xcrtok2:
	// 4381 
	/* XCrtOk2:	add	ax,ClipWndwXOrg	;add x origin */
	ADD(ax, clipwndwxorg);
	/* xchg	ax,cx		;cx = x crt value */
	XCHG(ax, cx);
	// 0 ;------------
	// 0 ;* calc y crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*32 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*64 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,si		;z eye * 72 */
	ADD(ax, si);
	/* adc	dx,bp */
	ADC(dx, bp);
	// 0 ;* check for overflow
	/* js	CheckOvZNeg	;z eye < 0 -> */
	if ((short)(dx) < 0) {goto checkovzneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	ZYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto zycalc;}
yoverflow:
	// 4383 
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
	// 4385 
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
	// 4387 
	/* ZYCalc: 	sar	dx,1		;z eye * 36 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;z eye / y eye * 36 */
	IDIV2(bx);
	/* sub	ax,36		;((z eye / y eye) * 36) - 36 */
	SUB(ax, 36);
	/* neg	ax		;-(((z eye / y eye) * 36) - 36) */
	NEG(ax);
	/* jns	YCrtOk1		;y crt >= 0 -> */
	if ((short)(ax) >= 0) {goto ycrtok1;}
	/* xor	ax,ax */
	XOR(ax, ax);
ycrtok1:
	// 4389 
	/* YCrtOk1:	cmp	ax,71 */
	CMP(ax, 71);
	/* jbe	YCrtOk2 	;y crt <= 71 -> */
	if ((dw)(ax) <= (dw)(71)) {goto ycrtok2;}
	/* mov	ax,71 */
	ax = 71;
ycrtok2:
	// 4391 
	/* YCrtOk2:	add	al,ClipWndwYOrg	;add y origin */
	ADD(al, clipwndwyorg);
	/* mov	bx,ax		;bx = y crt value */
	bx = ax;
	/* pop	si */
	POP(si);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
tv3_circlecrt:
	// 398 
	/* test	bx,bx		;y eye <= 0? */
	TEST(bx, bx);
edummylabel2:
	// 4395 
	/* jle	_YCrtZero	;yes -> */
	if ((ZF || SF != OF)) {goto _ycrtzero;}
	/* push	si */
	PUSH(si);
	// 0 ;------------
	// 0 ;* calc x crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*32 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* shl	ax,1		;*64 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,si		;x eye * 96 */
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
	// 4397 
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
	// 4399 
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
	// 4401 
	/* _XYCalc: 	sar	dx,1		;x eye * 48 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;(x eye / y eye) * 48 */
	IDIV2(bx);
	/* add	ax,48		;48 + (x eye / y eye) * 48 */
	ADD(ax, 48);
	/* add	ax,ClipWndwXOrg	;add x origin */
	ADD(ax, clipwndwxorg);
	/* xchg	ax,cx		;cx = x crt value */
	XCHG(ax, cx);
	// 0 ;------------
	// 0 ;* calc y crt
	// 0 ;------------
	/* cwd */
	CWD;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	bp,dx */
	bp = dx;
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*32 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;*64 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,si		;z eye * 72 */
	ADD(ax, si);
	/* adc	dx,bp */
	ADC(dx, bp);
	// 0 ;* check for overflow
	/* js	_CheckOvZNeg	;z eye < 0 -> */
	if ((short)(dx) < 0) {goto _checkovzneg;}
	/* cmp	dx,bx		;overflow? */
	CMP(dx, bx);
	/* jb	_ZYCalc		;no -> */
	if ((dw)(dx) < (dw)(bx)) {goto _zycalc;}
_yoverflow:
	// 4403 
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
	// 4405 
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
	// 4407 
	/* _ZYCalc: 	sar	dx,1		;z eye * 36 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;z eye / y eye * 36 */
	IDIV2(bx);
	/* sub	ax,36		;((z eye / y eye) * 36) - 36 */
	SUB(ax, 36);
	/* neg	ax		;-(((z eye / y eye) * 36) - 36) */
	NEG(ax);
	/* add	ax,WORD PTR ClipWndwYOrg	;add y origin */
	ADD(ax, *(dw*)(&clipwndwyorg));
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
        case m2c::ktv3_calccrt: 	goto tv3_calccrt;
        case m2c::ktv3_circlecrt: 	goto tv3_circlecrt;
        case m2c::ktv3_scalevp: 	goto tv3_scalevp;
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

