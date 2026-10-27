/* THIS IS GENERATED FILE */

        
#include "roads.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawroads:
	// 990 
	// 0 ;* if ZFT < Z_APPROX_THRES then
	// 0 ;*    draw polygon roads
	// 0 ;* else
	// 0 ;*    draw line roads
	// 0 ;* end
edummylabel1:
	// 4369 
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* mov	ax,LineRoads[bx]	;assume line roads */
	ax = *(dw*)(((db*)&lineroads)+bx);
	/* cmp	WORD PTR V_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&v_view+vp_zft_hi)), 0);
	/* jne	@F			;zft > 65,535ft -> */
	if ((dw)(*((dw*)((db*)&v_view+vp_zft_hi))) != (dw)(0)) {goto dummylabel1;}
	/* cmp	WORD PTR V_VIEW.VP_ZFT_LO,Z_APPROX_THRES */
	CMP(*((dw*)((db*)&v_view+vp_zft_lo)), 8192);
	/* jae	@F			;zft >= Z_APPROX_THRES -> */
	if ((dw)(*((dw*)((db*)&v_view+vp_zft_lo))) >= (dw)(8192)) {goto dummylabel1;}
	/* mov	ax,PolyRoads[bx]	;polygon roads */
	ax = *(dw*)(((db*)&polyroads)+bx);
