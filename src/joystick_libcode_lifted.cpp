/* THIS IS GENERATED FILE */

        
#include "joystick.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
recaljoysticks:
	// 399 
	// 0 ;--------------------
	// 0 ;* sort joystick type (intercept ThrustMaster)
	// 0 ;--------------------
edummylabel1:
	// 4369 
	/* test	ThrustMaster,1 */
	TEST(thrustmaster, 1);
	/* jz	__m2c_macrolocal_1_skip */
	if (!(thrustmaster & 1)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	RecalThrust */
	goto recalthrust;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;-----------------------------
	// 0 ;* assume joysticks not fitted
	// 0 ;-----------------------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	JoyA_Flag,al */
	joya_flag = al;
	/* mov	JoyB_Flag,al */
	joyb_flag = al;
	/* mov	JoyA_XRef,ax */
	joya_xref = ax;
	/* mov	JoyA_YRef,ax */
	joya_yref = ax;
	/* mov	JoyA_XScale,ax */
	joya_xscale = ax;
	/* mov	JoyA_YScale,ax */
	joya_yscale = ax;
	/* mov	JoyA_XPos,ax */
	joya_xpos = ax;
	/* mov	JoyA_YPos,ax */
	joya_ypos = ax;
	/* mov	JoyA_XVal,ax */
	joya_xval = ax;
	/* mov	JoyA_YVal,ax */
	joya_yval = ax;
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_XRef,ax */
	joyb_xref = ax;
	/* mov	JoyB_YRef,ax */
	joyb_yref = ax;
	/* mov	JoyB_XScale,ax */
	joyb_xscale = ax;
	/* mov	JoyB_YScale,ax */
	joyb_yscale = ax;
	/* mov	JoyB_XPos,ax */
	joyb_xpos = ax;
	/* mov	JoyB_YPos,ax */
	joyb_ypos = ax;
	/* mov	JoyB_XVal,ax */
	joyb_xval = ax;
	/* mov	JoyB_YVal,ax */
	joyb_yval = ax;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	/* mov	TM_CoolieVal,al */
	tm_coolieval = al;
	/* mov	TM_CoolieNew,al */
	tm_coolienew = al;
	/* mov	TM_CoolieOld,al */
	tm_coolieold = al;
	// 0 ;-------------------------------------
	// 0 ;* joystick A - calc x ref and x scale
	// 0 ;-------------------------------------
	/* xor	bp,bp		;clear result */
	XOR(bp, bp);
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* x ref = (accumulated centre x) / 4 * 2 = (accumulated centre x) / 2
	/* shr	bp,1		;/2 */
	SHR(bp, 1);
	/* mov	JoyA_XRef,bp */
	joya_xref = bp;
	// 0 ;* x scale = NPOS * 65536 / x ref
	/* mov	dx,NPOS */
	dx = 32;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* cmp	bp,dx */
	CMP(bp, dx);
	/* jbe	SkipRecalA	;error -> */
	if ((dw)(bp) <= (dw)(dx)) {goto skiprecala;}
	/* div	bp */
	DIV2(bp);
	/* mov	JoyA_XScale,ax */
	joya_xscale = ax;
	// 0 ;-------------------------------------
	// 0 ;* joystick A - calc y ref and y scale
	// 0 ;-------------------------------------
	/* xor	bp,bp		;clear result */
	XOR(bp, bp);
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalA	;timeout -> */
	if (CF) {goto skiprecala;}
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* y ref = (accumulated centre y) / 4 * 2 = (accumulated centre y) / 2
	/* shr	bp,1		;/2 */
	SHR(bp, 1);
	/* mov	JoyA_YRef,bp */
	joya_yref = bp;
	// 0 ;* y scale = NPOS * 65536 / y ref
	/* mov	dx,NPOS */
	dx = 32;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* cmp	bp,dx */
	CMP(bp, dx);
	/* jbe	SkipRecalA	;error -> */
	if ((dw)(bp) <= (dw)(dx)) {goto skiprecala;}
	/* div	bp */
	DIV2(bp);
	/* mov	JoyA_YScale,ax */
	joya_yscale = ax;
	/* mov	al,1 */
	al = 1;
	/* mov	JoyA_Flag,al */
	joya_flag = al;
	// 0 ;-------------------------------------
	// 0 ;* joystick B - calc x ref and x scale
	// 0 ;-------------------------------------
skiprecala:
	// 4373 
	/* SkipRecalA:  	xor	bp,bp		;clear result */
	XOR(bp, bp);
	/* mov	ah,JOY_B_XPOS */
	ah = 0x4;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_XPOS */
	ah = 0x4;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_XPOS */
	ah = 0x4;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_XPOS */
	ah = 0x4;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* x ref = (accumulated centre x) / 4 * 2 = (accumulated centre x) / 2
	/* shr	bp,1		;/2 */
	SHR(bp, 1);
	/* mov	JoyB_XRef,bp */
	joyb_xref = bp;
	// 0 ;* x scale = NPOS * 65536 / x ref
	/* mov	dx,NPOS */
	dx = 32;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* cmp	bp,dx */
	CMP(bp, dx);
	/* jbe	SkipRecalB	;error -> */
	if ((dw)(bp) <= (dw)(dx)) {goto skiprecalb;}
	/* div	bp */
	DIV2(bp);
	/* mov	JoyB_XScale,ax */
	joyb_xscale = ax;
	// 0 ;-------------------------------------
	// 0 ;* joystick B - calc y ref and y scale
	// 0 ;-------------------------------------
	/* xor	bp,bp		;clear result */
	XOR(bp, bp);
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalB	;timeout -> */
	if (CF) {goto skiprecalb;}
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* y ref = (accumulated centre y) / 4 * 2 = (accumulated centre y) / 2
	/* shr	bp,1		;/2 */
	SHR(bp, 1);
	/* mov	JoyB_YRef,bp */
	joyb_yref = bp;
	// 0 ;* y scale = NPOS * 65536 / y ref
	/* mov	dx,NPOS */
	dx = 32;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* cmp	bp,dx */
	CMP(bp, dx);
	/* jbe	SkipRecalB	;error -> */
	if ((dw)(bp) <= (dw)(dx)) {goto skiprecalb;}
	/* div	bp */
	DIV2(bp);
	/* mov	JoyB_YScale,ax */
	joyb_yscale = ax;
	/* mov	al,1 */
	al = 1;
	/* mov	JoyB_Flag,al */
	joyb_flag = al;
skiprecalb:
	// 4375 
	/* SkipRecalB:	ret */
	RETF(0);
readjoysticks:
	// 614 
	// 0 ;--------------------
	// 0 ;* sort joystick type (intercept ThrustMaster)
	// 0 ;--------------------
edummylabel2:
	// 4377 
	/* test	ThrustMaster,1 */
	TEST(thrustmaster, 1);
	/* jz	__m2c_macrolocal_2_skip */
	if (!(thrustmaster & 1)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	ReadThrust */
	goto readthrust;
__m2c_macrolocal_2_skip:
	// 4379 
	// 0 ;---------------------------------------
	// 0 ;* copy previous values of joystick vars
	// 0 ;---------------------------------------
	/* mov	ax,JoyA_XVal */
	ax = joya_xval;
	/* mov	OldJoyA_XVal,ax */
	oldjoya_xval = ax;
	/* mov	ax,JoyA_YVal */
	ax = joya_yval;
	/* mov	OldJoyA_YVal,ax */
	oldjoya_yval = ax;
	/* mov	al,JoyA_Fire1 */
	al = joya_fire1;
	/* mov	OldJoyA_Fire1,al */
	oldjoya_fire1 = al;
	/* mov	al,JoyA_Fire2 */
	al = joya_fire2;
	/* mov	OldJoyA_Fire2,al */
	oldjoya_fire2 = al;
	/* mov	ax,JoyB_XVal */
	ax = joyb_xval;
	/* mov	OldJoyB_XVal,ax */
	oldjoyb_xval = ax;
	/* mov	ax,JoyB_YVal */
	ax = joyb_yval;
	/* mov	OldJoyB_YVal,ax */
	oldjoyb_yval = ax;
	/* mov	al,JoyB_Fire1 */
	al = joyb_fire1;
	/* mov	OldJoyB_Fire1,al */
	oldjoyb_fire1 = al;
	/* mov	al,JoyB_Fire2 */
	al = joyb_fire2;
	/* mov	OldJoyB_Fire2,al */
	oldjoyb_fire2 = al;
	// 0 ;* reset fire flags
	/* xor	al,al */
	XOR(al, al);
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	// 0 ;-----------------------------
	// 0 ;* read joystick A (if fitted)
	// 0 ;-----------------------------
readjoya:
	// 4381 
	/* ReadJoyA:	test	JoyA_Flag,1	;joystick A fitted? */
	TEST(joya_flag, 1);
	/* jnz	__m2c_macrolocal_3_skip */
	if ((joya_flag & 1) != 0) {goto __m2c_macrolocal_3_skip;}
	/* jmp	JoyAOpenCct */
	goto joyaopencct;
__m2c_macrolocal_3_skip:
	// 4383 
	// 0 ;no ->
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_4_skip */
	if (!CF) {goto __m2c_macrolocal_4_skip;}
	/* jmp	JoyATimeOut */
	goto joyatimeout;
__m2c_macrolocal_4_skip:
	// 4385 
	// 0 ;timeout ->
	/* test	JoySensitivity,1	;high sensitivity? */
	TEST(joysensitivity, 1);
	/* jz	SkipJoyA_XSens		;no -> */
	if (!(joysensitivity & 1)) {goto skipjoya_xsens;}
	// 0 ;* pos = max(((pos * 4) - ref) / 2, 0)
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* sub	ax,JoyA_XRef */
	SUB(ax, joya_xref);
	/* jnc	@F */
	if (!CF) {goto dummylabel1;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel1:
	// 4387 
	/* @@:		shr	ax,1 */
	SHR(ax, 1);
skipjoya_xsens:
	// 4389 
	/* SkipJoyA_XSens:	mov	JoyA_XPos,ax */
	joya_xpos = ax;
	/* mov	dx,JoyA_XScale */
	dx = joya_xscale;
	/* mul	dx		;x val = x pos * x scale */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0	 	;1/2 bit round up */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,NPOS		;x val > NPOS? */
	CMP(ax, 32);
	/* jbe	XOkA		;no -> */
	if ((dw)(ax) <= (dw)(32)) {goto xoka;}
	/* mov	ax,NPOS */
	ax = 32;
xoka:
	// 4391 
	/* XOkA:		mov	JoyA_XVal,ax */
	joya_xval = ax;
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_5_skip */
	if (!CF) {goto __m2c_macrolocal_5_skip;}
	/* jmp	JoyATimeOut */
	goto joyatimeout;
__m2c_macrolocal_5_skip:
	// 4393 
	// 0 ;timeout ->
	/* test	JoySensitivity,1	;high sensitivity? */
	TEST(joysensitivity, 1);
	/* jz	SkipJoyA_YSens		;no -> */
	if (!(joysensitivity & 1)) {goto skipjoya_ysens;}
	// 0 ;* pos = max(((pos * 4) - ref) / 2, 0)
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* sub	ax,JoyA_YRef */
	SUB(ax, joya_yref);
	/* jnc	@F */
	if (!CF) {goto dummylabel2;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel2:
	// 4395 
	/* @@:		shr	ax,1 */
	SHR(ax, 1);
skipjoya_ysens:
	// 4397 
	/* SkipJoyA_YSens:	mov	JoyA_YPos,ax */
	joya_ypos = ax;
	/* mov	dx,JoyA_YScale */
	dx = joya_yscale;
	/* mul	dx		;y val = y pos * y scale */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0	 	;1/2 bit round up */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,NPOS		;y val > NPOS? */
	CMP(ax, 32);
	/* jbe	YOkA		;no -> */
	if ((dw)(ax) <= (dw)(32)) {goto yoka;}
	/* mov	ax,NPOS */
	ax = 32;
yoka:
	// 4399 
	/* YOkA:		mov	JoyA_YVal,ax */
	joya_yval = ax;
	// 0 ;* test for fire buttons pressed
	/* test	CHStick,1	;CH stick? */
	TEST(chstick, 1);
	/* jnz	SortCHStick	;yes -> */
	if ((chstick & 1) != 0) {goto sortchstick;}
	/* mov	dx,GAME_PORT */
	dx = 0x00201;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,JOY_A_FIRE1	;fire button 1 pressed? */
	TEST(al, 0x10);
	/* jnz	@F		;no -> */
	if ((al & 0x10) != 0) {goto dummylabel3;}
	/* mov	JoyA_Fire1,1 */
	joya_fire1 = 1;
	/* test	OldJoyA_Fire1,1		;fire pressed last time? */
	TEST(oldjoya_fire1, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoya_fire1 & 1) != 0) {goto dummylabel3;}
	/* mov	JoyA_JustFired1,1	;just fired */
	joya_justfired1 = 1;
dummylabel3:
	// 4401 
	/* @@:		test	al,JOY_A_FIRE2	;fire button 2 pressed? */
	TEST(al, 0x20);
	/* jnz	@F		;no -> */
	if ((al & 0x20) != 0) {goto dummylabel4;}
	/* mov	JoyA_Fire2,1 */
	joya_fire2 = 1;
	/* test	OldJoyA_Fire2,1		;fire pressed last time? */
	TEST(oldjoya_fire2, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoya_fire2 & 1) != 0) {goto dummylabel4;}
	/* mov	JoyA_JustFired2,1	;just fired */
	joya_justfired2 = 1;
dummylabel4:
	// 4403 
	/* @@:		jmp	ReadJoyB */
	goto readjoyb;
	// 0 ;* sort CH FlightStick Pro buttons and coolie hat
sortchstick:
	// 4405 
	/* SortCHStick:	mov	TM_CoolieVal,0 */
	tm_coolieval = 0;
	/* mov	al,TM_CoolieNew */
	al = tm_coolienew;
	/* mov	TM_CoolieOld,al */
	tm_coolieold = al;
	/* mov	TM_CoolieNew,0 */
	tm_coolienew = 0;
	/* mov	dx,GAME_PORT */
	dx = 0x00201;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,11110000b */
	AND(al, 0xf0);
	/* cmp	al,11100000b	;button A1? */
	CMP(al, 0xe0);
	/* je	CHButtonA1	;yes -> */
	if ((db)(al) == (db)(0xe0)) {goto chbuttona1;}
	/* cmp	al,11010000b	;button A2? */
	CMP(al, 0xd0);
	/* je	CHButtonA2	;yes -> */
	if ((db)(al) == (db)(0xd0)) {goto chbuttona2;}
	/* cmp	al,10110000b	;button B1? */
	CMP(al, 0xb0);
	/* je	CHButtonB1	;yes -> */
	if ((db)(al) == (db)(0xb0)) {goto chbuttonb1;}
	/* cmp	al,01110000b	;button B2? */
	CMP(al, 0x70);
	/* je	CHButtonB2	;yes -> */
	if ((db)(al) == (db)(0x70)) {goto chbuttonb2;}
	/* cmp	al,00000000b	;coolie up? */
	CMP(al, 0x0);
	/* je	CHCoolieUp	;yes -> */
	if ((db)(al) == (db)(0x0)) {goto chcoolieup;}
	/* cmp	al,10000000b	;coolie down? */
	CMP(al, 0x80);
	/* je	CHCoolieDn	;yes -> */
	if ((db)(al) == (db)(0x80)) {goto chcooliedn;}
	/* cmp	al,01000000b	;coolie right? */
	CMP(al, 0x40);
	/* je	CHCoolieRt	;yes -> */
	if ((db)(al) == (db)(0x40)) {goto chcooliert;}
	/* cmp	al,11000000b	;coolie left? */
	CMP(al, 0xc0);
	/* je	CHCoolieLt	;yes -> */
	if ((db)(al) == (db)(0xc0)) {goto chcoolielt;}
	/* jmp	ReadJoyExit */
	goto readjoyexit;
chbuttona1:
	// 4407 
	/* CHButtonA1:  	mov	JoyA_Fire1,1 */
	joya_fire1 = 1;
	/* test	OldJoyA_Fire1,1		;fire pressed last time? */
	TEST(oldjoya_fire1, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoya_fire1 & 1) != 0) {goto dummylabel5;}
	/* mov	JoyA_JustFired1,1	;just fired */
	joya_justfired1 = 1;
dummylabel5:
	// 4409 
	/* @@:	     	jmp	ReadJoyExit */
	goto readjoyexit;
chbuttona2:
	// 4411 
	/* CHButtonA2: 	mov	JoyA_Fire2,1 */
	joya_fire2 = 1;
	/* test	OldJoyA_Fire2,1		;fire pressed last time? */
	TEST(oldjoya_fire2, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoya_fire2 & 1) != 0) {goto dummylabel6;}
	/* mov	JoyA_JustFired2,1	;just fired */
	joya_justfired2 = 1;
