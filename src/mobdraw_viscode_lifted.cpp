/* THIS IS GENERATED FILE */

        
#include "mobdraw.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 666 
failmobile:
	// 4369 
	// 0 ;* kill: assume all (except cf)
	/* stc			;cf = 1 = object non-visible */
	STC;
	/* ret */
	RETN(0);
drawmobile:
	// 669 
	// 0 ;* any room left in object buffer?
edummylabel1:
	// 4371 
	/* mov	ax,ObjectBufPtr */
	ax = objectbufptr;
	/* cmp	ax,OFFSET ObjectBufEnd */
	CMP(ax, m2c::near_offset_external(objectbufend));
	/* je	FailMobile	;no room -> */
	if ((dw)(ax) == (dw)(m2c::near_offset_external(objectbufend))) {goto failmobile;}
	// 0 ;* pick up parameters from MOBILE data block
	/* mov	al,MOB_TYPE[si] */
	al = m2c::getdata(((mobile*)raddr(ds,si))->mob_type);
	/* mov	ah,MOB_NUM[si] */
	ah = m2c::getdata(((mobile*)raddr(ds,si))->mob_num);
	/* mov	dl,MOB_ANIM[si] */
	dl = m2c::getdata(((mobile*)raddr(ds,si))->mob_anim);
	/* mov	Temp1,ax */
	temp1 = ax;
	/* mov	Temp2,dx */
	temp2 = dx;
	/* add	si,MOB_REC_SIZE	;si -> VIEWPOINT data block */
	ADD(si, 6);
	// 0 ;* delta x sec = obj x sec - vp x sec
	/* mov	ax,VP_XSEC[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* sub	ax,V_VIEW.VP_XSEC */
	SUB(ax, v_view.vp_xsec);
	/* mov	di,ax */
	di = ax;
	// 0 ;* if abs(delta x sec) > 1 then object is non-visible
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,1	  	;object in current or adjacent sector? */
	CMP(ax, 1);
	/* ja	FailMobile	;no -> */
	if ((dw)(ax) > (dw)(1)) {goto failmobile;}
	// 0 ;* delta y sec = obj y sec - vp y sec
	/* mov	ax,VP_YSEC[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* sub	ax,V_VIEW.VP_YSEC */
	SUB(ax, v_view.vp_ysec);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* if abs(delta y sec) > 1 then object is non-visible
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,1	  	;object in current or adjacent sector? */
	CMP(ax, 1);
	/* ja	FailMobile	;no -> */
	if ((dw)(ax) > (dw)(1)) {goto failmobile;}
	// 0 ;* x rel = obj xft - vp xft + (delta x sec * 16384)
	/* shl	di,1		;-2, 0, +2 */
	SHL(di, 1);
	/* mov	ax,VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* sub	ax,V_VIEW.VP_XFT */
	SUB(ax, v_view.vp_xft);
	/* add	ax,SectorAdjust[di] */
	ADD(ax, *(dw*)(((db*)&sectoradjust)+di));
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailMobile	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failmobile;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailMobile	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failmobile;}
	/* mov	bp,ax		;bp = x rel */
	bp = ax;
	// 0 ;* y rel = obj yft - vp yft + (-(delta y sec) * 16384)
	/* shl	bx,1		;-2, 0, +2 */
	SHL(bx, 1);
	/* mov	ax,VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	ax,V_VIEW.VP_YFT */
	SUB(ax, v_view.vp_yft);
	/* sub	ax,SectorAdjust[bx] */
	SUB(ax, *(dw*)(((db*)&sectoradjust)+bx));
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailMobile	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failmobile;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailMobile	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failmobile;}
	/* mov	bx,ax		;bx = y rel */
	bx = ax;
	// 0 ;* z rel = obj zft - vp zft
	// 0 ;* //MOD// 06.11.1992 - Altitude compression applied to z rel. This cures
	// 0 ;*	                problems such as trains drifting off railways etc.
	// 0 ;*
	// 0 ;*			The same compression used for ZScaled is applied:-
	// 0 ;*
	// 0 ;*			   if abs(z rel) > 10000 then
	// 0 ;*			      abs(z rel) = abs(z rel) / 4 + 7500
	// 0 ;*			   endif
	/* mov	cx,WORD PTR VP_ZFT_LO[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_zft)));
	/* mov	ax,WORD PTR VP_ZFT_HI[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(2)+si))->vp_zft)));
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
	/* ja	FailMobileLink	;no -> */
	if ((dw)(cx) > (dw)(16383)) {goto failmobilelink;}
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
	// 0 ;---------------------------------