dummylabel1:
	// 4371 
	/* @@:		mov	DrawRoadType,ax */
	drawroadtype = ax;
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,RoadLayer1[bp] */
	al = *((&roadlayer1)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	Layer2		;yes -> */
	if (!(al & al)) {goto layer2;}
	/* mov	si,-$4096 */
	si = -32;
	/* mov	di,+$4096 */
	di = +32;
	/* call	DrawNode */
	CALL(drawnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
layer2:
	// 4373 
	/* Layer2:		mov	al,RoadLayer2[bp] */
	al = *((&roadlayer2)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	Layer3		;yes -> */
	if (!(al & al)) {goto layer3;}
	/* mov	si,+$4096 */
	si = +32;
	/* mov	di,+$4096 */
	di = +32;
	/* call	DrawNode */
	CALL(drawnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
layer3:
	// 4375 
	/* Layer3:		mov	al,RoadLayer3[bp] */
	al = *((&roadlayer3)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	Layer4		;yes -> */
	if (!(al & al)) {goto layer4;}
	/* mov	si,-$4096 */
	si = -32;
	/* mov	di,-$4096 */
	di = -32;
	/* call	DrawNode */
	CALL(drawnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
layer4:
	// 4377 
	/* Layer4:		mov	al,RoadLayer4[bp] */
	al = *((&roadlayer4)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	DrawRoadsExit	;yes -> */
	if (!(al & al)) {goto drawroadsexit;}
	/* mov	si,+$4096 */
	si = +32;
	/* mov	di,-$4096 */
	di = -32;
	/* call	DrawNode */
	CALL(drawnode, 0);
drawroadsexit:
	// 4379 
	/* DrawRoadsExit:	ret */
	RETN(0);
drawnode:
	// 1045 
	/* mov	dl,al		;store node code */
	dl = al;
	// 0 ;* calc node position wrt sector scale mode
edummylabel2:
	// 4381 
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* call	CalcNodePos[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcnodepos)+bx));
	/* mov	al,dl		;restore node code */
	al = dl;
	/* xor	bx,bx		;reset index */
	XOR(bx, bx);
drawnextroad:
	// 4383 
	/* DrawNextRoad:	shr	al,1		;road to draw? */
	SHR(al, 1);
	/* jnc	SkipRoad	;no -> */
	if (!CF) {goto skiproad;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* call	DrawRoadType */
	CALL(__dispatch_call_ext, drawroadtype);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skiproad:
	// 4385 
	/* SkipRoad:	add	bx,4		;index = index + 4 */
	ADD(bx, 4);
	/* test	al,al		;any more roads? */
	TEST(al, al);
	/* jnz	DrawNextRoad	;yes -> */
	if ((al & al) != 0) {goto drawnextroad;}
	/* ret */
	RETN(0);
calcnodepos1:
	// 1074 
	/* mov	ax,XPos1 ;* kill: ax, flags */
	ax = xpos1;
edummylabel3:
	// 4387 
	/* add	ax,XSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+si));
	/* add	ax,XSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* add	ax,YSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+si));
	/* add	ax,YSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* add	ax,ZSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+si));
	/* add	ax,ZSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcnodepos2:
	// 1098 
	/* sar	si,1		;/2 x index */
	SAR(si, 1);
edummylabel4:
	// 4389 
	/* sar	di,1		;/2 y index */
	SAR(di, 1);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* add	ax,XSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+si));
	/* add	ax,XSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* add	ax,YSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+si));
	/* add	ax,YSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* add	ax,ZSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+si));
	/* add	ax,ZSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcnodepos8:
	// 1124 
	/* sar	si,1		;/8 x index */
	SAR(si, 1);
edummylabel5:
	// 4391 
	/* sar	di,1		;/8 y index */
	SAR(di, 1);
	/* sar	si,1		;/8 x index */
	SAR(si, 1);
	/* sar	di,1		;/8 y index */
	SAR(di, 1);
	/* sar	si,1		;/8 x index */
	SAR(si, 1);
	/* sar	di,1		;/8 y index */
	SAR(di, 1);
	/* mov	ax,XPos8 */
	ax = xpos8;
	/* add	ax,XSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+si));
	/* add	ax,XSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YPos8 */
	ax = ypos8;
	/* add	ax,YSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+si));
	/* add	ax,YSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZPos8 */
	ax = zpos8;
	/* add	ax,ZSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+si));
	/* add	ax,ZSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcnodepos16:
	// 1155 
	/* sar	si,1		;/16 x index */
	SAR(si, 1);
edummylabel6:
	// 4393 
	/* sar	di,1		;/16 y index */
	SAR(di, 1);
	/* sar	si,1		;/16 x index */
	SAR(si, 1);
	/* sar	di,1		;/16 y index */
	SAR(di, 1);
	/* sar	si,1		;/16 x index */
	SAR(si, 1);
	/* sar	di,1		;/16 y index */
	SAR(di, 1);
	/* sar	si,1		;/16 x index */
	SAR(si, 1);
	/* sar	di,1		;/16 y index */
	SAR(di, 1);
	/* mov	ax,XPos16 */
	ax = xpos16;
	/* add	ax,XSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+si));
	/* add	ax,XSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YPos16 */
	ax = ypos16;
	/* add	ax,YSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+si));
	/* add	ax,YSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZPos16 */
	ax = zpos16;
	/* add	ax,ZSX[$MID][si] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+si));
	/* add	ax,ZSY[$MID][di] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
polyroad1:
	// 1187 
	/* mov	si,RoadLength1[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength1)+bx);
edummylabel7:
	// 4395 
	/* mov	di,RoadLength1[bx+2] */
	di = *(dw*)(((db*)&roadlength1)+bx+2);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	cx,ax		;cx = XSX + XSY */
	cx = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	dx,ax		;dx = YSX + YSY */
	dx = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	bp,ax		;bp = ZSX + ZSY */
	bp = ax;
	/* shl	bx,1		;*8 */
	SHL(bx, 1);
	/* shl	bx,1		;*16 index */
	SHL(bx, 1);
	/* mov	si,RoadWidth1[bx+0]	;x1 */
	si = *(dw*)(((db*)&roadwidth1)+bx+0);
	/* mov	di,RoadWidth1[bx+2]	;y1 */
	di = *(dw*)(((db*)&roadwidth1)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[0],ax	;Xe = XPos + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[0],ax	;Ye = YPos + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[0],ax	;Ze = ZPos + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,RoadWidth1[bx+4]	;x2 */
	si = *(dw*)(((db*)&roadwidth1)+bx+4);
	/* mov	di,RoadWidth1[bx+6]	;y2 */
	di = *(dw*)(((db*)&roadwidth1)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	si,RoadWidth1[bx+8]	;x3 */
	si = *(dw*)(((db*)&roadwidth1)+bx+8);
	/* mov	di,RoadWidth1[bx+10]	;y3 */
	di = *(dw*)(((db*)&roadwidth1)+bx+10);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[4],ax	;Xe = XPos + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[4],ax	;Ye = YPos + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[4],ax	;Ze = ZPos + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,RoadWidth1[bx+12]	;x4 */
	si = *(dw*)(((db*)&roadwidth1)+bx+12);
	/* mov	di,RoadWidth1[bx+14]	;y4 */
	di = *(dw*)(((db*)&roadwidth1)+bx+14);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[6],ax	;Xe = XPos + (XGX + XGY) */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[6],ax	;Ye = YPos + (YGX + YGY) */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[6],ax	;Ze = ZPos + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitPolyRoad1	;road non-visible -> */
	if (CF) {goto exitpolyroad1;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ExitPolyRoad1	;road non-visible -> */
	if (CF) {goto exitpolyroad1;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
exitpolyroad1:
	// 4397 
	/* ExitPolyRoad1:	ret */
	RETN(0);
polyroad2:
	// 1283 
	/* mov	si,RoadLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength2)+bx);
edummylabel8:
	// 4399 
	/* mov	di,RoadLength2[bx+2] */
	di = *(dw*)(((db*)&roadlength2)+bx+2);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	cx,ax		;cx = XSX + XSY */
	cx = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	dx,ax		;dx = YSX + YSY */
	dx = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	bp,ax		;bp = ZSX + ZSY */
	bp = ax;
	/* shl	bx,1		;*8 */
	SHL(bx, 1);
	/* shl	bx,1		;*16 index */
	SHL(bx, 1);
	/* mov	si,RoadWidth2[bx+0]	;x1 */
	si = *(dw*)(((db*)&roadwidth2)+bx+0);
	/* mov	di,RoadWidth2[bx+2]	;y1 */
	di = *(dw*)(((db*)&roadwidth2)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[0],ax	;Xe = XPos + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[0],ax	;Ye = YPos + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[0],ax	;Ze = ZPos + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,RoadWidth2[bx+4]	;x2 */
	si = *(dw*)(((db*)&roadwidth2)+bx+4);
	/* mov	di,RoadWidth2[bx+6]	;y2 */
	di = *(dw*)(((db*)&roadwidth2)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	si,RoadWidth2[bx+8]	;x3 */
	si = *(dw*)(((db*)&roadwidth2)+bx+8);
	/* mov	di,RoadWidth2[bx+10]	;y3 */
	di = *(dw*)(((db*)&roadwidth2)+bx+10);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[4],ax	;Xe = XPos + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[4],ax	;Ye = YPos + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[4],ax	;Ze = ZPos + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,RoadWidth2[bx+12]	;x4 */
	si = *(dw*)(((db*)&roadwidth2)+bx+12);
	/* mov	di,RoadWidth2[bx+14]	;y4 */
	di = *(dw*)(((db*)&roadwidth2)+bx+14);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[6],ax	;Xe = XPos + (XGX + XGY) */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[6],ax	;Ye = YPos + (YGX + YGY) */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[6],ax	;Ze = ZPos + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitPolyRoad2	;road non-visible -> */
	if (CF) {goto exitpolyroad2;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ExitPolyRoad2	;road non-visible -> */
	if (CF) {goto exitpolyroad2;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
exitpolyroad2:
	// 4401 
	/* ExitPolyRoad2:	ret */
	RETN(0);
lineroad1:
	// 1379 
	/* mov	si,RoadLength1[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength1)+bx);
edummylabel9:
	// 4403 
	/* mov	di,RoadLength1[bx+2] */
	di = *(dw*)(((db*)&roadlength1)+bx+2);
	/* mov	ax,XPos */
	ax = xpos;
	/* mov	Xe[0],ax	;Xe = XPos */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos */
	ax = ypos;
	/* mov	Ye[0],ax	;Ye = YPos */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos */
	ax = zpos;
	/* mov	Ze[0],ax	;Ze = ZPos */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRoad1	;road non-visible -> */
	if (CF) {goto exitlineroad1;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
exitlineroad1:
	// 4405 
	/* ExitLineRoad1:	ret */
	RETN(0);
lineroad2:
	// 1415 
	/* mov	si,RoadLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength2)+bx);
edummylabel10:
	// 4407 
	/* mov	di,RoadLength2[bx+2] */
	di = *(dw*)(((db*)&roadlength2)+bx+2);
	/* mov	ax,XPos */
	ax = xpos;
	/* mov	Xe[0],ax	;Xe = XPos */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos */
	ax = ypos;
	/* mov	Ye[0],ax	;Ye = YPos */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos */
	ax = zpos;
	/* mov	Ze[0],ax	;Ze = ZPos */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRoad2	;road non-visible -> */
	if (CF) {goto exitlineroad2;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
exitlineroad2:
	// 4409 
	/* ExitLineRoad2:	ret */
	RETN(0);
lineroad8:
	// 1451 
	/* mov	si,RoadLength8[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength8)+bx);
edummylabel11:
	// 4411 
	/* mov	di,RoadLength8[bx+2] */
	di = *(dw*)(((db*)&roadlength8)+bx+2);
	/* mov	ax,XPos */
	ax = xpos;
	/* mov	Xe[0],ax	;Xe = XPos */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos */
	ax = ypos;
	/* mov	Ye[0],ax	;Ye = YPos */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos */
	ax = zpos;
	/* mov	Ze[0],ax	;Ze = ZPos */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRoad8	;road non-visible -> */
	if (CF) {goto exitlineroad8;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
exitlineroad8:
	// 4413 
	/* ExitLineRoad8:	ret */
	RETN(0);
lineroad16:
	// 1487 
	/* mov	si,RoadLength16[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&roadlength16)+bx);
edummylabel12:
	// 4415 
	/* mov	di,RoadLength16[bx+2] */
	di = *(dw*)(((db*)&roadlength16)+bx+2);
	/* mov	ax,XPos */
	ax = xpos;
	/* mov	Xe[0],ax	;Xe = XPos */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos */
	ax = ypos;
	/* mov	Ye[0],ax	;Ye = YPos */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos */
	ax = zpos;
	/* mov	Ze[0],ax	;Ze = ZPos */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRoad16	;road non-visible -> */
	if (CF) {goto exitlineroad16;}
	/* mov	al,COL_ROAD1 */
	al = 73;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
exitlineroad16:
	// 4417 
	/* ExitLineRoad16:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcalcnodepos1: 	goto calcnodepos1;
        case m2c::kcalcnodepos16: 	goto calcnodepos16;
        case m2c::kcalcnodepos2: 	goto calcnodepos2;
        case m2c::kcalcnodepos8: 	goto calcnodepos8;
        case m2c::kdrawnextroad: 	goto drawnextroad;
        case m2c::kdrawnode: 	goto drawnode;
        case m2c::kdrawroads: 	goto drawroads;
        case m2c::kdrawroadsexit: 	goto drawroadsexit;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitlineroad1: 	goto exitlineroad1;
        case m2c::kexitlineroad16: 	goto exitlineroad16;
        case m2c::kexitlineroad2: 	goto exitlineroad2;
        case m2c::kexitlineroad8: 	goto exitlineroad8;
        case m2c::kexitpolyroad1: 	goto exitpolyroad1;
        case m2c::kexitpolyroad2: 	goto exitpolyroad2;
        case m2c::klayer2: 	goto layer2;
        case m2c::klayer3: 	goto layer3;
        case m2c::klayer4: 	goto layer4;
        case m2c::klineroad1: 	goto lineroad1;
        case m2c::klineroad16: 	goto lineroad16;
        case m2c::klineroad2: 	goto lineroad2;
        case m2c::klineroad8: 	goto lineroad8;
        case m2c::kpolyroad1: 	goto polyroad1;
        case m2c::kpolyroad2: 	goto polyroad2;
        case m2c::kskiproad: 	goto skiproad;
        default: return __dispatch_call(__disp, _state);
    };
}

