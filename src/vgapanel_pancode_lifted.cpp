/* THIS IS GENERATED FILE */

        
#include "vgapanel.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
vga_initpanels:
	// 1693 
	/* push	es ;*       VGA_SEQ_MAPMSK */
	PUSH(es);
edummylabel1:
	// 4369 
	/* test	IronWork,1	;ironwork enabled? */
	TEST(ironwork, 1);
	/* jz	GetOuttaHere		;no -> */
	if (!(ironwork & 1)) {goto getouttahere;}
	// 0 ;--------------------------
	// 0 ;* init pilot's front panel
	// 0 ;--------------------------
	/* mov	dx,OFFSET PilotPanel */
	dx = m2c::near_offset_external(pilotpanel);
	/* mov	cx,PILOTPAN_SIZE */
	cx = 320*104;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel1;}
	/* jmp	InitExit	;cf = 1 = error -> */
	goto initexit;
dummylabel1:
	// 4371 
	/* @@:		mov	ax,PILOTPAN_SEG */
	ax = 0x0a800;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,PILOTPAN_OFF */
	di = 320*96/4;
	/* mov	cx,PILOTPAN_SIZE */
	cx = 320*104;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
getouttahere:
	// 4373 
	// 0 ;-------------------------
	// 0 ;* init pilot's side panel
	// 0 ;-------------------------
	/* mov	dx,OFFSET PSidePanel */
	dx = m2c::near_offset_external(psidepanel);
	/* mov	cx,PSIDEPAN_SIZE */
	cx = 320*40;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel2;}
	/* jmp	InitExit	;cf = 1 = error -> */
	goto initexit;
dummylabel2:
	// 4375 
	/* @@:		mov	ax,PSIDEPAN_SEG */
	ax = 0x0a800;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,PSIDEPAN_OFF */
	di = 320*0/4;
	/* mov	cx,PSIDEPAN_SIZE */
	cx = 320*40;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	// 0 ;------------------------------
	// 0 ;* init navigator's front panel
	// 0 ;------------------------------
	/* mov	dx,OFFSET NavigPanel */
	dx = m2c::near_offset_external(navigpanel);
	/* mov	cx,NAVIGPAN_SIZE */
	cx = 320*200;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	InitExit */
	goto initexit;
__m2c_macrolocal_1_skip:
	// 4377 
	// 0 ;cf = 1 = error ->
	/* mov	ax,NAVIGPAN_SEG */
	ax = 0x0ac00;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,NAVIGPAN_OFF */
	di = 320*0/4;
	/* mov	cx,NAVIGPAN_SIZE */
	cx = 320*200;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	// 0 ;-----------------------------
	// 0 ;* init navigator's side panel
	// 0 ;-----------------------------
	/* mov	dx,OFFSET NSidePanel */
	dx = m2c::near_offset_external(nsidepanel);
	/* mov	cx,NSIDEPAN_SIZE */
	cx = 320*40;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jnc	__m2c_macrolocal_2_skip */
	if (!CF) {goto __m2c_macrolocal_2_skip;}
	/* jmp	InitExit */
	goto initexit;
__m2c_macrolocal_2_skip:
	// 4379 
	// 0 ;cf = 1 = error ->
	/* mov	ax,NSIDEPAN_SEG */
	ax = 0x0a800;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,NSIDEPAN_OFF */
	di = 320*40/4;
	/* mov	cx,NSIDEPAN_SIZE */
	cx = 320*40;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	// 0 ;-------------------------
	// 0 ;* init canopy frame panel
	// 0 ;-------------------------
	/* mov	dx,OFFSET FramePanel */
	dx = m2c::near_offset_external(framepanel);
	/* mov	cx,FRAMEPAN_SIZE */
	cx = 320*16;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jc	InitExit	;cf = 1 = error -> */
	if (CF) {goto initexit;}
	/* mov	ax,FRAMEPAN_SEG */
	ax = 0x0a800;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,FRAMEPAN_OFF */
	di = 320*80/4;
	/* mov	cx,FRAMEPAN_SIZE */
	cx = 320*16;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	// 0 ;------------------
	// 0 ;* init extra panel
	// 0 ;------------------
	/* mov	dx,OFFSET ExtraPanel */
	dx = m2c::near_offset_external(extrapanel);
	/* mov	cx,EXTRAPAN_SIZE */
	cx = 320*200;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jc	InitExit	;cf = 1 = error -> */
	if (CF) {goto initexit;}
	// 0 ;* interleave extra panel into VGA work screen page
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,EXTRAPAN_OFF */
	di = 320*0/4;
	/* mov	cx,EXTRAPAN_SIZE */
	cx = 320*200;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	// 0 ;* retrieve extra panel back into WorkScreen[] and CopyScreen[] buffers
	/* mov	dx,WorkScrPtr */
	dx = workscrptr;
	/* call	RetrieveData */
	CALLF(retrievedata, 0);
	// 0 ;--------------------
	// 0 ;* ADV panel overlays
	// 0 ;--------------------
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	@F */
	if ((dw)(tornadotype) != (dw)(2)) {goto dummylabel3;}
	/* push	WorkScrPtr */
	PUSH(workscrptr);
	// 0 ;* weapon status panel
	/* mov	WorkScrPtr,PILOTPAN_SEG */
	workscrptr = 0x0a800;
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((128)/4)+((149)*80) */
	si = ((128)/4)+((149)*80);
	/* mov	di,((56)/4)+((96)*80) */
	di = ((56)/4)+((96)*80);
	/* mov	bl,(64)/4 */
	bl = (64)/4;
	/* mov	bh,(45) */
	bh = 45;
	/* mov	bp,80-((64)/4) */
	bp = 80-((64)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;* late arming switch animation
	/* mov	WorkScrPtr,NAVIGPAN_SEG */
	workscrptr = 0x0ac00;
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208)/4)+((87)*80) */
	si = ((208)/4)+((87)*80);
	/* mov	di,((128)/4)+((94)*80) */
	di = ((128)/4)+((94)*80);
	/* mov	bl,(64)/4 */
	bl = (64)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((64)/4) */
	bp = 80-((64)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* pop	WorkScrPtr */
	POP(workscrptr);
	// 0 ;------------------
	// 0 ;* reset error flag
	// 0 ;------------------
dummylabel3:
	// 4381 
	/* @@:		clc			;cf = 0 = no error */
	CLC;
initexit:
	// 4383 
	/* InitExit:	pop	es */
	POP(es);
	/* ret */
	RETN(0);
interleavedata:

	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel2:
	// 4385 
	/* shr	cx,1		;/2 */
	SHR(cx, 1);
	/* shr	cx,1		;/4 (size of one plane) */
	SHR(cx, 1);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si		;ds:si -> start of WorkScreen */
	XOR(si, si);
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,0 */
	bx = 0;
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
dummylabel4:
	// 4387 
	/* @@:		mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb */
	{ STOSB; }
	/* add	bx,4 */
	ADD(bx, 4);
	/* loop	@B */
	LOOP(dummylabel4);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,1 */
	bx = 1;
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
dummylabel5:
	// 4389 
	/* @@:		mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb */
	{ STOSB; }
	/* add	bx,4 */
	ADD(bx, 4);
	/* loop	@B */
	LOOP(dummylabel5);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,2 */
	bx = 2;
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
dummylabel6:
	// 4391 
	/* @@:		mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb */
	{ STOSB; }
	/* add	bx,4 */
	ADD(bx, 4);
	/* loop	@B */
	LOOP(dummylabel6);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	bx,3 */
	bx = 3;
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
dummylabel7:
	// 4393 
	/* @@:		mov	al,[si+bx] */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* stosb */
	{ STOSB; }
	/* add	bx,4 */
	ADD(bx, 4);
	/* loop	@B */
	LOOP(dummylabel7);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
retrievedata:

	/* push	ds ;*       VGA_CTRL_RDMAP */
	PUSH(ds);
edummylabel3:
	// 4395 
	/* push	es */
	PUSH(es);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_RDMAP */
	al = 0x004;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,0		;map 0 */
	al = 0;
	/* out	dx,al */
	OUT(dx, al);
	/* xor	si,si		;ds:si -> start of map */
	XOR(si, si);
	/* mov	cx,320*200/4 */
	cx = 320*200/4;
	// 1939 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,1		;map 1 */
	al = 1;
	/* out	dx,al */
	OUT(dx, al);
	/* xor	si,si		;ds:si -> start of map */
	XOR(si, si);
	/* mov	cx,320*200/4 */
	cx = 320*200/4;
	// 1944 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,2		;map 2 */
	al = 2;
	/* out	dx,al */
	OUT(dx, al);
	/* xor	si,si		;ds:si -> start of map */
	XOR(si, si);
	/* mov	cx,320*200/4 */
	cx = 320*200/4;
	// 1949 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,3		;map 3 */
	al = 3;
	/* out	dx,al */
	OUT(dx, al);
	/* xor	si,si		;ds:si -> start of map */
	XOR(si, si);
	/* mov	cx,320*200/4 */
	cx = 320*200/4;
	// 1954 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
vga_loadpanel:
	// 1968 
	/* mov	bx,PanelMode ;* kill: assume all */
	bx = panelmode;
edummylabel4:
	// 4397 
	/* mov	si,OFFSET VGA_Panel1 */
	si = m2c::near_offset_external(vga_panel1);
	/* cmp	bx,LOOKDOWN	;look down panel? */
	CMP(bx, 10);
	/* jne	@F		;no -> */
	if ((dw)(bx) != (dw)(10)) {goto dummylabel8;}
	/* mov	si,OFFSET VGA_Panel2 */
	si = m2c::near_offset_external(vga_panel2);
dummylabel8:
	// 4399 
	/* @@:		cmp	si,PanelRGBPtr	;current palette ok? */
	CMP(si, panelrgbptr);
	/* je	@F		;yes, no need to change -> */
	if ((dw)(si) == (dw)(panelrgbptr)) {goto dummylabel9;}
	/* mov	PanelRGBPtr,si */
	panelrgbptr = si;
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_Panel */
	di = m2c::near_offset_external(vga_panel);
	/* mov	cx,80*3 */
	cx = 80*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1986 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1988 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
/* m2c-phantom removed: 	R(ax = m2c::segment_of_external(vga_rgb_data););	// 1991 						mov	ax,SEG VGA_RGB_Data */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(vga_panel););	// 1992 mov	di,OFFSET VGA_Panel */
	// 1993 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1994 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
dummylabel9:
	// 4401 
	/* @@:		call	LoadPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&loadpanel)+bx));
	/* clc			;cf = 0 = no error */
	CLC;
	/* ret */
	RETN(0);
loadpilotpan:
	// 2009 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel5:
	// 4403 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,PILOTPAN_SCR */
	di = 320*96/4;
	/* mov	ax,PILOTPAN_SEG */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,PILOTPAN_OFF */
	si = 320*96/4;
	/* mov	cx,PILOTPAN_SIZE/4 */
	cx = (320*104)/4;
	// 2034 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
