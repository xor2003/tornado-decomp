#!/usr/bin/env python3
"""prettify.py — make masm2c-lifted Tornado sources look like real C++.

Text-level transforms, semantics-preserving:

  1. Variable rebinding through typed segment structs (data_layouts.h):
     dw& weaponptr = *((dw*)(&data+0xd57a));   ->   dw& weaponptr = _seg_data.weaponptr;

  2. Register-indexed struct-field access:
     *(dw*)raddr(ds, si+pack_weap_type)  ->  *(dw*)&((package*)raddr(ds,si))->pack_weap_type

  3. Consecutive numeric #define groups -> enum / constexpr.

Usage: python3 tools/prettify.py src/
"""
import re
import sys
import glob
import os
from collections import defaultdict

BASE_SIZES = {
    'db': 1, 'byte': 1, 'char': 1, 'signed char': 1, 'unsigned char': 1,
    'dw': 2, 'word': 2, 'short': 2, 'unsigned short': 2,
    'dd': 4, 'dword': 4, 'int': 4, 'long': 4, 'unsigned': 4,
    'float': 4, 'double': 8, 'MWORDSIZE': 2,
}
KEYWORDS = set('''alignas alignof and and_eq asm auto bitand bitor bool break case
catch char char16_t char32_t class compl const constexpr const_cast continue
decltype default delete do double dynamic_cast else enum explicit export extern
false float for friend goto if inline int long mutable namespace new noexcept
not not_eq nullptr operator or or_eq private protected public register
reinterpret_cast return short signed sizeof static static_assert static_cast
struct switch template this thread_local throw true try typedef typeid typename
union unsigned using virtual void volatile wchar_t while xor xor_eq
overrider final'''.split())

STRUCT_RE = re.compile(r'struct\s+([A-Za-z_]\w*)\s*\{([^}]*)\}\s*;', re.S)
FIELD_DECL_RE = re.compile(
    r'^\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s+([A-Za-z_]\w*)(\s*\[\s*(\d+)\s*\])?\s*;?\s*$')
OFFSETOF_RE = re.compile(
    r'offsetof\s*\(\s*struct\s+([A-Za-z_]\w*)\s*,\s*([A-Za-z_]\w*)\s*\)')


def parse_structs(headers_text):
    sizes = {}
    fields = {}
    order = []
    for m in STRUCT_RE.finditer(headers_text):
        name, body = m.group(1), m.group(2)
        order.append(name)
        fields[name] = []
        body = re.sub(r'//[^\n]*', '', body)
        for line in re.split(r'[;\n]', body):
            line = line.strip()
            if not line:
                continue
            fm = FIELD_DECL_RE.match(line)
            if fm:
                ftype = ' '.join(fm.group(1).split())
                cnt = int(fm.group(4)) if fm.group(4) else 1
                fields[name].append((fm.group(2), ftype, cnt))

    def sizeof(t, depth=0):
        t = t.strip()
        if t.startswith('struct '):
            t = t[7:]
        if t in BASE_SIZES:
            return BASE_SIZES[t]
        if t in sizes:
            return sizes[t]
        if depth > 8 or t not in fields:
            return None
        total = 0
        for (_, ft, cnt) in fields[t]:
            s = sizeof(ft, depth + 1)
            if s is None:
                return None
            total += s * cnt
        sizes[t] = total
        return total

    for name in order:
        sizeof(name)
    return sizes, fields


# ---------------------------------------------------------------------------
ANCHOR_RE = re.compile(
    r'db\s*&\s*([A-Za-z_]\w*)\s*=\s*\*\s*\(\s*\(db\*\)\s*&\s*m2c::m\s*\+\s*'
    r'(0x[0-9a-fA-F]+|\d+)\s*\)')
# scalar:   T& name = *((T*)(&seg+0xOFF));
# array:    T (&name)[N] = *((T(*)[N])(&seg+0xOFF));
BIND_RE = re.compile(
    r'^\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*?)\s*\(?\s*&?\s*([A-Za-z_]\w*)\s*'
    r'(?:\)\s*\[\s*(\d+)\s*\])?\s*=\s*'
    r'\*\s*\(\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*'
    r'(?:\(\s*\*\s*\)\s*\[\s*(\d+)\s*\]|\*)\s*\)\s*'
    r'\(\s*&\s*([A-Za-z_]\w*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*\)\s*;')


