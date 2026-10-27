/* THIS IS GENERATED FILE */

        
#include "disk.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
createfile:
	// 82 
	/* mov	CritErrFlag,0 ;* kill: assume all (DOS routines used) */
	criterrflag = 0;
edummylabel1:
	// 4369 
	/* mov	cl,00000000b	;file attribute */
	cl = 0x0;
	/* mov	ah,03ch		;DOS create file function */
	ah = 0x03c;
	/* int	021h */
	_INT(0x021);
	/* jc	CreateExit	;error (cf = 1, ax = error code) -> */
	if (CF) {goto createexit;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	CreateError	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto createerror;}
	/* mov	Handle,ax */
	handle = ax;
	/* clc		       	;cf = 0 = no error */
	CLC;
	/* jmp	CreateExit */
	goto createexit;
createerror:
	// 4371 
	/* CreateError:	mov	ax,CritErrCode */
	ax = criterrcode;
	/* stc			;cf = 1 = error */
	STC;
createexit:
	// 4373 
	/* CreateExit:	ret */
	RETF(0);
openfile:

	/* mov	CritErrFlag,0 ;* kill: assume all (DOS routines used) */
	criterrflag = 0;
edummylabel2:
	// 4375 
	/* mov	al,00000000b	;access code */
	al = 0x0;
	/* mov	ah,03dh		;DOS open file function */
	ah = 0x03d;
	/* int	021h */
	_INT(0x021);
	/* jc	OpenExit	;error (cf = 1, ax = error code) -> */
	if (CF) {goto openexit;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	OpenError	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto openerror;}
	/* mov	Handle,ax */
	handle = ax;
	/* clc			;cf = 0 = no error */
	CLC;
	/* jmp	OpenExit */
	goto openexit;
openerror:
	// 4377 
	/* OpenError:	mov	ax,CritErrCode */
	ax = criterrcode;
	/* stc	  		;cf = 1 = error */
	STC;
openexit:
	// 4379 
	/* OpenExit:	ret */
	RETF(0);
closefile:

	/* mov	CritErrFlag,0 ;* kill: assume all (DOS routines used) */
	criterrflag = 0;
edummylabel3:
	// 4381 
	/* mov	bx,Handle */
	bx = handle;
	/* mov	ah,03eh		;DOS close file function */
	ah = 0x03e;
	/* int	021h */
	_INT(0x021);
	/* jc	CloseExit	;error (cf = 1, ax = error code) -> */
	if (CF) {goto closeexit;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	CloseError	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto closeerror;}
	/* clc		     	;cf = 0 = no error */
	CLC;
	/* jmp	CloseExit */
	goto closeexit;
closeerror:
	// 4383 
	/* CloseError:	mov	ax,CritErrCode */
	ax = criterrcode;
	/* stc			;cf = 1 = error */
	STC;
closeexit:
	// 4385 
	/* CloseExit:	ret */
	RETF(0);
fread:

	/* mov	CritErrFlag,0 ;* kill: assume all (DOS routines used) */
	criterrflag = 0;
edummylabel4:
	// 4387 
	/* mov	bx,Handle */
	bx = handle;
	/* push	ds */
	PUSH(ds);
	/* mov	ax,es */
	ax = es;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dx,di */
	dx = di;
	/* mov	ah,03fh		;DOS read file function */
	ah = 0x03f;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	/* jc	FReadExit	;error (cf = 1, ax = error code) -> */
	if (CF) {goto freadexit;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	FReadError	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto freaderror;}
	/* clc		  	;cf = 0 = no error */
	CLC;
	/* jmp	FReadExit */
	goto freadexit;
freaderror:
	// 4389 
	/* FReadError:	mov	ax,CritErrCode */
	ax = criterrcode;
	/* stc			;cf = 1 = error */
	STC;
freadexit:
	// 4391 
	/* FReadExit:	ret */
	RETF(0);
fwrite:
	// 189 
	/* mov	CritErrFlag,0 ;* kill: assume all (DOS routines used) */
	criterrflag = 0;
edummylabel5:
	// 4393 
	/* mov	bx,Handle */
	bx = handle;
	/* push	ds */
	PUSH(ds);
	/* mov	ax,es */
	ax = es;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dx,di */
	dx = di;
	/* mov	ah,040h		;DOS write file function */
	ah = 0x040;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	/* jc	FWriteExit	;error (cf = 1, ax = error code) -> */
	if (CF) {goto fwriteexit;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	FWriteError	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto fwriteerror;}
	/* clc		   	;cf = 0 = no error */
	CLC;
	/* jmp	FWriteExit */
	goto fwriteexit;
fwriteerror:
	// 4395 
	/* FWriteError:	mov	ax,CritErrCode */
	ax = criterrcode;
	/* stc			;cf = 1 = error */
	STC;
fwriteexit:
	// 4397 
	/* FWriteExit:	ret */
	RETF(0);
findfile:

	/* mov	CritErrFlag,0 ;*       an error. */
	criterrflag = 0;
