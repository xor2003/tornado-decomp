/* THIS IS GENERATED FILE */

        
#include "palettes.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
fixirpalette:
	// 1711 
	/* push	ds ;* note: Works for VGA only. */
	PUSH(ds);
edummylabel1:
	// 4369 
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,OFFSET VGA_Palette1+IR_COL_START */
	si = m2c::near_offset_external(vga_palette1)+8;
	/* mov	di,OFFSET Palette+IR_COL_START */
	di = m2c::near_offset_external(palette)+8;
	/* mov	cx,IR_COL_COUNT */
	cx = 104;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1720 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1722 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1723 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1724 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
setirpalette:
	// 1738 
	/* push	ds ;* note: Works for VGA only. */
	PUSH(ds);
edummylabel2:
	// 4371 
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,OFFSET VGA_INFRA_RED */
	si = m2c::near_offset_external(vga_infra_red);
	/* mov	di,OFFSET Palette+IR_COL_START */
	di = m2c::near_offset_external(palette)+8;
	/* mov	cx,IR_COL_COUNT */
	cx = 104;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1747 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1749 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1750 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1751 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
fixgmrpalette:
	// 1765 
	/* mov	Palette[COL_MAP_HILL1],COL_MAP_HILL1 ;* note: Works for VGA only. */
	*((&palette)+112) = 112;
edummylabel3:
	// 4373 
	/* mov	Palette[COL_MAP_HILL2],COL_MAP_HILL2 */
	*((&palette)+113) = 113;
	/* mov	Palette[COL_MAP_HILL3],COL_MAP_HILL3 */
	*((&palette)+114) = 114;
	/* mov	Palette[COL_MAP_HILL4],COL_MAP_HILL4 */
	*((&palette)+115) = 115;
	/* mov	Palette[COL_MAP_HILL5],COL_MAP_HILL5 */
	*((&palette)+116) = 116;
	/* mov	Palette[COL_MAP_HILL6],COL_MAP_HILL6 */
	*((&palette)+117) = 117;
	/* mov	Palette[COL_MAP_HILL7],COL_MAP_HILL7 */
	*((&palette)+118) = 118;
	/* mov	Palette[COL_MAP_HILL8],COL_MAP_HILL8 */
	*((&palette)+119) = 119;
	/* mov	Palette[COL_MAP_HILL9],COL_MAP_HILL9 */
	*((&palette)+120) = 120;
	/* mov	Palette[COL_MAP_HILL10],COL_MAP_HILL10 */
	*((&palette)+121) = 121;
	/* mov	Palette[COL_MAP_HILL11],COL_MAP_HILL11 */
	*((&palette)+122) = 122;
	/* mov	Palette[COL_MAP_HILL12],COL_MAP_HILL12 */
	*((&palette)+123) = 123;
	/* mov	Palette[COL_MAP_HILL13],COL_MAP_HILL13 */
	*((&palette)+124) = 124;
	/* mov	Palette[COL_MAP_HILL14],COL_MAP_HILL14 */
	*((&palette)+125) = 125;
	/* mov	Palette[COL_MAP_HILL15],COL_MAP_HILL15 */
	*((&palette)+126) = 126;
	/* mov	Palette[COL_MAP_HILL16],COL_MAP_HILL16 */
	*((&palette)+127) = 127;
	/* mov	Palette[COL_MAP_GND1],COL_MAP_GND1 */
	*((&palette)+144) = 144;
	/* mov	Palette[COL_MAP_ROAD1],COL_MAP_ROAD1 */
	*((&palette)+145) = 145;
	/* mov	Palette[COL_MAP_RAIL1],COL_MAP_RAIL1 */
	*((&palette)+146) = 146;
	/* mov	Palette[COL_MAP_RWY1],COL_MAP_RWY1 */
	*((&palette)+147) = 147;
	/* mov	Palette[COL_MAP_RIVER1],COL_MAP_RIVER1 */
	*((&palette)+148) = 148;
	/* mov	Palette[COL_MAP_GREEN1],COL_MAP_GREEN1 */
	*((&palette)+149) = 149;
	/* mov	Palette[COL_MAP_GREEN2],COL_MAP_GREEN2 */
	*((&palette)+150) = 150;
	/* mov	Palette[COL_MAP_ALLIED],COL_MAP_ALLIED */
	*((&palette)+153) = 153;
	/* mov	Palette[COL_MAP_RWY2],COL_MAP_RWY2 */
	*((&palette)+157) = 157;
	/* mov	Palette[COL_MAP_ENEMY],COL_MAP_ENEMY */
	*((&palette)+158) = 158;
	/* ret */
	RETF(0);