def parse_int(s):
    return int(s, 0)


def collect(srcdir):
    anchors = {}
    bindings = []
    field2struct = {}
    header_blobs = []
    for path in sorted(glob.glob(os.path.join(srcdir, '*.h')) +
                       glob.glob(os.path.join(srcdir, '*.cpp'))):
        base = os.path.basename(path)
        try:
            txt = open(path, encoding='utf-8', errors='replace').read()
        except OSError:
            continue
        if path.endswith('.h'):
            header_blobs.append(txt)
            for m in OFFSETOF_RE.finditer(txt):
                field2struct.setdefault(m.group(2), m.group(1))
        # bindings/anchors only live in generated data modules — and they are
        # one-per-line, so match per line (no multi-MB backtracking)
        if base.startswith('_data'):
            for line in txt.split('\n'):
                m = ANCHOR_RE.search(line)
                if m:
                    anchors[m.group(1)] = parse_int(m.group(2))
                    continue
                m = BIND_RE.match(line)
                if m:
                    name = m.group(2)
                    typ = ' '.join(m.group(4).split())
                    cnt = int(m.group(5) or m.group(3) or 1)
                    seg = m.group(6)
                    off = parse_int(m.group(7))
                    bindings.append((seg, off, name, typ, cnt))
    struct_sizes, struct_fields = parse_structs('\n'.join(header_blobs))
    # field -> declared member type (first struct wins — mirrors field2struct)
    fieldtypes = {}
    for fname, sname in field2struct.items():
        for (fn, ft, _c) in struct_fields.get(sname, []):
            if fn == fname:
                fieldtypes[fname] = ft
                break
    return anchors, bindings, field2struct, struct_sizes, struct_fields, fieldtypes


def tsize(t, struct_sizes):
    if t.startswith('struct '):
        t = t[7:]
    return BASE_SIZES.get(t, struct_sizes.get(t))


# ---------------------------------------------------------------------------
# data_layouts.h: one packed struct per segment + typed accessor
# ---------------------------------------------------------------------------
DUMMY_RE = re.compile(r'^(dummy|__m2c_|edummy|m2c_)')


def pick_name(cands, struct_sizes):
    """Pick the layout candidate for an offset: struct-typed bindings beat
    scalars (they reveal record structure); real names beat dummies."""
    structs = [c for c in cands
               if (c[1][7:] if c[1].startswith('struct ') else c[1])
               in struct_sizes]
    reals = [c for c in cands if not DUMMY_RE.match(c[0])]
    for pool in (structs, reals, cands):
        if pool:
            return pool[0]
    return cands[0]


