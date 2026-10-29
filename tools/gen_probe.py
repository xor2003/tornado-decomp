#!/usr/bin/env python3
"""Generate tests/probe_all.cpp: a differential probe that can invoke ANY
lifted weak proc by name with caller-supplied registers, and print the result
in kvikdos-call-result format for tools/diff_procs.py.

usage: tools/gen_probe.py <objdir> <out.cpp> [data.h]
  data.h: optional globals header; emits a SYM table so the probe accepts
  poke=name:hexval args (word writes to translated globals by name).
"""
import os, re, subprocess, sys

IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*$")
CPP_KEYWORDS = {"and", "or", "not", "xor", "asm", "for", "int", "char",
                "do", "if", "try", "new", "delete", "this", "union"}


def weak_proc_names(objdir):
    out = subprocess.run(
        ["bash", "-c",
         f"find -L '{objdir}' -name '*.o' ! -name 'asm.o' | xargs nm -C"],
        capture_output=True, text=True, check=True).stdout
    names = set()
    for line in out.splitlines():
        parts = line.split()
        if len(parts) >= 3 and re.fullmatch(r"[0-9a-fA-F]+", parts[0]) \
                and parts[1] == "W":
            dem = " ".join(parts[2:])
        else:
            continue
        name = dem.split("(")[0].strip()
        if name.startswith("_") or "::" in name:
            continue
        if IDENT.match(name) and name not in CPP_KEYWORDS:
            names.add(name)
    return sorted(names)


SEG_SUFFIXES = ("default_seg", "dronecode", "viscode", "expcode",
                "libcode", "weaponcode", "modcode", "gcode")


def dispatch_entries(srcdir, declared):
    """[(entryname, rep, kname)] for static procs reachable by dispatch.

    Lifted TUs export weak wrappers `bool proc(_i, st) { _group1(_i? _i :
    k<proc>, st) }` — the `_i` arg is a pass-through dispatch offset, so a
    weak sibling can reach ANY k-offset its module's dispatcher covers.
    Static procs (unexported because callers are module-local) are thus
    still callable as `weak_sibling(m2c::k<proc>, st)`.

    The same kname can appear in TUs of DIFFERENT source listings (each
    module's dispatcher interprets the shared offset against its own
    proc copy), so entries are named `k<proc>` -> `proc` when the kname is
    unique to one listing, else `proc__<lststem>` per listing — matching
    diff_procs' `<proc>__<stem>` alias convention.
    """
    import glob
    # pass 1: per-file weak defs + dispatch cases. The rep MUST be a weak
    # symbol defined in exactly one TU — the linker merges same-name weaks,
    # so `clippoly` (weak in both com_clip and vscreen) binds to a single
    # copy and every dispatch through it enters that module's _group1,
    # misrouting the other module's static procs to arbitrary labels.
    files = []
    weakfiles = {}       # weak name -> set of files defining it
    for f in sorted(glob.glob(os.path.join(srcdir, "*_lifted.cpp"))):
        txt = open(f, errors="replace").read()
        knames = set(re.findall(r"case\s+m2c::k(\w+)\s*:", txt))
        weaks = set(re.findall(
            r"__attribute__\(\(weak\)\)\s*bool\s+(\w+)\s*\(", txt))
        weaks &= declared
        stem = os.path.basename(f)[:-len("_lifted.cpp")]
        for sfx in SEG_SUFFIXES:
            if stem.endswith("_" + sfx):
                stem = stem[:-(len(sfx) + 1)]
                break
        files.append((stem, weaks, knames))
        for w in weaks:
            weakfiles.setdefault(w, set()).add(f)
    persrc = {}          # kname -> {lststem: rep}
    for stem, weaks, knames in files:
        if not weaks:
            continue
        unique = sorted(w for w in weaks if len(weakfiles[w]) == 1)
        if not unique:
            print(f'gen_probe: {stem}: no TU-unique weak rep — its static '
                  'procs stay unreachable', file=sys.stderr)
            continue
        rep = unique[0]
        for kn in knames:
            if kn.startswith("_"):
                continue
            # kn weak in this file -> its direct PROCS entry tests this
            # copy — unless the same weak exists in OTHER TUs too: then
            # the linker merged them and `kn` binds ONE arbitrary copy,
            # so each module still needs a kn__stem dispatch entry
            if kn in weaks and len(weakfiles[kn]) == 1:
                continue
            persrc.setdefault(kn, {})[stem] = rep
    # k<name> constants collide across modules: m2c::kcliplineend is
    # 0x106c in com_clip.h but 0x107d in vscreen.h (each lifted TU sees
    # its own via M2C_CODE_EQUATE_ first-include guards), and _equates.h
    # has a third value that matches NO dispatcher. Emit the numeric
    # constant from the module's own <stem>.h so the rep's _group1 —
    # compiled with that header — sees the case it was built for.
    def stem_kconsts(stem):
        vals = {}
        for cand in (os.path.join(srcdir, stem + '.h'),
                     os.path.join(srcdir, stem + '_data.h')):
            if not os.path.exists(cand):
                continue
            txt = open(cand, errors='replace').read()
            for m in re.finditer(
                    r'static const dd k(\w+)\s*=\s*\(?\s*0x([0-9a-fA-F]+)\s*\)?',
                    txt):
                vals.setdefault('k' + m.group(1), '0x' + m.group(2))
        return vals
    stemcache = {}

    def kconst(stem, kn):
        if stem not in stemcache:
            stemcache[stem] = stem_kconsts(stem)
        return stemcache[stem].get('k' + kn, 'm2c::k' + kn)

    entries = []
    for kn, stems in persrc.items():
        if len(stems) == 1:
            stem, rep = next(iter(stems.items()))
            entries.append((kn, rep, kconst(stem, kn)))
        else:
            for stem, rep in stems.items():
                entries.append((f"{kn}__{stem}", rep, kconst(stem, kn)))
    return entries