setgmrpalette:
	// 1804 
	/* mov	Palette[COL_MAP_HILL1],COL_CRT2 ;* note: Works for VGA only. */
	*((&palette)+112) = 161;
edummylabel4:
	// 4375 
	/* mov	Palette[COL_MAP_HILL2],COL_CRT3 */
	*((&palette)+113) = 162;
	/* mov	Palette[COL_MAP_HILL3],COL_CRT2 */
	*((&palette)+114) = 161;
	/* mov	Palette[COL_MAP_HILL4],COL_CRT3 */
	*((&palette)+115) = 162;
	/* mov	Palette[COL_MAP_HILL5],COL_CRT4 */
	*((&palette)+116) = 163;
	/* mov	Palette[COL_MAP_HILL6],COL_CRT5 */
	*((&palette)+117) = 164;
	/* mov	Palette[COL_MAP_HILL7],COL_CRT4 */
	*((&palette)+118) = 163;
	/* mov	Palette[COL_MAP_HILL8],COL_CRT5 */
	*((&palette)+119) = 164;
	/* mov	Palette[COL_MAP_HILL9],COL_CRT6 */
	*((&palette)+120) = 165;
	/* mov	Palette[COL_MAP_HILL10],COL_CRT7 */
	*((&palette)+121) = 166;
	/* mov	Palette[COL_MAP_HILL11],COL_CRT6 */
	*((&palette)+122) = 165;
	/* mov	Palette[COL_MAP_HILL12],COL_CRT7 */
	*((&palette)+123) = 166;
	/* mov	Palette[COL_MAP_HILL13],COL_CRT8 */
	*((&palette)+124) = 167;
	/* mov	Palette[COL_MAP_HILL14],COL_CRT9 */
	*((&palette)+125) = 168;
	/* mov	Palette[COL_MAP_HILL15],COL_CRT8 */
	*((&palette)+126) = 167;
	/* mov	Palette[COL_MAP_HILL16],COL_CRT9 */
	*((&palette)+127) = 168;
	/* mov	Palette[COL_MAP_GND1],COL_CRT1 */
	*((&palette)+144) = 160;
	/* mov	Palette[COL_MAP_ROAD1],COL_CRT4 */
	*((&palette)+145) = 163;
	/* mov	Palette[COL_MAP_RAIL1],COL_CRT8 */
	*((&palette)+146) = 167;
	/* mov	Palette[COL_MAP_RWY1],COL_CRT4 */
	*((&palette)+147) = 163;
	/* mov	Palette[COL_MAP_RIVER1],COL_CRT6 */
	*((&palette)+148) = 165;
	/* mov	Palette[COL_MAP_GREEN1],COL_CRT2 */
	*((&palette)+149) = 161;
	/* mov	Palette[COL_MAP_GREEN2],COL_CRT3 */
	*((&palette)+150) = 162;
	/* mov	Palette[COL_MAP_ALLIED],COL_CRT8 */
	*((&palette)+153) = 167;
	/* mov	Palette[COL_MAP_RWY2],COL_CRT4 */
	*((&palette)+157) = 163;
	/* mov	Palette[COL_MAP_ENEMY],COL_CRT8 */
	*((&palette)+158) = 167;
	/* ret */
	RETF(0);
initpalettes:
	// 1842 
	{static int _ip=-1;if(_ip<0)_ip=getenv("M2C_PAL")?1:0;if(_ip)fprintf(stderr,"[PAL] initpalettes previewmode=%d\n",(int)previewmode);}
	/* mov	SetPaletteFlag,1	;reload palette */
	setpaletteflag = 1;
	// 0 ;-------------------
	// 0 ;* sort preview mode
	// 0 ;-------------------
