/* THIS IS GENERATED FILE */

        
#include "rwy_taxi.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawrunways:
	// 1160 
nextrunway:
	// 4369 
	/* NextRunway:	cmp	RWY_DIR[si],-1	;end of list? */
	CMP(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)), -1);
	/* je	ExitRunways	;yes -> */
	if ((dw)(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir))) == (dw)(-1)) {goto exitrunways;}
	/* mov	RwyLightsOn,0	;assume no lights */
	rwylightson = 0;
	// 0 ;* if last runway in list then assume active runway
	/* cmp	RWY_REC_SIZE+RWY_DIR[si],-1	;last runway in list? */
	CMP(*(dw*)(((db*)&((runway*)raddr(ds,12+si))->rwy_dir)), -1);
	/* jne	LightsOk			;no -> */
	if ((dw)(*(dw*)(((db*)&((runway*)raddr(ds,12+si))->rwy_dir))) != (dw)(-1)) {goto lightsok;}
	// 0 ;* runway lights on if active runway and (night or fog)
	/* mov	al,Night */
	al = night;
	/* or	al,Fog		;night or fog? */
	OR(al, fog);
	/* jz	LightsOk	;no -> */
	if (al == 0) {goto lightsok;}
	// 0 ;* runway lights always visible at near range (as are taxiway lights)
	/* cmp	SctrScaleMode,SEC_SCALE16	;near range? */
	CMP(sctrscalemode, 6);
	/* jne	LightsOn			;yes -> */
	if ((dw)(sctrscalemode) != (dw)(6)) {goto lightson;}
	// 0 ;* runway lights less visible if looking at runway "side on"
	/* cmp	[si].RWY_DIR,RWY_1836	;n-s runway? */
	CMP(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir)), 0*8);
	/* je	CheckNS			;yes -> */
	if ((dw)(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir))) == (dw)(0*8)) {goto checkns;}
	/* cmp	[si].RWY_DIR,RWY_0927	;e-w runway? */
	CMP(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir)), 2*8);
	/* jne	LightsOk		;no -> */
	if ((dw)(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir))) != (dw)(2*8)) {goto lightsok;}
	// 0 ;* e-w runway, check abs(YSecScan - V_VIEW.VP_YSEC) <= 3
checkew:
	// 4371 
	/* CheckEW:	mov	ax,YSecScan */
	ax = ysecscan;
	/* sub	ax,V_VIEW.VP_YSEC */
	SUB(ax, v_view.vp_ysec);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,3 */
	CMP(ax, 3);
	/* ja	LightsOk */
	if ((dw)(ax) > (dw)(3)) {goto lightsok;}
	/* jmp	LightsOn */
	goto lightson;
	// 0 ;* n-s runway, check abs(XSecScan - V_VIEW.VP_XSEC) <= 3
checkns:
	// 4373 
	/* CheckNS:	mov	ax,XSecScan */
	ax = xsecscan;
	/* sub	ax,V_VIEW.VP_XSEC */
	SUB(ax, v_view.vp_xsec);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,3 */
	CMP(ax, 3);
	/* ja	LightsOk */
	if ((dw)(ax) > (dw)(3)) {goto lightsok;}
	// 0 ;LightsOn:	mov	RwyLightsOn,1	;lights on
lightson:
	// 4375 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel1;}
	/* mov	RwyLightsOn,0 ;lights off! */
	rwylightson = 0;
	/* jmp SkipRwyLightsOn */
	goto skiprwylightson;
dummylabel1:
	// 4377 
	/* mov	RwyLightsOn,1	;lights on = 1, The airfield is a friendly. */
	rwylightson = 1;
	// 0 ;Show all lights. Assume that at the last minute, they were switched on for me to land!
skiprwylightson:
	// 4379 
lightsok:
	// 4381 
	/* LightsOk:	push	si */
	PUSH(si);
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* call	SortRunway[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&sortrunway)+bx));
	/* pop	si */
	POP(si);
	/* add	si,RWY_REC_SIZE */
	ADD(si, 12);
	/* jmp	NextRunway */
	goto nextrunway;
exitrunways:
	// 4383 
	/* ExitRunways:	ret */
	RETN(0);
sortrunway1:
	// 1230 
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	// 0 ;------------
	// 0 ;* sort end 1
	// 0 ;------------
edummylabel1:
	// 4385 
	/* mov	bx,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[0],ax  	;XPos1 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[0],ax      	;YPos1 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[0],ax 	;ZPos1 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	Ze[8],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+8) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[6],ax	;XPos1 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[6],ax       	;YPos1 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[6],ax	;ZPos1 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	Ze[14],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+14) = ax;
	// 0 ;------------
	// 0 ;* sort end 2
	// 0 ;------------
	/* mov	bx,RWY_X2[si]	;fetch end 2 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y2[si]	;fetch end 2 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[2],ax  	;XPos1 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[2],ax      	;YPos1 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[2],ax 	;ZPos1 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	Ze[10],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+10) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* add	ax,XPos1 */
	ADD(ax, xpos1);
	/* mov	Xe[4],ax	;XPos1 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* add	ax,YPos1 */
	ADD(ax, ypos1);
	/* mov	Ye[4],ax       	;YPos1 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* add	ax,ZPos1 */
	ADD(ax, zpos1);
	/* mov	Ze[4],ax	;ZPos1 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	Ze[12],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+12) = ax;
	// 0 ;--------------------------
	// 0 ;* draw runway (if visible)
	// 0 ;--------------------------
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ContRunway1	;runway non-visible -> */
	if (CF) {goto contrunway1;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ContRunway1	;runway non-visible -> */
	if (CF) {goto contrunway1;}
	/* mov	al,COL_RWY1 */
	al = 74;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* call	DrawRwyLights1 */
	CALL(drawrwylights1, 0);
	// 0 ;----------------------
	// 0 ;* draw approach lights
	// 0 ;----------------------
contrunway1:
	// 4387 
	/* ContRunway1:	pop	si		;restore RUNWAY ptr */
	POP(si);
	/* test	RwyLightsOn,1	;runway lights on? */
	TEST(rwylightson, 1);
	/* jnz	__m2c_macrolocal_3_skip */
	if ((rwylightson & 1) != 0) {goto __m2c_macrolocal_3_skip;}
	/* jmp	ExitRunway1 */
	goto exitrunway1;
__m2c_macrolocal_3_skip:
	// 4389 
	// 0 ;no ->
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 1
	// 0 ;----------------------------
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+4] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+4));
	/* add	di,ApprLightPoints[bx+6] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+6));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights1 */
	CALL(drawapprlights1, 0);
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 2
	// 0 ;----------------------------
	/* pop	si		;restore RUNWAY ptr */
	POP(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y2[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X2[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+4] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+4);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+6] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+6);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XPos1     	;XPos1 + XSX + XSY */
	ADD(ax, xpos1);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YPos1	;YPos1 + YSX + YSY */
	ADD(ax, ypos1);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(ax, zpos1);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights1 */
	CALL(drawapprlights1, 0);
exitrunway1:
	// 4391 
	/* ExitRunway1:	ret */
	RETN(0);
sortrunway2:
	// 1543 
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	// 0 ;------------
	// 0 ;* sort end 1
	// 0 ;------------
