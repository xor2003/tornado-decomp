/* THIS IS GENERATED FILE */

        
#include "railways.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 1289 
drawrailsexit1:
	// 4369 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
drawrailways:
	// 1291 
	/* mov	bp,MapIndex */
	bp = mapindex;
edummylabel1:
	// 4371 
	/* mov	al,RailLayer1[bp] */
	al = *((&raillayer1)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	DrawRailsExit1	;yes -> */
	if (!(al & al)) {goto drawrailsexit1;}
	/* mov	dl,al		;store node code */
	dl = al;
	// 0 ;-------------------
	// 0 ;* draw railway beds
	// 0 ;-------------------
	// 0 ;* if ZFT < Z_APPROX_THRES then
	// 0 ;*    draw polygon rail
	// 0 ;* else
	// 0 ;*    draw line rail
	// 0 ;* end
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* mov	ax,LineRails[bx]	;assume line railways */
	ax = *(dw*)(((db*)&linerails)+bx);
	/* cmp	WORD PTR V_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&v_view+vp_zft_hi)), 0);
	/* jne	@F			;zft > 65,535ft -> */
	if ((dw)(*((dw*)((db*)&v_view+vp_zft_hi))) != (dw)(0)) {goto dummylabel1;}
	/* cmp	WORD PTR V_VIEW.VP_ZFT_LO,Z_APPROX_THRES */
	CMP(*((dw*)((db*)&v_view+vp_zft_lo)), 8192);
	/* jae	@F			;zft >= Z_APPROX_THRES -> */
	if ((dw)(*((dw*)((db*)&v_view+vp_zft_lo))) >= (dw)(8192)) {goto dummylabel1;}
	/* mov	ax,PolyRails[bx]	;polygon railways */
	ax = *(dw*)(((db*)&polyrails)+bx);
dummylabel1:
	// 4373 
	/* @@:		mov	DrawRailType,ax */
	drawrailtype = ax;
	/* push	dx */
	PUSH(dx);
	// 0 ;* draw node
	/* mov	al,dl		;al = node code */
	al = dl;
	/* xor	bx,bx		;reset index */
	XOR(bx, bx);
drawnextrail:
	// 4375 
	/* DrawNextRail:	shr	al,1		;rail to draw? */
	SHR(al, 1);
	/* jnc	SkipRail	;no -> */
	if (!CF) {goto skiprail;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* call	DrawRailType */
	CALL(__dispatch_call_ext, drawrailtype);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skiprail:
	// 4377 
	/* SkipRail:	add	bx,4		;index = index + 4 */
	ADD(bx, 4);
	/* test	al,al		;any more rails? */
	TEST(al, al);
	/* jnz	DrawNextRail	;yes -> */
	if ((al & al) != 0) {goto drawnextrail;}
	// 0 ;---------------------
	// 0 ;* draw railway tracks
	// 0 ;---------------------
	/* pop	dx  		;dl = node code */
	POP(dx);
	// 0 ;* only draw railway tracks in SEC_SCALE1 or SEC_SCALE2 visual
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* cmp	bx,SEC_SCALE2 */
	CMP(bx, 2);
	/* ja	DrawRailsExit2 */
	if ((dw)(bx) > (dw)(2)) {goto drawrailsexit2;}
	// 0 ;* only draw tracks if polygon railway beds have been drawn
	// 0 ;* note: SEC_SCALE1 and SEC_SCALE2 only therefore ZFT < 8192ft (VP_ZFT_HI = 0)
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,Z_APPROX_THRES */
	CMP(ax, 8192);
	/* jae	DrawRailsExit2 */
	if ((dw)(ax) >= (dw)(8192)) {goto drawrailsexit2;}
	// 0 ;* draw single or double track
	/* cmp	ax,Z_TRACK_THRES */
	CMP(ax, 1024);
	/* mov	ax,SingleTracks[bx] */
	ax = *(dw*)(((db*)&singletracks)+bx);
	/* jae	@F */
	if (!CF) {goto dummylabel2;}
	/* mov	ax,DoubleTracks[bx] */
	ax = *(dw*)(((db*)&doubletracks)+bx);
dummylabel2:
	// 4379 
	/* @@:		mov	DrawRailType,ax */
	drawrailtype = ax;
	// 0 ;* sort track scaling factors
	/* mov	ax,TrackScaleVals[bx] */
	ax = *(dw*)(((db*)&trackscalevals)+bx);
	/* mov	TrackScale,ax */
	trackscale = ax;
	// 0 ;* draw node
	/* mov	al,dl		;al = node code */
	al = dl;
	/* xor	bx,bx		;reset index */
	XOR(bx, bx);
drawnexttrack:
	// 4381 
	/* DrawNextTrack:	shr	al,1		;track to draw? */
	SHR(al, 1);
	/* jnc	SkipTrack	;no -> */
	if (!CF) {goto skiptrack;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* call	DrawRailType */
	CALL(__dispatch_call_ext, drawrailtype);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skiptrack:
	// 4383 
	/* SkipTrack:	add	bx,4		;index = index + 4 */
	ADD(bx, 4);
	/* test	al,al		;any more tracks? */
	TEST(al, al);
	/* jnz	DrawNextTrack	;yes -> */
	if ((al & al) != 0) {goto drawnexttrack;}
drawrailsexit2:
	// 4385 
	/* DrawRailsExit2:	ret */
	RETN(0);
polyrail1:
	// 1382 
	/* mov	si,RailLength1[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength1)+bx);
edummylabel2:
	// 4387 
	/* mov	di,RailLength1[bx+2] */
	di = *(dw*)(((db*)&raillength1)+bx+2);
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
	/* mov	si,RailWidth1[bx+0]	;x1 */
	si = *(dw*)(((db*)&railwidth1)+bx+0);
	/* mov	di,RailWidth1[bx+2]	;y1 */
	di = *(dw*)(((db*)&railwidth1)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[0],ax	;Xe = XPos1 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[0],ax	;Ye = YPos1 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[0],ax	;Ze = ZPos1 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,RailWidth1[bx+4]	;x2 */
	si = *(dw*)(((db*)&railwidth1)+bx+4);
	/* mov	di,RailWidth1[bx+6]	;y2 */
	di = *(dw*)(((db*)&railwidth1)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos1 + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos1 + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos1 + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	si,RailWidth1[bx+8]	;x3 */
	si = *(dw*)(((db*)&railwidth1)+bx+8);
	/* mov	di,RailWidth1[bx+10]	;y3 */
	di = *(dw*)(((db*)&railwidth1)+bx+10);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[4],ax	;Xe = XPos1 + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[4],ax	;Ye = YPos1 + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[4],ax	;Ze = ZPos1 + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,RailWidth1[bx+12]	;x4 */
	si = *(dw*)(((db*)&railwidth1)+bx+12);
	/* mov	di,RailWidth1[bx+14]	;y4 */
	di = *(dw*)(((db*)&railwidth1)+bx+14);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[6],ax	;Xe = XPos1 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[6],ax	;Ye = YPos1 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[6],ax	;Ze = ZPos1 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitPolyRail1	;rail non-visible -> */
	if (CF) {goto exitpolyrail1;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ExitPolyRail1	;rail non-visible -> */
	if (CF) {goto exitpolyrail1;}
	/* mov	al,COL_RAIL1 */
	al = 77;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
exitpolyrail1:
	// 4389 
	/* ExitPolyRail1:	ret */
	RETN(0);
polyrail2:
	// 1478 
	/* mov	si,RailLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength2)+bx);
edummylabel3:
	// 4391 
	/* mov	di,RailLength2[bx+2] */
	di = *(dw*)(((db*)&raillength2)+bx+2);
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
	/* mov	si,RailWidth2[bx+0]	;x1 */
	si = *(dw*)(((db*)&railwidth2)+bx+0);
	/* mov	di,RailWidth2[bx+2]	;y1 */
	di = *(dw*)(((db*)&railwidth2)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[0],ax	;Xe = XPos2 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[0],ax	;Ye = YPos2 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[0],ax	;Ze = ZPos2 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,RailWidth2[bx+4]	;x2 */
	si = *(dw*)(((db*)&railwidth2)+bx+4);
	/* mov	di,RailWidth2[bx+6]	;y2 */
	di = *(dw*)(((db*)&railwidth2)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos2 + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos2 + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos2 + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	si,RailWidth2[bx+8]	;x3 */
	si = *(dw*)(((db*)&railwidth2)+bx+8);
	/* mov	di,RailWidth2[bx+10]	;y3 */
	di = *(dw*)(((db*)&railwidth2)+bx+10);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[4],ax	;Xe = XPos2 + (XSX + XSY) + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[4],ax	;Ye = YPos2 + (YSX + YSY) + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[4],ax	;Ze = ZPos2 + (ZSX + ZSY) + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,RailWidth2[bx+12]	;x4 */
	si = *(dw*)(((db*)&railwidth2)+bx+12);
	/* mov	di,RailWidth2[bx+14]	;y4 */
	di = *(dw*)(((db*)&railwidth2)+bx+14);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[6],ax	;Xe = XPos2 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[6],ax	;Ye = YPos2 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[6],ax	;Ze = ZPos2 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitPolyRail2	;rail non-visible -> */
	if (CF) {goto exitpolyrail2;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ExitPolyRail2	;rail non-visible -> */
	if (CF) {goto exitpolyrail2;}
	/* mov	al,COL_RAIL1 */
	al = 77;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
exitpolyrail2:
	// 4393 
	/* ExitPolyRail2:	ret */
	RETN(0);
linerail1:
	// 1574 
	/* mov	si,RailLength1[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength1)+bx);
edummylabel4:
	// 4395 
	/* mov	di,RailLength1[bx+2] */
	di = *(dw*)(((db*)&raillength1)+bx+2);
	/* mov	ax,XPos1 */
	ax = xpos1;
	/* mov	Xe[0],ax	;Xe = XPos1 */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos1 + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* mov	Ye[0],ax	;Ye = YPos1 */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos1 + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* mov	Ze[0],ax	;Ze = ZPos1 */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos1 + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRail1	;rail non-visible -> */
	if (CF) {goto exitlinerail1;}
	/* mov	al,COL_RAIL1 */
	al = 77;
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
exitlinerail1:
	// 4397 
	/* ExitLineRail1:	ret */
	RETN(0);
linerail2:
	// 1610 
	/* mov	si,RailLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength2)+bx);
edummylabel5:
	// 4399 
	/* mov	di,RailLength2[bx+2] */
	di = *(dw*)(((db*)&raillength2)+bx+2);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* mov	Xe[0],ax	;Xe = XPos2 */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos2 + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* mov	Ye[0],ax	;Ye = YPos2 */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos2 + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* mov	Ze[0],ax	;Ze = ZPos2 */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos2 + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRail2	;rail non-visible -> */
	if (CF) {goto exitlinerail2;}
	/* mov	al,COL_RAIL1 */
	al = 77;
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
exitlinerail2:
	// 4401 
	/* ExitLineRail2:	ret */
	RETN(0);
linerail8:
	// 1646 
	/* mov	si,RailLength8[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength8)+bx);
edummylabel6:
	// 4403 
	/* mov	di,RailLength8[bx+2] */
	di = *(dw*)(((db*)&raillength8)+bx+2);
	/* mov	ax,XPos8 */
	ax = xpos8;
	/* mov	Xe[0],ax	;Xe = XPos8 */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos8 + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos8 */
	ax = ypos8;
	/* mov	Ye[0],ax	;Ye = YPos8 */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos8 + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos8 */
	ax = zpos8;
	/* mov	Ze[0],ax	;Ze = ZPos8 */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos8 + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRail8	;rail non-visible -> */
	if (CF) {goto exitlinerail8;}
	/* mov	al,COL_RAIL1 */
	al = 77;
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
exitlinerail8:
	// 4405 
	/* ExitLineRail8:	ret */
	RETN(0);
linerail16:
	// 1682 
	/* mov	si,RailLength16[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength16)+bx);
edummylabel7:
	// 4407 
	/* mov	di,RailLength16[bx+2] */
	di = *(dw*)(((db*)&raillength16)+bx+2);
	/* mov	ax,XPos16 */
	ax = xpos16;
	/* mov	Xe[0],ax	;Xe = XPos16 */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	Xe[2],ax	;Xe = XPos16 + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos16 */
	ax = ypos16;
	/* mov	Ye[0],ax	;Ye = YPos16 */
	*(dw*)(((db*)&ye)+0) = ax;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	Ye[2],ax	;Ye = YPos16 + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos16 */
	ax = zpos16;
	/* mov	Ze[0],ax	;Ze = ZPos16 */
	*(dw*)(((db*)&ze)+0) = ax;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	Ze[2],ax	;Ze = ZPos16 + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitLineRail16	;rail non-visible -> */
	if (CF) {goto exitlinerail16;}
	/* mov	al,COL_RAIL1 */
	al = 77;
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
exitlinerail16:
	// 4409 
	/* ExitLineRail16:	ret */
	RETN(0);
singletrack1:
	// 1718 
	/* mov	si,RailLength1[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength1)+bx);
edummylabel8:
	// 4411 
	/* mov	di,RailLength1[bx+2] */
	di = *(dw*)(((db*)&raillength1)+bx+2);
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
	/* mov	si,STrackEnd1[bx+0]	;x1 */
	si = *(dw*)(((db*)&strackend1)+bx+0);
	/* mov	di,STrackEnd1[bx+2]	;y1 */
	di = *(dw*)(((db*)&strackend1)+bx+2);
	/* mov	ax,XPos1 */
	ax = xpos1;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* mov	Xe[0],ax	;Xe = XPos1 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* mov	Ye[0],ax	;Ye = YPos1 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* mov	Ze[0],ax	;Ze = ZPos1 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,STrackEnd1[bx+4]	;x2 */
	si = *(dw*)(((db*)&strackend1)+bx+4);
	/* mov	di,STrackEnd1[bx+6]	;y2 */
	di = *(dw*)(((db*)&strackend1)+bx+6);
	/* mov	ax,XPos1 */
	ax = xpos1;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos1 + (XGX + XGY) + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos1 + (YGX + YGY) + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos1 + (ZGX + ZGY) + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitSingle1	;track non-visible -> */
	if (CF) {goto exitsingle1;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
exitsingle1:
	// 4413 
	/* ExitSingle1:	ret */
	RETN(0);
singletrack2:
	// 1780 
	/* mov	si,RailLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength2)+bx);
edummylabel9:
	// 4415 
	/* mov	di,RailLength2[bx+2] */
	di = *(dw*)(((db*)&raillength2)+bx+2);
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
	/* mov	si,STrackEnd2[bx+0]	;x1 */
	si = *(dw*)(((db*)&strackend2)+bx+0);
	/* mov	di,STrackEnd2[bx+2]	;y1 */
	di = *(dw*)(((db*)&strackend2)+bx+2);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* mov	Xe[0],ax	;Xe = XPos2 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* mov	Ye[0],ax	;Ye = YPos2 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* mov	Ze[0],ax	;Ze = ZPos2 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	si,STrackEnd2[bx+4]	;x2 */
	si = *(dw*)(((db*)&strackend2)+bx+4);
	/* mov	di,STrackEnd2[bx+6]	;y2 */
	di = *(dw*)(((db*)&strackend2)+bx+6);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[2],ax	;Xe = XPos2 + (XGX + XGY) + (XSX + XSY) */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax	;Ye = YPos2 + (YGX + YGY) + (YSX + YSY) */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[2],ax	;Ze = ZPos2 + (ZGX + ZGY) + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitSingle2	;track non-visible -> */
	if (CF) {goto exitsingle2;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
exitsingle2:
	// 4417 
	/* ExitSingle2:	ret */
	RETN(0);
doubletrack1:
	// 1842 
	// 0 ;------------------------------------------------------
	// 0 ;* calc node centre point (P1) and track end point (P5)
	// 0 ;------------------------------------------------------
edummylabel10:
	// 4419 
	/* mov	si,RailLength1[bx] */
	si = *(dw*)(((db*)&raillength1)+bx);
	/* mov	di,RailLength1[bx+2] */
	di = *(dw*)(((db*)&raillength1)+bx+2);
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
	/* mov	si,STrackEnd1[bx+0]	;x1 */
	si = *(dw*)(((db*)&strackend1)+bx+0);
	/* mov	di,STrackEnd1[bx+2]	;y1 */
	di = *(dw*)(((db*)&strackend1)+bx+2);
	/* mov	ax,XPos1 */
	ax = xpos1;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* mov	Xe[P1],ax	;Xe = XPos1 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* mov	Ye[P1],ax	;Ye = YPos1 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* mov	Ze[P1],ax	;Ze = ZPos1 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,STrackEnd1[bx+4]	;x2 */
	si = *(dw*)(((db*)&strackend1)+bx+4);
	/* mov	di,STrackEnd1[bx+6]	;y2 */
	di = *(dw*)(((db*)&strackend1)+bx+6);
	/* mov	ax,XPos1 */
	ax = xpos1;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[P5],ax	;Xe = XPos1 + (XGX + XGY) + (XSX + XSY) */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,YPos1 */
	ax = ypos1;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[P5],ax	;Ye = YPos1 + (YGX + YGY) + (YSX + YSY) */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,ZPos1 */
	ax = zpos1;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[P5],ax	;Ze = ZPos1 + (ZGX + ZGY) + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+12) = ax;
	// 0 ;--------------------------------------------
	// 0 ;* sub-divide to calc 1/4, 1/2 and 3/4 points
	// 0 ;--------------------------------------------
	// 0 ;* P3 = P1 + (P5 - P1) / 2
conttrackdraw:
	// 4421 
	/* ContTrackDraw:	mov	ax,Xe[P5] */
	ax = *(dw*)(((db*)&xe)+12);
	/* sub	ax,Xe[P1]	;(P5 - P1) */
	SUB(ax, *(dw*)(((db*)&xe)+4));
	/* sar	ax,1		;(P5 - P1) / 2 */
	SAR(ax, 1);
	/* mov	cx,ax */
	cx = ax;
	/* add	ax,Xe[P1]	;P1 + (P5 - P1) / 2 */
	ADD(ax, *(dw*)(((db*)&xe)+4));
	/* mov	Xe[P3],ax	;P3 = P1 + (P5 - P1) / 2 */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	ax,Ye[P5] */
	ax = *(dw*)(((db*)&ye)+12);
	/* sub	ax,Ye[P1]	;(P5 - P1) */
	SUB(ax, *(dw*)(((db*)&ye)+4));
	/* sar	ax,1		;(P5 - P1) / 2 */
	SAR(ax, 1);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,Ye[P1]	;P1 + (P5 - P1) / 2 */
	ADD(ax, *(dw*)(((db*)&ye)+4));
	/* mov	Ye[P3],ax	;P3 = P1 + (P5 - P1) / 2 */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	ax,Ze[P5] */
	ax = *(dw*)(((db*)&ze)+12);
	/* sub	ax,Ze[P1]	;(P5 - P1) */
	SUB(ax, *(dw*)(((db*)&ze)+4));
	/* sar	ax,1		;(P5 - P1) / 2 */
	SAR(ax, 1);
	/* mov	bp,ax */
	bp = ax;
	/* add	ax,Ze[P1]	;P1 + (P5 - P1) / 2 */
	ADD(ax, *(dw*)(((db*)&ze)+4));
	/* mov	Ze[P3],ax	;P3 = P1 + (P5 - P1) / 2 */
	*(dw*)(((db*)&ze)+8) = ax;
	// 0 ;* P2 = P1 + (P5 - P1) / 4
	/* sar	cx,1		;(P5 - P1) / 4 */
	SAR(cx, 1);
	/* mov	ax,Xe[P1] */
	ax = *(dw*)(((db*)&xe)+4);
	/* add	ax,cx		;P1 + (P5 - P1) / 4 */
	ADD(ax, cx);
	/* mov	Xe[P2],ax	;P2 = P1 + (P5 - P1) / 4 */
	*(dw*)(((db*)&xe)+6) = ax;
	/* sar	dx,1		;(P5 - P1) / 4 */
	SAR(dx, 1);
	/* mov	ax,Ye[P1] */
	ax = *(dw*)(((db*)&ye)+4);
	/* add	ax,dx		;P1 + (P5 - P1) / 4 */
	ADD(ax, dx);
	/* mov	Ye[P2],ax	;P2 = P1 + (P5 - P1) / 4 */
	*(dw*)(((db*)&ye)+6) = ax;
	/* sar	bp,1		;(P5 - P1) / 4 */
	SAR(bp, 1);
	/* mov	ax,Ze[P1] */
	ax = *(dw*)(((db*)&ze)+4);
	/* add	ax,bp		;P1 + (P5 - P1) / 4 */
	ADD(ax, bp);
	/* mov	Ze[P2],ax	;P2 = P1 + (P5 - P1) / 4 */
	*(dw*)(((db*)&ze)+6) = ax;
	// 0 ;* P4 = P5 - (P5 - P1) / 4
	/* mov	ax,Xe[P5] */
	ax = *(dw*)(((db*)&xe)+12);
	/* sub	ax,cx		;P5 - (P5 - P1) / 4 */
	SUB(ax, cx);
	/* mov	Xe[P4],ax	;P4 = P5 - (P5 - P1) / 4 */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	ax,Ye[P5] */
	ax = *(dw*)(((db*)&ye)+12);
	/* sub	ax,dx		;P5 - (P5 - P1) / 4 */
	SUB(ax, dx);
	/* mov	Ye[P4],ax	;P4 = P5 - (P5 - P1) / 4 */
	*(dw*)(((db*)&ye)+10) = ax;
	/* mov	ax,Ze[P5] */
	ax = *(dw*)(((db*)&ze)+12);
	/* sub	ax,bp		;P5 - (P5 - P1) / 4 */
	SUB(ax, bp);
	/* mov	Ze[P4],ax	;P4 = P5 - (P5 - P1) / 4 */
	*(dw*)(((db*)&ze)+10) = ax;
	// 0 ;-----------------------------------------------------------------
	// 0 ;* calc lh and rh track points (scaled independently wrt distance)
	// 0 ;-----------------------------------------------------------------
	/* mov	si,P1 */
	si = 4;
	/* mov	di,LH_P1 */
	di = 14;
	/* call	SortDoubleEnd */
	CALL(sortdoubleend, 0);
	/* mov	si,P2 */
	si = 6;
	/* mov	di,LH_P2 */
	di = 18;
	/* call	SortDoubleEnd */
	CALL(sortdoubleend, 0);
	/* mov	si,P3 */
	si = 8;
	/* mov	di,LH_P3 */
	di = 22;
	/* call	SortDoubleEnd */
	CALL(sortdoubleend, 0);
	/* mov	si,P4 */
	si = 10;
	/* mov	di,LH_P4 */
	di = 26;
	/* call	SortDoubleEnd */
	CALL(sortdoubleend, 0);
	/* mov	si,P5 */
	si = 12;
	/* mov	di,LH_P5 */
	di = 30;
	/* call	SortDoubleEnd */
	CALL(sortdoubleend, 0);
	// 0 ;-----------------
	// 0 ;* draw the tracks
	// 0 ;-----------------
	/* mov	ax,Xe[LH_P1] */
	ax = *(dw*)(((db*)&xe)+14);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[LH_P1] */
	ax = *(dw*)(((db*)&ye)+14);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[LH_P1] */
	ax = *(dw*)(((db*)&ze)+14);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[LH_P2] */
	ax = *(dw*)(((db*)&xe)+18);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[LH_P2] */
	ax = *(dw*)(((db*)&ye)+18);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[LH_P2] */
	ax = *(dw*)(((db*)&ze)+18);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel3;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
dummylabel3:
	// 4423 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+14););	// 1985 						mov	ax,Xe[LH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 1986 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+14););	// 1987 mov	ax,Ye[LH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 1988 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+14););	// 1989 mov	ax,Ze[LH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 1990 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+18););	// 1991 mov	ax,Xe[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 1992 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+18););	// 1993 mov	ax,Ye[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 1994 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+18););	// 1995 mov	ax,Ze[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 1996 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 1997 call	QuickLineClip */
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 1998 mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 1999 mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2000 mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2001 mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2002 call	LineDraw */
	/* mov	ax,Xe[LH_P2] */
	ax = *(dw*)(((db*)&xe)+18);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[LH_P2] */
	ax = *(dw*)(((db*)&ye)+18);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[LH_P2] */
	ax = *(dw*)(((db*)&ze)+18);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[LH_P3] */
	ax = *(dw*)(((db*)&xe)+22);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[LH_P3] */
	ax = *(dw*)(((db*)&ye)+22);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[LH_P3] */
	ax = *(dw*)(((db*)&ze)+22);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel4;}
	/* mov	al,COL_RAIL2 */
	al = 78;
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2018 						mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2019 						mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2020 						mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2021 						mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2022 						call	LineDraw */
dummylabel4:
	// 4425 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+18););	// 2024 						mov	ax,Xe[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2025 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+18););	// 2026 mov	ax,Ye[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2027 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+18););	// 2028 mov	ax,Ze[LH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2029 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+22););	// 2030 mov	ax,Xe[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2031 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+22););	// 2032 mov	ax,Ye[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2033 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+22););	// 2034 mov	ax,Ze[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2035 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2036 call	QuickLineClip */
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
	/* mov	ax,Xe[LH_P3] */
	ax = *(dw*)(((db*)&xe)+22);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[LH_P3] */
	ax = *(dw*)(((db*)&ye)+22);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[LH_P3] */
	ax = *(dw*)(((db*)&ze)+22);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[LH_P4] */
	ax = *(dw*)(((db*)&xe)+26);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[LH_P4] */
	ax = *(dw*)(((db*)&ye)+26);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[LH_P4] */
	ax = *(dw*)(((db*)&ze)+26);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel5;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
dummylabel5:
	// 4427 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+22););	// 2063 						mov	ax,Xe[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2064 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+22););	// 2065 mov	ax,Ye[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2066 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+22););	// 2067 mov	ax,Ze[LH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2068 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+26););	// 2069 mov	ax,Xe[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2070 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+26););	// 2071 mov	ax,Ye[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2072 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+26););	// 2073 mov	ax,Ze[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2074 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2075 call	QuickLineClip */
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2076 mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2077 mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2078 mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2079 mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2080 call	LineDraw */
	/* mov	ax,Xe[LH_P4] */
	ax = *(dw*)(((db*)&xe)+26);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[LH_P4] */
	ax = *(dw*)(((db*)&ye)+26);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[LH_P4] */
	ax = *(dw*)(((db*)&ze)+26);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[LH_P5] */
	ax = *(dw*)(((db*)&xe)+30);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[LH_P5] */
	ax = *(dw*)(((db*)&ye)+30);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[LH_P5] */
	ax = *(dw*)(((db*)&ze)+30);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel6;}
	/* mov	al,COL_RAIL2 */
	al = 78;
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2096 						mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2097 						mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2098 						mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2099 						mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2100 						call	LineDraw */
dummylabel6:
	// 4429 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+26););	// 2102 						mov	ax,Xe[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2103 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+26););	// 2104 mov	ax,Ye[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2105 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+26););	// 2106 mov	ax,Ze[LH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2107 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+30););	// 2108 mov	ax,Xe[LH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2109 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+30););	// 2110 mov	ax,Ye[LH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2111 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+30););	// 2112 mov	ax,Ze[LH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2113 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2114 call	QuickLineClip */
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
	/* mov	ax,Xe[RH_P1] */
	ax = *(dw*)(((db*)&xe)+16);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[RH_P1] */
	ax = *(dw*)(((db*)&ye)+16);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[RH_P1] */
	ax = *(dw*)(((db*)&ze)+16);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[RH_P2] */
	ax = *(dw*)(((db*)&xe)+20);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[RH_P2] */
	ax = *(dw*)(((db*)&ye)+20);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[RH_P2] */
	ax = *(dw*)(((db*)&ze)+20);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel7;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
dummylabel7:
	// 4431 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+16););	// 2142 						mov	ax,Xe[RH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2143 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+16););	// 2144 mov	ax,Ye[RH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2145 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+16););	// 2146 mov	ax,Ze[RH_P1] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2147 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+20););	// 2148 mov	ax,Xe[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2149 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+20););	// 2150 mov	ax,Ye[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2151 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+20););	// 2152 mov	ax,Ze[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2153 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2154 call	QuickLineClip */
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2155 mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2156 mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2157 mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2158 mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2159 call	LineDraw */
	/* mov	ax,Xe[RH_P2] */
	ax = *(dw*)(((db*)&xe)+20);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[RH_P2] */
	ax = *(dw*)(((db*)&ye)+20);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[RH_P2] */
	ax = *(dw*)(((db*)&ze)+20);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[RH_P3] */
	ax = *(dw*)(((db*)&xe)+24);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[RH_P3] */
	ax = *(dw*)(((db*)&ye)+24);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[RH_P3] */
	ax = *(dw*)(((db*)&ze)+24);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel8;}
	/* mov	al,COL_RAIL2 */
	al = 78;
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2175 						mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2176 						mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2177 						mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2178 						mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2179 						call	LineDraw */
dummylabel8:
	// 4433 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+20););	// 2181 						mov	ax,Xe[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2182 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+20););	// 2183 mov	ax,Ye[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2184 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+20););	// 2185 mov	ax,Ze[RH_P2] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2186 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+24););	// 2187 mov	ax,Xe[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2188 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+24););	// 2189 mov	ax,Ye[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2190 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+24););	// 2191 mov	ax,Ze[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2192 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2193 call	QuickLineClip */
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
	/* mov	ax,Xe[RH_P3] */
	ax = *(dw*)(((db*)&xe)+24);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[RH_P3] */
	ax = *(dw*)(((db*)&ye)+24);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[RH_P3] */
	ax = *(dw*)(((db*)&ze)+24);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[RH_P4] */
	ax = *(dw*)(((db*)&xe)+28);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[RH_P4] */
	ax = *(dw*)(((db*)&ye)+28);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[RH_P4] */
	ax = *(dw*)(((db*)&ze)+28);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel9;}
	/* mov	al,COL_RAIL2 */
	al = 78;
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
dummylabel9:
	// 4435 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+24););	// 2220 						mov	ax,Xe[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2221 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+24););	// 2222 mov	ax,Ye[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2223 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+24););	// 2224 mov	ax,Ze[RH_P3] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2225 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+28););	// 2226 mov	ax,Xe[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2227 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+28););	// 2228 mov	ax,Ye[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2229 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+28););	// 2230 mov	ax,Ze[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2231 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2232 call	QuickLineClip */
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2233 mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2234 mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2235 mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2236 mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2237 call	LineDraw */
	/* mov	ax,Xe[RH_P4] */
	ax = *(dw*)(((db*)&xe)+28);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[RH_P4] */
	ax = *(dw*)(((db*)&ye)+28);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[RH_P4] */
	ax = *(dw*)(((db*)&ze)+28);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[RH_P5] */
	ax = *(dw*)(((db*)&xe)+32);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[RH_P5] */
	ax = *(dw*)(((db*)&ye)+32);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[RH_P5] */
	ax = *(dw*)(((db*)&ze)+32);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	@F		;track non-visible -> */
	if (CF) {goto dummylabel10;}
	/* mov	al,COL_RAIL2 */
	al = 78;
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&xcrt)+0););	// 2253 						mov	cx,XCrt[0] */
/* m2c-phantom removed: 	R(bl = *((&ycrt)+0););	// 2254 						mov	bl,YCrt[0] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&xcrt)+2););	// 2255 						mov	dx,XCrt[2] */
/* m2c-phantom removed: 	R(bh = *((&ycrt)+2););	// 2256 						mov	bh,YCrt[2] */
/* m2c-phantom removed: 	J(CALLF(linedraw,0));	// 2257 						call	LineDraw */
dummylabel10:
	// 4437 
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+28););	// 2259 						mov	ax,Xe[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+0) = ax;);	// 2260 mov	Xe[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+28););	// 2261 mov	ax,Ye[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+0) = ax;);	// 2262 mov	Ye[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+28););	// 2263 mov	ax,Ze[RH_P4] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+0) = ax;);	// 2264 mov	Ze[0],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&xe)+32););	// 2265 mov	ax,Xe[RH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&xe)+2) = ax;);	// 2266 mov	Xe[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ye)+32););	// 2267 mov	ax,Ye[RH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ye)+2) = ax;);	// 2268 mov	Ye[2],ax */
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&ze)+32););	// 2269 mov	ax,Ze[RH_P5] */
/* m2c-phantom removed: 	R(*(dw*)(((db*)&ze)+2) = ax;);	// 2270 mov	Ze[2],ax */
/* m2c-phantom removed: 	J(CALL(quicklineclip,0));	// 2271 call	QuickLineClip */
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
	/* ret */
	RETN(0);
