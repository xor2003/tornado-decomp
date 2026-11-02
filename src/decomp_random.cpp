/* decomp_random.cpp — clean-C rewrites of LIB8086/RANDOM procedures.
 *
 * Semantics are taken from the authoritative LIB8086/RANDOM.ASM source
 * (with its original comments) and verified against the lifted C++.
 * Each function is a strong symbol overriding the weak lifted entry
 * point for direct CALL/CALLF sites; the body ends with RETF_(0) so the
 * caller's pushed return tag is consumed exactly like a far `ret`.
 *
 * The diff harness compares result flags, so a rewrite must reproduce
 * the flag residue the asm's flag-affecting ops would leave.  For
 * RandX that is the last sal/rcl pair of round 8 (rcl does not touch
 * SF/ZF/PF/AF); randx_step8() reports the inputs of the final round so
 * callers can replay the real flag macros on throwaway temporaries.
 */
#include "random_m2c.h"

namespace {

/* The 8-round Galois-style LFSR used by RandX:
 *   each round: if SeedHi sign bit set, SeedLo ^= 0xB553 and the low
 *   byte of SeedHi ^= 0x76; then the 32-bit SeedHi:SeedLo pair shifts
 *   left one bit (sal lo; rcl hi).
 * Returns the new SeedHi high byte — RandX's ax result. */
inline uint16_t randx_step8() {
    uint16_t lo = seedlo, hi = seedhi;
    for (int i = 0; i < 8; ++i) {
        if (hi & 0x8000) {
            lo = (uint16_t)(lo ^ 0xB553);
            hi = (uint16_t)(hi ^ 0x0076);   /* xor dl,076h — low byte only */
        }
        const uint16_t carry = (uint16_t)(lo >> 15);
        lo = (uint16_t)(lo << 1);
        hi = (uint16_t)((hi << 1) | carry);
    }
    seedlo = lo;
    seedhi = hi;
    return (uint16_t)(hi >> 8);
}

} /* namespace */

/* RandX - generate 8-bit random number.
 * pass: SeedLo, SeedHi; ret: ax = random number (0..255), SeedLo, SeedHi.
 * Exit flags come from `mov al,dh; xor ah,ah` (the last flag op). */
bool randx(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = randx_step8();
    XOR(ah, ah);                            /* xor ah,ah — flags */
    return m2c::RETF_(0, _state);
}

/* FastRandX - lookup 8-bit random number from the precomputed table.
 * pass: RndIndex; ret: ax = random number, RndIndex++. */
bool fastrandx(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return randx(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */
    ax = rndtable[rndindex[0]];             /* xlat: al = ds:[bx+al] */
    XOR(ah, ah);                            /* xor ah,ah — flags */
    INC(rndindex[0]);                       /* inc RndIndex — flags */
    return m2c::RETF_(0, _state);
}

/* ReSeed - reseed the generator from RTC time+date and Ticker,
 * then refill RndTable and randomise RndIndex. */
bool reseed(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    ah = 2;
    m2c::asm2C_INT(_state, 0x1a);        /* RTC time -> cx,dx */
    uint16_t t = (uint16_t)ticker;
    ADD(t, cx);
    ADD(t, dx);

    ah = 4;
    m2c::asm2C_INT(_state, 0x1a);        /* RTC date -> cx,dx */
    ADD(t, cx);
    ADD(t, dx);

    if (t == 0) t = 0x5B7D;              /* jnz SeedOk */
    seedlo = t;
    seedhi = (uint16_t)~t;

    for (int i = 0; i < 256; ++i)        /* refill RndTable via RandX */
        rndtable[i] = (uint8_t)randx_step8();
    rndindex[0] = (uint8_t)randx_step8(); /* randomise RndIndex */
    XOR(ah, ah);                            /* exit flags = RandX's `xor ah,ah` */

    return m2c::RETF_(0, _state);
}
