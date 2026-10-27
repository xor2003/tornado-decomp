/* THIS IS GENERATED FILE */

        
#include "comms.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initcomms:
	// 347 
	/* mov	CommsDevice,al ;* kill: assume all */
	*(commsdevice) = al;
edummylabel1:
	// 4369 
	/* mov	BYTE PTR BaudRate,ah */
	*(db*)(&baudrate) = ah;
	// 0 ;* sort interrupt vector wrt comms device
	/* mov	CommsVector,COM1_VECTOR */
	*(commsvector) = 12;
	/* cmp	al,COM1 */
	CMP(al, 3);
	/* je	@F */
	if ((db)(al) == (db)(3)) {goto dummylabel1;}
	/* mov	CommsVector,COM2_VECTOR */
	*(commsvector) = 11;
	// 0 ;* disable UART interrupts
dummylabel1:
	// 4371 
	/* @@:		mov	dh,CommsDevice */
	dh = *(commsdevice);
	/* mov	dl,INTR_ENABLE */
	dl = 0x0f9;
	/* mov	al,00000000b */
	al = 0x0;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;-----------------------------------------
	// 0 ;* store interrupt vector wrt comms device
	// 0 ;-----------------------------------------
	/* push	es */
	PUSH(es);
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,CommsVector	;comms interrupt wrt device */
	al = *(commsvector);
	/* int	021h  		;DOS */
	_INT(0x021);
	/* mov	DOSVctrSeg,es */
	dosvctrseg = es;
	/* mov	DOSVctrOff,bx */
	dosvctroff = bx;
	/* pop	es */
	POP(es);
	// 0 ;---------------------------------------
	// 0 ;* set interrupt vector wrt comms device
	// 0 ;---------------------------------------
	/* mov	bl,CommsVector */
	bl = *(commsvector);
	/* push	ds */
	PUSH(ds);
	/* mov	dx,OFFSET CommsIntr */
	dx = m2c::kglobal_commsintr;
	/* mov	ax,SEG CommsIntr */
	ax = seg_offset(commsintr);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,bl		;comms interrupt wrt device */
	al = bl;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	// 0 ;-----------------
	// 0 ;* initialize UART
	// 0 ;-----------------
	/* cli */
	CLI;
	/* mov	dh,CommsDevice */
	dh = *(commsdevice);
	// 0 ;* enable access to Baud rate divisor reg's
	/* mov	dl,LINE_CTRL */
	dl = 0x0fb;
	/* mov	al,10000000b */
	al = 0x80;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* set Baud rate divisor reg's
	/* mov	bx,BaudRate */
	bx = baudrate;
	/* mov	dl,LS_BAUD */
	dl = 0x0f8;
	/* mov	al,BYTE PTR BaudTable[bx+0]    	;Baud rate LSB data */
	al = *(db*)(((db*)&baudtable)+bx+0);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dl,MS_BAUD */
	dl = 0x0f9;
	/* mov	al,BYTE PTR BaudTable[bx+1]	;Baud rate MSB data */
	al = *(db*)(((db*)&baudtable)+bx+1);
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* set line control reg
	/* mov	dl,LINE_CTRL */
	dl = 0x0fb;
	/* mov	al,00000011b	;8 data bits, 1 stop bit, no parity */
	al = 0x3;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* set modem control reg
	/* mov	dl,MODEM_CTRL */
	dl = 0x0fc;
	/* mov	al,00001011b */
	al = 0xb;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;* set interrupt enable reg
	/* mov	dl,INTR_ENABLE */
	dl = 0x0f9;
	/* mov	al,00000111b */
	al = 0x7;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;---------------------------------
	// 0 ;* initialize interrupt controller
	// 0 ;---------------------------------
	/* mov	al,00000000b	;enable IRQ0 .. IRQ7 */
	al = 0x0;
	/* out	INTR_MASK,al */
	OUT(0x00021, al);
	/* sti */
	STI;
	// 0 ;* any 'left over' pending intr's will occur NOW, so reset queues afterwards
	/* call	ClearTxQueue */
	CALL(cleartxqueue, 0);
	/* call	ClearRxQueue */
	CALL(clearrxqueue, 0);
	/* call	ClearError */
	CALL(clearerror, 0);
	/* ret */
	RETF(0);
