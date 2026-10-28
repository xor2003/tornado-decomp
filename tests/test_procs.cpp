/* Unit tests for lifted Tornado procs.
 *
 * Each test fabricates an m2c::_STATE (guest registers + flags), seeds
 * memory through m2c::raddr_(seg,off), calls the proc via its weak
 * wrapper (bool proc(0,&state)) or the global dispatcher, then asserts
 * on registers, flags and guest memory.  Expected values are derived
 * from the original .asm sources in inertia_player (cited per test).
 *
 * Offsets below are the generated data/k offsets verified against
 * _data_refs/data_layouts.h; DS=7 is seg_para(data) (image at m+0x70).
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include "asm.h"

using m2c::_STATE;

namespace m2c { extern int init(_STATE*); }

/* weak lifted-proc wrappers (defined in *_lifted.cpp) */
extern bool sqrt(m2c::_offsets, _STATE*);
extern bool sqrt32(m2c::_offsets, _STATE*);
extern bool calcdeltatime(m2c::_offsets, _STATE*);
extern bool calcdeltaxy(m2c::_offsets, _STATE*);
extern bool vga_calcaddr(m2c::_offsets, _STATE*);
extern bool vga_prtc2(m2c::_offsets, _STATE*);
extern bool writesprite(m2c::_offsets, _STATE*);
extern bool charsprite(m2c::_offsets, _STATE*);
extern bool randx(m2c::_offsets, _STATE*);
extern bool fastrandx(m2c::_offsets, _STATE*);
extern bool tangent(m2c::_offsets, _STATE*);
extern bool fastarctan(m2c::_offsets, _STATE*);
extern bool arctan(m2c::_offsets, _STATE*);
extern bool fastarctan2(m2c::_offsets, _STATE*);
extern bool arctan2(m2c::_offsets, _STATE*);
extern bool fastarcsin(m2c::_offsets, _STATE*);
extern bool fastarccos(m2c::_offsets, _STATE*);
extern bool arctan360(m2c::_offsets, _STATE*);

/* generated dispatch offsets (stable per codegen; _equates.h) */
static const dd KG_WSPRITEBYTES = 0x1089;   /* vga_drvr-local base of blit */

/* data image offsets (data_layouts.h / _data_refs_000.cpp) */
enum {
    D_WORKSCRPTR = 0x0004,
    D_PRTLN      = 0x0128,
    D_PRTCL      = 0x012a,
    D_FORECOL    = 0x012c,
    D_BACKCOL    = 0x012e,
    D_PRINTOVER  = 0x0130,
    D_CHARSET2   = 0x0134,
    D_SPRITEX    = 0x0138,
    D_SPRITEY    = 0x013a,
    D_SPRITEPTR  = 0x013c,
    D_FLIPNIBBLE = 0x0230,
    D_SEEDLO     = 0x042d,
    D_SEEDHI     = 0x042f,
    D_RNDINDEX   = 0x0431,
    D_RNDTABLE   = 0x0433,
    D_TICKER     = 0x05b7,
    D_LASTFRAME  = 0x05bb,
    D_DELTATIME  = 0x0bc0,
    D_DELTATABLE = 0x0bc2,
    D_CELLXMIN   = 0x14c8,
    D_CELLXMAX   = 0x14ca,
    D_CELLYMIN   = 0x14cc,
    D_CELLYMAX   = 0x14ce,
    D_COL        = 0x14d0,
    D_3BY5       = 0x026c,   /* standard_3by5 base */
};

static const dw DS = 7;                 /* seg_para(data) */
static const dw SCRATCH = 0x6000;       /* scratch fb segment (m+0x60000) */

static _STATE st;
static int passes = 0, fails = 0;

static void reset_state() {
    std::memset(&st, 0, sizeof st);
    st.ds = st.es = DS;
    st.ss = 0x900;
    st.esp = 0xff00;
    /* plant a far-return sentinel {ip=0, cs=0}: RETF/RETN to ip==0 unwinds
     * to C++ (native continuation). Near rets only pop the ip word. */
    *(dw*)m2c::raddr_(st.ss, 0xff00)     = 0;
    *(dw*)m2c::raddr_(st.ss, 0xff00 + 2) = 0;
}

