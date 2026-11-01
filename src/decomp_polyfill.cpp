/* decomp_polyfill.cpp — clean-C rewrites of LIB8086/POLYFILL procedures.
 *
 * Octant1..8 / RvrsOctant1..8 are NEAR Bresenham edge-walkers: they store
 * the edge x of a polygon side into LhsX[]/RhsX[] (one word per scanline)
 * via stosw, then update LhsPtr/RhsPtr.  pass: ax = x, dx = abs(Dx),
 * bp = abs(Dy); kill all except si.  They end with RETN_(0) to mirror the
 * near `ret` (pops the word pushed by the near `call di` / CALL path).
 *
 * The six far fill entries share into_poly_fill(): xlat the colour, pick
 * the fill vector and octant table, then walk the coordinate list,
 * tracking MinY/MaxY, seeding edge arrays, dispatching to an octant
 * routine per edge, handling horizontals, and finally chaining through
 * FillVector to the driver's scanline filler (PolyDone: jmp bp — an
 * indirect near jump kept as an external-dispatch tail call).
 */

#include "polyfill.h"

/* ------------------------------------------------------------------ */
/* octant shape A: |Dx| > |Dy| — store x per scanline on error carry,   */
/* finish by writing NewX at the current edge slot.                     */
/* ------------------------------------------------------------------ */

/* Octant1: Dx > 0, Dy > 0, Dx > Dy (forward, rhs) */
bool octant1(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = rhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    for (;;) {
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
        INC(ax);
    }
    ax = newx;
    m2c::setdata((dw*)m2c::raddr_(ds, di), ax);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    m2c::RETN_(0, _state);
    return true;
}