def emit_data_layouts(path, anchors, bindings, struct_sizes):
    by_seg = defaultdict(lambda: defaultdict(list))   # seg -> off -> [cands]
    for (seg, off, name, typ, cnt) in bindings:
        if seg in anchors:
            by_seg[seg][off].append((name, typ, cnt))

    emitted = {}                        # (seg,off) -> member name
    out = [
        '/* Generated by tools/prettify.py — typed views of the translated',
        '   data segments.  Every member sits at the exact offset the original',
        '   assembly image bound it to; all data bindings resolve through these',
        '   structs instead of raw `&seg+0xNNNN` arithmetic. */',
        '#pragma once',
        '#include "asm.h"',
        '',
    ]
    for seg in sorted(anchors):
        out.append('extern db& %s;' % seg)
    out.append('')
    out.append('#pragma pack(push,1)')
    n_skipped = 0
    for seg in sorted(by_seg):
        items = [(off, pick_name(c, struct_sizes))
                 for off, c in sorted(by_seg[seg].items())]
        # real (non-dummy) binding names per offset — used to name runs and
        # to keep scalar bindings bound via a cast when a struct row wins
        realnames = {}
        for off, cands in by_seg[seg].items():
            for (nm, t, c) in cands:
                if not DUMMY_RE.match(nm) and nm not in KEYWORDS:
                    realnames.setdefault(off, nm)
                    break
        # name -> (off, typ) for every binding in this segment, so a scalar
        # `T foo` followed by a `fooend` boundary label can coalesce into
        # `T foo[N]` (matches `XxxList`/`XxxListEnd` in the original asm).
        name_at = {}
        for off, cands in by_seg[seg].items():
            for (nm, t, c) in cands:
                name_at.setdefault(nm, (off, t))
        sname = 'Seg_' + seg
        out.append('struct %s {' % sname)
        cursor = 0
        used = set()
        i = 0

        def emit_pad(upto, cursor):
            if upto > cursor:
                out.append('    db _pad_%x[%d];' % (cursor, upto - cursor))

        spans = []   # (start,end,expr) of every emitted member, for the
                     # interior-offset fallback below
        while i < len(items):
            off, (name, typ, cnt) = items[i]
            if off < cursor:
                n_skipped += 1
                i += 1
                continue
            # --- detect a constant-stride run of identical (typ,cnt) scalars/
            # arrays => real C array. Need >=3 elements.
            sz = tsize(typ, struct_sizes) or 1
            esz = sz * cnt
            j = i
            while j + 1 < len(items) and \
                    items[j + 1][0] == items[j][0] + esz and \
                    items[j + 1][1][1] == typ and items[j + 1][1][2] == cnt:
                j += 1
            runlen = j - i + 1
            if runlen >= 3:
                emit_pad(off, cursor)
                aname = next((realnames[items[k][0]] for k in range(i, j + 1)
                              if items[k][0] in realnames
                              and realnames[items[k][0]] not in used), name)
                if aname in used:
                    aname = '%s_%x' % (aname, off)
                out.append('    %s %s[%d];   // %s+0x%x..0x%x' %
                           (typ, aname, runlen * cnt, seg, off, items[j][0] + esz))
                used.add(aname)
                spans.append((off, items[j][0] + esz, aname))
                for k in range(i, j + 1):
                    # member expr names a single element; array bindings of
                    # the matching span take the cast form in rewrite_bindings
                    for e in range(cnt):
                        emitted.setdefault(
                            (seg, items[k][0] + e * sz),
                            ('%s[%d]' % (aname, (k - i) * cnt + e), typ, 1))
                cursor = items[j][0] + esz
                i = j + 1
                continue
            # --- detect a repeating record cycle: type sequence of period p
            # (2..8) repeated >=3 times at constant byte stride => row struct.
            emitted_row = False
            for p in range(2, 9):
                if i + p * 3 > len(items):
                    break
                seq = [(items[i + q][1][1], items[i + q][1][2])
                       for q in range(p)]
                stride = items[i + p][0] - off
                # declared fields must tile the whole stride exactly, else
                # aname[c] would land on the wrong offset for c >= 1
                pos = 0
                gaps = []
                tiles = True
                for q in range(p):
                    qoff = items[i + q][0] - off
                    if qoff < pos:
                        tiles = False
                        break
                    if qoff > pos:
                        gaps.append((q, qoff - pos))
                    pos = qoff + (tsize(seq[q][0], struct_sizes) or 1) * seq[q][1]
                if not tiles or pos > stride:
                    continue
                ok = True
                cyc = 1
                while i + (cyc + 1) * p <= len(items):
                    base = i + cyc * p
                    if items[base][0] != off + cyc * stride:
                        break
                    for q in range(1, p):
                        if items[base + q][0] != off + cyc * stride + \
                                (items[i + q][0] - off) or \
                           items[base + q][1][1] != seq[q][0] or \
                           items[base + q][1][2] != seq[q][1]:
                            ok = False
                            break
                    if not ok:
                        break
                    cyc += 1
                if cyc >= 3:
                    emit_pad(off, cursor)
                    rname = 'Row_%s_%x' % (seg, off)
                    decl = 'struct %s {' % rname
                    gidx = 0
                    for q in range(p):
                        while gidx < len(gaps) and gaps[gidx][0] == q:
                            decl += ' db _gp%d[%d];' % (q, gaps[gidx][1])
                            gidx += 1
                        qt, qc = items[i + q][1][1], items[i + q][1][2]
                        decl += ' %s f%d%s;' % (qt, q, '[%d]' % qc if qc > 1 else '')
                    if pos < stride:
                        decl += ' db _gend[%d];' % (stride - pos)
                    decl += ' };'
                    out.append('    %s' % decl)
                    aname = next((realnames[items[k][0]]
                                  for k in range(i, i + cyc * p)
                                  if items[k][0] in realnames
                                  and realnames[items[k][0]] not in used),
                                 'row_%x' % off)
                    if aname in used:
                        aname = '%s_%x' % (aname, off)
                    out.append('    %s %s[%d];   // %s+0x%x  (%d rows)' %
                               (rname, aname, cyc, seg, off, cyc))
                    used.add(aname)
                    spans.append((off, off + cyc * stride, aname))
                    for c in range(cyc):
                        for q in range(p):
                            qt, qc = items[i + q][1][1], items[i + q][1][2]
                            qsz = tsize(qt, struct_sizes) or 1
                            for e in range(qc):
                                emitted.setdefault(
                                    (seg, items[i + c * p + q][0] + e * qsz),
                                    ('%s[%d].f%d%s' % (aname, c, q,
                                     '[%d]' % e if qc > 1 else ''),
                                     qt, 1))
                    cursor = off + cyc * stride
                    i += cyc * p
                    emitted_row = True
                    break
            if emitted_row:
                continue
            emit_pad(off, cursor)
            mname = realnames.get(off, name)
            if mname in used or mname in KEYWORDS:
                mname = name
            if mname in used or mname in KEYWORDS:
                mname = '%s_%x' % (name, off)
            used.add(mname)
            # `T foo` + same-typed `fooend` boundary label => `T foo[N]`
            elem_sz = sz * cnt
            end_off = None
            for ename in (mname + 'end', mname + '_end', mname + 'ends',
                          'end_' + mname, mname + 'End', name + 'end'):
                ent = name_at.get(ename)
                if ent is not None and ent[0] > off and ent[1] == typ \
                        and not any(off < o < ent[0] for o in by_seg[seg]):
                    end_off = ent[0]
                    break
            if end_off is not None and (end_off - off) % sz == 0 \
                    and (end_off - off) // elem_sz >= 2:
                n = (end_off - off) // sz      # element count, type-units
                out.append('    %s %s[%d];   // %s+0x%x  (to %s)' %
                           (typ, mname, n, seg, off, ename))
                for el in range(n):
                    emitted.setdefault(
                        (seg, off + el * sz), ('%s[%d]' % (mname, el), typ, 1))
                spans.append((off, end_off, mname))
                cursor = end_off
                i += 1
                continue
            emitted[(seg, off)] = (mname, typ, cnt)
            if cnt > 1:
                out.append('    %s %s[%d];   // %s+0x%x' % (typ, mname, cnt, seg, off))
                for e in range(1, cnt):
                    emitted.setdefault((seg, off + e * sz),
                                       ('%s[%d]' % (mname, e), typ, 1))
            else:
                out.append('    %s %s;   // %s+0x%x' % (typ, mname, seg, off))
            spans.append((off, off + esz, mname))
            cursor = off + esz
            i += 1
        # interior fallback: bound offsets that landed inside a multi-byte
        # member resolve to ((db*)&member + inner)
        for off, cands in sorted(by_seg[seg].items()):
            if (seg, off) in emitted:
                continue
            for (s0, s1, expr) in spans:
                if s0 <= off < s1:
                    emitted[(seg, off)] = (expr, None, off - s0)
                    break
        out.append('};')
        out.append('')
    out.append('#pragma pack(pop)')
    out.append('')
    for seg in sorted(by_seg):
        out.append('inline Seg_%s& _seg_%s = *(Seg_%s*)&%s;' % (seg, seg, seg, seg))
    out.append('')
    if n_skipped:
        out.append('// %d overlapping/keyword bindings kept as raw refs' % n_skipped)
    open(path, 'w').write('\n'.join(out) + '\n')
    return emitted


