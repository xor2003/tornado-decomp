/* decomp_messages.cpp — clean-C rewrites of TORNADO/MESSAGES procedures.
 * Semantics from the authoritative TORNADO/MESSAGES.ASM source. */

#include "messages.h"

/* DispMessage — pass si -> message record; insert into MsgQueue.
 * High priority: head insert regardless of queue full.  Low priority:
 * tail insert if room.  ret: cf=0 queued, cf=1 queue full (ignored).
 * kill: assume all */
bool dispmessage(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return updatepilotmsg(_i, _state);  /* dispatch-door forward */
    bx = msgqueueindex;
    /* if comms receiver damaged then ignore external messages */
    TEST(ssf_commsrx, 1);                       /* damaged? */
    if (!(ssf_commsrx & 1)) goto priortest;     /* no -> */
    TEST(*((db*)raddr(ds, si)), msg_extrn);     /* external message? */
    if (*((db*)raddr(ds, si)) & msg_extrn) goto msgok;  /* yes -> */
priortest:
    /* sort message priority */
    TEST(*((db*)raddr(ds, si)), msg_prior);     /* high priority message? */
    if (!(*((db*)raddr(ds, si)) & msg_prior)) goto lowpriority;  /* no -> */
    /* high priority message - insert at head of queue
     * (regardless of queue full) */
    bp = si;
    cx = num_msg - 1;
    si = m2c::near_offset_external(msgqueue) + (num_msg - 2) * 2;
    di = m2c::near_offset_external(msgqueue) + (num_msg - 1) * 2;
    STD;
    REP MOVSW;
    CLD;
    si = bp;
    msgqueue[0] = si;
    CMP(bx, num_msg * 2);                       /* was queue full? */
    if ((dw)bx == (dw)(num_msg * 2)) goto msgok; /* yes -> */
    bx += 2;
    goto msgok;
lowpriority:
    /* low priority message - add to tail of queue (if room) */
    CMP(bx, num_msg * 2);                       /* queue full? */
    if ((dw)bx == (dw)(num_msg * 2)) goto queuefull;  /* yes -> */
    *((dw*)((db*)&msgqueue + bx)) = si;         /* MsgQueue[bx] */
    bx += 2;
msgok:
    msgqueueindex = bx;
    CLC;                                        /* message added to queue */
    return m2c::RETN_(0, _state);
queuefull:
    STC;                                        /* queue full, ignored */
    return m2c::RETN_(0, _state);
}
