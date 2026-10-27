/* THIS IS GENERATED FILE */

        
#include "mapview.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
mapview:
	// 884 
	// 0 ;---------------
	// 0 ;* sort map zoom
	// 0 ;---------------
edummylabel1:
	// 4369 
	/* mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] */
	al = *((&kf_mapzoomin)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom in?
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomin)+k_status););	// 893 mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] */
	/* jz	SkipZoomIn	;no -> */
	if (!(al & al)) {goto skipzoomin;}
	/* cmp	MapZoom,MAP_ZOOM6	;fully zoomed in? */
	CMP(mapzoom, map_zoom6);
	/* je	SkipZoomIn		;yes -> */
	if ((dw)(mapzoom) == (dw)(map_zoom6)) {goto skipzoomin;}
	/* add	MapZoom,2 */
	ADD(mapzoom, 2);
	/* jmp	SkipZoomOut */
	goto skipzoomout;
skipzoomin:
	// 4371 
	/* SkipZoomIn:	mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	al = *((&kf_mapzoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom out?
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomout)+k_status););	// 902 mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	/* jz	SkipZoomOut	;no -> */
	if (!(al & al)) {goto skipzoomout;}
	/* cmp	MapZoom,MAP_ZOOM1	;fully zoomed out? */
	CMP(mapzoom, map_zoom1);
	/* je	SkipZoomOut	    	;yes -> */
	if ((dw)(mapzoom) == (dw)(map_zoom1)) {goto skipzoomout;}
	/* sub	MapZoom,2 */
	SUB(mapzoom, 2);
	// 0 ;----------
	// 0 ;* draw map
	// 0 ;----------
skipzoomout:
	// 4373 
	/* SkipZoomOut:	mov	ax,MAP_HALF_DISP */
	ax = map_half_disp;
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,MapZoom */
	dx = mapzoom;
	/* mov	bp,MAP_ORG_CENTRE */
	bp = map_org_centre;
	/* push	si */
	PUSH(si);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,VP_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
	/* mov	dx,MapZoom */
	dx = mapzoom;
	/* call	MapCompass */
	CALLF(mapcompass, 0);
	/* ret */
	RETF(0);
mapcompass:
	// 934 
	/* push	ax		;store rotation angle */
	PUSH(ax);
	// 0 ;---------------
	// 0 ;* display range
	// 0 ;---------------
edummylabel2:
	// 4375 
	/* mov	ax,dx */
	ax = dx;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* add	ax,dx		;*5 */
	ADD(ax, dx);
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* add	ax,OFFSET RangeVals$ */
	ADD(ax, m2c::near_offset_external(rangevalsdol));
	/* mov	RangeValsPtr,ax */
	rangevalsptr = ax;
	/* mov	si,OFFSET Range$ */
	si = m2c::near_offset_external(rangedol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;---------------------
	// 0 ;* draw aircraft datum
	// 0 ;---------------------
	/* mov	al,COL_COMPASS */
	al = 155;
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel1;}
	/* mov	cx,160 */
	cx = 160;
	/* mov	bl,100-4+45  ;Original was mov	bl,100-4cd */
	bl = 100-4+45;
	/* mov	bh,100+3+45  ;Original was mov	bh,100+3 */
	bh = 100+3+45;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_COMPASS */
	al = 155;
	/* mov	cx,160-4 */
	cx = 160-4;
	/* mov	dx,160+4 */
	dx = 160+4;
	/* mov	bl,100-2+45  ;Original was mov	bl,100-2 */
	bl = 100-2+45;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	al,COL_COMPASS */
	al = 155;
	/* mov	cx,160-2 */
	cx = 160-2;
	/* mov	dx,160+2 */
	dx = 160+2;
	/* mov	bl,100+2+45  ;Original was mov	bl,100+2 */
	bl = 100+2+45;
	/* jmp frankie_2 */
	goto frankie_2;
dummylabel1:
	// 4377 
	/* mov	cx,160 */
	cx = 160;
	/* mov	bl,100-4 */
	bl = 100-4;
	/* mov	bh,100+3 */
	bh = 100+3;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	al,COL_COMPASS */
	al = 155;
	/* mov	cx,160-4 */
	cx = 160-4;
	/* mov	dx,160+4 */
	dx = 160+4;
	/* mov	bl,100-2 */
	bl = 100-2;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	al,COL_COMPASS */
	al = 155;
	/* mov	cx,160-2 */
	cx = 160-2;
	/* mov	dx,160+2 */
	dx = 160+2;
	/* mov	bl,100+2 */
	bl = 100+2;
