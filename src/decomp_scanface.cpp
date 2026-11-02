/* decomp_scanface.cpp — clean-C rewrites of VISUAL/SCANFACE procedures.
 * Semantics from the authoritative VISUAL/SCANFACE.ASM source. */

#include "scanface.h"

/* Illegal — recover the draw-abort stack and flag the error.
 * kill: sp,flags */
bool illegal(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return gosub(_i, _state);           /* dispatch-door forward */
    sp = drawrecover;                           /* recover stack to abort */
    STC;                                        /* cf = 1 = error */
    return m2c::RETN_(0, _state);
}
