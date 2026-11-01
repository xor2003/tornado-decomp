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
bool checktimeout(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
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
