/* THIS IS GENERATED FILE */

        
#include "hills.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 1038 
scanhillsexit:
	// 4369 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
sortfacefail1:
	// 4405 
	// 0 ;*		      b0: )
	/* pop	bp		;restore map index */
	POP(bp);
sortfacefail2:
	// 4407 
	/* SortFaceFail2:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
exitgndht1:
	// 4467 
	// 0 ;* kill: assume all (except ax)
	/* xor	ax,ax		;sea level */
	XOR(ax, ax);
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
scanhills:
	// 1040 
	// 0 ;--------------------------
	// 0 ;* test for hills in sector
	// 0 ;--------------------------
edummylabel1:
	// 4371 
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* test	al,al		;null hills? */
	TEST(al, al);
	/* jns	ScanHillsExit	;yes -> */
	if ((signed char)((al & al)) >= 0) {goto scanhillsexit;}
	// 0 ;---------------------------------
	// 0 ;* calc y eye co-ords for ZA .. ZI
	// 0 ;---------------------------------
	// 0 ;* look up scaling factor wrt sector scale mode
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* mov	cx,SctrScaleFactor[bx] */
	cx = *(dw*)(((db*)&sctrscalefactor)+bx);
	// 0 ;* look up y pos sector centre wrt sector scale mode
	/* mov	bx,SctrScaleYPos[bx] */
	bx = *(dw*)(((db*)&sctrscaleypos)+bx);
	/* mov	dx,[bx] */
	dx = m2c::getdata(*(dw*)(raddr(ds,bx)));
	// 0 ;* calc ZA y eye co-ord
	/* mov	bl,HillLayer1[bp] */
	bl = *((&hilllayer1)+bp);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZA],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	// 0 ;* calc ZB y eye co-ord
	/* mov	bl,HillLayer2[bp] */
	bl = *((&hilllayer2)+bp);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSY[$MID+$8192] */
	ax = *(dw*)(((db*)&ysy)+128+64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZB],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	// 0 ;* calc ZC y eye co-ord
	/* mov	bl,HillLayer1[bp+1] */
	bl = *((&hilllayer1)+bp+1);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZC],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	// 0 ;* calc ZD y eye co-ord
	/* mov	bl,HillLayer3[bp] */
	bl = *((&hilllayer3)+bp);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZD],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	// 0 ;* calc ZE y eye co-ord
	/* mov	bl,HillLayer4[bp] */
	bl = *((&hilllayer4)+bp);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSZ[bx] */
	ax = *(dw*)(((db*)&ysz)+bx);
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZE],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	// 0 ;* calc ZF y eye co-ord
	/* mov	bl,HillLayer3[bp+1] */
	bl = *((&hilllayer3)+bp+1);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZF],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	// 0 ;* calc ZG y eye co-ord
	/* mov	bl,HillLayer1[bp+32] */
	bl = *((&hilllayer1)+bp+32);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZG],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	// 0 ;* calc ZH y eye co-ord
	/* mov	bl,HillLayer2[bp+32] */
	bl = *((&hilllayer2)+bp+32);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSY[$MID-$8192] */
	ax = *(dw*)(((db*)&ysy)+128-64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZH],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	// 0 ;* calc ZI y eye co-ord
	/* mov	bl,HillLayer1[bp+33] */
	bl = *((&hilllayer1)+bp+33);
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZI],ax */
	*(dw*)(((db*)&ye)+16) = ax;
	// 0 ;-------------------------------------
	// 0 ;* sort quad 1 faces (face 0 / face 1)
	// 0 ;-------------------------------------
	// 0 ;* face 0
	/* mov	dl,HillLayer5[bp]	;quad 1 colour data */
	dl = *((&hilllayer5)+bp);
	/* mov	dh,HillLayer1[bp]	;quad 1 crease flag */
	dh = *((&hilllayer1)+bp);
	/* test	dl,00001111b	;face 0 required? */
	TEST(dl, 0xf);
	/* jz	ContFace1	;no -> */
	if (!(dl & 0xf)) {goto contface1;}
	/* push	dx */
	PUSH(dx);
	/* mov	si,OFFSET HillFaceList0 */
	si = m2c::near_offset_external(hillfacelist0);
	/* mov	al,0*2		;face num */
	al = 0*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk0	;yes -> */
	if (!(dh & 0x080)) {goto creaseok0;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok0:
	// 4373 
	/* CreaseOk0:	shl	dl,1		;shift colour into high nibble */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* face 1
contface1:
	// 4375 
	/* ContFace1: 	and 	dl,11110000b	;face 1 required (clear low nibble)? */
	AND(dl, 0xf0);
	/* jz	ContFace2 	;no -> */
	if (dl == 0) {goto contface2;}
	/* mov	si,OFFSET HillFaceList1 */
	si = m2c::near_offset_external(hillfacelist1);
	/* mov	al,1*2		;face num */
	al = 1*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk1	;yes -> */
	if (!(dh & 0x080)) {goto creaseok1;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok1:
	// 4377 
	/* CreaseOk1:	or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	// 0 ;-------------------------------------
	// 0 ;* sort quad 2 faces (face 2 / face 3)
	// 0 ;-------------------------------------
	// 0 ;* face 2
contface2:
	// 4379 
	/* ContFace2:	mov	dl,HillLayer6[bp]	;quad 2 colour data */
	dl = *((&hilllayer6)+bp);
	/* mov	dh,HillLayer2[bp]	;quad 2 crease flag */
	dh = *((&hilllayer2)+bp);
	/* test	dl,00001111b	;face 2 required? */
	TEST(dl, 0xf);
	/* jz	ContFace3	;no -> */
	if (!(dl & 0xf)) {goto contface3;}
	/* push	dx */
	PUSH(dx);
	/* mov	si,OFFSET HillFaceList2 */
	si = m2c::near_offset_external(hillfacelist2);
	/* mov	al,2*2		;face num */
	al = 2*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk2	;yes -> */
	if (!(dh & 0x080)) {goto creaseok2;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok2:
	// 4381 
	/* CreaseOk2:	shl	dl,1		;shift colour into high nibble */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* face 3
contface3:
	// 4383 
	/* ContFace3: 	and 	dl,11110000b	;face 3 required (clear low nibble)? */
	AND(dl, 0xf0);
	/* jz	ContFace4	;no -> */
	if (dl == 0) {goto contface4;}
	/* mov	si,OFFSET HillFaceList3 */
	si = m2c::near_offset_external(hillfacelist3);
	/* mov	al,3*2		;face num */
	al = 3*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk3	;yes -> */
	if (!(dh & 0x080)) {goto creaseok3;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok3:
	// 4385 
	/* CreaseOk3:	or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	// 0 ;-------------------------------------
	// 0 ;* sort quad 3 faces (face 4 / face 5)
	// 0 ;-------------------------------------
	// 0 ;* face 4
contface4:
	// 4387 
	/* ContFace4:	mov	dl,HillLayer7[bp]	;quad 3 colour data */
	dl = *((&hilllayer7)+bp);
	/* mov	dh,HillLayer3[bp]	;quad 3 crease flag */
	dh = *((&hilllayer3)+bp);
	/* test	dl,00001111b	;face 4 required? */
	TEST(dl, 0xf);
	/* jz	ContFace5	;no -> */
	if (!(dl & 0xf)) {goto contface5;}
	/* push	dx */
	PUSH(dx);
	/* mov	si,OFFSET HillFaceList4 */
	si = m2c::near_offset_external(hillfacelist4);
	/* mov	al,4*2		;face num */
	al = 4*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk4	;yes -> */
	if (!(dh & 0x080)) {goto creaseok4;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok4:
	// 4389 
	/* CreaseOk4:	shl	dl,1		;shift colour into high nibble */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* face 5
contface5:
	// 4391 
	/* ContFace5: 	and 	dl,11110000b	;face 5 required (clear low nibble)? */
	AND(dl, 0xf0);
	/* jz	ContFace6	;no -> */
	if (dl == 0) {goto contface6;}
	/* mov	si,OFFSET HillFaceList5 */
	si = m2c::near_offset_external(hillfacelist5);
	/* mov	al,5*2		;face num */
	al = 5*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk5	;yes -> */
	if (!(dh & 0x080)) {goto creaseok5;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok5:
	// 4393 
	/* CreaseOk5:	or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	// 0 ;-------------------------------------
	// 0 ;* sort quad 4 faces (face 6 / face 7)
	// 0 ;-------------------------------------
	// 0 ;* face 6
contface6:
	// 4395 
	/* ContFace6:	mov	dl,HillLayer8[bp]	;quad 4 colour data */
	dl = *((&hilllayer8)+bp);
	/* mov	dh,HillLayer4[bp]	;quad 4 crease flag */
	dh = *((&hilllayer4)+bp);
	/* test	dl,00001111b	;face 6 required? */
	TEST(dl, 0xf);
	/* jz	ContFace7	;no -> */
	if (!(dl & 0xf)) {goto contface7;}
	/* push	dx */
	PUSH(dx);
	/* mov	si,OFFSET HillFaceList6 */
	si = m2c::near_offset_external(hillfacelist6);
	/* mov	al,6*2		;face num */
	al = 6*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk6	;yes -> */
	if (!(dh & 0x080)) {goto creaseok6;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok6:
	// 4397 
	/* CreaseOk6:	shl	dl,1		;shift colour into high nibble */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* shl	dl,1 */
	SHL(dl, 1);
	/* or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* face 7
contface7:
	// 4399 
	/* ContFace7: 	and 	dl,11110000b	;face 7 required (clear low nibble)? */
	AND(dl, 0xf0);
	/* jz	ContFace8	;no -> */
	if (dl == 0) {goto contface8;}
	/* mov	si,OFFSET HillFaceList7 */
	si = m2c::near_offset_external(hillfacelist7);
	/* mov	al,7*2		;face num */
	al = 7*2;
	/* test	dh,080h 	;Z crease? */
	TEST(dh, 0x080);
	/* jz	CreaseOk7	;yes -> */
	if (!(dh & 0x080)) {goto creaseok7;}
	/* add	si,4		;reverse Z crease */
	ADD(si, 4);
	/* inc	al		;face num + 1 */
	INC(al);
creaseok7:
	// 4401 
	/* CreaseOk7:	or	al,dl		;face flags = face col and face num */
	OR(al, dl);
	/* call	SortHillFace */
	CALL(sorthillface, 0);
contface8:
	// 4403 
	/* ContFace8:	ret */
	RETN(0);
sorthillface:
	// 1331 
	/* mov	di,ObjectBufPtr */
	di = objectbufptr;
edummylabel2:
	// 4409 
	/* cmp	di,OFFSET ObjectBufEnd */
	CMP(di, m2c::near_offset_external(objectbufend));
	/* je	SortFaceFail2	;no space left in object buffer -> */
	if ((dw)(di) == (dw)(m2c::near_offset_external(objectbufend))) {goto sortfacefail2;}
	/* mov	OBJ_FACE_FLAGS[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb2), m2c::getdata(al));
	/* mov	OBJ_MAPINDEX[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw4))), m2c::getdata(bp));
	/* push	bp		;store map index */
	PUSH(bp);
	// 0 ;----------------------------------------------------------------
	// 0 ;* look up y eye for each face vertex and sort furthest	/ nearest
	// 0 ;----------------------------------------------------------------
	/* xor	bx,bx */
	XOR(bx, bx);
	/* mov	bl,[si+0]	;vertex index 1 */
	bl = m2c::getdata(*(raddr(ds,si+0)));
	/* mov	dx,Ye[bx] 	;y1 */
	dx = *(dw*)(((db*)&ye)+bx);
	/* mov	bl,[si+1]	;vertex index 2 */
	bl = m2c::getdata(*(raddr(ds,si+1)));
	/* mov	ax,Ye[bx]	;y2 */
	ax = *(dw*)(((db*)&ye)+bx);
	/* mov	bl,[si+2]	;vertex index 3 */
	bl = m2c::getdata(*(raddr(ds,si+2)));
	/* mov	bp,Ye[bx]	;y3 */
	bp = *(dw*)(((db*)&ye)+bx);
	// 0 ;* ensure y1 >= y2
	/* cmp	dx,ax		;y1 >= y2? */
	CMP(dx, ax);
	/* jge	YOk1		;yes -> */
	if ((short)(dx) >= (short)(ax)) {goto yok1;}
	/* xchg	dx,ax */
	XCHG(dx, ax);
	// 0 ;* ensure y1 >= y3
yok1:
	// 4411 
	/* YOk1:		cmp	dx,bp		;y1 >= y3? */
	CMP(dx, bp);
	/* jge	YOk2		;yes -> */
	if ((short)(dx) >= (short)(bp)) {goto yok2;}
	/* xchg	dx,bp */
	XCHG(dx, bp);
	// 0 ;* ensure y2 >= y3 (therefore y1 >= y2 >= y3)
yok2:
	// 4413 
	/* YOk2:		cmp	ax,bp		;y2 >= y3? */
	CMP(ax, bp);
	/* jge	YOk3		;yes -> */
	if ((short)(ax) >= (short)(bp)) {goto yok3;}
	/* xchg	ax,bp */
	XCHG(ax, bp);
	// 0 ;* if furthest y eye is negative (behind) then ignore face (non-visible)
yok3:
	// 4415 
	/* YOk3:		test	dx,dx */
	TEST(dx, dx);
	/* js	SortFaceFail1	;non-visible -> */
	if ((short)((dx & dx)) < 0) {goto sortfacefail1;}
	/* mov	al,OTYPE_HILLFACE */
	al = 10;
	/* mov	OBJ_TYPE[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_type), m2c::getdata(al));
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* mov	OBJ_SECSCALE[di],bl */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb1), m2c::getdata(bl));
__disp=*(dw*)(((db*)&sortfacedist)+bx);
	/* jmp	SortFaceDist[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;-----------------
	// 0 ;* SEC_SCALE1 face
	// 0 ;-----------------
sortfacedist1:
	// 4417 
	/* SortFaceDist1:	mov	ax,XPos1 */
	ax = xpos1;
	/* mov	OBJ_XSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(ax));
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* mov	OBJ_YSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(ax));
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* mov	OBJ_ZSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw3))), m2c::getdata(ax));
	/* cmp	dx,16384	;near or far? */
	CMP(dx, 16384);
	/* jge	SortFarFace1	;far -> */
	if ((short)(dx) >= (short)(16384)) {goto sortfarface1;}
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	NearHillSort */
	CALL(nearhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
sortfarface1:
	// 4419 
	/* SortFarFace1:	sar	dx,1		;/2 */
	SAR(dx, 1);
	/* sar	dx,1		;/4 */
	SAR(dx, 1);
	/* sar	dx,1		;/8 */
	SAR(dx, 1);
	/* sar	dx,1		;/16 scaling for far sort */
	SAR(dx, 1);
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* sar	bp,1		;/2 */
	SAR(bp, 1);
	/* sar	bp,1		;/4 */
	SAR(bp, 1);
	/* sar	bp,1		;/8 */
	SAR(bp, 1);
	/* sar	bp,1		;/16 scaling for far sort */
	SAR(bp, 1);
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	FarHillSort */
	CALL(farhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
	// 0 ;-----------------
	// 0 ;* SEC_SCALE2 face
	// 0 ;-----------------
sortfacedist2:
	// 4421 
	/* SortFaceDist2:	mov	ax,XPos2 */
	ax = xpos2;
	/* mov	OBJ_XSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(ax));
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* mov	OBJ_YSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(ax));
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* mov	OBJ_ZSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw3))), m2c::getdata(ax));
	/* cmp	dx,16384/2	;near or far? */
	CMP(dx, 16384/2);
	/* jge	SortFarFace2	;far -> */
	if ((short)(dx) >= (short)(16384/2)) {goto sortfarface2;}
	/* sal	dx,1		;*2 scaling for near sort */
	SAL(dx, 1);
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* sal	bp,1		;*2 scaling for near sort */
	SAL(bp, 1);
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	NearHillSort */
	CALL(nearhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
sortfarface2:
	// 4423 
	/* SortFarFace2:	sar	dx,1		;/2 */
	SAR(dx, 1);
	/* sar	dx,1		;/4 */
	SAR(dx, 1);
	/* sar	dx,1		;/8 scaling for far sort */
	SAR(dx, 1);
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* sar	bp,1		;/2 */
	SAR(bp, 1);
	/* sar	bp,1		;/4 */
	SAR(bp, 1);
	/* sar	bp,1		;/8 scaling for far sort */
	SAR(bp, 1);
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	FarHillSort */
	CALL(farhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
	// 0 ;-----------------
	// 0 ;* SEC_SCALE8 face
	// 0 ;-----------------
sortfacedist8:
	// 4425 
	/* SortFaceDist8:	mov	ax,XPos8 */
	ax = xpos8;
	/* mov	OBJ_XSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(ax));
	/* mov	ax,YPos8 */
	ax = ypos8;
	/* mov	OBJ_YSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(ax));
	/* mov	ax,ZPos8 */
	ax = zpos8;
	/* mov	OBJ_ZSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw3))), m2c::getdata(ax));
	/* cmp	dx,16384/8	;near or far? */
	CMP(dx, 16384/8);
	/* jge	SortFarFace8	;far -> */
	if ((short)(dx) >= (short)(16384/8)) {goto sortfarface8;}
	/* sal	dx,1		;*2 */
	SAL(dx, 1);
	/* sal	dx,1		;*4 */
	SAL(dx, 1);
	/* sal	dx,1		;*8 scaling for near sort */
	SAL(dx, 1);
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* sal	bp,1		;*2 */
	SAL(bp, 1);
	/* sal	bp,1		;*4 */
	SAL(bp, 1);
	/* sal	bp,1		;*8 scaling for near sort */
	SAL(bp, 1);
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	NearHillSort */
	CALL(nearhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
sortfarface8:
	// 4427 
	/* SortFarFace8:  	sar	dx,1		;/2 scaling for far sort */
	SAR(dx, 1);
	/* mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* sar	bp,1		;/2 scaling for far sort */
	SAR(bp, 1);
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	FarHillSort */
	CALL(farhillsort, 0);
	/* jmp	FaceOk */
	goto faceok;
	// 0 ;------------------
	// 0 ;* SEC_SCALE16 face
	// 0 ;------------------
sortfacedist16:
	// 4429 
	/* SortFaceDist16:	mov	ax,XPos16 */
	ax = xpos16;
	/* mov	OBJ_XSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(ax));
	/* mov	ax,YPos16 */
	ax = ypos16;
	/* mov	OBJ_YSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(ax));
	/* mov	ax,ZPos16 */
	ax = zpos16;
	/* mov	OBJ_ZSECPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw3))), m2c::getdata(ax));
	// 0 ;* SEC_SCALE16 faces must be "far", but test if in range to prevent dist sort overflow
	/* cmp	dx,8192		;in range (dist < (2048*64)/16)? */
	CMP(dx, 8192);
	/* jl	SortFarFace16	;yes -> */
	if ((short)(dx) < (short)(8192)) {goto sortfarface16;}
	/* jmp	SortFaceFail1 */
	goto sortfacefail1;
sortfarface16:
	// 4431 
	/* SortFarFace16:	mov	OBJ_YPOS[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(dx));
	/* mov	OBJ_YMIN[di],bp */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(bp));
	/* call	FarHillSort */
	CALL(farhillsort, 0);
	// 0 ;------------------------------
	// 0 ;* update object buffer pointer
	// 0 ;------------------------------
faceok:
	// 4433 
	/* FaceOk:		add	di,OBJ_REC_SIZE */
	ADD(di, 20);
	/* mov	ObjectBufPtr,di */
	objectbufptr = di;
	/* pop	bp		;restore map index */
	POP(bp);
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
drawhillface:
	// 1505 
	// 0 ;* sort sector scaling factor wrt sector scale mode
edummylabel3:
	// 4435 
	/* mov	bl,OBJ_SECSCALE[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	cx,SctrScaleFactor[bx] */
	cx = *(dw*)(((db*)&sctrscalefactor)+bx);
	/* mov	bp,OBJ_MAPINDEX[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw4)));
	// 0 ;* extract face colour and sort logical colour
	/* mov	al,OBJ_FACE_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb2);
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
	/* add	al,COL_HILL1 */
	ADD(al, 80);
	/* mov	FaceCol,al */
	*(facecol) = al;
	/* mov	al,ah */
	al = ah;
	// 0 ;* calc face list pointer
	/* and	ax,00fh */
	AND(ax, 0x00f);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 index */
	SHL(ax, 1);
	/* add	ax,OFFSET HillFaceLists */
	ADD(ax, m2c::near_offset_external(hillfacelists));
	/* mov	dx,ax */
	dx = ax;
	// 0 ;---------------
	// 0 ;* sort vertex 1
	// 0 ;---------------
	/* xor	di,di */
	XOR(di, di);
	/* mov	bx,dx */
	bx = dx;
	/* mov	bl,[bx+0] */
	bl = m2c::getdata(*(raddr(ds,bx+0)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* call	CalcSpotHeight[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcspotheight)+bx));
	// 0 ;---------------
	// 0 ;* sort vertex 2
	// 0 ;---------------
	/* mov	di,2 */
	di = 2;
	/* mov	bx,dx */
	bx = dx;
	/* mov	bl,[bx+1] */
	bl = m2c::getdata(*(raddr(ds,bx+1)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* call	CalcSpotHeight[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcspotheight)+bx));
	// 0 ;---------------
	// 0 ;* sort vertex 3
	// 0 ;---------------
	/* mov	di,4 */
	di = 4;
	/* mov	bx,dx */
	bx = dx;
	/* mov	bl,[bx+2] */
	bl = m2c::getdata(*(raddr(ds,bx+2)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* call	CalcSpotHeight[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcspotheight)+bx));
	// 0 ;-------------------
	// 0 ;* sort face texture
	// 0 ;-------------------
	/* test	HillTextEnabled,1	;hill face texture enabled? */
	TEST(*(hilltextenabled), 1);
	/* jz	Plain			;no -> */
	if (!(*(hilltextenabled) & 1)) {goto plain;}
	/* mov	al,OBJ_SECSCALE[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* cmp	al,SEC_SCALE2	;current or adjacent sector? */
	CMP(al, 2);
	/* jbe	Textured	;yes -> */
	if ((db)(al) <= (db)(2)) {goto textured;}
	// 0 ;-------------------------------
	// 0 ;* draw plain face  (no texture)
	// 0 ;-------------------------------
plain:
	// 4437 
	/* Plain:		mov	si,4 */
	si = 4;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	DrawFaceExit1	;non-visible -> */
	if (CF) {goto drawfaceexit1;}
	/* mov	si,OFFSET StndPoly3 */
	si = m2c::near_offset_external(stndpoly3);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	DrawFaceExit1	;non-visible -> */
	if (CF) {goto drawfaceexit1;}
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* js	DrawFaceExit1	;facing away -> */
	if (SF) {goto drawfaceexit1;}
	/* mov	al,FaceCol */
	al = *(facecol);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
drawfaceexit1:
	// 4439 
	/* DrawFaceExit1:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;-----------------------------------
	// 0 ;* draw textured face (16 sub-faces)
	// 0 ;-----------------------------------
	// 0 ;* preserve z eye values
textured:
	// 4441 
	/* Textured:	mov	si,OFFSET Ze[0] */
	si = m2c::near_offset_external(ze)+0;
	/* mov	di,OFFSET Ze[6] */
	di = m2c::near_offset_external(ze)+6;
	/* mov	cx,3 */
	cx = 3;
	// 1594 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* test if complete face is visible
	/* mov	si,4 */
	si = 4;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	DrawFaceExit1	;non-visible -> */
	if (CF) {goto drawfaceexit1;}
	/* mov	si,OFFSET StndPoly3 */
	si = m2c::near_offset_external(stndpoly3);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	DrawFaceExit1	;non-visible -> */
	if (CF) {goto drawfaceexit1;}
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* js	DrawFaceExit1	;facing away -> */
	if (SF) {goto drawfaceexit1;}
	// 0 ;* restore z eye values
	/* mov	si,OFFSET Ze[6] */
	si = m2c::near_offset_external(ze)+6;
	/* mov	di,OFFSET Ze[0] */
	di = m2c::near_offset_external(ze)+0;
	/* mov	cx,3 */
	cx = 3;
	// 1612 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* sub-divide to calc intermediate eye co-ords
	/* mov	ax,Xe[2] */
	ax = *(dw*)(((db*)&xe)+2);
	/* mov	dx,Xe[0] */
	dx = *(dw*)(((db*)&xe)+0);
	/* sub	ax,dx		;2 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 0) / 2 + 0 */
	ADD(ax, dx);
	/* mov	Xe[6],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,Ye[2] */
	ax = *(dw*)(((db*)&ye)+2);
	/* mov	dx,Ye[0] */
	dx = *(dw*)(((db*)&ye)+0);
	/* sub	ax,dx		;2 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 0) / 2 + 0 */
	ADD(ax, dx);
	/* mov	Ye[6],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,Ze[2] */
	ax = *(dw*)(((db*)&ze)+2);
	/* mov	dx,Ze[0] */
	dx = *(dw*)(((db*)&ze)+0);
	/* sub	ax,dx		;2 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 0) / 2 + 0 */
	ADD(ax, dx);
	/* mov	Ze[6],ax */
	*(dw*)(((db*)&ze)+6) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+2););	// 1634 						mov	ax,Xe[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+0););	// 1635 mov	dx,Xe[0] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+6) = ax;);	// 1636 mov	Xe[6],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+2););	// 1637 mov	ax,Ye[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+0););	// 1638 mov	dx,Ye[0] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+6) = ax;);	// 1639 mov	Ye[6],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+2););	// 1640 mov	ax,Ze[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+0););	// 1641 mov	dx,Ze[0] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+6) = ax;);	// 1642 mov	Ze[6],ax */
	/* mov	ax,Xe[4] */
	ax = *(dw*)(((db*)&xe)+4);
	/* mov	dx,Xe[2] */
	dx = *(dw*)(((db*)&xe)+2);
	/* sub	ax,dx		;4 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 2) / 2 + 2 */
	ADD(ax, dx);
	/* mov	Xe[8],ax */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	ax,Ye[4] */
	ax = *(dw*)(((db*)&ye)+4);
	/* mov	dx,Ye[2] */
	dx = *(dw*)(((db*)&ye)+2);
	/* sub	ax,dx		;4 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 2) / 2 + 2 */
	ADD(ax, dx);
	/* mov	Ye[8],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	ax,Ze[4] */
	ax = *(dw*)(((db*)&ze)+4);
	/* mov	dx,Ze[2] */
	dx = *(dw*)(((db*)&ze)+2);
	/* sub	ax,dx		;4 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 2) / 2 + 2 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+8) = ax;);	// 1660 						mov	Ze[8],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+4););	// 1661 						mov	ax,Xe[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+2););	// 1662 mov	dx,Xe[2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+8) = ax;);	// 1663 mov	Xe[8],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+4););	// 1664 mov	ax,Ye[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+2););	// 1665 mov	dx,Ye[2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+8) = ax;);	// 1666 mov	Ye[8],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+4););	// 1667 mov	ax,Ze[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+2););	// 1668 mov	dx,Ze[2] */
	/* mov	Ze[8],ax */
	*(dw*)(((db*)&ze)+8) = ax;
	/* mov	ax,Xe[0] */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	dx,Xe[4] */
	dx = *(dw*)(((db*)&xe)+4);
	/* sub	ax,dx		;0 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 4) / 2 + 4 */
	ADD(ax, dx);
	/* mov	Xe[10],ax */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	ax,Ye[0] */
	ax = *(dw*)(((db*)&ye)+0);
	/* mov	dx,Ye[4] */
	dx = *(dw*)(((db*)&ye)+4);
	/* sub	ax,dx		;0 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 4) / 2 + 4 */
	ADD(ax, dx);
	/* mov	Ye[10],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	/* mov	ax,Ze[0] */
	ax = *(dw*)(((db*)&ze)+0);
	/* mov	dx,Ze[4] */
	dx = *(dw*)(((db*)&ze)+4);
	/* sub	ax,dx		;0 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 4) / 2 + 4 */
	ADD(ax, dx);
	/* mov	Ze[10],ax */
	*(dw*)(((db*)&ze)+10) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+0););	// 1688 						mov	ax,Xe[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+4););	// 1689 mov	dx,Xe[4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+10) = ax;);	// 1690 mov	Xe[10],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+0););	// 1691 mov	ax,Ye[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+4););	// 1692 mov	dx,Ye[4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+10) = ax;);	// 1693 mov	Ye[10],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+0););	// 1694 mov	ax,Ze[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+4););	// 1695 mov	dx,Ze[4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+10) = ax;);	// 1696 mov	Ze[10],ax */
	/* mov	ax,Xe[6] */
	ax = *(dw*)(((db*)&xe)+6);
	/* mov	dx,Xe[0] */
	dx = *(dw*)(((db*)&xe)+0);
	/* sub	ax,dx		;6 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 0) / 2 + 0 */
	ADD(ax, dx);
	/* mov	Xe[12],ax */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,Ye[6] */
	ax = *(dw*)(((db*)&ye)+6);
	/* mov	dx,Ye[0] */
	dx = *(dw*)(((db*)&ye)+0);
	/* sub	ax,dx		;6 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 0) / 2 + 0 */
	ADD(ax, dx);
	/* mov	Ye[12],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,Ze[6] */
	ax = *(dw*)(((db*)&ze)+6);
	/* mov	dx,Ze[0] */
	dx = *(dw*)(((db*)&ze)+0);
	/* sub	ax,dx		;6 - 0 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 0) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 0) / 2 + 0 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+12) = ax;);	// 1714 						mov	Ze[12],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+6););	// 1715 						mov	ax,Xe[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+0););	// 1716 mov	dx,Xe[0] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+12) = ax;);	// 1717 mov	Xe[12],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+6););	// 1718 mov	ax,Ye[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+0););	// 1719 mov	dx,Ye[0] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+12) = ax;);	// 1720 mov	Ye[12],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+6););	// 1721 mov	ax,Ze[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+0););	// 1722 mov	dx,Ze[0] */
	/* mov	Ze[12],ax */
	*(dw*)(((db*)&ze)+12) = ax;
	/* mov	ax,Xe[2] */
	ax = *(dw*)(((db*)&xe)+2);
	/* mov	dx,Xe[6] */
	dx = *(dw*)(((db*)&xe)+6);
	/* sub	ax,dx		;2 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Xe[14],ax */
	*(dw*)(((db*)&xe)+14) = ax;
	/* mov	ax,Ye[2] */
	ax = *(dw*)(((db*)&ye)+2);
	/* mov	dx,Ye[6] */
	dx = *(dw*)(((db*)&ye)+6);
	/* sub	ax,dx		;2 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Ye[14],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	/* mov	ax,Ze[2] */
	ax = *(dw*)(((db*)&ze)+2);
	/* mov	dx,Ze[6] */
	dx = *(dw*)(((db*)&ze)+6);
	/* sub	ax,dx		;2 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(2 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(2 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Ze[14],ax */
	*(dw*)(((db*)&ze)+14) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+2););	// 1742 						mov	ax,Xe[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+6););	// 1743 mov	dx,Xe[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+14) = ax;);	// 1744 mov	Xe[14],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+2););	// 1745 mov	ax,Ye[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+6););	// 1746 mov	dx,Ye[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+14) = ax;);	// 1747 mov	Ye[14],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+2););	// 1748 mov	ax,Ze[2] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+6););	// 1749 mov	dx,Ze[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+14) = ax;);	// 1750 mov	Ze[14],ax */
	/* mov	ax,Xe[8] */
	ax = *(dw*)(((db*)&xe)+8);
	/* mov	dx,Xe[2] */
	dx = *(dw*)(((db*)&xe)+2);
	/* sub	ax,dx		;8 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 2) / 2 + 2 */
	ADD(ax, dx);
	/* mov	Xe[16],ax */
	*(dw*)(((db*)&xe)+16) = ax;
	/* mov	ax,Ye[8] */
	ax = *(dw*)(((db*)&ye)+8);
	/* mov	dx,Ye[2] */
	dx = *(dw*)(((db*)&ye)+2);
	/* sub	ax,dx		;8 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 2) / 2 + 2 */
	ADD(ax, dx);
	/* mov	Ye[16],ax */
	*(dw*)(((db*)&ye)+16) = ax;
	/* mov	ax,Ze[8] */
	ax = *(dw*)(((db*)&ze)+8);
	/* mov	dx,Ze[2] */
	dx = *(dw*)(((db*)&ze)+2);
	/* sub	ax,dx		;8 - 2 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 2) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 2) / 2 + 2 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+16) = ax;);	// 1768 						mov	Ze[16],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+8););	// 1769 						mov	ax,Xe[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+2););	// 1770 mov	dx,Xe[2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+16) = ax;);	// 1771 mov	Xe[16],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+8););	// 1772 mov	ax,Ye[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+2););	// 1773 mov	dx,Ye[2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+16) = ax;);	// 1774 mov	Ye[16],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+8););	// 1775 mov	ax,Ze[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+2););	// 1776 mov	dx,Ze[2] */
	/* mov	Ze[16],ax */
	*(dw*)(((db*)&ze)+16) = ax;
	/* mov	ax,Xe[4] */
	ax = *(dw*)(((db*)&xe)+4);
	/* mov	dx,Xe[8] */
	dx = *(dw*)(((db*)&xe)+8);
	/* sub	ax,dx		;4 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 8) / 2 + 8 */
	ADD(ax, dx);
	/* mov	Xe[18],ax */
	*(dw*)(((db*)&xe)+18) = ax;
	/* mov	ax,Ye[4] */
	ax = *(dw*)(((db*)&ye)+4);
	/* mov	dx,Ye[8] */
	dx = *(dw*)(((db*)&ye)+8);
	/* sub	ax,dx		;4 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 8) / 2 + 8 */
	ADD(ax, dx);
	/* mov	Ye[18],ax */
	*(dw*)(((db*)&ye)+18) = ax;
	/* mov	ax,Ze[4] */
	ax = *(dw*)(((db*)&ze)+4);
	/* mov	dx,Ze[8] */
	dx = *(dw*)(((db*)&ze)+8);
	/* sub	ax,dx		;4 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(4 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(4 - 8) / 2 + 8 */
	ADD(ax, dx);
	/* mov	Ze[18],ax */
	*(dw*)(((db*)&ze)+18) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+4););	// 1796 						mov	ax,Xe[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+8););	// 1797 mov	dx,Xe[8] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+18) = ax;);	// 1798 mov	Xe[18],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+4););	// 1799 mov	ax,Ye[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+8););	// 1800 mov	dx,Ye[8] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+18) = ax;);	// 1801 mov	Ye[18],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+4););	// 1802 mov	ax,Ze[4] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+8););	// 1803 mov	dx,Ze[8] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+18) = ax;);	// 1804 mov	Ze[18],ax */
	/* mov	ax,Xe[10] */
	ax = *(dw*)(((db*)&xe)+10);
	/* mov	dx,Xe[4] */
	dx = *(dw*)(((db*)&xe)+4);
	/* sub	ax,dx		;10 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 4) / 2 + 4 */
	ADD(ax, dx);
	/* mov	Xe[20],ax */
	*(dw*)(((db*)&xe)+20) = ax;
	/* mov	ax,Ye[10] */
	ax = *(dw*)(((db*)&ye)+10);
	/* mov	dx,Ye[4] */
	dx = *(dw*)(((db*)&ye)+4);
	/* sub	ax,dx		;10 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 4) / 2 + 4 */
	ADD(ax, dx);
	/* mov	Ye[20],ax */
	*(dw*)(((db*)&ye)+20) = ax;
	/* mov	ax,Ze[10] */
	ax = *(dw*)(((db*)&ze)+10);
	/* mov	dx,Ze[4] */
	dx = *(dw*)(((db*)&ze)+4);
	/* sub	ax,dx		;10 - 4 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 4) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 4) / 2 + 4 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+20) = ax;);	// 1822 						mov	Ze[20],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+10););	// 1823 						mov	ax,Xe[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+4););	// 1824 mov	dx,Xe[4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+20) = ax;);	// 1825 mov	Xe[20],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+10););	// 1826 mov	ax,Ye[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+4););	// 1827 mov	dx,Ye[4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+20) = ax;);	// 1828 mov	Ye[20],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+10););	// 1829 mov	ax,Ze[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+4););	// 1830 mov	dx,Ze[4] */
	/* mov	Ze[20],ax */
	*(dw*)(((db*)&ze)+20) = ax;
	/* mov	ax,Xe[0] */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	dx,Xe[10] */
	dx = *(dw*)(((db*)&xe)+10);
	/* sub	ax,dx		;0 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 10) / 2 + 10 */
	ADD(ax, dx);
	/* mov	Xe[22],ax */
	*(dw*)(((db*)&xe)+22) = ax;
	/* mov	ax,Ye[0] */
	ax = *(dw*)(((db*)&ye)+0);
	/* mov	dx,Ye[10] */
	dx = *(dw*)(((db*)&ye)+10);
	/* sub	ax,dx		;0 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 10) / 2 + 10 */
	ADD(ax, dx);
	/* mov	Ye[22],ax */
	*(dw*)(((db*)&ye)+22) = ax;
	/* mov	ax,Ze[0] */
	ax = *(dw*)(((db*)&ze)+0);
	/* mov	dx,Ze[10] */
	dx = *(dw*)(((db*)&ze)+10);
	/* sub	ax,dx		;0 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(0 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(0 - 10) / 2 + 10 */
	ADD(ax, dx);
	/* mov	Ze[22],ax */
	*(dw*)(((db*)&ze)+22) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+0););	// 1850 						mov	ax,Xe[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+10););	// 1851 mov	dx,Xe[10] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+22) = ax;);	// 1852 mov	Xe[22],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+0););	// 1853 mov	ax,Ye[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+10););	// 1854 mov	dx,Ye[10] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+22) = ax;);	// 1855 mov	Ye[22],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+0););	// 1856 mov	ax,Ze[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+10););	// 1857 mov	dx,Ze[10] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+22) = ax;);	// 1858 mov	Ze[22],ax */
	/* mov	ax,Xe[6] */
	ax = *(dw*)(((db*)&xe)+6);
	/* mov	dx,Xe[10] */
	dx = *(dw*)(((db*)&xe)+10);
	/* sub	ax,dx		;6 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 10) / 2 + 10 */
	ADD(ax, dx);
	/* mov	Xe[24],ax */
	*(dw*)(((db*)&xe)+24) = ax;
	/* mov	ax,Ye[6] */
	ax = *(dw*)(((db*)&ye)+6);
	/* mov	dx,Ye[10] */
	dx = *(dw*)(((db*)&ye)+10);
	/* sub	ax,dx		;6 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 10) / 2 + 10 */
	ADD(ax, dx);
	/* mov	Ye[24],ax */
	*(dw*)(((db*)&ye)+24) = ax;
	/* mov	ax,Ze[6] */
	ax = *(dw*)(((db*)&ze)+6);
	/* mov	dx,Ze[10] */
	dx = *(dw*)(((db*)&ze)+10);
	/* sub	ax,dx		;6 - 10 */
	SUB(ax, dx);
	/* sar	ax,1		;(6 - 10) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(6 - 10) / 2 + 10 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+24) = ax;);	// 1876 						mov	Ze[24],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+6););	// 1877 						mov	ax,Xe[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+10););	// 1878 mov	dx,Xe[10] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+24) = ax;);	// 1879 mov	Xe[24],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+6););	// 1880 mov	ax,Ye[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+10););	// 1881 mov	dx,Ye[10] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+24) = ax;);	// 1882 mov	Ye[24],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+6););	// 1883 mov	ax,Ze[6] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+10););	// 1884 mov	dx,Ze[10] */
	/* mov	Ze[24],ax */
	*(dw*)(((db*)&ze)+24) = ax;
	/* mov	ax,Xe[8] */
	ax = *(dw*)(((db*)&xe)+8);
	/* mov	dx,Xe[6] */
	dx = *(dw*)(((db*)&xe)+6);
	/* sub	ax,dx		;8 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Xe[26],ax */
	*(dw*)(((db*)&xe)+26) = ax;
	/* mov	ax,Ye[8] */
	ax = *(dw*)(((db*)&ye)+8);
	/* mov	dx,Ye[6] */
	dx = *(dw*)(((db*)&ye)+6);
	/* sub	ax,dx		;8 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Ye[26],ax */
	*(dw*)(((db*)&ye)+26) = ax;
	/* mov	ax,Ze[8] */
	ax = *(dw*)(((db*)&ze)+8);
	/* mov	dx,Ze[6] */
	dx = *(dw*)(((db*)&ze)+6);
	/* sub	ax,dx		;8 - 6 */
	SUB(ax, dx);
	/* sar	ax,1		;(8 - 6) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(8 - 6) / 2 + 6 */
	ADD(ax, dx);
	/* mov	Ze[26],ax */
	*(dw*)(((db*)&ze)+26) = ax;
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+8););	// 1904 						mov	ax,Xe[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+6););	// 1905 mov	dx,Xe[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+26) = ax;);	// 1906 mov	Xe[26],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+8););	// 1907 mov	ax,Ye[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+6););	// 1908 mov	dx,Ye[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+26) = ax;);	// 1909 mov	Ye[26],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+8););	// 1910 mov	ax,Ze[8] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+6););	// 1911 mov	dx,Ze[6] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+26) = ax;);	// 1912 mov	Ze[26],ax */
	/* mov	ax,Xe[10] */
	ax = *(dw*)(((db*)&xe)+10);
	/* mov	dx,Xe[8] */
	dx = *(dw*)(((db*)&xe)+8);
	/* sub	ax,dx		;10 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 8) / 2 + 8 */
	ADD(ax, dx);
	/* mov	Xe[28],ax */
	*(dw*)(((db*)&xe)+28) = ax;
	/* mov	ax,Ye[10] */
	ax = *(dw*)(((db*)&ye)+10);
	/* mov	dx,Ye[8] */
	dx = *(dw*)(((db*)&ye)+8);
	/* sub	ax,dx		;10 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 8) / 2 + 8 */
	ADD(ax, dx);
	/* mov	Ye[28],ax */
	*(dw*)(((db*)&ye)+28) = ax;
	/* mov	ax,Ze[10] */
	ax = *(dw*)(((db*)&ze)+10);
	/* mov	dx,Ze[8] */
	dx = *(dw*)(((db*)&ze)+8);
	/* sub	ax,dx		;10 - 8 */
	SUB(ax, dx);
	/* sar	ax,1		;(10 - 8) / 2 */
	SAR(ax, 1);
	/* add	ax,dx		;(10 - 8) / 2 + 8 */
	ADD(ax, dx);
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+28) = ax;);	// 1930 						mov	Ze[28],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+10););	// 1931 						mov	ax,Xe[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xe)+8););	// 1932 mov	dx,Xe[8] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+28) = ax;);	// 1933 mov	Xe[28],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+10););	// 1934 mov	ax,Ye[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ye)+8););	// 1935 mov	dx,Ye[8] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+28) = ax;);	// 1936 mov	Ye[28],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+10););	// 1937 mov	ax,Ze[10] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&ze)+8););	// 1938 mov	dx,Ze[8] */
	/* mov	Ze[28],ax */
	*(dw*)(((db*)&ze)+28) = ax;
	/* mov	si,28 */
	si = 28;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	DrawFaceExit2	;non-visible -> */
	if (CF) {goto drawfaceexit2;}
	// 0 ;* draw texture faces
	/* mov	cx,16		;16 sub-faces */
	cx = 16;
	/* mov	si,OFFSET TextFaces */
	si = m2c::near_offset_external(textfaces);
