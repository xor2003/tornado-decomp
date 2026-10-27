/* THIS IS GENERATED FILE */

        
#include "input.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
readkbd:
	// 297 
	/* push	bx ;* kill: flags */
	PUSH(bx);
edummylabel1:
	// 4369 
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	bx,0 */
	bx = 0;
	/* mov	cx,88 */
	cx = 88;
readloop:
	// 4371 
	/* ReadLoop: 	mov	al,Key[bx] */
	al = *((&key)+bx);
	/* test	al,al */
	TEST(al, al);
	/* jnz	KeyPressed */
	if ((al & al) != 0) {goto keypressed;}
contloop:
	// 4373 
	/* ContLoop:	inc	bx */
	INC(bx);
	/* loop	ReadLoop */
	LOOP(readloop);
	/* xor	ax,ax		;al = ah = 0 (cf = 0) */
	XOR(ax, ax);
	/* jmp	ReadKbdExit */
	goto readkbdexit;
keypressed:
	// 4375 
	/* KeyPressed:	mov	al,KeyTable[bx] */
	al = *((keytable)+bx);
	/* cmp	al,NUL */
	CMP(al, 0);
	/* je	ContLoop */
	if ((db)(al) == (db)(0)) {goto contloop;}
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* mov	si,ax */
	si = ax;
	/* and	si,0001b */
	AND(si, 0x1);
	/* shl	si,1 */
	SHL(si, 1);
	/* mov	si,TablePtr[si] */
	si = *(dw*)(((db*)&tableptr)+si);
	/* mov	al,[si+bx]	;al = ASCII code */
	al = m2c::getdata(*(raddr(ds,si+bx)));
	/* mov	ah,bl		;ah = key code */
	ah = bl;
	/* stc			;cf = 1 */
	STC;
readkbdexit:
	// 4377 
	/* ReadKbdExit:	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* ret */
	RETF(0);
getchar:
	// 335 
	/* call	ReadKbd		;key pressed? */
	CALLF(readkbd, 0);
edummylabel2:
	// 4379 
	/* jnc	GetChar		;no -> */
	if (!CF) {goto getchar;}
	/* ret */
	RETF(0);
keyrelease:
	// 349 
	/* push	bx ;* kill: al, flags */
	PUSH(bx);
edummylabel3:
	// 4381 
	/* mov	bl,ah */
	bl = ah;
	/* xor	bh,bh */
	XOR(bh, bh);
releaseloop:
	// 4383 
	/* ReleaseLoop:	mov	al,Key[bx] */
	al = *((&key)+bx);
	/* test	al,al */
	TEST(al, al);
	/* jnz	ReleaseLoop */
	if ((al & al) != 0) {goto releaseloop;}
	/* pop	bx */
	POP(bx);
	/* ret */
	RETF(0);
keypress:
	// 367 
	/* call	GetChar ;* kill: ax, flags */
	CALLF(getchar, 0);
edummylabel4:
	// 4385 
	/* call	KeyRelease */
	CALLF(keyrelease, 0);
	/* ret */
	RETF(0);
inputdol:
	// 382 
	/* xor	bx,bx ;* kill: ax, bx, dx, bp, flags */
	XOR(bx, bx);
edummylabel5:
	// 4387 
	/* call	ClearToEnd */
	CALL(cleartoend, 0);
	/* call	PrintInput$	;init vars (attr's, cursor char etc.) */
	CALL(printinputdol, 0);
	/* xor	ah,ah		;fall through first KeyRelease */
	XOR(ah, ah);
inputloop:
	// 4389 
	/* InputLoop:	cmp	[di+bx],BYTE PTR 0 */
	CMP(*(raddr(ds,di+bx)), *(raddr(ds,0)));
	/* je	NoCursor */
	if ((db)(*(raddr(ds,di+bx))) == (db)(*(raddr(ds,0)))) {goto nocursor;}
	/* mov	al,CursorChar */
	al = *(cursorchar);
	/* mov	[di+bx],al */
	m2c::setdata(&(*(raddr(ds,di+bx))), m2c::getdata(al));
nocursor:
	// 4391 
	/* NoCursor:	call	PrintInput$ */
	CALL(printinputdol, 0);
	/* call	KeyRelease */
	CALLF(keyrelease, 0);
	/* call	GetChar */
	CALLF(getchar, 0);
	/* cmp	al,ESCP		;ESCaPe (clear input field)? */
	CMP(al, 27);
	/* je	Escape		;yes -> */
	if ((db)(al) == (db)(27)) {goto escape;}
	/* cmp	al,DEL		;DELete? */
	CMP(al, 8);
	/* je	Delete		;yes -> */
	if ((db)(al) == (db)(8)) {goto asm_delete;}
	/* cmp	al,ENT		;ENTer (terminate input)? */
	CMP(al, 13);
	/* je	Enter		;yes -> */
	if ((db)(al) == (db)(13)) {goto enter;}
	/* mov	bp,WORD PTR InputMode */
	bp = *(dw*)(inputmode);
	/* shl	bp,1 */
	SHL(bp, 1);
