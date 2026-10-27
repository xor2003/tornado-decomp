/* THIS IS GENERATED FILE */

        
#include "secdraw.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 702 
exitsector:
	// 4369 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
drawsector:
	// 704
	/* mov	bp,MapIndex */
	bp = mapindex;
edummylabel1:
	// 4371
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);

	/* test	al,al		;null sector? */
	TEST(al, al);
	/* jz	ExitSector	;yes -> */
	if (!(al & al)) {goto exitsector;}
	/* neg	di		;-(y sec offset) */
	NEG(di);
	/* mov	cx,si */
	cx = si;
	/* mov	bp,di */
	bp = di;
	// 0 ;* calc pointer to sector data record
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* add	bx,OFFSET SectorTable */
	ADD(bx, m2c::near_offset_external(sectortable));
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 720 						add	bx,OFFSET SectorTable
	// 0 ;* calc sector grid offsets
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	/* shl	cx,1		;x sector offset * 64 */
	SHL(cx, 1);
	/* shl	bp,1		;y sector offset * 64 */
	SHL(bp, 1);
	// 0 ;* calc sector grid offset wrt viewpoint
	/* sub	cx,XGrid1 */
	SUB(cx, xgrid1);
	/* add	cx,64		;place around sector grid centre */
	ADD(cx, 64);
	/* sub	bp,YGrid1 */
	SUB(bp, ygrid1);
	/* add	bp,64		;place around sector grid centre */
	ADD(bp, 64);
	// 0 ;--------------------------
	// 0 ;* draw flat ground objects
	// 0 ;--------------------------
	/* push	bx		;store sector data pointer */
	PUSH(bx);
	/* mov	si,SEC_FLAT_PTR[bx] */
	si = m2c::getdata(*(dw*)(((db*)&((sectordata*)raddr(ds,bx))->sec_flat_ptr)));
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* flat ground object scan loop
flatobjectloop:
	// 4373 
	/* FlatObjectLoop:	mov	di,OFFSET FlatObject */
	di = m2c::near_offset_external(flatobject);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object number
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* jne	ContFlatLoop	;no -> */
	if ((db)(al) != (db)(-1)) {goto contflatloop;}
	/* jmp	ExitFlatLoop */
	goto exitflatloop;
