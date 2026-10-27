/* THIS IS GENERATED FILE */

        
#include "uservis.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
uservisual:
	// 1627 
	// 0 ;------------------------------------------
	// 0 ;* receive opponent data in two player game
	// 0 ;------------------------------------------
	// 0 ;* note: Receive opponent data here (as late as possible in control loop) to
	// 0 ;*       allow as much time as possible between transmitting Tornado data and
	// 0 ;*       receiving opponent data.
edummylabel1:
	// 4369 
	/* test	RxFlag,1 */
	TEST(rxflag, 1);
	/* jz	@F */
	if (!(rxflag & 1)) {goto dummylabel1;}
	/* call	RxOpponentData */
	CALLF(rxopponentdata, 0);
	// 0 ;---------------------
	// 0 ;* draw mobile objects
	// 0 ;---------------------
	// 0 ;* for y sector offset = -1 to +1
dummylabel1:
	// 4371 
	/* @@:		mov	cx,3		;y count */
	cx = 3;
	/* mov	di,-1		;y sector offset */
	di = -1;
scanyloop:
	// 4373 
	/* ScanYLoop:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;* for x sector offset = -1 to +1
	/* mov	cx,3		;x count */
	cx = 3;
	/* mov	si,-1		;x sector offset */
	si = -1;
scanxloop:
	// 4375 
	/* ScanXLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* calc sector map co-ords
	/* mov	ax,V_VIEW.VP_XSEC */
	ax = v_view.vp_xsec;
	/* add	ax,si		;x sec = vp x sec + x sec offset */
	ADD(ax, si);
	/* mov	dx,V_VIEW.VP_YSEC */
	dx = v_view.vp_ysec;
	/* add	dx,di		;y sec = vp y sec + y sec offset */
	ADD(dx, di);
	// 0 ;* draw mobiles in sector (if any)
	/* call	LocateMobiles */
	CALLF(locatemobiles, 0);
	/* jc	SkipSector	;no mobiles located -> */
	if (CF) {goto skipsector;}
mobloop:
	// 4377 
	/* MobLoop:	cmp	si,-1		;list terminator? */
	CMP(si, -1);
	/* je	SkipSector	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto skipsector;}
	/* cmp	si,OFFSET M_MOBILE	;Tornado? */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	ContMob			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto contmob;}
	/* test	InCockpit,1	;external view? */
	TEST(incockpit, 1);
	/* jnz	NextMob		;no -> */
	if ((incockpit & 1) != 0) {goto nextmob;}
contmob:
	// 4379 
	/* ContMob:	push	si */
	PUSH(si);
	/* call	DrawMobile */
	CALL(drawmobile, 0);
	/* pop	si */
	POP(si);
nextmob:
	// 4381 
	/* NextMob:	mov	si,MOB_LINK_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	MobLoop */
	goto mobloop;
	// 0 ;* next x sector
skipsector:
	// 4383 
	/* SkipSector:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,1		;x = x + 1 */
	ADD(si, 1);
	/* loop	ScanXLoop */
	LOOP(scanxloop);
	// 0 ;* next y sector
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* add	di,1		;y = y + 1 */
	ADD(di, 1);
	/* loop	ScanYLoop */
	LOOP(scanyloop);
	// 0 ;--------------
	// 0 ;* draw weapons
	// 0 ;--------------
	/* call	DrawWeapons */
	CALL(drawweapons, 0);
	/* ret */
	RETN(0);
switchonlights:
	// 1706 
	/* mov	al,Night	;night or foggy? */
	al = night;
edummylabel2:
	// 4385 
	/* or	al,Fog */
	OR(al, fog);
	/* jz	ExitSwitchOn	;no -> */
	if (al == 0) {goto exitswitchon;}
	/* mov	cx,256			;illuminate 256 sectors */
	cx = 256;
	/* mov	si,OFFSET SectorTable */
	si = m2c::near_offset_external(sectortable);
	/* mov	ax,SEG SectorDataStart */
	ax = m2c::segment_of_external(sectordatastart);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
switchonloop:
	// 4387 
	/* SwitchOnLoop:  	mov	di,[si].SEC_OBJ_PTR */
	di = m2c::getdata(*((dw*)((db*)&((sectordata*)raddr(ds,si))->sec_obj_ptr)));
dummylabel2:
	// 4389 
	/* @@:		cmp	BYTE PTR ES:[di],-1	;end of list? */
	CMP(*(raddr(es,di)), -1);
	/* je	@F			;yes -> */
	if ((db)(*(raddr(es,di))) == (db)(-1)) {goto dummylabel3;}
	/* or	BYTE PTR ES:[di+1],OBJECT_LIGHTS */
	OR(*(raddr(es,di+1)), 0x0);
	/* add	di,4 */
	ADD(di, 4);
	/* jmp	@B */
	goto dummylabel2;
dummylabel3:
	// 4391 
	/* @@:		add	si,SEC_REC_SIZE */
	ADD(si, 4);
	/* loop	SwitchOnLoop */
	LOOP(switchonloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
exitswitchon:
	// 4393 
	/* ExitSwitchOn:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcontmob: 	goto contmob;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kexitswitchon: 	goto exitswitchon;
        case m2c::kmobloop: 	goto mobloop;
        case m2c::knextmob: 	goto nextmob;
        case m2c::kscanxloop: 	goto scanxloop;
        case m2c::kscanyloop: 	goto scanyloop;
        case m2c::kskipsector: 	goto skipsector;
        case m2c::kswitchonlights: 	goto switchonlights;
        case m2c::kswitchonloop: 	goto switchonloop;
        case m2c::kuservisual: 	goto uservisual;
        default: return __dispatch_call(__disp, _state);
    };
}

