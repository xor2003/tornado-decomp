/* decomp_hills.cpp — clean-C rewrites of VISUAL/HILLS procedures.
 *
 * Semantics from the authoritative VISUAL/HILLS.ASM source and its
 * original comments.  All CalcZ*Pos procs are NEAR — bodies end with
 * RETN_(0), consuming the caller's pushed return tag exactly like `ret`.
 *
 * CalcZ*Pos family: eye-coords of a sector's 9 spot heights (ZA..ZI).
 *     bl = HillLayerN[bp + off]          ; spot/crease byte
 *     and bx,0fh / shl bx,1              ; *2 word index
 *     per axis: ax = <grid terms> + <x|y|z>sz[bx]; sar ax,cl;
 *               ax += OBJ_<X|Y|Z>SECPOS[si]; <X|Y|Z>e[di] = ax
 * The grid terms address XSX/XSY/XSZ[] (and Y/Z families) at the fixed
 * rotated-grid byte offsets the lifted code resolved ($MID-$8192 = +64,
 * $MID+$8192 = +192); OBJ_xSECPOS are the OBJECTDATA record's userw
 * fields (XSEC=userw1, YSEC=userw2, ZSEC=userw3).
 */

#include "hills.h"

/* one axis of the spot-height computation, flag-exact:
 *   ax = [g1 +] [g2 +] spot[bx]; sar ax,cl; ax += sec; out[di] = ax
 * o1/o2 are byte offsets into the grid arrays; 0 marks an absent term. */
static void zaxis(m2c::_STATE* _state,
                  dw& g1, int o1, dw& g2, int o2,
                  dw& spot, dw sec, dw* outp, dd di_) {
    X86_REGREF
    if (o1) {
        ax = *(dw*)(((db*)&g1) + o1);
        if (o2)
            ADD(ax, *(dw*)(((db*)&g2) + o2));
        ADD(ax, *(dw*)(((db*)&spot) + bx));
    } else {
        ax = *(dw*)(((db*)&spot) + bx);       /* mov ax,<x|y|z>sz[bx] */
    }
    SAR(ax, cl);
    ADD(ax, sec);
    *(dw*)(((db*)outp) + di_) = ax;
}

/* prologue shared by all nine: bl = HillLayerN[bp + off] masked to a
 * spot-height word index */
#define ZPOS_HEAD(layer, off)                       \
    X86_REGREF                                      \
    bl = *((&layer) + bp + (off));                  \
    AND(bx, 0x0000f);                               \
    SHL(bx, 1)

#define SEC(n) \
    *(dw*)(((db*)&((objectdata*)raddr(ds, si))->obj_userw##n))

/* CalcZAPos — quad centre: xsx[64]+xsy[192]+xsz[bx] per axis family */
bool calczapos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer1, 0);
    zaxis(_state, xsx, 64,  xsy, 192, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 64,  ysy, 192, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 64,  zsy, 192, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZBPos — right edge: ?s?[192] + ?sz[bx] only */
bool calczbpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer2, 0);
    zaxis(_state, xsy, 192, xsy, 0, xsz, SEC(1), &xe, di);
    zaxis(_state, ysy, 192, ysy, 0, ysz, SEC(2), &ye, di);
    zaxis(_state, zsy, 192, zsy, 0, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZCPos — quad centre east: xsx[192]+xsy[192]+xsz[bx] */
bool calczcpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer1, 1);
    zaxis(_state, xsx, 192, xsy, 192, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 192, ysy, 192, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 192, zsy, 192, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZDPos — left edge: xsx[64]+xsz[bx] */
bool calczdpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer3, 0);
    zaxis(_state, xsx, 64, xsx, 0, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 64, ysx, 0, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 64, zsx, 0, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZEPos — corner: spot height alone */
bool calczepos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer4, 0);
    zaxis(_state, xsz, 0, xsz, 0, xsz, SEC(1), &xe, di);
    zaxis(_state, ysz, 0, ysz, 0, ysz, SEC(2), &ye, di);
    zaxis(_state, zsz, 0, zsz, 0, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZFPos — right edge south: xsx[192]+xsz[bx] */
bool calczfpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer3, 1);
    zaxis(_state, xsx, 192, xsx, 0, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 192, ysx, 0, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 192, zsx, 0, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZGPos — quad centre west: xsx[64]+xsy[64]+xsz[bx] */
bool calczgpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer1, 32);
    zaxis(_state, xsx, 64, xsy, 64, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 64, ysy, 64, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 64, zsy, 64, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZHPos — left edge north: xsy[64]+xsz[bx] */
bool calczhpos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer2, 32);
    zaxis(_state, xsy, 64, xsy, 0, xsz, SEC(1), &xe, di);
    zaxis(_state, ysy, 64, ysy, 0, ysz, SEC(2), &ye, di);
    zaxis(_state, zsy, 64, zsy, 0, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}

/* CalcZIPos — corner NE: xsx[192]+xsy[64]+xsz[bx] */
bool calczipos(m2c::_offsets, m2c::_STATE* _state) {
    ZPOS_HEAD(hilllayer1, 33);
    zaxis(_state, xsx, 192, xsy, 64, xsz, SEC(1), &xe, di);
    zaxis(_state, ysx, 192, ysy, 64, ysz, SEC(2), &ye, di);
    zaxis(_state, zsx, 192, zsy, 64, zsz, SEC(3), &ze, di);
    return m2c::RETN_(0, _state);
}