edummylabel2:
	// 4393 
	/* mov	bx,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[0],ax  	;XPos2 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[0],ax      	;YPos2 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[0],ax 	;ZPos2 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	Ze[8],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+8) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[6],ax	;XPos2 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[6],ax       	;YPos2 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[6],ax	;ZPos2 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	Ze[14],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+14) = ax;
	// 0 ;------------
	// 0 ;* sort end 2
	// 0 ;------------
	/* mov	bx,RWY_X2[si]	;fetch end 2 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y2[si]	;fetch end 2 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[2],ax  	;XPos2 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[2],ax      	;YPos2 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[2],ax 	;ZPos2 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	Ze[10],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+10) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2 */
	ADD(ax, xpos2);
	/* mov	Xe[4],ax	;XPos2 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2 */
	ADD(ax, ypos2);
	/* mov	Ye[4],ax       	;YPos2 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2 */
	ADD(ax, zpos2);
	/* mov	Ze[4],ax	;ZPos2 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	Ze[12],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+12) = ax;
	// 0 ;--------------------------
	// 0 ;* draw runway (if visible)
	// 0 ;--------------------------
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ContRunway2	;runway non-visible -> */
	if (CF) {goto contrunway2;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ContRunway2	;runway non-visible -> */
	if (CF) {goto contrunway2;}
	/* mov	al,COL_RWY1 */
	al = 74;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* call	DrawRwyLights2 */
	CALL(drawrwylights2, 0);
	// 0 ;----------------------
	// 0 ;* draw approach lights
	// 0 ;----------------------
contrunway2:
	// 4395 
	/* ContRunway2:	pop	si		;restore RUNWAY ptr */
	POP(si);
	/* test	RwyLightsOn,1	;runway lights on? */
	TEST(rwylightson, 1);
	/* jnz	__m2c_macrolocal_4_skip */
	if ((rwylightson & 1) != 0) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ExitRunway2 */
	goto exitrunway2;
__m2c_macrolocal_4_skip:
	// 4397 
	// 0 ;no ->
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 1
	// 0 ;----------------------------
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+4] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+4));
	/* add	di,ApprLightPoints[bx+6] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+6));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights2 */
	CALL(drawapprlights2, 0);
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 2
	// 0 ;----------------------------
	/* pop	si		;restore RUNWAY ptr */
	POP(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y2[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X2[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+4] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+4);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+6] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+6);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos2     	;XPos2 + XSX + XSY */
	ADD(ax, xpos2);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos2	;YPos2 + YSX + YSY */
	ADD(ax, ypos2);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(ax, zpos2);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights2 */
	CALL(drawapprlights2, 0);
exitrunway2:
	// 4399 
	/* ExitRunway2:	ret */
	RETN(0);
sortrunway8:
	// 1892 
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	// 0 ;------------
	// 0 ;* sort end 1
	// 0 ;------------
