/* THIS IS GENERATED FILE */

        
#include "random_m2c.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
randx:
	// 51 
	/* push	dx ;* kill: flags */
	PUSH(dx);
edummylabel1:
	// 4369 
	/* mov	ax,SeedLo */
	ax = seedlo;
	/* mov	dx,SeedHi */
	dx = seedhi;
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit1 */
	if ((short)((dx & dx)) >= 0) {goto zerobit1;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit1:
	// 4371 
	/* ZeroBit1:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit2 */
	if ((short)((dx & dx)) >= 0) {goto zerobit2;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit2:
	// 4373 
	/* ZeroBit2:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit3 */
	if ((short)((dx & dx)) >= 0) {goto zerobit3;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit3:
	// 4375 
	/* ZeroBit3:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit4 */
	if ((short)((dx & dx)) >= 0) {goto zerobit4;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit4:
	// 4377 
	/* ZeroBit4:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit5 */
	if ((short)((dx & dx)) >= 0) {goto zerobit5;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit5:
	// 4379 
	/* ZeroBit5:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit6 */
	if ((short)((dx & dx)) >= 0) {goto zerobit6;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit6:
	// 4381 
	/* ZeroBit6:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit7 */
	if ((short)((dx & dx)) >= 0) {goto zerobit7;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit7:
	// 4383 
	/* ZeroBit7:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* test 	dx,dx */
	TEST(dx, dx);
	/* jns 	ZeroBit8 */
	if ((short)((dx & dx)) >= 0) {goto zerobit8;}
	/* xor 	ax,0b553h */
	XOR(ax, 0x0b553);
	/* xor 	dl,076h */
	XOR(dl, 0x076);
zerobit8:
	// 4385 
	/* ZeroBit8:	sal 	ax,1 */
	SAL(ax, 1);
	/* rcl 	dx,1 */
	RCL(dx, 1);
	/* mov 	SeedLo,ax */
	seedlo = ax;
	/* mov 	SeedHi,dx */
	seedhi = dx;
	/* mov 	al,dh */
	al = dh;
	/* xor 	ah,ah */
	XOR(ah, ah);
	/* pop 	dx */
	POP(dx);
	/* ret */
	RETF(0);
reseed:
	// 118 
	/* mov	ah,002h		;get real-time clock time */
	ah = 0x002;
edummylabel2:
	// 4387 
	/* int	01ah		;time of day service */
	_INT(0x01a);
	// 0 ;* (note: Ignore real-time clock defective signal.)
	/* mov	ax,Ticker */
	ax = ticker;
	/* add	ax,cx		;(ch = hours, cl = mins) */
	ADD(ax, cx);
	/* add	ax,dx		;(dh = secs, dl = ?) */
	ADD(ax, dx);
	/* push	ax */
	PUSH(ax);
	/* mov	ah,004h		;get real-time clock date */
	ah = 0x004;
	/* int	01ah		;time of day service */
	_INT(0x01a);
	// 0 ;* (note: Ignore real-time clock defective signal.)
	/* pop	ax */
	POP(ax);
	/* add	ax,cx		;(ch = century, cl = year) */
	ADD(ax, cx);
	/* add	ax,dx		;(dh = month, dl = day) */
	ADD(ax, dx);
	/* jnz	SeedOk		;seed ok if <> 0 -> */
	if (ax != 0) {goto seedok;}
	/* mov	ax,05b7dh	;set seed to arbitrary value */
	ax = 0x05b7d;
seedok:
	// 4389 
	if (const char* _sv = getenv("M2C_SEED")) { ax = (dw)strtoul(_sv, nullptr, 0); }
	if (getenv("M2C_SEEDDBG")) { fprintf(stderr,"[RESEED] ticker=%d ax(seed)=%04x\n",(int)ticker,(unsigned)ax); }
	/* SeedOk:		mov	dx,ax */
	dx = ax;
	/* not	dx */
	dx = ~dx;
	/* mov	SeedHi,dx */
	seedhi = dx;
	/* mov	SeedLo,ax */
	seedlo = ax;
	// 0 ;* refill RndTable
	/* mov	cx,256 */
	cx = 256;
	/* mov	di,OFFSET RndTable */
	di = m2c::near_offset_external(rndtable);
dummylabel1:
	// 4391 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* stosb */
	{ STOSB; }
	/* loop	@B */
	LOOP(dummylabel1);
	// 0 ;* randomise RndIndex
	/* call	RandX */
	CALLF(randx, 0);
	/* mov	RndIndex,al */
	*(rndindex) = al;
	/* ret */
	RETF(0);
fastrandx:
	// 162 
	/* push	bx ;* kill: flags */
	PUSH(bx);
edummylabel3:
	// 4393 
	/* mov	bx,OFFSET RndTable */
	bx = m2c::near_offset_external(rndtable);
	/* mov	al,RndIndex */
	al = *(rndindex);
	/* xlat */
	XLAT;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* pop	bx */
	POP(bx);
	/* inc	RndIndex	;next index */
	INC(*(rndindex));
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
                case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kfastrandx: 	goto fastrandx;
        case m2c::krandx: 	goto randx;
        case m2c::kreseed: 	goto reseed;
        case m2c::kseedok: 	goto seedok;
        case m2c::kzerobit1: 	goto zerobit1;
        case m2c::kzerobit2: 	goto zerobit2;
        case m2c::kzerobit3: 	goto zerobit3;
        case m2c::kzerobit4: 	goto zerobit4;
        case m2c::kzerobit5: 	goto zerobit5;
        case m2c::kzerobit6: 	goto zerobit6;
        case m2c::kzerobit7: 	goto zerobit7;
        case m2c::kzerobit8: 	goto zerobit8;
        default: return __dispatch_call(__disp, _state);
    };
}