dummylabel6:
	// 4413 
	/* @@:	    	jmp	ReadJoyExit */
	goto readjoyexit;
chbuttonb1:
	// 4415 
	/* CHButtonB1:	mov	JoyB_Fire1,1 */
	joyb_fire1 = 1;
	/* test	OldJoyB_Fire1,1		;fire pressed last time? */
	TEST(oldjoyb_fire1, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoyb_fire1 & 1) != 0) {goto dummylabel7;}
	/* mov	JoyB_JustFired1,1	;just fired */
	joyb_justfired1 = 1;
dummylabel7:
	// 4417 
	/* @@:	     	jmp	ReadJoyExit */
	goto readjoyexit;
chbuttonb2:
	// 4419 
	/* CHButtonB2:	mov	JoyB_Fire2,1 */
	joyb_fire2 = 1;
	/* test	OldJoyB_Fire2,1		;fire pressed last time? */
	TEST(oldjoyb_fire2, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoyb_fire2 & 1) != 0) {goto dummylabel8;}
	/* mov	JoyB_JustFired2,1	;just fired */
	joyb_justfired2 = 1;
dummylabel8:
	// 4421 
	/* @@:	     	jmp	ReadJoyExit */
	goto readjoyexit;
chcoolieup:
	// 4423 
	/* CHCoolieUp:	mov	TM_CoolieNew,COOLIE_UP */
	tm_coolienew = 1;
	/* jmp	CHCoolieOk */
	goto chcoolieok;