doubletrack2:
	// 2287 
	/* mov	si,RailLength2[bx] ;* kill: assume all */
	si = *(dw*)(((db*)&raillength2)+bx);
edummylabel11:
	// 4439 
	/* mov	di,RailLength2[bx+2] */
	di = *(dw*)(((db*)&raillength2)+bx+2);
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
	/* mov	si,STrackEnd2[bx+0]	;x1 */
	si = *(dw*)(((db*)&strackend2)+bx+0);
	/* mov	di,STrackEnd2[bx+2]	;y1 */
	di = *(dw*)(((db*)&strackend2)+bx+2);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* mov	Xe[P1],ax	;Xe = XPos2 + (XGX + XGY) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* mov	Ye[P1],ax	;Ye = YPos2 + (YGX + YGY) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* mov	Ze[P1],ax	;Ze = ZPos2 + (ZGX + ZGY) */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	si,STrackEnd2[bx+4]	;x2 */
	si = *(dw*)(((db*)&strackend2)+bx+4);
	/* mov	di,STrackEnd2[bx+6]	;y2 */
	di = *(dw*)(((db*)&strackend2)+bx+6);
	/* mov	ax,XPos2 */
	ax = xpos2;
	/* add	ax,XGX[si] */
	ADD(ax, *(dw*)(((db*)&xgx)+si));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	Xe[P5],ax	;Xe = XPos2 + (XGX + XGY) + (XSX + XSY) */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* add	ax,YGX[si] */
	ADD(ax, *(dw*)(((db*)&ygx)+si));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[P5],ax	;Ye = YPos2 + (YGX + YGY) + (YSX + YSY) */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,ZPos2 */
	ax = zpos2;
	/* add	ax,ZGX[si] */
	ADD(ax, *(dw*)(((db*)&zgx)+si));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[P5],ax	;Ze = ZPos2 + (ZGX + ZGY) + (ZSX + ZSY) */
	*(dw*)(((db*)&ze)+12) = ax;
	/* jmp	ContTrackDraw	;>>>>> return via DoubleTrack1 >>>>> */
	goto conttrackdraw;