contflatloop:
	// 4375 
	/* ContFlatLoop:	mov	OBJ_NUM[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_num), m2c::getdata(al));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object animation flags
	/* mov	OBJ_ANIM_FLAGS[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb1), m2c::getdata(al));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x grid position
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,cx		;add viewpoint x offset */
	ADD(ax, cx);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y grid position
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,bp		;add viewpoint y offset */
	ADD(ax, bp);
	// 0 ;* calc object centre position (abort if object out of range)
	/* cmp	bx,128		;in range? */
	CMP(bx, 128);
	/* ja	FlatObjectLoop	;no -> */
	if ((dw)(bx) > (dw)(128)) {goto flatobjectloop;}
	/* cmp	ax,128		;in range? */
	CMP(ax, 128);
	/* ja	FlatObjectLoop	;no -> */
	if ((dw)(ax) > (dw)(128)) {goto flatobjectloop;}
	/* push	si		;store list ptr */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* shl	bx,1		;make x index */
	SHL(bx, 1);
	/* shl	si,1		;make y index */
	SHL(si, 1);
	// 0 ;* store object x grid index and y grid index
	/* mov	OBJ_XGRID[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(bx));
	/* mov	OBJ_YGRID[di],si */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(si));
	// 0 ;* calc y pos (calc y pos first to reject objects behind)
	/* mov	ax,YE01 */
	ax = ye01;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[si] */
	ADD(ax, *(dw*)(((db*)&ysy)+si));
	/* jo	AbortFlatObject	;overflow -> */
	if (OF) {goto abortflatobject;}
	/* cmp	ax,-1024	;in range (approx 512 * sqrt(2))? */
	CMP(ax, -1024);
	/* jl	AbortFlatObject	;no -> */
	if ((short)(ax) < (short)(-1024)) {goto abortflatobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortFlatObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortflatobject;}
	/* mov	OBJ_YPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(ax));
	// 0 ;* calc x pos
	/* mov	ax,XE01 */
	ax = xe01;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[si] */
	ADD(ax, *(dw*)(((db*)&xsy)+si));
	/* jo	AbortFlatObject	;overflow -> */
	if (OF) {goto abortflatobject;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	AbortFlatObject ;no -> */
	if ((short)(ax) < (short)(-16384)) {goto abortflatobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortFlatObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortflatobject;}
	/* mov	OBJ_XPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(ax));
	// 0 ;* calc z pos
	/* mov	ax,ZE01 */
	ax = ze01;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[si] */
	ADD(ax, *(dw*)(((db*)&zsy)+si));
	/* jo	AbortFlatObject	;overflow -> */
	if (OF) {goto abortflatobject;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	AbortFlatObject	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto abortflatobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortFlatObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortflatobject;}
	/* mov	OBJ_ZPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_zpos))), m2c::getdata(ax));
	// 0 ;* draw flat ground object (no depth buffering required)
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* call	DrawFlatObject */
	CALL(drawflatobject, 0);
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
abortflatobject:
	// 4377 
	/* AbortFlatObject:pop	si   		;restore list ptr */
	POP(si);
	/* jmp	FlatObjectLoop */
	goto flatobjectloop;
exitflatloop:
	// 4379 
	/* ExitFlatLoop:	pop	bx		;restore sector data pointer */
	POP(bx);
	// 0 ;---------------------
	// 0 ;* draw ground objects
	// 0 ;---------------------
	/* mov	si,SEC_OBJ_PTR[bx] */
	si = m2c::getdata(*(dw*)(((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
	/* mov	di,ObjectBufPtr */
	di = objectbufptr;
	// 0 ;* ground object scan loop
gndobjectloop:
	// 4381 
	/* GndObjectLoop:	cmp	di,OFFSET ObjectBufEnd */
	CMP(di, m2c::near_offset_external(objectbufend));
	/* jne	ContGndLoop1 */
	if ((dw)(di) != (dw)(m2c::near_offset_external(objectbufend))) {goto contgndloop1;}
	/* jmp	ExitGndLoop	;no space left in object buffer -> */
	goto exitgndloop;
contgndloop1:
	// 4383 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object number
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* jne	ContGndLoop2	;no -> */
	if ((db)(al) != (db)(-1)) {goto contgndloop2;}
	/* jmp	ExitGndLoop */
	goto exitgndloop;
contgndloop2:
	// 4385 
	/* ContGndLoop2:	mov	OBJ_NUM[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_num), m2c::getdata(al));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object animation flags
	/* mov	OBJ_ANIM_FLAGS[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb1), m2c::getdata(al));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x grid position
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,cx		;add viewpoint x offset */
	ADD(ax, cx);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y grid position
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,bp		;add viewpoint y offset */
	ADD(ax, bp);
	// 0 ;* calc object centre position (abort if object out of range)
	/* cmp	bx,128		;in range? */
	CMP(bx, 128);
	/* ja	GndObjectLoop	;no -> */
	if ((dw)(bx) > (dw)(128)) {goto gndobjectloop;}
	/* cmp	ax,128		;in range? */
	CMP(ax, 128);
	/* ja	GndObjectLoop	;no -> */
	if ((dw)(ax) > (dw)(128)) {goto gndobjectloop;}
	/* push	si		;store list ptr */
	PUSH(si);
	/* mov	si,ax */
	si = ax;
	/* shl	bx,1		;make x index */
	SHL(bx, 1);
	/* shl	si,1		;make y index */
	SHL(si, 1);
	// 0 ;* store object x grid index and y grid index
	/* mov	OBJ_XGRID[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(bx));
	/* mov	OBJ_YGRID[di],si */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(si));
	// 0 ;* calc y pos (calc y pos first to reject objects behind)
	/* mov	ax,YE01 */
	ax = ye01;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[si] */
	ADD(ax, *(dw*)(((db*)&ysy)+si));
	/* jo	AbortGndObject	;overflow -> */
	if (OF) {goto abortgndobject;}
	/* cmp	ax,-1024	;in range (approx 512 * sqrt(2))? */
	CMP(ax, -1024);
	/* jl	AbortGndObject	;no -> */
	if ((short)(ax) < (short)(-1024)) {goto abortgndobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortGndObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortgndobject;}
	/* mov	OBJ_YPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(ax));
	/* mov	dx,ax */
	dx = ax;
	// 0 ;* calc x pos
	/* mov	ax,XE01 */
	ax = xe01;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[si] */
	ADD(ax, *(dw*)(((db*)&xsy)+si));
	/* jo	AbortGndObject	;overflow -> */
	if (OF) {goto abortgndobject;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	AbortGndObject 	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto abortgndobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortGndObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortgndobject;}
	/* mov	OBJ_XPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(ax));
	// 0 ;* calc z pos
	/* mov	ax,ZE01 */
	ax = ze01;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[si] */
	ADD(ax, *(dw*)(((db*)&zsy)+si));
	/* jo	AbortGndObject 	;overflow -> */
	if (OF) {goto abortgndobject;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	AbortGndObject	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto abortgndobject;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	AbortGndObject	;no -> */
	if ((short)(ax) > (short)(16383)) {goto abortgndobject;}
	/* mov	OBJ_ZPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_zpos))), m2c::getdata(ax));
	// 0 ;* sort object distance
	/* call	ObjectDistSort1 */
	CALL(objectdistsort1, 0);
	/* mov	al,OTYPE_GROUND */
	al = 0;
	/* mov	OBJ_TYPE[di],al */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_type), m2c::getdata(al));
	/* add	di,OBJ_REC_SIZE */
	ADD(di, 20);
abortgndobject:
	// 4387 
	/* AbortGndObject:	pop	si   		;restore list ptr */
	POP(si);
	/* jmp	GndObjectLoop */
	goto gndobjectloop;
exitgndloop:
	// 4389 
	/* ExitGndLoop:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ObjectBufPtr,di	;update object buffer pointer */
	objectbufptr = di;
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
                case m2c::kabortflatobject: 	goto abortflatobject;
        case m2c::kabortgndobject: 	goto abortgndobject;
        case m2c::kcontflatloop: 	goto contflatloop;
        case m2c::kcontgndloop1: 	goto contgndloop1;
        case m2c::kcontgndloop2: 	goto contgndloop2;
        case m2c::kdrawsector: 	goto drawsector;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitflatloop: 	goto exitflatloop;
        case m2c::kexitgndloop: 	goto exitgndloop;
        case m2c::kexitsector: 	goto exitsector;
        case m2c::kflatobjectloop: 	goto flatobjectloop;
        case m2c::kgndobjectloop: 	goto gndobjectloop;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}

