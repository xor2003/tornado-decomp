/* THIS IS GENERATED FILE */

        
#include "messages.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
pancode_0_proc:
	// 580 
updatenavigmsg:
	// 4369 
	// 0 ;* kill: assume all
	/* mov	si,OFFSET NavigSetUp$ */
	si = m2c::near_offset_external(navigsetupdol);
	/* jmp	ContUpdateMsg */
	goto contupdatemsg;
updatepilotmsg:
	// 583 
	/* mov	si,OFFSET PilotSetUp$ */
	si = m2c::near_offset_external(pilotsetupdol);
contupdatemsg:
	// 4371 
	/* ContUpdateMsg:	call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* update message timer
	/* mov	ax,MsgTimer */
	ax = msgtimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	/* mov	MsgTimer,ax */
	msgtimer = ax;
	/* jnz	DispMsg		;message still being displayed -> */
	if (ax != 0) {goto dispmsg;}
	// 0 ;* check for empty queue
	/* cmp	MsgQueueIndex,0	;empty queue? */
	CMP(msgqueueindex, 0);
	/* jne	NextMsg		;no -> */
	if ((dw)(msgqueueindex) != (dw)(0)) {goto nextmsg;}
	// 0 ;* empty queue, clear last message?
	/* mov	si,MsgPtr */
	si = msgptr;
	/* test	BYTE PTR [si],MSG_CLEAR	;clear message? */
	TEST(*(raddr(ds,si)), 0x2);
	/* jz	DispMsg			;no -> */
	if (!(*(raddr(ds,si)) & 0x2)) {goto dispmsg;}
	/* mov	MsgPtr,OFFSET NullMsg$ */
	msgptr = m2c::near_offset_external(nullmsgdol);
	/* jmp	DispMsg */
	goto dispmsg;
	// 0 ;* clear display for short period (visual effect) or disp next message?
nextmsg:
	// 4373 
	/* NextMsg:	xor	MsgDelay,1	;clear display? */
	XOR(*(msgdelay), 1);
	/* jz	@F		;no -> */
	if (*(msgdelay) == 0) {goto dummylabel1;}
	/* mov	MsgPtr,OFFSET NullMsg$ */
	msgptr = m2c::near_offset_external(nullmsgdol);
	/* mov	MsgTimer,CLEAR_DELAY */
	msgtimer = 25;
	/* jmp	DispMsg */
	goto dispmsg;
	// 0 ;* fetch next message from queue
dummylabel1:
	// 4375 
	/* @@:		mov	si,MsgQueue[0] */
	si = *(dw*)(((db*)msgqueue)+0);
	/* mov	MsgPtr,si */
	msgptr = si;
	// 0 ;* sort display period
	/* mov	ax,LONG_DELAY	;assume long delay */
	ax = 5*100;
	/* test	BYTE PTR [si],MSG_SHORT	;short delay? */
	TEST(*(raddr(ds,si)), 0x1);
	/* jz	@F			;* no -> */
	if (!(*(raddr(ds,si)) & 0x1)) {goto dummylabel2;}
	/* mov	ax,SHORT_DELAY */
	ax = 2*100;
dummylabel2:
	// 4377 
	/* @@:		mov	MsgTimer,ax */
	msgtimer = ax;
	// 0 ;* sort alert
	/* test	BYTE PTR [si],MSG_ALERT	;alert sound? */
	TEST(*(raddr(ds,si)), 0x8);
	/* jz	@F			;no -> */
	if (!(*(raddr(ds,si)) & 0x8)) {goto dummylabel3;}
	// 0 ;* move queue along
dummylabel3:
	// 4379 
	/* @@:		sub	MsgQueueIndex,2 */
	SUB(msgqueueindex, 2);
	/* mov	cx,NUM_MSG-1 */
	cx = 32-1;
	/* mov	si,OFFSET MsgQueue+2 */
	si = m2c::near_offset_external(msgqueue)+2;
	/* mov	di,OFFSET MsgQueue */
	di = m2c::near_offset_external(msgqueue);
	// 636 rep	movsw
	/* rep	movsw */
	REP MOVSW;