edummylabel3:
	// 4401 
	/* mov	bx,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8 */
	ADD(ax, xpos8);
	/* mov	Xe[0],ax  	;XPos8 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8 */
	ADD(ax, ypos8);
	/* mov	Ye[0],ax      	;YPos8 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8 */
	ADD(ax, zpos8);
	/* mov	Ze[0],ax 	;ZPos8 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	Ze[8],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+8) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8 */
	ADD(ax, xpos8);
	/* mov	Xe[6],ax	;XPos8 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8 */
	ADD(ax, ypos8);
	/* mov	Ye[6],ax       	;YPos8 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8 */
	ADD(ax, zpos8);
	/* mov	Ze[6],ax	;ZPos8 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	Ze[14],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+14) = ax;
	// 0 ;------------
	// 0 ;* sort end 2
	// 0 ;------------
	/* mov	bx,RWY_X2[si]	;fetch end 2 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y2[si]	;fetch end 2 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	cx,XSX[bx] */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* add	cx,XSY[di]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+di));
	/* mov	dx,YSX[bx] */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* add	dx,YSY[di]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+di));
	/* mov	bp,ZSX[bx] */
	bp = *(dw*)(((db*)&zsx)+bx);
	/* add	bp,ZSY[di]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+di));
	// 0 ;* sort pointer to end data wrt runway width and direction
	/* mov	bx,RWY_WIDTH[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	bx,RunwayWidth[bx] */
	bx = *(dw*)(((db*)&runwaywidth)+bx);
	/* add	bx,RWY_DIR[si] */
	ADD(bx, *(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* push	bx		;store end data pointer */
	PUSH(bx);
	/* mov	di,[bx+2]     	;yl */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+2)));
	/* mov	bx,[bx+0]     	;xl */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+0)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8 */
	ADD(ax, xpos8);
	/* mov	Xe[2],ax  	;XPos8 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8 */
	ADD(ax, ypos8);
	/* mov	Ye[2],ax      	;YPos8 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8 */
	ADD(ax, zpos8);
	/* mov	Ze[2],ax 	;ZPos8 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	Ze[10],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+10) = ax;
	/* pop	bx		;restore end data pointer */
	POP(bx);
	/* mov	di,[bx+6]	;yr */
	di = m2c::getdata(*(dw*)(raddr(ds,bx+6)));
	/* mov	bx,[bx+4]	;xr */
	bx = m2c::getdata(*(dw*)(raddr(ds,bx+4)));
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,XGX[bx] */
	ADD(ax, *(dw*)(((db*)&xgx)+bx));
	/* add	ax,XGY[di] */
	ADD(ax, *(dw*)(((db*)&xgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8 */
	ADD(ax, xpos8);
	/* mov	Xe[4],ax	;XPos8 + XSX + XSY + XGX + XGY */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,YGX[bx] */
	ADD(ax, *(dw*)(((db*)&ygx)+bx));
	/* add	ax,YGY[di] */
	ADD(ax, *(dw*)(((db*)&ygy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8 */
	ADD(ax, ypos8);
	/* mov	Ye[4],ax       	;YPos8 + YSX + YSY + YGX + YGY */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,ZGX[bx] */
	ADD(ax, *(dw*)(((db*)&zgx)+bx));
	/* add	ax,ZGY[di] */
	ADD(ax, *(dw*)(((db*)&zgy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8 */
	ADD(ax, zpos8);
	/* mov	Ze[4],ax	;ZPos8 + ZSX + ZSY + ZGX + ZGY */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	Ze[12],ax	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+12) = ax;
	// 0 ;--------------------------
	// 0 ;* draw runway (if visible)
	// 0 ;--------------------------
	/* mov	si,6 */
	si = 6;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ContRunway8	;runway non-visible -> */
	if (CF) {goto contrunway8;}
	/* mov	si,OFFSET StndPoly4 */
	si = m2c::near_offset_external(stndpoly4);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	ContRunway8	;runway non-visible -> */
	if (CF) {goto contrunway8;}
	/* mov	al,COL_RWY1 */
	al = 74;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* call	DrawRwyLights8 */
	CALL(drawrwylights8, 0);
	// 0 ;----------------------
	// 0 ;* draw approach lights
	// 0 ;----------------------
contrunway8:
	// 4403 
	/* ContRunway8:	pop	si		;restore RUNWAY ptr */
	POP(si);
	/* test	RwyLightsOn,1	;runway lights on? */
	TEST(rwylightson, 1);
	/* jnz	__m2c_macrolocal_5_skip */
	if ((rwylightson & 1) != 0) {goto __m2c_macrolocal_5_skip;}
	/* jmp	ExitRunway8 */
	goto exitrunway8;
__m2c_macrolocal_5_skip:
	// 4405 
	// 0 ;no ->
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 1
	// 0 ;----------------------------
	/* push	si		;store RUNWAY ptr */
	PUSH(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+4] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+4));
	/* add	di,ApprLightPoints[bx+6] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+6));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights8 */
	CALL(drawapprlights8, 0);
	// 0 ;----------------------------
	// 0 ;* sort approach lights end 2
	// 0 ;----------------------------
	/* pop	si		;restore RUNWAY ptr */
	POP(si);
	/* mov	bx,RWY_DIR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* mov	di,RWY_Y2[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	si,RWY_X2[si]	;fetch end 1 x co-ord (0 .. 64) */
	si = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	si,1		;0 .. 128 */
	SHL(si, 1);
	/* add	si,64		;64 .. 192 */
	ADD(si, 64);
	/* mov	cx,si */
	cx = si;
	/* mov	dx,di */
	dx = di;
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[252],ax */
	*(dw*)(((db*)&xe)+252) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[252],ax */
	*(dw*)(((db*)&ye)+252) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[252],ax */
	*(dw*)(((db*)&ze)+252) = ax;
	/* mov	ax,ApprLightPoints[bx+0] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+0);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+2] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+2);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[248],ax */
	*(dw*)(((db*)&xe)+248) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[248],ax */
	*(dw*)(((db*)&ye)+248) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[248],ax */
	*(dw*)(((db*)&ze)+248) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* add	si,ApprLightPoints[bx+0] */
	ADD(si, *(dw*)(((db*)apprlightpoints)+bx+0));
	/* add	di,ApprLightPoints[bx+2] */
	ADD(di, *(dw*)(((db*)apprlightpoints)+bx+2));
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[250],ax */
	*(dw*)(((db*)&xe)+250) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[250],ax */
	*(dw*)(((db*)&ye)+250) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[250],ax */
	*(dw*)(((db*)&ze)+250) = ax;
	/* mov	si,cx */
	si = cx;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,ApprLightPoints[bx+4] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+4);
	/* neg	ax */
	NEG(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,ApprLightPoints[bx+6] */
	ax = *(dw*)(((db*)apprlightpoints)+bx+6);
	/* neg	ax */
	NEG(ax);
	/* add	di,ax */
	ADD(di, ax);
	/* mov	ax,XSX[si] */
	ax = *(dw*)(((db*)&xsx)+si);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,XPos8     	;XPos8 + XSX + XSY */
	ADD(ax, xpos8);
	/* mov	Xe[254],ax */
	*(dw*)(((db*)&xe)+254) = ax;
	/* mov	ax,YSX[si] */
	ax = *(dw*)(((db*)&ysx)+si);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,YPos8	;YPos8 + YSX + YSY */
	ADD(ax, ypos8);
	/* mov	Ye[254],ax */
	*(dw*)(((db*)&ye)+254) = ax;
	/* mov	ax,ZSX[si] */
	ax = *(dw*)(((db*)&zsx)+si);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(ax, zpos8);
	/* mov	Ze[254],ax */
	*(dw*)(((db*)&ze)+254) = ax;
	/* call	DrawApprLights8 */
	CALL(drawapprlights8, 0);
exitrunway8:
	// 4407 
	/* ExitRunway8:	ret */
	RETN(0);
sortrunway16:
	// 2313 
	// 0 ;------------
	// 0 ;* sort end 1
	// 0 ;------------
edummylabel4:
	// 4409 
	/* mov	bx,RWY_X1[si]	;fetch end 1 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y1[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	ax,XSX[bx] */
	ax = *(dw*)(((db*)&xsx)+bx);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,XPos16 */
	ADD(ax, xpos16);
	/* mov	Xe[0],ax 	;XPos16 + XSX + XSY */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[4],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,YSX[bx] */
	ax = *(dw*)(((db*)&ysx)+bx);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,YPos16 */
	ADD(ax, ypos16);
	/* mov	Ye[0],ax 	;YPos16 + YSX + YSY */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[4],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,ZSX[bx] */
	ax = *(dw*)(((db*)&zsx)+bx);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos16 */
	ADD(ax, zpos16);
	/* mov	Ze[0],ax 	;ZPos16 + ZSX + ZSY */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	Ze[4],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+4) = ax;
	// 0 ;------------
	// 0 ;* sort end 2
	// 0 ;------------
	/* mov	bx,RWY_X2[si]	;fetch end 1 x co-ord (0 .. 64) */
	bx = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* shl	bx,1		;0 .. 128 */
	SHL(bx, 1);
	/* add	bx,64		;64 .. 192 */
	ADD(bx, 64);
	/* mov	di,RWY_Y2[si]	;fetch end 1 y co-ord (0 .. 64) */
	di = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* shl	di,1		;0 .. 128 */
	SHL(di, 1);
	/* add	di,64		;64 .. 192 */
	ADD(di, 64);
	/* mov	ax,XSX[bx] */
	ax = *(dw*)(((db*)&xsx)+bx);
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,XPos16 */
	ADD(ax, xpos16);
	/* mov	Xe[2],ax 	;XPos16 + XSX + XSY */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	Xe[6],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YSX[bx] */
	ax = *(dw*)(((db*)&ysx)+bx);
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,YPos16 */
	ADD(ax, ypos16);
	/* mov	Ye[2],ax 	;YPos16 + YSX + YSY */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	Ye[6],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,ZSX[bx] */
	ax = *(dw*)(((db*)&zsx)+bx);
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos16 */
	ADD(ax, zpos16);
	/* mov	Ze[2],ax 	;ZPos16 + ZSX + ZSY */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	Ze[6],ax 	;(preserve for runway lights) */
	*(dw*)(((db*)&ze)+6) = ax;
	/* call	QuickLineClip */
	CALL(quicklineclip, 0);
	/* jc	ExitRunway16	;runway non-visible -> */
	if (CF) {goto exitrunway16;}
	/* test	RwyLightsOn,1	;runway lights on? */
	TEST(rwylightson, 1);
	/* jnz	@F		;yes -> */
	if ((rwylightson & 1) != 0) {goto dummylabel2;}
	/* mov	al,COL_RWY1 */
	al = 74;
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
	/* jmp	ExitRunway16 */
	goto exitrunway16;
dummylabel2:
	// 4411 
	/* @@:		call	DrawRwyLights16 */
	CALL(drawrwylights16, 0);
exitrunway16:
	// 4413 
	/* ExitRunway16:	ret */
	RETN(0);
viscode_0_proc:
	// 2411 
exittaxiways1:
	// 4415 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
drawtaxiways:
	// 2413 
	// 0 ;* do not draw taxiways in SEC_SCALE16 visual
edummylabel5:
	// 4417 
	/* mov	ax,SctrScaleMode */
	ax = sctrscalemode;
	/* cmp	ax,SEC_SCALE16 */
	CMP(ax, 6);
	/* je	ExitTaxiways1 */
	if ((dw)(ax) == (dw)(6)) {goto exittaxiways1;}
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* if SctrScaleMode < SEC_SCALE8 and ZFT < Z_APPROX_THRESH then
	// 0 ;*    draw polygon taxiways
	// 0 ;* else
	// 0 ;*    draw line taxiways
	// 0 ;* end
	/* cmp	ax,SEC_SCALE8 */
	CMP(ax, 4);
	/* je	ContLines */
	if ((dw)(ax) == (dw)(4)) {goto contlines;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	ax,ax		;zft > 65,535ft? */
	TEST(ax, ax);
	/* jnz	ContLines	;yes -> */
	if ((ax & ax) != 0) {goto contlines;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,Z_APPROX_THRES */
	CMP(ax, 8192);
	/* jae	__m2c_macrolocal_6_skip */
	if ((dw)(ax) >= (dw)(8192)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	ContPolys */
	goto contpolys;
__m2c_macrolocal_6_skip:
	// 4419 
	// 0 ;------------------------
	// 0 ;* draw taxiways as lines
	// 0 ;------------------------
contlines:
	// 4421 
	/* ContLines:	mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* scan vertex list and calculate eye co-ord data wrt sector scale mode
	/* call	ScanVertexList[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&scanvertexlist)+bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	VertexIndex,di */
	vertexindex = di;
	// 0 ;* test if taxiways are visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitTaxiways2	;taxiways non-visible -> */
	if (CF) {goto exittaxiways2;}
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to even face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2465 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2467 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2468 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2469 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* generate faces
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextlineface:
	// 4423 
	/* NextLineFace:	lodsb		    	;fetch logical colour */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	TaxiLights1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto taxilights1;}
	/* mov	Col1,al */
	col1 = al;
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	NextLineFace	;lines non-visible -> */
	if (CF) {goto nextlineface;}
	/* push	si */
	PUSH(si);
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyLine */
	CALLF(polyline, 0);
	/* pop	si */
	POP(si);
	/* jmp	NextLineFace */
	goto nextlineface;
	// 0 ;---------------------
	// 0 ;* draw taxiway lights
	// 0 ;---------------------
taxilights1:
	// 4425 
	/* TaxiLights1:	mov	al,Night */
	al = night;
	/* or	al,Fog		;night or fog? */
	OR(al, fog);
	/* jz	ExitTaxiways2	;no -> */
	if (al == 0) {goto exittaxiways2;}
	/* mov	si,VertexIndex */
	si = vertexindex;
	/* call	PolyDotClip */
	CALL(polydotclip, 0);
	/* mov	si,VertexIndex */
	si = vertexindex;
taxilightslp1:
	// 4427 
	/* TaxiLightsLp1:	mov	cx,XCrt[si] */
	cx = *(dw*)(((db*)&xcrt)+si);
	/* cmp	cx,-1		;visible? */
	CMP(cx, -1);
	/* je	@F		;no -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel3;}
	/* mov	bl,YCrt[si] */
	bl = *((&ycrt)+si);
	/* mov	al,RwyLightCol */
	al = rwylightcol;
	/* push	si */
	PUSH(si);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
dummylabel3:
	// 4429 
	/* @@:		sub	si,2 */
	SUB(si, 2);
	/* jnc	TaxiLightsLp1 */
	if (!CF) {goto taxilightslp1;}
exittaxiways2:
	// 4431 
	/* ExitTaxiways2:	ret */
	RETN(0);
	// 0 ;---------------------------
	// 0 ;* draw taxiways as polygons
	// 0 ;---------------------------
contpolys:
	// 4433 
	/* ContPolys:	mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* scan vertex list and calculate eye co-ord data wrt sector scale mode
	/* call	MakeVertex[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&makevertex)+bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	VertexIndex,di */
	vertexindex = di;
	// 0 ;* test if taxiway is visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitTaxiways2	;taxiways non-visible -> */
	if (CF) {goto exittaxiways2;}
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to even face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2538 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2540 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2541 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2542 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* generate faces
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextpolyface:
	// 4435 
	/* NextPolyFace:	lodsb		    	;fetch logical colour */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	TaxiLights2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto taxilights2;}
	/* mov	Col1,al */
	col1 = al;
	/* lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextPolyFace	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nextpolyface;}
	/* shl	al,1	  	;index * 2 for lh end point */
	SHL(al, 1);
	/* mov	TaxiPoly[0],al */
	*((taxipoly)+0) = al;
	/* add	al,2		;index + 2 for rh end point */
	ADD(al, 2);
	/* mov	TaxiPoly[3],al */
	*((taxipoly)+3) = al;
nextpoly:
	// 4437 
	/* NextPoly:	lodsb			;fetch next vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextPolyFace	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nextpolyface;}
	/* shl	al,1	  	;index * 2 for lh end point */
	SHL(al, 1);
	/* mov	TaxiPoly[1],al */
	*((taxipoly)+1) = al;
	/* add	al,2		;index + 2 for rh end point */
	ADD(al, 2);
	/* mov	TaxiPoly[2],al */
	*((taxipoly)+2) = al;
	/* push	si   		;store face list ptr */
	PUSH(si);
	/* mov	si,OFFSET TaxiPoly */
	si = m2c::near_offset_external(taxipoly);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SkipPoly	;poly non-visible -> */
	if (CF) {goto skippoly;}
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
skippoly:
	// 4439 
	/* SkipPoly:	pop	si		;restore face list ptr */
	POP(si);
	/* mov	al,TaxiPoly[1]	;next road shares previous points */
	al = *((taxipoly)+1);
	/* mov	TaxiPoly[0],al */
	*((taxipoly)+0) = al;
	/* mov	al,TaxiPoly[2] */
	al = *((taxipoly)+2);
	/* mov	TaxiPoly[3],al */
	*((taxipoly)+3) = al;
	/* jmp	NextPoly */
	goto nextpoly;
	// 0 ;---------------------
	// 0 ;* draw taxiway lights
	// 0 ;---------------------
taxilights2:
	// 4441 
	/* TaxiLights2:	mov	al,Night */
	al = night;
	/* or	al,Fog		;night or fog? */
	OR(al, fog);
	/* jz	ExitTaxiways3	;no -> */
	if (al == 0) {goto exittaxiways3;}
	/* mov	si,VertexIndex */
	si = vertexindex;
	/* call	PolyDotClip */
	CALL(polydotclip, 0);
	/* mov	si,VertexIndex */
	si = vertexindex;
taxilightslp2:
	// 4443 
	/* TaxiLightsLp2:	mov	cx,XCrt[si] */
	cx = *(dw*)(((db*)&xcrt)+si);
	/* cmp	cx,-1		;visible? */
	CMP(cx, -1);
	/* je	@F		;no -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel4;}
	/* mov	bl,YCrt[si] */
	bl = *((&ycrt)+si);
	/* mov	al,RwyLightCol */
	al = rwylightcol;
	/* push	si */
	PUSH(si);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
dummylabel4:
	// 4445 
	/* @@:		sub	si,2 */
	SUB(si, 2);
	/* jnc	TaxiLightsLp2 */
	if (!CF) {goto taxilightslp2;}
exittaxiways3:
	// 4447 
	/* ExitTaxiways3:	ret */
	RETN(0);
scanvertex1:
	// 2612 
	// 0 ;mov	RwyLightCol,COL_NT_BLUE1
edummylabel6:
	// 4449 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel5;}
	/* mov	RwyLightCol,COL_GREY1      	;The airfield is enemy-held. Dim the lights! */
	rwylightcol = 25;
	/* jmp SkipAirfieldFriendly1 */
	goto skipairfieldfriendly1;
dummylabel5:
	// 4451 
	/* mov	RwyLightCol,COL_NT_BLUE1 */
	rwylightcol = 16;
skipairfieldfriendly1:
	// 4453 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop1:
	// 4455 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex1;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* add	cx,XPos1	;XPos1 + XSX + XSY */
	ADD(cx, xpos1);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos1	;YPos1 + YSX + YSY */
	ADD(dx, ypos1);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(bp, zpos1);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
exitvertex1:
	// 4457 
	/* ExitVertex1:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex2:
	// 2667 
	// 0 ;mov	RwyLightCol,COL_NT_BLUE1
edummylabel7:
	// 4459 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel6;}
	/* mov	RwyLightCol,COL_GREY1      	;The airfield is enemy-held. Dim the lights! */
	rwylightcol = 25;
	/* jmp SkipAirfieldFriendly2 */
	goto skipairfieldfriendly2;
dummylabel6:
	// 4461 
	/* mov	RwyLightCol,COL_NT_BLUE1	;The airfield is a friendly. Show all lights. */
	rwylightcol = 16;
skipairfieldfriendly2:
	// 4463 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop2:
	// 4465 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex2;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* sar	cx,1		;/2 scaling */
	SAR(cx, 1);
	/* add	cx,XPos2	;XPos2 + XSX + XSY */
	ADD(cx, xpos2);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1		;/2 scaling */
	SAR(dx, 1);
	/* add	dx,YPos2	;YPos2 + YSX + YSY */
	ADD(dx, ypos2);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1		;/2 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(bp, zpos2);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
exitvertex2:
	// 4467 
	/* ExitVertex2:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex8:
	// 2725 
	// 0 ;mov	RwyLightCol,COL_NT_BLUE2
edummylabel8:
	// 4469 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel7;}
	/* mov	RwyLightCol,COL_GREY1      	;The airfield is enemy-held. Dim the lights! */
	rwylightcol = 25;
	/* jmp SkipAirfieldFriendly3 */
	goto skipairfieldfriendly3;
dummylabel7:
	// 4471 
	/* mov	RwyLightCol,COL_NT_BLUE2 */
	rwylightcol = 17;
skipairfieldfriendly3:
	// 4473 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop8:
	// 4475 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex8	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex8;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1		;/8 scaling */
	SAR(cx, 1);
	/* add	cx,XPos8	;XPos8 + XSX + XSY */
	ADD(cx, xpos8);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1		;/8 scaling */
	SAR(dx, 1);
	/* add	dx,YPos8	;YPos8 + YSX + YSY */
	ADD(dx, ypos8);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;/8 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(bp, zpos8);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop8 */
	goto vertexloop8;
exitvertex8:
	// 4477 
	/* ExitVertex8:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
viscode_9_proc:
	// 2789 
exitmakevert1:
	// 4479 
	// 0 ;* kill: ax, bx, cx, dx, bp, flags
	/* sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
makevertex1:
	// 2792 
	// 0 ;mov	RwyLightCol,COL_NT_BLUE1
edummylabel9:
	// 4481 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel8;}
	/* mov	RwyLightCol,COL_GREY1      	;The airfield is enemy-held. Dim the lights! */
	rwylightcol = 25;
	/* jmp SkipAirfieldFriendly4 */
	goto skipairfieldfriendly4;
dummylabel8:
	// 4483 
	/* mov	RwyLightCol,COL_NT_BLUE1 */
	rwylightcol = 16;
skipairfieldfriendly4:
	// 4485 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
makevertloop1:
	// 4487 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitMakeVert1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitmakevert1;}
	/* mov	bl,al */
	bl = al;
	/* push	bx		;store end type index */
	PUSH(bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* add	cx,XPos1	;XPos1 + XSX + XSY */
	ADD(cx, xpos1);
	/* add	dx,YPos1	;YPos1 + YSX + YSY */
	ADD(dx, ypos1);
	/* add	bp,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(bp, zpos1);
	/* mov	XPos,cx */
	xpos = cx;
	/* mov	YPos,dx */
	ypos = dx;
	/* mov	ZPos,bp */
	zpos = bp;
	// 0 ;* calc lh and rh points wrt end type (two co-ords generated for each vertex)
	/* pop	bx		;restore end type index */
	POP(bx);
	/* push	si 		;store vertex list ptr */
	PUSH(si);
	/* push	bx   		;store end type index */
	PUSH(bx);
	/* mov	si,EndType64[bx]   	;xl */
	si = *(dw*)(((db*)&endtype64)+bx);
	/* mov	bx,EndType64[bx+2]	;yl */
	bx = *(dw*)(((db*)&endtype64)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	bx	 	;restore end type index */
	POP(bx);
	/* add	di,2   		;rh point index */
	ADD(di, 2);
	/* mov	si,EndType64[bx+4]	;xr */
	si = *(dw*)(((db*)&endtype64)+bx+4);
	/* mov	bx,EndType64[bx+6]	;yr */
	bx = *(dw*)(((db*)&endtype64)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	si		;restore vertex list ptr */
	POP(si);
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	MakeVertLoop1 */
	goto makevertloop1;
viscode_c_proc:
	// 2883 
exitmakevert2:
	// 4489 
	// 0 ;* kill: ax, bx, cx, dx, bp, flags
	/* sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
makevertex2:
	// 2886 
	// 0 ;mov	RwyLightCol,COL_NT_BLUE1
edummylabel10:
	// 4491 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],10000000b  ;SECT_ENEMY. Over enemy sector? */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz @F; --> No! */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel9;}
	/* mov	RwyLightCol,COL_GREY1      	;The airfield is enemy-held. Dim the lights! */
	rwylightcol = 25;
	/* jmp SkipAirfieldFriendly5 */
	goto skipairfieldfriendly5;
dummylabel9:
	// 4493 
	/* mov	RwyLightCol,COL_NT_BLUE1     ;Friendly-held airfield. Show the lights. */
	rwylightcol = 16;
skipairfieldfriendly5:
	// 4495 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
makevertloop2:
	// 4497 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitMakeVert2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitmakevert2;}
	/* mov	bl,al */
	bl = al;
	/* push	bx		;store end type index */
	PUSH(bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* sar	cx,1		;/2 scaling */
	SAR(cx, 1);
	/* sar	dx,1		;/2 scaling */
	SAR(dx, 1);
	/* sar	bp,1		;/2 scaling */
	SAR(bp, 1);
	/* add	cx,XPos2	;XPos2 + XSX + XSY */
	ADD(cx, xpos2);
	/* add	dx,YPos2	;YPos2 + YSX + YSY */
	ADD(dx, ypos2);
	/* add	bp,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(bp, zpos2);
	/* mov	XPos,cx */
	xpos = cx;
	/* mov	YPos,dx */
	ypos = dx;
	/* mov	ZPos,bp */
	zpos = bp;
	// 0 ;* calc lh and rh points wrt end type (two co-ords generated for each vertex)
	/* pop	bx		;restore end type index */
	POP(bx);
	/* push	si 		;store vertex list ptr */
	PUSH(si);
	/* push	bx   		;store end type index */
	PUSH(bx);
	/* mov	si,EndType64[bx]	;xl */
	si = *(dw*)(((db*)&endtype64)+bx);
	/* mov	bx,EndType64[bx+2]	;yl */
	bx = *(dw*)(((db*)&endtype64)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	bx	 	;restore end type index */
	POP(bx);
	/* add	di,2   		;rh point index */
	ADD(di, 2);
	/* mov	si,EndType64[bx+4]	;xr */
	si = *(dw*)(((db*)&endtype64)+bx+4);
	/* mov	bx,EndType64[bx+6]	;yr */
	bx = *(dw*)(((db*)&endtype64)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	si		;restore vertex list ptr */
	POP(si);
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	MakeVertLoop2 */
	goto makevertloop2;
drawrwylights1:
	// 2987 
	/* mov	RwyLightCol,COL_NT_WHITE1 ;* kill: assume all */
	rwylightcol = 8;
intorwylights1:
	// 4499 
	/* test	RwyLightsOn,1	;runway lights on? */
	TEST(rwylightson, 1);
	/* jnz	__m2c_macrolocal_24_skip */
	if ((rwylightson & 1) != 0) {goto __m2c_macrolocal_24_skip;}
	/* jmp	ExitRwyLights1 */
	goto exitrwylights1;
__m2c_macrolocal_24_skip:
	// 4501 
	// 0 ;no ->
	// 0 ;---------------------
	// 0 ;* restore Ze[] values
	// 0 ;---------------------
	/* mov	si,OFFSET Ze[8] */
	si = m2c::near_offset_external(ze)+8;
	/* mov	di,OFFSET Ze[0] */
	di = m2c::near_offset_external(ze)+0;
	/* mov	cx,4 */
	cx = 4;
	// 3002 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;-----------------------------------------
	// 0 ;* sub-divide lhs creating 31 extra points
	// 0 ;-----------------------------------------
	// 0 ;* sub-divide Xe[0] and Xe[2] creating Xe[8] .. Xe[68]
	/* mov	ax,Xe[2] */
	ax = *(dw*)(((db*)&xe)+2);
	/* sub	ax,Xe[0] */
	SUB(ax, *(dw*)(((db*)&xe)+0));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Xe[0]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&xe)+0);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Xe[8] */
	di = m2c::near_offset_external(xe)+8;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;* sub-divide Ye[0] and Ye[2] creating Ye[8] .. Ye[68]
	/* mov	ax,Ye[2] */
	ax = *(dw*)(((db*)&ye)+2);
	/* sub	ax,Ye[0] */
	SUB(ax, *(dw*)(((db*)&ye)+0));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ye[0]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ye)+0);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ye[8] */
	di = m2c::near_offset_external(ye)+8;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;* sub-divide Ze[0] and Ze[2] creating Ze[8] .. Ze[68]
	/* mov	ax,Ze[2] */
	ax = *(dw*)(((db*)&ze)+2);
	/* sub	ax,Ze[0] */
	SUB(ax, *(dw*)(((db*)&ze)+0));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ze[0]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ze)+0);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ze[8] */
	di = m2c::near_offset_external(ze)+8;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;-----------------------------------------
	// 0 ;* sub-divide rhs creating 31 extra points
	// 0 ;-----------------------------------------
	// 0 ;* sub-divide Xe[6] and Xe[4] creating Xe[70] .. Xe[130]
	/* mov	ax,Xe[4] */
	ax = *(dw*)(((db*)&xe)+4);
	/* sub	ax,Xe[6] */
	SUB(ax, *(dw*)(((db*)&xe)+6));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Xe[6]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&xe)+6);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Xe[70] */
	di = m2c::near_offset_external(xe)+70;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;* sub-divide Ye[6] and Ye[4] creating Ye[70] .. Ye[130]
	/* mov	ax,Ye[4] */
	ax = *(dw*)(((db*)&ye)+4);
	/* sub	ax,Ye[6] */
	SUB(ax, *(dw*)(((db*)&ye)+6));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ye[6]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ye)+6);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ye[70] */
	di = m2c::near_offset_external(ye)+70;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;* sub-divide Ze[6] and Ze[4] creating Ze[70] .. Ze[130]
	/* mov	ax,Ze[4] */
	ax = *(dw*)(((db*)&ze)+4);
	/* sub	ax,Ze[6] */
	SUB(ax, *(dw*)(((db*)&ze)+6));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ze[6]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ze)+6);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ze[70] */
	di = m2c::near_offset_external(ze)+70;
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* add	bx,dx */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	// 0 ;---------------------------------------------------------------------------
	// 0 ;* sub-divide lhs and rhs points (diagonally) creating 30 centre line points
	// 0 ;---------------------------------------------------------------------------
	// 0 ;* Unfortunately the runway stripes obstruct the centre line lights causing
	// 0 ;* them to flicker. The visual effect is unsatisfactory. This code has been
	// 0 ;* commented out pending future inspiration!
	// 0 ;--------------------
	// 0 ;* draw runway lights
	// 0 ;--------------------
	// 3762 NUM_LIGHTS	=	(4+31+31-1)*2
	/* mov	si,NUM_LIGHTS */
	si = (4+31+31-1)*2;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitRwyLights1	;runway lights non-visible -> */
	if (CF) {goto exitrwylights1;}
	/* mov	si,NUM_LIGHTS */
	si = (4+31+31-1)*2;
	/* call	PolyDotClip */
	CALL(polydotclip, 0);
	/* mov	si,NUM_LIGHTS */
	si = (4+31+31-1)*2;