# Rewrite binding decls to member access:
#   T (&n)[N] = *((T(*)[N])(&seg+0xOFF));   ->   T (&n)[N] = _seg_seg.n;
#   T& n = *((T*)(&seg+0xOFF));            ->   T& n = _seg_seg.n;
BIND_LINE_RE = re.compile(
    r'^(\s*)([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*?)\s*(\(?\s*&?\s*)([A-Za-z_]\w*)\s*'
    r'(\)\s*\[\s*\d+\s*\])?\s*=\s*'
    r'\*\s*\(\s*\(\s*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*\s*'
    r'(?:\(\s*\*\s*\)\s*\[\s*\d+\s*\]|\*)\s*\)\s*'
    r'\(\s*&\s*([A-Za-z_]\w*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*\)\s*;',
    re.M)


def rewrite_bindings(txt, emitted):
    def repl(m):
        indent, typ, mid, name, arr, seg, off = m.groups()
        ent = emitted.get((seg, parse_int(off)))
        if ent is None:
            return m.group(0)
        member, mtyp, mcnt = ent
        bcnt = int(arr.split('[')[1].rstrip(' ]')) if arr else 1
        typ = typ.rstrip('&').strip()
        if mtyp is None:      # interior byte of a multi-byte member
            if bcnt > 1:
                rhs = '*(%s(*)[%d])((db*)&_seg_%s.%s+%d)' % (
                    typ, bcnt, seg, member, mcnt)
            else:
                rhs = '*(%s*)((db*)&_seg_%s.%s+%d)' % (typ, seg, member, mcnt)
        elif typ == mtyp and bcnt == mcnt:
            rhs = '_seg_%s.%s' % (seg, member)
        elif bcnt > 1:
            rhs = '*(%s(*)[%d])((db*)&_seg_%s.%s)' % (typ, bcnt, seg, member)
        else:
            rhs = '*(%s*)((db*)&_seg_%s.%s)' % (typ, seg, member)
        return '%s%s %s%s%s = %s;' % (indent, typ, mid, name, arr or '', rhs)
    return BIND_LINE_RE.sub(repl, txt)