chcooliedn:
	// 4425 
	/* CHCoolieDn:	mov	TM_CoolieNew,COOLIE_DN */
	tm_coolienew = 2;
	/* jmp	CHCoolieOk */
	goto chcoolieok;
chcoolielt:
	// 4427 
	/* CHCoolieLt:	mov	TM_CoolieNew,COOLIE_LT */
	tm_coolienew = 3;
	/* jmp	CHCoolieOk */
	goto chcoolieok;
chcooliert:
	// 4429 
	/* CHCoolieRt:	mov	TM_CoolieNew,COOLIE_RT */
	tm_coolienew = 4;
chcoolieok:
	// 4431 
	/* CHCoolieOk:	mov	al,TM_CoolieNew */
	al = tm_coolienew;
	/* cmp	al,TM_CoolieOld */
	CMP(al, tm_coolieold);
	/* je	@F */
	if ((db)(al) == (db)(tm_coolieold)) {goto dummylabel9;}
	/* mov	TM_CoolieVal,al */
	tm_coolieval = al;
dummylabel9:
	// 4433 
	/* @@:		jmp	ReadJoyExit */
	goto readjoyexit;
	// 0 ;* joystick timeout
joyatimeout:
	// 4435 
	/* JoyATimeOut:	mov	JoyA_Flag,0 */
	joya_flag = 0;
	// 0 ;* joystick not fitted