rwylightslp1:
	// 4503 
	/* RwyLightsLp1:	mov	cx,XCrt[si] */
	cx = *(dw*)(((db*)&xcrt)+si);
	/* cmp	cx,-1		;visible? */
	CMP(cx, -1);
	/* je	@F		;no -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel10;}
	/* mov	bl,YCrt[si] */
	bl = *((&ycrt)+si);
	/* mov	al,RwyLightCol */
	al = rwylightcol;
	/* push	si */
	PUSH(si);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
dummylabel10:
	// 4505 
	/* @@:		sub	si,2 */
	SUB(si, 2);
	/* jnc	RwyLightsLp1 */
	if (!CF) {goto rwylightslp1;}
exitrwylights1:
	// 4507 
	/* ExitRwyLights1:	ret */
	RETN(0);
drawrwylights2:
	// 3794 
	/* mov	RwyLightCol,COL_NT_WHITE1 ;* note: Returns via DrawRwyLights1. */
	rwylightcol = 8;
edummylabel11:
	// 4509 
	/* jmp	IntoRwyLights1 */
	goto intorwylights1;
drawrwylights8:
	// 3811 
	/* mov	RwyLightCol,COL_NT_GREY2 ;* note: Returns via DrawRwyLights1. */
	rwylightcol = 10;