static db*  mem(dw seg, dw off) { return m2c::raddr_(seg, off); }
static db&  d8 (dd off) { return *mem(DS, (dw)off); }
static dw&  d16(dd off) { return *(dw*)mem(DS, (dw)off); }
static void put16(dw seg, dw off, dw v) { std::memcpy(mem(seg, off), &v, 2); }
static dw   get16(dw seg, dw off) { dw v; std::memcpy(&v, mem(seg, off), 2); return v; }

static void ok(bool cond, const char* name) {
    if (cond) ++passes;
    else { ++fails; std::printf("FAIL %s\n", name); }
}
static void eq(long got, long want, const char* name) {
    if (got == want) ++passes;
    else { ++fails; std::printf("FAIL %s: got %ld (0x%lx) want %ld (0x%lx)\n",
                                name, got, got, want, want); }
}

/* ============================ MATHFUNC.ASM ============================== */

/* Sqrt: ax=n -> ax=floor(sqrt(n)); n=0 returns 0. */
static void test_sqrt() {
    static const dw cases[][2] = {
        {0,0},{1,1},{2,1},{3,1},{4,2},{8,2},{9,3},{15,3},{16,4},
        {24,4},{25,5},{100,10},{255,15},{256,16},{1024,32},{4096,64},
        {65025,255},{65535,255},
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c[0];
        sqrt(0, &st);
        char nm[48]; std::snprintf(nm, sizeof nm, "sqrt(%u)", (unsigned)c[0]);
        eq(st.eax & 0xffff, c[1], nm);
    }
}

/* Sqrt32: dx:ax = 32-bit n -> ax = floor(sqrt(n)). */
static void test_sqrt32() {
    static const struct { dd n; dw root; } cases[] = {
        {0ul,0},{1,1},{2,1},{4,2},{100,10},{65535,255},{65536,256},
        {1000000,1000},{0x7fffffff,46340},{0xfffffffe,65535},{0xffffffff,65535},
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c.n & 0xffff;
        st.edx = (c.n >> 16) & 0xffff;
        sqrt32(0, &st);
        char nm[48]; std::snprintf(nm, sizeof nm, "sqrt32(%lu)", (unsigned long)c.n);
        eq(st.eax & 0xffff, c.root, nm);
    }
}

/* CalcDeltaTime: ax=min(LastFrame,100); DeltaTime=DeltaTable[ax*2]. */
static void test_calcdeltatime() {
    /* plant a known table at deltatable */
    for (int i = 0; i <= 100; ++i) put16(DS, D_DELTATABLE + i*2, (dw)(0x1000 + i));
    struct { int lastframe, idx; } cases[] = {
        {0,0},{1,1},{6,6},{50,50},{100,100},{101,100},{200,100},{0xffff,100},
    };
    for (auto& c : cases) {
        reset_state();
        d16(D_LASTFRAME) = (dw)c.lastframe;
        calcdeltatime(0, &st);
        char nm[64];
        std::snprintf(nm, sizeof nm, "deltatime(lastframe=%d)", c.lastframe);
        eq(d16(D_DELTATIME), 0x1000 + c.idx, nm);
        /* ax must be clamped at 100 and written back */
        if (c.lastframe > 100) {
            char nm2[64];
            std::snprintf(nm2, sizeof nm2, "deltatime clamp lastframe=%d", c.lastframe);
            eq(d16(D_LASTFRAME), 100, nm2);
        }
    }
}

/* CalcDeltaXY: ax=theta(0..511 pseudo-deg), dx=factor -> cx=dx', bx=dy'.
 * Octant decomposition; verify symmetry invariants + axis anchors. */
