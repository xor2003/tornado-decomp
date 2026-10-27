/* THIS IS GENERATED FILE */

        
#include "com_drvr.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
setvideomode:
	// 505 
	// 0 ;* initialize jumps wrt ScreenMode
edummylabel1:
	// 4369 
	/* mov	bx,ScreenMode */
	bx = screenmode;
	/* mov	di,OFFSET JumpInitList */
	di = m2c::near_offset_external(jumpinitlist);
setvideoloop:
	// 4371 
	/* SetVideoLoop:	mov	si,[di] */
	si = m2c::getdata(*(dw*)(raddr(ds,di)));
	/* cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	InitPalette	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto initpalette;}
	/* mov	ax,[si+bx+2] */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx+2)));
	/* mov	[si],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si))), m2c::getdata(ax));
	/* add	di,2 */
	ADD(di, 2);
	/* jmp	SetVideoLoop */
	goto setvideoloop;
	// 0 ;* initialize palette wrt ScreenMode
initpalette:
	// 4373 
	/* InitPalette:	mov	bx,ScreenMode */
	bx = screenmode;
	{static int _ip=-1;if(_ip<0)_ip=getenv("M2C_PAL")?1:0;if(_ip)fprintf(stderr,"[PAL] initpalette screenmode=%d bx=%d paltbl[bx]=%d\n",(int)screenmode,(int)bx,(int)*(dw*)(((db*)&palettetable)+bx));}
	/* mov	si,PaletteTable[bx] */
	si = *(dw*)(((db*)&palettetable)+bx);
	/* push	ds */
	PUSH(ds);
	/* mov	ax,SEG TAN_Palette1 */
	ax = m2c::segment_of_external(tan_palette1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* call	FAR PTR SetPalette */
	CALLF(setpalette, 0);
	/* pop	ds */
	POP(ds);
	// 0 ;* set screen type
	/* mov	bx,ScreenMode */
	bx = screenmode;
	/* mov	ax,ScreenTypeTable[bx] */
	ax = *(dw*)(((db*)&screentypetable)+bx);
	/* mov	ScreenType,ax */
	screentype = ax;
	// 0 ;* set video mode
	/* mov	bp,_SetVideoMode */
	bp = _setvideomode;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
download:
	// 551 
	// 0 ;* fix max frame rate (stop program running away)
framewait:
	// 4375 
	/* FrameWait:	mov	ax,Frames */
	ax = frames;
	/* cmp	ax,MaxFrameRate */
	CMP(ax, maxframerate);
	/* jb	FrameWait */
	if ((dw)(ax) < (dw)(maxframerate)) {goto framewait;}
	/* mov	LastFrame,ax	;store frame time */
	lastframe = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Frames,ax */
	frames = ax;
	/* mov	PolyCount,0 */
	polycount = 0;
	/* cli */
	CLI;
	/* mov	ax,WORD PTR ElapsedTime */
	ax = *(dw*)(&elapsedtime);
	/* mov	dx,WORD PTR ElapsedTime+2 */
	dx = *(dw*)(((db*)&elapsedtime)+2);
	/* mov	WORD PTR FrameElapTime,ax */
	*(dw*)(&frameelaptime) = ax;
	/* mov	WORD PTR FrameElapTime+2,dx */
	*(dw*)(((db*)&frameelaptime)+2) = dx;
	/* sti */
	STI;
	/* mov	bp,_DownLoad */
	bp = _download;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
setpixel:
	// 580 
	/* inc	PolyCount ;* kill: assume all */
	INC(polycount);
edummylabel2:
	// 4377 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* mov	al,Palette[si] */
	al = *((palette)+si);
	/* mov	PixelCol,al */
	*(pixelcol) = al;
	/* mov	bp,_SetPixel */
	bp = _setpixel;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
linedraw:
	// 599 
	/* inc	PolyCount ;* kill: assume all */
	INC(polycount);
edummylabel3:
	// 4379 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* mov	al,Palette[si] */
	al = *((palette)+si);
	/* mov	LineCol,al */
	*(linecol) = al;
	/* mov	bp,_LineDraw */
	bp = _linedraw;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
vlinedraw:
	// 619 
	/* inc	PolyCount ;* kill: assume all */
	INC(polycount);
edummylabel4:
	// 4381 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* mov	al,Palette[si] */
	al = *((palette)+si);
	/* mov	LineCol,al */
	*(linecol) = al;
	/* mov	bp,_VLineDraw */
	bp = _vlinedraw;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
hlinedraw:
	// 639 
	/* inc	PolyCount ;* kill: assume all */
	INC(polycount);
edummylabel5:
	// 4383 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* mov	al,Palette[si] */
	al = *((palette)+si);
	/* mov	LineCol,al */
	*(linecol) = al;
	/* mov	bp,_HLineDraw */
	bp = _hlinedraw;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
printchar1:
	// 665 
	/* mov	bp,_PrintChar1 ;*       No checks are made for PrtLn and PrtCl being off screen. */
	bp = _printchar1;
edummylabel6:
	// 4385 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
printchar2:
	// 685 
	/* mov	bp,_PrintChar2 ;*       No checks are made for PrtLn and PrtCl being off screen. */
	bp = _printchar2;
edummylabel7:
	// 4387 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
printchar3:
	// 706 
	/* mov	bp,_PrintChar3 ;*       No checks are made for PrtLn and PrtCl being off screen. */
	bp = _printchar3;
edummylabel8:
	// 4389 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
ssprite:
	// 722 
	/* mov	bp,_SSprite ;* kill: assume all */
	bp = _ssprite;
edummylabel9:
	// 4391 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
msprite:
	// 737 
	/* mov	bp,_MSprite ;* kill: assume all */
	bp = _msprite;
edummylabel10:
	// 4393 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
bsprite:
	// 753 
	/* mov	bp,_BSprite ;* kill: assume all */
	bp = _bsprite;
edummylabel11:
	// 4395 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
qsprite:
	// 768 
	/* mov	bp,_QSprite ;* kill: assume all */
	bp = _qsprite;
edummylabel12:
	// 4397 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
initssprites:
	// 780 
	/* mov	bp,_InitSSprites ;* kill: assume all */
	bp = _initssprites;
edummylabel13:
	// 4399 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
initmsprites:
	// 792 
	/* mov	bp,_InitMSprites ;* kill: assume all */
	bp = _initmsprites;
edummylabel14:
	// 4401 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
initqsprites:
	// 804 
	/* mov	bp,_InitQSprites ;* kill: assume all */
	bp = _initqsprites;
edummylabel15:
	// 4403 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
blockfill:
	// 825 
	/* inc	PolyCount ;*       Some drivers use FillCol as a word. */
	INC(polycount);
edummylabel16:
	// 4405 
	/* mov	di,bx */
	di = bx;
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR FillCol,ax */
	*(dw*)(fillcol) = ax;
	/* mov	bx,di */
	bx = di;
	/* and	di,000ffh	;di = y start */
	AND(di, 0x000ff);
	/* sub	bh,bl		;y2 - y1 */
	SUB(bh, bl);
	/* mov	bl,bh */
	bl = bh;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* inc	bx		;bx = depth = (y2 - y1) + 1 */
	INC(bx);
	/* mov	ax,cx */
	ax = cx;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1		;x1 / 8 */
	SHR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1		;x2 / 8 */
	SHR(dx, 1);
	/* sub	dx,ax		;(x2 / 8) - (x1 / 8) */
	SUB(dx, ax);
	/* inc	dx		;dx = width = 1 .. 40 (*8 pixels) */
	INC(dx);
	/* xchg	bx,dx */
	XCHG(bx, dx);
	/* and	cx,0fff8h	;cx = x start (8 pixel boundary) */
	AND(cx, 0x0fff8);
	// 0 ;* bx = width (1 - 40)
	// 0 ;* cx = x start (0 - 312 step 8)
	// 0 ;* dx = depth
	// 0 ;* di = y start
	// 0 ;* FillCol = physical colour
	/* mov	bp,_BlockFill */
	bp = _blockfill;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel17:
	// 4407 
	/* ret */
	RETF(0);
savemousebgnd:
	// 869 
	/* mov	cx,MouseX ;* note: Assumes mouse sprite is 16 * 16 pixels (maximum). */
	cx = mousex;
edummylabel18:
	// 4409 
	/* mov	bx,MouseY */
	bx = mousey;
	/* mov	bp,_SaveMouseBGnd */
	bp = _savemousebgnd;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
loadmousebgnd:
	// 886 
	/* mov	cx,MouseX ;* note: Assumes mouse sprite is 16 * 16 pixels (maximum). */
	cx = mousex;
edummylabel19:
	// 4411 
	/* mov	bx,MouseY */
	bx = mousey;
	/* mov	bp,_LoadMouseBGnd */
	bp = _loadmousebgnd;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
savescreen:
	// 900 
	/* mov	bp,_SaveScreen ;* kill: assume all */
	bp = _savescreen;
edummylabel20:
	// 4413 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
loadscreen:
	// 912 
	/* mov	bp,_LoadScreen ;* kill: assume all */
	bp = _loadscreen;
edummylabel21:
	// 4415 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
uncompresspic:
	// 924 
	/* mov	bp,_UncompressPic ;* kill: assume all */
	bp = _uncompresspic;
edummylabel22:
	// 4417 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
horizonfill:
	// 943 
	/* inc	PolyCount ;* note: Some drivers use HrznLhsCol and HrznRhsCol as a word. */
	INC(polycount);
edummylabel23:
	// 4419 
	/* mov	HrznXMin,cx */
	hrznxmin = cx;
	/* mov	HrznXMax,dx */
	hrznxmax = dx;
	/* mov	si,bx */
	si = bx;
	/* mov	dl,ah */
	dl = ah;
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR HrznLhsCol,ax */
	*(dw*)(hrznlhscol) = ax;
	/* mov	al,dl */
	al = dl;
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR HrznRhsCol,ax */
	*(dw*)(hrznrhscol) = ax;
	/* mov	cx,si */
	cx = si;
	/* and	si,000ffh	;si = y min */
	AND(si, 0x000ff);
	/* sub	ch,cl		;y max - y min */
	SUB(ch, cl);
	/* mov	cl,ch */
	cl = ch;
	/* xor	ch,ch */
	XOR(ch, ch);
	/* inc	cx		;num lines = (y max - y min) + 1 */
	INC(cx);
	/* mov	bp,_HorizonFill */
	bp = _horizonfill;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
null:
	// 974 
	/* ret ;* kill: nothing */
	RETF(0);
setattributes:
	// 996 
	/* mov	bx,ScreenMode ;* note: Some drivers use ForeCol and BackCol as words. */
	bx = screenmode;
edummylabel24:
	// 4421 
	/* mov	bx,AttrTable[bx];look up data block offset */
	bx = *(dw*)(((db*)&attrtable)+bx);
	/* mov	al,[si+bx]	;foreground colour */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR ForeCol,ax */
	*(dw*)(forecol) = ax;
	/* mov	al,[si+bx+1]	;background colour */
	al = m2c::getdata(*(raddr(ds,si+bx+1)));
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR BackCol,ax */
	*(dw*)(backcol) = ax;
	/* ret */
	RETF(0);
setpalette:
	// 1015 
	/* push	es ;* kill: ax, cx, si, di */
	PUSH(es);
edummylabel25:
	// 4423 
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	cx,256 */
	cx = 256;
	/* mov	di,OFFSET Palette */
	di = m2c::near_offset_external(palette);
	{static int _sp=-1;if(_sp<0)_sp=getenv("M2C_PAL")?1:0;if(_sp){db*src=(db*)raddr(ds,si);fprintf(stderr,"[SETPAL] ds=%04x si=%04x di=%04x src[0..8]=%d %d %d %d %d %d %d %d\n",(unsigned)ds,(unsigned)si,(unsigned)di,src[0],src[1],src[2],src[3],src[4],src[5],src[6],src[7]);}}
	// 1021 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* ret */
	RETF(0);
setsspriteclip:
	// 1040 
	/* mov	di,ScreenMode ;* note: The x values are rounded down to the nearest byte wrt ScreenMode. */
	di = screenmode;
edummylabel26:
	// 4425 
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	al,bl */
	al = bl;
	/* mov	ClipYMin,ax */
	clipymin = ax;
	/* mov	al,bh */
	al = bh;
	/* mov	ClipYMax,ax */
	clipymax = ax;
	/* mov	ax,cx */
	ax = cx;
	/* mov	cl,ClipXTable[di] */
	cl = *((clipxtable)+di);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* shr	dx,cl */
	SHR(dx, cl);
	/* mov	ClipXMin,ax */
	clipxmin = ax;
	/* mov	ClipXMax,dx */
	clipxmax = dx;
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
                case m2c::kblockfill: 	goto blockfill;
        case m2c::kbsprite: 	goto bsprite;
        case m2c::kdownload: 	goto download;
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
        case m2c::kedummylabel24: 	goto edummylabel24;
        case m2c::kedummylabel25: 	goto edummylabel25;
        case m2c::kedummylabel26: 	goto edummylabel26;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kframewait: 	goto framewait;
        case m2c::khlinedraw: 	goto hlinedraw;
        case m2c::khorizonfill: 	goto horizonfill;
        case m2c::kinitmsprites: 	goto initmsprites;
        case m2c::kinitpalette: 	goto initpalette;
        case m2c::kinitqsprites: 	goto initqsprites;
        case m2c::kinitssprites: 	goto initssprites;
        case m2c::klinedraw: 	goto linedraw;
        case m2c::kloadmousebgnd: 	goto loadmousebgnd;
        case m2c::kloadscreen: 	goto loadscreen;
        case m2c::kmsprite: 	goto msprite;
        case m2c::knull: 	goto null;
        case m2c::kprintchar1: 	goto printchar1;
        case m2c::kprintchar2: 	goto printchar2;
        case m2c::kprintchar3: 	goto printchar3;
        case m2c::kqsprite: 	goto qsprite;
        case m2c::ksavemousebgnd: 	goto savemousebgnd;
        case m2c::ksavescreen: 	goto savescreen;
        case m2c::ksetattributes: 	goto setattributes;
        case m2c::ksetpalette: 	goto setpalette;
        case m2c::ksetpixel: 	goto setpixel;
        case m2c::ksetsspriteclip: 	goto setsspriteclip;
        case m2c::ksetvideoloop: 	goto setvideoloop;
        case m2c::ksetvideomode: 	goto setvideomode;
        case m2c::kssprite: 	goto ssprite;
        case m2c::kuncompresspic: 	goto uncompresspic;
        case m2c::kvlinedraw: 	goto vlinedraw;
        default: return __dispatch_call(__disp, _state);
    };
}

