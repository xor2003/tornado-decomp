/* decomp_com_clip.cpp — clean-C rewrites of VISUAL/COM_CLIP procedures.
 * Semantics from the authoritative VISUAL/COM_CLIP.ASM source. */

#include "com_clip.h"

/* CalcOCode — pass ax = x, bx = y, cx = z;
 * ret al = clip outcode, zf = 1 = visible (al == 0).
 * kill: ax,bp,flags */
bool calcocode(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return calccrt(_i, _state);         /* dispatch-door forward */
    bp = ax;
    CMP(bx, 1);                                 /* behind? */
    if (SF != OF) goto yneg1;                   /* jl — yes -> */
    XOR(al, al);                                /* init in front outcode */
    TEST(bp, bp);                               /* x left or right? */
    if (SF) goto xneg1;                         /* js — left -> */
    CMP(bp, bx);                                /* x <= y? */
    if (CF || ZF) goto checkzy1;                /* jbe — yes -> */
    OR(al, 0x02);                               /* set clip right flag */
    goto checkzy1;
xneg1:
    NEG(bp);                                    /* abs(x) */
    CMP(bp, bx);                                /* x <= y? */
    if (CF || ZF) goto checkzy1;                /* jbe — yes -> */
    OR(al, 0x01);                               /* set clip left flag */
checkzy1:
    TEST(cx, cx);                               /* z above or below? */
    if (SF) goto zneg1;                         /* js — below -> */
    CMP(cx, bx);                                /* z <= y? */
    if (CF || ZF) goto ocodeexit;               /* jbe — yes -> */
    OR(al, 0x08);                               /* set clip above flag */
    goto ocodeexit;
zneg1:
    NEG(cx);                                    /* abs(z) */
    CMP(cx, bx);                                /* z <= y? */
    if (CF || ZF) goto ocodeexit;               /* jbe — yes -> */
    OR(al, 0x04);                               /* set clip below flag */
    goto ocodeexit;
yneg1:
    NEG(bx);                                    /* abs(y) */
    al = 0x8f;                                  /* init behind outcode */
    TEST(bp, bp);                               /* x left or right? */
    if (SF) goto xneg2;                         /* js — left -> */
    CMP(bp, bx);                                /* x <= y? */
    if (CF || ZF) goto checkzy2;                /* jbe — yes -> */
    AND(al, 0x8e);                              /* set clip right flag */
    goto checkzy2;
xneg2:
    NEG(bp);                                    /* abs(x) */
    CMP(bp, bx);                                /* x <= y? */
    if (CF || ZF) goto checkzy2;                /* jbe — yes -> */
    AND(al, 0x8d);                              /* set clip left flag */
checkzy2:
    TEST(cx, cx);                               /* z above or below? */
    if (SF) goto zneg2;                         /* js — below -> */
    CMP(cx, bx);                                /* z <= y? */
    if (CF || ZF) goto ocodeexit;               /* jbe — yes -> */
    AND(al, 0x8b);                              /* set clip above flag */
    goto ocodeexit;
zneg2:
    NEG(cx);                                    /* abs(z) */
    CMP(cx, bx);                                /* z <= y? */
    if (CF || ZF) goto ocodeexit;               /* jbe — yes -> */
    AND(al, 0x87);                              /* set clip below flag */
ocodeexit:
    TEST(al, al);                               /* zf = 1 = visible */
    return m2c::RETN_(0, _state);
}