loadpsidepan:
	// 2051 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel6:
	// 4405 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,PSIDEPAN_SCR */
	di = 320*160/4;
	/* mov	ax,PSIDEPAN_SEG */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,PSIDEPAN_OFF */
	si = 320*0/4;
	/* mov	cx,PSIDEPAN_SIZE/4 */
	cx = (320*40)/4;
	// 2076 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	// 0 ;* if night mode then redraw some panel detail
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* je	@F		;no -> */
	if ((dw)(night) == (dw)(0)) {goto dummylabel10;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((128)/4)+((57)*80) */
	si = ((128)/4)+((57)*80);
	/* mov	di,((16)/4)+((177)*80) */
	di = ((16)/4)+((177)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((160)/4)+((57)*80) */
	si = ((160)/4)+((57)*80);
	/* mov	di,((272)/4)+((177)*80) */
	di = ((272)/4)+((177)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((176)/4)+((67)*80) */
	si = ((176)/4)+((67)*80);
	/* mov	di,((80)/4)+((165)*80) */
	di = ((80)/4)+((165)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((184)/4)+((67)*80) */
	si = ((184)/4)+((67)*80);
	/* mov	di,((240)/4)+((165)*80) */
	di = ((240)/4)+((165)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((128)/4)+((67)*80) */
	si = ((128)/4)+((67)*80);
	/* mov	di,((0)/4)+((187)*80) */
	di = ((0)/4)+((187)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((152)/4)+((67)*80) */
	si = ((152)/4)+((67)*80);
	/* mov	di,((296)/4)+((187)*80) */
	di = ((296)/4)+((187)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel10:
	// 4407 
	/* @@:		ret */
	RETN(0);
loadnavigpan:
	// 2142 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel7:
	// 4409 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,NAVIGPAN_SCR */
	di = 320*0/4;
	/* mov	ax,NAVIGPAN_SEG */
	ax = 0x0ac00;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,NAVIGPAN_OFF */
	si = 320*0/4;
	/* mov	cx,NAVIGPAN_SIZE/4 */
	cx = (320*200)/4;
	// 2167 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
loadnsidepan:
	// 2184 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel8:
	// 4411 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,NSIDEPAN_SCR */
	di = 320*160/4;
	/* mov	ax,NSIDEPAN_SEG */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,NSIDEPAN_OFF */
	si = 320*40/4;
	/* mov	cx,NSIDEPAN_SIZE/4 */
	cx = (320*40)/4;
	// 2209 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	// 0 ;* if night mode then redraw some panel detail
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* je	@F		;no -> */
	if ((dw)(night) == (dw)(0)) {goto dummylabel11;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((128)/4)+((78)*80) */
	si = ((128)/4)+((78)*80);
	/* mov	di,((16)/4)+((165)*80) */
	di = ((16)/4)+((165)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((136)/4)+((78)*80) */
	si = ((136)/4)+((78)*80);
	/* mov	di,((304)/4)+((165)*80) */
	di = ((304)/4)+((165)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel11:
	// 4413 
	/* @@:		ret */
	RETN(0);
loadlookdownpan:
	// 2245 
	// 0 ;* load left half look down panel
edummylabel9:
	// 4415 
	/* mov	si,((0)/4)+((0)*80) */
	si = ((0)/4)+((0)*80);
	/* mov	di,((0)/4)+((0)*80) */
	di = ((0)/4)+((0)*80);
	/* mov	bl,(160)/4 */
	bl = (160)/4;
	/* mov	bh,(200) */
	bh = 200;
	/* mov	bp,80-((160)/4) */
	bp = 80-((160)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;* load right half look down panel (left half reflected)
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,(320*200/4)*0	;ds:si -> sprite data (map 0) */
	si = (320*200/4)*0;
	/* mov	di,79			;es:di -> screen */
	di = 79;
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,200		;depth count */
	ax = 200;
reflectdlp1:
	// 4417 
	/* ReflectDLp1:	mov	cx,40		;width count */
	cx = 40;
reflectwlp1:
	// 4419 
	/* ReflectWLp1:	movsb */
	{ MOVSB; }
	/* sub	di,2 */
	SUB(di, 2);
	/* loop	ReflectWLp1 */
	LOOP(reflectwlp1);
	/* add	si,40		;next line */
	ADD(si, 40);
	/* add	di,40+80 */
	ADD(di, 40+80);
	/* dec	ax */
	DEC(ax);
	/* jnz	ReflectDLp1 */
	if (ax != 0) {goto reflectdlp1;}
	/* mov	si,(320*200/4)*1	;ds:si -> sprite data (map 1) */
	si = (320*200/4)*1;
	/* mov	di,79			;es:di -> screen */
	di = 79;
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,200		;depth count */
	ax = 200;
reflectdlp2:
	// 4421 
	/* ReflectDLp2:	mov	cx,40		;width count */
	cx = 40;
reflectwlp2:
	// 4423 
	/* ReflectWLp2:	movsb */
	{ MOVSB; }
	/* sub	di,2 */
	SUB(di, 2);
	/* loop	ReflectWLp2 */
	LOOP(reflectwlp2);
	/* add	si,40		;next line */
	ADD(si, 40);
	/* add	di,40+80 */
	ADD(di, 40+80);
	/* dec	ax */
	DEC(ax);
	/* jnz	ReflectDLp2 */
	if (ax != 0) {goto reflectdlp2;}
	/* mov	si,(320*200/4)*2	;ds:si -> sprite data (map 2) */
	si = (320*200/4)*2;
	/* mov	di,79			;es:di -> screen */
	di = 79;
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,200		;depth count */
	ax = 200;
reflectdlp3:
	// 4425 
	/* ReflectDLp3:	mov	cx,40		;width count */
	cx = 40;
reflectwlp3:
	// 4427 
	/* ReflectWLp3:	movsb */
	{ MOVSB; }
	/* sub	di,2 */
	SUB(di, 2);
	/* loop	ReflectWLp3 */
	LOOP(reflectwlp3);
	/* add	si,40		;next line */
	ADD(si, 40);
	/* add	di,40+80 */
	ADD(di, 40+80);
	/* dec	ax */
	DEC(ax);
	/* jnz	ReflectDLp3 */
	if (ax != 0) {goto reflectdlp3;}
	/* mov	si,(320*200/4)*3	;ds:si -> sprite data (map 3) */
	si = (320*200/4)*3;
	/* mov	di,79			;es:di -> screen */
	di = 79;
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,200		;depth count */
	ax = 200;
reflectdlp4:
	// 4429 
	/* ReflectDLp4:	mov	cx,40		;width count */
	cx = 40;
reflectwlp4:
	// 4431 
	/* ReflectWLp4:	movsb */
	{ MOVSB; }
	/* sub	di,2 */
	SUB(di, 2);
	/* loop	ReflectWLp4 */
	LOOP(reflectwlp4);
	/* add	si,40		;next line */
	ADD(si, 40);
	/* add	di,40+80 */
	ADD(di, 40+80);
	/* dec	ax */
	DEC(ax);
	/* jnz	ReflectDLp4 */
	if (ax != 0) {goto reflectdlp4;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	// 0 ;* draw asymmetrical detail
	/* mov	si,((8)/4)+((49)*80) */
	si = ((8)/4)+((49)*80);
	/* mov	di,((160)/4)+((0)*80) */
	di = ((160)/4)+((0)*80);
	/* mov	bl,(48)/4 */
	bl = (48)/4;
	/* mov	bh,(77) */
	bh = 77;
	/* mov	bp,80-((48)/4) */
	bp = 80-((48)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;joystick
	/* mov	si,((8)/4)+((127)*80) */
	si = ((8)/4)+((127)*80);
	/* mov	di,((144)/4)+((185)*80) */
	di = ((144)/4)+((185)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(15) */
	bh = 15;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;strap
	/* ret */
	RETN(0);
loadmappan:
	// 2350 
	/* ret ;* kill: nothing */
	RETN(0);
vga_clrpilotpan:
	// 2376 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel10:
	// 4433 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,PILOTPAN_SEG */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;-------------
	// 0 ;* redraw list
	// 0 ;-------------
	/* mov	si,143*320/4+208/4	;source offset */
	si = 143*320/4+208/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-96/4;add on */
	bp = 320/4-96/4;
	/* mov	bx,96/4 */
	bx = 96/4;
	/* mov	ax,19 */
	ax = 19;
	// 0 ;* block copy
dummylabel12:
	// 4435 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2410 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel12;}
	// 0 ;lh & rh eng rpm, fuel flow rate
	// 2416 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,171*320/4+208/4	;source offset */
	si = 171*320/4+208/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-96/4;add on */
	bp = 320/4-96/4;
	/* mov	bx,96/4 */
	bx = 96/4;
	/* mov	ax,19 */
	ax = 19;
	// 0 ;* block copy
dummylabel13:
	// 4437 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2424 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel13;}
	// 0 ;lh & rh eng temp, fuel quantity
	// 2430 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,118*320/4+32/4	;source offset */
	si = 118*320/4+32/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-32/4;add on */
	bp = 320/4-32/4;
	/* mov	bx,32/4 */
	bx = 32/4;
	/* mov	ax,19 */
	ax = 19;
	// 0 ;* block copy
dummylabel14:
	// 4439 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2438 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel14;}
	// 0 ;radar altimeter
	// 2444 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,144*320/4+0/4	;source offset */
	si = 144*320/4+0/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-32/4;add on */
	bp = 320/4-32/4;
	/* mov	bx,32/4 */
	bx = 32/4;
	/* mov	ax,19 */
	ax = 19;
	// 0 ;* block copy
dummylabel15:
	// 4441 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2452 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel15;}
	// 0 ;vertical speed indicator
	// 2458 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,170*320/4+0/4	;source offset */
	si = 170*320/4+0/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-32/4;add on */
	bp = 320/4-32/4;
	/* mov	bx,32/4 */
	bx = 32/4;
	/* mov	ax,17 */
	ax = 17;
	// 0 ;* block copy
dummylabel16:
	// 4443 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2466 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel16;}
	// 0 ;secondary control surface position indicator
	// 2472 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,144*320/4+32/4	;source offset */
	si = 144*320/4+32/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-40/4;add on */
	bp = 320/4-40/4;
	/* mov	bx,40/4 */
	bx = 40/4;
	/* mov	ax,23 */
	ax = 23;
	// 0 ;* block copy
dummylabel17:
	// 4445 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2480 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel17;}
	// 0 ;combined speed indicator
	// 2486 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,174*320/4+32/4	;source offset */
	si = 174*320/4+32/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-40/4;add on */
	bp = 320/4-40/4;
	/* mov	bx,40/4 */
	bx = 40/4;
	/* mov	ax,23 */
	ax = 23;
	// 0 ;* block copy
dummylabel18:
	// 4447 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2494 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel18;}
	// 0 ;servo altimeter
	// 2500 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,172*320/4+72/4	;source offset */
	si = 172*320/4+72/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-40/4;add on */
	bp = 320/4-40/4;
	/* mov	bx,40/4 */
	bx = 40/4;
	/* mov	ax,25 */
	ax = 25;
	// 0 ;* block copy
dummylabel19:
	// 4449 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2508 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel19;}
	// 0 ;horizontal situation indicator
	// 2514 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,125*320/4+8/4	;source offset */
	si = 125*320/4+8/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-24/4;add on */
	bp = 320/4-24/4;
	/* mov	bx,24/4 */
	bx = 24/4;
	/* mov	ax,12 */
	ax = 12;
	// 0 ;* block copy
dummylabel20:
	// 4451 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2522 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel20;}
	// 0 ;landing gear position indicator
	// 2528 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,146*320/4+304/4	;source offset */
	si = 146*320/4+304/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-16/4;add on */
	bp = 320/4-16/4;
	/* mov	bx,16/4 */
	bx = 16/4;
	/* mov	ax,5 */
	ax = 5;
	// 0 ;* block copy
dummylabel21:
	// 4453 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2536 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel21;}
	// 0 ;standby compass
	// 2542 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,116*320/4+272/4	;source offset */
	si = 116*320/4+272/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-32/4;add on */
	bp = 320/4-32/4;
	/* mov	bx,32/4 */
	bx = 32/4;
	/* mov	ax,19 */
	ax = 19;
	// 0 ;* block copy
dummylabel22:
	// 4455 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2550 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel22;}
	// 0 ;accelerometer
	// 2556 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,110*320/4+48/4	;source offset */
	si = 110*320/4+48/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-16/4;add on */
	bp = 320/4-16/4;
	/* mov	bx,16/4 */
	bx = 16/4;
	/* mov	ax,3 */
	ax = 3;
	// 0 ;* block copy
dummylabel23:
	// 4457 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2564 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel23;}
	// 0 ;auto-pilot and auto-throttle indicators
	// 2570 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,110*320/4+216/4	;source offset */
	si = 110*320/4+216/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-48/4;add on */
	bp = 320/4-48/4;
	/* mov	bx,48/4 */
	bx = 48/4;
	/* mov	ax,24 */
	ax = 24;
	// 0 ;* block copy
dummylabel24:
	// 4459 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2578 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel24;}
	// 0 ;radar warning receiver
	// 2584 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
vga_clrnavigpan:
	// 2601 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel11:
	// 4461 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,NAVIGPAN_SEG */
	ax = 0x0ac00;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;-------------
	// 0 ;* redraw list
	// 0 ;-------------
	/* mov	si,14*320/4+128/4	;source offset */
	si = 14*320/4+128/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-64/4;add on */
	bp = 320/4-64/4;
	/* mov	bx,64/4 */
	bx = 64/4;
	/* mov	ax,23 */
	ax = 23;
	// 0 ;* block copy
dummylabel25:
	// 4463 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2635 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel25;}
	// 0 ;servo altimeter + combined speed indicator
	// 2641 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,172*320/4+64/4	;source offset */
	si = 172*320/4+64/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-40/4;add on */
	bp = 320/4-40/4;
	/* mov	bx,40/4 */
	bx = 40/4;
	/* mov	ax,25 */
	ax = 25;
	// 0 ;* block copy
dummylabel26:
	// 4465 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2649 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel26;}
	// 0 ;horizontal situation indicator
	// 2655 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,139*320/4+40/4	;source offset */
	si = 139*320/4+40/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-24/4;add on */
	bp = 320/4-24/4;
	/* mov	bx,24/4 */
	bx = 24/4;
	/* mov	ax,12 */
	ax = 12;
	// 0 ;* block copy
dummylabel27:
	// 4467 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2663 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel27;}
	// 0 ;landing gear position indicator
	// 2669 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,163*320/4+24/4	;source offset */
	si = 163*320/4+24/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-32/4;add on */
	bp = 320/4-32/4;
	/* mov	bx,32/4 */
	bx = 32/4;
	/* mov	ax,21 */
	ax = 21;
	// 0 ;* block copy
dummylabel28:
	// 4469 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2677 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel28;}
	// 0 ;clock
	// 2683 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	si,141*320/4+208/4	;source offset */
	si = 141*320/4+208/4;
	/* mov	di,si		;dest offset = source offset */
	di = si;
	/* mov	bp,320/4-96/4;add on */
	bp = 320/4-96/4;
	/* mov	bx,96/4 */
	bx = 96/4;
	/* mov	ax,55 */
	ax = 55;
	// 0 ;* block copy
dummylabel29:
	// 4471 
	/* @@:		mov	cx,bx */
	cx = bx;
	// 2691 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ax */
	DEC(ax);
	/* jnz	@B */
	if (ax != 0) {goto dummylabel29;}
	// 0 ;warning panel
	// 2697 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
vga_drwpilotpan:
	// 2713 
	// 0 ;-------------------
	// 0 ;* draw landing gear
	// 0 ;-------------------
edummylabel12:
	// 4473 
	/* test	SSF_Gear,1	;damaged? */
	TEST(ssf_gear, 1);
	/* jnz	@F		;yes -> */
	if ((ssf_gear & 1) != 0) {goto dummylabel30;}
	/* cmp	GearTimer,0	;gear in motion? */
	CMP(geartimer, 0);
	/* jne	RedGearLamps1	;yes -> */
	if ((dw)(geartimer) != (dw)(0)) {goto redgearlamps1;}
dummylabel30:
	// 4475 
	/* @@:		test	Gear,1		;gear lowered? */
	TEST(gear, 1);
	/* jz	PilotGearOk	;no -> */
	if (!(gear & 1)) {goto pilotgearok;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((31)*80) */
	si = ((80)/4)+((31)*80);
	/* mov	di,((8)/4)+((132)*80) */
	di = ((8)/4)+((132)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	PilotGearOk */
	goto pilotgearok;
redgearlamps1:
	// 4477 
	/* RedGearLamps1:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((26)*80) */
	si = ((80)/4)+((26)*80);
	/* mov	di,((8)/4)+((125)*80) */
	di = ((8)/4)+((125)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------
	// 0 ;* draw ADI bezel
	// 0 ;----------------
pilotgearok:
	// 4479 
	/* PilotGearOk:	mov	si,((56)/4)+((49)*80) */
	si = ((56)/4)+((49)*80);
	/* mov	di,((80)/4)+((141)*80) */
	di = ((80)/4)+((141)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(19) */
	bh = 19;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	// 0 ;-----------------------
	// 0 ;* draw wheelbrakes lamp
	// 0 ;-----------------------
	/* test	WheelBrakes,1	;applied? */
	TEST(wheelbrakes, 1);
	/* jz	@F		;no -> */
	if (!(wheelbrakes & 1)) {goto dummylabel31;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((160)/4)+((180)*80) */
	si = ((160)/4)+((180)*80);
	/* mov	di,((0)/4)+((128)*80) */
	di = ((0)/4)+((128)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	WBrakesOk */
	goto wbrakesok;
dummylabel31:
	// 4481 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((0)/4)+((128)*80) */
	si = ((0)/4)+((128)*80);
	/* mov	di,((0)/4)+((128)*80) */
	di = ((0)/4)+((128)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(12) */
	bh = 12;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-----------------------
	// 0 ;* oxygen flow indicator
	// 0 ;-----------------------
wbrakesok:
	// 4483 
	/* WBrakesOk:	test	OxyDollyPos,1 */
	TEST(oxydollypos, 1);
	/* jz	@F */
	if (!(oxydollypos & 1)) {goto dummylabel32;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((181)*80) */
	si = ((144)/4)+((181)*80);
	/* mov	di,((312)/4)+((168)*80) */
	di = ((312)/4)+((168)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(3) */
	bh = 3;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	DollyOk */
	goto dollyok;
dummylabel32:
	// 4485 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((152)/4)+((181)*80) */
	si = ((152)/4)+((181)*80);
	/* mov	di,((312)/4)+((168)*80) */
	di = ((312)/4)+((168)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(3) */
	bh = 3;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------
	// 0 ;* auto-pilot indicator
	// 0 ;----------------------
dollyok:
	// 4487 
	/* DollyOk:	cmp	AutoMode,AUTO_OFF	;auto-pilot engaged? */
	CMP(automode, 0);
	/* je	@F			;no -> */
	if ((dw)(automode) == (dw)(0)) {goto dummylabel33;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((184)*80) */
	si = ((144)/4)+((184)*80);
	/* mov	di,((48)/4)+((110)*80) */
	di = ((48)/4)+((110)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(3) */
	bh = 3;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-------------------------
	// 0 ;* auto-throttle indicator
	// 0 ;-------------------------
dummylabel33:
	// 4489 
	/* @@:		test	AutoThrot,1	;auto-throttle engaged? */
	TEST(autothrot, 1);
	/* jz	@F		;no -> */
	if (!(autothrot & 1)) {goto dummylabel34;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((152)/4)+((184)*80) */
	si = ((152)/4)+((184)*80);
	/* mov	di,((56)/4)+((110)*80) */
	di = ((56)/4)+((110)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(3) */
	bh = 3;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;--------------------
	// 0 ;* 'B' risk indicator (IDS / ECR)
	// 0 ;--------------------
dummylabel34:
	// 4491 
	/* @@:		cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	BRiskOk */
	if ((dw)(tornadotype) == (dw)(2)) {goto briskok;}
	/* test	TFBRisk,1	;'B' risk warning? */
	TEST(tfbrisk, 1);
	/* jz	@F		;no -> */
	if (!(tfbrisk & 1)) {goto dummylabel35;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((176)/4)+((185)*80) */
	si = ((176)/4)+((185)*80);
	/* mov	di,((64)/4)+((135)*80) */
	di = ((64)/4)+((135)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	BRiskOk */
	goto briskok;
dummylabel35:
	// 4493 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((64)/4)+((135)*80) */
	si = ((64)/4)+((135)*80);
	/* mov	di,((64)/4)+((135)*80) */
	di = ((64)/4)+((135)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-------------------
	// 0 ;* reheat indicators
	// 0 ;-------------------
	// 0 ;* engine 1 (lhs)
briskok:
	// 4495 
	/* BRiskOk:	cmp	Reheat,0	;reheat on? */
	CMP(reheat, 0);
	/* je	@F		;no -> */
	if ((dw)(reheat) == (dw)(0)) {goto dummylabel36;}
	/* test	SSF_Engine1,1	;engine ok? */
	TEST(ssf_engine1, 1);
	/* jnz	@F		;no -> */
	if ((ssf_engine1 & 1) != 0) {goto dummylabel36;}
	/* cmp	FuelWt,0	;any fuel? */
	CMP(fuelwt, 0);
	/* je	@F		;no -> */
	if ((dw)(fuelwt) == (dw)(0)) {goto dummylabel36;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((175)*80) */
	si = ((144)/4)+((175)*80);
	/* mov	di,((288)/4)+((108)*80) */
	di = ((288)/4)+((108)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	Eng1Ok */
	goto eng1ok;
dummylabel36:
	// 4497 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((288)/4)+((108)*80) */
	si = ((288)/4)+((108)*80);
	/* mov	di,((288)/4)+((108)*80) */
	di = ((288)/4)+((108)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;* engine 2 (rhs)
eng1ok:
	// 4499 
	/* Eng1Ok:		cmp	Reheat,0	;reheat on? */
	CMP(reheat, 0);
	/* je	@F		;no -> */
	if ((dw)(reheat) == (dw)(0)) {goto dummylabel37;}
	/* test	SSF_Engine2,1	;engine ok? */
	TEST(ssf_engine2, 1);
	/* jnz	@F		;no -> */
	if ((ssf_engine2 & 1) != 0) {goto dummylabel37;}
	/* cmp	FuelWt,0	;any fuel? */
	CMP(fuelwt, 0);
	/* je	@F		;no -> */
	if ((dw)(fuelwt) == (dw)(0)) {goto dummylabel37;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((168)/4)+((180)*80) */
	si = ((168)/4)+((180)*80);
	/* mov	di,((304)/4)+((112)*80) */
	di = ((304)/4)+((112)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	Eng2Ok */
	goto eng2ok;
dummylabel37:
	// 4501 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((304)/4)+((112)*80) */
	si = ((304)/4)+((112)*80);
	/* mov	di,((304)/4)+((112)*80) */
	di = ((304)/4)+((112)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;---------------------
	// 0 ;* draw jettison lamps
	// 0 ;---------------------
eng2ok:
	// 4503 
	/* Eng2Ok:		mov	al,Jettison */
	al = jettison;
	/* cmp	al,JET_NULL */
	CMP(al, 0);
	/* je	JettisonOk */
	if ((db)(al) == (db)(0)) {goto jettisonok;}
	/* cmp	al,JET_EXT_TANKS */
	CMP(al, 1);
	/* jne	@F */
	if ((db)(al) != (db)(1)) {goto dummylabel38;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((160)*80) */
	si = ((144)/4)+((160)*80);
	/* mov	di,((0)/4)+((193)*80) */
	di = ((0)/4)+((193)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	JettisonOk */
	goto jettisonok;
dummylabel38:
	// 4505 
	/* @@:		cmp	al,JET_EXT_STORES */
	CMP(al, 2);
	/* jne	@F */
	if ((db)(al) != (db)(2)) {goto dummylabel39;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((165)*80) */
	si = ((144)/4)+((165)*80);
	/* mov	di,((0)/4)+((193)*80) */
	di = ((0)/4)+((193)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	JettisonOk */
	goto jettisonok;
dummylabel39:
	// 4507 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((170)*80) */
	si = ((144)/4)+((170)*80);
	/* mov	di,((0)/4)+((193)*80) */
	di = ((0)/4)+((193)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------------
	// 0 ;* draw thrust reversers indicators
	// 0 ;----------------------------------
jettisonok:
	// 4509 
	/* JettisonOk:	test	ThrustRvrs,1	;applied? */
	TEST(thrustrvrs, 1);
	/* jz	@F		;no -> */
	if (!(thrustrvrs & 1)) {goto dummylabel40;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((144)/4)+((151)*80) */
	si = ((144)/4)+((151)*80);
	/* mov	di,((0)/4)+((109)*80) */
	di = ((0)/4)+((109)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(9) */
	bh = 9;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	RvrsOk */
	goto rvrsok;
dummylabel40:
	// 4511 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((0)/4)+((109)*80) */
	si = ((0)/4)+((109)*80);
	/* mov	di,((0)/4)+((109)*80) */
	di = ((0)/4)+((109)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(9) */
	bh = 9;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------------
	// 0 ;* draw approach progress indicator
	// 0 ;----------------------------------
rvrsok:
	// 4513 
	/* RvrsOk:		test	AppProgFlag,1	;in fan marker? */
	TEST(appprogflag, 1);
	/* jz	@F		;no -> */
	if (!(appprogflag & 1)) {goto dummylabel41;}
	/* test	AppProgSeq,01b	;lamp on? */
	TEST(appprogseq, 0x1);
	/* jnz	@F		;no -> */
	if ((appprogseq & 0x1) != 0) {goto dummylabel41;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((160)/4)+((175)*80) */
	si = ((160)/4)+((175)*80);
	/* mov	di,((272)/4)+((103)*80) */
	di = ((272)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	AppProgOk */
	goto appprogok;
dummylabel41:
	// 4515 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((272)/4)+((103)*80) */
	si = ((272)/4)+((103)*80);
	/* mov	di,((272)/4)+((103)*80) */
	di = ((272)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;------------------------
	// 0 ;* draw attention getters
	// 0 ;------------------------
appprogok:
	// 4517 
	/* AppProgOk:	test	Attention,1	;get attention? */
	TEST(attention, 1);
	/* jz	@F		;no -> */
	if (!(attention & 1)) {goto dummylabel42;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((144)*80) */
	si = ((128)/4)+((144)*80);
	/* mov	di,((48)/4)+((97)*80) */
	di = ((48)/4)+((97)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((160)/4)+((144)*80) */
	si = ((160)/4)+((144)*80);
	/* mov	di,((240)/4)+((97)*80) */
	di = ((240)/4)+((97)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	PilotAttnOk */
	goto pilotattnok;
dummylabel42:
	// 4519 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((48)/4)+((97)*80) */
	si = ((48)/4)+((97)*80);
	/* mov	di,((48)/4)+((97)*80) */
	di = ((48)/4)+((97)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((240)/4)+((97)*80) */
	si = ((240)/4)+((97)*80);
	/* mov	di,((240)/4)+((97)*80) */
	di = ((240)/4)+((97)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------
	// 0 ;* draw MFD mouse active lamp
	// 0 ;----------------------------
pilotattnok:
	// 4521 
	/* PilotAttnOk:	mov	si,OFFSET PILOT_MFD */
	si = m2c::near_offset_external(pilot_mfd);
	// 0 ;* check MFD on, not damaged, display requires mouse and display has mouse
	/* mov	al,MFD_STATUS[si] */
	al = m2c::getdata(((mfd*)raddr(ds,si))->mfd_status);
	/* and	al,MFD_REQ_MOUSE[si] */
	AND(al, ((mfd*)raddr(ds,si))->mfd_req_mouse);
	/* and	al,MFD_HAS_MOUSE[si] */
	AND(al, ((mfd*)raddr(ds,si))->mfd_has_mouse);
	/* mov	si,MFD_SSF_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_ssf_ptr)));
	/* mov	ah,[si] */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* jz	@F		;off -> */
	if (al == 0) {goto dummylabel43;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((165)*80) */
	si = ((128)/4)+((165)*80);
	/* mov	di,((112)/4)+((193)*80) */
	di = ((112)/4)+((193)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	PilotMFDOk */
	goto pilotmfdok;
dummylabel43:
	// 4523 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((112)/4)+((193)*80) */
	si = ((112)/4)+((193)*80);
	/* mov	di,((112)/4)+((193)*80) */
	di = ((112)/4)+((193)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-------------------------
	// 0 ;* draw late arming switch
	// 0 ;-------------------------
pilotmfdok:
	// 4525 
	/* PilotMFDOk:	cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	NightLateArm	;yes -> */
	if ((dw)(night) != (dw)(0)) {goto nightlatearm;}
	/* mov	al,LateArmAnim */
	al = latearmanim;
	/* cmp	al,0 */
	CMP(al, 0);
	/* jne	@F */
	if ((db)(al) != (db)(0)) {goto dummylabel44;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((128)/4)+((94)*80) */
	si = ((128)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	LateArmOk */
	goto latearmok;
dummylabel44:
	// 4527 
	/* @@:		cmp	al,3 */
	CMP(al, 3);
	/* jne	@F */
	if ((db)(al) != (db)(3)) {goto dummylabel45;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((152)/4)+((94)*80) */
	si = ((152)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	si,((80)/4)+((49)*80) */
	si = ((80)/4)+((49)*80);
	/* mov	di,((112)/4)+((88)*80) */
	di = ((112)/4)+((88)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(8) */
	bh = 8;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* jmp	LateArmOk */
	goto latearmok;
dummylabel45:
	// 4529 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((144)/4)+((94)*80) */
	si = ((144)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	si,((80)/4)+((49)*80) */
	si = ((80)/4)+((49)*80);
	/* mov	di,((112)/4)+((88)*80) */
	di = ((112)/4)+((88)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(8) */
	bh = 8;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* jmp	LateArmOk */
	goto latearmok;
nightlatearm:
	// 4531 
	/* NightLateArm:	mov	al,LateArmAnim */
	al = latearmanim;
	/* cmp	al,0 */
	CMP(al, 0);
	/* jne	@F */
	if ((db)(al) != (db)(0)) {goto dummylabel46;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((160)/4)+((94)*80) */
	si = ((160)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	LateArmOk */
	goto latearmok;
dummylabel46:
	// 4533 
	/* @@:		cmp	al,3 */
	CMP(al, 3);
	/* jne	@F */
	if ((db)(al) != (db)(3)) {goto dummylabel47;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((184)/4)+((94)*80) */
	si = ((184)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	si,((80)/4)+((57)*80) */
	si = ((80)/4)+((57)*80);
	/* mov	di,((112)/4)+((88)*80) */
	di = ((112)/4)+((88)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(8) */
	bh = 8;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* jmp	LateArmOk */
	goto latearmok;
dummylabel47:
	// 4535 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((176)/4)+((94)*80) */
	si = ((176)/4)+((94)*80);
	/* mov	di,((112)/4)+((96)*80) */
	di = ((112)/4)+((96)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	si,((80)/4)+((57)*80) */
	si = ((80)/4)+((57)*80);
	/* mov	di,((112)/4)+((88)*80) */
	di = ((112)/4)+((88)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(8) */
	bh = 8;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	// 0 ;-----------------
	// 0 ;* draw radar lamp
	// 0 ;-----------------
latearmok:
	// 4537 
	/* LateArmOk:	cmp	RadarMode,NUL_RADAR	;radar on? */
	CMP(radarmode, 0);
	/* je	@F			;no -> */
	if ((dw)(radarmode) == (dw)(0)) {goto dummylabel48;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((187)*80) */
	si = ((128)/4)+((187)*80);
	/* mov	di,((216)/4)+((99)*80) */
	di = ((216)/4)+((99)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	PilotRadarOk */
	goto pilotradarok;
dummylabel48:
	// 4539 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((216)/4)+((99)*80) */
	si = ((216)/4)+((99)*80);
	/* mov	di,((216)/4)+((99)*80) */
	di = ((216)/4)+((99)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;---------------
	// 0 ;* draw ECM lamp
	// 0 ;---------------
pilotradarok:
	// 4541 
	/* PilotRadarOk:	test	ECMActive,1 	;ECM on? */
	TEST(ecmactive, 1);
	/* jz	@F	    	;no -> */
	if (!(ecmactive & 1)) {goto dummylabel49;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((136)/4)+((187)*80) */
	si = ((136)/4)+((187)*80);
	/* mov	di,((224)/4)+((99)*80) */
	di = ((224)/4)+((99)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	PilotECMOk */
	goto pilotecmok;
dummylabel49:
	// 4543 
	/* @@:	mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((224)/4)+((99)*80) */
	si = ((224)/4)+((99)*80);
	/* mov	di,((224)/4)+((99)*80) */
	di = ((224)/4)+((99)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;---------------------------
	// 0 ;* ADV weapon status display
	// 0 ;---------------------------
pilotecmok:
	// 4545 
	/* PilotECMOk:	cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	__m2c_macrolocal_92_skip */
	if ((dw)(tornadotype) == (dw)(2)) {goto __m2c_macrolocal_92_skip;}
	/* jmp	WpnStatusOk */
	goto wpnstatusok;
__m2c_macrolocal_92_skip:
	// 4547 
	// 0 ;* update blink timer
	/* mov	ax,ArmBlinkTimer */
	ax = armblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel50;}
	/* xor	ArmBlink,1	;toggle blink state */
	XOR(armblink, 1);
	/* mov	ax,ARM_BLINK_TIME */
	ax = 50;
dummylabel50:
	// 4549 
	/* @@:		mov	ArmBlinkTimer,ax */
	armblinktimer = ax;
	// 0 ;* clear panel
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((152)/4)+((165)*80) */
	si = ((152)/4)+((165)*80);
	/* mov	di,((80)/4)+((112)*80) */
	di = ((80)/4)+((112)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(16) */
	bh = 16;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;* blink if weapon armed
	/* mov	ax,AirArmMode */
	ax = airarmmode;
	/* cmp	ax,ArmMode */
	CMP(ax, armmode);
	/* jne	@F */
	if ((dw)(ax) != (dw)(armmode)) {goto dummylabel51;}
	/* test	ArmBlink,1 */
	TEST(armblink, 1);
	/* jz	WpnStatusOk */
	if (!(armblink & 1)) {goto wpnstatusok;}
	// 0 ;* cannon
dummylabel51:
	// 4551 
	/* @@:		cmp	ax,ARM_CANNON */
	CMP(ax, 16);
	/* jne	@F */
	if ((dw)(ax) != (dw)(16)) {goto dummylabel52;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((144)/4)+((78)*80) */
	si = ((144)/4)+((78)*80);
	/* mov	di,((80)/4)+((112)*80) */
	di = ((80)/4)+((112)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	WpnStatusOk */
	goto wpnstatusok;
	// 0 ;* Sidewinder
dummylabel52:
	// 4553 
	/* @@:		cmp	ax,ARM_SIDEWINDER */
	CMP(ax, 18);
	/* jne	@F */
	if ((dw)(ax) != (dw)(18)) {goto dummylabel53;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((144)/4)+((82)*80) */
	si = ((144)/4)+((82)*80);
	/* mov	di,((80)/4)+((118)*80) */
	di = ((80)/4)+((118)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	WpnStatusOk */
	goto wpnstatusok;
	// 0 ;* Sky Flash
dummylabel53:
	// 4555 
	/* @@:		cmp	ax,ARM_SKYFLASH */
	CMP(ax, 20);
	/* jne	WpnStatusOk */
	if ((dw)(ax) != (dw)(20)) {goto wpnstatusok;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((144)/4)+((86)*80) */
	si = ((144)/4)+((86)*80);
	/* mov	di,((80)/4)+((124)*80) */
	di = ((80)/4)+((124)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;------------------------
	// 0 ;* radar warning receiver
	// 0 ;------------------------
wpnstatusok:
	// 4557 
	/* WpnStatusOk:	test	SSF_RWR,1	;damaged? */
	TEST(ssf_rwr, 1);
	/* jz	__m2c_macrolocal_97_skip */
	if (!(ssf_rwr & 1)) {goto __m2c_macrolocal_97_skip;}
	/* jmp	RWROk */
	goto rwrok;
__m2c_macrolocal_97_skip:
	// 4559 
	// 0 ;yes ->
	/* test	RWRThreatFlags,RWR_SAM */
	TEST(rwrthreatflags, 0x10);
	/* jz	@F */
	if (!(rwrthreatflags & 0x10)) {goto dummylabel54;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((74)*80) */
	si = ((16)/4)+((74)*80);
	/* mov	di,((248)/4)+((110)*80) */
	di = ((248)/4)+((110)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel54:
	// 4561 
	/* @@:		test	RWRThreatFlags,RWR_AAA */
	TEST(rwrthreatflags, 0x8);
	/* jz	@F */
	if (!(rwrthreatflags & 0x8)) {goto dummylabel55;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((79)*80) */
	si = ((16)/4)+((79)*80);
	/* mov	di,((248)/4)+((115)*80) */
	di = ((248)/4)+((115)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel55:
	// 4563 
	/* @@:		test	RWRThreatFlags,RWR_EWR */
	TEST(rwrthreatflags, 0x4);
	/* jz	@F */
	if (!(rwrthreatflags & 0x4)) {goto dummylabel56;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((84)*80) */
	si = ((16)/4)+((84)*80);
	/* mov	di,((248)/4)+((120)*80) */
	di = ((248)/4)+((120)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel56:
	// 4565 
	/* @@:		test	RWRThreatFlags,RWR_AC */
	TEST(rwrthreatflags, 0x2);
	/* jz	@F */
	if (!(rwrthreatflags & 0x2)) {goto dummylabel57;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((89)*80) */
	si = ((16)/4)+((89)*80);
	/* mov	di,((248)/4)+((125)*80) */
	di = ((248)/4)+((125)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel57:
	// 4567 
	/* @@:		test	RWRThreatFlags,RWR_MSL */
	TEST(rwrthreatflags, 0x1);
	/* jz	RWROk */
	if (!(rwrthreatflags & 0x1)) {goto rwrok;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((94)*80) */
	si = ((16)/4)+((94)*80);
	/* mov	di,((248)/4)+((130)*80) */
	di = ((248)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(4) */
	bh = 4;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
rwrok:
	// 4569 
	/* RWROk:		ret */
	RETN(0);
vga_drwnavigpan:
	// 3322 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI ;* kill: assume all */
	CMP(tab2.tab_mode, 8);
edummylabel13:
	// 4571 
	/* je @F */
	if (ZF) {goto dummylabel58;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel58;}
	/* jmp SkipjmpNavigThrotOkk */
	goto skipjmpnavigthrotokk;
dummylabel58:
	// 4573 
	/* jmp NavigThrotOk */
	goto navigthrotok;
skipjmpnavigthrotokk:
	// 4575 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je CheckForDamageOrOff */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto checkfordamageoroff;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je CheckForDamageOrOff */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto checkfordamageoroff;}
	/* jmp SkipCheckForDamageOfOff */
	goto skipcheckfordamageofoff;
checkfordamageoroff:
	// 4577 
	/* mov	di,OFFSET TAB1	;other TAB display */
	di = m2c::near_offset_external(tab1);
	/* mov	bx,TAB_SSF_PTR[di] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1	    ;TAB1 Damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz SkipCheckIfRadAltOk ;--> yes */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto skipcheckifradaltok;}
	// 0 ;test	TAB_TOGGLE[di],1  ;TAB1 is on?
	// 0 ;jnz SkipCheckIfRadAltOk
	// 0 ;jmp NavigThrotOk
	/* mov	si,OFFSET TAB1	;TV-TAB1 (left) display */
	si = m2c::near_offset_external(tab1);
	/* mov	di,OFFSET TAB2	;TV-TAB1 (left) display */
	di = m2c::near_offset_external(tab2);
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* jne @F */
	if ((dw)(tab1.tab_mode) != (dw)(8)) {goto dummylabel59;}
	/* test TAB_STATUS[si],1 */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_103_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_103_skip;}
	/* jmp	SkipCheckIfRadAltOk */
	goto skipcheckifradaltok;
__m2c_macrolocal_103_skip:
	// 4579 
	/* jmp NavigThrotOk */
	goto navigthrotok;
dummylabel59:
	// 4581 
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* jne @F */
	if ((dw)(tab1.tab_mode) != (dw)(12)) {goto dummylabel60;}
	/* test TAB_STATUS[si],1 */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_104_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_104_skip;}
	/* jmp	SkipCheckIfRadAltOk */
	goto skipcheckifradaltok;
__m2c_macrolocal_104_skip:
	// 4583 
	/* jmp NavigThrotOk */
	goto navigthrotok;
dummylabel60:
	// 4585 
skipcheckfordamageofoff:
	// 4587 
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je CheckIfRadAltOk */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto checkifradaltok;}
	/* jmp SkipCheckIfRadAltOk */
	goto skipcheckifradaltok;
	// 0 ;       cmp	TAB1.TAB_MODE,TAB_TIALD_ORI
	// 0 ;		je NavigThrotOk
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je NavigThrotOk
	// 0 ;jmp ShowNavigPanelSpritescd..
	// 0 ;cmp	TAB1.TAB_MODE,TAB_TIALD_ORI
	// 0 ;jmp NavigThrotOk
	// 0 ;je CheckIfRadAltOk
	// 0 ;jmp ShowNavigPanelSprites
checkifradaltok:
	// 4589 
	// 0 ;cmp	TAB2.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je @F
	// 0 ;If Tornado is pitching violently and the TIALD breaks, then show all the dials!
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	SkipCheckIfRadAltOk		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto skipcheckifradaltok;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	SkipCheckIfRadAltOk */
	if ((short)(m_cosr) < (short)(16384)) {goto skipcheckifradaltok;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jge NavigThrotOk */
	if ((short)(trueradalt) >= (short)(100)) {goto navigthrotok;}
	// 0 ; VGAPANEL.ASM(1530): warning A6003: conditional jump lengthened : by 47 byte(s)
	/* jmp NavigThrotOk */
	goto navigthrotok;
	// 0 ;ShowNavigPanelSprites:
skipcheckifradaltok:
	// 4591 
	// 0 ;-------------------
	// 0 ;* draw landing gear
	// 0 ;-------------------
	/* test	SSF_Gear,1	;damaged? */
	TEST(ssf_gear, 1);
	/* jnz	@F		;yes -> */
	if ((ssf_gear & 1) != 0) {goto dummylabel61;}
	/* cmp	GearTimer,0	;gear in motion? */
	CMP(geartimer, 0);
	/* jne	RedGearLamps2	;yes -> */
	if ((dw)(geartimer) != (dw)(0)) {goto redgearlamps2;}
dummylabel61:
	// 4593 
	/* @@:		test	Gear,1		;gear lowered? */
	TEST(gear, 1);
	/* jz	NavigGearOk	;no -> */
	if (!(gear & 1)) {goto naviggearok;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((41)*80) */
	si = ((80)/4)+((41)*80);
	/* mov	di,((40)/4)+((146)*80) */
	di = ((40)/4)+((146)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigGearOk */
	goto naviggearok;
redgearlamps2:
	// 4595 
	/* RedGearLamps2:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((36)*80) */
	si = ((80)/4)+((36)*80);
	/* mov	di,((40)/4)+((139)*80) */
	di = ((40)/4)+((139)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------
	// 0 ;* draw ADI bezel
	// 0 ;----------------
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je NavigThrotOk
	// 0 ;cmp	TAB1.TAB_MODE,TAB_TIALD_ORI
	// 0 ;je NavigThrotOk
naviggearok:
	// 4597 
	/* NavigGearOk:	mov	si,((56)/4)+((49)*80) */
	si = ((56)/4)+((49)*80);
	/* mov	di,((72)/4)+((141)*80) */
	di = ((72)/4)+((141)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(19) */
	bh = 19;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	// 0 ;----------------------
	// 0 ;* auto-pilot indicator
	// 0 ;----------------------
	/* cmp	AutoMode,AUTO_OFF	;auto-pilot engaged? */
	CMP(automode, 0);
	/* je	@F			;no -> */
	if ((dw)(automode) == (dw)(0)) {goto dummylabel62;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((182)*80) */
	si = ((128)/4)+((182)*80);
	/* mov	di,((124)/4)+((130)*80) */
	di = ((124)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigAutoOk */
	goto navigautook;
dummylabel62:
	// 4599 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((124)/4)+((130)*80) */
	si = ((124)/4)+((130)*80);
	/* mov	di,((124)/4)+((130)*80) */
	di = ((124)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-------------------------
	// 0 ;* auto-throttle indicator
	// 0 ;-------------------------
navigautook:
	// 4601 
	/* NavigAutoOk:	test	AutoThrot,1	;auto-throttle engaged? */
	TEST(autothrot, 1);
	/* jz	@F		;no -> */
	if (!(autothrot & 1)) {goto dummylabel63;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((172)*80) */
	si = ((128)/4)+((172)*80);
	/* mov	di,((132)/4)+((130)*80) */
	di = ((132)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigThrotOk */
	goto navigthrotok;
dummylabel63:
	// 4603 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((132)/4)+((130)*80) */
	si = ((132)/4)+((130)*80);
	/* mov	di,((132)/4)+((130)*80) */
	di = ((132)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;------------------------
	// 0 ;* draw attention getters
	// 0 ;------------------------
navigthrotok:
	// 4605 
	/* test	Attention,1	;get attention? */
	TEST(attention, 1);
	/* jz	@F		;no -> */
	if (!(attention & 1)) {goto dummylabel64;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((176)/4)+((151)*80) */
	si = ((176)/4)+((151)*80);
	/* mov	di,((0)/4)+((103)*80) */
	di = ((0)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(17) */
	bh = 17;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((176)/4)+((168)*80) */
	si = ((176)/4)+((168)*80);
	/* mov	di,((304)/4)+((103)*80) */
	di = ((304)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(17) */
	bh = 17;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigAttnOk */
	goto navigattnok;
dummylabel64:
	// 4607 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je sinisini */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto sinisini;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je sinisini */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto sinisini;}
	/* jmp SkipjmpNavigThrotOkk3 */
	goto skipjmpnavigthrotokk3;
sinisini:
	// 4609 
	/* jmp	NavigAttnOk */
	goto navigattnok;
skipjmpnavigthrotokk3:
	// 4611 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je NavigAttnOk */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto navigattnok;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je NavigAttnOk */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto navigattnok;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((0)/4)+((103)*80) */
	si = ((0)/4)+((103)*80);
	/* mov	di,((0)/4)+((103)*80) */
	di = ((0)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(17) */
	bh = 17;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((304)/4)+((103)*80) */
	si = ((304)/4)+((103)*80);
	/* mov	di,((304)/4)+((103)*80) */
	di = ((304)/4)+((103)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(17) */
	bh = 17;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;---------------
	// 0 ;* warning panel
	// 0 ;---------------
	// 0 ;* red captions
navigattnok:
	// 4613 
	/* NavigAttnOk:	mov	ax,RedWarnings1 */
	ax = redwarnings1;
	/* test	Attention,1	;flash new failures? */
	TEST(attention, 1);
	/* jz	@F		;no -> */
	if (!(attention & 1)) {goto dummylabel65;}
	/* or	ax,RedWarnings2 */
	OR(ax, redwarnings2);
dummylabel65:
	// 4615 
	/* @@:		mov	Failures,ax */
	failures = ax;
	/* test	Failures,RED_OXY */
	TEST(failures, 0x1);
	/* jz	@F */
	if (!(failures & 0x1)) {goto dummylabel66;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(3*16))/4)+((26+(0*8))*80) */
	si = ((208+(3*16))/4)+((26+(0*8))*80);
	/* mov	di,((208+(3*16))/4)+((141+(0*8))*80) */
	di = ((208+(3*16))/4)+((141+(0*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel66:
	// 4617 
	/* @@:		test	Failures,RED_L_FIRE */
	TEST(failures, 0x2);
	/* jz	@F */
	if (!(failures & 0x2)) {goto dummylabel67;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(1*8))*80) */
	si = ((208+(0*16))/4)+((26+(1*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(1*8))*80) */
	di = ((208+(0*16))/4)+((141+(1*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel67:
	// 4619 
	/* @@:		test	Failures,RED_R_FIRE */
	TEST(failures, 0x4);
	/* jz	@F */
	if (!(failures & 0x4)) {goto dummylabel68;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(5*16))/4)+((26+(1*8))*80) */
	si = ((208+(5*16))/4)+((26+(1*8))*80);
	/* mov	di,((208+(5*16))/4)+((141+(1*8))*80) */
	di = ((208+(5*16))/4)+((141+(1*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel68:
	// 4621 
	/* @@:		test	Failures,RED_AUT */
	TEST(failures, 0x8);
	/* jz	@F */
	if (!(failures & 0x8)) {goto dummylabel69;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(3*16))/4)+((26+(1*8))*80) */
	si = ((208+(3*16))/4)+((26+(1*8))*80);
	/* mov	di,((208+(3*16))/4)+((141+(1*8))*80) */
	di = ((208+(3*16))/4)+((141+(1*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel69:
	// 4623 
	/* @@:		test	Failures,RED_REV */
	TEST(failures, 0x10);
	/* jz	@F */
	if (!(failures & 0x10)) {goto dummylabel70;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(1*16))/4)+((26+(0*8))*80) */
	si = ((208+(1*16))/4)+((26+(0*8))*80);
	/* mov	di,((208+(1*16))/4)+((141+(0*8))*80) */
	di = ((208+(1*16))/4)+((141+(0*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel70:
	// 4625 
	/* @@:		test	Failures,RED_SPILS */
	TEST(failures, 0x20);
	/* jz	@F */
	if (!(failures & 0x20)) {goto dummylabel71;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(1*16))/4)+((26+(2*8))*80) */
	si = ((208+(1*16))/4)+((26+(2*8))*80);
	/* mov	di,((208+(1*16))/4)+((141+(2*8))*80) */
	di = ((208+(1*16))/4)+((141+(2*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel71:
	// 4627 
	/* @@:		test	Failures,RED_UC */
	TEST(failures, 0x40);
	/* jz	@F */
	if (!(failures & 0x40)) {goto dummylabel72;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(2*16))/4)+((26+(2*8))*80) */
	si = ((208+(2*16))/4)+((26+(2*8))*80);
	/* mov	di,((208+(2*16))/4)+((141+(2*8))*80) */
	di = ((208+(2*16))/4)+((141+(2*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel72:
	// 4629 
	/* @@:		test	Failures,RED_FUEL */
	TEST(failures, 0x80);
	/* jz	@F */
	if (!(failures & 0x80)) {goto dummylabel73;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(3*16))/4)+((26+(2*8))*80) */
	si = ((208+(3*16))/4)+((26+(2*8))*80);
	/* mov	di,((208+(3*16))/4)+((141+(2*8))*80) */
	di = ((208+(3*16))/4)+((141+(2*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel73:
	// 4631 
	/* @@:		test	Failures,RED_L_ENG */
	TEST(failures, 0x100);
	/* jz	@F */
	if (!(failures & 0x100)) {goto dummylabel74;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(2*8))*80) */
	si = ((208+(0*16))/4)+((26+(2*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(2*8))*80) */
	di = ((208+(0*16))/4)+((141+(2*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel74:
	// 4633 
	/* @@:		test	Failures,RED_R_ENG */
	TEST(failures, 0x200);
	/* jz	@F */
	if (!(failures & 0x200)) {goto dummylabel75;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(5*16))/4)+((26+(2*8))*80) */
	si = ((208+(5*16))/4)+((26+(2*8))*80);
	/* mov	di,((208+(5*16))/4)+((141+(2*8))*80) */
	di = ((208+(5*16))/4)+((141+(2*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;* amber captions
dummylabel75:
	// 4635 
	/* @@:		mov	ax,AmbWarnings1 */
	ax = ambwarnings1;
	/* test	Attention,1	;flash new failures? */
	TEST(attention, 1);
	/* jz	@F		;no -> */
	if (!(attention & 1)) {goto dummylabel76;}
	/* or	ax,AmbWarnings2 */
	OR(ax, ambwarnings2);
dummylabel76:
	// 4637 
	/* @@:		mov	Failures,ax */
	failures = ax;
	/* test	Failures,AMB_CNFG */
	TEST(failures, 0x1);
	/* jz	@F */
	if (!(failures & 0x1)) {goto dummylabel77;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(4*16))/4)+((26+(3*8))*80) */
	si = ((208+(4*16))/4)+((26+(3*8))*80);
	/* mov	di,((208+(4*16))/4)+((141+(3*8))*80) */
	di = ((208+(4*16))/4)+((141+(3*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel77:
	// 4639 
	/* @@:		test	Failures,AMB_ADC */
	TEST(failures, 0x2);
	/* jz	@F */
	if (!(failures & 0x2)) {goto dummylabel78;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(6*8))*80) */
	si = ((208+(0*16))/4)+((26+(6*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(6*8))*80) */
	di = ((208+(0*16))/4)+((141+(6*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel78:
	// 4641 
	/* @@:		test	Failures,AMB_ECM */
	TEST(failures, 0x4);
	/* jz	@F */
	if (!(failures & 0x4)) {goto dummylabel79;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(4*8))*80) */
	si = ((208+(0*16))/4)+((26+(4*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(4*8))*80) */
	di = ((208+(0*16))/4)+((141+(4*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel79:
	// 4643 
	/* @@:		test	Failures,AMB_UC */
	TEST(failures, 0x8);
	/* jz	@F */
	if (!(failures & 0x8)) {goto dummylabel80;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(2*16))/4)+((26+(4*8))*80) */
	si = ((208+(2*16))/4)+((26+(4*8))*80);
	/* mov	di,((208+(2*16))/4)+((141+(4*8))*80) */
	di = ((208+(2*16))/4)+((141+(4*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel80:
	// 4645 
	/* @@:		test	Failures,AMB_WB */
	TEST(failures, 0x10);
	/* jz	@F */
	if (!(failures & 0x10)) {goto dummylabel81;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(3*16))/4)+((26+(5*8))*80) */
	si = ((208+(3*16))/4)+((26+(5*8))*80);
	/* mov	di,((208+(3*16))/4)+((141+(5*8))*80) */
	di = ((208+(3*16))/4)+((141+(5*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel81:
	// 4647 
	/* @@:		test	Failures,AMB_AB */
	TEST(failures, 0x20);
	/* jz	@F */
	if (!(failures & 0x20)) {goto dummylabel82;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(5*16))/4)+((26+(4*8))*80) */
	si = ((208+(5*16))/4)+((26+(4*8))*80);
	/* mov	di,((208+(5*16))/4)+((141+(4*8))*80) */
	di = ((208+(5*16))/4)+((141+(4*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel82:
	// 4649 
	/* @@:		test	Failures,AMB_FLPS */
	TEST(failures, 0x40);
	/* jz	@F */
	if (!(failures & 0x40)) {goto dummylabel83;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(2*16))/4)+((26+(6*8))*80) */
	si = ((208+(2*16))/4)+((26+(6*8))*80);
	/* mov	di,((208+(2*16))/4)+((141+(6*8))*80) */
	di = ((208+(2*16))/4)+((141+(6*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel83:
	// 4651 
	/* @@:		test	Failures,AMB_SWP */
	TEST(failures, 0x80);
	/* jz	@F */
	if (!(failures & 0x80)) {goto dummylabel84;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(2*16))/4)+((26+(5*8))*80) */
	si = ((208+(2*16))/4)+((26+(5*8))*80);
	/* mov	di,((208+(2*16))/4)+((141+(5*8))*80) */
	di = ((208+(2*16))/4)+((141+(5*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel84:
	// 4653 
	/* @@:		test	Failures,AMB_HUD */
	TEST(failures, 0x100);
	/* jz	@F */
	if (!(failures & 0x100)) {goto dummylabel85;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(4*16))/4)+((26+(6*8))*80) */
	si = ((208+(4*16))/4)+((26+(6*8))*80);
	/* mov	di,((208+(4*16))/4)+((141+(6*8))*80) */
	di = ((208+(4*16))/4)+((141+(6*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel85:
	// 4655 
	/* @@:		test	Failures,AMB_MFD1 */
	TEST(failures, 0x200);
	/* jz	@F */
	if (!(failures & 0x200)) {goto dummylabel86;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(3*8))*80) */
	si = ((208+(0*16))/4)+((26+(3*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(3*8))*80) */
	di = ((208+(0*16))/4)+((141+(3*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel86:
	// 4657 
	/* @@:		test	Failures,AMB_MFD2 */
	TEST(failures, 0x400);
	/* jz	@F */
	if (!(failures & 0x400)) {goto dummylabel87;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(5*16))/4)+((26+(3*8))*80) */
	si = ((208+(5*16))/4)+((26+(3*8))*80);
	/* mov	di,((208+(5*16))/4)+((141+(3*8))*80) */
	di = ((208+(5*16))/4)+((141+(3*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel87:
	// 4659 
	/* @@:		test	Failures,AMB_L_TAB */
	TEST(failures, 0x800);
	/* jz	@F */
	if (!(failures & 0x800)) {goto dummylabel88;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(0*16))/4)+((26+(5*8))*80) */
	si = ((208+(0*16))/4)+((26+(5*8))*80);
	/* mov	di,((208+(0*16))/4)+((141+(5*8))*80) */
	di = ((208+(0*16))/4)+((141+(5*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel88:
	// 4661 
	/* @@:		test	Failures,AMB_R_TAB */
	TEST(failures, 0x1000);
	/* jz	@F */
	if (!(failures & 0x1000)) {goto dummylabel89;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(5*16))/4)+((26+(5*8))*80) */
	si = ((208+(5*16))/4)+((26+(5*8))*80);
	/* mov	di,((208+(5*16))/4)+((141+(5*8))*80) */
	di = ((208+(5*16))/4)+((141+(5*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel89:
	// 4663 
	/* @@:		test	Failures,AMB_RAD */
	TEST(failures, 0x2000);
	/* jz	@F */
	if (!(failures & 0x2000)) {goto dummylabel90;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(3*16))/4)+((26+(3*8))*80) */
	si = ((208+(3*16))/4)+((26+(3*8))*80);
	/* mov	di,((208+(3*16))/4)+((141+(3*8))*80) */
	di = ((208+(3*16))/4)+((141+(3*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
dummylabel90:
	// 4665 
	/* @@:		test	Failures,AMB_RWR */
	TEST(failures, 0x4000);
	/* jz	@F */
	if (!(failures & 0x4000)) {goto dummylabel91;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((208+(1*16))/4)+((26+(4*8))*80) */
	si = ((208+(1*16))/4)+((26+(4*8))*80);
	/* mov	di,((208+(1*16))/4)+((141+(4*8))*80) */
	di = ((208+(1*16))/4)+((141+(4*8))*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------
	// 0 ;* draw MFD mouse active lamp
	// 0 ;----------------------------
dummylabel91:
	// 4667 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel92;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel92;}
	/* jmp SkipjmpNavigThrotOkk2 */
	goto skipjmpnavigthrotokk2;
dummylabel92:
	// 4669 
	/* ret */
	RETN(0);
skipjmpnavigthrotokk2:
	// 4671 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je NavigECMOk */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto navigecmok;}
	// 0 ; VGAPANEL.ASM(1762): warning A6003: conditional jump lengthened : by 166 byte(s)
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je NavigECMOk */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto navigecmok;}
	// 0 ; VGAPANEL.ASM(1764): warning A6003: conditional jump lengthened : by 156 byte(s)
	/* mov	si,OFFSET NAVIG_MFD */
	si = m2c::near_offset_external(navig_mfd);
	// 0 ;* check MFD on, not damaged, display requires mouse and display has mouse
	/* mov	al,MFD_STATUS[si] */
	al = m2c::getdata(((mfd*)raddr(ds,si))->mfd_status);
	/* and	al,MFD_REQ_MOUSE[si] */
	AND(al, ((mfd*)raddr(ds,si))->mfd_req_mouse);
	/* and	al,MFD_HAS_MOUSE[si] */
	AND(al, ((mfd*)raddr(ds,si))->mfd_has_mouse);
	/* mov	si,MFD_SSF_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_ssf_ptr)));
	/* mov	ah,[si] */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* jz	@F		;off -> */
	if (al == 0) {goto dummylabel93;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((151)*80) */
	si = ((128)/4)+((151)*80);
	/* mov	di,((112)/4)+((106)*80) */
	di = ((112)/4)+((106)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigMFDOk */
	goto navigmfdok;
dummylabel93:
	// 4673 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((112)/4)+((106)*80) */
	si = ((112)/4)+((106)*80);
	/* mov	di,((112)/4)+((106)*80) */
	di = ((112)/4)+((106)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------------
	// 0 ;* draw TAB1 (lh) mouse active lamp
	// 0 ;----------------------------------
navigmfdok:
	// 4675 
	/* NavigMFDOk:	mov	si,OFFSET TAB1 */
	si = m2c::near_offset_external(tab1);
	// 0 ;* check TAB on, not damaged, display requires mouse and display has mouse
	/* mov	al,TAB_STATUS[si] */
	al = m2c::getdata(((tab*)raddr(ds,si))->tab_status);
	/* and	al,TAB_REQ_MOUSE[si] */
	AND(al, ((tab*)raddr(ds,si))->tab_req_mouse);
	/* and	al,TAB_HAS_MOUSE[si] */
	AND(al, ((tab*)raddr(ds,si))->tab_has_mouse);
	/* mov	si,TAB_SSF_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* mov	ah,[si] */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* jz	@F		;off -> */
	if (al == 0) {goto dummylabel94;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((184)/4)+((185)*80) */
	si = ((184)/4)+((185)*80);
	/* mov	di,((32)/4)+((115)*80) */
	di = ((32)/4)+((115)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigTAB1Ok */
	goto navigtab1ok;
dummylabel94:
	// 4677 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((32)/4)+((115)*80) */
	si = ((32)/4)+((115)*80);
	/* mov	di,((32)/4)+((115)*80) */
	di = ((32)/4)+((115)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------------------------
	// 0 ;* draw TAB2 (rh) mouse active lamp
	// 0 ;----------------------------------
navigtab1ok:
	// 4679 
	/* NavigTAB1Ok:	mov	si,OFFSET TAB2 */
	si = m2c::near_offset_external(tab2);
	// 0 ;* check TAB on, not damaged, display requires mouse and display has mouse
	/* mov	al,TAB_STATUS[si] */
	al = m2c::getdata(((tab*)raddr(ds,si))->tab_status);
	/* and	al,TAB_REQ_MOUSE[si] */
	AND(al, ((tab*)raddr(ds,si))->tab_req_mouse);
	/* and	al,TAB_HAS_MOUSE[si] */
	AND(al, ((tab*)raddr(ds,si))->tab_has_mouse);
	/* mov	si,TAB_SSF_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* mov	ah,[si] */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* jz	@F		;off -> */
	if (al == 0) {goto dummylabel95;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((158)*80) */
	si = ((128)/4)+((158)*80);
	/* mov	di,((224)/4)+((115)*80) */
	di = ((224)/4)+((115)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigTAB2Ok */
	goto navigtab2ok;
dummylabel95:
	// 4681 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((224)/4)+((115)*80) */
	si = ((224)/4)+((115)*80);
	/* mov	di,((224)/4)+((115)*80) */
	di = ((224)/4)+((115)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-----------------
	// 0 ;* draw radar lamp
	// 0 ;-----------------
navigtab2ok:
	// 4683 
	/* NavigTAB2Ok:	cmp	RadarMode,NUL_RADAR	;radar on? */
	CMP(radarmode, 0);
	/* je	@F			;no -> */
	if ((dw)(radarmode) == (dw)(0)) {goto dummylabel96;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((136)/4)+((182)*80) */
	si = ((136)/4)+((182)*80);
	/* mov	di,((176)/4)+((130)*80) */
	di = ((176)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigRadarOk */
	goto navigradarok;
dummylabel96:
	// 4685 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((176)/4)+((130)*80) */
	si = ((176)/4)+((130)*80);
	/* mov	di,((176)/4)+((130)*80) */
	di = ((176)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;---------------
	// 0 ;* draw ECM lamp
	// 0 ;---------------
navigradarok:
	// 4687 
	/* NavigRadarOk:	test	ECMActive,1 	;ECM on? */
	TEST(ecmactive, 1);
	/* jz	@F	    	;no -> */
	if (!(ecmactive & 1)) {goto dummylabel97;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((177)*80) */
	si = ((128)/4)+((177)*80);
	/* mov	di,((184)/4)+((130)*80) */
	di = ((184)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigECMOk */
	goto navigecmok;
dummylabel97:
	// 4689 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((184)/4)+((130)*80) */
	si = ((184)/4)+((130)*80);
	/* mov	di,((184)/4)+((130)*80) */
	di = ((184)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
navigecmok:
	// 4691 
	/* NavigECMOk:	ret */
	RETN(0);
vga_drwnavigpanbrief:
	// 3929 
	// 0 ;-------------------
	// 0 ;* draw landing gear
	// 0 ;-------------------
edummylabel14:
	// 4693 
	/* test	SSF_Gear,1	;damaged? */
	TEST(ssf_gear, 1);
	/* jnz	@F		;yes -> */
	if ((ssf_gear & 1) != 0) {goto dummylabel98;}
	/* cmp	GearTimer,0	;gear in motion? */
	CMP(geartimer, 0);
	/* jne	RedGearLamps2b	;yes -> */
	if ((dw)(geartimer) != (dw)(0)) {goto redgearlamps2b;}
dummylabel98:
	// 4695 
	/* @@:		test	Gear,1		;gear lowered? */
	TEST(gear, 1);
	/* jz	NavigGearOkb	;no -> */
	if (!(gear & 1)) {goto naviggearokb;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((41)*80) */
	si = ((80)/4)+((41)*80);
	/* mov	di,((40)/4)+((146)*80) */
	di = ((40)/4)+((146)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigGearOkb */
	goto naviggearokb;
redgearlamps2b:
	// 4697 
	/* RedGearLamps2b:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((80)/4)+((36)*80) */
	si = ((80)/4)+((36)*80);
	/* mov	di,((40)/4)+((139)*80) */
	di = ((40)/4)+((139)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;----------------
	// 0 ;* draw ADI bezel
	// 0 ;----------------
naviggearokb:
	// 4699 
	/* NavigGearOkb:	mov	si,((56)/4)+((49)*80) */
	si = ((56)/4)+((49)*80);
	/* mov	di,((72)/4)+((141)*80) */
	di = ((72)/4)+((141)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(19) */
	bh = 19;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	// 0 ;----------------------
	// 0 ;* auto-pilot indicator
	// 0 ;----------------------
	/* cmp	AutoMode,AUTO_OFF	;auto-pilot engaged? */
	CMP(automode, 0);
	/* je	@F			;no -> */
	if ((dw)(automode) == (dw)(0)) {goto dummylabel99;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((182)*80) */
	si = ((128)/4)+((182)*80);
	/* mov	di,((124)/4)+((130)*80) */
	di = ((124)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* jmp	NavigAutoOkb */
	goto navigautookb;
dummylabel99:
	// 4701 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((124)/4)+((130)*80) */
	si = ((124)/4)+((130)*80);
	/* mov	di,((124)/4)+((130)*80) */
	di = ((124)/4)+((130)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	// 0 ;-------------------------
	// 0 ;* auto-throttle indicator
	// 0 ;-------------------------
navigautookb:
	// 4703 
	/* NavigAutoOkb:	test	AutoThrot,1	;auto-throttle engaged? */
	TEST(autothrot, 1);
	/* jz	@F		;no -> */
	if (!(autothrot & 1)) {goto dummylabel100;}
	/* mov	dx,PILOTPAN_SEG */
	dx = 0x0a800;
	/* mov	si,((128)/4)+((172)*80) */
	si = ((128)/4)+((172)*80);
	/* mov	di,((132)/4)+((130)*80) */
	di = ((132)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETN(0);
dummylabel100:
	// 4705 
	/* @@:	mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((132)/4)+((130)*80) */
	si = ((132)/4)+((130)*80);
	/* mov	di,((132)/4)+((130)*80) */
	di = ((132)/4)+((130)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(5) */
	bh = 5;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETN(0);
vga_ironwork:
	// 4022
	// 0 ;* draw large solid ironwork section
edummylabel15:
	// 4707 
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,FRAMEPAN_SCR */
	di = 320*122/4;
	/* mov	ax,FRAMEPAN_SEG */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,FRAMEPAN_OFF */
	si = 320*80/4;
	/* mov	cx,FRAMEPAN_SIZE/4 */
	cx = (320*16)/4;
	// 4049 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	// 0 ;* lhs ironwork
	/* mov	si,((160)/4)+((14)*80) */
	si = ((160)/4)+((14)*80);
	/* mov	di,((0)/4)+((112)*80) */
	di = ((0)/4)+((112)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((200)/4)+((7)*80) */
	si = ((200)/4)+((7)*80);
	/* mov	di,((40)/4)+((105)*80) */
	di = ((40)/4)+((105)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((240)/4)+((0)*80) */
	si = ((240)/4)+((0)*80);
	/* mov	di,((80)/4)+((98)*80) */
	di = ((80)/4)+((98)*80);
	/* mov	bl,(80)/4 */
	bl = (80)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((80)/4) */
	bp = 80-((80)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((0)*80) */
	si = ((160)/4)+((0)*80);
	/* mov	di,((0)/4)+((156)*80) */
	di = ((0)/4)+((156)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((256)/4)+((171)*80) */
	si = ((256)/4)+((171)*80);
	/* mov	di,((32)/4)+((156)*80) */
	di = ((32)/4)+((156)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((272)/4)+((177)*80) */
	si = ((272)/4)+((177)*80);
	/* mov	di,((48)/4)+((162)*80) */
	di = ((48)/4)+((162)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(20) */
	bh = 20;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((312)/4)+((171)*80) */
	si = ((312)/4)+((171)*80);
	/* mov	di,((88)/4)+((156)*80) */
	di = ((88)/4)+((156)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(26) */
	bh = 26;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((171)*80) */
	si = ((160)/4)+((171)*80);
	/* mov	di,((56)/4)+((182)*80) */
	di = ((56)/4)+((182)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((192)/4)+((171)*80) */
	si = ((192)/4)+((171)*80);
	/* mov	di,((88)/4)+((182)*80) */
	di = ((88)/4)+((182)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((224)/4)+((171)*80) */
	si = ((224)/4)+((171)*80);
	/* mov	di,((96)/4)+((174)*80) */
	di = ((96)/4)+((174)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((200)/4)+((14)*80) */
	si = ((200)/4)+((14)*80);
	/* mov	di,((40)/4)+((112)*80) */
	di = ((40)/4)+((112)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((240)/4)+((6)*80) */
	si = ((240)/4)+((6)*80);
	/* mov	di,((80)/4)+((104)*80) */
	di = ((80)/4)+((104)*80);
	/* mov	bl,(80)/4 */
	bl = (80)/4;
	/* mov	bh,(18) */
	bh = 18;
	/* mov	bp,80-((80)/4) */
	bp = 80-((80)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((160)/4)+((48)*80) */
	si = ((160)/4)+((48)*80);
	/* mov	di,((0)/4)+((138)*80) */
	di = ((0)/4)+((138)*80);
	/* mov	bl,(160)/4 */
	bl = (160)/4;
	/* mov	bh,(18) */
	bh = 18;
	/* mov	bp,80-((160)/4) */
	bp = 80-((160)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((288)/4)+((171)*80) */
	si = ((288)/4)+((171)*80);
	/* mov	di,((64)/4)+((156)*80) */
	di = ((64)/4)+((156)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(26) */
	bh = 26;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((168)/4)+((171)*80) */
	si = ((168)/4)+((171)*80);
	/* mov	di,((64)/4)+((182)*80) */
	di = ((64)/4)+((182)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;* rhs ironwork
	/* mov	si,((280)/4)+((38)*80) */
	si = ((280)/4)+((38)*80);
	/* mov	di,((280)/4)+((112)*80) */
	di = ((280)/4)+((112)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((240)/4)+((30)*80) */
	si = ((240)/4)+((30)*80);
	/* mov	di,((240)/4)+((104)*80) */
	di = ((240)/4)+((104)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(8) */
	bh = 8;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((24)*80) */
	si = ((160)/4)+((24)*80);
	/* mov	di,((160)/4)+((98)*80) */
	di = ((160)/4)+((98)*80);
	/* mov	bl,(80)/4 */
	bl = (80)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((80)/4) */
	bp = 80-((80)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((296)/4)+((24)*80) */
	si = ((296)/4)+((24)*80);
	/* mov	di,((296)/4)+((156)*80) */
	di = ((296)/4)+((156)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((288)/4)+((144)*80) */
	si = ((288)/4)+((144)*80);
	/* mov	di,((256)/4)+((156)*80) */
	di = ((256)/4)+((156)*80);
	/* mov	bl,(32)/4 */
	bl = (32)/4;
	/* mov	bh,(6) */
	bh = 6;
	/* mov	bp,80-((32)/4) */
	bp = 80-((32)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((288)/4)+((150)*80) */
	si = ((288)/4)+((150)*80);
	/* mov	di,((256)/4)+((162)*80) */
	di = ((256)/4)+((162)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(20) */
	bh = 20;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((256)/4)+((144)*80) */
	si = ((256)/4)+((144)*80);
	/* mov	di,((224)/4)+((156)*80) */
	di = ((224)/4)+((156)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(26) */
	bh = 26;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((208)/4)+((182)*80) */
	si = ((208)/4)+((182)*80);
	/* mov	di,((256)/4)+((182)*80) */
	di = ((256)/4)+((182)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((182)*80) */
	si = ((160)/4)+((182)*80);
	/* mov	di,((208)/4)+((182)*80) */
	di = ((208)/4)+((182)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((224)/4)+((179)*80) */
	si = ((224)/4)+((179)*80);
	/* mov	di,((200)/4)+((174)*80) */
	di = ((200)/4)+((174)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(7) */
	bh = 7;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((240)/4)+((38)*80) */
	si = ((240)/4)+((38)*80);
	/* mov	di,((240)/4)+((112)*80) */
	di = ((240)/4)+((112)*80);
	/* mov	bl,(40)/4 */
	bl = (40)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((40)/4) */
	bp = 80-((40)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((160)/4)+((30)*80) */
	si = ((160)/4)+((30)*80);
	/* mov	di,((160)/4)+((104)*80) */
	di = ((160)/4)+((104)*80);
	/* mov	bl,(80)/4 */
	bl = (80)/4;
	/* mov	bh,(18) */
	bh = 18;
	/* mov	bp,80-((80)/4) */
	bp = 80-((80)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((160)/4)+((66)*80) */
	si = ((160)/4)+((66)*80);
	/* mov	di,((160)/4)+((138)*80) */
	di = ((160)/4)+((138)*80);
	/* mov	bl,(160)/4 */
	bl = (160)/4;
	/* mov	bh,(18) */
	bh = 18;
	/* mov	bp,80-((160)/4) */
	bp = 80-((160)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((264)/4)+((144)*80) */
	si = ((264)/4)+((144)*80);
	/* mov	di,((232)/4)+((156)*80) */
	di = ((232)/4)+((156)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(26) */
	bh = 26;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((184)/4)+((182)*80) */
	si = ((184)/4)+((182)*80);
	/* mov	di,((232)/4)+((182)*80) */
	di = ((232)/4)+((182)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;* reflector / central ironwork
	/* mov	si,((160)/4)+((193)*80) */
	si = ((160)/4)+((193)*80);
	/* mov	di,((120)/4)+((174)*80) */
	di = ((120)/4)+((174)*80);
	/* mov	bl,(80)/4 */
	bl = (80)/4;
	/* mov	bh,(2) */
	bh = 2;
	/* mov	bp,80-((80)/4) */
	bp = 80-((80)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((160)/4)+((196)*80) */
	si = ((160)/4)+((196)*80);
	/* mov	di,((112)/4)+((183)*80) */
	di = ((112)/4)+((183)*80);
	/* mov	bl,(96)/4 */
	bl = (96)/4;
	/* mov	bh,(2) */
	bh = 2;
	/* mov	bp,80-((96)/4) */
	bp = 80-((96)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((160)/4)+((199)*80) */
	si = ((160)/4)+((199)*80);
	/* mov	di,((96)/4)+((156)*80) */
	di = ((96)/4)+((156)*80);
	/* mov	bl,(128)/4 */
	bl = (128)/4;
	/* mov	bh,(1) */
	bh = 1;
	/* mov	bp,80-((128)/4) */
	bp = 80-((128)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* ret */
	RETN(0);
vga_brackets:
	// 4274 
	// 0 ;* lhs bracket
edummylabel16:
	// 4709 
	/* mov	si,((160)/4)+((84)*80) */
	si = ((160)/4)+((84)*80);
	/* mov	di,((56)/4)+((10)*80) */
	di = ((56)/4)+((10)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(11) */
	bh = 11;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((168)/4)+((95)*80) */
	si = ((168)/4)+((95)*80);
	/* mov	di,((64)/4)+((21)*80) */
	di = ((64)/4)+((21)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(75) */
	bh = 75;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((200)/4)+((84)*80) */
	si = ((200)/4)+((84)*80);
	/* mov	di,((96)/4)+((10)*80) */
	di = ((96)/4)+((10)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(63) */
	bh = 63;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((200)/4)+((147)*80) */
	si = ((200)/4)+((147)*80);
	/* mov	di,((96)/4)+((73)*80) */
	di = ((96)/4)+((73)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(23) */
	bh = 23;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((171)*80) */
	si = ((160)/4)+((171)*80);
	/* mov	di,((56)/4)+((0)*80) */
	di = ((56)/4)+((0)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((192)/4)+((171)*80) */
	si = ((192)/4)+((171)*80);
	/* mov	di,((88)/4)+((0)*80) */
	di = ((88)/4)+((0)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((176)/4)+((84)*80) */
	si = ((176)/4)+((84)*80);
	/* mov	di,((72)/4)+((10)*80) */
	di = ((72)/4)+((10)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(86) */
	bh = 86;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((168)/4)+((171)*80) */
	si = ((168)/4)+((171)*80);
	/* mov	di,((64)/4)+((0)*80) */
	di = ((64)/4)+((0)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;* rhs bracket
	/* mov	si,((224)/4)+((84)*80) */
	si = ((224)/4)+((84)*80);
	/* mov	di,((216)/4)+((10)*80) */
	di = ((216)/4)+((10)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(63) */
	bh = 63;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((216)/4)+((147)*80) */
	si = ((216)/4)+((147)*80);
	/* mov	di,((208)/4)+((73)*80) */
	di = ((208)/4)+((73)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(23) */
	bh = 23;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((256)/4)+((84)*80) */
	si = ((256)/4)+((84)*80);
	/* mov	di,((248)/4)+((10)*80) */
	di = ((248)/4)+((10)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(36) */
	bh = 36;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((248)/4)+((120)*80) */
	si = ((248)/4)+((120)*80);
	/* mov	di,((240)/4)+((46)*80) */
	di = ((240)/4)+((46)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(50) */
	bh = 50;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((160)/4)+((182)*80) */
	si = ((160)/4)+((182)*80);
	/* mov	di,((208)/4)+((0)*80) */
	di = ((208)/4)+((0)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((208)/4)+((182)*80) */
	si = ((208)/4)+((182)*80);
	/* mov	di,((256)/4)+((0)*80) */
	di = ((256)/4)+((0)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	MExtraSprite */
	CALL(mextrasprite, 0);
	/* mov	si,((248)/4)+((84)*80) */
	si = ((248)/4)+((84)*80);
	/* mov	di,((240)/4)+((10)*80) */
	di = ((240)/4)+((10)*80);
	/* mov	bl,(8)/4 */
	bl = (8)/4;
	/* mov	bh,(36) */
	bh = 36;
	/* mov	bp,80-((8)/4) */
	bp = 80-((8)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((232)/4)+((84)*80) */
	si = ((232)/4)+((84)*80);
	/* mov	di,((224)/4)+((10)*80) */
	di = ((224)/4)+((10)*80);
	/* mov	bl,(16)/4 */
	bl = (16)/4;
	/* mov	bh,(86) */
	bh = 86;
	/* mov	bp,80-((16)/4) */
	bp = 80-((16)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* mov	si,((184)/4)+((182)*80) */
	si = ((184)/4)+((182)*80);
	/* mov	di,((232)/4)+((0)*80) */
	di = ((232)/4)+((0)*80);
	/* mov	bl,(24)/4 */
	bl = (24)/4;
	/* mov	bh,(10) */
	bh = 10;
	/* mov	bp,80-((24)/4) */
	bp = 80-((24)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	// 0 ;* reflector
	/* mov	si,((160)/4)+((196)*80) */
	si = ((160)/4)+((196)*80);
	/* mov	di,((112)/4)+((1)*80) */
	di = ((112)/4)+((1)*80);
	/* mov	bl,(96)/4 */
	bl = (96)/4;
	/* mov	bh,(2) */
	bh = 2;
	/* mov	bp,80-((96)/4) */
	bp = 80-((96)/4);
	/* call	QExtraSprite */
	CALL(qextrasprite, 0);
	/* ret */
	RETN(0);
qextrasprite:
	// 4407 
	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel17:
	// 4711 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	ch,ch		;reset counter high byte */
	XOR(ch, ch);
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
dummylabel101:
	// 4713 
	/* @@:		mov	cl,bl		;width count */
	cl = bl;
	// 4426 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	@B */
	if (ah != 0) {goto dummylabel101;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
dummylabel102:
	// 4715 
	/* @@:		mov	cl,bl		;width count */
	cl = bl;
	// 4440 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	@B */
	if (ah != 0) {goto dummylabel102;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
dummylabel103:
	// 4717 
	/* @@:		mov	cl,bl		;width count */
	cl = bl;
	// 4454 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	@B */
	if (ah != 0) {goto dummylabel103;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
dummylabel104:
	// 4719 
	/* @@:		mov	cl,bl		;width count */
	cl = bl;
	// 4466 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	@B */
	if (ah != 0) {goto dummylabel104;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
mextrasprite:
	// 4490 
	/* push	ds ;* note: Mask colour is assumed to be colour 0. */
	PUSH(ds);
edummylabel18:
	// 4721 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	ch,ch		;reset counter high byte */
	XOR(ch, ch);
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
mxlp1_1:
	// 4723 
	/* MxLp1_1:	mov	cl,bl		;width count */
	cl = bl;
mxlp1_2:
	// 4725 
	/* MxLp1_2:	lodsb */
	{ LODSB; }
	/* test	al,al		;mask colour */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel105;}
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
dummylabel105:
	// 4727 
	/* @@:		inc	di */
	INC(di);
	/* loop	MxLp1_2 */
	LOOP(mxlp1_2);
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	MxLp1_1 */
	if (ah != 0) {goto mxlp1_1;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
mxlp2_1:
	// 4729 
	/* MxLp2_1:	mov	cl,bl		;width count */
	cl = bl;
mxlp2_2:
	// 4731 
	/* MxLp2_2:	lodsb */
	{ LODSB; }
	/* test	al,al		;mask colour */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel106;}
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
dummylabel106:
	// 4733 
	/* @@:		inc	di */
	INC(di);
	/* loop	MxLp2_2 */
	LOOP(mxlp2_2);
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	MxLp2_1 */
	if (ah != 0) {goto mxlp2_1;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
mxlp3_1:
	// 4735 
	/* MxLp3_1:	mov	cl,bl		;width count */
	cl = bl;
mxlp3_2:
	// 4737 
	/* MxLp3_2:	lodsb */
	{ LODSB; }
	/* test	al,al		;mask colour */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel107;}
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
dummylabel107:
	// 4739 
	/* @@:		inc	di */
	INC(di);
	/* loop	MxLp3_2 */
	LOOP(mxlp3_2);
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	MxLp3_1 */
	if (ah != 0) {goto mxlp3_1;}
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* add	si,320*200/4	;next map */
	ADD(si, 320*200/4);
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ah,bh		;depth count */
	ah = bh;
mxlp4_1:
	// 4741 
	/* MxLp4_1:	mov	cl,bl		;width count */
	cl = bl;
mxlp4_2:
	// 4743 
	/* MxLp4_2:	lodsb */
	{ LODSB; }
	/* test	al,al		;mask colour */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel108;}
	/* mov	es:[di],al */
	m2c::setdata(&(*(raddr(es,di))), m2c::getdata(al));
dummylabel108:
	// 4745 
	/* @@:		inc	di */
	INC(di);
	/* loop	MxLp4_2 */
	LOOP(mxlp4_2);
	/* add	si,bp		;next line */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	ah */
	DEC(ah);
	/* jnz	MxLp4_1 */
	if (ah != 0) {goto mxlp4_1;}
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
videoblitter:

	/* push	ds ;*       VGA_SEQ_MAPMSK */
	PUSH(ds);
edummylabel19:
	// 4747 
	/* push	es */
	PUSH(es);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* xor	ch,ch		;reset counter high byte */
	XOR(ch, ch);
dummylabel109:
	// 4749 
	/* @@:		mov	cl,bl */
	cl = bl;
	// 4615 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* add	si,bp */
	ADD(si, bp);
	/* add	di,bp */
	ADD(di, bp);
	/* dec	bh */
	DEC(bh);
	/* jnz	@B */
	if (bh != 0) {goto dummylabel109;}
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
drawradarnoise:
	// 4637 
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
edummylabel20:
	// 4751 
	/* jne	@F			;no, nav -> */
	if (!ZF) {goto dummylabel110;}
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* VIDBLIT - VideoBlitter macro
	// 0 ;*
	// 0 ;* pass: page = source video page
	// 0 ;*         xs = x source (4 pixel boundary)
	// 0 ;*         ys = y source (4 pixel boundary)
	// 0 ;*         xd = x dest (4 pixel boundary)
	// 0 ;*         yd = y dest (4 pixel boundary)
	// 0 ;*          w = width (multiple of 4 pixels)
	// 0 ;*          d = depth
	// 0 ;* ret : nothing
	// 0 ;* kill: assume all
	// 0 ;
	// 0 ;VIDBLIT		MACRO	page,xs,ys,xd,yd,w,d
	/* cmp EScopeToggle,8 */
	CMP(escopetoggle, 8);
	/* je zxzx ;je RepositionBlitter ;yes -> */
	if ((dw)(escopetoggle) == (dw)(8)) {goto zxzx;}
	/* cmp EScopeToggle,13 */
	CMP(escopetoggle, 13);
	/* je zxzx ;je RepositionBlitter ;yes -> */
	if ((dw)(escopetoggle) == (dw)(13)) {goto zxzx;}
zxzx:
	// 4753 
	/* test QuieterCockpit,1 ;in cockpit? */
	TEST(quietercockpit, 1);
	/* jz RepositionBlitter  ;->no */
	if (!(quietercockpit & 1)) {goto repositionblitter;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((26)*80) */
	si = ((16)/4)+((26)*80);
	/* mov	di,((128)/4)+((144)*80) */
	di = ((128)/4)+((144)*80);
	/* mov	bl,(64)/4 */
	bl = (64)/4;
	/* mov	bh,(48) */
	bh = 48;
	/* mov	bp,80-((64)/4) */
	bp = 80-((64)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETN(0);
dummylabel110:
	// 4755 
	// 0 ;VIDBLIT	NAVIGPAN_SEG,16,26,128,57,64,48
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;TAB2's FLIR selected?  Frankie hack on 5/12/2017 */
	CMP(tab1.tab_mode, 8);
	/* je RepositionBlitter ;yes -> */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto repositionblitter;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;TAB2's FLIR selected?  Frankie hack on 5/12/2017 */
	CMP(tab1.tab_mode, 12);
	/* je RepositionBlitter ;yes -> */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto repositionblitter;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;TAB2's FLIR selected?  Frankie hack on 5/12/2017 */
	CMP(tab2.tab_mode, 8);
	/* je RepositionBlitter ;yes -> */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto repositionblitter;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;TAB2's FLIR selected?  Frankie hack on 5/12/2017 */
	CMP(tab2.tab_mode, 12);
	/* je RepositionBlitter ;yes -> */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto repositionblitter;}
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((26)*80) */
	si = ((16)/4)+((26)*80);
	/* mov	di,((128)/4)+((57)*80) */
	di = ((128)/4)+((57)*80);
	/* mov	bl,(64)/4 */
	bl = (64)/4;
	/* mov	bh,(48) */
	bh = 48;
	/* mov	bp,80-((64)/4) */
	bp = 80-((64)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETN(0);
repositionblitter:
	// 4757 
	/* mov	dx,NAVIGPAN_SEG */
	dx = 0x0ac00;
	/* mov	si,((16)/4)+((26)*80) */
	si = ((16)/4)+((26)*80);
	/* mov	di,((0)/4)+((0)*80) */
	di = ((0)/4)+((0)*80);
	/* mov	bl,(64)/4 */
	bl = (64)/4;
	/* mov	bh,(48) */
	bh = 48;
	/* mov	bp,80-((64)/4) */
	bp = 80-((64)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETN(0);
copypreviewpan:
	// 4708 
	/* mov	dx,VGA_PAGE_3 ;* note: Only implemented for VGA display. */
	dx = 0x0ac00;
edummylabel21:
	// 4759 
	/* mov	si,((0)/4)+((0)*80) */
	si = ((0)/4)+((0)*80);
	/* mov	di,((0)/4)+((160)*80) */
	di = ((0)/4)+((160)*80);
	/* mov	bl,(320)/4 */
	bl = (320)/4;
	/* mov	bh,(40) */
	bh = 40;
	/* mov	bp,80-((320)/4) */
	bp = 80-((320)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETF(0);
drawpreviewpan:
	// 4729 
	/* mov	dx,VGA_PAGE_3 ;* note: Only implemented for VGA display. */
	dx = 0x0ac00;
edummylabel22:
	// 4761 
	/* mov	si,((0)/4)+((160)*80) */
	si = ((0)/4)+((160)*80);
	/* mov	di,((0)/4)+((160)*80) */
	di = ((0)/4)+((160)*80);
	/* mov	bl,(320)/4 */
	bl = (320)/4;
	/* mov	bh,(40) */
	bh = 40;
	/* mov	bp,80-((320)/4) */
	bp = 80-((320)/4);
	/* call	VideoBlitter */
	CALL(videoblitter, 0);
	/* ret */
	RETF(0);
storeworkscreen:
	// 4753 
	/* push	ds ;*       Data can be restored with RetrieveData routine. */
	PUSH(ds);
edummylabel23:
	// 4763 
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si		;ds:si -> start of WorkScreen */
	XOR(si, si);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,0001b	;map 0 */
	al = 0x1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,(320*200)/4 */
	cx = (320*200)/4;
	/* xor	di,di */
	XOR(di, di);
	// 4769 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,0010b	;map 1 */
	al = 0x2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,(320*200)/4 */
	cx = (320*200)/4;
	/* xor	di,di */
	XOR(di, di);
	// 4774 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,0100b	;map 2 */
	al = 0x4;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,(320*200)/4 */
	cx = (320*200)/4;
	/* xor	di,di */
	XOR(di, di);
	// 4779 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	al,1000b	;map 3 */
	al = 0x8;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,(320*200)/4 */
	cx = (320*200)/4;
	/* xor	di,di */
	XOR(di, di);
	// 4784 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
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
                case m2c::k__m2c_macrolocal_103_skip: 	goto __m2c_macrolocal_103_skip;
        case m2c::k__m2c_macrolocal_104_skip: 	goto __m2c_macrolocal_104_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_92_skip: 	goto __m2c_macrolocal_92_skip;
        case m2c::k__m2c_macrolocal_97_skip: 	goto __m2c_macrolocal_97_skip;
        case m2c::kappprogok: 	goto appprogok;
        case m2c::kbriskok: 	goto briskok;
        case m2c::kcheckfordamageoroff: 	goto checkfordamageoroff;
        case m2c::kcheckifradaltok: 	goto checkifradaltok;
        case m2c::kcopypreviewpan: 	goto copypreviewpan;
        case m2c::kdollyok: 	goto dollyok;
        case m2c::kdrawpreviewpan: 	goto drawpreviewpan;
        case m2c::kdrawradarnoise: 	goto drawradarnoise;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel100: 	goto dummylabel100;
        case m2c::kdummylabel101: 	goto dummylabel101;
        case m2c::kdummylabel102: 	goto dummylabel102;
        case m2c::kdummylabel103: 	goto dummylabel103;
        case m2c::kdummylabel104: 	goto dummylabel104;
        case m2c::kdummylabel105: 	goto dummylabel105;
        case m2c::kdummylabel106: 	goto dummylabel106;
        case m2c::kdummylabel107: 	goto dummylabel107;
        case m2c::kdummylabel108: 	goto dummylabel108;
        case m2c::kdummylabel109: 	goto dummylabel109;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel110: 	goto dummylabel110;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel21: 	goto dummylabel21;
        case m2c::kdummylabel22: 	goto dummylabel22;
        case m2c::kdummylabel23: 	goto dummylabel23;
        case m2c::kdummylabel24: 	goto dummylabel24;
        case m2c::kdummylabel25: 	goto dummylabel25;
        case m2c::kdummylabel26: 	goto dummylabel26;
        case m2c::kdummylabel27: 	goto dummylabel27;
        case m2c::kdummylabel28: 	goto dummylabel28;
        case m2c::kdummylabel29: 	goto dummylabel29;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel30: 	goto dummylabel30;
        case m2c::kdummylabel31: 	goto dummylabel31;
        case m2c::kdummylabel32: 	goto dummylabel32;
        case m2c::kdummylabel33: 	goto dummylabel33;
        case m2c::kdummylabel34: 	goto dummylabel34;
        case m2c::kdummylabel35: 	goto dummylabel35;
        case m2c::kdummylabel36: 	goto dummylabel36;
        case m2c::kdummylabel37: 	goto dummylabel37;
        case m2c::kdummylabel38: 	goto dummylabel38;
        case m2c::kdummylabel39: 	goto dummylabel39;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel40: 	goto dummylabel40;
        case m2c::kdummylabel41: 	goto dummylabel41;
        case m2c::kdummylabel42: 	goto dummylabel42;
        case m2c::kdummylabel43: 	goto dummylabel43;
        case m2c::kdummylabel44: 	goto dummylabel44;
        case m2c::kdummylabel45: 	goto dummylabel45;
        case m2c::kdummylabel46: 	goto dummylabel46;
        case m2c::kdummylabel47: 	goto dummylabel47;
        case m2c::kdummylabel48: 	goto dummylabel48;
        case m2c::kdummylabel49: 	goto dummylabel49;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel50: 	goto dummylabel50;
        case m2c::kdummylabel51: 	goto dummylabel51;
        case m2c::kdummylabel52: 	goto dummylabel52;
        case m2c::kdummylabel53: 	goto dummylabel53;
        case m2c::kdummylabel54: 	goto dummylabel54;
        case m2c::kdummylabel55: 	goto dummylabel55;
        case m2c::kdummylabel56: 	goto dummylabel56;
        case m2c::kdummylabel57: 	goto dummylabel57;
        case m2c::kdummylabel58: 	goto dummylabel58;
        case m2c::kdummylabel59: 	goto dummylabel59;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel60: 	goto dummylabel60;
        case m2c::kdummylabel61: 	goto dummylabel61;
        case m2c::kdummylabel62: 	goto dummylabel62;
        case m2c::kdummylabel63: 	goto dummylabel63;
        case m2c::kdummylabel64: 	goto dummylabel64;
        case m2c::kdummylabel65: 	goto dummylabel65;
        case m2c::kdummylabel66: 	goto dummylabel66;
        case m2c::kdummylabel67: 	goto dummylabel67;
        case m2c::kdummylabel68: 	goto dummylabel68;
        case m2c::kdummylabel69: 	goto dummylabel69;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel70: 	goto dummylabel70;
        case m2c::kdummylabel71: 	goto dummylabel71;
        case m2c::kdummylabel72: 	goto dummylabel72;
        case m2c::kdummylabel73: 	goto dummylabel73;
        case m2c::kdummylabel74: 	goto dummylabel74;
        case m2c::kdummylabel75: 	goto dummylabel75;
        case m2c::kdummylabel76: 	goto dummylabel76;
        case m2c::kdummylabel77: 	goto dummylabel77;
        case m2c::kdummylabel78: 	goto dummylabel78;
        case m2c::kdummylabel79: 	goto dummylabel79;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel80: 	goto dummylabel80;
        case m2c::kdummylabel81: 	goto dummylabel81;
        case m2c::kdummylabel82: 	goto dummylabel82;
        case m2c::kdummylabel83: 	goto dummylabel83;
        case m2c::kdummylabel84: 	goto dummylabel84;
        case m2c::kdummylabel85: 	goto dummylabel85;
        case m2c::kdummylabel86: 	goto dummylabel86;
        case m2c::kdummylabel87: 	goto dummylabel87;
        case m2c::kdummylabel88: 	goto dummylabel88;
        case m2c::kdummylabel89: 	goto dummylabel89;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kdummylabel90: 	goto dummylabel90;
        case m2c::kdummylabel91: 	goto dummylabel91;
        case m2c::kdummylabel92: 	goto dummylabel92;
        case m2c::kdummylabel93: 	goto dummylabel93;
        case m2c::kdummylabel94: 	goto dummylabel94;
        case m2c::kdummylabel95: 	goto dummylabel95;
        case m2c::kdummylabel96: 	goto dummylabel96;
        case m2c::kdummylabel97: 	goto dummylabel97;
        case m2c::kdummylabel98: 	goto dummylabel98;
        case m2c::kdummylabel99: 	goto dummylabel99;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel18: 	goto edummylabel18;
        case m2c::kedummylabel19: 	goto edummylabel19;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel20: 	goto edummylabel20;
        case m2c::kedummylabel21: 	goto edummylabel21;
        case m2c::kedummylabel22: 	goto edummylabel22;
        case m2c::kedummylabel23: 	goto edummylabel23;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::keng1ok: 	goto eng1ok;
        case m2c::keng2ok: 	goto eng2ok;
        case m2c::kgetouttahere: 	goto getouttahere;
        case m2c::kinitexit: 	goto initexit;
        case m2c::kinterleavedata: 	goto interleavedata;
        case m2c::kjettisonok: 	goto jettisonok;
        case m2c::klatearmok: 	goto latearmok;
        case m2c::kloadlookdownpan: 	goto loadlookdownpan;
        case m2c::kloadmappan: 	goto loadmappan;
        case m2c::kloadnavigpan: 	goto loadnavigpan;
        case m2c::kloadnsidepan: 	goto loadnsidepan;
        case m2c::kloadpilotpan: 	goto loadpilotpan;
        case m2c::kloadpsidepan: 	goto loadpsidepan;
        case m2c::kmextrasprite: 	goto mextrasprite;
        case m2c::kmxlp1_1: 	goto mxlp1_1;
        case m2c::kmxlp1_2: 	goto mxlp1_2;
        case m2c::kmxlp2_1: 	goto mxlp2_1;
        case m2c::kmxlp2_2: 	goto mxlp2_2;
        case m2c::kmxlp3_1: 	goto mxlp3_1;
        case m2c::kmxlp3_2: 	goto mxlp3_2;
        case m2c::kmxlp4_1: 	goto mxlp4_1;
        case m2c::kmxlp4_2: 	goto mxlp4_2;
        case m2c::knavigattnok: 	goto navigattnok;
        case m2c::knavigautook: 	goto navigautook;
        case m2c::knavigautookb: 	goto navigautookb;
        case m2c::knavigecmok: 	goto navigecmok;
        case m2c::knaviggearok: 	goto naviggearok;
        case m2c::knaviggearokb: 	goto naviggearokb;
        case m2c::knavigmfdok: 	goto navigmfdok;
        case m2c::knavigradarok: 	goto navigradarok;
        case m2c::knavigtab1ok: 	goto navigtab1ok;
        case m2c::knavigtab2ok: 	goto navigtab2ok;
        case m2c::knavigthrotok: 	goto navigthrotok;
        case m2c::knightlatearm: 	goto nightlatearm;
        case m2c::kpilotattnok: 	goto pilotattnok;
        case m2c::kpilotecmok: 	goto pilotecmok;
        case m2c::kpilotgearok: 	goto pilotgearok;
        case m2c::kpilotmfdok: 	goto pilotmfdok;
        case m2c::kpilotradarok: 	goto pilotradarok;
        case m2c::kqextrasprite: 	goto qextrasprite;
        case m2c::kredgearlamps1: 	goto redgearlamps1;
        case m2c::kredgearlamps2: 	goto redgearlamps2;
        case m2c::kredgearlamps2b: 	goto redgearlamps2b;
        case m2c::kreflectdlp1: 	goto reflectdlp1;
        case m2c::kreflectdlp2: 	goto reflectdlp2;
        case m2c::kreflectdlp3: 	goto reflectdlp3;
        case m2c::kreflectdlp4: 	goto reflectdlp4;
        case m2c::kreflectwlp1: 	goto reflectwlp1;
        case m2c::kreflectwlp2: 	goto reflectwlp2;
        case m2c::kreflectwlp3: 	goto reflectwlp3;
        case m2c::kreflectwlp4: 	goto reflectwlp4;
        case m2c::krepositionblitter: 	goto repositionblitter;
        case m2c::kretrievedata: 	goto retrievedata;
        case m2c::krvrsok: 	goto rvrsok;
        case m2c::krwrok: 	goto rwrok;
        case m2c::ksinisini: 	goto sinisini;
        case m2c::kskipcheckfordamageofoff: 	goto skipcheckfordamageofoff;
        case m2c::kskipcheckifradaltok: 	goto skipcheckifradaltok;
        case m2c::kskipjmpnavigthrotokk: 	goto skipjmpnavigthrotokk;
        case m2c::kskipjmpnavigthrotokk2: 	goto skipjmpnavigthrotokk2;
        case m2c::kskipjmpnavigthrotokk3: 	goto skipjmpnavigthrotokk3;
        case m2c::kstoreworkscreen: 	goto storeworkscreen;
        case m2c::kvga_brackets: 	goto vga_brackets;
        case m2c::kvga_clrnavigpan: 	goto vga_clrnavigpan;
        case m2c::kvga_clrpilotpan: 	goto vga_clrpilotpan;
        case m2c::kvga_drwnavigpan: 	goto vga_drwnavigpan;
        case m2c::kvga_drwnavigpanbrief: 	goto vga_drwnavigpanbrief;
        case m2c::kvga_drwpilotpan: 	goto vga_drwpilotpan;
        case m2c::kvga_initpanels: 	goto vga_initpanels;
        case m2c::kvga_ironwork: 	goto vga_ironwork;
        case m2c::kvga_loadpanel: 	goto vga_loadpanel;
        case m2c::kvideoblitter: 	goto videoblitter;
        case m2c::kwbrakesok: 	goto wbrakesok;
        case m2c::kwpnstatusok: 	goto wpnstatusok;
        case m2c::kzxzx: 	goto zxzx;
        default: return __dispatch_call(__disp, _state);
    };
}