stopcomms:
	// 445 
	// 0 ;-----------------------------
	// 0 ;* disable all UART interrupts
	// 0 ;-----------------------------
edummylabel2:
	// 4373 
	/* mov	dh,CommsDevice */
	dh = *(commsdevice);
	/* mov	dl,INTR_ENABLE */
	dl = 0x0f9;
	/* mov	al,00000000b */
	al = 0x0;
	/* out	dx,al */
	OUT(dx, al);
	// 0 ;--------------------------
	// 0 ;* restore interrupt vector
	// 0 ;--------------------------
	/* mov	bl,CommsVector */
	bl = *(commsvector);
	/* push	ds */
	PUSH(ds);
	/* mov	dx,DOSVctrOff */
	dx = dosvctroff;
	/* mov	ax,DOSVctrSeg */
	ax = dosvctrseg;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,bl		;comms interrupt wrt device */
	al = bl;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
commsintr:
	// 484 
	/* push	ax ;*       The modem status changed interrupt should not be enabled. */
	PUSH(ax);
edummylabel3:
	// 4375 
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	ds */
	PUSH(ds);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	dh,CommsDevice */
	dh = *(commsdevice);
	// 0 ;* identify the cause of the interrupt
	/* mov	dl,INTR_IDENT */
	dl = 0x0fa;
	/* in	al,dx */
	IN(al, dx);
nextintr:
	// 4377 
	/* NextIntr:	and	al,0110b     	;mask out unwanted bits */
	AND(al, 0x6);
	/* cmp	al,0110b	;error condition interrupt? */
	CMP(al, 0x6);
	/* je	ErrorIntr	;yes -> */
	if ((db)(al) == (db)(0x6)) {goto errorintr;}
	/* cmp	al,0100b	;received data ready interrupt? */
	CMP(al, 0x4);
	/* je	RxIntr		;yes -> */
	if ((db)(al) == (db)(0x4)) {goto rxintr;}
	// 0 ;* transmitter ready interrupt
txintr:
	// 4379 
	/* TxIntr:		mov	si,TxQRdPtr */
	si = txqrdptr;
	/* cmp	si,TxQWtPtr	;is queue empty? */
	CMP(si, txqwtptr);
	/* je	IntrPending	;yes -> */
	if ((dw)(si) == (dw)(txqwtptr)) {goto intrpending;}
	/* mov	al,[si] */
	al = m2c::getdata(*(raddr(ds,si)));
	/* mov	dl,TX_HOLD */
	dl = 0x0f8;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	si */
	INC(si);
	/* cmp	si,OFFSET TxQTail */
	CMP(si, m2c::near_offset_external(txqtail));
	/* jbe	@F */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(txqtail))) {goto dummylabel2;}
	/* mov	si,OFFSET TxQHead */
	si = m2c::near_offset_external(txqhead);
dummylabel2:
	// 4381 
	/* @@:		mov	TxQRdPtr,si */
	txqrdptr = si;
	/* jmp	IntrPending */
	goto intrpending;
	// 0 ;* received data ready interrupt
rxintr:
	// 4383 
	/* RxIntr:	 	mov	dl,RX_DATA */
	dl = 0x0f8;
	/* in	al,dx */
	IN(al, dx);
	/* mov	si,RxQWtPtr */
	si = rxqwtptr;
	/* mov	[si],al */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(al));
	/* inc	si */
	INC(si);
	/* cmp	si,OFFSET RxQTail */
	CMP(si, m2c::near_offset_external(rxqtail));
	/* jbe	@F */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(rxqtail))) {goto dummylabel3;}
	/* mov	si,OFFSET RxQHead */
	si = m2c::near_offset_external(rxqhead);
dummylabel3:
	// 4385 
	/* @@:		mov	RxQWtPtr,si */
	rxqwtptr = si;
	/* cmp	si,RxQRdPtr    	;queue full? */
	CMP(si, rxqrdptr);
	/* jne	IntrPending	;no -> */
	if ((dw)(si) != (dw)(rxqrdptr)) {goto intrpending;}
	/* or	CommsError,ERR_RX_OVRFLW */
	OR(commserror, 0x4000);
	/* jmp	IntrPending */
	goto intrpending;
	// 0 ;* error condition interrupt