joyaopencct:
	// 4437 
	/* JoyAOpenCct:	xor	ax,ax */
	XOR(ax, ax);
	/* mov	JoyA_XPos,ax */
	joya_xpos = ax;
	/* mov	JoyA_YPos,ax */
	joya_ypos = ax;
	/* mov	JoyA_XVal,ax */
	joya_xval = ax;
	/* mov	JoyA_YVal,ax */
	joya_yval = ax;
	// 0 ;-----------------------------
	// 0 ;* read joystick B (if fitted)
	// 0 ;-----------------------------
readjoyb:
	// 4439 
	/* ReadJoyB: 	test	JoyB_Flag,1	;joystick B fitted? */
	TEST(joyb_flag, 1);
	/* jnz	__m2c_macrolocal_6_skip */
	if ((joyb_flag & 1) != 0) {goto __m2c_macrolocal_6_skip;}
	/* jmp	JoyBOpenCct */
	goto joybopencct;
__m2c_macrolocal_6_skip:
	// 4441 
	// 0 ;no ->
	/* mov	ah,JOY_B_XPOS */
	ah = 0x4;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_7_skip */
	if (!CF) {goto __m2c_macrolocal_7_skip;}
	/* jmp	JoyBTimeOut */
	goto joybtimeout;
__m2c_macrolocal_7_skip:
	// 4443 
	// 0 ;timeout ->
	/* test	JoySensitivity,1	;high sensitivity? */
	TEST(joysensitivity, 1);
	/* jz	SkipJoyB_XSens		;no -> */
	if (!(joysensitivity & 1)) {goto skipjoyb_xsens;}
	// 0 ;* pos = max(((pos * 4) - ref) / 2, 0)
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* sub	ax,JoyB_XRef */
	SUB(ax, joyb_xref);
	/* jnc	@F */
	if (!CF) {goto dummylabel10;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel10:
	// 4445 
	/* @@:		shr	ax,1 */
	SHR(ax, 1);
skipjoyb_xsens:
	// 4447 
	/* SkipJoyB_XSens:	mov	JoyB_XPos,ax */
	joyb_xpos = ax;
	/* mov	dx,JoyB_XScale */
	dx = joyb_xscale;
	/* mul	dx		;x val = x pos * x scale */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0	 	;1/2 bit round up */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,NPOS		;x val > NPOS? */
	CMP(ax, 32);
	/* jbe	XOkB		;no -> */
	if ((dw)(ax) <= (dw)(32)) {goto xokb;}
	/* mov	ax,NPOS */
	ax = 32;
xokb:
	// 4449 
	/* XOkB:		mov	JoyB_XVal,ax */
	joyb_xval = ax;
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	JoyBTimeOut	;timeout -> */
	if (CF) {goto joybtimeout;}
	/* test	JoySensitivity,1	;high sensitivity? */
	TEST(joysensitivity, 1);
	/* jz	SkipJoyB_YSens		;no -> */
	if (!(joysensitivity & 1)) {goto skipjoyb_ysens;}
	// 0 ;* pos = max(((pos * 4) - ref) / 2, 0)
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* sub	ax,JoyB_YRef */
	SUB(ax, joyb_yref);
	/* jnc	@F */
	if (!CF) {goto dummylabel11;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel11:
	// 4451 
	/* @@:		shr	ax,1 */
	SHR(ax, 1);
skipjoyb_ysens:
	// 4453 
	/* SkipJoyB_YSens:	mov	JoyB_YPos,ax */
	joyb_ypos = ax;
	/* mov	dx,JoyB_YScale */
	dx = joyb_yscale;
	/* mul	dx		;y val = y pos * y scale */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0	 	;1/2 bit round up */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,NPOS		;y val > NPOS? */
	CMP(ax, 32);
	/* jbe	YOkB		;no -> */
	if ((dw)(ax) <= (dw)(32)) {goto yokb;}
	/* mov	ax,NPOS */
	ax = 32;
yokb:
	// 4455 
	/* YOkB:		mov	JoyB_YVal,ax */
	joyb_yval = ax;
	// 0 ;* test for fire buttons pressed
	/* mov	dx,GAME_PORT */
	dx = 0x00201;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,JOY_B_FIRE1	;fire button 1 pressed? */
	TEST(al, 0x40);
	/* jnz	@F		;no -> */
	if ((al & 0x40) != 0) {goto dummylabel12;}
	/* mov	JoyB_Fire1,1 */
	joyb_fire1 = 1;
	/* test	OldJoyB_Fire1,1		;fire pressed last time? */
	TEST(oldjoyb_fire1, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoyb_fire1 & 1) != 0) {goto dummylabel12;}
	/* mov	JoyB_JustFired1,1	;just fired */
	joyb_justfired1 = 1;
dummylabel12:
	// 4457 
	/* @@:		test	al,JOY_B_FIRE2	;fire button 2 pressed? */
	TEST(al, 0x80);
	/* jnz	@F		;no -> */
	if ((al & 0x80) != 0) {goto dummylabel13;}
	/* mov	JoyB_Fire2,1 */
	joyb_fire2 = 1;
	/* test	OldJoyB_Fire2,1		;fire pressed last time? */
	TEST(oldjoyb_fire2, 1);
	/* jnz	@F			;yes -> */
	if ((oldjoyb_fire2 & 1) != 0) {goto dummylabel13;}
	/* mov	JoyB_JustFired2,1	;just fired */
	joyb_justfired2 = 1;
dummylabel13:
	// 4459 
	/* @@:		jmp	ReadJoyExit */
	goto readjoyexit;
	// 0 ;* joystick timeout
joybtimeout:
	// 4461 
	/* JoyBTimeOut:	mov	JoyB_Flag,0 */
	joyb_flag = 0;
	// 0 ;* joystick not fitted
joybopencct:
	// 4463 
	/* JoyBOpenCct:	xor	ax,ax */
	XOR(ax, ax);
	/* mov	JoyB_XPos,ax */
	joyb_xpos = ax;
	/* mov	JoyB_YPos,ax */
	joyb_ypos = ax;
	/* mov	JoyB_XVal,ax */
	joyb_xval = ax;
	/* mov	JoyB_YVal,ax */
	joyb_yval = ax;
readjoyexit:
	// 4465 
	/* ReadJoyExit:	ret */
	RETF(0);
readanalogue:
	// 908 
	/* mov	dx,GAME_PORT ;*       this stressful experience. */
	dx = 0x00201;
edummylabel3:
	// 4467 
	/* cli			;disable intr's for precise timing */
	CLI;
	/* mov	cx,0		;set timeout count */
	cx = 0;
stableloop:
	// 4469 
	/* StableLoop:	in	al,dx		;read game port */
	IN(al, dx);
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* test	al,ah		;test selected input */
	TEST(al, ah);
	/* jz	UnstableState	;input in stable state -> */
	if (!(al & ah)) {goto unstablestate;}
	/* loop	StableLoop	;wait for stable state */
	LOOP(stableloop);
	/* stc			;set timeout error */
	STC;
	/* jmp	AnalogueExit */
	goto analogueexit;
unstablestate:
	// 4471 
	/* UnstableState:	out	dx,al		;force game adapter to unstable state */
	OUT(dx, al);
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* mov	cx,0		;set timeout count */
	cx = 0;
unstableloop:
	// 4473 
	/* UnstableLoop:	in	al,dx		;read game port */
	IN(al, dx);
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* jmp	$+2 */
	J({;});
	/* test	al,ah		;test selected input */
	TEST(al, ah);
	/* jz	StableState	;input in stable state -> */
	if (!(al & ah)) {goto stablestate;}
	/* loop	UnstableLoop	;wait for stable state */
	LOOP(unstableloop);
	/* stc			;set timeout error */
	STC;
	/* jmp	AnalogueExit */
	goto analogueexit;
stablestate:
	// 4475 
	/* StableState:	neg	cx		;cx = duration of unstable state */
	NEG(cx);
	/* mov	ax,cx		;return analogue value in ax */
	ax = cx;
	/* clc			;clear timeout error */
	CLC;
analogueexit:
	// 4477 
	/* AnalogueExit:	sti			;enable intr's */
	STI;
	/* ret */
	RETN(0);
recalthrust:
	// 973 
	// 0 ;-----------------------------
	// 0 ;* assume joysticks not fitted
	// 0 ;-----------------------------
edummylabel4:
	// 4479 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	JoyA_Flag,al */
	joya_flag = al;
	/* mov	JoyA_XVal,ax */
	joya_xval = ax;
	/* mov	JoyA_YVal,ax */
	joya_yval = ax;
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	/* mov	TM_XPos,ax */
	tm_xpos = ax;
	/* mov	TM_YPos,ax */
	tm_ypos = ax;
	/* mov	TM_XVal,ax */
	tm_xval = ax;
	/* mov	TM_YVal,ax */
	tm_yval = ax;
	/* mov	TM_CooliePos,ax */
	tm_cooliepos = ax;
	/* mov	TM_MidX,ax */
	tm_midx = ax;
	/* mov	TM_MidY,ax */
	tm_midy = ax;
	/* mov	TM_CoolieHat,al */
	tm_cooliehat = al;
	/* mov	TM_CoolieVal,al */
	tm_coolieval = al;
	/* mov	TM_CoolieNew,al */
	tm_coolienew = al;
	/* mov	TM_CoolieOld,al */
	tm_coolieold = al;
	// 0 ;----------------
	// 0 ;* recal centre x
	// 0 ;----------------
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalThrust */
	if (CF) {goto skiprecalthrust;}
	/* mov	TM_MidX,ax */
	tm_midx = ax;
	// 0 ;----------------
	// 0 ;* recal centre y
	// 0 ;----------------
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	SkipRecalThrust */
	if (CF) {goto skiprecalthrust;}
	/* mov	TM_MidY,ax */
	tm_midy = ax;
	// 0 ;-------------------------------
	// 0 ;* check if coolie hat available
	// 0 ;-------------------------------
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jc	@F */
	if (CF) {goto dummylabel14;}
	/* mov	TM_CoolieHat,1 */
	tm_cooliehat = 1;
dummylabel14:
	// 4481 
	/* @@:	 	mov	JoyA_Flag,1 */
	joya_flag = 1;
skiprecalthrust:
	// 4483 
	/* ret */
	RETF(0);
readthrust:
	// 1037 
	// 0 ;---------------------------------------
	// 0 ;* copy previous values of joystick vars
	// 0 ;---------------------------------------
edummylabel5:
	// 4485 
	/* mov	ax,JoyA_XVal */
	ax = joya_xval;
	/* mov	OldJoyA_XVal,ax */
	oldjoya_xval = ax;
	/* mov	ax,JoyA_YVal */
	ax = joya_yval;
	/* mov	OldJoyA_YVal,ax */
	oldjoya_yval = ax;
	/* mov	al,JoyA_Fire1 */
	al = joya_fire1;
	/* mov	OldJoyA_Fire1,al */
	oldjoya_fire1 = al;
	/* mov	al,JoyA_Fire2 */
	al = joya_fire2;
	/* mov	OldJoyA_Fire2,al */
	oldjoya_fire2 = al;
	/* mov	al,JoyB_Fire1 */
	al = joyb_fire1;
	/* mov	OldJoyB_Fire1,al */
	oldjoyb_fire1 = al;
	/* mov	al,JoyB_Fire2 */
	al = joyb_fire2;
	/* mov	OldJoyB_Fire2,al */
	oldjoyb_fire2 = al;
	// 0 ;* reset fire flags
	/* xor	al,al */
	XOR(al, al);
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	// 0 ;* reset coolie hat
	/* mov	TM_CoolieVal,al */
	tm_coolieval = al;
	// 0 ;---------------------------
	// 0 ;* check ThrustMaster fitted
	// 0 ;---------------------------
	/* test	JoyA_Flag,1 */
	TEST(joya_flag, 1);
	/* jnz	__m2c_macrolocal_11_skip */
	if ((joya_flag & 1) != 0) {goto __m2c_macrolocal_11_skip;}
	/* jmp	TMOpenCct */
	goto tmopencct;
__m2c_macrolocal_11_skip:
	// 4487 
	// 0 ;-------------------
	// 0 ;* debug calibration
	// 0 ;-------------------
	// 0 ;------------------------
	// 0 ;* read joystick position
	// 0 ;------------------------
	/* mov	ah,JOY_A_XPOS */
	ah = 0x1;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_12_skip */
	if (!CF) {goto __m2c_macrolocal_12_skip;}
	/* jmp	TMTimeout */
	goto tmtimeout;
__m2c_macrolocal_12_skip:
	// 4489 
	/* mov	TM_XPos,ax */
	tm_xpos = ax;
	/* mov	ah,JOY_A_YPOS */
	ah = 0x2;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_13_skip */
	if (!CF) {goto __m2c_macrolocal_13_skip;}
	/* jmp	TMTimeout */
	goto tmtimeout;
__m2c_macrolocal_13_skip:
	// 4491 
	/* mov	TM_YPos,ax */
	tm_ypos = ax;
	// 0 ;-----------------------
	// 0 ;* calc joystick x value (0 .. NPOS)
	// 0 ;-----------------------
	// 0 ;* if x pos < mid x then
	// 0 ;*    (left of centre)
	// 0 ;*    x val = ((x pos - min x) * NPOS / 2) / (mid x - min x)
	// 0 ;* else
	// 0 ;*    (right of centre)
	// 0 ;*    x val = ((x pos - mid x) * NPOS / 2) / (max x - mid x) + NPOS / 2
	// 0 ;* endif
	/* mov	ax,TM_XPos */
	ax = tm_xpos;
	/* cmp	ax,TM_MidX */
	CMP(ax, tm_midx);
	/* jae	XRight */
	if ((dw)(ax) >= (dw)(tm_midx)) {goto xright;}
	// 0 ;-------------------------
	// 0 ;* joystick left of centre
	// 0 ;-------------------------
	/* mov	bp,TM_MinX	;normal sens */
	bp = tm_minx;
	/* test	JoySensitivity,1 */
	TEST(joysensitivity, 1);
	/* jz	@F */
	if (!(joysensitivity & 1)) {goto dummylabel15;}
	/* mov	ax,TM_MidX	;high sens */
	ax = tm_midx;
	/* sub	ax,TM_MinX */
	SUB(ax, tm_minx);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,TM_MinX */
	ADC(ax, tm_minx);
	/* mov	bp,ax */
	bp = ax;
dummylabel15:
	// 4493 
	/* @@:		mov	ax,TM_XPos */
	ax = tm_xpos;
	/* sub	ax,bp */
	SUB(ax, bp);
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
	/* mov	dx,NPOS/2 */
	dx = 32/2;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bx,TM_MidX */
	bx = tm_midx;
	/* sub	bx,bp */
	SUB(bx, bp);
	/* jnc	@F */
	if (!CF) {goto dummylabel16;}
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel16:
	// 4495 
	/* @@:		cmp	bx,dx */
	CMP(bx, dx);
	/* jbe	XDivOv		;(keep same value as last frame) */
	if ((dw)(bx) <= (dw)(dx)) {goto xdivov;}
	/* div	bx */
	DIV2(bx);
	/* jmp	XOk */
	goto xok;
	// 0 ;--------------------------
	// 0 ;* joystick right of centre
	// 0 ;--------------------------
xright:
	// 4497 
	/* XRight:	   	mov	bp,TM_MaxX	;normal sens */
	bp = tm_maxx;
	/* test	JoySensitivity,1 */
	TEST(joysensitivity, 1);
	/* jz	@F */
	if (!(joysensitivity & 1)) {goto dummylabel17;}
	/* mov	ax,TM_MaxX	;high sens */
	ax = tm_maxx;
	/* sub	ax,TM_MidX */
	SUB(ax, tm_midx);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,TM_MidX */
	ADC(ax, tm_midx);
	/* mov	bp,ax */
	bp = ax;
dummylabel17:
	// 4499 
	/* @@:		mov	ax,TM_XPos */
	ax = tm_xpos;
	/* sub	ax,TM_MidX */
	SUB(ax, tm_midx);
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
	/* mov	dx,NPOS/2 */
	dx = 32/2;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bx,bp */
	bx = bp;
	/* sub	bx,TM_MidX */
	SUB(bx, tm_midx);
	/* jnc	@F */
	if (!CF) {goto dummylabel18;}
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel18:
	// 4501 
	/* @@:		cmp	bx,dx */
	CMP(bx, dx);
	/* jbe	XDivOv		;(keep same value as last frame) */
	if ((dw)(bx) <= (dw)(dx)) {goto xdivov;}
	/* div	bx */
	DIV2(bx);
	/* add	ax,NPOS/2 */
	ADD(ax, 32/2);
	// 0 ;---------------------
	// 0 ;* keep x val in range (0 .. NPOS)
	// 0 ;---------------------
xok:
	// 4503 
	/* XOk:		cmp	ax,NPOS */
	CMP(ax, 32);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(32)) {goto dummylabel19;}
	/* mov	ax,NPOS */
	ax = 32;
