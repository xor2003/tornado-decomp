#!/usr/bin/env python3
"""Structural regression audit for the lifted Tornado sources.

Catches the codegen-loss classes fixed in commit d8ff754:

  A. `Label: REPT n` (label+REPT on one line) bodies that the translator
     dropped -> the lifted label ends up with an empty body.
  B. `m2c-phantom`/`m2c-dedup` removed `ret`/`retf` at a proc boundary ->
     fallthrough into the next proc.
  C. Removed real instructions with no surviving identical sibling nearby
     (legitimate dedup always keeps one copy).

Usage: tools/test_codegen.py [asm-source-dir] [src-dir]
"""
import os
import re
import sys

ASM_DIR = sys.argv[1] if len(sys.argv) > 1 else \
    "/home/xor/inertia_player/examples/Tornado"
SRC_DIR = sys.argv[2] if len(sys.argv) > 2 else \
    os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "src")

LABEL_RE   = re.compile(r'^\s*([A-Za-z_?@$][\w?@$]*)\s*:\s*(.*)$')
REPT_LABEL = re.compile(r'^\s*([A-Za-z_@$?][\w?@$]*)\s*:\s*REPT\s+(\d+)', re.I)
REMOVED    = re.compile(r'/\*\s*m2c-(?:phantom|dedup)(?:\s+removed)?:\s*(.*?)\s*\*/')
RET_RE     = re.compile(r'\bret[nf]?\b', re.I)
LABEL_DEF  = re.compile(r'^\s*([a-z_][\w?]*)\s*:\s*$')
COMMENT    = re.compile(r'^\s*(/\*.*\*/|//.*)?\s*$')

# statements that count as a live instruction in generated code
def is_code(line):
    s = line.strip()
    if not s or s.startswith('//') or s.startswith('/*'):
        return False
    if s.startswith('#') or s.startswith('.'):
        return False
    return True

def norm_label(l):
    return l.lower().lstrip('@?')

def lifted_label_map(lines):
    """label -> list of body lines until next bare label"""
    out, cur, curlines = {}, None, []
    for ln in lines:
        m = LABEL_DEF.match(ln)
        if m:
            if cur is not None:
                out.setdefault(cur, []).extend(curlines)
            cur, curlines = norm_label(m.group(1)), []
            continue
        if cur is not None:
            curlines.append(ln)
    if cur is not None:
        out.setdefault(cur, []).extend(curlines)
    return out