failmobilelink:
	// 4379 
	/* FailMobileLink:	jmp	FailMobile */
	goto failmobile;
	// 0 ;---------------------------------
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
	/* cmp	bx,-1024	;in range (approx 512 * sqrt(2))? */
	CMP(bx, -1024);
	/* jl	FailMobileLink	;no -> */
	if ((short)(bx) < (short)(-1024)) {goto failmobilelink;}
	/* cmp	bx,+16383	;in range? */
	CMP(bx, 16383);
	/* jg	FailMobileLink	;no -> */
	if ((short)(bx) > (short)(16383)) {goto failmobilelink;}
	// 0 ;* check x pos in range
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	FailMobileLink	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto failmobilelink;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	FailMobileLink	;no -> */
	if ((short)(ax) > (short)(16383)) {goto failmobilelink;}
	// 0 ;* check z pos in range
	/* cmp	cx,-16384	;in range? */
	CMP(cx, -16384);
	/* jl	FailMobileLink	;no -> */
	if ((short)(cx) < (short)(-16384)) {goto failmobilelink;}
	/* cmp	cx,+16383	;in range? */
	CMP(cx, 16383);
	/* jg	FailMobileLink	;no -> */
	if ((short)(cx) > (short)(16383)) {goto failmobilelink;}
	// 0 ;* sort object data
	/* mov	di,ObjectBufPtr */
	di = objectbufptr;
	/* mov	OBJ_XPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(ax));
	/* mov	OBJ_YPOS[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(bx));
	/* mov	OBJ_ZPOS[di],cx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_zpos))), m2c::getdata(cx));
	/* mov	ax,VP_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
	/* mov	OBJ_HDG[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(ax));
	/* mov	ax,VP_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
	/* mov	OBJ_PITCH[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(ax));
	/* mov	ax,VP_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_roll)));
	/* mov	OBJ_ROLL[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw3))), m2c::getdata(ax));
	/* mov	ax,Temp1 */
	ax = temp1;
	/* mov	OBJ_TYPE[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_type), m2c::getdata(al));
	/* mov	OBJ_NUM[di],ah */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_num), m2c::getdata(ah));
	/* mov	ax,Temp2 */
	ax = temp2;
	/* mov	OBJ_ANIM_FLAGS[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb1), m2c::getdata(al));
	// 0 ;* sort object distance (select distance sort wrt clouds)
	/* mov	ax,WORD PTR VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_zft)));
	/* mov	dx,WORD PTR VP_ZFT_HI[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(2)+si))->vp_zft)));
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
	/* cmp	OBJ_TYPE[di],OTYPE_MOBILE4	;mobile on bridge? */
	CMP(((objectdata*)raddr(ds,di))->obj_type, 8);
	/* je	@F				;yes -> */
	if ((db)(((objectdata*)raddr(ds,di))->obj_type) == (db)(8)) {goto dummylabel3;}
	/* call	ObjectDistSort1 */
	CALL(objectdistsort1, 0);
	/* jmp	Sorted */
	goto sorted;
dummylabel3:
	// 4389 
	/* @@:		call	ObjectDistSort4 */
	CALL(objectdistsort4, 0);
sorted:
	// 4391 
	/* Sorted:		add	di,OBJ_REC_SIZE */
	ADD(di, 20);
	/* mov	ObjectBufPtr,di	;update object buffer pointer */
	objectbufptr = di;
	/* clc			;cf = 0 = object visible */
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
                case m2c::kaboveclouds: 	goto aboveclouds;
        case m2c::kbelowclouds: 	goto belowclouds;
        case m2c::kcalcpos: 	goto calcpos;
        case m2c::kdrawmobile: 	goto drawmobile;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kfailmobile: 	goto failmobile;
        case m2c::kfailmobilelink: 	goto failmobilelink;
        case m2c::kinclouds: 	goto inclouds;
        case m2c::ksorted: 	goto sorted;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kzrelok: 	goto zrelok;
        default: return __dispatch_call(__disp, _state);
    };
}