edummylabel12:
	// 4511 
	/* jmp	IntoRwyLights1 */
	goto intorwylights1;
drawrwylights16:
	// 3826 
	// 0 ;* draw runway lights
edummylabel13:
	// 4513 
	/* mov	al,COL_NT_GREY4 */
	al = 12;
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
	/* mov	ax,Xe[4] */
	ax = *(dw*)(((db*)&xe)+4);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[4] */
	ax = *(dw*)(((db*)&ye)+4);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[4] */
	ax = *(dw*)(((db*)&ze)+4);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* call	DotClip */
	CALL(dotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel11;}
	/* mov	al,COL_NT_RED3 */
	al = 15;
	/* call	SetPixel */
	CALLF(setpixel, 0);
dummylabel11:
	// 4515 
	/* @@:		mov	ax,Xe[6] */
	ax = *(dw*)(((db*)&xe)+6);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[6] */
	ax = *(dw*)(((db*)&ye)+6);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[6] */
	ax = *(dw*)(((db*)&ze)+6);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* call	DotClip */
	CALL(dotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel12;}
	/* mov	al,COL_NT_RED3 */
	al = 15;
	/* call	SetPixel */
	CALLF(setpixel, 0);
dummylabel12:
	// 4517 
	/* @@:		ret */
	RETN(0);