HEAD = """\
/* GENERATED by tools/gen_probe.py - do not edit.
 * Differential probe: invoke any lifted proc by name with caller-supplied
 * registers, print kvikdos-call-result for tools/diff_procs.py.
 *
 * usage: probe_all <proc> ax bx cx dx si di bp [ds es]
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include "asm.h"
#include "_equates.h"

using m2c::_STATE;
namespace m2c { extern int init(_STATE*); }

typedef bool (*ProcFn)(m2c::_offsets, _STATE*);
struct ProcEnt { const char* name; ProcFn fn; m2c::_offsets disp; };
"""


def data_globals(path):
    """name -> (elemsize, decl) from `extern db& x;` / `extern dw (&a)[N];`
    declarations at global scope."""
    out = {}
    txt = open(path, errors='replace').read()
    for m in re.finditer(r'extern\s+(db|dw|dd)\s*&\s*(\w+)\s*;', txt):
        t, n = m.groups()
        out[n] = ({'db': 1, 'dw': 2, 'dd': 4}[t], f'extern {t}& {n};')
    for m in re.finditer(
            r'extern\s+(db|dw|dd)\s*\(&\s*(\w+)\)\s*\[\s*(\d+)\s*\]\s*;', txt):
        t, n, cnt = m.groups()
        out[n] = ({'db': 1, 'dw': 2, 'dd': 4}[t],
                  f'extern {t} (&{n})[{cnt}];')
    # record/struct externs (`extern viewport& vp;`): pokes reach members
    # via sym+delta; default elem size word, byte members come as pokeb=
    for m in re.finditer(
            r'extern\s+(\w[\w:<>]*)\s*&\s*(\w+)\s*;', txt):
        t, n = m.groups()
        if t not in ('db', 'dw', 'dd'):
            out.setdefault(n, (2, f'extern {t}& {n};'))
    return out


