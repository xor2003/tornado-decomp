/* decomp_dronelib.cpp — clean-C rewrites of TORNADO/DRONELIB procedures.
 *
 * Semantics from the authoritative TORNADO/DRONELIB.ASM source and its
 * original comments.
 *
 * si points at a MOBILE + VIEWPOINT + drone-type compound record; the
 * _*_VTAS fields address it as (rec*)raddr(ds, si + 6 + 18).
 */

#include "dronelib.h"

/* GetDroneSpeed — ax = speed of the mobile at si: Vtas for the Tornado
 * (M_MOBILE), OppVtas for the two-player opponent (OPP_MOBILE), else
 * the drone record's type-specific speed field (_AC_VTAS / _HC_VTAS),
 * else 0.
 * kill: ax, flags */
bool getdronespeed(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* sort Tornado */
    CMP(si, m2c::near_offset_external(m_mobile));
    if ((dw)si == (dw)(m2c::near_offset_external(m_mobile))) {
        ax = vtas;
        return m2c::RETF_(0, _state);
    }
    /* sort two player opponent */
    CMP(si, m2c::near_offset_external(opp_mobile));
    if ((dw)si == (dw)(m2c::near_offset_external(opp_mobile))) {
        ax = oppvtas;
        return m2c::RETF_(0, _state);
    }
    /* fetch drone type */
    ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds, (6+18)+si))->drone_type)));
    /* sort aircraft */
    CMP(ax, 2);                                /* DRONE_AIRCRAFT */
    if ((dw)ax == 2) {
        ax = m2c::getdata(*(dw*)(((db*)&((aircraft*)raddr(ds, (6+18)+si))->ac_vtas)));
        return m2c::RETF_(0, _state);
    }
    /* sort helicopter */
    CMP(ax, 4);                                /* DRONE_HELICOPT */
    if ((dw)ax == 4) {
        ax = m2c::getdata(*(dw*)(((db*)&((helicopter*)raddr(ds, (6+18)+si))->hc_vtas)));
        return m2c::RETF_(0, _state);
    }
    /* sort default */
    XOR(ax, ax);
    return m2c::RETF_(0, _state);
}