drawapprlights1:
	// 3877 
	/* mov	RwyLightCol,COL_NT_RED1 ;*			p4 */
	rwylightcol = 13;
	// 0 ;-------------------
	// 0 ;* calc x eye values
	// 0 ;-------------------
	// 0 ;* calc 8ft offset between lights
edummylabel14:
	// 4519 
	/* mov	ax,Xe[250] */
	ax = *(dw*)(((db*)&xe)+250);
	/* sub	ax,Xe[248] */
	SUB(ax, *(dw*)(((db*)&xe)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx		;store 8ft offset */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Xe[254] */
	ax = *(dw*)(((db*)&xe)+254);
	/* sub	ax,Xe[252] */
	SUB(ax, *(dw*)(((db*)&xe)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Xe[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&xe)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Xe[0] */
	di = m2c::near_offset_external(xe)+0;
	/* call	CreateLights1 */
	CALL(createlights1, 0);
	// 0 ;-------------------
	// 0 ;* calc y eye values
	// 0 ;-------------------
	// 0 ;* calc 8ft offset between lights
	/* mov	ax,Ye[250] */
	ax = *(dw*)(((db*)&ye)+250);
	/* sub	ax,Ye[248] */
	SUB(ax, *(dw*)(((db*)&ye)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Ye[254] */
	ax = *(dw*)(((db*)&ye)+254);
	/* sub	ax,Ye[252] */
	SUB(ax, *(dw*)(((db*)&ye)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ye[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ye)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ye[0] */
	di = m2c::near_offset_external(ye)+0;
	/* call	CreateLights1 */
	CALL(createlights1, 0);
	// 0 ;-------------------
	// 0 ;* calc z eye values
	// 0 ;-------------------
	// 0 ;* calc 8ft offset between lights
	/* mov	ax,Ze[250] */
	ax = *(dw*)(((db*)&ze)+250);
	/* sub	ax,Ze[248] */
	SUB(ax, *(dw*)(((db*)&ze)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Ze[254] */
	ax = *(dw*)(((db*)&ze)+254);
	/* sub	ax,Ze[252] */
	SUB(ax, *(dw*)(((db*)&ze)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ze[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ze)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ze[0] */
	di = m2c::near_offset_external(ze)+0;
	/* call	CreateLights1 */
	CALL(createlights1, 0);
	// 0 ;----------------------
	// 0 ;* draw approach lights
	// 0 ;----------------------
	// 4063 NUM_LIGHTS	=	((12*5)+(5*2)+(9*2)-1)*2	;see CreateLights1
	// 0 ;see CreateLights1
	/* mov	si,NUM_LIGHTS */
	si = ((12*5)+(5*2)+(9*2)-1)*2;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	ExitApprLights1	;runway non-visible -> */
	if (CF) {goto exitapprlights1;}
	/* mov	si,NUM_LIGHTS */
	si = ((12*5)+(5*2)+(9*2)-1)*2;
	/* call	PolyDotClip */
	CALL(polydotclip, 0);
	/* mov	si,NUM_LIGHTS */
	si = ((12*5)+(5*2)+(9*2)-1)*2;
apprlightslp1:
	// 4521 
	/* ApprLightsLp1:	mov	cx,XCrt[si] */
	cx = *(dw*)(((db*)&xcrt)+si);
	/* cmp	cx,-1		;error? */
	CMP(cx, -1);
	/* je	@F		;yes -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel13;}
	/* mov	bl,YCrt[si] */
	bl = *((&ycrt)+si);
	/* mov	al,RwyLightCol */
	al = rwylightcol;
	/* push	si */
	PUSH(si);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
dummylabel13:
	// 4523 
	/* @@:		sub	si,2 */
	SUB(si, 2);
	/* jnc	ApprLightsLp1 */
	if (!CF) {goto apprlightslp1;}
exitapprlights1:
	// 4525 
	/* ExitApprLights1:ret */
	RETN(0);
createlights1:
	// 4108 
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
edummylabel15:
	// 4527 
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* stosw */
	{ STOSW; }
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax		;store centre postion */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx		;restore centre position */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* ret */
	RETN(0);
drawapprlights2:
	// 4408 
	/* mov	RwyLightCol,COL_NT_RED1 ;*			p4 */
	rwylightcol = 13;
intoapprlights2:
	// 4529 
	// 0 ;-------------------
	// 0 ;* calc x eye values
	// 0 ;-------------------
	// 0 ;* calc 16ft offset
	/* mov	ax,Xe[250] */
	ax = *(dw*)(((db*)&xe)+250);
	/* sub	ax,Xe[248] */
	SUB(ax, *(dw*)(((db*)&xe)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx		;store 16ft offset */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Xe[254] */
	ax = *(dw*)(((db*)&xe)+254);
	/* sub	ax,Xe[252] */
	SUB(ax, *(dw*)(((db*)&xe)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Xe[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&xe)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Xe[0] */
	di = m2c::near_offset_external(xe)+0;
	/* call	CreateLights2 */
	CALL(createlights2, 0);
	// 0 ;-------------------
	// 0 ;* calc y eye values
	// 0 ;-------------------
	// 0 ;* calc 16ft offset
	/* mov	ax,Ye[250] */
	ax = *(dw*)(((db*)&ye)+250);
	/* sub	ax,Ye[248] */
	SUB(ax, *(dw*)(((db*)&ye)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx		;store 16ft offset */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Ye[254] */
	ax = *(dw*)(((db*)&ye)+254);
	/* sub	ax,Ye[252] */
	SUB(ax, *(dw*)(((db*)&ye)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ye[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ye)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ye[0] */
	di = m2c::near_offset_external(ye)+0;
	/* call	CreateLights2 */
	CALL(createlights2, 0);
	// 0 ;-------------------
	// 0 ;* calc z eye values
	// 0 ;-------------------
	// 0 ;* calc 16ft offset
	/* mov	ax,Ze[250] */
	ax = *(dw*)(((db*)&ze)+250);
	/* sub	ax,Ze[248] */
	SUB(ax, *(dw*)(((db*)&ze)+248));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	bp,bx		;store 16ft offset */
	bp = bx;
	/* mov	si,ax */
	si = ax;
	// 0 ;* create 12 light datum positions at 256ft intervals from runway end
	/* mov	ax,Ze[254] */
	ax = *(dw*)(((db*)&ze)+254);
	/* sub	ax,Ze[252] */
	SUB(ax, *(dw*)(((db*)&ze)+252));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	ax,dx */
	SBB(ax, dx);
	/* mov	cx,Ze[252]	;cx, dx = starting point */
	cx = *(dw*)(((db*)&ze)+252);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* xchg	ax,cx		;ax, bx = starting point */
	XCHG(ax, cx);
	/* xchg	bx,dx		;cx, dx = sub-division */
	XCHG(bx, dx);
	/* mov	di,OFFSET Ze[0] */
	di = m2c::near_offset_external(ze)+0;
	/* call	CreateLights2 */
	CALL(createlights2, 0);
	// 0 ;----------------------
	// 0 ;* draw approach lights
	// 0 ;----------------------
	// 4589 NUM_LIGHTS	=	12		;see CreateLights2
	// 0 ;see CreateLights2
	/* mov	cx,NUM_LIGHTS */
	cx = 12;
	/* xor	si,si */
	XOR(si, si);
apprlightslp2:
	// 4531 
	/* ApprLightsLp2:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	QuickLineClip	;lights visible? */
	CALL(quicklineclip, 0);
	/* jc	@F		;no -> */
	if (CF) {goto dummylabel14;}
	/* mov	al,RwyLightCol */
	al = rwylightcol;
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
dummylabel14:
	// 4533 
	/* @@:		pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	// 0 ;* move next line ends to Xe[0], Ye[0], Ze[0] and Xe[2], Ye[2], Ze[2]
	/* add	si,4 */
	ADD(si, 4);
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,Ye[si] */
	ax = *(dw*)(((db*)&ye)+si);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,Ze[si] */
	ax = *(dw*)(((db*)&ze)+si);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,Xe[si+2] */
	ax = *(dw*)(((db*)&xe)+si+2);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,Ye[si+2] */
	ax = *(dw*)(((db*)&ye)+si+2);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,Ze[si+2] */
	ax = *(dw*)(((db*)&ze)+si+2);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* loop	ApprLightsLp2 */
	LOOP(apprlightslp2);
	/* ret */
	RETN(0);
drawapprlights8:
	// 4635 
	/* mov	RwyLightCol,COL_NT_RED2 ;* note: Returns via DrawAppLights2. */
	rwylightcol = 14;
edummylabel16:
	// 4535 
	/* jmp	IntoApprLights2 */
	goto intoapprlights2;
createlights2:
	// 4649 
	// 4650 LOOP_COUNT	=	1
	// 0 ;* kill: assume all
	// 4653 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
edummylabel17:
	// 4537 
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4674 LOOP_COUNT	=	LOOP_COUNT+1
	// 4677 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4698 LOOP_COUNT	=	LOOP_COUNT+1
	// 4701 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4722 LOOP_COUNT	=	LOOP_COUNT+1
	// 4725 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4746 LOOP_COUNT	=	LOOP_COUNT+1
	// 4749 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4770 LOOP_COUNT	=	LOOP_COUNT+1
	// 4773 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4794 LOOP_COUNT	=	LOOP_COUNT+1
	// 4797 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4818 LOOP_COUNT	=	LOOP_COUNT+1
	// 4821 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4842 LOOP_COUNT	=	LOOP_COUNT+1
	// 4845 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4866 LOOP_COUNT	=	LOOP_COUNT+1
	// 4869 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4890 LOOP_COUNT	=	LOOP_COUNT+1
	// 4893 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4914 LOOP_COUNT	=	LOOP_COUNT+1
	// 4917 WIDTH_COUNT	=	1		;32ft wide lamp strip
	// 0 ;32ft wide lamp strip
	/* add	bx,dx		;displace 256ft from runway */
	ADD(bx, dx);
	/* adc	ax,cx */
	ADC(ax, cx);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	ax,si */
	ADC(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* sub	bx,bp */
	SUB(bx, bp);
	/* sbb	ax,si */
	SBB(ax, si);
	/* stosw */
	{ STOSW; }
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 4938 LOOP_COUNT	=	LOOP_COUNT+1
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
                case m2c::k__m2c_macrolocal_24_skip: 	goto __m2c_macrolocal_24_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::kapprlightslp1: 	goto apprlightslp1;
        case m2c::kapprlightslp2: 	goto apprlightslp2;
        case m2c::kcheckew: 	goto checkew;
        case m2c::kcheckns: 	goto checkns;
        case m2c::kcontlines: 	goto contlines;
        case m2c::kcontpolys: 	goto contpolys;
        case m2c::kcontrunway1: 	goto contrunway1;
        case m2c::kcontrunway2: 	goto contrunway2;
        case m2c::kcontrunway8: 	goto contrunway8;
        case m2c::kcreatelights1: 	goto createlights1;
        case m2c::kcreatelights2: 	goto createlights2;
        case m2c::kdrawapprlights1: 	goto drawapprlights1;
        case m2c::kdrawapprlights2: 	goto drawapprlights2;
        case m2c::kdrawapprlights8: 	goto drawapprlights8;
        case m2c::kdrawrunways: 	goto drawrunways;
        case m2c::kdrawrwylights1: 	goto drawrwylights1;
        case m2c::kdrawrwylights16: 	goto drawrwylights16;
        case m2c::kdrawrwylights2: 	goto drawrwylights2;
        case m2c::kdrawrwylights8: 	goto drawrwylights8;
        case m2c::kdrawtaxiways: 	goto drawtaxiways;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
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
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitapprlights1: 	goto exitapprlights1;
        case m2c::kexitmakevert1: 	goto exitmakevert1;
        case m2c::kexitmakevert2: 	goto exitmakevert2;
        case m2c::kexitrunway1: 	goto exitrunway1;
        case m2c::kexitrunway16: 	goto exitrunway16;
        case m2c::kexitrunway2: 	goto exitrunway2;
        case m2c::kexitrunway8: 	goto exitrunway8;
        case m2c::kexitrunways: 	goto exitrunways;
        case m2c::kexitrwylights1: 	goto exitrwylights1;
        case m2c::kexittaxiways1: 	goto exittaxiways1;
        case m2c::kexittaxiways2: 	goto exittaxiways2;
        case m2c::kexittaxiways3: 	goto exittaxiways3;
        case m2c::kexitvertex1: 	goto exitvertex1;
        case m2c::kexitvertex2: 	goto exitvertex2;
        case m2c::kexitvertex8: 	goto exitvertex8;
        case m2c::kintoapprlights2: 	goto intoapprlights2;
        case m2c::kintorwylights1: 	goto intorwylights1;
        case m2c::klightsok: 	goto lightsok;
        case m2c::klightson: 	goto lightson;
        case m2c::kmakevertex1: 	goto makevertex1;
        case m2c::kmakevertex2: 	goto makevertex2;
        case m2c::kmakevertloop1: 	goto makevertloop1;
        case m2c::kmakevertloop2: 	goto makevertloop2;
        case m2c::knextlineface: 	goto nextlineface;
        case m2c::knextpoly: 	goto nextpoly;
        case m2c::knextpolyface: 	goto nextpolyface;
        case m2c::knextrunway: 	goto nextrunway;
        case m2c::krwylightslp1: 	goto rwylightslp1;
        case m2c::kscanvertex1: 	goto scanvertex1;
        case m2c::kscanvertex2: 	goto scanvertex2;
        case m2c::kscanvertex8: 	goto scanvertex8;
        case m2c::kskipairfieldfriendly1: 	goto skipairfieldfriendly1;
        case m2c::kskipairfieldfriendly2: 	goto skipairfieldfriendly2;
        case m2c::kskipairfieldfriendly3: 	goto skipairfieldfriendly3;
        case m2c::kskipairfieldfriendly4: 	goto skipairfieldfriendly4;
        case m2c::kskipairfieldfriendly5: 	goto skipairfieldfriendly5;
        case m2c::kskippoly: 	goto skippoly;
        case m2c::kskiprwylightson: 	goto skiprwylightson;
        case m2c::ksortrunway1: 	goto sortrunway1;
        case m2c::ksortrunway16: 	goto sortrunway16;
        case m2c::ksortrunway2: 	goto sortrunway2;
        case m2c::ksortrunway8: 	goto sortrunway8;
        case m2c::ktaxilights1: 	goto taxilights1;
        case m2c::ktaxilights2: 	goto taxilights2;
        case m2c::ktaxilightslp1: 	goto taxilightslp1;
        case m2c::ktaxilightslp2: 	goto taxilightslp2;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kvertexloop2: 	goto vertexloop2;
        case m2c::kvertexloop8: 	goto vertexloop8;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kviscode_9_proc: 	goto viscode_9_proc;
        case m2c::kviscode_c_proc: 	goto viscode_c_proc;
        default: return __dispatch_call(__disp, _state);
    };
}