# ---------------------------------------------------------------------------
# raddr(seg, expr+field) -> &((struct*)raddr(seg,expr))->field
# ---------------------------------------------------------------------------
def split_top(expr):
    terms, depth, cur, sign, i = [], 0, '', '+', 0
    while i < len(expr):
        c = expr[i]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
        if depth == 0 and c in '+-' and cur.strip():
            prev = expr[i - 1]
            if prev not in '+-*/%&|^~(<>=!,':
                if not (c == '-' and i + 1 < len(expr) and expr[i + 1] == '>'):
                    terms.append((sign, cur.strip()))
                    cur, sign = '', c
                    i += 1
                    continue
        cur += c
        i += 1
    if cur.strip():
        terms.append((sign, cur.strip()))
    return terms


def try_unwrap(term):
    t = term.strip()
    if not (t.startswith('(') and t.endswith(')')):
        return None
    depth = 0
    for i, c in enumerate(t):
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0 and i != len(t) - 1:
                return None
    return t[1:-1]


def join_terms(terms):
    out = ''
    for s, t in terms:
        if not t:
            continue
        if not out:
            out += ('-' if s == '-' else '') + t
        else:
            out += ('-' if s == '-' else '+') + t
    return out


def find_field(expr, field2struct):
    """Return (field, rest_expr) if expr contains a lone field token in a
    top-level (or one-deep parenthesized) additive term."""
    terms = split_top(expr)
    for idx, (sign, term) in enumerate(terms):
        if sign == '-':
            continue
        if term in field2struct:
            return term, join_terms(terms[:idx] + terms[idx + 1:])
        inner = try_unwrap(term)
        if inner is not None:
            sub = find_field(inner, field2struct)
            if sub is not None:
                field, subrest = sub
                newterm = '(' + (subrest or '0') + ')'
                rest = join_terms(terms[:idx] + [(sign, newterm)] + terms[idx + 1:])
                return field, rest
    return None


# names that must never be treated as struct fields in raddr()
FIELD_STOPWORDS = set('''ax bx cx dx si di bp sp cs ds es ss fs gs
al ah bl bh cl ch dl dh eax ebx ecx edx edi esi ebp esp
i j k n x y z w h temp tmp cnt ptr idx off seg ofs addr val ret
'''.split())
RADDR_RE = re.compile(r'\braddr\s*\(')


CAST_TAIL_RE = re.compile(r'\*\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*\s*\)\s*$')
PDEREF_TAIL_RE = re.compile(r'\*\s*\(\s*$')