dummylabel19:
	// 4505 
	/* @@:		mov	TM_XVal,ax */
	tm_xval = ax;
xdivov:
	// 4507 
	// 0 ;-----------------------
	// 0 ;* calc joystick y value (0 .. NPOS)
	// 0 ;-----------------------
	// 0 ;* if y pos < mid y then
	// 0 ;*    (above centre)
	// 0 ;*    y val = ((y pos - min y) * NPOS / 2) / (mid y - min y)
	// 0 ;* else
	// 0 ;*    (below centre)
	// 0 ;*    y val = ((y pos - mid y) * NPOS / 2) / (max y - mid y) + NPOS / 2
	// 0 ;* endif
	/* mov	ax,TM_YPos */
	ax = tm_ypos;
	/* cmp	ax,TM_MidY */
	CMP(ax, tm_midy);
	/* jae	YBelow */
	if ((dw)(ax) >= (dw)(tm_midy)) {goto ybelow;}
	// 0 ;-----------------------
	// 0 ;* joystick above centre
	// 0 ;-----------------------
	/* mov	bp,TM_MinY	;normal sens */
	bp = tm_miny;
	/* test	JoySensitivity,1 */
	TEST(joysensitivity, 1);
	/* jz	@F */
	if (!(joysensitivity & 1)) {goto dummylabel20;}
	/* mov	ax,TM_MidY	;high sens */
	ax = tm_midy;
	/* sub	ax,TM_MinY */
	SUB(ax, tm_miny);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,TM_MinY */
	ADC(ax, tm_miny);
	/* mov	bp,ax */
	bp = ax;