sortdoubleend:
	// 2345 
	// 0 ;----------------------------------
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	// 0 ;----------------------------------
edummylabel12:
	// 4441 
	/* mov	ax,Ze[si] */
	ax = *(dw*)(((db*)&ze)+si);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bp,ax		;bp = abs(z) */
	bp = ax;
	/* mov	ax,Ye[si] */
	ax = *(dw*)(((db*)&ye)+si);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cx,ax		;cx = abs(y) */
	cx = ax;
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x)
	/* cmp	ax,cx		;abs(x) >= abs(y)? */
	CMP(ax, cx);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto dummylabel11;}
	/* mov	ax,cx */
	ax = cx;
dummylabel11:
	// 4443 
	/* @@:		cmp	ax,bp		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, bp);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(bp)) {goto dummylabel12;}
	/* mov	ax,bp */
	ax = bp;
	// 0 ;--------------------------------
	// 0 ;* calc scaling mode wrt distance
	// 0 ;--------------------------------
	// 0 ;* note: To ensure that no clipping errors occur, the scaling distances have
	// 0 ;*       been calculated using 3D Euclidian distances:-
	// 0 ;*
	// 0 ;*       max dist = sqrt(sqr(dx) + sqr(dy) + sqr(dz))
	// 0 ;*
	// 0 ;*       where d = dx = dy = dz
	// 0 ;*
	// 0 ;*       max dist = sqrt(3 * sqr(d))
	// 0 ;*
	// 0 ;*	 d = sqrt(sqr(max dist) / 3)
	// 0 ;*
	// 0 ;*       However, ze is scaled (worst case ze * 2.5 for INT_VIEWMODE).
	// 0 ;*
	// 0 ;*       Therefore, dz at worst would be 2.5 * 2 * dz = 5 * dz.
	// 0 ;*
	// 0 ;*       max dist = sqrt(sqr(dx) + sqr(y) + 5 * sqr(dz))
	// 0 ;*
	// 0 ;*       where d = dx = dy = dz
	// 0 ;*
	// 0 ;*       max dist = sqrt(7 * sqr(d))
	// 0 ;*
	// 0 ;*	 d = sqrt(sqr(max dist) / 7)
	// 0 ;*
	// 0 ;*       max dist = 1024, d = sqrt(sqr(1024) / 7) = 387
	// 0 ;*       max dist = 2048, d = sqrt(sqr(2048) / 7) = 774
	// 0 ;*       max dist = 4096, d = sqrt(sqr(4096) / 7) = 1548
	// 0 ;*       max dist = 8192, d = sqrt(sqr(8192) / 7) = 3096
