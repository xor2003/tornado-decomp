/* THIS IS GENERATED FILE */

        
#include "objdraw.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawobjects1:
	// 484 
	// 0 ;* draw all objects (starting with furthest)
edummylabel1:
	// 4369 
	/* mov	cx,NUM_BINS */
	cx = 64+1;
	/* mov	si,OFFSET ObjectDist1+NUM_BINS*2-2 */
	si = m2c::near_offset_external(objectdist1)+(64+1)*2-2;
binsearchloop:
	// 4371 
	/* BinSearchLoop:	mov	ax,[si]		;fetch object ptr from bin */
	ax = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	SearchNextBin	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto searchnextbin;}
	/* push	cx		;store counter */
	PUSH(cx);
	/* push	si		;store bin index */
	PUSH(si);
drawobjectloop:
	// 4373 
	/* DrawObjectLoop:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawObjectLoop	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawobjectloop;}
	/* pop	si		;restore bin index */
	POP(si);
	/* pop	cx		;restore counter */
	POP(cx);
searchnextbin:
	// 4375 
	/* SearchNextBin:	sub	si,2 */
	SUB(si, 2);
	/* loop	BinSearchLoop */
	LOOP(binsearchloop);
	/* ret */
	RETN(0);
drawobjects2:
	// 517 
	// 0 ;* draw in front objects
edummylabel2:
	// 4377 
	/* mov	ax,ObjectDist2[IN_FRONT_BIN] */
	ax = *(dw*)(((db*)&objectdist2)+2);
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	SkipBin2_1	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipbin2_1;}
drawobjloop2_1:
	// 4379 
	/* DrawObjLoop2_1:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawObjLoop2_1	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawobjloop2_1;}
	// 0 ;* draw behind objects
skipbin2_1:
	// 4381 
	/* SkipBin2_1:	mov	ax,ObjectDist2[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist2)+0);
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	SkipBin2_2	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipbin2_2;}
drawobjloop2_2:
	// 4383 
	/* DrawObjLoop2_2:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawObjLoop2_2	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawobjloop2_2;}
skipbin2_2:
	// 4385 
	/* SkipBin2_2:	ret */
	RETN(0);
drawobjects3:
	// 556 
	// 0 ;* draw in front objects
edummylabel3:
	// 4387 
	/* mov	ax,ObjectDist3[IN_FRONT_BIN] */
	ax = *(dw*)(((db*)&objectdist3)+2);
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	SkipBin3_1	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipbin3_1;}
drawobjloop3_1:
	// 4389 
	/* DrawObjLoop3_1:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawObjLoop3_1	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawobjloop3_1;}
	// 0 ;* draw behind objects
skipbin3_1:
	// 4391 
	/* SkipBin3_1:	mov	ax,ObjectDist3[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist3)+0);
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	SkipBin3_2	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipbin3_2;}
drawobjloop3_2:
	// 4393 
	/* DrawObjLoop3_2:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawObjLoop3_2	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawobjloop3_2;}
skipbin3_2:
	// 4395 
	/* SkipBin3_2:	ret */
	RETN(0);
drawfarobjects:
	// 595 
	// 0 ;* draw all objects (starting with furthest)
edummylabel4:
	// 4397 
	/* mov	cx,NUM_FAR_BINS */
	cx = 64+1;
	/* mov	si,OFFSET FarObjectDist+NUM_FAR_BINS*2-2 */
	si = m2c::near_offset_external(farobjectdist)+(64+1)*2-2;
farbinloop:
	// 4399 
	/* FarBinLoop:	mov	ax,[si]		;fetch object ptr from bin */
	ax = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* cmp	ax,-1		;valid object ptr? */
	CMP(ax, -1);
	/* je	NextFarBin	;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto nextfarbin;}
	/* push	cx		;store counter */
	PUSH(cx);
	/* push	si		;store bin index */
	PUSH(si);
