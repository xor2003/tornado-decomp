/* decomp_ground.cpp — clean-C rewrites of VISUAL/GROUND procedures.
 * Semantics from the authoritative VISUAL/GROUND.ASM source. */

#include "ground.h"

#define OBJ(si_) ((objectdata*)raddr(ds, (si_)))

/* CalcObjectPos1 — copy object posn.  pass si = object ptr;
 * ret XPos/YPos/ZPos.  kill: ax,flags */
bool calcobjectpos1(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawgndobject(_i, _state);   /* dispatch-door forward */
    ax = OBJ(si)->obj_xpos;
    xpos = ax;
    ax = OBJ(si)->obj_ypos;
    ypos = ax;
    ax = OBJ(si)->obj_zpos;
    zpos = ax;
    return m2c::RETN_(0, _state);
}

/* CalcObjectPos2/4/8/16 — overscaled variants: grid-table position when
 * Valid1_n set, else scaled OBJ_XPOS fallback.  sc = shift count. */
#define OBJPOS(sc, valid, xe, ye, ze, fail)                                    \
    al = (valid);                               /* n * overscaled vars valid?*/ \
    if (!(al & al)) goto fail;                  /* jz — no -> */               \
    ax = OBJ(si)->obj_userw1;                   /* OBJ_XGRID[si] */            \
    SUB(ax, 64*2);                              /* centre index around zero */\
    for (int _i_ = 0; _i_ < (sc); ++_i_) SHL(ax, 1);                          \
    ADD(ax, 64*2);                              /* around sector grid ctr */  \
    if ((dw)ax > (dw)(128*2)) goto fail;        /* ja — index out of range */ \
    bx = ax;                                                                   \
    ax = OBJ(si)->obj_userw2;                   /* OBJ_YGRID[si] */            \
    SUB(ax, 64*2);                                                             \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SHL(ax, 1);                          \
    ADD(ax, 64*2);                                                             \
    if ((dw)ax > (dw)(128*2)) goto fail;                                      \
    di = ax;                                                                   \
    ax = (dw)(xe);                                                             \
    ADD(ax, *(dw*)(((db*)&xsx) + bx));                                        \
    ADD(ax, *(dw*)(((db*)&xsy) + di));                                        \
    xpos = ax;                                                                 \
    ax = (dw)(ye);                                                             \
    ADD(ax, *(dw*)(((db*)&ysx) + bx));                                        \
    ADD(ax, *(dw*)(((db*)&ysy) + di));                                        \
    ypos = ax;                                                                 \
    ax = (dw)(ze);                                                             \
    ADD(ax, *(dw*)(((db*)&zsx) + bx));                                        \
    ADD(ax, *(dw*)(((db*)&zsy) + di));                                        \
    zpos = ax;                                                                 \
    return m2c::RETN_(0, _state);                                              \
fail:                                                                          \
    ax = OBJ(si)->obj_xpos;                                                    \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SHL(ax, 1);                          \
    xpos = ax;                                                                 \
    ax = OBJ(si)->obj_ypos;                                                    \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SHL(ax, 1);                          \
    ypos = ax;                                                                 \
    ax = OBJ(si)->obj_zpos;                                                    \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SHL(ax, 1);                          \
    zpos = ax;                                                                 \
    return m2c::RETN_(0, _state)

bool calcobjectpos2(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawgndobject(_i, _state);   /* dispatch-door forward */
    OBJPOS(1, valid1_2, xe01_2, ye01_2, ze01_2, fixobjpos2);
}

bool calcobjectpos4(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawgndobject(_i, _state);   /* dispatch-door forward */
    OBJPOS(2, valid1_4, xe01_4, ye01_4, ze01_4, fixobjpos4);
}

bool calcobjectpos8(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawgndobject(_i, _state);   /* dispatch-door forward */
    OBJPOS(3, valid1_8, xe01_8, ye01_8, ze01_8, fixobjpos8);
}

bool calcobjectpos16(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawgndobject(_i, _state);   /* dispatch-door forward */
    OBJPOS(4, valid1_16, xe01_16, ye01_16, ze01_16, fixobjpos16);
}
