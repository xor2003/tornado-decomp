/* probe_call: invoke a translated proc with caller-supplied registers and
 * memory pokes, print the result in kvikdos-call-result format so it can be
 * diffed against the original binary running under
 *   kvikdos --call-far=... --call-set=... --poke-word=...
 *
 * usage: probe_call <proc> ax bx cx dx si di bp [ds es] [poke-file]
 *   regs are hex words; ds/es default to the data segment (seg_para(data)).
 *   poke-file lines: <seghex> <offhex> <wordhex>   (segment is a guest para;
 *   writes go through raddr_ so ds maps to the data image).
 * stdout: "kvikdos-call-result ax=.. bx=.. cx=.. dx=.. si=.. di=.. sp=..
 *          bp=.. flags=.. ds=.. es=.. ss=.." + a memory hash line.
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include "asm.h"

using m2c::_STATE;
namespace m2c { extern int init(_STATE*); }

/* weak lifted-proc wrappers */
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
extern bool reseed(m2c::_offsets, _STATE*);

typedef bool (*ProcFn)(m2c::_offsets, _STATE*);
struct ProcEnt { const char* name; ProcFn fn; };
static const ProcEnt PROCS[] = {
    {"sqrt", sqrt}, {"sqrt32", sqrt32},
    {"calcdeltatime", calcdeltatime}, {"calcdeltaxy", calcdeltaxy},
    {"vga_calcaddr", vga_calcaddr}, {"vga_prtc2", vga_prtc2},
    {"writesprite", writesprite}, {"charsprite", charsprite},
    {"randx", randx}, {"fastrandx", fastrandx}, {"reseed", reseed},
    {"tangent", tangent}, {"fastarctan", fastarctan}, {"arctan", arctan},
    {"fastarctan2", fastarctan2}, {"arctan2", arctan2},
    {"fastarcsin", fastarcsin}, {"fastarccos", fastarccos},
    {"arctan360", arctan360},
};

static _STATE st;

static unsigned long h16(const unsigned char* p, size_t n) {
    unsigned long h = 5381;
    for (size_t i = 0; i < n; ++i) h = h * 33 + p[i];
    return h;
}

int main(int argc, char** argv) {
    if (argc < 9) {
        std::fprintf(stderr, "usage: %s proc ax bx cx dx si di bp [ds es] [pokefile]\n", argv[0]);
        return 2;
    }
    const char* name = argv[1];
    ProcFn fn = nullptr;
    for (const ProcEnt& e : PROCS)
        if (!std::strcmp(e.name, name)) { fn = e.fn; break; }
    if (!fn) { std::fprintf(stderr, "unknown proc %s\n", name); return 2; }

    setenv("M2C_NO_IRQ", "1", 1);
    m2c::init(&st);
    std::memset(&st, 0, sizeof st);
    st.ds = st.es = 7;                 /* seg_para(data) */
    st.ss = 0x900;
    st.esp = 0xff00;
    *(dw*)m2c::raddr_(st.ss, 0xff00) = 0;
    *(dw*)m2c::raddr_(st.ss, 0xff00 + 2) = 0;

    st.eax = std::strtoul(argv[2], 0, 16);
    st.ebx = std::strtoul(argv[3], 0, 16);
    st.ecx = std::strtoul(argv[4], 0, 16);
    st.edx = std::strtoul(argv[5], 0, 16);
    st.esi = std::strtoul(argv[6], 0, 16);
    st.edi = std::strtoul(argv[7], 0, 16);
    st.ebp = std::strtoul(argv[8], 0, 16);
    if (argc > 10) {
        st.ds = (dw)std::strtoul(argv[9], 0, 16);
        st.es = (dw)std::strtoul(argv[10], 0, 16);
    }
    if (argc > 11) {
        FILE* pf = std::fopen(argv[11], "r");
        if (!pf) { std::fprintf(stderr, "poke file %s\n", argv[11]); return 2; }
        unsigned seg, off, val;
        while (std::fscanf(pf, "%x %x %x", &seg, &off, &val) == 3) {
            dw v = (dw)val;
            std::memcpy(m2c::raddr_((dw)seg, (dw)off), &v, 2);
        }
        std::fclose(pf);
    }

    std::fprintf(stderr, "[probe] calling %s\n", name);
    fn((m2c::_offsets)0, &st);
    std::fprintf(stderr, "[probe] returned\n");

    const unsigned fl =
        2u | (st.CF ? 1 : 0) | (st.PF ? 4 : 0) | (st.AF ? 0x10 : 0) |
        (st.ZF ? 0x40 : 0) | (st.SF ? 0x80 : 0) | (st.TF ? 0x100 : 0) |
        (st.IF ? 0x200 : 0) | (st.DF ? 0x400 : 0) | (st.OF ? 0x800 : 0);
    std::printf("kvikdos-call-result ax=%04x bx=%04x cx=%04x dx=%04x si=%04x di=%04x sp=%04x bp=%04x flags=%04x ds=%04x es=%04x ss=%04x\n",
        (unsigned)(st.eax & 0xffff), (unsigned)(st.ebx & 0xffff),
        (unsigned)(st.ecx & 0xffff), (unsigned)(st.edx & 0xffff),
        (unsigned)(st.esi & 0xffff), (unsigned)(st.edi & 0xffff),
        (unsigned)(st.esp & 0xffff), (unsigned)(st.ebp & 0xffff),
        fl, (unsigned)st.ds, (unsigned)st.es, (unsigned)st.ss);
    std::printf("memhash=%08lx\n",
        h16((const unsigned char*)&m2c::m, 0x100000));
    return 0;
}