edummylabel5:
	// 4377 
	/* cmp	PreviewMode,0		;preview mode? */
	CMP(previewmode, 0);
	/* je	SkipPreview		;no -> */
	if ((dw)(previewmode) == (dw)(0)) {goto skippreview;}
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET VGA_Preview */
	si = m2c::near_offset_external(vga_preview);
	/* mov	di,OFFSET VGA_Panel */
	di = m2c::near_offset_external(vga_panel);
	/* mov	cx,32*3 */
	cx = 32*3;
	// 1856 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* jmp	PaletteOk */
	goto paletteok;
	// 0 ;------------------------
	// 0 ;* sort infra-red colours (must be done before palette is modified for night mode)
	// 0 ;------------------------
skippreview:
	// 4379 
	/* SkipPreview:	mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET VGA_RGB_Data+(IR_COL_START*3) */
	si = m2c::near_offset_external(vga_rgb_data)+(8*3);
	/* mov	di,OFFSET VGA_INFRA_RED */
	di = m2c::near_offset_external(vga_infra_red);
	/* mov	cx,IR_COL_COUNT */
	cx = 104;
	// 0 ;* grey scale = R * 0.3 + G * 0.59 + B * 0.11
irloop:
	// 4381 
	/* IRLoop:		lodsb			;R */
	{ LODSB; }
	/* mov	ah,al		;R * 256 */
	ah = al;
	// 0 ;xor	al,al
	/* mov	dx,9830		;0.3 = 9830 / 32768 */
	dx = 9830;
	/* imul	dx		;R * 256 * 0.3 */
	IMUL1_2(dx);
	/* mov	bx,ax		;(R * 0.3) */
	bx = ax;
	/* mov	bp,dx */
	bp = dx;
	/* lodsb			;G */
	{ LODSB; }
	/* mov	ah,al		;G * 256 */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	dx,19333	;0.59 = 19333 / 32768 */
	dx = 19333;
	/* imul	dx		;G * 256 * 0.59 */
	IMUL1_2(dx);
	/* add	bx,ax		;(R * 0.3 + G * 0.59) */
	ADD(bx, ax);
	/* adc	bp,dx */
	ADC(bp, dx);
	/* lodsb			;B */
	{ LODSB; }
	/* mov	ah,al		;B * 256 */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	dx,3604		;0.11 = 3604 / 32768 */
	dx = 3604;
	/* imul	dx		;B * 256 * 0.11 */
	IMUL1_2(dx);
	/* add	ax,bx		;(R * 0.3 + G * 0.59 + B * 0.11) */
	ADD(ax, bx);
	/* adc	dx,bp */
	ADC(dx, bp);
	/* shl	ax,1		;*2 (adjust after fractional multiply) */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dh = 0 .. 63
	/* shr	dh,1		;0 .. 15 */
	SHR(dh, 1);
	/* shr	dh,1		;0 .. 15 */
	SHR(dh, 1);
	// 0 ;mov	al,COL_CRT1
	/* mov	al,COL_CRT1 */
	al = 160;
	/* add	al,dh */
	ADD(al, dh);
	/* stosb */
	{ STOSB; }
	/* loop	IRLoop */
	LOOP(irloop);
	// 0 ;--------------------------------------
	// 0 ;* fix some colours which convert badly
	// 0 ;--------------------------------------
	/* mov	VGA_INFRA_RED[COL_RWY1-IR_COL_START],COL_CRT5 */
	*((&vga_infra_red)+74-8) = 164;
	/* mov	VGA_INFRA_RED[COL_RAIL1-IR_COL_START],COL_CRT5 */
	*((&vga_infra_red)+77-8) = 164;
	/* mov	VGA_INFRA_RED[COL_RAIL2-IR_COL_START],COL_CRT4 */
	*((&vga_infra_red)+78-8) = 163;
	// 0 ;Adjust stars colours when in NVG (IR) colours
	/* mov	VGA_INFRA_RED[COL_NT_GREY2-IR_COL_START],COL_CRT16 */
	*((&vga_infra_red)+10-8) = 175;
	/* mov	VGA_INFRA_RED[COL_NT_GREY3-IR_COL_START],COL_CRT13 ;14 */
	*((&vga_infra_red)+11-8) = 172;
	/* mov	VGA_INFRA_RED[COL_NT_GREY4-IR_COL_START],COL_CRT10 ;12 */
	*((&vga_infra_red)+12-8) = 169;
	/* mov	VGA_INFRA_RED[COL_NT_GREY1-IR_COL_START],COL_CRT7 ;11 */
	*((&vga_infra_red)+9-8) = 166;
	// 0 ;Adjust LGB1000 colours when in NVG (IR) colours
	/* mov VGA_INFRA_RED[COL_GREY4-IR_COL_START],COL_CRT5 */
	*((&vga_infra_red)+28-8) = 164;
	// 0 ;Adjust Tornado colours when in NVG (IR) colours
	/* mov	VGA_INFRA_RED[COL_OLIVE4-IR_COL_START],COL_CRT6 */
	*((&vga_infra_red)+67-8) = 165;
	/* mov     VGA_INFRA_RED[COL_OLIVE3-IR_COL_START],COL_CRT4 */
	*((&vga_infra_red)+66-8) = 163;
	/* mov	VGA_INFRA_RED[COL_DK_CYAN1-IR_COL_START],COL_CRT6 */
	*((&vga_infra_red)+60-8) = 165;
	/* mov	VGA_INFRA_RED[COL_DK_CYAN3-IR_COL_START],COL_CRT8 */
	*((&vga_infra_red)+62-8) = 167;
	/* mov	VGA_INFRA_RED[COL_OLIVE2-IR_COL_START],COL_CRT5 */
	*((&vga_infra_red)+65-8) = 164;
	// 0 ;Adjust runaway (tarmac) colours when in NVG (IR) colours
	/* mov	VGA_INFRA_RED[COL_RWY1-IR_COL_START],COL_CRT4 */
	*((&vga_infra_red)+74-8) = 163;
	// 0 ;Adjust upper sky when in NVG (IR) colours
	/* mov	VGA_INFRA_RED[COL_SKY12-IR_COL_START],COL_CRT6 */
	*((&vga_infra_red)+107-8) = 165;
	// 0 ;Adjust cloud colours
	/* mov	VGA_INFRA_RED[COL_NEAR_WHITE1-IR_COL_START],COL_CRT11 */
	*((&vga_infra_red)+70-8) = 170;
	/* mov	VGA_INFRA_RED[COL_NEW_GREY1-IR_COL_START],COL_CRT8 */
	*((&vga_infra_red)+46-8) = 167;
	// 0 ;Adjust ADV Tornado (from too bright gray to darker shade of NVG)
	/* mov	VGA_INFRA_RED[COL_CYAN_GREY1-IR_COL_START],COL_CRT9 */
	*((&vga_infra_red)+30-8) = 168;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------------------
	// 0 ;* modify palette colours wrt night mode
	// 0 ;---------------------------------------
	/* mov	cl,Night */
	cl = night;
	/* test	cl,cl		;night? */
	TEST(cl, cl);
	/* jnz	__m2c_macrolocal_4_skip */
	if ((cl & cl) != 0) {goto __m2c_macrolocal_4_skip;}
	/* jmp	PaletteOk */
	goto paletteok;