dummylabel20:
	// 4509 
	/* @@:		mov	ax,TM_YPos */
	ax = tm_ypos;
	/* sub	ax,bp */
	SUB(ax, bp);
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
	/* mov	dx,NPOS/2 */
	dx = 32/2;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bx,TM_MidY */
	bx = tm_midy;
	/* sub	bx,bp */
	SUB(bx, bp);
	/* jnc	@F */
	if (!CF) {goto dummylabel21;}
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel21:
	// 4511 
	/* @@:		cmp	bx,dx */
	CMP(bx, dx);
	/* jbe	YDivOv		;(keep same value as last frame) */
	if ((dw)(bx) <= (dw)(dx)) {goto ydivov;}
	/* div	bx */
	DIV2(bx);
	/* jmp	YOk */
	goto yok;
	// 0 ;-----------------------
	// 0 ;* joystick below centre
	// 0 ;-----------------------
ybelow:
	// 4513 
	/* YBelow:		mov	bp,TM_MaxY	;normal sens */
	bp = tm_maxy;
	/* test	JoySensitivity,1 */
	TEST(joysensitivity, 1);
	/* jz	@F */
	if (!(joysensitivity & 1)) {goto dummylabel22;}
	/* mov	ax,TM_MaxY	;high sens */
	ax = tm_maxy;
	/* sub	ax,TM_MidY */
	SUB(ax, tm_midy);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,TM_MidY */
	ADC(ax, tm_midy);
	/* mov	bp,ax */
	bp = ax;