def main():
    lifted = {}
    for f in os.listdir(SRC_DIR):
        if f.endswith('_lifted.cpp'):
            p = os.path.join(SRC_DIR, f)
            lifted[f] = open(p, encoding='utf-8', errors='replace').read().splitlines()

    all_lifted = []
    for f, lns in sorted(lifted.items()):
        for i, ln in enumerate(lns):
            all_lifted.append((f, i, ln))

    label_bodies = {}
    for f, lns in lifted.items():
        for lbl, body in lifted_label_map(lns).items():
            label_bodies.setdefault(lbl, []).append((f, body))

    failures = []

    # ---- A. `Label: REPT` dropped bodies ---------------------------------
    # Only .ASM files that actually produced a lifted module are in scope:
    # e.g. TAN_DRVR/CGA_DRVR/EGA_DRVR were never translated (only *_STUB TUs
    # exist), so their missing bodies are not losses.
    def asm_has_module(stem):
        stem = stem.lower()
        return any(f.startswith(stem + '_') or f == stem + '_lifted.cpp'
                   for f in lifted)

    rept_sites = []
    skipped = set()
    ENDM_RE = re.compile(r'^\s*ENDM\b', re.I)
    for root, _, files in os.walk(ASM_DIR):
        for f in files:
            if not f.upper().endswith('.ASM'):
                continue
            if not asm_has_module(os.path.splitext(f)[0]):
                skipped.add(f)
                continue
            p = os.path.join(root, f)
            rows = open(p, encoding='utf-8', errors='replace').read().splitlines()
            for n, ln in enumerate(rows, 1):
                m = REPT_LABEL.match(ln)
                if m:
                    # capture body up to ENDM
                    body = []
                    for ln2 in rows[n:]:
                        if ENDM_RE.match(ln2):
                            break
                        body.append(ln2)
                    rept_sites.append((f, n, m.group(1), int(m.group(2)), body))

    # expected REPT body ops, e.g. ('shr','dx,1') -> 'SHR(dx, 1)'
    def body_ops(body):
        ops = []
        for ln in body:
            code = ln.split(';', 1)[0].strip()
            mm = re.match(r'(shl|shr|rcl|rcr|rol|ror|sar|sal)\s+([^\s;]+)', code, re.I)
            if mm:
                ops.append(mm.group(1).upper())
        return ops

    def anon_run_present(stem, ops, cnt):
        """For anonymous `@@` REPT (no name to map), confirm the module's
        lifted files contain `cnt` consecutive copies of the body op run."""
        if not ops:
            return False
        want = ops * cnt
        pat = re.compile(r'\b(' + '|'.join(set(ops)) + r')\s*\(', re.I)
        for lf, lns in lifted.items():
            if not lf.startswith(stem + '_') and lf != stem + '_lifted.cpp':
                continue
            seq = []
            for ln in lns:
                mm = pat.search(ln)
                if mm:
                    seq.append(mm.group(1).upper())
                elif is_code(ln) and not re.match(r'^\s*(e?dummy|\w+label\d*|[\w?]+):', ln):
                    seq.append('X')  # non-op real instruction breaks the run
                if len(seq) >= len(want):
                    if seq[-len(want):] == want:
                        return True
                    # sliding window: drop head to keep scanning cheap
                    seq = seq[-len(want):]
        return False

    for f, n, lbl, cnt, body in rept_sites:
        nl = norm_label(lbl)
        if not nl:
            # anonymous `@@` label: verify by consecutive-op-run presence
            stem = os.path.splitext(f)[0].lower()
            if not anon_run_present(stem, body_ops(body), cnt):
                failures.append(
                    f"A {f}:{n} @@: REPT {cnt} body missing in lifted code")
            continue
        bodies = label_bodies.get(nl, [])
        live = [(lf, b) for lf, b in bodies if any(is_code(x) for x in b)]
        if not live:
            # lowered loop / dispatched continuation is also acceptable:
            # a `goto`/`while` in the empty body keeps semantics.
            ok = any(('goto ' in x or 'while' in x or 'for(' in x)
                     for _, b in bodies for x in b)
            if not ok:
                failures.append(
                    f"A {f}:{n} {lbl}: REPT {cnt} body missing in lifted code")

    # ---- B + C. removed-instruction audit --------------------------------
    for f, lns in sorted(lifted.items()):
        n_lines = len(lns)
        for i, ln in enumerate(lns):
            m = REMOVED.search(ln)
            if not m:
                continue
            dead = m.group(1).strip()
            if not dead or dead.startswith(';'):
                continue
            # only instruction-looking removals matter
            if not re.search(r'\b(ret[nf]?|jmp|call[f]?|mov|lods[bw]?|stos[bw]?|'
                             r'xchg|push|pop|in|out|xlat|add|sub|inc|dec|cmp)\b',
                             dead, re.I):
                continue
            nxt = None
            for j in range(i + 1, min(i + 4, n_lines)):
                if COMMENT.match(lns[j]):
                    continue
                nxt = lns[j]
                break
            # B: a removed ret whose next code is a new label, or the
            # dispatch epilogue (assert(0)/__dispatch_call) -> fallthrough
            if RET_RE.search(dead):
                boundary = False
                if nxt is not None:
                    ns = nxt.strip()
                    boundary = bool(
                        LABEL_DEF.match(nxt) or ns.startswith('assert(0)') or
                        ns.startswith('__dispatch_call') or
                        ns.startswith('__disp'))
                if boundary:
                    # legitimate only if unconditional control flow
                    # immediately precedes the removal (dedup keeps the
                    # first copy, so the survivor is adjacent)
                    prev_code = []
                    for j in range(i - 1, max(0, i - 8), -1):
                        if COMMENT.match(lns[j]):
                            continue
                        prev_code.append(lns[j])
                        if len(prev_code) == 2:
                            break
                    window = '\n'.join(prev_code)
                    if not re.search(r'\bRETN\(|\bRETF\(|\bgoto\b|\breturn\b|'
                                     r'J\(return|while \(1\)|for \(;;\)',
                                     window):
                        failures.append(
                            f"B {f}:{i+1} removed '{dead}' before label -> "
                            f"fallthrough: {nxt.strip()}")
                continue
            # C: real instruction removed -- require identical surviving line
            # within +-40 lines in same file (dedup keeps a sibling)
            key = re.sub(r'\s+', ' ', dead).strip()
            window = lns[max(0, i - 40):min(n_lines, i + 40)]
            if not any(key in re.sub(r'\s+', ' ', w) for w in window):
                # macro-form equivalents still count (e.g. removed `call Foo`
                # with surviving CALLF(Foo) )
                sym = re.search(r'(\w+)\s*$', dead)
                if not (sym and any(sym.group(1).lower() + '(' in w.lower() or
                                    sym.group(1).lower() + ',' in w.lower()
                                    for w in window)):
                    failures.append(
                        f"C {f}:{i+1} removed '{dead}' has no surviving sibling")

    print(f"asm REPT sites checked: {len(rept_sites)}")
    print(f"lifted files scanned:   {len(lifted)}")
    for x in failures:
        print("FAIL", x)
    print(f"{len(failures)} codegen-loss suspects")
    return 1 if failures else 0

if __name__ == '__main__':
    sys.exit(main())