textloop:
	// 4443 
	/* TextLoop:	push	cx		;store cntr */
	PUSH(cx);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* lodsb			;fetch colour modifier */
	{ LODSB; }
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel1;}
	/* add	al,FaceCol	;modify colour */
	ADD(al, *(facecol));
	/* push	si		;store ptr */
	PUSH(si);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* pop	si		;restore ptr */
	POP(si);
dummylabel1:
	// 4445 
	/* @@:		pop	cx		;restore cntr */
	POP(cx);
	/* loop	TextLoop	;next sub-face -> */
	LOOP(textloop);
drawfaceexit2:
	// 4447 
	/* DrawFaceExit2:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
calczapos:
	// 1973 
	/* mov	bl,HillLayer1[bp] ;* kill: ax, bx, flags */
	bl = *((&hilllayer1)+bp);
edummylabel4:
	// 4449 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID-$8192] */
	ax = *(dw*)(((db*)&xsx)+128-64);
	/* add	ax,XSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+64));
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID-$8192] */
	ax = *(dw*)(((db*)&zsx)+128-64);
	/* add	ax,ZSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+64));
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczbpos:
	// 2008 
	/* mov	bl,HillLayer2[bp] ;* kill: ax, bx, flags */
	bl = *((&hilllayer2)+bp);