dummylabel22:
	// 4515 
	/* @@:		mov	ax,TM_YPos */
	ax = tm_ypos;
	/* sub	ax,TM_MidY */
	SUB(ax, tm_midy);
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
	/* mov	dx,NPOS/2 */
	dx = 32/2;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bx,bp */
	bx = bp;
	/* sub	bx,TM_MidY */
	SUB(bx, tm_midy);
	/* jnc	@F */
	if (!CF) {goto dummylabel23;}
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel23:
	// 4517 
	/* @@:		cmp	bx,dx */
	CMP(bx, dx);
	/* jbe	YDivOv		;(keep same value as last frame) */
	if ((dw)(bx) <= (dw)(dx)) {goto ydivov;}
	/* div	bx */
	DIV2(bx);
	/* add	ax,NPOS/2 */
	ADD(ax, 32/2);
	// 0 ;---------------------
	// 0 ;* keep y val in range (0 .. NPOS)
	// 0 ;---------------------
yok:
	// 4519 
	/* YOk:		cmp	ax,NPOS */
	CMP(ax, 32);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(32)) {goto dummylabel24;}
	/* mov	ax,NPOS */
	ax = 32;
dummylabel24:
	// 4521 
	/* @@:		mov	TM_YVal,ax */
	tm_yval = ax;
ydivov:
	// 4523 
	// 0 ;----------------------------
	// 0 ;* read "coolie hat" position
	// 0 ;----------------------------
	/* test	TM_CoolieHat,1 */
	TEST(tm_cooliehat, 1);
	/* jnz	__m2c_macrolocal_22_skip */
	if ((tm_cooliehat & 1) != 0) {goto __m2c_macrolocal_22_skip;}
	/* jmp	SkipCoolieHat */
	goto skipcooliehat;
__m2c_macrolocal_22_skip:
	// 4525 
	/* mov	al,TM_CoolieNew */
	al = tm_coolienew;
	/* mov	TM_CoolieOld,al */
	tm_coolieold = al;
	/* mov	TM_CooliePos,0 */
	tm_cooliepos = 0;
	/* mov	TM_CoolieVal,0 */
	tm_coolieval = 0;
	/* mov	TM_CoolieNew,0 */
	tm_coolienew = 0;
	/* mov	ah,JOY_B_YPOS */
	ah = 0x8;
	/* call	ReadAnalogue */
	CALL(readanalogue, 0);
	/* jnc	__m2c_macrolocal_23_skip */
	if (!CF) {goto __m2c_macrolocal_23_skip;}
	/* jmp	TMTimeout */
	goto tmtimeout;
__m2c_macrolocal_23_skip:
	// 4527 
	/* mov	TM_CooliePos,ax */
	tm_cooliepos = ax;
	// 0 ;* coolie up
	/* mov	ax,TM_CoolieRt */
	ax = tm_cooliert;
	/* sub	ax,TM_CoolieUp */
	SUB(ax, tm_coolieup);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* add	ax,TM_CoolieUp */
	ADD(ax, tm_coolieup);
	/* cmp	TM_CooliePos,ax */
	CMP(tm_cooliepos, ax);
	/* ja	@F */
	if ((dw)(tm_cooliepos) > (dw)(ax)) {goto dummylabel25;}
	/* mov	TM_CoolieNew,COOLIE_UP */
	tm_coolienew = 1;
	/* jmp	ContCoolie */
	goto contcoolie;
	// 0 ;* coolie right
dummylabel25:
	// 4529 
	/* @@:		mov	ax,TM_CoolieDn */
	ax = tm_cooliedn;
	/* sub	ax,TM_CoolieRt */
	SUB(ax, tm_cooliert);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* add	ax,TM_CoolieRt */
	ADD(ax, tm_cooliert);
	/* cmp	TM_CooliePos,ax */
	CMP(tm_cooliepos, ax);
	/* ja	@F */
	if ((dw)(tm_cooliepos) > (dw)(ax)) {goto dummylabel26;}
	/* mov	TM_CoolieNew,COOLIE_RT */
	tm_coolienew = 4;
	/* jmp	ContCoolie */
	goto contcoolie;
	// 0 ;* coolie down
dummylabel26:
	// 4531 
	/* @@:		mov	ax,TM_CoolieLt */
	ax = tm_coolielt;
	/* sub	ax,TM_CoolieDn */
	SUB(ax, tm_cooliedn);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* add	ax,TM_CoolieDn */
	ADD(ax, tm_cooliedn);
	/* cmp	TM_CooliePos,ax */
	CMP(tm_cooliepos, ax);
	/* ja	@F */
	if ((dw)(tm_cooliepos) > (dw)(ax)) {goto dummylabel27;}
	/* mov	TM_CoolieNew,COOLIE_DN */
	tm_coolienew = 2;
	/* jmp	ContCoolie */
	goto contcoolie;
	// 0 ;* coolie left
dummylabel27:
	// 4533 
	/* @@:		mov	ax,TM_CoolieCn */
	ax = tm_cooliecn;
	/* sub	ax,TM_CoolieLt */
	SUB(ax, tm_coolielt);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* add	ax,TM_CoolieLt */
	ADD(ax, tm_coolielt);
	/* cmp	TM_CooliePos,ax */
	CMP(tm_cooliepos, ax);
	/* ja	@F */
	if ((dw)(tm_cooliepos) > (dw)(ax)) {goto dummylabel28;}
	/* mov	TM_CoolieNew,COOLIE_LT */
	tm_coolienew = 3;
dummylabel28:
	// 4535 
	// 0 ;---------------------------
contcoolie:
	// 4537 
	// 0 ;---------------------------
	// 0 ;* check for coolie hat change
	/* mov	al,TM_CoolieNew */
	al = tm_coolienew;
	/* cmp	al,TM_CoolieOld */
	CMP(al, tm_coolieold);
	/* je	@F */
	if ((db)(al) == (db)(tm_coolieold)) {goto dummylabel29;}
	/* mov	TM_CoolieVal,al */
	tm_coolieval = al;
	// 0 ;* test for fire buttons pressed
dummylabel29:
	// 4539 
	/* @@:		mov	dx,GAME_PORT */
	dx = 0x00201;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,TM_FIRE1 */
	TEST(al, 0x10);
	/* jnz	@F */
	if ((al & 0x10) != 0) {goto dummylabel30;}
	/* mov	JoyA_Fire1,1 */
	joya_fire1 = 1;
	/* test	OldJoyA_Fire1,1 */
	TEST(oldjoya_fire1, 1);
	/* jnz	@F */
	if ((oldjoya_fire1 & 1) != 0) {goto dummylabel30;}
	/* mov	JoyA_JustFired1,1 */
	joya_justfired1 = 1;