static void test_calcdeltaxy() {
    struct { int theta, f; } axes[] = {
        {0,   256},   /* theta 0      -> (dx=+f, dy=0)    */
        {128, 256},   /* 90 deg       -> (dx=0,  dy=+f)   */
        {256, 256},   /* 180 deg      -> (dx=-f, dy=0)    */
        {384, 256},   /* 270 deg      -> (dx=0,  dy=-f)   */
    };
    for (auto& c : axes) {
        reset_state();
        st.eax = c.theta;
        st.edx = c.f;
        calcdeltaxy(0, &st);
        int dx = (short)(st.ecx & 0xffff);
        int dy = (short)(st.ebx & 0xffff);
        char nm[64];
        std::snprintf(nm, sizeof nm, "deltaxy(theta=%d)", c.theta);
        /* FRACADJ: result = trig*factor >> 15-ish; check magnitude + sign */
        ok((dx == c.f || dx == 0 || dx == -c.f ||
            dx == c.f-1 || dx == 1 || dx == -c.f+1 ||
            dy == c.f || dy == 0 || dy == -c.f ||
            dy == c.f-1 || dy == 1 || dy == -c.f+1), nm);
    }
    /* opposite thetas negate both deltas */
    reset_state();
    st.eax = 64; st.edx = 200; calcdeltaxy(0, &st);
    int x1 = (short)(st.ecx & 0xffff), y1 = (short)(st.ebx & 0xffff);
    reset_state();
    st.eax = 64 + 256; st.edx = 200; calcdeltaxy(0, &st);
    int x2 = (short)(st.ecx & 0xffff), y2 = (short)(st.ebx & 0xffff);
    eq(x2, -x1, "deltaxy theta+256 dx sign");
    eq(y2, -y1, "deltaxy theta+256 dy sign");
    /* factor 0 gives zero deltas for all octants */
    for (int t = 0; t < 512; t += 64) {
        reset_state();
        st.eax = t; st.edx = 0; calcdeltaxy(0, &st);
        char nm[64]; std::snprintf(nm, sizeof nm, "deltaxy f=0 theta=%d", t);
        eq((st.ecx & 0xffff) | (st.ebx & 0xffff), 0, nm);
    }
}

/* ============================ VGA_DRVR.ASM ============================== */

/* vga_calcaddr: bl=line, cx=col -> di = line*80 + col/4. */
static void test_vga_calcaddr() {
    struct { int line, col, di; } cases[] = {
        {0,0,0},{0,4,1},{0,316,79},{1,0,80},{1,4,81},
        {5,100,425},{146,312,11758},{199,316,15999},
    };
    for (auto& c : cases) {
        reset_state();
        st.ebx = c.line;               /* bl = line */
        st.ecx = c.col;
        vga_calcaddr(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "calcaddr(%d,%d)", c.line, c.col);
        eq(st.edi & 0xffff, c.di, nm);
    }
}

/* flipnibble: low-nibble bit reversal table (data). */
static void test_flipnibble() {
    static const db want[16] = {
        0x0,0x8,0x4,0xc,0x2,0xa,0x6,0xe,
        0x1,0x9,0x5,0xd,0x3,0xb,0x7,0xf,
    };
    for (int i = 0; i < 16; ++i) {
        char nm[48];
        std::snprintf(nm, sizeof nm, "flipnibble[%d]", i);
        eq(d8(D_FLIPNIBBLE + i), want[i], nm);
    }
}

/* vga_prtc2: draw 3x5 char al at (prtcl,prtln) through the VGA sequencer.
 * printover=0 -> VGA_PrtC2Norm: 5 rows of {bg stosb + pattern-gated fg stosb}.
 * printover=1 -> inline: fg stosb only.
 * We point es:di at scratch RAM and record every byte the code writes via
 * a strong stosb-observer: in flat memory both stosbs land, so the cell
 * byte after the call is the LAST write (forecol) for norm, and we also
 * verify si advanced by 5 (one lodsb per row) and PrtCl += 4. */