errorintr:
	// 4387 
	/* ErrorIntr:	mov	dl,LINE_STAT */
	dl = 0x0fd;
	/* in	al,dx */
	IN(al, dx);
	/* and	ax,0001eh	;clear unwanted bits */
	AND(ax, 0x0001e);
	/* or	CommsError,ax */
	OR(commserror, ax);
	// 0 ;* test to see if any interrupts are pending
intrpending:
	// 4389 
	/* IntrPending: 	mov	dl,INTR_IDENT */
	dl = 0x0fa;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,0001b */
	TEST(al, 0x1);
	/* jz	NextIntr 	;intr pending -> */
	if (!(al & 0x1)) {goto nextintr;}
	// 0 ;* inform the interrupt controller that the interrupt has been serviced
	/* mov 	al,EOI */
	al = 0x020;
	/* out	INTR_CMND,al */
	OUT(0x00020, al);
	/* pop	ds */
	POP(ds);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* iret */
	J(IRET);
senddata:
	// 560 
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
edummylabel4:
	// 4391 
	/* mov	ah,al */
	ah = al;
	// 0 ;* if transmit queue empty and transmit holding reg empty then
	// 0 ;*    send char immediately
	// 0 ;* else
	// 0 ;*    put char in transmit queue
	// 0 ;* end
	/* mov	si,TxQWtPtr */
	si = txqwtptr;
	/* cmp	si,TxQRdPtr   	;is tx queue empty? */
	CMP(si, txqrdptr);
	/* jne	AddToQueue	;no -> */
	if ((dw)(si) != (dw)(txqrdptr)) {goto addtoqueue;}
	/* mov	dh,CommsDevice */
	dh = *(commsdevice);
	/* mov	dl,LINE_STAT */
	dl = 0x0fd;
	/* in	al,dx */
	IN(al, dx);
	/* test	al,00100000b	;is tx hold reg empty? */
	TEST(al, 0x20);
	/* jz	AddToQueue	;no -> */
	if (!(al & 0x20)) {goto addtoqueue;}
	// 0 ;* transmit character
	/* mov	dl,TX_HOLD */
	dl = 0x0f8;
	/* mov	al,ah */
	al = ah;
	/* out	dx,al */
	OUT(dx, al);
	/* jmp	CharSent */
	goto charsent;
	// 0 ;* put char in transmit queue
addtoqueue:
	// 4393 
	/* AddToQueue:	mov	[si],ah */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(ah));
	/* inc	si */
	INC(si);
	// 0 ;* check for and handle queue wrap around
	/* cmp	si,OFFSET TxQTail */
	CMP(si, m2c::near_offset_external(txqtail));
	/* jbe	@F */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(txqtail))) {goto dummylabel4;}
	/* mov	si,OFFSET TxQHead */
	si = m2c::near_offset_external(txqhead);
dummylabel4:
	// 4395 
	/* @@:		mov	TxQWtPtr,si */
	txqwtptr = si;
	// 0 ;* check for buffer full
	/* cmp	si,TxQRdPtr */
	CMP(si, txqrdptr);
	/* jne	CharSent */
	if ((dw)(si) != (dw)(txqrdptr)) {goto charsent;}
	/* or	CommsError,ERR_TX_OVRFLW */
	OR(commserror, 0x8000);
charsent:
	// 4397 
	/* CharSent:	sti */
	STI;
	/* ret */
	RETF(0);
sendpacket:
	// 610 
sendloop:
	// 4399 
	/* SendLoop:	lodsb ;* kill: ax, cx, dx, si, flags */
	{ LODSB; }
	/* push	si */
	PUSH(si);
	/* call	SendData */
	CALLF(senddata, 0);
	/* pop	si */
	POP(si);
	/* loop	SendLoop */
	LOOP(sendloop);
	/* ret */
	RETF(0);