dummylabel30:
	// 4541 
	/* @@:		test	al,TM_FIRE2 */
	TEST(al, 0x20);
	/* jnz	@F */
	if ((al & 0x20) != 0) {goto dummylabel31;}
	/* mov	JoyA_Fire2,1 */
	joya_fire2 = 1;
	/* test	OldJoyA_Fire2,1 */
	TEST(oldjoya_fire2, 1);
	/* jnz	@F */
	if ((oldjoya_fire2 & 1) != 0) {goto dummylabel31;}
	/* mov	JoyA_JustFired2,1 */
	joya_justfired2 = 1;
dummylabel31:
	// 4543 
	/* @@:		test	al,TM_FIRE3 */
	TEST(al, 0x40);
	/* jnz	@F */
	if ((al & 0x40) != 0) {goto dummylabel32;}
	/* mov	JoyB_Fire1,1 */
	joyb_fire1 = 1;
	/* test	OldJoyB_Fire1,1 */
	TEST(oldjoyb_fire1, 1);
	/* jnz	@F */
	if ((oldjoyb_fire1 & 1) != 0) {goto dummylabel32;}
	/* mov	JoyB_JustFired1,1 */
	joyb_justfired1 = 1;
dummylabel32:
	// 4545 
	/* @@:		test	al,TM_FIRE4 */
	TEST(al, 0x80);
	/* jnz	@F */
	if ((al & 0x80) != 0) {goto dummylabel33;}
	/* mov	JoyB_Fire2,1 */
	joyb_fire2 = 1;
	/* test	OldJoyB_Fire2,1 */
	TEST(oldjoyb_fire2, 1);
	/* jnz	@F */
	if ((oldjoyb_fire2 & 1) != 0) {goto dummylabel33;}
	/* mov	JoyB_JustFired2,1 */
	joyb_justfired2 = 1;
dummylabel33:
	// 4547 
skipcooliehat:
	// 4549 
	// 0 ;--------------------
	// 0 ;* sort joystick vars
	// 0 ;--------------------
	/* mov	ax,TM_XVal */
	ax = tm_xval;
	/* mov	JoyA_XVal,ax */
	joya_xval = ax;
	/* mov	ax,TM_YVal */
	ax = tm_yval;
	/* mov	JoyA_YVal,ax */
	joya_yval = ax;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
tmtimeout:
	// 4551 
	// 0 ;---------------------------
	/* mov	JoyA_Flag,0 */
	joya_flag = 0;
	// 0 ;---------------------------
tmopencct:
	// 4553 
	// 0 ;---------------------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	TM_XPos,ax */
	tm_xpos = ax;
	/* mov	TM_YPos,ax */
	tm_ypos = ax;
	/* mov	TM_XVal,ax */
	tm_xval = ax;
	/* mov	TM_YVal,ax */
	tm_yval = ax;
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
                case m2c::k__m2c_macrolocal_11_skip: 	goto __m2c_macrolocal_11_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_22_skip: 	goto __m2c_macrolocal_22_skip;
        case m2c::k__m2c_macrolocal_23_skip: 	goto __m2c_macrolocal_23_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::kanalogueexit: 	goto analogueexit;
        case m2c::kchbuttona1: 	goto chbuttona1;
        case m2c::kchbuttona2: 	goto chbuttona2;
        case m2c::kchbuttonb1: 	goto chbuttonb1;
        case m2c::kchbuttonb2: 	goto chbuttonb2;
        case m2c::kchcooliedn: 	goto chcooliedn;
        case m2c::kchcoolielt: 	goto chcoolielt;
        case m2c::kchcoolieok: 	goto chcoolieok;
        case m2c::kchcooliert: 	goto chcooliert;
        case m2c::kchcoolieup: 	goto chcoolieup;
        case m2c::kcontcoolie: 	goto contcoolie;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel21: 	goto dummylabel21;
        case m2c::kdummylabel22: 	goto dummylabel22;
        case m2c::kdummylabel23: 	goto dummylabel23;
        case m2c::kdummylabel24: 	goto dummylabel24;
        case m2c::kdummylabel25: 	goto dummylabel25;
        case m2c::kdummylabel26: 	goto dummylabel26;
        case m2c::kdummylabel27: 	goto dummylabel27;
        case m2c::kdummylabel28: 	goto dummylabel28;
        case m2c::kdummylabel29: 	goto dummylabel29;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel30: 	goto dummylabel30;
        case m2c::kdummylabel31: 	goto dummylabel31;
        case m2c::kdummylabel32: 	goto dummylabel32;
        case m2c::kdummylabel33: 	goto dummylabel33;
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
        case m2c::kjoyaopencct: 	goto joyaopencct;
        case m2c::kjoyatimeout: 	goto joyatimeout;
        case m2c::kjoybopencct: 	goto joybopencct;
        case m2c::kjoybtimeout: 	goto joybtimeout;
        case m2c::kreadanalogue: 	goto readanalogue;
        case m2c::kreadjoya: 	goto readjoya;
        case m2c::kreadjoyb: 	goto readjoyb;
        case m2c::kreadjoyexit: 	goto readjoyexit;
        case m2c::kreadjoysticks: 	goto readjoysticks;
        case m2c::kreadthrust: 	goto readthrust;
        case m2c::krecaljoysticks: 	goto recaljoysticks;
        case m2c::krecalthrust: 	goto recalthrust;
        case m2c::kskipcooliehat: 	goto skipcooliehat;
        case m2c::kskipjoya_xsens: 	goto skipjoya_xsens;
        case m2c::kskipjoya_ysens: 	goto skipjoya_ysens;
        case m2c::kskipjoyb_xsens: 	goto skipjoyb_xsens;
        case m2c::kskipjoyb_ysens: 	goto skipjoyb_ysens;
        case m2c::kskiprecala: 	goto skiprecala;
        case m2c::kskiprecalb: 	goto skiprecalb;
        case m2c::kskiprecalthrust: 	goto skiprecalthrust;
        case m2c::ksortchstick: 	goto sortchstick;
        case m2c::kstableloop: 	goto stableloop;
        case m2c::kstablestate: 	goto stablestate;
        case m2c::ktmopencct: 	goto tmopencct;
        case m2c::ktmtimeout: 	goto tmtimeout;
        case m2c::kunstableloop: 	goto unstableloop;
        case m2c::kunstablestate: 	goto unstablestate;
        case m2c::kxdivov: 	goto xdivov;
        case m2c::kxok: 	goto xok;
        case m2c::kxoka: 	goto xoka;
        case m2c::kxokb: 	goto xokb;
        case m2c::kxright: 	goto xright;
        case m2c::kybelow: 	goto ybelow;
        case m2c::kydivov: 	goto ydivov;
        case m2c::kyok: 	goto yok;
        case m2c::kyoka: 	goto yoka;
        case m2c::kyokb: 	goto yokb;
        default: return __dispatch_call(__disp, _state);
    };
}

