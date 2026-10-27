/* THIS IS GENERATED FILE */

        
#include "mobsort.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
createmobile:
	// 517 
	// 0 ;* search bins for sector match
edummylabel1:
	// 4369 
	/* mov	ax,_VP_XSEC[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* mov	dx,_VP_YSEC[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* mov	bx,MobSortPtr */
	bx = mobsortptr;
dummylabel1:
	// 4371 
	/* @@:		sub	bx,MSORT_REC_SIZE */
	SUB(bx, 6);
	/* cmp	bx,OFFSET MobSortBins	;all bins searched? */
	CMP(bx, m2c::near_offset_external(mobsortbins));
	/* jb	NoMatchFound		;yes -> */
	if ((dw)(bx) < (dw)(m2c::near_offset_external(mobsortbins))) {goto nomatchfound;}
	/* cmp	ax,MSORT_XSEC[bx]	;x sec match? */
	CMP(ax, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)));
	/* jne	@B			;no -> */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)))) {goto dummylabel1;}
	/* cmp	dx,MSORT_YSEC[bx]	;y sec match? */
	CMP(dx, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)));
	/* jne	@B			;no -> */
	if ((dw)(dx) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)))) {goto dummylabel1;}
	/* jmp	LinkMobile */
	goto linkmobile;
	// 0 ;* no match found - initialize new bin (if available)
nomatchfound:
	// 4373 
	/* NoMatchFound:	mov	bx,MobSortPtr */
	bx = mobsortptr;
	/* cmp	bx,END_SORT_BINS	;any bins available? */
	CMP(bx, m2c::near_offset_external(mobsortbins)+(6*256));
	/* je	CreateError		;no -> */
	if ((dw)(bx) == (dw)(m2c::near_offset_external(mobsortbins)+(6*256))) {goto createerror;}
	/* mov	MSORT_XSEC[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec))), m2c::getdata(ax));
	/* mov	MSORT_YSEC[bx],dx */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec))), m2c::getdata(dx));
	/* mov	MSORT_PTR[bx],-1 */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr))), m2c::getdata(-1));
	/* add	MobSortPtr,MSORT_REC_SIZE	;update ptr */
	ADD(mobsortptr, 6);
	// 0 ;* link mobile into head of list
linkmobile:
	// 4375 
	/* LinkMobile:	mov	ax,MSORT_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr)));
	/* mov	MSORT_PTR[bx],si */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr))), m2c::getdata(si));
	/* mov	MOB_LINK_PTR[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr))), m2c::getdata(ax));
	/* inc	NumMobiles */
	INC(nummobiles);
	/* clc			;cf = 0 = mobile created */
	CLC;
	/* ret */
	RETF(0);
createerror:
	// 4377 
	/* CreateError:	stc			;cf = 1 = creation error */
	STC;
	/* ret */
	RETF(0);
deletemobile:
	// 561 
	// 0 ;* search bins for sector match
edummylabel2:
	// 4379 
	/* mov	ax,_VP_XSEC[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* mov	dx,_VP_YSEC[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* mov	bx,MobSortPtr */
	bx = mobsortptr;
dummylabel2:
	// 4381 
	/* @@:		sub	bx,MSORT_REC_SIZE */
	SUB(bx, 6);
	/* cmp	bx,OFFSET MobSortBins	;all bins searched? */
	CMP(bx, m2c::near_offset_external(mobsortbins));
	/* jb	DeleteError		;yes -> */
	if ((dw)(bx) < (dw)(m2c::near_offset_external(mobsortbins))) {goto deleteerror;}
	/* cmp	ax,MSORT_XSEC[bx]	;x sec match? */
	CMP(ax, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)));
	/* jne	@B			;no -> */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)))) {goto dummylabel2;}
	/* cmp	dx,MSORT_YSEC[bx]	;y sec match? */
	CMP(dx, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)));
	/* jne	@B			;no -> */
	if ((dw)(dx) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)))) {goto dummylabel2;}
	// 0 ;* bin found - check if first mobile in bin
	/* mov	di,MSORT_PTR[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr)));
	/* cmp	di,si		;first object in bin? */
	CMP(di, si);
	/* jne	SearchBin	;no -> */
	if ((dw)(di) != (dw)(si)) {goto searchbin;}
	// 0 ;* unlink first object in bin
	/* mov	ax,MOB_LINK_PTR[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* mov	MSORT_PTR[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr))), m2c::getdata(ax));
	// 0 ;* if bin empty then
	// 0 ;*    if not last bin in use then
	// 0 ;*       copy contents of last bin to this bin (house keeping)
	// 0 ;*    endif
	// 0 ;* endif
	/* cmp	ax,-1		;bin empty? */
	CMP(ax, -1);
	/* jne	DeleteOk	;no -> */
	if ((dw)(ax) != (dw)(-1)) {goto deleteok;}
	/* mov	di,MobSortPtr */
	di = mobsortptr;
	/* sub	di,MSORT_REC_SIZE	;ptr -> last bin in use */
	SUB(di, 6);
	/* cmp	bx,di		;is empty bin the last bin in use? */
	CMP(bx, di);
	/* je	@F		;yes -> */
	if ((dw)(bx) == (dw)(di)) {goto dummylabel3;}
	/* mov	ax,MSORT_XSEC[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,di))->msort_xsec)));
	/* mov	MSORT_XSEC[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec))), m2c::getdata(ax));
	/* mov	ax,MSORT_YSEC[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,di))->msort_ysec)));
	/* mov	MSORT_YSEC[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec))), m2c::getdata(ax));
	/* mov	ax,MSORT_PTR[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,di))->msort_ptr)));
	/* mov	MSORT_PTR[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr))), m2c::getdata(ax));
dummylabel3:
	// 4383 
	/* @@:		sub	MobSortPtr,MSORT_REC_SIZE	;update ptr */
	SUB(mobsortptr, 6);
	/* jmp	DeleteOk */
	goto deleteok;
	// 0 ;* search bin for ptr match