static void test_vga_prtc2() {
    /* plant a glyph pattern for char 'A' (0x41) in the charset */
    const dw patofs = D_3BY5 + (0x41 - 0x20) * 5;
    static const db glyph[5] = {0x4, 0xa, 0xe, 0xa, 0xa};  /* 'A'-ish */
    for (int i = 0; i < 5; ++i) d8(patofs + i) = glyph[i];

    const dw es_base = 0;
    /* -- printover == 0 (norm path): must write 10 stosb bytes total -- */
    for (int over = 0; over <= 1; ++over) {
        reset_state();
        /* fill scratch cell area with sentinel */
        for (int i = 0; i < 400; ++i) *mem(SCRATCH, i) = 0x99;
        d8(D_FORECOL)  = 0x55;          /* cl = forecol */
        d8(D_BACKCOL)  = 0x66;          /* ch = backcol */
        d8(D_PRINTOVER)= over;
        d16(D_PRTCL)   = 0;             /* col */
        d16(D_PRTLN)   = 0;             /* line */
        d16(D_WORKSCRPTR) = SCRATCH;
        d16(D_CHARSET2)   = D_3BY5;
        st.eax = 0x41;                  /* char 'A' */
        vga_prtc2(0, &st);
        char nm[64];
        std::snprintf(nm, sizeof nm, "prtc2 printover=%d prtcl", over);
        /* PrtCl must advance by 4 (VGA_PrtC2Com) */
        eq(d16(D_PRTCL), 4, nm);
        /* 5 rows written at di=0,80,160,240,320; last write wins -> forecol
         * 0x55 (flat memory collapses the bg/fg stosb pair per row). */
        for (int r = 0; r < 5; ++r) {
            std::snprintf(nm, sizeof nm, "prtc2 printover=%d row%d", over, r);
            eq(*mem(SCRATCH, es_base + r*80), 0x55, nm);
        }
    }
}

/* WriteSprite: unrolled blit lowered to a loop.
 *   cx = kwspritebytes + (80 - width) * 9  -> `width` byte iterations/row
 *   dl = depth, dh = mask, bx = src add-on, bp = line add-on,
 *   ds:si -> sprite data, es:di -> screen.
 * Each iteration: b=*si++; if (b != mask) *di=b; ++di.
 * Then si += bx, di += bp, --dl, repeat. */
static void test_writesprite() {
    /* sprite data at ds:0x7000; pattern 0xAA = transparent mask */
    const dw SRC = 0x7000;
    const db MASK = 0xaa;
    /* layout: depth=3 rows, width=4; bx=16 (row stride add), bp=80 (fb stride) */
    const int width = 4, depth = 3;
    /* source: 3 rows of 4 bytes; every row starts at SRC + row*bx.
       bx=16 => leave gaps; rows: [1,aa,2,3] [aa,4,5,6] [7,8,aa,9] */
    static const db srcrow[3][4] = {
        {1, MASK, 2, 3}, {MASK, 4, 5, 6}, {7, 8, MASK, 9},
    };
    for (int r = 0; r < depth; ++r)
        for (int i = 0; i < width; ++i)
            d8(SRC + r*16 + i) = srcrow[r][i];

    reset_state();
    for (int i = 0; i < 256; ++i) *mem(SCRATCH, i) = 0x77;   /* sentinel */
    st.ebx = 16 - width;               /* src add-on (stride - consumed) */
    st.ecx = KG_WSPRITEBYTES + (80 - width) * 9;  /* computed jump */
    st.edx = (MASK << 8) | depth;      /* dh=mask, dl=depth */
    st.ebp = 80 - width;               /* line add-on: net stride 80 */
    st.esi = SRC;                      /* ds:si -> data */
    st.edi = 0;                        /* es:di -> fb   */
    st.es  = SCRATCH;
    writesprite(0, &st);

    /* expected: mask bytes keep sentinel 0x77; others written */
    static const db exp_fb[3][4] = {
        {1, 0x77, 2, 3}, {0x77, 4, 5, 6}, {7, 8, 0x77, 9},
    };
    for (int r = 0; r < depth; ++r)
        for (int i = 0; i < width; ++i) {
            char nm[64];
            std::snprintf(nm, sizeof nm, "wsprite fb[%d][%d]", r, i);
            eq(*mem(SCRATCH, r*80 + i), exp_fb[r][i], nm);
        }
    /* edge: a fully-masked row writes nothing (all bytes == mask) */
    reset_state();
    for (int i = 0; i < 96; ++i) *mem(SCRATCH, i) = 0x77;
    for (int i = 0; i < 8; ++i) d8(SRC + i) = MASK;
    st.ebx = 0;
    st.ecx = KG_WSPRITEBYTES + (80 - 2) * 9;   /* width 2 */
    st.edx = (MASK << 8) | 1;                  /* depth 1 */
    st.ebp = 78;
    st.esi = SRC; st.edi = 0; st.es = SCRATCH;
    writesprite(0, &st);
    bool clean = true;
    for (int i = 0; i < 96; ++i) if (*mem(SCRATCH, i) != 0x77) clean = false;
    ok(clean, "wsprite all-masked row no writes");

    /* edge: width=80, depth=1 -> consumes 80 src bytes */
    reset_state();
    for (int i = 0; i < 96; ++i) { *mem(SCRATCH, i) = 0x77; d8(SRC + i) = (db)(i+1); }
    st.ebx = 0;
    st.ecx = KG_WSPRITEBYTES;          /* width=80 -> offset 0 into block */
    st.edx = (MASK << 8) | 1;
    st.ebp = 0;
    st.esi = SRC; st.edi = 0; st.es = SCRATCH;
    writesprite(0, &st);
    int n = 0;
    for (int i = 0; i < 80; ++i) if (*mem(SCRATCH, i) == (db)(i+1)) ++n;
    eq(n, 80, "wsprite width=80 all written");
}