dummylabel12:
	// 4445 
	/* @@:		mov	cx,TrackScale	;cl = position scale, ch = offset scale */
	cx = trackscale;
	/* cmp	ax,387		;*16 scaling ok? */
	CMP(ax, 387);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(387)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,774		;*8 scaling ok? */
	CMP(ax, 774);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(774)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,1548		;*4 scaling ok? */
	CMP(ax, 1548);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(1548)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,3096		;*2 scaling ok? */
	CMP(ax, 3096);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(3096)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	// 0 ;-------------------
	// 0 ;* sort lh end point
	// 0 ;-------------------
scaleok:
	// 4447 
	/* ScaleOk:	push	bx		;store offset index */
	PUSH(bx);
	/* push	si		;store point index */
	PUSH(si);
	/* push	di  		;store result index */
	PUSH(di);
	/* mov	di,Xe[si]	;x pos */
	di = *(dw*)(((db*)&xe)+si);
	/* mov	dx,Ye[si]	;y pos */
	dx = *(dw*)(((db*)&ye)+si);
	/* mov	bp,Ze[si]	;z pos */
	bp = *(dw*)(((db*)&ze)+si);
	/* sal	di,cl		;scale x pos */
	SAL(di, cl);
	/* sal	dx,cl		;scale y pos */
	SAL(dx, cl);
	/* sal	bp,cl		;scale z pos */
	SAL(bp, cl);
	/* xchg	cl,ch		;cl = offset scale, ch = position scale */
	XCHG(cl, ch);
	/* mov	si,DTrackEnd16[bx+0]	;xl */
	si = *(dw*)(((db*)&dtrackend16)+bx+0);
	/* mov	bx,DTrackEnd16[bx+2]	;yl */
	bx = *(dw*)(((db*)&dtrackend16)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,cl  		;scale x offset */
	SAR(ax, cl);
	/* add	ax,di */
	ADD(ax, di);
	/* pop	di 		;restore result index */
	POP(di);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,cl	    	;scale y offset */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,cl		;scale z offset */
	SAR(ax, cl);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* xchg	cl,ch		;cl = position scale, ch = offset scale */
	XCHG(cl, ch);
	/* add	di,2		;di indexes rh point result */
	ADD(di, 2);
	/* pop	si  		;restore point index */
	POP(si);
	/* pop	bx		;restore offset index */
	POP(bx);
	// 0 ;-------------------
	// 0 ;* sort rh end point
	// 0 ;-------------------
	/* push	bx		;store offset index */
	PUSH(bx);
	/* push	di  		;store result index */
	PUSH(di);
	/* mov	di,Xe[si]	;x pos */
	di = *(dw*)(((db*)&xe)+si);
	/* mov	dx,Ye[si]	;y pos */
	dx = *(dw*)(((db*)&ye)+si);
	/* mov	bp,Ze[si]	;z pos */
	bp = *(dw*)(((db*)&ze)+si);
	/* sal	di,cl		;scale x pos */
	SAL(di, cl);
	/* sal	dx,cl		;scale y pos */
	SAL(dx, cl);
	/* sal	bp,cl		;scale z pos */
	SAL(bp, cl);
	/* xchg	cl,ch		;cl = offset scale, ch = position scale */
	XCHG(cl, ch);
	/* mov	si,DTrackEnd16[bx+4]	;xr */
	si = *(dw*)(((db*)&dtrackend16)+bx+4);
	/* mov	bx,DTrackEnd16[bx+6]	;yr */
	bx = *(dw*)(((db*)&dtrackend16)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,cl	     	;scale x offset */
	SAR(ax, cl);
	/* add	ax,di */
	ADD(ax, di);
	/* pop	di 		;restore result index */
	POP(di);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,cl		;scale y offset */
	SAR(ax, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,cl		;scale z offset */
	SAR(ax, cl);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	bx		;restore offset index */
	POP(bx);
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
                case m2c::kconttrackdraw: 	goto conttrackdraw;
        case m2c::kdoubletrack1: 	goto doubletrack1;
        case m2c::kdoubletrack2: 	goto doubletrack2;
        case m2c::kdrawnextrail: 	goto drawnextrail;
        case m2c::kdrawnexttrack: 	goto drawnexttrack;
        case m2c::kdrawrailsexit1: 	goto drawrailsexit1;
        case m2c::kdrawrailsexit2: 	goto drawrailsexit2;
        case m2c::kdrawrailways: 	goto drawrailways;
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
        case m2c::kexitlinerail1: 	goto exitlinerail1;
        case m2c::kexitlinerail16: 	goto exitlinerail16;
        case m2c::kexitlinerail2: 	goto exitlinerail2;
        case m2c::kexitlinerail8: 	goto exitlinerail8;
        case m2c::kexitpolyrail1: 	goto exitpolyrail1;
        case m2c::kexitpolyrail2: 	goto exitpolyrail2;
        case m2c::kexitsingle1: 	goto exitsingle1;
        case m2c::kexitsingle2: 	goto exitsingle2;
        case m2c::klinerail1: 	goto linerail1;
        case m2c::klinerail16: 	goto linerail16;
        case m2c::klinerail2: 	goto linerail2;
        case m2c::klinerail8: 	goto linerail8;
        case m2c::kpolyrail1: 	goto polyrail1;
        case m2c::kpolyrail2: 	goto polyrail2;
        case m2c::kscaleok: 	goto scaleok;
        case m2c::ksingletrack1: 	goto singletrack1;
        case m2c::ksingletrack2: 	goto singletrack2;
        case m2c::kskiprail: 	goto skiprail;
        case m2c::kskiptrack: 	goto skiptrack;
        case m2c::ksortdoubleend: 	goto sortdoubleend;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}

