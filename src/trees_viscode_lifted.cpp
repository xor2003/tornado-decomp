/* THIS IS GENERATED FILE */

        
#include "trees.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
viscode_0_proc:
	// 937 
exittrees:
	// 4369 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
scantrees:
	// 939 
	/* test	TreesEnabled,1	;enabled? */
	TEST(*(treesenabled), 1);
edummylabel1:
	// 4371 
	/* jz	ExitTrees	;no -> */
	if (ZF) {goto exittrees;}
	/* neg	di		;-(y sec offset) */
	NEG(di);
	// 0 ;* calc sector grid offsets
	/* mov	cl,6 */
	cl = 6;
	/* shl	si,cl		;x sector offset * 64 */
	SHL(si, cl);
	/* shl	di,cl		;y sector offset * 64 */
	SHL(di, cl);
	// 0 ;* calc sector grid offset wrt viewpoint
	/* sub	si,XGrid1 */
	SUB(si, xgrid1);
	/* add	si,64		;place around sector grid centre */
	ADD(si, 64);
	/* sub	di,YGrid1 */
	SUB(di, ygrid1);
	/* add	di,64		;place around sector grid centre */
	ADD(di, 64);
	/* mov	XTemp,si */
	xtemp = si;
	/* mov	YTemp,di */
	ytemp = di;
	// 0 ;* select layout wrt xsec and ysec (via MapIndex so values are wrapped)
	/* mov	ax,MapIndex */
	ax = mapindex;
	/* mov	bx,ax */
	bx = ax;
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* and	ax,01b		;x */
	AND(ax, 0x1);
	/* and	bx,10b		;y */
	AND(bx, 0x2);
	/* or	bx,ax */
	OR(bx, ax);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,TreeLayouts[bx] */
	bx = *(dw*)(((db*)&treelayouts)+bx);
	// 0 ;* draw type 1 tree objects
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,TreeLayer1[bp] */
	al = *((&treelayer1)+bp);
	/* test	al,al		;any trees? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel1;}
	/* mov	ah,GND_COPSEA */
	ah = 13;
	/* push	bx */
	PUSH(bx);
	/* call	DrawTrees */
	CALL(drawtrees, 0);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw type 2 tree objects
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel1:
	// 4373 
	/* @@:		add	bx,8*2 */
	ADD(bx, 8*2);
	/* mov	al,TreeLayer2[bp] */
	al = *((&treelayer2)+bp);
	/* test	al,al		;any trees? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel2;}
	/* mov	ah,GND_COPSEB */
	ah = 14;
	/* push	bx */
	PUSH(bx);
	/* call	DrawTrees */
	CALL(drawtrees, 0);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw type 3 tree objects
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel2:
	// 4375 
	/* @@:		add	bx,8*2 */
	ADD(bx, 8*2);
	/* mov	al,TreeLayer3[bp] */
	al = *((&treelayer3)+bp);
	/* test	al,al		;any trees? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel3;}
	/* mov	ah,GND_COPSEC */
	ah = 15;
	/* push	bx */
	PUSH(bx);
	/* call	DrawTrees */
	CALL(drawtrees, 0);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw type 4 tree objects
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel3:
	// 4377 
	/* @@:		add	bx,8*2 */
	ADD(bx, 8*2);
	/* mov	al,TreeLayer4[bp] */
	al = *((&treelayer4)+bp);
	/* test	al,al		;any trees? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel4;}
	/* mov	ah,GND_COPSED */
	ah = 16;
	/* call	DrawTrees */
	CALL(drawtrees, 0);
dummylabel4:
	// 4379 
	/* @@:		ret */
	RETN(0);
drawtrees:
	// 1025 
	/* mov	di,ObjectBufPtr ;* kill: assume all */
	di = objectbufptr;
treeloop:
	// 4381 
	/* TreeLoop:	cmp	di,OFFSET ObjectBufEnd */
	CMP(di, m2c::near_offset_external(objectbufend));
	/* jne	__m2c_macrolocal_1_skip */
	if ((dw)(di) != (dw)(m2c::near_offset_external(objectbufend))) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ExitTreeLoop */
	goto exittreeloop;
__m2c_macrolocal_1_skip:
	// 4383 
	// 0 ;no space left in object buffer ->
	/* shr	al,1		;draw tree? */
	SHR(al, 1);
	/* jc	__m2c_macrolocal_2_skip */
	if (CF) {goto __m2c_macrolocal_2_skip;}
	/* jmp	SkipTree */
	goto skiptree;