drawfarobjloop:
	// 4401 
	/* DrawFarObjLoop:	mov	si,ax		;si -> object data */
	si = ax;
	/* mov	bl,OBJ_TYPE[si]	;fetch object type */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_type);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* push	si */
	PUSH(si);
	/* call	ObjectType[bx]	;draw object */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&objecttype)+bx));
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PTR[si]	;fetch ptr to next object */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	ax,-1		;any more objects in bin? */
	CMP(ax, -1);
	/* jne	DrawFarObjLoop	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto drawfarobjloop;}
	/* pop	si		;restore bin index */
	POP(si);
	/* pop	cx		;restore counter */
	POP(cx);
nextfarbin:
	// 4403 
	/* NextFarBin:	sub	si,2 */
	SUB(si, 2);
	/* loop	FarBinLoop */
	LOOP(farbinloop);
	/* ret */
	RETN(0);
objectdistsort1:
	// 631 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel5:
	// 4405 
	/* js	BehindSort1  	;yes -> */
	if (SF) {goto behindsort1;}
	// 0 ;* bin sort object distance to resolution of 256ft
	/* mov	al,dh		;/256 for bin sort */
	al = dh;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* add	ax,IN_FRONT_BIN	;skip behind bin */
	ADD(ax, 2);
	/* mov	si,ax */
	si = ax;
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,ObjectDist1[si] */
	ax = *(dw*)(((db*)&objectdist1)+si);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin1	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin1;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jge	InsertFirst1	;yes -> */
	if ((short)(dx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst1;}
searchbin1:
	// 4407 
	/* SearchBin1:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject1	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject1;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin1	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin1;}
insertobject1:
	// 4409 
	/* InsertObject1:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort1:
	// 4411 
	/* BehindSort1:	mov	ax,ObjectDist1[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist1)+0);
	/* mov	ObjectDist1[BEHIND_BIN],di */
	*(dw*)(((db*)&objectdist1)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin1:
	// 4413 
	/* EmptyBin1:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst1:
	// 4415 
	/* InsertFirst1:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
objectdistsort2:
	// 686 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel6:
	// 4417 
	/* js	BehindSort2  	;yes -> */
	if (SF) {goto behindsort2;}
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,ObjectDist2[IN_FRONT_BIN] */
	ax = *(dw*)(((db*)&objectdist2)+2);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin2	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin2;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jge	InsertFirst2	;yes -> */
	if ((short)(dx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst2;}
searchbin2:
	// 4419 
	/* SearchBin2:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject2	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject2;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin2	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin2;}
insertobject2:
	// 4421 
	/* InsertObject2:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort2:
	// 4423 
	/* BehindSort2:	mov	ax,ObjectDist2[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist2)+0);
	/* mov	ObjectDist2[BEHIND_BIN],di */
	*(dw*)(((db*)&objectdist2)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin2:
	// 4425 
	/* EmptyBin2:	mov	ObjectDist2[IN_FRONT_BIN],di */
	*(dw*)(((db*)&objectdist2)+2) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst2:
	// 4427 
	/* InsertFirst2:	mov	ObjectDist2[IN_FRONT_BIN],di */
	*(dw*)(((db*)&objectdist2)+2) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
objectdistsort3:
	// 734 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel7:
	// 4429 
	/* js	BehindSort3  	;yes -> */
	if (SF) {goto behindsort3;}
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,ObjectDist3[IN_FRONT_BIN] */
	ax = *(dw*)(((db*)&objectdist3)+2);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin3	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin3;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jge	InsertFirst3	;yes -> */
	if ((short)(dx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst3;}
searchbin3:
	// 4431 
	/* SearchBin3:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject3	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject3;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin3	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin3;}
insertobject3:
	// 4433 
	/* InsertObject3:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort3:
	// 4435 
	/* BehindSort3:	mov	ax,ObjectDist3[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist3)+0);
	/* mov	ObjectDist3[BEHIND_BIN],di */
	*(dw*)(((db*)&objectdist3)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin3:
	// 4437 
	/* EmptyBin3:	mov	ObjectDist3[IN_FRONT_BIN],di */
	*(dw*)(((db*)&objectdist3)+2) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst3:
	// 4439 
	/* InsertFirst3:	mov	ObjectDist3[IN_FRONT_BIN],di */
	*(dw*)(((db*)&objectdist3)+2) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
objectdistsort4:
	// 787 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel8:
	// 4441 
	/* js	BehindSort6  	;yes -> */
	if (SF) {goto behindsort6;}
	// 0 ;* bin sort object distance to resolution of 256ft
	/* mov	al,dh		;/256 for bin sort */
	al = dh;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* add	ax,IN_FRONT_BIN	;skip behind bin */
	ADD(ax, 2);
	/* mov	si,ax */
	si = ax;
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,ObjectDist1[si] */
	ax = *(dw*)(((db*)&objectdist1)+si);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin6	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin6;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	OBJ_TYPE[bx],OTYPE_GROUND	;ground object? */
	CMP(((objectdata*)raddr(ds,bx))->obj_type, 0);
	/* je	SearchBin6			;yes, move past it -> */
	if ((db)(((objectdata*)raddr(ds,bx))->obj_type) == (db)(0)) {goto searchbin6;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jge	InsertFirst6	;yes -> */
	if ((short)(dx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst6;}
searchbin6:
	// 4443 
	/* SearchBin6:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject6	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject6;}
	/* cmp	OBJ_TYPE[bx],OTYPE_GROUND	;ground object? */
	CMP(((objectdata*)raddr(ds,bx))->obj_type, 0);
	/* je	SearchBin6			;yes, move past it -> */
	if ((db)(((objectdata*)raddr(ds,bx))->obj_type) == (db)(0)) {goto searchbin6;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin6	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin6;}
insertobject6:
	// 4445 
	/* InsertObject6:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort6:
	// 4447 
	/* BehindSort6:	mov	ax,ObjectDist1[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist1)+0);
	/* mov	ObjectDist1[BEHIND_BIN],di */
	*(dw*)(((db*)&objectdist1)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin6:
	// 4449 
	/* EmptyBin6:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst6:
	// 4451 
	/* InsertFirst6:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
nearhillsort:
	// 852 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel9:
	// 4453 
	/* js	BehindSort4  	;yes -> */
	if (SF) {goto behindsort4;}
	// 0 ;* fetch secondary y eye value
	/* mov	cx,OBJ_YMIN[di] */
	cx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos)));
	// 0 ;* bin sort object distance to resolution of 256ft
	/* mov	al,dh		;/256 for bin sort */
	al = dh;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* add	ax,IN_FRONT_BIN	;skip behind bin */
	ADD(ax, 2);
	/* mov	si,ax */
	si = ax;
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,ObjectDist1[si] */
	ax = *(dw*)(((db*)&objectdist1)+si);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin4	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin4;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jg	InsertFirst4	;yes -> */
	if ((short)(dx) > (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst4;}
	/* jl	SearchBin4	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin4;}
	/* cmp	cx,OBJ_YMIN[bx]	;equal, compare secondary y eye values */
	CMP(cx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)));
	/* jge	InsertFirst4	;insert before first -> */
	if ((short)(cx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)))) {goto insertfirst4;}
searchbin4:
	// 4455 
	/* SearchBin4:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject4	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject4;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin4	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin4;}
	/* jg	InsertObject4	;yes -> */
	if ((short)(dx) > (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertobject4;}
	/* cmp	cx,OBJ_YMIN[bx]	;equal, compare secondary y eye values */
	CMP(cx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)));
	/* jl	SearchBin4	;continue search -> */
	if ((short)(cx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)))) {goto searchbin4;}