def rewrite_raddr(txt, field2struct, fieldtypes):
    out, i = [], 0
    while True:
        m = RADDR_RE.search(txt, i)
        if not m:
            out.append(txt[i:])
            break
        j = m.end()
        depth = 1
        while j < len(txt) and depth:
            if txt[j] == '(':
                depth += 1
            elif txt[j] == ')':
                depth -= 1
            j += 1
        if depth:
            out.append(txt[i:])
            break
        args = txt[m.end():j - 1]
        d, cut = 0, -1
        for k, c in enumerate(args):
            if c == '(':
                d += 1
            elif c == ')':
                d -= 1
            elif c == ',' and d == 0:
                cut = k
                break
        seg = args[:cut].strip() if cut > 0 else args.strip()
        expr = args[cut + 1:].strip() if cut > 0 else ''
        hit = find_field(expr, field2struct) if expr else None
        if hit is None:
            out.append(txt[i:j])
            i = j
            continue
        field, rest = hit
        st = field2struct[field]
        rest = rest or '0'

        # what precedes raddr( ?  *(T*)  or  *(  — collapse into ->field access
        start = m.start()
        pre_start = start
        cast = None
        cm = CAST_TAIL_RE.search(txt[i:start])
        if cm and cm.end() == start - i:
            cast = cm.group(1).strip()
            pre_start = i + cm.start()
        else:
            pm = PDEREF_TAIL_RE.search(txt[i:start])
            if pm and pm.end() == start - i and j < len(txt) and txt[j] == ')':
                # unary `*` only — a * (raddr(...)) is multiplication
                pms = i + pm.start()
                k = pms - 1
                while k >= 0 and txt[k] in ' \t':
                    k -= 1
                if k < 0 or not (txt[k].isalnum() or txt[k] in '_)]'):
                    # *(raddr(...)) derefs a db* -> db; only collapse to
                    # ->field when the field is itself a db, else keep a
                    # byte-granular deref of the member address.
                    ft = fieldtypes.get(field)
                    out.append(txt[i:pms])
                    if ft == 'db':
                        out.append('((%s*)raddr(%s,%s))->%s'
                                   % (st, seg, rest or '0', field))
                    else:
                        out.append('*(db*)&((%s*)raddr(%s,%s))->%s'
                                   % (st, seg, rest or '0', field))
                    i = j + 1  # consume the ')'
                    continue
        if cast is not None and cast == fieldtypes.get(field):
            out.append(txt[i:pre_start])
            out.append('((%s*)raddr(%s,%s))->%s' % (st, seg, rest, field))
        else:
            # keep the value a db*: &x->f is field-typed, and any surrounding
            # pointer arithmetic must stay byte-scaled like the original raddr.
            out.append(txt[i:m.start()])
            out.append('((db*)&((%s*)raddr(%s,%s))->%s)' % (st, seg, rest, field))
        i = j
    return ''.join(out)


# ---------------------------------------------------------------------------
# consecutive numeric #define groups -> enum / constexpr
# ---------------------------------------------------------------------------
DEFINE_NUM_RE = re.compile(
    r'^\s*#define\s+([A-Za-z_]\w*)\s+\(?\s*(-?0[xX][0-9a-fA-F]+|-?\d+)\s*\)?\s*(//.*)?$')


# {db tmp999=0;MYCOPY(videomode)} -> videomode = 0;
# {tab tmp999={a,b,c};MYCOPY(tab1)}     -> tab1 = tab{a,b,c};
MYCOPY_SCALAR_RE = re.compile(
    r'\{\s*((?:struct\s+)?\w+)\s+tmp999\s*=\s*([^{};]+?|\{(?:[^{}]|\{[^{}]*\})*\})\s*;\s*MYCOPY\((\w+)\)\s*\}')
# {db tmp999[10]={..};MYCOPY(str)} -> {db tmp999[10]={..};memcpy(str,tmp999,sizeof tmp999);}
MYCOPY_ARRAY_RE = re.compile(
    r'\{((?:struct\s+)?\w+\s+tmp999\[\d+\]\s*=\s*(?:\{(?:[^{}]|\{[^{}]*\})*\}|"[^"]*"));MYCOPY\((\w+)\)\s*\}')


def rewrite_mycopy(txt):
    def scal(m):
        t, v, x = m.group(1), m.group(2), m.group(3)
        if t.startswith('struct '):
            return '{%s tmp999=%s;memcpy(&%s,&tmp999,sizeof tmp999);}' % (t, v, x)
        return '%s = %s%s;' % (x, t if v.startswith('{') else '', v)
    txt = MYCOPY_SCALAR_RE.sub(scal, txt)
    return MYCOPY_ARRAY_RE.sub(
        lambda m: '{%s;memcpy(&%s,&tmp999,sizeof tmp999);}' % (m.group(1), m.group(2)), txt)


