// Clean-C rewrites of JETTISON procedures. JETTISON.ASM remains the
// authoritative source; these replace the generated lifted bodies one
// procedure at a time while preserving register/flag/data semantics.

#include "jettison.h"

//* JetExtStores - jettison external stores
//*
//* pass: nothing
//* ret : nothing
//* kill: assume all
bool jetextstores(m2c::_offsets _i, struct m2c::_STATE* _state)
{
    X86_REGREF

    /* cmp Jettison,JET_EXT_STORES ;already jettisoned? */
    CMP(jettison, jet_ext_stores);
    /* jae @F                   ;yes -> */
    if (!CF) goto done;

    /* call Jettison2 */
    CALL(jetexttanks, m2c::kjettison2);

    /* mov Jettison,JET_EXT_STORES */
    jettison = jet_ext_stores;

done:
    return m2c::RETN_(0, _state);
}