edummylabel5:
	// 4451 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSY[$MID+$8192] */
	ax = *(dw*)(((db*)&xsy)+128+64);
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSY[$MID+$8192] */
	ax = *(dw*)(((db*)&ysy)+128+64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSY[$MID+$8192] */
	ax = *(dw*)(((db*)&zsy)+128+64);
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczcpos:
	// 2040 
	/* mov	bl,HillLayer1[bp+1] ;* kill: ax, bx, flags */
	bl = *((&hilllayer1)+bp+1);
edummylabel6:
	// 4453 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID+$8192] */
	ax = *(dw*)(((db*)&xsx)+128+64);
	/* add	ax,XSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+64));
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID+$8192] */
	ax = *(dw*)(((db*)&zsx)+128+64);
	/* add	ax,ZSY[$MID+$8192] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+64));
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczdpos:
	// 2075 
	/* mov	bl,HillLayer3[bp] ;* kill: ax, bx, flags */
	bl = *((&hilllayer3)+bp);
edummylabel7:
	// 4455 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID-$8192] */
	ax = *(dw*)(((db*)&xsx)+128-64);
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID-$8192] */
	ax = *(dw*)(((db*)&zsx)+128-64);
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczepos:
	// 2107 
	/* mov	bl,HillLayer4[bp] ;* kill: ax, bx, flags */
	bl = *((&hilllayer4)+bp);