dispmsg:
	// 4381 
	/* DispMsg:	mov	si,MsgPtr */
	si = msgptr;
	/* inc	si		;ignore attribute byte */
	INC(si);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
dispmessage:
	// 651 
	/* mov	bx,MsgQueueIndex ;* kill: assume all */
	bx = msgqueueindex;
	// 0 ;* if comms reciever damaged then ignore external messages
edummylabel1:
	// 4383 
	/* test	SSF_CommsRx,1	;damaged? */
	TEST(ssf_commsrx, 1);
	/* jz	@F		;no -> */
	if (!(ssf_commsrx & 1)) {goto dummylabel4;}
	/* test	BYTE PTR [si],MSG_EXTRN	;external message? */
	TEST(*(raddr(ds,si)), 0x10);
	/* jnz	MsgOk			;yes -> */
	if ((*(raddr(ds,si)) & 0x10) != 0) {goto msgok;}
	// 0 ;* sort message priority
dummylabel4:
	// 4385 
	/* @@:		test	BYTE PTR [si],MSG_PRIOR	;high priority message? */
	TEST(*(raddr(ds,si)), 0x4);
	/* jz	LowPriority		;no -> */
	if (!(*(raddr(ds,si)) & 0x4)) {goto lowpriority;}
	// 0 ;* high priority message - insert at head of queue (regardless of queue full)
	/* mov	bp,si */
	bp = si;
	/* mov	cx,NUM_MSG-1 */
	cx = 32-1;
	/* mov	si,OFFSET MsgQueue+(NUM_MSG-2)*2 */
	si = m2c::near_offset_external(msgqueue)+(32-2)*2;
	/* mov	di,OFFSET MsgQueue+(NUM_MSG-1)*2 */
	di = m2c::near_offset_external(msgqueue)+(32-1)*2;
	/* std */
	STD;
	// 670 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* cld */
	CLD;
	/* mov	si,bp */
	si = bp;
	/* mov	MsgQueue[0],si */
	*(dw*)(((db*)msgqueue)+0) = si;
	/* cmp	bx,NUM_MSG*2	;was queue full? */
	CMP(bx, 32*2);
	/* je	MsgOk		;yes -> */
	if ((dw)(bx) == (dw)(32*2)) {goto msgok;}
	/* add	bx,2 */
	ADD(bx, 2);
	/* jmp	MsgOk */
	goto msgok;
	// 0 ;* low priority message - add to tail of queue (if room)
lowpriority:
	// 4387 
	/* LowPriority:	cmp	bx,NUM_MSG*2	;queue full? */
	CMP(bx, 32*2);
	/* je	QueueFull	;yes -> */
	if ((dw)(bx) == (dw)(32*2)) {goto queuefull;}
	/* mov	MsgQueue[bx],si */
	*(dw*)(((db*)msgqueue)+bx) = si;
	/* add	bx,2 */
	ADD(bx, 2);
msgok:
	// 4389 
	/* MsgOk:		mov	MsgQueueIndex,bx */
	msgqueueindex = bx;
	/* clc			;message added to queue */
	CLC;
	/* ret */
	RETF(0);
queuefull:
	// 4391 
	/* QueueFull:	stc			;queue full, message ignored */
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
                case m2c::kcontupdatemsg: 	goto contupdatemsg;
        case m2c::kdispmessage: 	goto dispmessage;
        case m2c::kdispmsg: 	goto dispmsg;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::klowpriority: 	goto lowpriority;
        case m2c::kmsgok: 	goto msgok;
        case m2c::knextmsg: 	goto nextmsg;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kqueuefull: 	goto queuefull;
        case m2c::kupdatenavigmsg: 	goto updatenavigmsg;
        case m2c::kupdatepilotmsg: 	goto updatepilotmsg;
        default: return __dispatch_call(__disp, _state);
    };
}