__m2c_macrolocal_4_skip:
	// 4383 
	// 0 ;no ->
	// 0 ;* modify visual colours (divide wrt night mode)
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET VGA_RGB_Data+(NIGHT_COL_START*3) */
	si = m2c::near_offset_external(vga_rgb_data)+(24*3);
	/* mov	bp,NIGHT_COL_COUNT*3 */
	bp = 88*3;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	/* mov	si,OFFSET VGA_GND1 */
	si = m2c::near_offset_external(vga_gnd1);
	/* mov	bp,2*3 */
	bp = 2*3;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	/* mov	si,OFFSET VGA_GND2 */
	si = m2c::near_offset_external(vga_gnd2);
	/* mov	bp,2*3 */
	bp = 2*3;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	/* mov	si,OFFSET VGA_SKY1 */
	si = m2c::near_offset_external(vga_sky1);
	/* mov	bp,16*3 */
	bp = 16*3;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	/* mov	si,OFFSET VGA_SKY2 */
	si = m2c::near_offset_external(vga_sky2);
	/* mov	bp,16*3 */
	bp = 16*3;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* overlay night panel palettes
	/* call	SetNightPanel */
	CALL(setnightpanel, 0);
	/* jc	ExitPalettes	;palette RGB data load error -> */
	if (CF) {goto exitpalettes;}
	// 0 ;* modify fade colours (divide wrt night mode)
	/* mov	si,OFFSET RGBFadeColours */
	si = m2c::near_offset_external(rgbfadecolours);
	/* mov	bp,2*3 */
	bp = 2*3;
	/* mov	cl,Night */
	cl = night;
	/* call	ScaleRGBValues */
	CALL(scalergbvalues, 0);
	// 0 ;* init HUD colour wrt night mode
	/* mov	al,Night	;1 .. 4 */
	al = night;
	/* dec	al		;0 .. 3 */
	DEC(al);
	/* mov	bx,OFFSET InitNightHUD */
	bx = m2c::near_offset_external(initnighthud);
	/* xlat */
	XLAT;
	/* mov	HUDLevel,al */
	hudlevel = al;
	/* call	SetHUDLevel */
	CALLF(sethudlevel, 0);
