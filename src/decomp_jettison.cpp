/* decomp_jettison.cpp — clean-C rewrites of TORNADO/JETTISON procedures.
 * Semantics from the authoritative TORNADO/JETTISON.ASM source. */

#include "jettison.h"

/* JetExtTanks — jettison external fuel tanks (once).
 * kill: assume all */
bool jetexttanks(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return jetall(_i, _state);          /* dispatch-door forward */
    CMP(jettison, jet_ext_tanks);               /* already jettisoned? */
    if ((dw)jettison >= (dw)jet_ext_tanks) goto exitjettanks;  /* yes -> */
    CALL(jetall, m2c::kjettison1);              /* call Jettison1 */
    jettison = jet_ext_tanks;
exitjettanks:
    return m2c::RETN_(0, _state);
}
