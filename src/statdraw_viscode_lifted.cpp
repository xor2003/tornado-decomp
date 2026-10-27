/* THIS IS GENERATED FILE */

        
#include "statdraw.h"

                

 __attribute__((weak)) bool drawstatmobiles(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    drawstatmobiles:
    _begin:
	/* mov	bp,MapIndex ;*       on the map (not in no man's land). */
	bp = mapindex;
edummylabel1:
	// 4369 
	/* mov	bl,MobileLayer1[bp] */
	bl = *((&mobilelayer1)+bp);
	/* test	bl,bl		;null sector? */
	TEST(bl, bl);
	/* jz	NullSector	;yes -> */
	if (!(bl & bl)) {goto nullsector;}
	// 0 ;* sort sector position
	/* mov	ax,V_VIEW.VP_XSEC */
	ax = v_view.vp_xsec;
	/* add	ax,si */
	ADD(ax, si);
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,V_VIEW.VP_YSEC */
	ax = v_view.vp_ysec;
	/* add	ax,di */
	ADD(ax, di);
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	// 0 ;* sort sector list ptr
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,MobSectorTable[bx] */
	si = *(dw*)(((db*)&mobsectortable)+bx);
	// 0 ;* "static" mobile draw loop
scanloop:
	// 4371 
	/* ScanLoop:  	mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,ES:STAT_NUM[si] */
	al = m2c::getdata(((statmob*)raddr(es,si))->stat_num);
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	ExitSector */
	if ((db)(al) == (db)(-1)) {goto exitsector;}
	/* mov	TMP_MOB.MOB_NUM,al */
	tmp_mob.mob_num = al;
	/* mov	TMP_MOB.MOB_TYPE,OTYPE_MOBILE1 */
	tmp_mob.mob_type = 2;
	/* mov	al,ES:STAT_ANIM[si] */
	al = m2c::getdata(((statmob*)raddr(es,si))->stat_anim);
	/* mov	TMP_MOB.MOB_ANIM,al */
	tmp_mob.mob_anim = al;
	// 0 ;* (note: MOB_LINK_PTR is not required and defaults to -1)
	/* mov	ax,ES:STAT_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((statmob*)raddr(es,si))->stat_xft)));
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,ES:STAT_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((statmob*)raddr(es,si))->stat_yft)));
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	/* mov	ax,ES:STAT_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((statmob*)raddr(es,si))->stat_hdg)));
	/* mov	TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* push	si */
	PUSH(si);
	/* mov	si,OFFSET TMP_MOB */
	si = m2c::near_offset_external(tmp_mob);
	/* call	DrawMobile */
	CALL(drawmobile, 0);
	/* pop	si */
	POP(si);
	/* add	si,STAT_REC_SIZE */
	ADD(si, 8);
	/* jmp	ScanLoop */
	goto scanloop;
exitsector:
	// 4373 
	/* ExitSector:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
nullsector:
	// 4375 
	/* NullSector:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kdrawstatmobiles: 	goto drawstatmobiles;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitsector: 	goto exitsector;
        case m2c::knullsector: 	goto nullsector;
        case m2c::kscanloop: 	goto scanloop;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

