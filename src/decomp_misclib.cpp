/* decomp_misclib.cpp — clean-C rewrites of LIB8086/MISCLIB procedures.
 *
 * Semantics are taken from the authoritative LIB8086/MISCLIB.ASM
 * source and verified against the lifted C++.  Strong symbols override
 * the weak lifted entry points; each body ends with RETF_(0) so the
 * caller's pushed return tag is consumed like a far `ret`.
 *
 * Only the deterministic plain-spec procs are rewritten here; the
 * ctx/postpone/array-class procs (Cls, QuickSetUp, DrawRectangle,
 * PrintEGASpace, RunLenDecode, SelectMode) depend on the display
 * environment and stay lifted.
 */
#include "misclib.h"

/* CalcBitFieldVal - calc value of bit field.
 * pass: ax = bit field mask, dx = status word
 * ret : ax = bit field value (0 on error)
 *
 * The status bit position is taken relative to the mask's lowest set
 * bit; MINM forces the result to 0 when the subtraction borrows.
 * cx/dx are preserved by pushes as in the original. */
bool calcbitfieldval(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return cls(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */

    PUSH(cx);
    PUSH(dx);

    AND(dx, ax);                        /* clear unwanted bits */

    /* calc position of status bit (b0 .. b15) */
    cx = 15;
    do {
        SHL(dx, 1);                     /* (msb into cf) */
        if (CF) break;
    } while (--cx);
    dx = cx;                            /* 0 .. 15 = b0 .. b15 */

    /* calc position of first bit of bit field mask */
    cx = 15;
    do {
        SHR(ax, 1);                     /* (lsb into cf) */
        if (CF) break;
    } while (--cx);
    ax = 15;
    SUB(ax, cx);                        /* 0 .. 15 = b0 .. b15 */

    XCHG(ax, dx);
    SUB(ax, dx);                        /* status bit pos wrt first bit pos */

    /* MINM ax: return ax = 0 if error (borrow => negative result) */
    CMC;
    RCR(ax, 1);
    CWD;
    RCL(ax, 1);
    AND(ax, dx);                        /* exit flags = and */

    POP(dx);
    POP(cx);
    return m2c::RETF_(0, _state);
}

/* TestBitStatus - test bit status.
 * pass: ax = bit mask, dx = status; ret : ax = 0 or 1; kill: flags. */
bool testbitstatus(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    TEST(dx, ax);
    ax = ZF ? 0 : 1;                    /* mov ax,0/1 — exit flags = test */
    return m2c::RETF_(0, _state);
}