def collect_preproc_names(files):
    names = set()
    pat = re.compile(r'^\s*#\s*(?:if|ifdef|ifndef|elif)\b(.*)$', re.M)
    usepat = re.compile(r'\b([A-Za-z_]\w*)\b')
    for path in files:
        txt = open(path, encoding='utf-8', errors='replace').read()
        for m in pat.finditer(txt):
            names.update(usepat.findall(m.group(1)))
        names.update(re.findall(r'defined\s*\(?\s*([A-Za-z_]\w*)', txt))
        names.update(re.findall(r'#\s*undef\s+([A-Za-z_]\w*)', txt))
    return names


def rewrite_defines(txt, protected):
    lines, out, i = txt.split('\n'), [], 0
    while i < len(lines):
        m = DEFINE_NUM_RE.match(lines[i])
        if not m or m.group(1) in protected:
            out.append(lines[i])
            i += 1
            continue
        grp = [m]
        j = i + 1
        while j < len(lines):
            m2 = DEFINE_NUM_RE.match(lines[j])
            if m2 and m2.group(1) not in protected:
                grp.append(m2)
                j += 1
            else:
                break
        if len(grp) >= 2:
            out.append('enum {')
            for g in grp:
                cmt = '   %s' % g.group(3) if g.group(3) else ''
                out.append('    %s = %s,%s' % (g.group(1), g.group(2), cmt))
            out.append('};')
        else:
            g = grp[0]
            out.append('constexpr int %s = %s;' % (g.group(1), g.group(2)))
        i = j
    return '\n'.join(out)


# Hand-written runtime headers (not generated from .lst) — leave their
# #defines alone; enum/constexpr rewrites there collide with stock macros.
RUNTIME_HEADERS = {
    'asm.h', 'asm_16.h', 'asm_32.h', 'asm_regs_m2c.h', 'data_layouts.h',
    'error.h', 'mcb.h', 'memmgr.h', 'shadowstack.h', 'vgapal.h',
}


# ---------------------------------------------------------------------------
def main():
    srcdir = sys.argv[1] if len(sys.argv) > 1 else 'src'
    print('collecting bindings/fields ...')
    anchors, bindings, field2struct, struct_sizes, _, fieldtypes = collect(srcdir)
    for w in FIELD_STOPWORDS:
        field2struct.pop(w, None)
    print('  %d anchors, %d bindings, %d fields, %d structs' %
          (len(anchors), len(bindings), len(field2struct), len(struct_sizes)))

    emitted = emit_data_layouts(os.path.join(srcdir, 'data_layouts.h'),
                                anchors, bindings, struct_sizes)
    print('  data_layouts.h: %d members' % len(emitted))

    # every _data_refs_*.cpp includes _data.h — route the layouts through it
    dh = os.path.join(srcdir, '_data.h')
    if os.path.exists(dh):
        txt = open(dh, encoding='utf-8', errors='replace').read()
        if 'data_layouts.h' not in txt:
            open(dh, 'w').write(txt + '\n#include "data_layouts.h"\n')

    files = sorted(glob.glob(os.path.join(srcdir, '*_lifted.cpp')) +
                   glob.glob(os.path.join(srcdir, '*.h')))
    files = [f for f in files
             if os.path.basename(f) not in RUNTIME_HEADERS]
    protected = collect_preproc_names(files)
    n_raddr = n_bind = n_def = n_copy = 0
    for path in files:
        txt = open(path, encoding='utf-8', errors='replace').read()
        new = rewrite_mycopy(txt)
        if new != txt:
            n_copy += 1
        txt = new
        new = rewrite_raddr(txt, field2struct, fieldtypes)
        if new != txt:
            n_raddr += 1
        txt = new
        if os.path.basename(path).startswith('_data_refs_'):
            new = rewrite_bindings(txt, emitted)
            if new != txt:
                n_bind += 1
            txt = new
        if path.endswith('.h'):
            new = rewrite_defines(txt, protected)
            if new != txt:
                n_def += 1
            txt = new
        open(path, 'w').write(txt)
    print('  raddr->member: %d files; bindings: %d; defines: %d; mycopy: %d' %
          (n_raddr, n_bind, n_def, n_copy))


if __name__ == '__main__':
    main()
