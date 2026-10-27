/* THIS IS GENERATED FILE */

        
#include "vgaphoto.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
vgaphotodflt:
	// 297 
	/* mov	dx,OFFSET FileName ;*       VGA_CTRL_RDMAP */
	dx = m2c::near_offset_external(filename);
edummylabel1:
	// 4369 
	/* call	FAR PTR VGAPhotoUser */
	CALLF(vgaphotouser, 0);
	// 0 ;* modify filename for next photo ("PHOTO_00.LBM" .. "PHOTO_99.LBM")
	/* inc	ID_LSD */
	INC(id_lsd);
	/* cmp	ID_LSD,'9'+1 */
	CMP(id_lsd, '9'+1);
	/* jne	@F */
	if ((dw)(id_lsd) != (dw)('9'+1)) {goto dummylabel1;}
	/* mov	ID_LSD,'0' */
	id_lsd = '0';
	/* inc	ID_MSD */
	INC(id_msd);
dummylabel1:
	// 4371 
	/* @@:		ret */
	RETF(0);
vgaphotouser:
	// 318 
	/* push	es ;*       VGA_CTRL_RDMAP */
	PUSH(es);
edummylabel2:
	// 4373 
	/* cmp	ScreenMode,VGA	;VGA screen mode? */
	CMP(screenmode, vga);
	/* jne	VGAPhotoExit	;no -> */
	if ((dw)(screenmode) != (dw)(vga)) {goto vgaphotoexit;}
	// 0 ;-------------
	// 0 ;* create file
	// 0 ;-------------
	/* call	CreateFile */
	CALLF(createfile, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	// 0 ;-----------------------------------
	// 0 ;* copy DAC colour registers to CMAP
	// 0 ;-----------------------------------
	/* mov	ax,HDR_DATA */
	ax = seg_offset(hdr_data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET CMAP	;es:di -> CMAP RGB data */
	di = m2c::near_offset_external(cmap);
	/* mov	al,0		;start colour 0 */
	al = 0;
	/* mov	cx,256		;copy 256 colours */
	cx = 256;
	/* call	ReadDACBlock */
	CALLF(readdacblock, 0);
	// 0 ;* scale gun values * 4
	/* mov	cx,256*3 */
	cx = 256*3;
	/* mov	di,OFFSET CMAP */
	di = m2c::near_offset_external(cmap);
dummylabel2:
	// 4375 
	/* @@:		mov	al,es:[di] */
	al = m2c::getdata(*(raddr(es,di)));
	/* shl	al,1		;*2 */
	SHL(al, 1);
	/* shl	al,1		;*4 */
	SHL(al, 1);
	/* stosb */
	{ STOSB; }
	/* loop	@B */
	LOOP(dummylabel2);
	// 0 ;---------------------------
	// 0 ;* write header data to file
	// 0 ;---------------------------
	/* mov	cx,ILBM_HDR_LEN */
	cx = 1198;
	/* mov	di,OFFSET ILBMHeader */
	di = m2c::near_offset_external(ilbmheader);
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	// 0 ;-----------------------------------------------------------
	// 0 ;* copy interleaved screen data to linear data in WorkScreen
	// 0 ;-----------------------------------------------------------
	/* call	SortScrData */
	CALL(sortscrdata, 0);
	// 0 ;---------------------------
	// 0 ;* write screen data to file
	// 0 ;---------------------------
	/* mov	ScreenAddr,0 */
	screenaddr = 0;
	/* mov	cx,200 */
	cx = 200;
writeloop:
	// 4377 
	/* WriteLoop:	push	cx */
	PUSH(cx);
	/* call	WriteScreenLine */
	CALL(writescreenline, 0);
	/* pop	cx */
	POP(cx);
	/* loop	WriteLoop */
	LOOP(writeloop);
	// 0 ;------------
	// 0 ;* close file
	// 0 ;------------
	/* call	CloseFile */
	CALLF(closefile, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
vgaphotoexit:
	// 4379 
	/* VGAPhotoExit:	pop	es */
	POP(es);
	/* ret */
	RETF(0);
vgaphotoerror:
	// 4381 
	/* VGAPhotoError:	jmp	AbortToDOS	;disk error, return to DOS */
	J(return aborttodos(0, _state));
writescreenline:
	// 388 
	// 0 ;* write byte count (ie. copy next 128 bytes literally)
edummylabel3:
	// 4383 
	/* mov	cx,1 */
	cx = 1;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET ByteCount128 */
	di = m2c::near_offset_external(bytecount128);
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	// 0 ;* write 128 screen bytes
	/* mov	cx,128 */
	cx = 128;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,ScreenAddr */
	di = screenaddr;
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	/* add	ScreenAddr,128 */
	ADD(screenaddr, 128);
	// 0 ;* write byte count (ie. copy next 128 bytes literally)
	/* mov	cx,1 */
	cx = 1;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET ByteCount128 */
	di = m2c::near_offset_external(bytecount128);
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	// 0 ;* write 128 screen bytes
	/* mov	cx,128 */
	cx = 128;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,ScreenAddr */
	di = screenaddr;
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	/* add	ScreenAddr,128 */
	ADD(screenaddr, 128);
	// 0 ;* write byte count (ie. copy next 64 bytes literally)
	/* mov	cx,1 */
	cx = 1;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET ByteCount64 */
	di = m2c::near_offset_external(bytecount64);
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	// 0 ;* write 64 screen bytes
	/* mov	cx,64 */
	cx = 64;
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,ScreenAddr */
	di = screenaddr;
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	VGAPhotoError */
	if (CF) {goto vgaphotoerror;}
	/* add	ScreenAddr,64 */
	ADD(screenaddr, 64);
	/* ret */
	RETN(0);
sortscrdata:
	// 451 
	/* push	ds ;*       VGA_CTRL_RDMAP */
	PUSH(ds);
edummylabel4:
	// 4385 
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_RDMAP */
	al = 0x004;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,RealScrPtr */
	ax = realscrptr;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	al,0		;map 0 */
	al = 0;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*80 */
	cx = 200*80;
	/* xor	si,si		;ds:si -> start of real screen */
	XOR(si, si);
	/* mov	di,0		;es:di -> start of WorkScreen + 0 */
	di = 0;
dummylabel3:
	// 4387 
	/* @@:		movsb */
	{ MOVSB; }
	/* add	di,3 */
	ADD(di, 3);
	/* loop	@B */
	LOOP(dummylabel3);
	/* mov	al,1		;map 1 */
	al = 1;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*80 */
	cx = 200*80;
	/* xor	si,si		;ds:si -> start of real screen */
	XOR(si, si);
	/* mov	di,1		;es:di -> start of WorkScreen + 1 */
	di = 1;
dummylabel4:
	// 4389 
	/* @@:		movsb */
	{ MOVSB; }
	/* add	di,3 */
	ADD(di, 3);
	/* loop	@B */
	LOOP(dummylabel4);
	/* mov	al,2		;map 2 */
	al = 2;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*80 */
	cx = 200*80;
	/* xor	si,si		;ds:si -> start of real screen */
	XOR(si, si);
	/* mov	di,2		;es:di -> start of WorkScreen + 2 */
	di = 2;
dummylabel5:
	// 4391 
	/* @@:		movsb */
	{ MOVSB; }
	/* add	di,3 */
	ADD(di, 3);
	/* loop	@B */
	LOOP(dummylabel5);
	/* mov	al,3		;map 3 */
	al = 3;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	cx,200*80 */
	cx = 200*80;
	/* xor	si,si		;ds:si -> start of real screen */
	XOR(si, si);
	/* mov	di,3		;es:di -> start of WorkScreen + 3 */
	di = 3;
dummylabel6:
	// 4393 
	/* @@:		movsb */
	{ MOVSB; }
	/* add	di,3 */
	ADD(di, 3);
	/* loop	@B */
	LOOP(dummylabel6);
	/* pop	ds */
	POP(ds);
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
                case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::ksortscrdata: 	goto sortscrdata;
        case m2c::kvgaphotodflt: 	goto vgaphotodflt;
        case m2c::kvgaphotoerror: 	goto vgaphotoerror;
        case m2c::kvgaphotoexit: 	goto vgaphotoexit;
        case m2c::kvgaphotouser: 	goto vgaphotouser;
        case m2c::kwriteloop: 	goto writeloop;
        case m2c::kwritescreenline: 	goto writescreenline;
        default: return __dispatch_call(__disp, _state);
    };
}

