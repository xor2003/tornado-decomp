/* decomp_roads.cpp — clean-C rewrites of VISUAL/ROADS procedures.
 * Semantics from the authoritative VISUAL/ROADS.ASM source. */

#include "roads.h"

/* XSX[$MID][si] — $MID=128 byte offset into the dw grid tables */
#define GX(tab) (*(dw*)(((db*)&(tab)) + 128 + si))
#define GY(tab) (*(dw*)(((db*)&(tab)) + 128 + di))

/* CalcNodePos1/2/8/16 — add scaled grid deltas to XPosn/YPosn/ZPosn.
 * pass si,di = node indices; ret XPos/YPos/ZPos.  kill: ax,flags */
bool calcnodepos1(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawroads(_i, _state);       /* dispatch-door forward */
    ax = xpos1;
    ADD(ax, GX(xsx));
    ADD(ax, GY(xsy));
    xpos = ax;
    ax = ypos1;
    ADD(ax, GX(ysx));
    ADD(ax, GY(ysy));
    ypos = ax;
    ax = zpos1;
    ADD(ax, GX(zsx));
    ADD(ax, GY(zsy));
    zpos = ax;
    return m2c::RETN_(0, _state);
}

bool calcnodepos2(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawroads(_i, _state);       /* dispatch-door forward */
    SAR(si, 1);                                 /* /2 x index */
    SAR(di, 1);                                 /* /2 y index */
    ax = xpos2;
    ADD(ax, GX(xsx));
    ADD(ax, GY(xsy));
    xpos = ax;
    ax = ypos2;
    ADD(ax, GX(ysx));
    ADD(ax, GY(ysy));
    ypos = ax;
    ax = zpos2;
    ADD(ax, GX(zsx));
    ADD(ax, GY(zsy));
    zpos = ax;
    return m2c::RETN_(0, _state);
}

bool calcnodepos8(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawroads(_i, _state);       /* dispatch-door forward */
    for (int _i_ = 0; _i_ < 3; ++_i_) {         /* REPT 3 */
        SAR(si, 1);                             /* /8 x index */
        SAR(di, 1);                             /* /8 y index */
    }
    ax = xpos8;
    ADD(ax, GX(xsx));
    ADD(ax, GY(xsy));
    xpos = ax;
    ax = ypos8;
    ADD(ax, GX(ysx));
    ADD(ax, GY(ysy));
    ypos = ax;
    ax = zpos8;
    ADD(ax, GX(zsx));
    ADD(ax, GY(zsy));
    zpos = ax;
    return m2c::RETN_(0, _state);
}

bool calcnodepos16(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawroads(_i, _state);       /* dispatch-door forward */
    for (int _i_ = 0; _i_ < 4; ++_i_) {         /* REPT 4 */
        SAR(si, 1);                             /* /16 x index */
        SAR(di, 1);                             /* /16 y index */
    }
    ax = xpos16;
    ADD(ax, GX(xsx));
    ADD(ax, GY(xsy));
    xpos = ax;
    ax = ypos16;
    ADD(ax, GX(ysx));
    ADD(ax, GY(ysy));
    ypos = ax;
    ax = zpos16;
    ADD(ax, GX(zsx));
    ADD(ax, GY(zsy));
    zpos = ax;
    return m2c::RETN_(0, _state);
}