searchbin:
	// 4385 
	/* SearchBin:	mov	ax,MOB_LINK_PTR[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,di))->mob_link_ptr)));
	/* cmp	ax,-1		;list terminator? */
	CMP(ax, -1);
	/* je	DeleteError	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto deleteerror;}
	/* cmp	ax,si		;found ptr match? */
	CMP(ax, si);
	/* je	UnlinkMobile	;yes -> */
	if ((dw)(ax) == (dw)(si)) {goto unlinkmobile;}
	/* mov	di,ax */
	di = ax;
	/* jmp	SearchBin */
	goto searchbin;
unlinkmobile:
	// 4387 
	/* UnlinkMobile:	mov	ax,MOB_LINK_PTR[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* mov	MOB_LINK_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((mobile*)raddr(ds,di))->mob_link_ptr))), m2c::getdata(ax));
deleteok:
	// 4389 
	/* DeleteOk:	dec	NumMobiles */
	DEC(nummobiles);
	/* clc			;cf = 0 = mobile deleted */
	CLC;
	/* ret */
	RETF(0);
deleteerror:
	// 4391 
	/* DeleteError:	stc			;cf = 1 = deletion error */
	STC;
	/* ret */
	RETF(0);
updatemobile:
	// 633 
	// 0 ;* sort zft
edummylabel3:
	// 4393 
	/* xchg	ax,cx */
	XCHG(ax, cx);
	/* cwd */
	CWD;
	/* add	WORD PTR _VP_ZFT_LO[si],ax */
	ADD(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), ax);
	/* adc	WORD PTR _VP_ZFT_HI[si],dx */
	ADC(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), dx);
	/* mov	ax,cx */
	ax = cx;
	// 0 ;* store old sector values
	/* mov	cx,_VP_XSEC[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* mov	dx,_VP_YSEC[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	// 0 ;* update position
	// 0 ;* update xsec, xft
	/* add	ax,MOB_REC_SIZE[si].VP_XFT	;x + ax */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_xft)));
	/* cmp	ax,8192		;change sector? */
	CMP(ax, 8192);
	/* jl	__m2c_macrolocal_1_MvXY1			;no -> */
	if ((short)(ax) < (short)(8192)) {goto __m2c_macrolocal_1_mvxy1;}
	/* sub	ax,16384 */
	SUB(ax, 16384);
	/* inc	MOB_REC_SIZE[si].VP_XSEC */
	INC(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_xsec)));
__m2c_macrolocal_1_mvxy1:
	// 4395 
	/* __m2c_macrolocal_1_MvXY1:		cmp	ax,-8192		;change sector? */
	CMP(ax, -8192);
	/* jge	__m2c_macrolocal_1_MvXY2			;no -> */
	if ((short)(ax) >= (short)(-8192)) {goto __m2c_macrolocal_1_mvxy2;}
	/* add	ax,16384 */
	ADD(ax, 16384);
	/* dec	MOB_REC_SIZE[si].VP_XSEC */
	DEC(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_xsec)));
__m2c_macrolocal_1_mvxy2:
	// 4397 
	/* __m2c_macrolocal_1_MvXY2:		mov	MOB_REC_SIZE[si].VP_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_xft))), m2c::getdata(ax));
	// 0 ;* update ysec, yft
	/* add	bx,MOB_REC_SIZE[si].VP_YFT	;y + bx */
	ADD(bx, *((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_yft)));
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_1_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_1_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	MOB_REC_SIZE[si].VP_YSEC */
	DEC(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_ysec)));
__m2c_macrolocal_1_mvxy3:
	// 4399 
	/* __m2c_macrolocal_1_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_1_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_1_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	MOB_REC_SIZE[si].VP_YSEC */
	INC(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_ysec)));