/* Octant5: Dx < 0, Dy < 0, Dx > Dy (reverse dir, lhs) */
bool octant5(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    STD;
    di = lhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    for (;;) {
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
        DEC(ax);
    }
    ax = newx;
    m2c::setdata((dw*)m2c::raddr_(ds, di), ax);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    CLD;
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant4: Dx > 0, Dy < 0, Dx > Dy (reverse dir, rhs) */
bool rvrsoctant4(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    STD;
    di = rhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    for (;;) {
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
        INC(ax);
    }
    ax = newx;
    m2c::setdata((dw*)m2c::raddr_(ds, di), ax);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    CLD;
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant8: Dx < 0, Dy > 0, Dx > Dy (forward, lhs) */
bool rvrsoctant8(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = lhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    for (;;) {
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
        DEC(ax);
    }
    ax = newx;
    m2c::setdata((dw*)m2c::raddr_(ds, di), ax);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    m2c::RETN_(0, _state);
    return true;
}

/* ------------------------------------------------------------------ */
/* octant shape B: |Dx| > |Dy| — first x stored before the walk;        */
/* edge walks one scanline per loop count.                              */
/* ------------------------------------------------------------------ */

/* Octant4: Dx > 0, Dy < 0, Dx > Dy (reverse dir, lhs) */
bool octant4(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    STD;
    di = lhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    { STOSW; }
    for (;;) {
        INC(ax);
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
    }
    ADD(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    CLD;
    m2c::RETN_(0, _state);
    return true;
}

/* Octant8: Dx < 0, Dy > 0, Dx > Dy (forward, rhs) */
bool octant8(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = rhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    { STOSW; }
    for (;;) {
        DEC(ax);
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
    }
    SUB(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant1: Dx > 0, Dy > 0, Dx > Dy (forward, lhs) */
bool rvrsoctant1(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = lhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    { STOSW; }
    for (;;) {
        INC(ax);
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
    }
    SUB(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant5: Dx < 0, Dy < 0, Dx > Dy (reverse dir, rhs) */
bool rvrsoctant5(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    STD;
    di = rhsptr;
    cx = bp;
    bx = dx;
    SHR(bx, 1);
    ADC(bx, 0);
    { STOSW; }
    for (;;) {
        DEC(ax);
        SUB(bx, bp);
        if (CF || ZF) {
            ADD(bx, dx);
            { STOSW; }
            if (--cx == 0) break;
        }
    }
    ADD(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    CLD;
    m2c::RETN_(0, _state);
    return true;
}

/* ------------------------------------------------------------------ */
/* octant shape C: |Dy| > |Dx| — Bresenham over x with per-y store;     */
/* then rep-stosw the remaining scanlines with the final x.             */
/* ------------------------------------------------------------------ */

/* Octant2: Dx > 0, Dy > 0, Dy > Dx (forward, rhs) */
bool octant2(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    di = rhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                INC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    SUB(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* Octant7: Dx < 0, Dy > 0, Dy > Dx (forward, rhs) */
bool octant7(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    di = rhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                DEC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    SUB(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* Octant3: Dx > 0, Dy < 0, Dy > Dx (reverse dir, lhs) */
bool octant3(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    STD;
    di = lhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                INC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    ADD(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    CLD;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* Octant6: Dx < 0, Dy < 0, Dy > Dx (reverse dir, lhs) */
bool octant6(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    STD;
    di = lhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                DEC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    ADD(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    CLD;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant2: Dx > 0, Dy > 0, Dy > Dx (forward, lhs) */
bool rvrsoctant2(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    di = lhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                INC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    SUB(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant7: Dx < 0, Dy > 0, Dy > Dx (forward, lhs) */
bool rvrsoctant7(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    di = lhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                DEC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    SUB(di, 2);
    ax = di;
    lhsptr = ax;
    ADD(ax, 400);
    rhsptr = ax;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant3: Dx > 0, Dy < 0, Dy > Dx (reverse dir, rhs) */
bool rvrsoctant3(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    STD;
    di = rhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                INC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    ADD(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    CLD;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* RvrsOctant6: Dx < 0, Dy < 0, Dy > Dx (reverse dir, rhs) */
bool rvrsoctant6(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);
    STD;
    di = rhsptr;
    cx = dx;
    bx = bp;
    SHR(bx, 1);
    ADC(bx, 0);
    si = bp;
    INC(si);
    if (cx != 0) {
        for (;;) {
            { STOSW; }
            DEC(si);
            SUB(bx, dx);
            if (CF || ZF) {
                ADD(bx, bp);
                DEC(ax);
                if (--cx == 0) break;
            }
        }
    }
    cx = si;
    REP STOSW;
    ADD(di, 2);
    ax = di;
    rhsptr = ax;
    SUB(ax, 400);
    lhsptr = ax;
    CLD;
    POP(si);
    m2c::RETN_(0, _state);
    return true;
}

/* ------------------------------------------------------------------ */
/* shared fill loop — IntoPolyFill through PolyDone.                    */
/* rvrs selects the RvrsOctant table; the octant index bit layout is    */
/* b2 = sign Dx, b1 = sign Dy, b0 = |Dx| > |Dy|, matching the tables'   */
/* {2,1,3,4,7,8,6,5} entry order.                                       */
/* ------------------------------------------------------------------ */

static bool into_poly_fill(m2c::_STATE* _state, bool rvrs) {
    X86_REGREF
    octantbase = ax;
    LODSW;
    oldx = ax;
    LODSW;
    oldy = ax;
    miny = ax;
    maxy = ax;
    bx = ax;
    SHL(bx, 1);

    ax = m2c::near_offset_external(rhsx);
    ADD(ax, bx);
    rhsptr = ax;
    di = ax;
    ax = oldx;
    { STOSW; }

    ax = m2c::near_offset_external(lhsx);
    ADD(ax, bx);
    lhsptr = ax;
    di = ax;
    ax = oldx;
    { STOSW; }

polyloop:
    LODSW;
    TEST(ax, ax);
    if (SF) {                           /* js PolyDone */
        INC(polycount);
        bp = fillvector;
        bool handled = false;
        return m2c::dispatch_external_code((m2c::_offsets)bp, _state, &handled);
    }
    dx = ax;
    newx = ax;
    LODSW;
    bp = ax;
    newy = ax;

    CMP(bp, miny);
    if (CF) {                           /* jb: new y min */
        miny = bp;
        bx = bp;
        SHL(bx, 1);
        *(dw*)(((db*)lhsx) + bx) = dx;
        *(dw*)(((db*)rhsx) + bx) = dx;
    }
    CMP(bp, maxy);
    if (!CF && !ZF) {                   /* ja: new y max */
        maxy = bp;
        bx = bp;
        SHL(bx, 1);
        *(dw*)(((db*)lhsx) + bx) = dx;
        *(dw*)(((db*)rhsx) + bx) = dx;
    }

    SUB(bp, oldy);                      /* bp = Dy */
    if (!ZF) {
        SUB(dx, oldx);                  /* dx = Dx */
        SHL(dx, 1);
        RCL(di, 1);                     /* b2 = sign Dx */
        SHL(bp, 1);
        RCL(di, 1);                     /* b1 = sign Dy */
        SAR(dx, 1);
        SAR(bp, 1);

        XCHG(dx, bp);
        ax = dx;
        CWD;
        XOR(ax, dx);
        SUB(ax, dx);                    /* ax = abs(Dy) */
        XCHG(ax, bp);
        CWD;
        XOR(ax, dx);
        SUB(ax, dx);                    /* ax = abs(Dx) */
        dx = ax;
        CMP(bp, dx);                    /* cf = 1 if |Dx| > |Dy| */
        RCL(di, 1);
        AND(di, 7);
        SHL(di, 1);

        /* call di — OctantBase[di]: tables are {2,1,3,4,7,8,6,5} */
        static m2c::m2cf* const oct_tab[8] = {
            octant2, octant1, octant3, octant4,
            octant7, octant8, octant6, octant5};
        static m2c::m2cf* const rvr_tab[8] = {
            rvrsoctant2, rvrsoctant1, rvrsoctant3, rvrsoctant4,
            rvrsoctant7, rvrsoctant8, rvrsoctant6, rvrsoctant5};
        ax = oldx;
        if (!m2c::CALL_((rvrs ? rvr_tab : oct_tab)[di >> 1], _state, 0))
            return false;
    } else {
        /* Horizontal: a duplicate x is ignored; the new x may not bisect */
        /* the current horizontal span on either side.                   */
        CMP(dx, oldx);
        if (ZF) goto polycont;          /* duplicate point */
        if (!CF) {
            /* RhsHoz: left-to-right — new x > rh x, or < lh x -> store */
            di = rhsptr;
            ax = dx;
            CMP(ax, *(dw*)m2c::raddr_(ds, di));
            if (!CF && !ZF) {           /* ja SetRHPoint */
                { STOSW; }
            } else {
                CMP(ax, *(dw*)m2c::raddr_(ds, (dw)(di - 400)));
                if (CF) {               /* jb: new x < lh x */
                    { STOSW; }
                }
            }
        } else {
            /* LhsHoz: right-to-left — new x < lh x, or > rh x -> store */
            di = lhsptr;
            ax = dx;
            CMP(ax, *(dw*)m2c::raddr_(ds, di));
            if (CF) {                   /* jb SetLHPoint */
                { STOSW; }
            } else {
                CMP(ax, *(dw*)m2c::raddr_(ds, (dw)(di + 400)));
                if (!CF && !ZF) {       /* ja: new x > rh x */
                    { STOSW; }
                }
            }
        }
    }

polycont:
    ax = newx;
    oldx = ax;
    ax = newy;
    oldy = ax;
    goto polyloop;
}

/* ------------------------------------------------------------------ */
/* the six far fill entries — xlat colour, select vector + table,       */
/* then tail-enter the shared loop (PolyDone's jmp bp never returns).   */
/* ------------------------------------------------------------------ */

bool polyfill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _polyfill;
    fillvector = ax;
    ax = m2c::near_offset_external(octant);
    return into_poly_fill(_state, false);
}

bool meshfill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _meshfill;
    fillvector = ax;
    ax = m2c::near_offset_external(octant);
    return into_poly_fill(_state, false);
}

bool smokefill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _smokefill;
    fillvector = ax;
    ax = m2c::near_offset_external(octant);
    return into_poly_fill(_state, false);
}

bool rvrspolyfill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _polyfill;
    fillvector = ax;
    ax = m2c::near_offset_external(rvrsoctant);
    return into_poly_fill(_state, true);
}

bool rvrsmeshfill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _meshfill;
    fillvector = ax;
    ax = m2c::near_offset_external(rvrsoctant);
    return into_poly_fill(_state, true);
}

bool rvrssmokefill(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = m2c::near_offset_external(palette);
    XLAT;
    ah = al;
    *(dw*)(&fillcol) = ax;
    ax = _smokefill;
    fillvector = ax;
    ax = m2c::near_offset_external(rvrsoctant);
    return into_poly_fill(_state, true);
}

/* ------------------------------------------------------------------ */
/* PolyLine — draw lines from a coord list via the driver LineDraw.     */
/* pass: al = colour, si -> x1, x2, y1|y2 packed, ... , -1 terminator.  */
/* ------------------------------------------------------------------ */

bool polyline(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    tempcol[0] = al;
    for (;;) {
        LODSW;
        CMP(ax, 0xffff);
        if (ZF) break;                  /* end of list */
        cx = ax;
        LODSW;
        dx = ax;
        LODSW;
        bx = ax;
        al = tempcol[0];
        PUSH(si);
        CALLF(linedraw, 0);
        POP(si);
    }
    return m2c::RETF_(0, _state);
}