__m2c_macrolocal_2_skip:
	// 4385 
	// 0 ;no ->
	/* push	ax		;store tree layout data */
	PUSH(ax);
	/* push	bx		;store tree position index */
	PUSH(bx);
	/* mov	OBJ_NUM[di],ah	;store tree object */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_num), m2c::getdata(ah));
	/* mov	al,[bx+0] 	;fetch x grid position */
	al = m2c::getdata(*(raddr(ds,bx+0)));
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,XTemp	;add viewpoint x offset */
	ADD(ax, xtemp);
	/* mov	si,ax */
	si = ax;
	/* mov	al,[bx+1]	;fetch y grid position */
	al = m2c::getdata(*(raddr(ds,bx+1)));
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	ax,YTemp	;add viewpoint y offset */
	ADD(ax, ytemp);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* calc object centre position (abort if object out of range)
	/* cmp	si,128		;in range? */
	CMP(si, 128);
	/* ja	NextTree	;no -> */
	if ((dw)(si) > (dw)(128)) {goto nexttree;}
	/* cmp	bx,128		;in range? */
	CMP(bx, 128);
	/* ja	NextTree	;no -> */
	if ((dw)(bx) > (dw)(128)) {goto nexttree;}
	/* shl	si,1		;make x index */
	SHL(si, 1);
	/* shl	bx,1		;make y index */
	SHL(bx, 1);
	// 0 ;* store object x grid index and y grid index
	/* mov	OBJ_XGRID[di],si */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw1))), m2c::getdata(si));
	/* mov	OBJ_YGRID[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_userw2))), m2c::getdata(bx));
	// 0 ;* calc y pos (calc y pos first to reject objects behind)
	/* mov	ax,YE01 */
	ax = ye01;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[bx] */
	ADD(ax, *(dw*)(((db*)&ysy)+bx));
	/* jo	NextTree	;overflow -> */
	if (OF) {goto nexttree;}
	/* cmp	ax,-1024	;in range (approx 512 * sqrt(2))? */
	CMP(ax, -1024);
	/* jl	NextTree	;no -> */
	if ((short)(ax) < (short)(-1024)) {goto nexttree;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	NextTree	;no -> */
	if ((short)(ax) > (short)(16383)) {goto nexttree;}
	/* mov	OBJ_YPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ypos))), m2c::getdata(ax));
	/* mov	dx,ax */
	dx = ax;
	// 0 ;* calc x pos
	/* mov	ax,XE01 */
	ax = xe01;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[bx] */
	ADD(ax, *(dw*)(((db*)&xsy)+bx));
	/* jo	NextTree	;overflow -> */
	if (OF) {goto nexttree;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	NextTree 	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto nexttree;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	NextTree	;no -> */
	if ((short)(ax) > (short)(16383)) {goto nexttree;}
	/* mov	OBJ_XPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos))), m2c::getdata(ax));
	// 0 ;* calc z pos
	/* mov	ax,ZE01 */
	ax = ze01;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[bx] */
	ADD(ax, *(dw*)(((db*)&zsy)+bx));
	/* jo	NextTree 	;overflow -> */
	if (OF) {goto nexttree;}
	/* cmp	ax,-16384	;in range? */
	CMP(ax, -16384);
	/* jl	NextTree	;no -> */
	if ((short)(ax) < (short)(-16384)) {goto nexttree;}
	/* cmp	ax,+16383	;in range? */
	CMP(ax, 16383);
	/* jg	NextTree	;no -> */
	if ((short)(ax) > (short)(16383)) {goto nexttree;}
	/* mov	OBJ_ZPOS[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_zpos))), m2c::getdata(ax));
	// 0 ;* sort object distance
	/* call	ObjectDistSort1 */
	CALL(objectdistsort1, 0);
	/* mov	OBJ_TYPE[di],OTYPE_GROUND */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_type), m2c::getdata(0));
	/* mov	OBJ_ANIM_FLAGS[di],0 */
	m2c::setdata(&(((objectdata*)raddr(ds,di))->obj_userb1), m2c::getdata(0));
	/* add	di,OBJ_REC_SIZE */
	ADD(di, 20);
nexttree:
	// 4387 
	/* NextTree:	pop	bx		;restore tree position index */
	POP(bx);
	/* pop	ax		;restore tree layout data */
	POP(ax);
skiptree:
	// 4389 
	/* SkipTree:	add	bx,2		;next index */
	ADD(bx, 2);
	/* test	al,al		;any more trees? */
	TEST(al, al);
	/* jz	__m2c_macrolocal_3_skip */
	if (!(al & al)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	TreeLoop */
	goto treeloop;
__m2c_macrolocal_3_skip:
	// 4391 
	// 0 ;yes ->
exittreeloop:
	// 4393 
	/* ExitTreeLoop:	mov	ObjectBufPtr,di	;update object buffer pointer */
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
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::kdrawtrees: 	goto drawtrees;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexittreeloop: 	goto exittreeloop;
        case m2c::kexittrees: 	goto exittrees;
        case m2c::knexttree: 	goto nexttree;
        case m2c::kscantrees: 	goto scantrees;
        case m2c::kskiptree: 	goto skiptree;
        case m2c::ktreeloop: 	goto treeloop;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}