insertobject4:
	// 4457 
	/* InsertObject4:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort4:
	// 4459 
	/* BehindSort4:	mov	ax,ObjectDist1[BEHIND_BIN] */
	ax = *(dw*)(((db*)&objectdist1)+0);
	/* mov	ObjectDist1[BEHIND_BIN],di */
	*(dw*)(((db*)&objectdist1)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin4:
	// 4461 
	/* EmptyBin4:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst4:
	// 4463 
	/* InsertFirst4:	mov	ObjectDist1[si],di */
	*(dw*)(((db*)&objectdist1)+si) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
farhillsort:
	// 927 
	/* test	dx,dx		;object behind? */
	TEST(dx, dx);
edummylabel10:
	// 4465 
	/* js	BehindSort5  	;yes -> */
	if (SF) {goto behindsort5;}
	// 0 ;* fetch secondary y eye value
	/* mov	cx,OBJ_YMIN[di] */
	cx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_xpos)));
	// 0 ;* bin sort object distance to resolution of 2,048ft
	/* mov	ax,dx */
	ax = dx;
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* rol	ax,1		;/128 */
	ROL(ax, 1);
	/* and	ax,0003fh	;0 .. 63 */
	AND(ax, 0x0003f);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* add	ax,IN_FRONT_BIN	;skip behind bin */
	ADD(ax, 2);
	/* mov	si,ax */
	si = ax;
	// 0 ;* insertion sort object distance within bin (descending order of distance)
	/* mov	ax,FarObjectDist[si] */
	ax = *(dw*)(((db*)&farobjectdist)+si);
	/* cmp	ax,-1		;empty bin? */
	CMP(ax, -1);
	/* je	EmptyBin5	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto emptybin5;}
	/* mov	bx,ax */
	bx = ax;
	/* cmp	dx,OBJ_YPOS[bx]	;insert before first object in bin? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jg	InsertFirst5	;yes -> */
	if ((short)(dx) > (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertfirst5;}
	/* jl	SearchBin5	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin5;}
	/* cmp	cx,OBJ_YMIN[bx]	;equal, compare secondary y eye values */
	CMP(cx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)));
	/* jge	InsertFirst5	;insert before first -> */
	if ((short)(cx) >= (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)))) {goto insertfirst5;}
