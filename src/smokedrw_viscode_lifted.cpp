/* THIS IS GENERATED FILE */

        
#include "smokedrw.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 662 
failsmoke:
	// 4369 
	// 0 ;* kill: assume all (except cf)
	/* stc			;cf = 1 = smoke non-visible */
	STC;
	/* ret */
	RETN(0);
drawsmoke:
	// 665 
	// 0 ;* any room left in object buffer?
edummylabel1:
	// 4371 
	/* mov	ax,ObjectBufPtr */
	ax = objectbufptr;
	/* cmp	ax,OFFSET ObjectBufEnd */
	CMP(ax, m2c::near_offset_external(objectbufend));
	/* je	FailSmoke	;no room -> */
	if ((dw)(ax) == (dw)(m2c::near_offset_external(objectbufend))) {goto failsmoke;}
	// 0 ;* delta x sec = smoke x sec - vp x sec
	/* mov	ax,[si].SMOKE_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_xsec)));
	/* sub	ax,V_VIEW.VP_XSEC */
	SUB(ax, v_view.vp_xsec);
	/* mov	di,ax */
	di = ax;
	// 0 ;* if abs(delta x sec) > 1 then smoke is non-visible
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,1	  	;smoke in current or adjacent sector? */
	CMP(ax, 1);
	/* ja	FailSmoke	;no -> */
	if ((dw)(ax) > (dw)(1)) {goto failsmoke;}
	// 0 ;* delta y sec = smoke y sec - vp y sec
	/* mov	ax,[si].SMOKE_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_ysec)));
	/* sub	ax,V_VIEW.VP_YSEC */
	SUB(ax, v_view.vp_ysec);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* if abs(delta y sec) > 1 then smoke is non-visible
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,1	  	;smoke in current or adjacent sector? */
	CMP(ax, 1);
	/* ja	FailSmoke	;no -> */
	if ((dw)(ax) > (dw)(1)) {goto failsmoke;}
	// 0 ;* x rel = smoke xft - vp xft + (delta x sec * 16384)
	/* shl	di,1		;-2, 0, +2 */
	SHL(di, 1);
	/* mov	ax,[si].SMOKE_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_xft)));
	/* sub	ax,V_VIEW.VP_XFT */
	SUB(ax, v_view.vp_xft);
	/* add	ax,SectorAdjust[di] */
	ADD(ax, *(dw*)(((db*)&sectoradjust)+di));
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailSmoke	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failsmoke;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailSmoke	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failsmoke;}
	/* mov	bp,ax		;bp = x rel */
	bp = ax;
	// 0 ;* y rel = smoke yft - vp yft + (-(delta y sec) * 16384)
	/* shl	bx,1		;-2, 0, +2 */
	SHL(bx, 1);
	/* mov	ax,[si].SMOKE_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_yft)));
	/* sub	ax,V_VIEW.VP_YFT */
	SUB(ax, v_view.vp_yft);
	/* sub	ax,SectorAdjust[bx] */
	SUB(ax, *(dw*)(((db*)&sectoradjust)+bx));
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailSmoke	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failsmoke;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailSmoke	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failsmoke;}
	/* mov	bx,ax		;bx = y rel */
	bx = ax;
	// 0 ;* z rel = smoke zft - vp zft (compressed)
	/* mov	cx,WORD PTR [si].SMOKE_ZFT_LO */
	cx = m2c::getdata(*((dw*)raddr(ds,si+smoke_zft_lo)));
	/* mov	ax,WORD PTR [si].SMOKE_ZFT_HI */
	ax = m2c::getdata(*((dw*)raddr(ds,si+smoke_zft_hi)));
	/* sub	cx,WORD PTR V_VIEW.VP_ZFT_LO */
	SUB(cx, *((dw*)((db*)&v_view+vp_zft_lo)));
	/* sbb	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	SBB(ax, *((dw*)((db*)&v_view+vp_zft_hi)));
	/* cwd			;dx = sign(z rel) */
	CWD;
	/* jns	@F */
	if ((short)(ax) >= 0) {goto dummylabel1;}
	/* not	cx */
	cx = ~cx;
	/* not	ax */
	ax = ~ax;
	/* add	cx,1 */
	ADD(cx, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* compress z rel (assume abs(z rel) <= 100,000)
dummylabel1:
	// 4373 
	/* @@:		test	ax,ax		;abs(z rel) > 65535? */
	TEST(ax, ax);
	/* jnz	@F		;yes -> */
	if ((ax & ax) != 0) {goto dummylabel2;}
	/* cmp	cx,10000	;abs(z rel) > 10000? */
	CMP(cx, 10000);
	/* jbe	ZRelOk		;no -> */
	if ((dw)(cx) <= (dw)(10000)) {goto zrelok;}
dummylabel2:
	// 4375 
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	// 4375 
	/* add	cx,7500		;abs(z rel) / 4 + 7500 */
	ADD(cx, 7500);
	/* cmp	cx,+16383	;in range? */
	CMP(cx, 16383);
	/* ja	FailSmokeLink	;no -> */
	if ((dw)(cx) > (dw)(16383)) {goto failsmokelink;}
zrelok:
	// 4377 
	/* ZRelOk:		xor	cx,dx		;restore sign */
	XOR(cx, dx);
	/* sub	cx,dx */
	SUB(cx, dx);
	/* mov	ax,bp		;ax = x rel */
	ax = bp;
	/* jmp	CalcPos */
	goto calcpos;
	// 0 ;--------------------------------
failsmokelink:
	// 4379 
	/* FailSmokeLink:	jmp	FailSmoke */
	goto failsmoke;
	// 0 ;--------------------------------
	// 0 ;* calc eye co-ords
calcpos:
	// 4381 
	/* CalcPos:	push	si */
	PUSH(si);
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* pop	si */
	POP(si);
	// 0 ;* check y pos in range (prevent dist sort overflow)
	/* cmp	bx,1		;ahead? */
	CMP(bx, 1);
	/* jl	FailSmokeLink	;no -> */
	if ((short)(bx) < (short)(1)) {goto failsmokelink;}
	/* cmp	bx,+16383	;in range? */
	CMP(bx, 16383);
	/* jg	FailSmokeLink	;no -> */
	if ((short)(bx) > (short)(16383)) {goto failsmokelink;}
	// 0 ;* check x pos in range
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailSmokeLink	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failsmokelink;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailSmokeLink	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failsmokelink;}
	// 0 ;* check z pos in range
	/* cmp	cx,-16384	;in range? */
	CMP(cx, -16384);
	/* jl	FailSmokeLink	;no -> */
	if ((short)(cx) < (short)(-16384)) {goto failsmokelink;}
	/* cmp	cx,+16383	;in range? */
	CMP(cx, 16383);
	/* jg	FailSmokeLink	;no -> */
	if ((short)(cx) > (short)(16383)) {goto failsmokelink;}
	// 0 ;* sort smoke data
	/* mov	di,ObjectBufPtr */
	di = objectbufptr;
	/* mov	[di].OBJ_XPOS,ax */
	m2c::setdata(&(*((dw*)((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(ax));
	/* mov	[di].OBJ_YPOS,bx */
	m2c::setdata(&(*((dw*)((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(bx));
	/* mov	[di].OBJ_ZPOS,cx */
	m2c::setdata(&(*((dw*)((db*)&((objectdata*)raddr(ds,di))->obj_zpos))), m2c::getdata(cx));
	/* mov	[di].OBJ_TYPE,OTYPE_SMOKE */
	m2c::setdata(&(*((db*)((db*)&((objectdata*)raddr(ds,di))->obj_type))), m2c::getdata(12));
	/* mov	ax,[si].SMOKE_RFT */
	ax = m2c::getdata(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_rft)));
	/* mov	[di].OBJ_SMOKE_RFT,ax */
	m2c::setdata(&(*((dw*)raddr(ds,di+obj_smoke_rft))), m2c::getdata(ax));
	/* mov	al,[si].SMOKE_COL */
	al = m2c::getdata(*((db*)((db*)&((smoke*)raddr(ds,si))->smoke_col)));
	/* mov	[di].OBJ_SMOKE_COL,al */
	m2c::setdata(&(*((db*)raddr(ds,di+obj_smoke_col))), m2c::getdata(al));
	// 0 ;* sort smoke distance (select distance sort wrt clouds)
	/* mov	ax,WORD PTR [si].SMOKE_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+smoke_zft_lo)));
	/* mov	dx,WORD PTR [si].SMOKE_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,si+smoke_zft_hi)));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	BelowClouds	;below clouds -> */
	if (CF) {goto belowclouds;}
	/* sub	ax,CloudDepth */
	SUB(ax, clouddepth);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jb	InClouds	;in clouds -> */
	if (CF) {goto inclouds;}
aboveclouds:
	// 4383 
	/* AboveClouds:	mov	dx,bx */
	dx = bx;
	/* call	ObjectDistSort3 */
	CALL(objectdistsort3, 0);
	/* jmp	Sorted */
	goto sorted;
inclouds:
	// 4385 
	/* InClouds:	mov	dx,bx */
	dx = bx;
	/* call	ObjectDistSort2 */
	CALL(objectdistsort2, 0);
	/* jmp	Sorted */
	goto sorted;
belowclouds:
	// 4387 
	/* BelowClouds:	mov	dx,bx */
	dx = bx;
	/* call	ObjectDistSort1 */
	CALL(objectdistsort1, 0);
sorted:
	// 4389 
	/* Sorted:		add	di,OBJ_REC_SIZE */
	ADD(di, 20);
	/* mov	ObjectBufPtr,di	;update object buffer pointer */
	objectbufptr = di;
	/* clc			;cf = 0 = smoke visible */
	CLC;
	/* ret */
	RETN(0);
drawsmokeobject:
	// 819 
	// 0 ;-----------------------
	// 0 ;* project circle centre
	// 0 ;-----------------------
edummylabel2:
	// 4391 
	/* mov	ax,[si].OBJ_XPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,[si].OBJ_YPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,[si].OBJ_ZPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* push	si */
	PUSH(si);
	/* call	CalcCircleCRT */
	CALL(calccirclecrt, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitSmokeObject	;error -> */
	if (CF) {goto exitsmokeobject;}
	// 0 ;-----------------------
	// 0 ;* project circle radius
	// 0 ;-----------------------
	// 0 ;* note: Calc radius using y crt as this axis is not distorted due to aspect
	// 0 ;*       ratio correction. The circle fill routine rejects circles with a
	// 0 ;*       radius <= zero so no checks need to be made.
	/* push	bx		;store centre y crt */
	PUSH(bx);
	/* push	cx		;store centre x crt */
	PUSH(cx);
	/* mov	ax,[si].OBJ_XPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,[si].OBJ_YPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,[si].OBJ_ZPOS */
	ax = m2c::getdata(*((dw*)((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* sub	ax,[si].OBJ_SMOKE_RFT */
	SUB(ax, *((dw*)raddr(ds,si+obj_smoke_rft)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* push	si */
	PUSH(si);
	/* call	CalcCircleCRT */
	CALL(calccirclecrt, 0);
	/* pop	si */
	POP(si);
	/* mov	dx,bx		;y crt radius */
	dx = bx;
	/* pop	cx		;restore centre x crt */
	POP(cx);
	/* pop	bx		;restore centre y crt */
	POP(bx);
	/* jc	ExitSmokeObject	;error -> */
	if (CF) {goto exitsmokeobject;}
	/* sub	dx,bx		;calc radius */
	SUB(dx, bx);
	/* mov	al,[si].OBJ_SMOKE_COL */
	al = m2c::getdata(*((db*)raddr(ds,si+obj_smoke_col)));
	/* call	CircleSmoke */
	CALLF(circlesmoke, 0);
	/* clc			;cf = 0 = ok */
	CLC;
exitsmokeobject:
	// 4393 
	/* ExitSmokeObject:ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kaboveclouds: 	goto aboveclouds;
        case m2c::kbelowclouds: 	goto belowclouds;
        case m2c::kcalcpos: 	goto calcpos;
        case m2c::kdrawsmoke: 	goto drawsmoke;
        case m2c::kdrawsmokeobject: 	goto drawsmokeobject;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kexitsmokeobject: 	goto exitsmokeobject;
        case m2c::kfailsmoke: 	goto failsmoke;
        case m2c::kfailsmokelink: 	goto failsmokelink;
        case m2c::kinclouds: 	goto inclouds;
        case m2c::ksorted: 	goto sorted;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kzrelok: 	goto zrelok;
        default: return __dispatch_call(__disp, _state);
    };
}