def main():
    objdir, out = sys.argv[1], sys.argv[2]
    names = weak_proc_names(objdir)
    globs = data_globals(sys.argv[3]) if len(sys.argv) > 3 else {}
    src = [HEAD]
    for n in names:
        src.append(f"extern bool {n}(m2c::_offsets, _STATE*) "
                   "__attribute__((weak));\n")
    src.append("\nstatic const ProcEnt PROCS[] = {\n")
    for n in names:
        src.append(f'    {{"{n}", {n}, (m2c::_offsets)0}},\n')
    srcdir = os.path.join(os.path.dirname(os.path.abspath(out)),
                          "..", "src")
    for n, rep, koff in sorted(dispatch_entries(srcdir, set(names))):
        if n not in names:
            src.append(
                f'    {{"{n}", {rep}, (m2c::_offsets){koff}}},\n')
    src.append("};\n\n")
    # Every data global is `extern T& name` — a BSS pointer slot that the
    # _data_refs TU fills at ITS static-init time. Capturing &name (the
    # referent) in a static table here races with that init order (NULL
    # capture). Instead bind `void* sym__n` to the ref OBJECT via asm
    # label: &sym__n is a link-time constant (safe in a static table) and
    # *(void**)slot at call time yields the referent lazily. This also
    # avoids C++ name collisions with proc wrappers entirely.
    # _seg_data is an inline ref to the data image: its symbol is the ref
    # slot, so the SLOT VALUE (not &slot) is the guest offset-0 base.
    src.append("extern void* segbasep __asm__(\"_seg_data\");\n")
    src.append("struct SymEnt { const char* name; void* const* slot; int esz; };\n")
    for n in globs:
        src.append(f'extern void* sym__{n} __asm__("{n}");\n')
    src.append("static const SymEnt SYMS[] = {\n")
    for n, (esz, _d) in sorted(globs.items()):
        src.append(f'    {{"{n}", &sym__{n}, {esz}}},\n')
    src.append("};\n\n")
    src.append("""\
static _STATE st;

/* Resolve a register arg: plain hex, or @<sym> = the sym's offset inside
   the translated data image (for struct-pointer args). */
static unsigned long regval(const char* s) {
    if (s[0] != '@') return std::strtoul(s, 0, 16);
    /* @<sym>+<delta>: offset <delta> bytes into the sym's storage —
       pinned buffer pointers may need mid-scratch headroom ([si-8]) */
    const char* adj = std::strchr(s, '+');
    long delta = adj ? std::strtol(adj + 1, 0, 16) : 0;
    size_t nl = adj ? (size_t)(adj - (s + 1)) : std::strlen(s + 1);
    for (const SymEnt& e : SYMS)
        if (!std::strncmp(e.name, s + 1, nl) && !e.name[nl]) {
            void* tp = *e.slot;
            if (tp) return (unsigned long)
                ((char*)tp + delta - (char*)segbasep);
            break;
        }
    std::fprintf(stderr, "WARN unknown reg sym %s\\n", s);
    return 0;
}

int main(int argc, char** argv) {
    if (argc < 9) {
        std::fprintf(stderr, "usage: %s proc ax bx cx dx si di bp [ds es]\\n", argv[0]);
        return 2;
    }
    const char* name = argv[1];
    const ProcEnt* pe = nullptr;
    for (const ProcEnt& e : PROCS)
        if (!std::strcmp(e.name, name)) { pe = &e; break; }
    if (!pe) { std::fprintf(stderr, "unknown proc %s\\n", name); return 2; }
    ProcFn fn = pe->fn;
    m2c::_offsets disp = pe->disp;

    setenv("M2C_NO_IRQ", "1", 1);
    m2c::init(&st);
    std::memset(&st, 0, sizeof st);
    st.ds = st.es = 7;                 /* seg_para(data) */
    st.ss = 0x900;
    st.esp = 0xff00;
    *(dw*)m2c::raddr_(st.ss, 0xff00) = 0;
    *(dw*)m2c::raddr_(st.ss, 0xff00 + 2) = 0;

    st.eax = regval(argv[2]);
    st.ebx = regval(argv[3]);
    st.ecx = regval(argv[4]);
    st.edx = regval(argv[5]);
    st.esi = regval(argv[6]);
    st.edi = regval(argv[7]);
    st.ebp = regval(argv[8]);
    if (argc > 10) {
        st.ds = (dw)std::strtoul(argv[9], 0, 16);
        st.es = (dw)std::strtoul(argv[10], 0, 16);
    }
    for (int i = 11; i < argc; ++i) {
        /* poke=<sym>:<hexval> — write a global by name (elem-sized store) */
        char* eq;
        if ((std::strncmp(argv[i], "poke=", 5) != 0 &&
             std::strncmp(argv[i], "pokeb=", 6) != 0) ||
            !(eq = std::strchr(argv[i] + 5, ':'))) continue;
        *eq = 0;
        /* pokeb=<sym>:<val> forces a byte write regardless of the sym's
           declared elem size (byte struc members) */
        int esz_ovr = 0;
        const char* sn = argv[i] + 5;
        if (!std::strncmp(argv[i], "pokeb=", 6)) { esz_ovr = 1; sn++; }
        /* poke=<sym>+<delta>:<val> writes <delta> bytes past the sym —
           seeds array elements adjacent to a named cell */
        const char* adj = std::strchr(sn, '+');
        long delta = 0;
        if (adj) delta = std::strtol(adj + 1, 0, 16);
        size_t nl = adj ? (size_t)(adj - sn) : std::strlen(sn);
        const SymEnt* se = nullptr;
        for (const SymEnt& s : SYMS)
            if (!std::strncmp(s.name, sn, nl) && !s.name[nl])
                { se = &s; break; }
        void* p = se ? (char*)*se->slot + delta : nullptr;
        /* unresolvable seed names must not kill the call — warn + skip */
        if (!p) { std::fprintf(stderr, "WARN unknown poke sym %s\\n", sn); continue; }
        unsigned long v;
        if (eq[1] == '@') {          /* poke=<sym>:@<target> - guest offset */
            const SymEnt* te = nullptr;
            for (const SymEnt& s : SYMS)
                if (!std::strcmp(s.name, eq + 2)) { te = &s; break; }
            void* tp = te ? *te->slot : nullptr;
            if (!tp) { std::fprintf(stderr, "WARN unknown poke target %s\\n", eq + 2); continue; }
            v = (unsigned long)((char*)tp - (char*)segbasep);
        } else {
            v = std::strtoul(eq + 1, 0, 16);
        }
        int wsz = esz_ovr ? esz_ovr : se->esz;
        if (wsz == 1) *(unsigned char*)p = (unsigned char)v;
        else if (wsz == 2) *(unsigned short*)p = (unsigned short)v;
        else *(unsigned*)p = (unsigned)v;
    }

    /* dump=<name>[+<off>]:<hexlen> — post-call memory ranges to print */
    char dumparg[16][160];
    int ndump = 0;
    for (int i = 11; i < argc && ndump < 16; ++i) {
        if (!std::strncmp(argv[i], "dump=", 5))
            std::snprintf(dumparg[ndump++], 160, "%s", argv[i] + 5);
    }

    std::fprintf(stderr, "[probe] calling %s\\n", name);
    fn(disp, &st);
    std::fprintf(stderr, "[probe] returned\\n");

    for (int d = 0; d < ndump; ++d) {
        char* co = std::strchr(dumparg[d], ':');
        if (!co) continue;
        *co = 0;
        long dlen = std::strtol(co + 1, 0, 16);
        const char* sn = dumparg[d];
        const char* adj = std::strchr(sn, '+');
        long delta = adj ? std::strtol(adj + 1, 0, 16) : 0;
        size_t nl = adj ? (size_t)(adj - sn) : std::strlen(sn);
        const SymEnt* se = nullptr;
        for (const SymEnt& s : SYMS)
            if (!std::strncmp(s.name, sn, nl) && !s.name[nl])
                { se = &s; break; }
        if (!se || dlen <= 0) {
            std::printf("MEMDUMP %s MISSING\\n", dumparg[d]);
            continue;
        }
        const unsigned char* dp =
            (const unsigned char*)*se->slot + delta;
        std::printf("MEMDUMP %s ", dumparg[d]);
        for (long b = 0; b < dlen; ++b) std::printf("%02x", dp[b]);
        std::printf("\\n");
    }

    const unsigned fl =
        2u | (st.CF ? 1 : 0) | (st.PF ? 4 : 0) | (st.AF ? 0x10 : 0) |
        (st.ZF ? 0x40 : 0) | (st.SF ? 0x80 : 0) | (st.TF ? 0x100 : 0) |
        (st.IF ? 0x200 : 0) | (st.DF ? 0x400 : 0) | (st.OF ? 0x800 : 0);
    std::printf("kvikdos-call-result ax=%04x bx=%04x cx=%04x dx=%04x si=%04x di=%04x sp=%04x bp=%04x flags=%04x ds=%04x es=%04x ss=%04x\\n",
        (unsigned)(st.eax & 0xffff), (unsigned)(st.ebx & 0xffff),
        (unsigned)(st.ecx & 0xffff), (unsigned)(st.edx & 0xffff),
        (unsigned)(st.esi & 0xffff), (unsigned)(st.edi & 0xffff),
        (unsigned)(st.esp & 0xffff), (unsigned)(st.ebp & 0xffff),
        fl, (unsigned)st.ds, (unsigned)st.es, (unsigned)st.ss);
    return 0;
}
""")
    open(out, "w").write("".join(src))
    print(f"generated {out}: {len(names)} procs")


main()