searchbin5:
	// 4467 
	/* SearchBin5:	mov	si,bx		;si -> previous record */
	si = bx;
	/* mov	bx,OBJ_PTR[si]	;bx -> next record */
	bx = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr)));
	/* cmp	bx,-1		;last record encountered? */
	CMP(bx, -1);
	/* je	InsertObject5	;yes -> */
	if ((dw)(bx) == (dw)(-1)) {goto insertobject5;}
	/* cmp	dx,OBJ_YPOS[bx]	;insert here? */
	CMP(dx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)));
	/* jl	SearchBin5	;no -> */
	if ((short)(dx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto searchbin5;}
	/* jg	InsertObject5	;yes -> */
	if ((short)(dx) > (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_ypos)))) {goto insertobject5;}
	/* cmp	cx,OBJ_YMIN[bx]	;equal, compare secondary y eye values */
	CMP(cx, *(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)));
	/* jl	SearchBin5	;continue search -> */
	if ((short)(cx) < (short)(*(dw*)(((db*)&((objectdata*)raddr(ds,bx))->obj_xpos)))) {goto searchbin5;}
insertobject5:
	// 4469 
	/* InsertObject5:	mov	OBJ_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ptr))), m2c::getdata(di));
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
	/* ret */
	RETN(0);
	// 0 ;* object behind - insertion sort not required, insert at start of behind bin
behindsort5:
	// 4471 
	/* BehindSort5:	mov	ax,FarObjectDist[BEHIND_BIN] */
	ax = *(dw*)(((db*)&farobjectdist)+0);
	/* mov	FarObjectDist[BEHIND_BIN],di */
	*(dw*)(((db*)&farobjectdist)+0) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* only object in bin
emptybin5:
	// 4473 
	/* EmptyBin5:	mov	FarObjectDist[si],di */
	*(dw*)(((db*)&farobjectdist)+si) = di;
	/* mov	OBJ_PTR[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(ax));
	/* ret */
	RETN(0);
	// 0 ;* first object in bin