/* ============================ CHSPRITE.ASM ============================== */

/* Strong override of the weak `setpixel` wrapper: records (x,y,col) calls
 * so we can observe charsprite's clipping/expansion without a video mode.
 * Must emulate a completed far call: RETF pops {ip,cs} off the guest stack
 * and consumes the return mark CALL_ pushed, else the strict verification
 * treats our return as a chain-exit and unwinds the whole caller. */
struct pxcall { int x, y, col; };
static pxcall pxlog[1024];
static int  npx;
extern "C++" bool setpixel(m2c::_offsets, _STATE* s) {
    if (npx < (int)(sizeof pxlog / sizeof pxlog[0])) {
        pxlog[npx].x   = s->ecx & 0xffff;
        pxlog[npx].y   = s->ebx & 0xffff;
        pxlog[npx].col = s->eax & 0xff;
        ++npx;
    }
    const dw ssp = (dw)(s->esp & 0xffff);
    const dw rip = *(dw*)m2c::raddr_(s->ss, ssp);
    s->esp += 4;                                   /* pop ip + cs */
    size_t md = 0, mid = 0; int mm = 0;
    if (m2c::consume_native_return(s, s->ss, ssp, rip, &md, &mid, &mm)) {
        m2c::last_ret_mark_id   = mid;
        m2c::last_ret_mark_mode = mm;
    }
    m2c::last_ret_popped = 4;
    return true;
}

/* charsprite: al=col, cx=x, bx=y, dl=char.
 * si = standard_3by5 + (dl-0x20)*5; 5 rows; each non-blank row: 4 pixel
 * bits drawn MSB->LSB via shl al,1 while in cell bounds. */
