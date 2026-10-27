/* THIS IS GENERATED FILE */

        
#include "craters.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
makecrater:
	// 440 
	// 0 ;--------------------------------
	// 0 ;* place crater at given position
	// 0 ;--------------------------------
edummylabel1:
	// 4369 
	/* mov	dx,CRATERDATA */
	dx = seg_offset(craterdata);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	/* mov	di,NextCraterPtr */
	di = nextcraterptr;
	/* mov	ES:[di].CRATER_TYPE,al */
	m2c::setdata(&(*((db*)((db*)&((crater*)raddr(es,di))->crater_type))), m2c::getdata(al));
	/* mov	ES:[di].CRATER_ANIM,6	;init 5 stages + 1 */
	m2c::setdata(&(*((db*)((db*)&((crater*)raddr(es,di))->crater_anim))), m2c::getdata(6));
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	ES:[di].CRATER_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_xsec))), m2c::getdata(ax));
	/* mov	ax,[si].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* mov	ES:[di].CRATER_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_ysec))), m2c::getdata(ax));
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	ES:[di].CRATER_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_xft))), m2c::getdata(ax));
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	ES:[di].CRATER_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_yft))), m2c::getdata(ax));
	// 0 ;* (note: Assume that zft < 65536ft)
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	ES:[di].CRATER_ZFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_zft))), m2c::getdata(ax));
	/* mov	ax,WORD PTR [si].VP_HDG */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
	/* mov	ES:[di].CRATER_HDG,ax */
	m2c::setdata(&(*((dw*)((db*)&((crater*)raddr(es,di))->crater_hdg))), m2c::getdata(ax));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	// 0 ;-------------------
	// 0 ;* update "next" ptr
	// 0 ;-------------------
	/* add	di,CRATER_REC_SIZE */
	ADD(di, 14);
	/* cmp	di,OFFSET CraterBufEnd	;end of buffer? */
	CMP(di, m2c::near_offset_external(craterbufend));
	/* jb	@F			;no -> */
	if ((dw)(di) < (dw)(m2c::near_offset_external(craterbufend))) {goto dummylabel1;}
	/* mov	di,OFFSET CraterBuffer */
	di = m2c::near_offset_external(craterbuffer);
dummylabel1:
	// 4371 
	/* @@:		mov	NextCraterPtr,di */
	nextcraterptr = di;
	/* ret */
	RETF(0);
scancraters:
	// 489 
	/* mov	cx,NUM_CRATERS ;*	 order. */
	cx = 128;
edummylabel2:
	// 4373 
	/* mov	si,OFFSET CraterBuffer */
	si = m2c::near_offset_external(craterbuffer);
	// 0 ;-----------
	// 0 ;* scan loop
	// 0 ;-----------
craterloop:
	// 4375 
	/* CraterLoop:    	push	cx */
	PUSH(cx);
	// 0 ;* make temporary mobile and viewpoint data blocks for crater
	/* mov	ax,CRATERDATA */
	ax = seg_offset(craterdata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,ES:[si].CRATER_TYPE */
	al = m2c::getdata(*((db*)((db*)&((crater*)raddr(es,si))->crater_type)));
	/* cmp	al,CRATER_NULL */
	CMP(al, 0);
	/* jz	DoneCraters */
	if ((db)(al) == (db)(0)) {goto donecraters;}
	/* mov	bx,OFFSET CraterNum */
	bx = m2c::near_offset_external(craternum);
	/* xlat */
	XLAT;
	/* mov	TMP_MOB.MOB_NUM,al */
	tmp_mob.mob_num = al;
	/* mov	TMP_MOB.MOB_TYPE,OTYPE_MOBILE1 */
	tmp_mob.mob_type = 2;
	/* mov	al,ES:[si].CRATER_ANIM */
	al = m2c::getdata(*((db*)((db*)&((crater*)raddr(es,si))->crater_anim)));
	/* test	al,al			;anim already zero? */
	TEST(al, al);
	/* jz	@F			;yes -> */
	if (!(al & al)) {goto dummylabel2;}
	/* dec	al			;next anim sequence */
	DEC(al);
	/* mov	ES:[si].CRATER_ANIM,al */
	m2c::setdata(&(*((db*)((db*)&((crater*)raddr(es,si))->crater_anim))), m2c::getdata(al));
dummylabel2:
	// 4377 
	/* @@:		mov	TMP_MOB.MOB_ANIM,al */
	tmp_mob.mob_anim = al;
	// 0 ;* (note: MOB_LINK_PTR is not required and defaults to -1)
	/* mov	ax,ES:[si].CRATER_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_xsec)));
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,ES:[si].CRATER_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_ysec)));
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	/* mov	ax,ES:[si].CRATER_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_xft)));
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,ES:[si].CRATER_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_yft)));
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;* (note: VP_ZFT_HI defaults to 0)
	/* mov	ax,ES:[si].CRATER_ZFT */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_zft)));
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	ax,ES:[si].CRATER_HDG */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,si))->crater_hdg)));
	/* mov	TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	TMP_VIEW.VP_PITCH,ax */
	tmp_view.vp_pitch = ax;
	/* mov	TMP_VIEW.VP_ROLL,ax */
	tmp_view.vp_roll = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* draw crater
	/* push	si */
	PUSH(si);
	/* mov	si,OFFSET TMP_MOB */
	si = m2c::near_offset_external(tmp_mob);
	/* call	DrawMobile */
	CALL(drawmobile, 0);
	/* pop	si */
	POP(si);
	/* add	si,CRATER_REC_SIZE */
	ADD(si, 14);
	/* pop	cx */
	POP(cx);
	/* loop	CraterLoop */
	LOOP(craterloop);
	/* ret */
	RETN(0);
	// 0 ;-------------------------------------
	// 0 ;* early out, tidy up before returning
	// 0 ;-------------------------------------
donecraters:
	// 4379 
	/* DoneCraters:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* pop	cx */
	POP(cx);
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
                case m2c::kcraterloop: 	goto craterloop;
        case m2c::kdonecraters: 	goto donecraters;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kmakecrater: 	goto makecrater;
        case m2c::kscancraters: 	goto scancraters;
        default: return __dispatch_call(__disp, _state);
    };
}