edummylabel8:
	// 4457 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSZ[bx] */
	ax = *(dw*)(((db*)&xsz)+bx);
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSZ[bx] */
	ax = *(dw*)(((db*)&ysz)+bx);
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSZ[bx] */
	ax = *(dw*)(((db*)&zsz)+bx);
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczfpos:
	// 2136 
	/* mov	bl,HillLayer3[bp+1] ;* kill: ax, bx, flags */
	bl = *((&hilllayer3)+bp+1);
edummylabel9:
	// 4459 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID+$8192] */
	ax = *(dw*)(((db*)&xsx)+128+64);
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID+$8192] */
	ax = *(dw*)(((db*)&zsx)+128+64);
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczgpos:
	// 2168 
	/* mov	bl,HillLayer1[bp+32] ;* kill: ax, bx, flags */
	bl = *((&hilllayer1)+bp+32);
edummylabel10:
	// 4461 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID-$8192] */
	ax = *(dw*)(((db*)&xsx)+128-64);
	/* add	ax,XSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-64));
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID-$8192] */
	ax = *(dw*)(((db*)&ysx)+128-64);
	/* add	ax,YSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID-$8192] */
	ax = *(dw*)(((db*)&zsx)+128-64);
	/* add	ax,ZSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-64));
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczhpos:
	// 2203 
	/* mov	bl,HillLayer2[bp+32] ;* kill: ax, bx, flags */
	bl = *((&hilllayer2)+bp+32);