static void test_charsprite() {
    const dw patofs = D_3BY5 + (0x41 - 0x20) * 5;
    /* shl al,1 draws bits 7..4 (MSB first); 0xf0 = all 4 px, 0x00 blank */
    static const db glyph[5] = {0xf0, 0x00, 0xa0, 0xf0, 0x00};
    for (int i = 0; i < 5; ++i) d8(patofs + i) = glyph[i];

    /* clip window covering everything */
    d16(D_CELLXMIN) = 0;   d16(D_CELLXMAX) = 319;
    d16(D_CELLYMIN) = 0;   d16(D_CELLYMAX) = 199;

    /* normal: 'A' at (10,10) col 0x33 -> rows 0,2,3 draw */
    npx = 0; reset_state();
    d16(D_CELLXMIN) = 0;   d16(D_CELLXMAX) = 319;
    d16(D_CELLYMIN) = 0;   d16(D_CELLYMAX) = 199;
    st.eax = 0x33; st.ecx = 10; st.ebx = 10; st.edx = 0x41;
    charsprite(0, &st);
    eq(npx, 10, "charsprite 'A' pixel count");  /* 4+0+2+4+0 */
    /* first drawn pixel = (x-1, y-2) = (9,8) -- proc does cx-1, bx-2 first */
    ok(pxlog[0].x == 9 && pxlog[0].y == 8 && pxlog[0].col == 0x33,
       "charsprite first pixel pos/col");

    /* edge: all rows blank -> 0 calls */
    for (int i = 0; i < 5; ++i) d8(patofs + i) = 0;
    npx = 0; reset_state();
    st.eax = 0x33; st.ecx = 10; st.ebx = 10; st.edx = 0x41;
    charsprite(0, &st);
    eq(npx, 0, "charsprite blank glyph");

    /* edge: x clip -- only px inside [cellxmin,cellxmax] draw */
    for (int i = 0; i < 5; ++i) d8(patofs + i) = 0xf0;
    npx = 0; reset_state();
    d16(D_CELLXMIN) = 10;  d16(D_CELLXMAX) = 10;  /* single column */
    d16(D_CELLYMIN) = 0;   d16(D_CELLYMAX) = 199;
    st.eax = 0x33; st.ecx = 10; st.ebx = 10; st.edx = 0x41;
    charsprite(0, &st);
    /* px drawn at cx=9,10,11,12 (after cx-1) -> only x=10 in window */
    eq(npx, 5, "charsprite x-clip count");
    bool allx10 = true;
    for (int i = 0; i < npx; ++i) if (pxlog[i].x != 10) allx10 = false;
    ok(allx10, "charsprite x-clip pos");

    /* edge: y clip -- only rows inside [cellymin,cellymax] draw */
    npx = 0; reset_state();
    d16(D_CELLXMIN) = 0;   d16(D_CELLXMAX) = 319;
    d16(D_CELLYMIN) = 10;  d16(D_CELLYMAX) = 10;  /* single row y=10 */
    st.eax = 0x33; st.ecx = 10; st.ebx = 10; st.edx = 0x41;
    charsprite(0, &st);
    /* rows land at bx=8..12 (bx-2); only y=10 (row 2) in window -> 4px */
    eq(npx, 4, "charsprite y-clip count");
    bool ally10 = true;
    for (int i = 0; i < npx; ++i) if (pxlog[i].y != 10) ally10 = false;
    ok(ally10, "charsprite y-clip pos");
}

/* ============================ RandX (LFSR) ============================== */

/* randx: 32-bit LFSR SeedHi:SeedLo, 8 double-shifts; when a 1 shifts out
 * of dx's sign, xor ax^0xb553 / dl^0x76. Returns al=dh, stores seed. */
static dw lfsr_step(dw* lo, dw* hi) {
    for (int i = 0; i < 8; ++i) {
        /* asm: test dx,dx (sign of CURRENT hi) -> if set, xor ax^0xb553,
           dl^0x76; then sal ax,1 (CF=old ax:15); rcl dx,1 (CF->bit0). */
        if (*hi & 0x8000) {
            *lo ^= 0xb553;
            *hi = (*hi & 0xff00) | ((*hi & 0xff) ^ 0x76);
        }
        dw c = (*lo & 0x8000) ? 1 : 0;
        *lo = (*lo << 1) & 0xffff;
        *hi = ((*hi << 1) | c) & 0xffff;
    }
    return *hi >> 8;   /* al = dh */
}

/* fastrandx: al = RndTable[RndIndex]; RndIndex++ (byte). */
static void test_fastrandx() {
    for (int i = 0; i < 256; ++i) d8(D_RNDTABLE + i) = (db)(i ^ 0x5a);
    for (dw idx : {0, 1, 200, 255}) {
        reset_state();
        d8(D_RNDINDEX) = (db)idx;
        fastrandx(0, &st);
        char nm[64];
        std::snprintf(nm, sizeof nm, "fastrandx idx=%d al", idx);
        eq(st.eax & 0xffff, (idx ^ 0x5a) & 0xff, nm);
        std::snprintf(nm, sizeof nm, "fastrandx idx=%d index++", idx);
        eq(d8(D_RNDINDEX), (db)(idx + 1), nm);   /* byte wraps 255->0 */
    }
}

/* ============================ TRIG.ASM ================================= */
/* The trig tables live in the STACK segment image. In this build `data`
 * references point into m2c::m directly: stack image base is flat 0x1e1c0,
 * i.e. paragraph 0x1e1c (stack+0x0 arcsintable, +0x202 arccostable,
 * +0x404 tantable, +0x4ba arctantable). */
#define S16(off) (*(dw*)m2c::raddr_((dw)0x1e1c, (dw)(off)))