readdata:
	// 627 
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	// 0 ;* test if receive queue is empty
edummylabel5:
	// 4401 
	/* mov	si,RxQRdPtr */
	si = rxqrdptr;
	/* cmp	si,RxQWtPtr */
	CMP(si, rxqwtptr);
	/* jne	@F */
	if ((dw)(si) != (dw)(rxqwtptr)) {goto dummylabel5;}
	// 0 ;* receive queue empty
	/* xor	al,al */
	XOR(al, al);
	/* stc			;cf = 1 */
	STC;
	/* jmp	ReadDataExit */
	goto readdataexit;
	// 0 ;* read character from receive queue and update pointer
dummylabel5:
	// 4403 
	/* @@:		mov	al,[si] */
	al = m2c::getdata(*(raddr(ds,si)));
	/* inc	si */
	INC(si);
	/* cmp	si,OFFSET RxQTail */
	CMP(si, m2c::near_offset_external(rxqtail));
	/* jbe	@F */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(rxqtail))) {goto dummylabel6;}
	/* mov	si,OFFSET RxQHead */
	si = m2c::near_offset_external(rxqhead);
dummylabel6:
	// 4405 
	/* @@:		mov	RxQRdPtr,si */
	rxqrdptr = si;
	/* clc		   	;cf = 0 */
	CLC;
readdataexit:
	// 4407 
	/* ReadDataExit:	sti */
	STI;
	/* ret */
	RETF(0);
synccomms:
	// 665 
	/* mov	SyncByte,al ;* note: Do NOT use -1 as sync data (-1 received if no cable fitted) */
	syncbyte = al;
edummylabel6:
	// 4409 
	/* mov	UserAbort,ah */
	userabort = ah;
	/* mov	CountDown,cx */
	countdown = cx;
	// 0 ;* wait for transmit queue to empty before sending sync bytes
emptyloop:
	// 4411 
	/* EmptyLoop:	mov	ax,CountDown */
	ax = countdown;
	/* test	ax,ax		;timeout? */
	TEST(ax, ax);
	/* jz	SyncTimeout	;yes -> */
	if (!(ax & ax)) {goto synctimeout;}
	/* mov	al,UserAbort	;user abort? */
	al = userabort;
	/* and	al,Key[K_CTRL] */
	AND(al, *((&key)+29));
	/* and	al,Key[K_Q] */
	AND(al, *((&key)+16));
	/* jnz	SyncUserAbort	;yes -> */
	if (al != 0) {goto syncuserabort;}
	/* mov	ax,TxQWtPtr */
	ax = txqwtptr;
	/* cmp	ax,TxQRdPtr */
	CMP(ax, txqrdptr);
	/* jne	EmptyLoop */
	if ((dw)(ax) != (dw)(txqrdptr)) {goto emptyloop;}
	/* jmp	IntoSync */
	goto intosync;
	// 0 ;* send sync bytes at controlled rate
syncloop:
	// 4413 
	/* SyncLoop:	mov	Ticker,0 */
	ticker = 0;
dummylabel7:
	// 4415 
	/* @@:		cmp	Ticker,2	;50 sync bytes / sec */
	CMP(ticker, 2);
	/* jbe	@B */
	if ((dw)(ticker) <= (dw)(2)) {goto dummylabel7;}
intosync:
	// 4417 
	/* IntoSync:	mov	ax,CountDown */
	ax = countdown;
	/* test	ax,ax		;timeout? */
	TEST(ax, ax);
	/* jz	SyncTimeout	;yes -> */
	if (!(ax & ax)) {goto synctimeout;}
	/* mov	al,UserAbort	;user abort? */
	al = userabort;
	/* and	al,Key[K_CTRL] */
	AND(al, *((&key)+29));
	/* and	al,Key[K_Q] */
	AND(al, *((&key)+16));
	/* jnz	SyncUserAbort	;yes -> */
	if (al != 0) {goto syncuserabort;}
	/* mov	al,SyncByte */
	al = syncbyte;
	/* call	SendData */
	CALLF(senddata, 0);
	/* call	ReadData */
	CALLF(readdata, 0);
	/* jc	SyncLoop */
	if (CF) {goto syncloop;}
	/* cmp	al,SyncByte	;received sync? */
	CMP(al, syncbyte);
	/* jne	SyncLoop	;no -> */
	if ((db)(al) != (db)(syncbyte)) {goto syncloop;}
	// 0 ;* send sync again in case other machine missed the sync
	/* call	SendData */
	CALLF(senddata, 0);
	/* clc			;cf = 0 = sync received */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
