/* THIS IS GENERATED FILE */

        
#include "secdata1.h"

                

 __attribute__((weak)) bool buildsctrtables(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    buildsctrtables:
    _begin:
	// 0 ;----------------------------------------
	// 0 ;* scan sector data and build SectorTable
	// 0 ;----------------------------------------
edummylabel1:
	// 4369 
	/* mov	cx,256			;expect data for 256 sectors */
	cx = 256;
	/* mov	si,OFFSET SectorTable */
	si = m2c::near_offset_external(sectortable);
	/* mov	di,OFFSET SectorDataStart */
	di = m2c::near_offset_external(sectordatastart);
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
initsctrloop:
	// 4371 
	/* InitSctrLoop:	mov	[si].SEC_OBJ_PTR,di	;object ptr */
	m2c::setdata(&(*((dw*)((db*)&((sectordata*)raddr(ds,si))->sec_obj_ptr))), m2c::getdata(di));
dummylabel1:
	// 4373 
	/* @@:		cmp	BYTE PTR ES:[di],-1	;end of list? */
	CMP(*(raddr(es,di)), -1);
	/* je	@F			;yes -> */
	if ((db)(*(raddr(es,di))) == (db)(-1)) {goto dummylabel2;}
	/* add	di,4 */
	ADD(di, 4);
	/* jmp	@B */
	goto dummylabel1;
dummylabel2:
	// 4375 
	/* @@:		inc	di			;skip terminator */
	INC(di);
	/* mov	[si].SEC_FLAT_PTR,di	;flat object ptr */
	m2c::setdata(&(*((dw*)((db*)&((sectordata*)raddr(ds,si))->sec_flat_ptr))), m2c::getdata(di));
dummylabel3:
	// 4377 
	/* @@:		cmp	BYTE PTR ES:[di],-1	;end of list? */
	CMP(*(raddr(es,di)), -1);
	/* je	@F			;yes -> */
	if ((db)(*(raddr(es,di))) == (db)(-1)) {goto dummylabel4;}
	/* add	di,4 */
	ADD(di, 4);
	/* jmp	@B */
	goto dummylabel3;
dummylabel4:
	// 4379 
	/* @@:		inc	di			;skip terminator */
	INC(di);
	/* add	si,SEC_REC_SIZE		;next table entry */
	ADD(si, 4);
	/* loop	InitSctrLoop */
	LOOP(initsctrloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;-------------------------------------------
	// 0 ;* scan sector data and build MobSectorTable
	// 0 ;-------------------------------------------
	/* mov	cx,256			;expect data for 256 sectors */
	cx = 256;
	/* mov	si,OFFSET MobSectorTable */
	si = m2c::near_offset_external(mobsectortable);
	/* mov	di,OFFSET MSctrDataStart */
	di = m2c::near_offset_external(msctrdatastart);
	/* mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
initmsctrloop:
	// 4381 
	/* InitMSctrLoop:	mov	[si],di			;static mobile ptr */
	m2c::setdata(&(*(dw*)(raddr(ds,si))), m2c::getdata(di));
dummylabel5:
	// 4383 
	/* @@:		cmp	ES:[di].STAT_NUM,-1	;end of list? */
	CMP(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num)), -1);
	/* je	@F			;yes -> */
	if ((db)(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num))) == (db)(-1)) {goto dummylabel6;}
	/* add	di,STAT_REC_SIZE */
	ADD(di, 8);
	/* jmp	@B */
	goto dummylabel5;
dummylabel6:
	// 4385 
	/* @@:		add	di,2			;skip terminator and padding */
	ADD(di, 2);
	/* add	si,2			;next table entry */
	ADD(si, 2);
	/* loop	InitMSctrLoop */
	LOOP(initmsctrloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kbuildsctrtables: 	goto buildsctrtables;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kinitmsctrloop: 	goto initmsctrloop;
        case m2c::kinitsctrloop: 	goto initsctrloop;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}