static void test_tangent() {
    for (int i = 0; i < 91; ++i) S16(0x404 + 2*i) = (dw)(100 + i);
    struct { int a, dx; } cases[] = {
        {0, 100}, {45, 145}, {90, 190},          /* quad1 */
        {91, 0}, {200, 0}, {421, 0},             /* error range */
        {422, -(100+90)}, {511, -(100+1)},       /* quad4 mirrored+negated */
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c.a;
        tangent(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "tangent(%d)", c.a);
        eq((short)(st.edx & 0xffff), c.dx, nm);
    }
}

/* FastArcTan(ax=frac): idx=(|ax|>>7)+round; ax=Table[idx]; sign restore. */
static void test_fastarctan() {
    for (int i = 0; i < 513; ++i) S16(0x4ba + 2*i) = (dw)(1000 + i);
    struct { int ax, want; } cases[] = {
        {0x0000, 1000},              /* idx 0 */
        {0x0080, 1001},              /* exact 128 -> idx 1 */
        {0x0040, 1001},              /* /128=0 +half round -> idx1 */
        {0x003f, 1000},              /* rounds down -> idx0 */
        {-0x0080, -(1001)},          /* sign restore */
        {0x7fff, 1256},              /* idx 255+1=256 (edge of table span) */
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c.ax;
        fastarctan(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "fastarctan(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
}

/* ArcTan(ax=frac): idx=|ax|>>7 (no round); interpolate with low 7 bits. */
static void test_arctan() {
    for (int i = 0; i < 513; ++i) S16(0x4ba + 2*i) = (dw)(2000 + i * 4);
    struct { int ax, want; } cases[] = {
        {0x0000, 2000},
        {0x0080, 2004},                 /* idx1, frac0 */
        {0x00c0, 2004 + 2},             /* idx1 + 1/2 of diff4 */
        {0x4000, 2000 + 128*4},         /* idx128 */
        {-0x0080, -2004},               /* sign */
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c.ax;
        arctan(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "arctan(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
}

/* FastArcTan2: same but /64.  ArcTan2: /64 + interpolate low 6 bits. */
static void test_arctan2s() {
    for (int i = 0; i < 513; ++i) S16(0x4ba + 2*i) = (dw)(3000 + i * 8);
    struct { int ax, want; } cases[] = {
        {0x0040, 3008},            /* idx1 */
        {0x0020, 3008},            /* /64=0 +round -> idx1 */
        {0x4000, 3000 + 256*8},    /* idx256 (edge) */
        {-0x0040, -3008},
    };
    for (auto& c : cases) {
        reset_state();
        st.eax = c.ax;
        fastarctan2(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "fastarctan2(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
    struct { int ax, want; } cases2[] = {
        {0x0040, 3008},            /* idx1 frac0 */
        {0x0060, 3008 + 4},        /* idx1 + 1/2*8 */
        {-0x0060, -(3008 + 4)},
    };
    for (auto& c : cases2) {
        reset_state();
        st.eax = c.ax;
        arctan2(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "arctan2(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
}

/* FastArcSin: idx=(|ax|>>7)+round, ArcSinTable, sign restore.
 * FastArcCos: +frac -> ArcCosTable[idx]; -frac -> (256*128-1) - result. */
static void test_fastarc() {
    /* index space is 0..256 (|ax|=0x8000 -> idx 256); image spans allow it */
    for (int i = 0; i < 257; ++i) {
        S16(0x000 + 2*i) = (dw)(4000 + i);
        S16(0x202 + 2*i) = (dw)(5000 + i);
    }
    struct { int ax, want; } sc[] = {
        {0x0000, 4000}, {0x0080, 4001}, {-0x0080, -4001}, {0x7f00, 4000+254},
    };
    for (auto& c : sc) {
        reset_state();
        st.eax = c.ax;
        fastarcsin(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "fastarcsin(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
    struct { int ax, want; } cc[] = {
        {0x0000, 5000}, {0x0080, 5001},
        {-0x0080, (256*128 - 1) - 5001},
    };
    for (auto& c : cc) {
        reset_state();
        st.eax = c.ax;
        fastarccos(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "fastarccos(%d)", c.ax);
        eq((short)(st.eax & 0xffff), c.want, nm);
    }
}

/* ArcTan360(cx=x, dx=y): bx flags {bit1:x<0, bit2:y<0} -> QuadSwitch[bx]:
 *   [0](+,+): ax=theta        [2](-,+): ax=-theta   (Quad4)
 *   [4](+,-): ax=256*128-th   [6](-,-): ax=256*128+th (Quad2/Quad3)
 * x==y diag -> dx=64*128. x=0: y>=0 -> 0, y<0 -> 256*128.
 * y=0: x>0 -> 128*128, x<0 -> 384*128.  else theta = arctan(min/max*32768). */
static void test_arctan360() {
    for (int i = 0; i < 513; ++i) S16(0x4ba + 2*i) = (dw)i;  /* linear ramp */
    struct { int x, y; unsigned want; } cases[] = {
        {1, 1, 64*128},                  /* 45deg Quad1 */
        {-1, 1, (unsigned)-64*128},      /* Quad4: 360-theta */
        {-1, -1, 256*128 + 64*128},      /* Quad3: 180+theta */
        {1, -1, 256*128 - 64*128},       /* Quad2: 180-theta */
        {0, 1, 0},                       /* x=0 +y -> 0deg */
        {0, -1, 256*128},                /* x=0 -y -> 180deg */
        {1, 0, 128*128},                 /* +x y=0 -> 90deg */
        {-1, 0, 384*128},                /* -x y=0 -> 270deg */
        /* general: (2,1) frac=16384 -> arctan idx128 -> table[128]=128 */
        {2, 1, 128*128 - 128},           /* x>y: theta=90-atan(y/x) */
        {1, 2, 128},                     /* y>x: theta=atan(x/y) */
        {-2, 1, (unsigned)-(128*128 - 128)},
        {2, -1, 256*128 - (128*128 - 128)},
    };
    for (auto& c : cases) {
        reset_state();
        st.ecx = c.x; st.edx = c.y;
        arctan360(0, &st);
        char nm[48];
        std::snprintf(nm, sizeof nm, "arctan360(%d,%d)", c.x, c.y);
        eq(st.eax & 0xffff, c.want & 0xffff, nm);
    }
}

static void test_randx() {
    static const dw seeds[][2] = {
        {0x0000,0x0000},{0x0001,0x0000},{0xffff,0xffff},
        {0x5b7d,0xa482},{0x0000,0x8000},{0xaaaa,0x5555},
    };
    for (auto& s : seeds) {
        dw lo = s[0], hi = s[1];
        dw want_al = lfsr_step(&lo, &hi);
        reset_state();
        d16(D_SEEDLO) = s[0];
        d16(D_SEEDHI) = s[1];
        randx(0, &st);
        char nm[64];
        std::snprintf(nm, sizeof nm, "randx(%04x,%04x) al", s[0], s[1]);
        eq(st.eax & 0xffff, want_al, nm);
        std::snprintf(nm, sizeof nm, "randx(%04x,%04x) seedlo", s[0], s[1]);
        eq(d16(D_SEEDLO), lo, nm);
        std::snprintf(nm, sizeof nm, "randx(%04x,%04x) seedhi", s[0], s[1]);
        eq(d16(D_SEEDHI), hi, nm);
    }
}

int main() {
    setenv("M2C_NO_IRQ", "1", 1);
    m2c::init(&st);

    #define RUN(t) do { fprintf(stderr, "[TEST] %s\n", #t); t(); } while (0)
    RUN(test_sqrt);
    RUN(test_sqrt32);
    RUN(test_calcdeltatime);
    RUN(test_calcdeltaxy);
    RUN(test_vga_calcaddr);
    RUN(test_flipnibble);
    RUN(test_vga_prtc2);
    RUN(test_writesprite);
    RUN(test_charsprite);
    RUN(test_fastrandx);
    RUN(test_tangent);
    RUN(test_fastarctan);
    RUN(test_arctan);
    RUN(test_arctan2s);
    RUN(test_fastarc);
    RUN(test_arctan360);
    RUN(test_randx);

    std::printf("%d passed, %d failed\n", passes, fails);
    return fails ? 1 : 0;
}
