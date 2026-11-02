/* decomp_control.cpp — clean-C rewrites of TORNADO/CONTROL procedures.
 *
 * Semantics from the authoritative TORNADO/CONTROL.ASM source and its
 * original comments.
 */

#include "control.h"

/* CheckTimeout — DieFlag = SYS_ERR_TIMEOUT when GlobalTimeout is armed
 * and ElapsedTime (32-bit) reaches TimeLimit.  The counter read is
 * bracketed cli/sti so both halves are consistent.
 * kill: assume all */
bool checktimeout(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return fadeloadscreen(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */
    TEST(globaltimeout, 1);
    if (ZF) return m2c::RETF_(0, _state);      /* jz SkipTimeout */

    CLI;
    ax = *(dw*)(&elapsedtime);
    dx = *(dw*)(((db*)&elapsedtime) + 2);
    STI;

    CMP(dx, *(dw*)(((db*)&timelimit) + 2));
    if ((dw)dx < (dw)*(dw*)(((db*)&timelimit) + 2))
        return m2c::RETF_(0, _state);          /* jb SkipTimeout */
    if ((dw)dx == (dw)*(dw*)(((db*)&timelimit) + 2)) {
        CMP(ax, *(dw*)(&timelimit));
        if ((dw)ax < (dw)*(dw*)(&timelimit))
            return m2c::RETF_(0, _state);      /* jb SkipTimeout */
    }
    dieflag = 236;                             /* SYS_ERR_TIMEOUT */
    return m2c::RETF_(0, _state);
}

/* KBOUNCE flag — status = (lock = 0 and state = 1); lock = state;
 * state = 0 */
#define KBOUNCE_(flag) do {                                        \
        al = 0;                                                    \
        XCHG(al, *(db*)(((db*)&flag) + k_state));                  \
        ah = al;                                                   \
        XCHG(ah, *(db*)(((db*)&flag) + k_lock));                   \
        ah = ~ah;                                                  \
        al &= ah;                                                  \
        *(db*)(((db*)&flag) + k_status) = al;                      \
    } while (0)

/* SortPause — test for and handle pause: suspend sound/music, freeze
 * timers, wait out the pause loop, restore and resume.
 * kill: assume all */
bool sortpause(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return fadeloadscreen(_i, _state);  /* dispatch-door forward */
    dw pticker = 0, pframes = 0, pcountdown = 0;
    dw pelapsed0 = 0, pelapsed1 = 0;
    al = *(db*)(((db*)&kf_pause) + k_status);   /* KTEST KF_Pause */
    TEST(al, al);                               /* key pressed? */
    if (!al) goto exitpause;                    /* no -> */
    paused = 1;
    CALLF(suspendsound, 0);
    CALLF(suspendmusic, 0);
    /* store timers / counters */
    CLI;
    pticker = ticker;
    pframes = frames;
    pcountdown = countdown;
    pelapsed0 = *(dw*)(&elapsedtime);
    pelapsed1 = *(dw*)(((db*)&elapsedtime) + 2);
    STI;
    CALLF(fadedown, 0);
    frames = 0;
pauseloop:
    ax = frames;
    CMP(ax, maxframerate);
    if ((dw)ax < (dw)maxframerate) goto pauseloop;
    frames = 0;
    KBOUNCE_(kf_quit);                          /* KBOUNCE KF_Quit */
    KBOUNCE_(kf_pause);                         /* KBOUNCE KF_Pause */
    al = *(db*)(((db*)&kf_quit) + k_status);    /* KTEST KF_Quit */
    TEST(al, al);
    if (!al) goto skipquit;
    /* if TmpDieFlag <> 0 then DieFlag = TmpDieFlag else
     * DieFlag = DIE_QUIT */
    al = tmpdieflag;
    TEST(al, al);
    if (al) goto quitsort;
    al = die_quit;
quitsort:
    dieflag = al;
    goto pausedone;
skipquit:
    al = *(db*)(((db*)&kf_pause) + k_status);   /* KTEST KF_Pause */
    TEST(al, al);
    if (!al) goto pauseloop;
pausedone:
    CALLF(fadeup, 0);
    /* restore timers / counters */
    CLI;
    *(dw*)(((db*)&elapsedtime) + 2) = pelapsed1;
    *(dw*)(&elapsedtime) = pelapsed0;
    countdown = pcountdown;
    frames = pframes;
    ticker = pticker;
    STI;
    CALLF(resumesound, 0);
    CALLF(resumemusic, 0);
    paused = 0;
exitpause:
    return m2c::RETN_(0, _state);
}

/* InitDemo — init demo mode: cycling (DemoMode=1) or flying.
 * ret : ax = game viewmode.  kill: assume all */
bool initdemo(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return fadeloadscreen(_i, _state);  /* dispatch-door forward */
    CMP(demomode, 1);                           /* cycling demo? */
    if ((dw)demomode != (dw)1) goto initflyingdemo;   /* no -> */
    /* init drone cycling demo mode */
    infinitefuel = 1;
    nocollisions = 1;
    nofire = 1;
    ax = view_demo;
    return m2c::RETN_(0, _state);
initflyingdemo:
    /* init flying demo mode — waypoint route is "continuous" and has
     * at least 3 waypoints */
    startairborne = 1;
    infinitefuel = 1;
    autotrack = 1;
    nocollisions = 1;
    nofire = 1;
    trkcambrg = 256 + 16;
    /* delete Tornado mobile */
    si = m2c::near_offset_external(m_mobile);
    CALLF(deletemobile, 0);
    /* start at current waypoint */
    si = wpptr;
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_xsec)));
    m_view.vp_xsec = ax;
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_ysec)));
    m_view.vp_ysec = ax;
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_xft)));
    m_view.vp_xft = ax;
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_yft)));
    m_view.vp_yft = ax;
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_zft)));
    *((dw*)((db*)&m_view + vp_zft_lo)) = ax;
    *((dw*)((db*)&m_view + vp_zft_hi)) = 0;
    /* convert vtas (ft/sec * 8) to vias */
    ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds, si))->wp_time)));
    dh = 0;                                     /* *256 */
    dl = ah;
    ah = al;
    al = 0;
    bx = 3482;                                  /* 1.7 * 8 * 256 */
    DIV2(bx);
    startairspeed = ax;
    /* hdg = brg to next waypoint */
    CALLF(advancewp, 0);
    ax = wpbrg;
    m_view.vp_hdg = ax;
    m_view.vp_pitch = 0;
    m_view.vp_roll = 0;
    /* create Tornado mobile */
    si = m2c::near_offset_external(m_mobile);
    CALLF(createmobile, 0);
    ax = view_tracking;
    return m2c::RETN_(0, _state);
}
