/* decomp_preview.cpp — clean-C rewrites of Tornado PREVIEW.ASM procedures.
 * Faithful to the assembly; see PREVIEW.ASM for original comments. */
#include "preview.h"

/* NextModelPtr — advance ModelPtr to next record (wrap at list end).
 * pass/ret: nothing (si clobbered).  kill: flags */
bool nextmodelptr_prev(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    si = modelptr;
    ADD(si, mod_rec_size);
    CMP(si, offset(prevdata, modellistend));      /* wrap around? */
    if ((dw)si >= (dw)offset(prevdata, modellistend)) {
        si = offset(prevdata, modellist);
    }
    modelptr = si;
    return m2c::RETN_(0, _state);
}

/* PrevModelPtr — back ModelPtr to previous record (wrap at list start). */
bool prevmodelptr_prev(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    si = modelptr;
    CMP(si, offset(prevdata, modellist));         /* wrap around? */
    if ((dw)si <= (dw)offset(prevdata, modellist)) {
        si = offset(prevdata, modellistend);
    }
    SUB(si, mod_rec_size);
    modelptr = si;
    return m2c::RETN_(0, _state);
}

/* NullEvent — empty event handler. */
bool nullevent_prev(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    return m2c::RETN_(0, _state);
}

/* UpdateTimer — auto-run countdown; sets Exit3DFlag when it lapses. */
bool updatetimer_prev(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(previewmode, 2);                          /* auto-run? */
    if ((db)previewmode == (db)2) {
        ax = show3dtimer;
        SUB(ax, lastframe);
        if (CF) {                                 /* lapsed */
            OR(exit3dflag, 1);
            XOR(ax, ax);
        }
        show3dtimer = ax;
    }
    return m2c::RETN_(0, _state);
}

/* CheckKeys — quit preview (Ctrl+Q) or exit to picture (Space/Enter/Esc). */
bool checkkeys_prev(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    al = *((&key) + k_ctrl);
    AND(al, *((&key) + k_q));                     /* quit? */
    if (al != 0) {
        dieflag = die_quit;
    }
    /* switch to picture? */
    al = *((&key) + k_space);
    OR(al, *((&key) + k_enter));
    OR(al, *((&key) + k_esc));
    OR(exit3dflag, al);
    return m2c::RETN_(0, _state);
}

/* BankLEvent — bank model left 45degs max (GND_MODEL: deselect gadget). */
bool banklevent(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return forwardevent(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */
    CMP(category, gnd_model);
    if ((dw)category == (dw)gnd_model) {
        gadgetptr = -1;                           /* deselect gadget */
        return m2c::RETN_(0, _state);
    }
    ax = lastframe;
    cl = 7;
    SHL(ax, cl);
    NEG(ax);
    ADD(ax, rfine);
    CMP(ax, -64 * 128);                           /* -45degs max bank left */
    if ((short)ax < (short)(-64 * 128)) ax = -64 * 128;
    rfine = ax;
    return m2c::RETN_(0, _state);
}

/* BankREvent — bank model right 45degs max. */
bool bankrevent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(category, gnd_model);
    if ((dw)category == (dw)gnd_model) {
        gadgetptr = -1;                           /* deselect gadget */
        return m2c::RETN_(0, _state);
    }
    ax = lastframe;
    cl = 7;
    SHL(ax, cl);
    ADD(ax, rfine);
    CMP(ax, 64 * 128);                            /* 45 degs max bank right */
    if ((short)ax > (short)(64 * 128)) ax = 64 * 128;
    rfine = ax;
    return m2c::RETN_(0, _state);
}

/* PitchDnEvent — pitch model down 45degs max. */
bool pitchdnevent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(category, gnd_model);
    if ((dw)category == (dw)gnd_model) {
        gadgetptr = -1;                           /* deselect gadget */
        return m2c::RETN_(0, _state);
    }
    ax = lastframe;
    cl = 7;
    SHL(ax, cl);
    NEG(ax);
    ADD(ax, pfine);
    CMP(ax, -64 * 128);                           /* -45degs max pitch down */
    if ((short)ax < (short)(-64 * 128)) ax = -64 * 128;
    pfine = ax;
    return m2c::RETN_(0, _state);
}

/* PitchUpEvent — pitch model up 45degs max. */
bool pitchupevent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(category, gnd_model);
    if ((dw)category == (dw)gnd_model) {
        gadgetptr = -1;                           /* deselect gadget */
        return m2c::RETN_(0, _state);
    }
    ax = lastframe;
    cl = 7;
    SHL(ax, cl);
    ADD(ax, pfine);
    CMP(ax, 64 * 128);                            /* 45degs max pitch up */
    if ((short)ax > (short)(64 * 128)) ax = 64 * 128;
    pfine = ax;
    return m2c::RETN_(0, _state);
}

/* EjectEvent — quit preview. */
bool ejectevent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dieflag = die_quit;
    return m2c::RETN_(0, _state);
}

/* PictureEvent — exit to picture mode. */
bool pictureevent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    OR(exit3dflag, 1);
    return m2c::RETN_(0, _state);
}

/* PreviewIntr100 — 100Hz interrupt: theme music at 50Hz toggle.
 * pass/ret: nothing.  kill: nothing */
bool previewintr100(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    XOR(timer50, 1);                              /* toggle 50Hz */
    if (timer50 != 0) {
        CALLF(refreshmusic, 0);
    }
    return m2c::RETF_(0, _state);
}

/* UpdateTimer — auto-run preview timeout: Show3DTimer decays by the
 * frame delta; on underflow sets Exit3DFlag.  kill: ax,flags */
bool updatetimer(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return forwardevent(_i, _state);    /* dispatch-door forward */
    CMP(previewmode, 2);                        /* auto-run? */
    if ((db)previewmode != 2) goto done;        /* jne — no -> */
    ax = show3dtimer;
    SUB(ax, lastframe);
    if (!CF) goto store;                        /* jnc — ok -> */
    OR(exit3dflag, 1);
    XOR(ax, ax);
store:
    show3dtimer = ax;
done:
    return m2c::RETN_(0, _state);
}