__m2c_macrolocal_1_mvxy4:
	// 4401 
	/* __m2c_macrolocal_1_MvXY4:		mov	MOB_REC_SIZE[si].VP_YFT,bx */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,mob_rec_size+si))->vp_yft))), m2c::getdata(bx));
	// 0 ;* changed sector?
	/* cmp	cx,_VP_XSEC[si]	;x sec changed? */
	CMP(cx, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* jne	@F		;yes -> */
	if ((dw)(cx) != (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)))) {goto dummylabel4;}
	/* cmp	dx,_VP_YSEC[si]	;y sec changed? */
	CMP(dx, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* je	UpdateOk	;no -> */
	if ((dw)(dx) == (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)))) {goto updateok;}
	// 0 ;* delete mobile (using old sector values)
dummylabel4:
	// 4403 
	/* @@:		xchg	cx,_VP_XSEC[si] */
	XCHG(cx, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* xchg	dx,_VP_YSEC[si] */
	XCHG(dx, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* push	dx */
	PUSH(dx);
	/* call	DeleteMobile */
	CALLF(deletemobile, 0);
	/* pop	dx */
	POP(dx);
	/* jc	UpdateError	;delete error -> */
	if (CF) {goto updateerror;}
	// 0 ;* create mobile (using new sector values)
	/* mov	_VP_XSEC[si],cx */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec))), m2c::getdata(cx));
	/* mov	_VP_YSEC[si],dx */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec))), m2c::getdata(dx));
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	/* jc	UpdateError	;delete error -> */
	if (CF) {goto updateerror;}
updateok:
	// 4405 
	/* UpdateOk:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
updateerror:
	// 4407 
	/* UpdateError:	stc			;cf = 1 = delete / create error */
	STC;
	/* ret */
	RETF(0);
locatemobiles:
	// 707 
	/* mov	bx,MobSortPtr ;* kill: bx, flags (except cf) */
	bx = mobsortptr;
dummylabel5:
	// 4409 
	/* @@:		sub	bx,MSORT_REC_SIZE */
	SUB(bx, 6);
	/* cmp	bx,OFFSET MobSortBins	;all bins searched? */
	CMP(bx, m2c::near_offset_external(mobsortbins));
	/* jb	NoMobsLocated		;yes -> */
	if ((dw)(bx) < (dw)(m2c::near_offset_external(mobsortbins))) {goto nomobslocated;}
	/* cmp	ax,MSORT_XSEC[bx]	;x sec match? */
	CMP(ax, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)));
	/* jne	@B			;no -> */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_xsec)))) {goto dummylabel5;}
	/* cmp	dx,MSORT_YSEC[bx]	;y sec match? */
	CMP(dx, *(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)));
	/* jne	@B			;no -> */
	if ((dw)(dx) != (dw)(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ysec)))) {goto dummylabel5;}
	/* mov	si,MSORT_PTR[bx] */
	si = m2c::getdata(*(dw*)(((db*)&((mobsort*)raddr(ds,bx))->msort_ptr)));
	/* clc			;cf = 0 = mobiles in sector */
	CLC;
	/* ret */
	RETF(0);
nomobslocated:
	// 4411 
	/* NoMobsLocated:	mov	si,-1 */
	si = -1;
	/* stc			;cf = 1 = no mobiles in sector */
	STC;
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
                case m2c::k__m2c_macrolocal_1_mvxy1: 	goto __m2c_macrolocal_1_mvxy1;
        case m2c::k__m2c_macrolocal_1_mvxy2: 	goto __m2c_macrolocal_1_mvxy2;
        case m2c::k__m2c_macrolocal_1_mvxy3: 	goto __m2c_macrolocal_1_mvxy3;
        case m2c::k__m2c_macrolocal_1_mvxy4: 	goto __m2c_macrolocal_1_mvxy4;
        case m2c::kcreateerror: 	goto createerror;
        case m2c::kcreatemobile: 	goto createmobile;
        case m2c::kdeleteerror: 	goto deleteerror;
        case m2c::kdeletemobile: 	goto deletemobile;
        case m2c::kdeleteok: 	goto deleteok;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::klinkmobile: 	goto linkmobile;
        case m2c::klocatemobiles: 	goto locatemobiles;
        case m2c::knomatchfound: 	goto nomatchfound;
        case m2c::knomobslocated: 	goto nomobslocated;
        case m2c::ksearchbin: 	goto searchbin;
        case m2c::kunlinkmobile: 	goto unlinkmobile;
        case m2c::kupdateerror: 	goto updateerror;
        case m2c::kupdatemobile: 	goto updatemobile;
        case m2c::kupdateok: 	goto updateok;
        default: return __dispatch_call(__disp, _state);
    };
}