__disp=*(dw*)(((db*)&filter)+bp);
	/* jmp	ds:Filter[bp] */
	J(return __dispatch_call_ext(__disp, _state));
alphaonly:
	// 4393 
	/* AlphaOnly:	cmp	al,'A' */
	CMP(al, 'A');
	/* jb	RejectChar */
	if ((db)(al) < (db)('A')) {goto rejectchar;}
	/* cmp	al,'Z' */
	CMP(al, 'Z');
	/* jbe	SetChar */
	if ((db)(al) <= (db)('Z')) {goto setchar;}
	/* cmp	al,'a' */
	CMP(al, 'a');
	/* jb	RejectChar */
	if ((db)(al) < (db)('a')) {goto rejectchar;}
	/* cmp	al,'z' */
	CMP(al, 'z');
	/* jbe	SetChar */
	if ((db)(al) <= (db)('z')) {goto setchar;}
	/* jmp	RejectChar */
	goto rejectchar;
numonly:
	// 4395 
	/* NumOnly:	cmp	al,'0' */
	CMP(al, '0');
	/* jb	RejectChar */
	if ((db)(al) < (db)('0')) {goto rejectchar;}
	/* cmp	al,'9' */
	CMP(al, '9');
	/* jbe	SetChar */
	if ((db)(al) <= (db)('9')) {goto setchar;}
	/* jmp	RejectChar */
	goto rejectchar;
rejectchar:
	// 4397 
	/* RejectChar:	jmp	InputLoop */
	goto inputloop;
setchar:
	// 4399 
	/* SetChar:	cmp	[di+bx],BYTE PTR 0 */
	CMP(*(raddr(ds,di+bx)), *(raddr(ds,0)));
	/* je	SkipChar	;no room for char -> */
	if ((db)(*(raddr(ds,di+bx))) == (db)(*(raddr(ds,0)))) {goto skipchar;}
	/* mov	[di+bx],al */
	m2c::setdata(&(*(raddr(ds,di+bx))), m2c::getdata(al));
	/* inc	bx */
	INC(bx);
skipchar:
	// 4401 
	/* SkipChar:	jmp	InputLoop */
	goto inputloop;
escape:
	// 4403 
	/* Escape:		xor	bx,bx */
	XOR(bx, bx);
	/* call	ClearToEnd */
	CALL(cleartoend, 0);
	/* jmp	InputLoop */
	goto inputloop;
asm_delete:
	// 4405 
	/* Delete:		test	bx,bx		;anything to DELete? */
	TEST(bx, bx);
	/* jz	SkipDelete	;no -> */
	if (!(bx & bx)) {goto skipdelete;}
	/* dec	bx */
	DEC(bx);
	/* call	ClearToEnd */
	CALL(cleartoend, 0);
skipdelete:
	// 4407 
	/* SkipDelete:	jmp	InputLoop */
	goto inputloop;
enter:
	// 4409 
	/* Enter:		call	ClearToEnd	;clear cursor */
	CALL(cleartoend, 0);
	/* call	PrintInput$ */
	CALL(printinputdol, 0);
	/* call	KeyRelease */
	CALLF(keyrelease, 0);
	/* mov	cx,bx */
	cx = bx;
	/* ret */
	RETF(0);
printinputdol:
	// 445 
	/* push	ax ;* kill: cx, dx, bp, flags */
	PUSH(ax);