edummylabel11:
	// 4463 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSY[$MID-$8192] */
	ax = *(dw*)(((db*)&xsy)+128-64);
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSY[$MID-$8192] */
	ax = *(dw*)(((db*)&ysy)+128-64);
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSY[$MID-$8192] */
	ax = *(dw*)(((db*)&zsy)+128-64);
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calczipos:
	// 2235 
	/* mov	bl,HillLayer1[bp+33] ;* kill: ax, bx, flags */
	bl = *((&hilllayer1)+bp+33);
edummylabel12:
	// 4465 
	/* and	bx,0000fh	;spot height 0 .. 15 */
	AND(bx, 0x0000f);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,XSX[$MID+$8192] */
	ax = *(dw*)(((db*)&xsx)+128+64);
	/* add	ax,XSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-64));
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_XSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YSX[$MID+$8192] */
	ax = *(dw*)(((db*)&ysx)+128+64);
	/* add	ax,YSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-64));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_YSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZSX[$MID+$8192] */
	ax = *(dw*)(((db*)&zsx)+128+64);
	/* add	ax,ZSY[$MID-$8192] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-64));
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,OBJ_ZSECPOS[si] */
	ADD(ax, *(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* ret */
	RETN(0);
calcgndheight:
	// 2270 
	// 0 ;* calc map index (map index = x sec + y sec * 32)
edummylabel13:
	// 4469 
	/* mov	bp,VP_XSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	dx,VP_YSEC[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* and	bp,MAP_X_WRAP */
	AND(bp, 0x0001f);
	/* and	dx,MAP_Y_WRAP */
	AND(dx, 0x0001f);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* add	bp,dx		;map index = x sec + y sec * 32 */
	ADD(bp, dx);
	// 0 ;* test for hills in sector
	/* mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* test	al,al		;hills in sector? */
	TEST(al, al);
	/* jns	ExitGndHt1	;no, therefore sea level -> */
	if ((signed char)((al & al)) >= 0) {goto exitgndht1;}
	// 0 ;* sort quadrant index (quad index = sign(y) * 2 + sign(x))
	/* mov	ax,VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	di,ax */
	di = ax;
	/* shl	ax,1		;extract sign(y) */
	SHL(ax, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	/* mov	ax,VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	si,ax */
	si = ax;
	/* shl	ax,1		;extract sign(x) */
	SHL(ax, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	/* and	bx,0011b */
	AND(bx, 0x3);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
__disp=*(dw*)(((db*)&sortquad)+bx);
	/* jmp	SortQuad[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* sort quad 1
sortquad1:
	// 4471 
	/* SortQuad1:	mov	bl,HillLayer1[bp]	;Z1 = ZA (also quad crease flag) */
	bl = *((&hilllayer1)+bp);
	/* mov	bh,HillLayer2[bp]	;Z2 = ZB */
	bh = *((&hilllayer2)+bp);
	/* mov	cl,HillLayer3[bp]	;Z3 = ZD */
	cl = *((&hilllayer3)+bp);
	/* mov	ch,HillLayer4[bp]	;Z4 = ZE */
	ch = *((&hilllayer4)+bp);
	/* mov	ah,HillLayer5[bp]	;face colour data */
	ah = *((&hilllayer5)+bp);
	/* add	si,8192		;x = x + 8192 */
	ADD(si, 8192);
	/* jmp	QuadOk */
	goto quadok;
	// 0 ;* sort quad 2
sortquad2:
	// 4473 
	/* SortQuad2:	mov	bl,HillLayer2[bp]	;Z1 = ZB (also quad crease flag) */
	bl = *((&hilllayer2)+bp);
	/* mov	bh,HillLayer1[bp+1]	;Z2 = ZC */
	bh = *((&hilllayer1)+bp+1);
	/* mov	cl,HillLayer4[bp]	;Z3 = ZE */
	cl = *((&hilllayer4)+bp);
	/* mov	ch,HillLayer3[bp+1]	;Z4 = ZF */
	ch = *((&hilllayer3)+bp+1);
	/* mov	ah,HillLayer6[bp]	;face colour data */
	ah = *((&hilllayer6)+bp);
	/* jmp	QuadOk */
	goto quadok;
	// 0 ;* sort quad 3
sortquad3:
	// 4475 
	/* SortQuad3:	mov	bl,HillLayer3[bp]	;Z1 = ZD (also quad crease flag) */
	bl = *((&hilllayer3)+bp);
	/* mov	bh,HillLayer4[bp]	;Z2 = ZE */
	bh = *((&hilllayer4)+bp);
	/* mov	cl,HillLayer1[bp+32]	;Z3 = ZG */
	cl = *((&hilllayer1)+bp+32);
	/* mov	ch,HillLayer2[bp+32]	;Z4 = ZH */
	ch = *((&hilllayer2)+bp+32);
	/* mov	ah,HillLayer7[bp]	;face colour data */
	ah = *((&hilllayer7)+bp);
	/* add	si,8192		;x = x + 8192 */
	ADD(si, 8192);
	/* add	di,8192		;y = y + 8192 */
	ADD(di, 8192);
	/* jmp	QuadOk */
	goto quadok;
	// 0 ;* sort quad 4
sortquad4:
	// 4477 
	/* SortQuad4:	mov	bl,HillLayer4[bp]	;Z1 = ZE (also quad crease flag) */
	bl = *((&hilllayer4)+bp);
	/* mov	bh,HillLayer3[bp+1]	;Z2 = ZF */
	bh = *((&hilllayer3)+bp+1);
	/* mov	cl,HillLayer2[bp+32]	;Z3 = ZH */
	cl = *((&hilllayer2)+bp+32);
	/* mov	ch,HillLayer1[bp+33]	;Z4 = ZI */
	ch = *((&hilllayer1)+bp+33);
	/* mov	ah,HillLayer8[bp]	;face colour data */
	ah = *((&hilllayer8)+bp);
	/* add	di,8192		;y = y + 8192 */
	ADD(di, 8192);
	// 0 ;* if reverse Z crease then convert to Z crease
quadok:
	// 4479 
	/* QuadOk:		test	bl,080h		;Z crease? */
	TEST(bl, 0x080);
	/* jz	@F		;yes -> */
	if (!(bl & 0x080)) {goto dummylabel2;}
	/* xchg	bl,bh		;swap Z1, Z2 */
	XCHG(bl, bh);
	/* xchg	cl,ch		;swap Z3, Z4 */
	XCHG(cl, ch);
	/* rol	ah,1 */
	ROL(ah, 1);
	/* rol	ah,1 */
	ROL(ah, 1);
	/* rol	ah,1 */
	ROL(ah, 1);
	/* rol	ah,1 */
	ROL(ah, 1);
	/* mov	bp,8192 */
	bp = 8192;
	/* sub	bp,si		;8192 - x */
	SUB(bp, si);
	/* mov	si,bp		;x = 8192 - x */
	si = bp;
	// 0 ;* sort which face (x >= y) or (y > x)
dummylabel2:
	// 4481 
	/* @@:		mov	al,0f0h		;assume (x >= y) */
	al = 0x0f0;
	/* cmp	si,di		;x >= y? */
	CMP(si, di);
	/* jae	@F		;yes -> */
	if ((dw)(si) >= (dw)(di)) {goto dummylabel3;}
	/* xchg	bl,ch		;swap Z1, Z4 */
	XCHG(bl, ch);
	/* xchg	si,di		;swap x, y */
	XCHG(si, di);
	/* mov	al,00fh */
	al = 0x00f;
dummylabel3:
	// 4483 
	/* @@:		test	ah,al		;face exists? */
	TEST(ah, al);
	/* jz	ExitGndHt2	;no, therefore sea level -> */
	if (!(ah & al)) {goto exitgndht2;}
	/* and	bx,00f0fh	;clear crease flags */
	AND(bx, 0x00f0f);
	/* and	cx,00f0fh	;clear crease flags */
	AND(cx, 0x00f0f);
	/* test	si,si		;x = 0? (prevent div 0 error) */
	TEST(si, si);
	/* jz	ExitGndHt3	;yes -> */
	if (!(si & si)) {goto exitgndht3;}
	// 0 ;* calc ground height (Zt):-
	// 0 ;*
	// 0 ;*    Zi = (y / x) * (Z2 - Z4) + Z4
	// 0 ;*    Zt = (x / 8192) * (Zi - Z3) + Z3
	/* mov	ah,bh */
	ah = bh;
	/* sub	ah,ch		;Z2 - Z4 (*256) */
	SUB(ah, ch);
	/* xor	al,al */
	XOR(al, al);
	/* imul	di		;y * (Z2 - Z4) */
	IMUL1_2(di);
	/* idiv	si		;(y / x) * (Z2 - Z4) */
	IDIV2(si);
	/* add	ah,ch		;Zi = (y / x) * (Z2 - Z4) + Z4 */
	ADD(ah, ch);
	/* sub	ah,cl		;Zi - Z3 (*256) */
	SUB(ah, cl);
	/* imul	si		;x * (Zi - Z3) */
	IMUL1_2(si);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	dh,cl		;Zt = (x / 8192) * (Zi - Z3) + Z3 */
	ADD(dh, cl);
	/* mov	ax,dx */
	ax = dx;
	/* ret */
	RETF(0);
exitgndht2:
	// 4485 
	/* ExitGndHt2:	xor	ax,ax		;sea level */
	XOR(ax, ax);
	/* ret */
	RETF(0);
exitgndht3:
	// 4487 
	/* ExitGndHt3:	mov	ah,cl		;height = Z3 (*256) */
	ah = cl;
	/* xor	al,al */
	XOR(al, al);
	/* ret */
	RETF(0);
qcalcgndheight:
	// 2402 
	// 0 ;* calc map index (map index = x sec + y sec * 32)
edummylabel14:
	// 4489 
	/* mov	bp,VP_XSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	dx,VP_YSEC[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* and	bp,MAP_X_WRAP */
	AND(bp, 0x0001f);
	/* and	dx,MAP_Y_WRAP */
	AND(dx, 0x0001f);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* add	bp,dx		;map index = x sec + y sec * 32 */
	ADD(bp, dx);
	// 0 ;* test for hills in sector
	/* mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* test	al,al		;hills in sector? */
	TEST(al, al);
	/* jns	ExitQGndHt1	;no, therefore sea level -> */
	if ((signed char)((al & al)) >= 0) {goto exitqgndht1;}
	// 0 ;* index = ((xft + 8192) and 03000h) >> 9 or ((yft + 8192) and 03000h) >> 11
	/* mov	ax,VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* and	ax,03000h */
	AND(ax, 0x03000);
	/* xchg	al,ah		;>> 8 */
	XCHG(al, ah);
	/* shr	ax,1		;>> 9 */
	SHR(ax, 1);
	/* mov	bx,VP_YFT[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* and	bx,03000h */
	AND(bx, 0x03000);
	/* xchg	bl,bh		;>> 8 */
	XCHG(bl, bh);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* or	bx,ax */
	OR(bx, ax);
__disp=*(dw*)(((db*)&sortqspotht)+bx);
	/* jmp	SortQSpotHt[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
qspothta:
	// 4491 
	// 0 ;---------------------------
	/* mov	ah,HillLayer1[bp] */
	ah = *((&hilllayer1)+bp);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothtb:
	// 4493 
	// 0 ;---------------------------
	/* mov	ah,HillLayer2[bp] */
	ah = *((&hilllayer2)+bp);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothtc:
	// 4495 
	// 0 ;---------------------------
	/* mov	ah,HillLayer1[bp+1] */
	ah = *((&hilllayer1)+bp+1);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothtd:
	// 4497 
	// 0 ;---------------------------
	/* mov	ah,HillLayer3[bp] */
	ah = *((&hilllayer3)+bp);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothte:
	// 4499 
	// 0 ;---------------------------
	/* mov	ah,HillLayer4[bp] */
	ah = *((&hilllayer4)+bp);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothtf:
	// 4501 
	// 0 ;---------------------------
	/* mov	ah,HillLayer3[bp+1] */
	ah = *((&hilllayer3)+bp+1);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothtg:
	// 4503 
	// 0 ;---------------------------
	/* mov	ah,HillLayer1[bp+32] */
	ah = *((&hilllayer1)+bp+32);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothth:
	// 4505 
	// 0 ;---------------------------
	/* mov	ah,HillLayer2[bp+32] */
	ah = *((&hilllayer2)+bp+32);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
qspothti:
	// 4507 
	// 0 ;---------------------------
	/* mov	ah,HillLayer1[bp+33] */
	ah = *((&hilllayer1)+bp+33);
	/* and	ax,00f00h */
	AND(ax, 0x00f00);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
exitqgndht1:
	// 4509 
	// 0 ;---------------------------
	/* xor	ax,ax		;sea level */
	XOR(ax, ax);
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
                case m2c::kcalcgndheight: 	goto calcgndheight;
        case m2c::kcalczapos: 	goto calczapos;
        case m2c::kcalczbpos: 	goto calczbpos;
        case m2c::kcalczcpos: 	goto calczcpos;
        case m2c::kcalczdpos: 	goto calczdpos;
        case m2c::kcalczepos: 	goto calczepos;
        case m2c::kcalczfpos: 	goto calczfpos;
        case m2c::kcalczgpos: 	goto calczgpos;
        case m2c::kcalczhpos: 	goto calczhpos;
        case m2c::kcalczipos: 	goto calczipos;
        case m2c::kcontface1: 	goto contface1;
        case m2c::kcontface2: 	goto contface2;
        case m2c::kcontface3: 	goto contface3;
        case m2c::kcontface4: 	goto contface4;
        case m2c::kcontface5: 	goto contface5;
        case m2c::kcontface6: 	goto contface6;
        case m2c::kcontface7: 	goto contface7;
        case m2c::kcontface8: 	goto contface8;
        case m2c::kcreaseok0: 	goto creaseok0;
        case m2c::kcreaseok1: 	goto creaseok1;
        case m2c::kcreaseok2: 	goto creaseok2;
        case m2c::kcreaseok3: 	goto creaseok3;
        case m2c::kcreaseok4: 	goto creaseok4;
        case m2c::kcreaseok5: 	goto creaseok5;
        case m2c::kcreaseok6: 	goto creaseok6;
        case m2c::kcreaseok7: 	goto creaseok7;
        case m2c::kdrawfaceexit1: 	goto drawfaceexit1;
        case m2c::kdrawfaceexit2: 	goto drawfaceexit2;
        case m2c::kdrawhillface: 	goto drawhillface;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitgndht1: 	goto exitgndht1;
        case m2c::kexitgndht2: 	goto exitgndht2;
        case m2c::kexitgndht3: 	goto exitgndht3;
        case m2c::kexitqgndht1: 	goto exitqgndht1;
        case m2c::kfaceok: 	goto faceok;
        case m2c::kplain: 	goto plain;
        case m2c::kqcalcgndheight: 	goto qcalcgndheight;
        case m2c::kqspothta: 	goto qspothta;
        case m2c::kqspothtb: 	goto qspothtb;
        case m2c::kqspothtc: 	goto qspothtc;
        case m2c::kqspothtd: 	goto qspothtd;
        case m2c::kqspothte: 	goto qspothte;
        case m2c::kqspothtf: 	goto qspothtf;
        case m2c::kqspothtg: 	goto qspothtg;
        case m2c::kqspothth: 	goto qspothth;
        case m2c::kqspothti: 	goto qspothti;
        case m2c::kquadok: 	goto quadok;
        case m2c::kscanhills: 	goto scanhills;
        case m2c::kscanhillsexit: 	goto scanhillsexit;
        case m2c::ksortfacedist1: 	goto sortfacedist1;
        case m2c::ksortfacedist16: 	goto sortfacedist16;
        case m2c::ksortfacedist2: 	goto sortfacedist2;
        case m2c::ksortfacedist8: 	goto sortfacedist8;
        case m2c::ksortfacefail1: 	goto sortfacefail1;
        case m2c::ksortfacefail2: 	goto sortfacefail2;
        case m2c::ksortfarface1: 	goto sortfarface1;
        case m2c::ksortfarface16: 	goto sortfarface16;
        case m2c::ksortfarface2: 	goto sortfarface2;
        case m2c::ksortfarface8: 	goto sortfarface8;
        case m2c::ksorthillface: 	goto sorthillface;
        case m2c::ksortquad1: 	goto sortquad1;
        case m2c::ksortquad2: 	goto sortquad2;
        case m2c::ksortquad3: 	goto sortquad3;
        case m2c::ksortquad4: 	goto sortquad4;
        case m2c::ktextloop: 	goto textloop;
        case m2c::ktextured: 	goto textured;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kyok1: 	goto yok1;
        case m2c::kyok2: 	goto yok2;
        case m2c::kyok3: 	goto yok3;
        default: return __dispatch_call(__disp, _state);
    };
}