insertfirst5:
	// 4475 
	/* InsertFirst5:	mov	FarObjectDist[si],di */
	*(dw*)(((db*)&farobjectdist)+si) = di;
	/* mov	OBJ_PTR[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((objectdata*)raddr(ds,di))->obj_ptr))), m2c::getdata(bx));
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
                case m2c::kbehindsort1: 	goto behindsort1;
        case m2c::kbehindsort2: 	goto behindsort2;
        case m2c::kbehindsort3: 	goto behindsort3;
        case m2c::kbehindsort4: 	goto behindsort4;
        case m2c::kbehindsort5: 	goto behindsort5;
        case m2c::kbehindsort6: 	goto behindsort6;
        case m2c::kbinsearchloop: 	goto binsearchloop;
        case m2c::kdrawfarobjects: 	goto drawfarobjects;
        case m2c::kdrawfarobjloop: 	goto drawfarobjloop;
        case m2c::kdrawobjectloop: 	goto drawobjectloop;
        case m2c::kdrawobjects1: 	goto drawobjects1;
        case m2c::kdrawobjects2: 	goto drawobjects2;
        case m2c::kdrawobjects3: 	goto drawobjects3;
        case m2c::kdrawobjloop2_1: 	goto drawobjloop2_1;
        case m2c::kdrawobjloop2_2: 	goto drawobjloop2_2;
        case m2c::kdrawobjloop3_1: 	goto drawobjloop3_1;
        case m2c::kdrawobjloop3_2: 	goto drawobjloop3_2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kemptybin1: 	goto emptybin1;
        case m2c::kemptybin2: 	goto emptybin2;
        case m2c::kemptybin3: 	goto emptybin3;
        case m2c::kemptybin4: 	goto emptybin4;
        case m2c::kemptybin5: 	goto emptybin5;
        case m2c::kemptybin6: 	goto emptybin6;
        case m2c::kfarbinloop: 	goto farbinloop;
        case m2c::kfarhillsort: 	goto farhillsort;
        case m2c::kinsertfirst1: 	goto insertfirst1;
        case m2c::kinsertfirst2: 	goto insertfirst2;
        case m2c::kinsertfirst3: 	goto insertfirst3;
        case m2c::kinsertfirst4: 	goto insertfirst4;
        case m2c::kinsertfirst5: 	goto insertfirst5;
        case m2c::kinsertfirst6: 	goto insertfirst6;
        case m2c::kinsertobject1: 	goto insertobject1;
        case m2c::kinsertobject2: 	goto insertobject2;
        case m2c::kinsertobject3: 	goto insertobject3;
        case m2c::kinsertobject4: 	goto insertobject4;
        case m2c::kinsertobject5: 	goto insertobject5;
        case m2c::kinsertobject6: 	goto insertobject6;
        case m2c::knearhillsort: 	goto nearhillsort;
        case m2c::knextfarbin: 	goto nextfarbin;
        case m2c::kobjectdistsort1: 	goto objectdistsort1;
        case m2c::kobjectdistsort2: 	goto objectdistsort2;
        case m2c::kobjectdistsort3: 	goto objectdistsort3;
        case m2c::kobjectdistsort4: 	goto objectdistsort4;
        case m2c::ksearchbin1: 	goto searchbin1;
        case m2c::ksearchbin2: 	goto searchbin2;
        case m2c::ksearchbin3: 	goto searchbin3;
        case m2c::ksearchbin4: 	goto searchbin4;
        case m2c::ksearchbin5: 	goto searchbin5;
        case m2c::ksearchbin6: 	goto searchbin6;
        case m2c::ksearchnextbin: 	goto searchnextbin;
        case m2c::kskipbin2_1: 	goto skipbin2_1;
        case m2c::kskipbin2_2: 	goto skipbin2_2;
        case m2c::kskipbin3_1: 	goto skipbin3_1;
        case m2c::kskipbin3_2: 	goto skipbin3_2;
        default: return __dispatch_call(__disp, _state);
    };
}