frankie_2:
	// 4379 
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;---------------
	// 0 ;* init viewport
	// 0 ;---------------
	/* xor	ax,ax		;no rotation */
	XOR(ax, ax);
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel2;}
	/* mov	si,OFFSET VP */
	si = m2c::near_offset_external(vp);
	/* jmp frankie_3 */
	goto frankie_3;
dummylabel2:
	// 4381 
	/* mov	si,OFFSET VP_FULL */
	si = m2c::near_offset_external(vp_full);
frankie_3:
	// 4383 
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
	// 0 ;--------------------------------
	// 0 ;* draw circumference graduations
	// 0 ;--------------------------------
	/* mov	cx,32 */
	cx = 32;
	/* xor	ax,ax		;0 .. 496 step 16 */
	XOR(ax, ax);
gradloop:
	// 4385 
	/* GradLoop:	push	ax */
	PUSH(ax);
	/* push	cx */
	PUSH(cx);
	/* call	VSetRotation */
	CALLF(vsetrotation, 0);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],30 */
	*(dw*)(((db*)&ye)+0) = 30;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel3;}
	/* mov	al,COL_COMPASS */
	al = 155;
	/* call	SetPixel */
	CALLF(setpixel, 0);
dummylabel3:
	// 4387 
	/* @@:		pop	cx */
	POP(cx);
	/* pop	ax */
	POP(ax);
	/* add	ax,16 */
	ADD(ax, 16);
	/* loop	GradLoop */
	LOOP(gradloop);
	// 0 ;-----------------
	// 0 ;* draw N, S, E, W
	// 0 ;-----------------
	/* pop	ax */
	POP(ax);
	/* neg	ax   		;negate hdg */
	NEG(ax);
	/* and 	ax,001ffh */
	AND(ax, 0x001ff);
	/* call	VSetRotation */
	CALLF(vsetrotation, 0);
	// 0 ;* draw letter N
	/* mov	Xe[0],-3 */
	*(dw*)(((db*)&xe)+0) = -3;
	/* mov	Ye[0],38 */
	*(dw*)(((db*)&ye)+0) = 38;
	/* mov	Xe[2],-3 */
	*(dw*)(((db*)&xe)+2) = -3;
	/* mov	Ye[2],32 */
	*(dw*)(((db*)&ye)+2) = 32;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel4;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
dummylabel4:
	// 4389 
	/* @@: 		mov	Xe[0],3 */
	*(dw*)(((db*)&xe)+0) = 3;
	/* mov	Ye[0],38 */
	*(dw*)(((db*)&ye)+0) = 38;
	/* mov	Xe[2],3 */
	*(dw*)(((db*)&xe)+2) = 3;
	/* mov	Ye[2],32 */
	*(dw*)(((db*)&ye)+2) = 32;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel5;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
	// 4391 
	/* @@:		mov	Xe[0],-3 */
	*(dw*)(((db*)&xe)+0) = -3;
	/* mov	Ye[0],38 */
	*(dw*)(((db*)&ye)+0) = 38;
	/* mov	Xe[2],3 */
	*(dw*)(((db*)&xe)+2) = 3;
	/* mov	Ye[2],32 */
	*(dw*)(((db*)&ye)+2) = 32;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel6;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
	// 0 ;* draw S tick
dummylabel6:
	// 4393 
	/* @@:		mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],-32 */
	*(dw*)(((db*)&ye)+0) = -32;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],-35 */
	*(dw*)(((db*)&ye)+2) = -35;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel7;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
	// 0 ;* draw E tick
dummylabel7:
	// 4395 
	/* @@:		mov	Xe[0],32 */
	*(dw*)(((db*)&xe)+0) = 32;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],35 */
	*(dw*)(((db*)&xe)+2) = 35;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel8;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
	// 0 ;* draw W tick
dummylabel8:
	// 4397 
	/* @@:		mov	Xe[0],-32 */
	*(dw*)(((db*)&xe)+0) = -32;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],-35 */
	*(dw*)(((db*)&xe)+2) = -35;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel9;}
	/* mov	al,COL_COMPASS */
	al = 155;
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
	// 4399 
	/* @@:		ret */
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
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kfrankie_2: 	goto frankie_2;
        case m2c::kfrankie_3: 	goto frankie_3;
        case m2c::kgradloop: 	goto gradloop;
        case m2c::kmapcompass: 	goto mapcompass;
        case m2c::kmapview: 	goto mapview;
        case m2c::kskipzoomin: 	goto skipzoomin;
        case m2c::kskipzoomout: 	goto skipzoomout;
        default: return __dispatch_call(__disp, _state);
    };
}

