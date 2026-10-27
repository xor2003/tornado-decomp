/* THIS IS GENERATED FILE */

        
#include "weapons.h"

                

 __attribute__((weak)) bool drawweapons(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    drawweapons:
    _begin:
	/* mov	ax,WPNDATA ;* kill: assume all */
	ax = seg_offset(wpndata);
edummylabel55:
	// 5515 
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,NUM_WEAPONS */
	cx = 128;
	/* mov	si,OFFSET WeaponList */
	si = m2c::near_offset_external(weaponlist);
	// 0 ;------------------
	// 0 ;* draw weapon loop
	// 0 ;------------------
drawloop:
	// 5517 
	/* DrawLoop:	cmp	_WPN_TYPE[si],NULL_WEAPON	;in use? */
	CMP(*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type, -1);
	/* je	@F	      			;no -> */
	if ((db)(*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type) == (db)(-1)) {goto dummylabel161;}
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	// 0 ;-----------------------------------------------
	// 0 ;* copy MOBILE and VIEWPOINT data into workspace (WEAPON not required)
	// 0 ;-----------------------------------------------
	/* mov	di,OFFSET WPN_Workspace */
	di = m2c::near_offset_external(wpn_workspace);
	/* mov	cx,MOB_REC_SIZE+VIEW_REC_SIZE */
	cx = 6+18;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 11556 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 11558 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 11559 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 11560 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 0 ;-------------
	// 0 ;* draw mobile
	// 0 ;-------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* call	DrawMobile */
	CALL(drawmobile, 0);
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
dummylabel161:
	// 5519 
	/* @@:		add	si,WPN_DATA_SIZE */
	ADD(si, 6+18+28);
	/* loop	DrawLoop */
	LOOP(drawloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
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
                case m2c::kdrawloop: 	goto drawloop;
        case m2c::kdrawweapons: 	goto drawweapons;
        case m2c::kdummylabel161: 	goto dummylabel161;
        case m2c::kedummylabel55: 	goto edummylabel55;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