synctimeout:
	// 4419 
	// 0 ;---------------------------
	/* or	CommsError,ERR_SYNC_TMOUT */
	OR(commserror, 0x1000);
	/* stc			;cf = 1	= sync timeout / user abort */
	STC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
syncuserabort:
	// 4421 
	// 0 ;---------------------------
	/* or	CommsError,ERR_SYNC_ABORT */
	OR(commserror, 0x800);
	/* stc			;cf = 1	= sync timeout / user abort */
	STC;
	/* ret */
	RETF(0);
clearcomms:
	// 728 
	/* call	ClearTxQueue ;* kill: nothing */
	CALL(cleartxqueue, 0);
edummylabel7:
	// 4423 
	/* call	ClearRxQueue */
	CALL(clearrxqueue, 0);
	/* call	ClearError */
	CALL(clearerror, 0);
	/* ret */
	RETF(0);
cleartxqueue:
	// 742 
	/* pushf ;* kill: nothing */
	PUSHF;
edummylabel8:
	// 4425 
	/* cli */
	CLI;
	/* mov	TxQWtPtr,OFFSET TxQHead */
	txqwtptr = m2c::near_offset_external(txqhead);
	/* mov	TxQRdPtr,OFFSET TxQHead */
	txqrdptr = m2c::near_offset_external(txqhead);
	/* popf */
	POPF;
	/* ret */
	RETN(0);
clearrxqueue:
	// 758 
	/* pushf ;* kill: nothing */
	PUSHF;
edummylabel9:
	// 4427 
	/* cli */
	CLI;
	/* mov	RxQWtPtr,OFFSET RxQHead */
	rxqwtptr = m2c::near_offset_external(rxqhead);
	/* mov	RxQRdPtr,OFFSET RxQHead */
	rxqrdptr = m2c::near_offset_external(rxqhead);
	/* popf */
	POPF;
	/* ret */
	RETN(0);
clearerror:
	// 774 
	/* pushf ;* kill: nothing */
	PUSHF;
edummylabel10:
	// 4429 
	/* cli */
	CLI;
	/* mov	CommsError,0 */
	commserror = 0;
	/* popf */
	POPF;
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
                case m2c::kaddtoqueue: 	goto addtoqueue;
        case m2c::kcharsent: 	goto charsent;
        case m2c::kclearcomms: 	goto clearcomms;
        case m2c::kclearerror: 	goto clearerror;
        case m2c::kclearrxqueue: 	goto clearrxqueue;
        case m2c::kcleartxqueue: 	goto cleartxqueue;
        case m2c::kcommsintr: 	goto commsintr;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
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
        case m2c::kemptyloop: 	goto emptyloop;
        case m2c::kerrorintr: 	goto errorintr;
        case m2c::kinitcomms: 	goto initcomms;
        case m2c::kintosync: 	goto intosync;
        case m2c::kintrpending: 	goto intrpending;
        case m2c::knextintr: 	goto nextintr;
        case m2c::kreaddata: 	goto readdata;
        case m2c::kreaddataexit: 	goto readdataexit;
        case m2c::krxintr: 	goto rxintr;
        case m2c::ksenddata: 	goto senddata;
        case m2c::ksendloop: 	goto sendloop;
        case m2c::ksendpacket: 	goto sendpacket;
        case m2c::kstopcomms: 	goto stopcomms;
        case m2c::ksynccomms: 	goto synccomms;
        case m2c::ksyncloop: 	goto syncloop;
        case m2c::ksynctimeout: 	goto synctimeout;
        case m2c::ksyncuserabort: 	goto syncuserabort;
        case m2c::ktxintr: 	goto txintr;
        default: return __dispatch_call(__disp, _state);
    };
}