edummylabel6:
	// 4399 
	/* mov	cl,00000000b	;file attribute */
	cl = 0x0;
	/* mov	ah,04eh		;DOS find first function */
	ah = 0x04e;
	/* int	021h */
	_INT(0x021);
	/* cmp	ax,002h		;file not found error? */
	CMP(ax, 0x002);
	/* je	FindError2	;yes -> */
	if ((dw)(ax) == (dw)(0x002)) {goto finderror2;}
	/* cmp	ax,012h		;no more files to be found error? */
	CMP(ax, 0x012);
	/* je	FindError2	;yes -> */
	if ((dw)(ax) == (dw)(0x012)) {goto finderror2;}
	/* cmp	CritErrFlag,1	;critical error? */
	CMP(criterrflag, 1);
	/* je	FindError1	;yes -> */
	if ((dw)(criterrflag) == (dw)(1)) {goto finderror1;}
	/* clc		     	;cf = 0 = no error */
	CLC;
	/* jmp	FindExit */
	goto findexit;
finderror1:
	// 4401 
	/* FindError1:	mov	ax,CritErrCode */
	ax = criterrcode;
finderror2:
	// 4403 
	/* FindError2:	stc			;cf = 1 = error */
	STC;
findexit:
	// 4405 
	/* FindExit:	ret */
	RETF(0);
loadfile:
	// 250 
	/* push	cx ;* kill: assume all (DOS routines used) */
	PUSH(cx);
edummylabel7:
	// 4407 
	/* push	dx */
	PUSH(dx);
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* call	FindFile */
	CALLF(findfile, 0);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* jc	LoadFileExit */
	if (CF) {goto loadfileexit;}
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* call	OpenFile */
	CALLF(openfile, 0);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* jc	LoadFileExit */
	if (CF) {goto loadfileexit;}
	/* call	FRead */
	CALLF(fread, 0);
	/* jc	LoadFileExit */
	if (CF) {goto loadfileexit;}
	/* push	ax		;save number of bytes read */
	PUSH(ax);
	/* call	CloseFile */
	CALLF(closefile, 0);
	/* pop	dx */
	POP(dx);
	/* jc	LoadFileExit */
	if (CF) {goto loadfileexit;}
	/* mov	ax,dx */
	ax = dx;
loadfileexit:
	// 4409 
	/* LoadFileExit:	ret */
	RETF(0);
savefile:
	// 290 
	/* push	cx ;* kill: assume all (DOS routines used) */
	PUSH(cx);
edummylabel8:
	// 4411 
	/* push	di */
	PUSH(di);
	/* push	es */
	PUSH(es);
	/* call	CreateFile */
	CALLF(createfile, 0);
	/* pop	es */
	POP(es);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* jc	SaveFileExit */
	if (CF) {goto savefileexit;}
	/* call	FWrite */
	CALLF(fwrite, 0);
	/* jc	SaveFileExit */
	if (CF) {goto savefileexit;}
	/* push	ax   		;save number of bytes written */
	PUSH(ax);
	/* call	CloseFile */
	CALLF(closefile, 0);
	/* pop	dx */
	POP(dx);
	/* jc	SaveFileExit */
	if (CF) {goto savefileexit;}
	/* mov	ax,dx */
	ax = dx;
savefileexit:
	// 4413 
	/* SaveFileExit:	ret */
	RETF(0);
fwritedol:
	// 318 
	/* mov	al,'$' ;* kill: assume all (DOS routines used) */
	al = '$';
edummylabel9:
	// 4415 
	/* mov	bp,-1 */
	bp = -1;
fwritedolloop:
	// 4417 
	/* FWrite$Loop:	inc	bp */
	INC(bp);
	/* cmp	es:[di+bp],al */
	CMP(*(raddr(es,di+bp)), al);
	/* jne	FWrite$Loop */
	if ((db)(*(raddr(es,di+bp))) != (db)(al)) {goto fwritedolloop;}
	/* mov	cx,bp */
	cx = bp;
	/* call	FWrite */
	CALLF(fwrite, 0);
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
                case m2c::kcloseerror: 	goto closeerror;
        case m2c::kcloseexit: 	goto closeexit;
        case m2c::kclosefile: 	goto closefile;
        case m2c::kcreateerror: 	goto createerror;
        case m2c::kcreateexit: 	goto createexit;
        case m2c::kcreatefile: 	goto createfile;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kfinderror1: 	goto finderror1;
        case m2c::kfinderror2: 	goto finderror2;
        case m2c::kfindexit: 	goto findexit;
        case m2c::kfindfile: 	goto findfile;
        case m2c::kfread: 	goto fread;
        case m2c::kfreaderror: 	goto freaderror;
        case m2c::kfreadexit: 	goto freadexit;
        case m2c::kfwrite: 	goto fwrite;
        case m2c::kfwritedol: 	goto fwritedol;
        case m2c::kfwritedolloop: 	goto fwritedolloop;
        case m2c::kfwriteerror: 	goto fwriteerror;
        case m2c::kfwriteexit: 	goto fwriteexit;
        case m2c::kloadfile: 	goto loadfile;
        case m2c::kloadfileexit: 	goto loadfileexit;
        case m2c::kopenerror: 	goto openerror;
        case m2c::kopenexit: 	goto openexit;
        case m2c::kopenfile: 	goto openfile;
        case m2c::ksavefile: 	goto savefile;
        case m2c::ksavefileexit: 	goto savefileexit;
        default: return __dispatch_call(__disp, _state);
    };
}