paletteok:
	// 4385 
	/* PaletteOk:	clc			;cf = 0 = ok */
	CLC;
exitpalettes:
	// 4387 
	/* ExitPalettes:	ret */
	RETN(0);
scalergbvalues:
	// 2022 
dummylabel1:
	// 4389 
	/* @@:		mov	al,[si] ;* kill: si, bp, flags */
	al = m2c::getdata(*(raddr(ds,si)));
	/* shr	al,cl */
	SHR(al, cl);
	/* adc	al,0 */
	ADC(al, 0);
	/* mov	[si],al */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(al));
	/* inc	si */
	INC(si);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel1;}
	/* ret */
	RETN(0);
swappalettes:
	// 2040 
	/* mov	SetPaletteFlag,1	;reload palette */
	setpaletteflag = 1;
edummylabel6:
	// 4391 
	/* push	ds */
	PUSH(ds);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,OFFSET VGA_RGB_Data */
	si = m2c::near_offset_external(vga_rgb_data);
	/* mov	cx,256*3 */
	cx = 256*3;
dummylabel2:
	// 4393 
	/* @@:		mov	al,[si] */
	al = m2c::getdata(*(raddr(ds,si)));
	/* xchg	al,es:[di] */
	XCHG(al, *(raddr(es,di)));
	/* mov	[si],al */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(al));
	/* inc	si */
	INC(si);
	/* inc	di */
	INC(di);
	/* loop	@B */
	LOOP(dummylabel2);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
setnightpanel:
	// 2066 
	// 0 ;---------------
	// 0 ;* sort filename (wrt panel lighting and night mode)
	// 0 ;---------------
edummylabel7:
	// 4395 
	/* mov	al,'R'		;assume red lighting */
	al = 'R';
	/* cmp	PanelLight,0	;red? */
	CMP(panellight, 0);
	/* je	@F		;yes -> */
	if ((dw)(panellight) == (dw)(0)) {goto dummylabel3;}
	/* mov	al,'G' */
	al = 'G';