edummylabel6:
	// 4411 
	/* push	bx */
	PUSH(bx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
/* m2c-phantom removed: 	J(RETF(0));	// 456 ret */
cleartoend:
	// 466 
	/* push	bx ;* kill: flags */
	PUSH(bx);
clearloop:
	// 4413 
	/* ClearLoop:	cmp	[di+bx],BYTE PTR 0 */
	CMP(*(raddr(ds,di+bx)), *(raddr(ds,0)));
	/* je	Cleared */
	if ((db)(*(raddr(ds,di+bx))) == (db)(*(raddr(ds,0)))) {goto cleared;}
	/* mov	[di+bx],BYTE PTR ' ' */
	m2c::setdata(&(*(raddr(ds,di+bx))), m2c::getdata(*(raddr(ds,' '))));
	/* inc	bx */
	INC(bx);
	/* jmp	ClearLoop */
	goto clearloop;
cleared:
	// 4415 
	/* Cleared:	pop	bx */
	POP(bx);
	/* ret */
	RETN(0);
updatemenukeys:
	// 485 
	/* mov	bx,OFFSET Key ;* kill: ax, bx, si, flags */
	bx = m2c::near_offset_external(key);
edummylabel7:
	// 4417 
	/* mov	si,OFFSET MenuKeyList */
	si = m2c::near_offset_external(menukeylist);
updatemkeyslp:
	// 4419 
	/* UpdateMKeysLp:	mov	al,KEY_NUM[si]	;fetch key code */
	al = m2c::getdata(((menukey*)raddr(ds,si))->key_num);
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	UpdateMKeysExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto updatemkeysexit;}
	/* mov	ah,KEY_NEW[si]	;fetch new key */
	ah = m2c::getdata(((menukey*)raddr(ds,si))->key_new);
	/* mov	KEY_OLD[si],ah	;set old key */
	m2c::setdata(&(((menukey*)raddr(ds,si))->key_old), m2c::getdata(ah));
	/* xlat			;fetch new key */
	XLAT;
	/* mov	KEY_NEW[si],al	;set new key */
	m2c::setdata(&(((menukey*)raddr(ds,si))->key_new), m2c::getdata(al));
	/* add	si,MKEY_REC_SIZE;next key */
	ADD(si, 3);
	/* jmp	UpdateMKeysLp */
	goto updatemkeyslp;
updatemkeysexit:
	// 4421 
	/* UpdateMKeysExit:ret */
	RETF(0);
scanmenukeys:
	// 508 
	/* mov	si,OFFSET MenuKeyList ;* kill: ah, si, flags */
	si = m2c::near_offset_external(menukeylist);
scanmkeyslp:
	// 4423 
	/* ScanMKeysLp:	mov	al,KEY_NUM[si]	;fetch key code */
	al = m2c::getdata(((menukey*)raddr(ds,si))->key_num);
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	ScanMKeysFail	;yes -> */
	if ((db)(al) == (db)(-1)) {goto scanmkeysfail;}
	/* mov	ah,KEY_OLD[si] */
	ah = m2c::getdata(((menukey*)raddr(ds,si))->key_old);
	/* cmp	ah,KEY_NEW[si]	;cf = 1 if old = 0 and new = 1 (only) */
	CMP(ah, ((menukey*)raddr(ds,si))->key_new);
	/* jc	ScanMKeysPass	;key just pressed -> */
	if ((db)(ah) < (db)(((menukey*)raddr(ds,si))->key_new)) {goto scanmkeyspass;}
	/* add	si,MKEY_REC_SIZE;next key */
	ADD(si, 3);
	/* jmp	ScanMKeysLp */
	goto scanmkeyslp;
scanmkeysfail:
	// 4425 
	/* ScanMKeysFail:	xor	al,al		;cf = 0 */
	XOR(al, al);
scanmkeyspass:
	// 4427 
	/* ScanMKeysPass:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kalphaonly: 	goto alphaonly;
        case m2c::kasm_delete: 	goto asm_delete;
        case m2c::kcleared: 	goto cleared;
        case m2c::kclearloop: 	goto clearloop;
        case m2c::kcleartoend: 	goto cleartoend;
        case m2c::kcontloop: 	goto contloop;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kenter: 	goto enter;
        case m2c::kescape: 	goto escape;
        case m2c::kgetchar: 	goto getchar;
        case m2c::kinputdol: 	goto inputdol;
        case m2c::kinputloop: 	goto inputloop;
        case m2c::kkeypress: 	goto keypress;
        case m2c::kkeypressed: 	goto keypressed;
        case m2c::kkeyrelease: 	goto keyrelease;
        case m2c::knocursor: 	goto nocursor;
        case m2c::knumonly: 	goto numonly;
        case m2c::kprintinputdol: 	goto printinputdol;
        case m2c::kreadkbd: 	goto readkbd;
        case m2c::kreadkbdexit: 	goto readkbdexit;
        case m2c::kreadloop: 	goto readloop;
        case m2c::krejectchar: 	goto rejectchar;
        case m2c::kreleaseloop: 	goto releaseloop;
        case m2c::kscanmenukeys: 	goto scanmenukeys;
        case m2c::kscanmkeysfail: 	goto scanmkeysfail;
        case m2c::kscanmkeyslp: 	goto scanmkeyslp;
        case m2c::kscanmkeyspass: 	goto scanmkeyspass;
        case m2c::ksetchar: 	goto setchar;
        case m2c::kskipchar: 	goto skipchar;
        case m2c::kskipdelete: 	goto skipdelete;
        case m2c::kupdatemenukeys: 	goto updatemenukeys;
        case m2c::kupdatemkeysexit: 	goto updatemkeysexit;
        case m2c::kupdatemkeyslp: 	goto updatemkeyslp;
        default: return __dispatch_call(__disp, _state);
    };
}

