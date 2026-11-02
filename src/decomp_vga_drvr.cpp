/* decomp_vga_drvr.cpp — clean-C rewrites of LIB8086/VGA_DRVR procedures.
 * Semantics from the authoritative LIB8086/VGA_DRVR.ASM source. */

#include "vga_drvr.h"

/* VGA_CalcAddr — pass bl = y row, cx = x; ret di = byte offset
 * (y*80 + x/4) into the 4-plane VGA buffer.  kill: ax,di,flags */
bool vga_calcaddr(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return vga_sfill(_i, _state);       /* dispatch-door forward */
    al = bl;
    XOR(ah, ah);
    SHL(ax, 1); SHL(ax, 1); SHL(ax, 1); SHL(ax, 1);  /* *16 */
    di = ax;
    SHL(ax, 1); SHL(ax, 1);                     /* *64 */
    ADD(di, ax);                                /* *80 */
    ax = cx;
    SHR(ax, 1); SHR(ax, 1);                     /* /4 */
    ADD(di, ax);
    return m2c::RETN_(0, _state);
}