dummylabel3:
	// 4397 
	/* @@:		mov	PanelOverlay[6],al */
	*((paneloverlay)+6) = al;
	/* mov	KneesOverlay[6],al */
	*((kneesoverlay)+6) = al;
	/* mov	al,Night */
	al = night;
	/* add	al,'0' */
	ADD(al, '0');
	/* mov	PanelOverlay[7],al */
	*((paneloverlay)+7) = al;
	/* mov	KneesOverlay[7],al */
	*((kneesoverlay)+7) = al;
	// 0 ;---------------
	// 0 ;* load palettes
	// 0 ;---------------
	// 0 ;* load panel RGB data
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	cx,144*3 */
	cx = 144*3;
	/* mov	dx,OFFSET PanelOverlay */
	dx = m2c::near_offset_external(paneloverlay);
	/* mov	di,OFFSET VGA_MiscPanel */
	di = m2c::near_offset_external(vga_miscpanel);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jc	ExitNightPanel	;palette RGB data load error -> */
	if (CF) {goto exitnightpanel;}
	// 0 ;* copy VGA_Panel data to VGA_Panel1
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,80*3 */
	cx = 80*3;
	/* mov	si,OFFSET VGA_Panel */
	si = m2c::near_offset_external(vga_panel);
	/* mov	di,OFFSET VGA_Panel1 */
	di = m2c::near_offset_external(vga_panel1);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2104 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2106 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2107 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2108 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* load kneepad RGB data
	/* mov	cx,80*3 */
	cx = 80*3;
	/* mov	dx,OFFSET KneesOverlay */
	dx = m2c::near_offset_external(kneesoverlay);
	/* mov	di,OFFSET VGA_Panel2 */
	di = m2c::near_offset_external(vga_panel2);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* jc	ExitNightPanel	;palette RGB data load error -> */
	if (CF) {goto exitnightpanel;}
	// 0 ;-----------------------------
	// 0 ;* sort external text palettes (wrt night mode)
	// 0 ;-----------------------------
	/* mov	al,Night	;1, 2, 3, 4 */
	al = night;
	/* mov	ah,3*3 */
	ah = 3*3;
	/* mul	ah		;9, 18, 27, 36 */
	MUL1_1(ah);
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,3*3 */
	cx = 3*3;
	/* mov	si,OFFSET VGA_EXT_TEXT1 */
	si = m2c::near_offset_external(vga_ext_text1);
	/* add	si,bx */
	ADD(si, bx);
	/* mov	di,OFFSET VGA_EXT_TEXT */
	di = m2c::near_offset_external(vga_ext_text);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2135 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2137 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2138 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2139 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	cx,3*3 */
	cx = 3*3;
	/* mov	si,OFFSET VGA_EXT_TEXT1 */
	si = m2c::near_offset_external(vga_ext_text1);
	/* add	si,bx */
	ADD(si, bx);
	/* mov	di,OFFSET VGA_EXT_TEXT1 */
	di = m2c::near_offset_external(vga_ext_text1);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2145 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2147 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2148 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2149 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	cx,3*3 */
	cx = 3*3;
	/* mov	si,OFFSET VGA_EXT_TEXT2 */
	si = m2c::near_offset_external(vga_ext_text2);
	/* add	si,bx */
	ADD(si, bx);
	/* mov	di,OFFSET VGA_EXT_TEXT2 */
	di = m2c::near_offset_external(vga_ext_text2);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2155 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2157 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2158 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2159 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* clc			;cf = 0 = ok */
	CLC;
exitnightpanel:
	// 4399 
	/* ExitNightPanel:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* ret */
	RETN(0);
sethudlevel:
	// 2174 
	/* mov	SetPaletteFlag,1 ;* kill: assume all */
	setpaletteflag = 1;
edummylabel8:
	// 4401 
	/* mov	al,HUDLevel */
	al = hudlevel;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,ax		;*2 */
	ADD(ax, ax);
	/* add	ax,dx		;*3 */
	ADD(ax, dx);
	/* mov	si,OFFSET VGA_HUD_COLS */
	si = m2c::near_offset_external(vga_hud_cols);
	/* add	si,ax */
	ADD(si, ax);
	/* mov	ax,PALDATA */
	ax = seg_offset(paldata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_HUD */
	di = m2c::near_offset_external(vga_hud);
	/* mov	cx,1*3 */
	cx = 1*3;
	// 2188 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
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
                case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kexitnightpanel: 	goto exitnightpanel;
        case m2c::kexitpalettes: 	goto exitpalettes;
        case m2c::kfixgmrpalette: 	goto fixgmrpalette;
        case m2c::kfixirpalette: 	goto fixirpalette;
        case m2c::kinitpalettes: 	goto initpalettes;
        case m2c::kirloop: 	goto irloop;
        case m2c::kpaletteok: 	goto paletteok;
        case m2c::kscalergbvalues: 	goto scalergbvalues;
        case m2c::ksetgmrpalette: 	goto setgmrpalette;
        case m2c::ksethudlevel: 	goto sethudlevel;
        case m2c::ksetirpalette: 	goto setirpalette;
        case m2c::ksetnightpanel: 	goto setnightpanel;
        case m2c::kskippreview: 	goto skippreview;
        case m2c::kswappalettes: 	goto swappalettes;
        default: return __dispatch_call(__disp, _state);
    };
}

