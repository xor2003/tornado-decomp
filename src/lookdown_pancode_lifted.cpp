/* THIS IS GENERATED FILE */

        
#include "lookdown.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatelookdown:
	// 2051 
	// 0 ;--------------
	// 0 ;* clear lh pad
	// 0 ;--------------
edummylabel1:
	// 4369 
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,8 */
	cx = 8;
	/* mov	bl,49 */
	bl = 49;
	/* mov	dx,87 */
	dx = 87;
	/* mov	bh,141 */
	bh = 141;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,7 */
	cx = 7;
	/* mov	bl,49 */
	bl = 49;
	/* mov	bh,141 */
	bh = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,88 */
	cx = 88;
	/* mov	bl,49 */
	bl = 49;
	/* mov	bh,141 */
	bh = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;--------------
	// 0 ;* clear rh pad
	// 0 ;--------------
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,232 */
	cx = 232;
	/* mov	bl,49 */
	bl = 49;
	/* mov	dx,311 */
	dx = 311;
	/* mov	bh,141 */
	bh = 141;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,231 */
	cx = 231;
	/* mov	bl,49 */
	bl = 49;
	/* mov	bh,141 */
	bh = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_PAD */
	al = 136;
	/* mov	cx,312 */
	cx = 312;
	/* mov	bl,49 */
	bl = 49;
	/* mov	bh,141 */
	bh = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;---------------
	// 0 ;* print numbers
	// 0 ;---------------
	/* mov	si,OFFSET Num$ */
	si = m2c::near_offset_external(numdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8+4 */
	cx = 8+4;
	/* mov	bl,51 */
	bl = 51;
	/* mov	bh,51+5 */
	bh = 51+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8-1 */
	cx = 8-1;
	/* mov	bl,51+6 */
	bl = 51+6;
	/* mov	dx,8+3 */
	dx = 8+3;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2109 						call	VLineDraw */
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2110 call	HLineDraw */
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8+4 */
	cx = 8+4;
	/* mov	bl,70 */
	bl = 70;
	/* mov	bh,70+5 */
	bh = 70+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8-1 */
	cx = 8-1;
	/* mov	bl,70+6 */
	bl = 70+6;
	/* mov	dx,8+3 */
	dx = 8+3;
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2120 						call	HLineDraw */
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2121 						call	VLineDraw */
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8+4 */
	cx = 8+4;
	/* mov	bl,89 */
	bl = 89;
	/* mov	bh,89+5 */
	bh = 89+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8-1 */
	cx = 8-1;
	/* mov	bl,89+6 */
	bl = 89+6;
	/* mov	dx,8+3 */
	dx = 8+3;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2133 						call	VLineDraw */
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2134 call	HLineDraw */
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8+4 */
	cx = 8+4;
	/* mov	bl,108 */
	bl = 108;
	/* mov	bh,108+5 */
	bh = 108+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8-1 */
	cx = 8-1;
	/* mov	bl,108+6 */
	bl = 108+6;
	/* mov	dx,8+3 */
	dx = 8+3;
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2144 						call	HLineDraw */
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2145 						call	VLineDraw */
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8+4 */
	cx = 8+4;
	/* mov	bl,127 */
	bl = 127;
	/* mov	bh,127+5 */
	bh = 127+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,8-1 */
	cx = 8-1;
	/* mov	bl,127+6 */
	bl = 127+6;
	/* mov	dx,8+3 */
	dx = 8+3;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2157 						call	VLineDraw */
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2158 call	HLineDraw */
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232+4 */
	cx = 232+4;
	/* mov	bl,51 */
	bl = 51;
	/* mov	bh,51+5 */
	bh = 51+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232-1 */
	cx = 232-1;
	/* mov	bl,51+6 */
	bl = 51+6;
	/* mov	dx,232+3 */
	dx = 232+3;
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2168 						call	HLineDraw */
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2169 						call	VLineDraw */
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232+4 */
	cx = 232+4;
	/* mov	bl,70 */
	bl = 70;
	/* mov	bh,70+5 */
	bh = 70+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232-1 */
	cx = 232-1;
	/* mov	bl,70+6 */
	bl = 70+6;
	/* mov	dx,232+3 */
	dx = 232+3;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2181 						call	VLineDraw */
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2182 call	HLineDraw */
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232+4 */
	cx = 232+4;
	/* mov	bl,113 */
	bl = 113;
	/* mov	bh,113+5 */
	bh = 113+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232-1 */
	cx = 232-1;
	/* mov	bl,113+6 */
	bl = 113+6;
	/* mov	dx,232+3 */
	dx = 232+3;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2193 						call	VLineDraw */
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2194 call	HLineDraw */
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232+4 */
	cx = 232+4;
	/* mov	bl,132 */
	bl = 132;
	/* mov	bh,132+5 */
	bh = 132+5;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_KNEE_NUM */
	al = 140;
	/* mov	cx,232-1 */
	cx = 232-1;
	/* mov	bl,132+6 */
	bl = 132+6;
	/* mov	dx,232+3 */
	dx = 232+3;
/* m2c-phantom removed: 	J(CALLF(hlinedraw,0));	// 2204 						call	HLineDraw */
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 2205 						call	VLineDraw */
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;--------------------
	// 0 ;* print kneepad text
	// 0 ;--------------------
	// 0 ;* sort joystick text colour
	/* mov	si,OFFSET TextCol2	;assume joystick 1 unavailable */
	si = m2c::near_offset_external(textcol2);
	/* mov	di,OFFSET TextCol2	;assume joystick 2 unavailable */
	di = m2c::near_offset_external(textcol2);
	/* test	JoyA_Flag,1	;joystick 1 available? */
	TEST(joya_flag, 1);
	/* jz	@F		;no -> */
	if (!(joya_flag & 1)) {goto dummylabel1;}
	/* mov	si,OFFSET TextCol1 */
	si = m2c::near_offset_external(textcol1);
	/* test	JoyB_Flag,1	;joystick 2 available? */
	TEST(joyb_flag, 1);
	/* jz	@F		;no -> */
	if (!(joyb_flag & 1)) {goto dummylabel1;}
	/* mov	di,OFFSET TextCol1 */
	di = m2c::near_offset_external(textcol1);
dummylabel1:
	// 4371 
	/* @@:		mov	Joy1Col,si */
	joy1col = si;
	/* mov	Joy2Col,di */
	joy2col = di;
	/* mov	si,OFFSET Text$ */
	si = m2c::near_offset_external(textdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;-----------------------
	// 0 ;* draw seperating lines
	// 0 ;-----------------------
	// 0 ;* lhs
	/* mov	cx,6 */
	cx = 6;
	/* mov	dx,91 */
	dx = 91;
	/* mov	bl,67 */
	bl = 67;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2237 						call	HLineDraw
	/* mov	cx,6 */
	cx = 6;
	/* mov	dx,91 */
	dx = 91;
	/* mov	bl,86 */
	bl = 86;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2243 						call	HLineDraw
	/* mov	cx,6 */
	cx = 6;
	/* mov	dx,91 */
	dx = 91;
	/* mov	bl,105 */
	bl = 105;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2249 						call	HLineDraw
	/* mov	cx,6 */
	cx = 6;
	/* mov	dx,91 */
	dx = 91;
	/* mov	bl,124 */
	bl = 124;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2255 						call	HLineDraw
	// 0 ;* rhs
	/* mov	cx,228 */
	cx = 228;
	/* mov	dx,313 */
	dx = 313;
	/* mov	bl,67 */
	bl = 67;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2264 						call	HLineDraw
	/* mov	cx,228 */
	cx = 228;
	/* mov	dx,313 */
	dx = 313;
	/* mov	bl,110 */
	bl = 110;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2270 						call	HLineDraw
	/* mov	cx,228 */
	cx = 228;
	/* mov	dx,313 */
	dx = 313;
	/* mov	bl,129 */
	bl = 129;
	/* mov	al,COL_KNEE_INK1 */
	al = 137;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 2276 						call	HLineDraw
	// 0 ;----------------------------------
	// 0 ;* draw rings around selected items
	// 0 ;----------------------------------
	// 0 ;* visibility
	/* mov	ax,SecScanCnt1		;3 .. 15 */
	ax = secscancnt1;
	/* sub	ax,3			;0 .. 12 */
	SUB(ax, 3);
	/* shl	ax,1			;0 .. 24 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item1Rings */
	si = m2c::near_offset_external(item1rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* ground
	/* mov	al,GndTextEnabled	;0 .. 1 */
	al = gndtextenabled;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 2 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item2Rings */
	si = m2c::near_offset_external(item2rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* hills
	/* mov	al,HillTextEnabled	;0 .. 1 */
	al = hilltextenabled;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 2 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item3Rings */
	si = m2c::near_offset_external(item3rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* sky
	/* mov	al,CloudsEnabled	;0 .. 1 */
	al = cloudsenabled;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 2 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item4Rings */
	si = m2c::near_offset_external(item4rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* horizon
	/* mov	al,GradEnabled		;0 .. 1 */
	al = gradenabled;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 2 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item5Rings */
	si = m2c::near_offset_external(item5rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* ironwork
	/* mov	al,IronWork		;0 .. 1 */
	al = ironwork;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 2 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item6Rings */
	si = m2c::near_offset_external(item6rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* control device
	/* mov	ax,ControlDevice	;0 .. 10 */
	ax = controldevice;
	/* shl	ax,1			;0 .. 20 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item7Rings */
	si = m2c::near_offset_external(item7rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	// 0 ;* sound effects
	/* mov	al,SoundOption		;0 .. 2 */
	al = soundoption;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1			;0 .. 4 */
	SHL(ax, 1);
	/* shl	ax,1			;0 .. 8 */
	SHL(ax, 1);
	/* mov	si,OFFSET Item8Rings */
	si = m2c::near_offset_external(item8rings);
	/* add	si,ax */
	ADD(si, ax);
	/* call	DrawRing */
	CALL(drawring, 0);
	/* ret */
	RETN(0);
drawring:
	// 2360 
	/* mov	cx,RING_X[si] ;* kill: assume all */
	cx = m2c::getdata(*(dw*)(((db*)&((ring*)raddr(ds,si))->ring_x)));
edummylabel2:
	// 4373 
	/* mov	dx,cx */
	dx = cx;
	/* add	dl,RING_W[si] */
	ADD(dl, ((ring*)raddr(ds,si))->ring_w);
	/* adc	dh,0 */
	ADC(dh, 0);
	/* inc	cx */
	INC(cx);
	/* dec	dx */
	DEC(dx);
	/* mov	bl,RING_Y[si] */
	bl = m2c::getdata(((ring*)raddr(ds,si))->ring_y);
	/* mov	al,COL_KNEE_PEN */
	al = 139;
	/* push	si */
	PUSH(si);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	cx,RING_X[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((ring*)raddr(ds,si))->ring_x)));
	/* mov	dx,cx */
	dx = cx;
	/* add	dl,RING_W[si] */
	ADD(dl, ((ring*)raddr(ds,si))->ring_w);
	/* adc	dh,0 */
	ADC(dh, 0);
	/* inc	cx */
	INC(cx);
	/* dec	dx */
	DEC(dx);
	/* mov	bl,RING_Y[si] */
	bl = m2c::getdata(((ring*)raddr(ds,si))->ring_y);
	/* add	bl,8 */
	ADD(bl, 8);
	/* mov	al,COL_KNEE_PEN */
	al = 139;
	/* push	si */
	PUSH(si);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	cx,RING_X[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((ring*)raddr(ds,si))->ring_x)));
	/* mov	bl,RING_Y[si] */
	bl = m2c::getdata(((ring*)raddr(ds,si))->ring_y);
	/* inc	bl */
	INC(bl);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,6 */
	ADD(bh, 6);
	/* mov	al,COL_KNEE_PEN */
	al = 139;
	/* push	si */
	PUSH(si);
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	cx,RING_X[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((ring*)raddr(ds,si))->ring_x)));
	/* add	cl,RING_W[si] */
	ADD(cl, ((ring*)raddr(ds,si))->ring_w);
	/* adc	ch,0 */
	ADC(ch, 0);
	/* mov	bl,RING_Y[si] */
	bl = m2c::getdata(((ring*)raddr(ds,si))->ring_y);
	/* inc	bl */
	INC(bl);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,6 */
	ADD(bh, 6);
	/* mov	al,COL_KNEE_PEN */
	al = 139;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
useroptions:
	// 2412 
	// 0 ;--------
	// 0 ;* visual
	// 0 ;--------
edummylabel3:
	// 4375 
	/* call	UserVisOptions */
	CALLF(uservisoptions, 0);
	// 0 ;----------
	// 0 ;* ironwork
	// 0 ;----------
	/* mov	al,BYTE PTR KF_IronWork[K_STATUS] */
	al = *((&kf_ironwork)+k_status);
/* m2c-phantom removed: 	R(al = *((&kf_ironwork)+k_status););	// 2424 						mov	al,BYTE PTR KF_IronWork[K_STATUS] */
	/* xor	IronWork,al */
	XOR(ironwork, al);
	// 0 ;----------
	// 0 ;* controls
	// 0 ;----------
	/* mov	al,BYTE PTR KF_Control[K_STATUS] */
	al = *((&kf_control)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;change control device?
/* m2c-phantom removed: 	R(al = *((&kf_control)+k_status););	// 2434 mov	al,BYTE PTR KF_Control[K_STATUS] */
	/* jz	SkipControl	;no -> */
	if (!(al & al)) {goto skipcontrol;}
	/* mov	ax,ControlDevice */
	ax = controldevice;
	/* add	ax,2 */
	ADD(ax, 2);
	/* cmp	ax,CTRL_DEV_JOY2	;wrap around? */
	CMP(ax, 6);
	/* jbe	@F			;no -> */
	if ((dw)(ax) <= (dw)(6)) {goto dummylabel2;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel2:
	// 4377 
	/* @@:		mov	ControlDevice,ax */
	controldevice = ax;
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;---------------
	// 0 ;* sound effects
	// 0 ;---------------
skipcontrol:
	// 4379 
	/* SkipControl:	mov	al,BYTE PTR KF_Sound[K_STATUS] */
	al = *((&kf_sound)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;change sound?
/* m2c-phantom removed: 	R(al = *((&kf_sound)+k_status););	// 2450 mov	al,BYTE PTR KF_Sound[K_STATUS] */
	/* jz	SkipSound	;no -> */
	if (!(al & al)) {goto skipsound;}
	/* mov	al,SoundOption */
	al = soundoption;
	/* inc	al */
	INC(al);
	/* cmp	al,3		;wrap around? */
	CMP(al, 3);
	/* jb	@F		;no -> */
	if ((db)(al) < (db)(3)) {goto dummylabel3;}
	/* xor	al,al */
	XOR(al, al);
dummylabel3:
	// 4381 
	/* @@:		mov	SoundOption,al */
	soundoption = al;
	/* cmp	al,SOUND_OPT_OFF	;switch off? */
	CMP(al, 0);
	/* jne	@F			;no -> */
	if ((db)(al) != (db)(0)) {goto dummylabel4;}
	/* call	SuspendSound */
	CALLF(suspendsound, 0);
	/* jmp	SkipSound */
	goto skipsound;
dummylabel4:
	// 4383 
	/* @@:		call	ResumeSound */
	CALLF(resumesound, 0);
skipsound:
	// 4385 
/* m2c-phantom removed: 	J(RETN(0));	// 2463 SkipSound:	ret */
uservisoptions:
	// 2473 
	// 0 ;------------
	// 0 ;* visibility
	// 0 ;------------
edummylabel4:
	// 4387 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;adjust visibility?
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 2482 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz	SkipRange	;no -> */
	if (!(al & al)) {goto skiprange;}
	/* jmp SkipRange ;Added by Frankie Kam on 25th April 2018 */
	goto skiprange;
edummylabel5:
	// 4389 
	/* mov	ax,SecScanCnt1 */
	ax = secscancnt1;
	/* add	ax,2 */
	ADD(ax, 2);
	/* cmp	ax,15		;wrap around? */
	CMP(ax, 15);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(15)) {goto dummylabel5;}
	/* mov	ax,3 */
	ax = 3;
dummylabel5:
	// 4391 
	/* @@:		mov	SecScanCnt1,ax */
	secscancnt1 = ax;
	/* mov	SecScanCnt2,ax */
	secscancnt2 = ax;
	/* shr	ax,1		;count / 2 */
	SHR(ax, 1);
	/* neg	ax		;offset = -(count / 2) */
	NEG(ax);
	/* mov	SecScanOff1,ax */
	secscanoff1 = ax;
	/* mov	SecScanOff2,ax */
	secscanoff2 = ax;
	// 0 ;--------
	// 0 ;* ground
	// 0 ;--------
skiprange:
	// 4393 
	// 0 ;KFETCH	KF_GndText
	// 0 ;xor	GndTextEnabled,al
	// 0 ;xor	TreesEnabled,al
	// 0 ;-------
	// 0 ;* hills
	// 0 ;-------
	// 0 ;Commented off by Frankie Kam on 23/7/2018
	// 0 ;KFETCH	KF_HillText
	// 0 ;xor	HillTextEnabled,al
	// 0 ;-----
	// 0 ;* sky
	// 0 ;-----
	/* mov	al,BYTE PTR KF_Clouds[K_STATUS] */
	al = *((&kf_clouds)+k_status);
/* m2c-phantom removed: 	R(al = *((&kf_clouds)+k_status););	// 2516 					 	mov	al,BYTE PTR KF_Clouds[K_STATUS] */
	/* xor	CloudsEnabled,al */
	XOR(cloudsenabled, al);
	// 0 ;mov	al,SoundOption
	// 0 ;inc	al
	// 0 ;cmp	al,3		;wrap around?
	// 0 ;jb	@F		;no ->
	// 0 ;xor	al,al
	// 0 ;@@:		mov	SoundOption,al
	// 0 ;xor	StarsEnabled,al
	// 0 ;---------
	// 0 ;* horizon
	// 0 ;---------
/* m2c-phantom removed: 	R(al = *((&kf_horizon)+k_status););	// 2532 												mov	al,BYTE PTR KF_Horizon[K_STATUS] */
	/* mov	al,BYTE PTR KF_Horizon[K_STATUS] */
	al = *((&kf_horizon)+k_status);
	// 0 ;xor	ShakeUp,al
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je @F */
	if ((dw)(nvg_set) == (dw)(1)) {goto dummylabel6;}
	/* xor	GradEnabled,al */
	XOR(gradenabled, al);
dummylabel6:
	// 4395 
	// 0 ;--------------------
	// 0 ;* minimise / restore
	// 0 ;--------------------
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;minimise / restore?
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 2546 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jnz	__m2c_macrolocal_64_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_64_skip;}
	/* jmp	MinimiseOk */
	goto minimiseok;
__m2c_macrolocal_64_skip:
	// 4397 
	// 0 ;no ->
	/* jmp MinimiseOk ;Added by Frankie Kam on 25th April 2018 */
	goto minimiseok;
edummylabel6:
	// 4399 
	/* xor	Minimise,1	;minimise or restore? */
	XOR(*(minimise), 1);
	/* jz	@F		;restore -> */
	if (*(minimise) == 0) {goto dummylabel7;}
	// 0 ;* minimise
	/* mov	ax,SecScanCnt1 */
	ax = secscancnt1;
	/* mov	_SecScanCnt1,ax */
	_secscancnt1 = ax;
	/* mov	ax,SecScanOff1 */
	ax = secscanoff1;
	/* mov	_SecScanOff1,ax */
	_secscanoff1 = ax;
	/* mov	ax,SecScanCnt2 */
	ax = secscancnt2;
	/* mov	_SecScanCnt2,ax */
	_secscancnt2 = ax;
	/* mov	ax,SecScanOff2 */
	ax = secscanoff2;
	/* mov	_SecScanOff2,ax */
	_secscanoff2 = ax;
	/* mov	al,GndTextEnabled */
	al = gndtextenabled;
	/* mov	_GndTextEnabled,al */
	_gndtextenabled = al;
	/* mov	al,TreesEnabled */
	al = treesenabled;
	/* mov	_TreesEnabled,al */
	_treesenabled = al;
	/* mov	al,HillTextEnabled */
	al = hilltextenabled;
	/* mov	_HillTxtEnabled,al */
	_hilltxtenabled = al;
	/* mov	al,CloudsEnabled */
	al = cloudsenabled;
	/* mov	_CloudsEnabled,al */
	_cloudsenabled = al;
	/* mov	al,StarsEnabled */
	al = starsenabled;
	/* mov	_StarsEnabled,al */
	_starsenabled = al;
	/* mov	al,GradEnabled */
	al = gradenabled;
	/* mov	_GradEnabled,al */
	_gradenabled = al;
	/* mov	SecScanCnt1,3 */
	secscancnt1 = 3;
	/* mov	SecScanOff1,-1 */
	secscanoff1 = -1;
	/* mov	SecScanCnt2,3 */
	secscancnt2 = 3;
	/* mov	SecScanOff2,-1 */
	secscanoff2 = -1;
	/* xor	al,al */
	XOR(al, al);
	/* mov	GndTextEnabled,al */
	gndtextenabled = al;
	/* mov	TreesEnabled,al */
	treesenabled = al;
	/* mov	HillTextEnabled,al */
	hilltextenabled = al;
	/* mov	CloudsEnabled,al */
	cloudsenabled = al;
	/* mov	StarsEnabled,al */
	starsenabled = al;
	/* mov	GradEnabled,al */
	gradenabled = al;
	/* jmp	MinimiseOk */
	goto minimiseok;
	// 0 ;* restore
dummylabel7:
	// 4401 
	/* @@:		mov	ax,_SecScanCnt1 */
	ax = _secscancnt1;
	/* mov	SecScanCnt1,ax */
	secscancnt1 = ax;
	/* mov	ax,_SecScanOff1 */
	ax = _secscanoff1;
	/* mov	SecScanOff1,ax */
	secscanoff1 = ax;
	/* mov	ax,_SecScanCnt2 */
	ax = _secscancnt2;
	/* mov	SecScanCnt2,ax */
	secscancnt2 = ax;
	/* mov	ax,_SecScanOff2 */
	ax = _secscanoff2;
	/* mov	SecScanOff2,ax */
	secscanoff2 = ax;
	/* mov	al,_GndTextEnabled */
	al = _gndtextenabled;
	/* mov	GndTextEnabled,al */
	gndtextenabled = al;
	/* mov	al,_TreesEnabled */
	al = _treesenabled;
	/* mov	TreesEnabled,al */
	treesenabled = al;
	/* mov	al,_HillTxtEnabled */
	al = _hilltxtenabled;
	/* mov	HillTextEnabled,al */
	hilltextenabled = al;
	/* mov	al,_CloudsEnabled */
	al = _cloudsenabled;
	/* mov	CloudsEnabled,al */
	cloudsenabled = al;
	/* mov	al,_StarsEnabled */
	al = _starsenabled;
	/* mov	StarsEnabled,al */
	starsenabled = al;
	/* mov	al,_GradEnabled */
	al = _gradenabled;
	/* mov	GradEnabled,al */
	gradenabled = al;
minimiseok:
	// 4403 
	/* MinimiseOk:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_64_skip: 	goto __m2c_macrolocal_64_skip;
        case m2c::kdrawring: 	goto drawring;
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
        case m2c::kminimiseok: 	goto minimiseok;
        case m2c::kskipcontrol: 	goto skipcontrol;
        case m2c::kskiprange: 	goto skiprange;
        case m2c::kskipsound: 	goto skipsound;
        case m2c::kupdatelookdown: 	goto updatelookdown;
        case m2c::kuseroptions: 	goto useroptions;
        case m2c::kuservisoptions: 	goto uservisoptions;
        default: return __dispatch_call(__disp, _state);
    };
}

