#!/usr/bin/env python3
"""Unit tests for tools/prettify.py — normal cases and edge cases.

Run:  python3 -m unittest tools.test_prettify -v
  or: python3 tools/test_prettify.py
"""
import os
import sys
import tempfile
import unittest

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import prettify as P


# ---------------------------------------------------------------------------
class TestParseStructs(unittest.TestCase):
    def test_basic_fields_and_sizes(self):
        sizes, fields = P.parse_structs('''
struct foo {
    db a;
    dw b;
    dd c;
};
''')
        self.assertEqual(fields['foo'], [('a', 'db', 1), ('b', 'dw', 1), ('c', 'dd', 1)])
        self.assertEqual(sizes['foo'], 7)

    def test_array_field(self):
        sizes, fields = P.parse_structs('struct a { dw x[4]; };')
        self.assertEqual(fields['a'], [('x', 'dw', 4)])
        self.assertEqual(sizes['a'], 8)

    def test_nested_struct(self):
        sizes, _ = P.parse_structs('''
struct inner { db x; db y; };
struct outer { inner i; dw w; inner j[2]; };
''')
        self.assertEqual(sizes['inner'], 2)
        self.assertEqual(sizes['outer'], 2 + 2 + 4)

    def test_comment_stripping(self):
        sizes, fields = P.parse_structs('''
struct s {
    db a;   // a comment
    dw b;   /* not handled but FIELD_DECL_RE still matches 'dw b' prefix */
};
''')
        self.assertEqual(sizes['s'], 3)

    def test_unknown_member_type_gives_none_size(self):
        sizes, _ = P.parse_structs('struct s { mystery m; };')
        self.assertIsNone(sizes.get('s'))

    def test_empty_body(self):
        sizes, fields = P.parse_structs('struct e {};')
        self.assertEqual(fields['e'], [])
        self.assertEqual(sizes['e'], 0)

    def test_no_structs(self):
        sizes, fields = P.parse_structs('int x; // no structs here')
        self.assertEqual(sizes, {})
        self.assertEqual(fields, {})

    def test_typedef_style_ignored(self):
        # `typedef struct { ... } name;` is not matched by STRUCT_RE (needs
        # `struct name {`) — document the limitation.
        sizes, _ = P.parse_structs('typedef struct { db a; } named;')
        self.assertEqual(sizes, {})

    def test_recursive_struct_no_hang(self):
        # depth cap (8) — a self-referential type must terminate
        sizes, _ = P.parse_structs('struct n { n* next; db v; };')
        # `n*` is not a known type -> None or pointer-unhandled; must not hang
        self.assertIn('n', sizes.keys() | set())  # whatever it returns


# ---------------------------------------------------------------------------
class TestParseInt(unittest.TestCase):
    def test_hex(self):
        self.assertEqual(P.parse_int('0x1a2b'), 0x1a2b)

    def test_dec(self):
        self.assertEqual(P.parse_int('1234'), 1234)

    def test_upper_hex(self):
        self.assertEqual(P.parse_int('0XFF'), 255)


# ---------------------------------------------------------------------------
class TestTsize(unittest.TestCase):
    def test_base(self):
        self.assertEqual(P.tsize('db', {}), 1)
        self.assertEqual(P.tsize('dw', {}), 2)
        self.assertEqual(P.tsize('dd', {}), 4)

    def test_struct_type(self):
        self.assertEqual(P.tsize('foo', {'foo': 12}), 12)

    def test_unknown(self):
        self.assertIsNone(P.tsize('nope', {}))


# ---------------------------------------------------------------------------
class TestPickName(unittest.TestCase):
    def test_struct_typed_wins(self):
        cands = [('a_scalar', 'dw', 1), ('a_struct', 'weapon', 1)]
        self.assertEqual(P.pick_name(cands, {'weapon': 10})[0], 'a_struct')

    def test_real_name_beats_dummy(self):
        cands = [('dummy_x', 'dw', 1), ('realname', 'dw', 1)]
        self.assertEqual(P.pick_name(cands, {})[0], 'realname')

    def test_falls_back_to_first(self):
        cands = [('dummy_a', 'dw', 1), ('dummy_b', 'dw', 1)]
        self.assertEqual(P.pick_name(cands, {})[0], 'dummy_a')

    def test_m2c_prefix_is_dummy(self):
        cands = [('__m2c_row', 'dw', 1), ('visible', 'dw', 1)]
        self.assertEqual(P.pick_name(cands, {})[0], 'visible')


# ---------------------------------------------------------------------------
def _emit(anchors, bindings):
    """Run emit_data_layouts into a temp file, return (text, emitted)."""
    with tempfile.TemporaryDirectory() as td:
        p = os.path.join(td, 'data_layouts.h')
        emitted = P.emit_data_layouts(p, anchors, bindings, {'weapon': 6})
        return open(p).read(), emitted


class TestEmitDataLayouts(unittest.TestCase):
    def test_scalar_member(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x10, 'score', 'dw', 1)]
        txt, emitted = _emit(anchors, binds)
        self.assertIn('dw score;', txt)
        self.assertEqual(emitted[('data', 0x10)], ('score', 'dw', 1))

    def test_gap_padding(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'a', 'db', 1), ('data', 0x5, 'b', 'db', 1)]
        txt, _ = _emit(anchors, binds)
        self.assertIn('db _pad_1[4];', txt)

    def test_run_of_identical_scalars_becomes_array(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x10 + i * 2, 'w%d' % i, 'dw', 1) for i in range(4)]
        txt, emitted = _emit(anchors, binds)
        self.assertIn('dw w0[4];', txt)
        self.assertEqual(emitted[('data', 0x12)], ('w0[1]', 'dw', 1))

    def test_run_of_two_stays_scalar(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x10, 'w0', 'dw', 1), ('data', 0x12, 'w1', 'dw', 1)]
        txt, _ = _emit(anchors, binds)
        self.assertIn('dw w0;', txt)
        self.assertIn('dw w1;', txt)
        self.assertNotIn('[2]', txt)

    def test_record_cycle_row_struct(self):
        # {db,dw} pair repeated 3x at stride 3 -> Row struct
        anchors = {'data': 0x100}
        binds = []
        for c in range(3):
            binds.append(('data', 0x20 + c * 3, 'r%d_a' % c, 'db', 1))
            binds.append(('data', 0x21 + c * 3, 'r%d_b' % c, 'dw', 1))
        txt, emitted = _emit(anchors, binds)
        self.assertIn('Row_data_20', txt)
        self.assertIn('[3];', txt)
        self.assertEqual(emitted[('data', 0x20)], ('r0_a[0].f0', 'db', 1))
        self.assertEqual(emitted[('data', 0x21)], ('r0_a[0].f1', 'dw', 1))
        self.assertEqual(emitted[('data', 0x23 + 1)], ('r0_a[1].f1', 'dw', 1))

    def test_record_cycle_two_rows_not_enough(self):
        anchors = {'data': 0x100}
        binds = []
        for c in range(2):
            binds.append(('data', 0x20 + c * 3, 'r%d_a' % c, 'db', 1))
            binds.append(('data', 0x21 + c * 3, 'r%d_b' % c, 'dw', 1))
        txt, _ = _emit(anchors, binds)
        self.assertNotIn('Row_data_20', txt)

    def test_end_label_coalesce(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x40, 'impactlist', 'weapon', 1),
                 ('data', 0x40 + 128 * 6, 'impactlistend', 'weapon', 1)]
        txt, emitted = _emit(anchors, binds)
        self.assertIn('weapon impactlist[128];', txt)
        self.assertEqual(emitted[('data', 0x40)], ('impactlist[0]', 'weapon', 1))
        self.assertEqual(emitted[('data', 0x40 + 6)], ('impactlist[1]', 'weapon', 1))

    def test_end_label_blocked_by_interior_binding(self):
        # a binding inside the gap means foo..fooend is not a pure array
        anchors = {'data': 0x100}
        binds = [('data', 0x40, 'lst', 'dw', 1),
                 ('data', 0x44, 'other', 'dw', 1),
                 ('data', 0x50, 'lstend', 'dw', 1)]
        txt, _ = _emit(anchors, binds)
        self.assertNotIn('dw lst[', txt)

    def test_keyword_name_suffixed(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'operator', 'dw', 1)]
        txt, emitted = _emit(anchors, binds)
        # must not emit `dw operator;`
        self.assertNotIn(' dw operator;', txt)
        self.assertIn('_0;', txt)

    def test_name_collision_suffixed(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'x', 'db', 1), ('data', 0x8, 'x', 'db', 1)]
        txt, _ = _emit(anchors, binds)
        self.assertIn('db x;', txt)
        self.assertIn('db x_8;', txt)

    def test_overlapping_offset_skipped(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'big', 'dd', 1), ('data', 0x2, 'inside', 'dw', 1)]
        txt, emitted = _emit(anchors, binds)
        # interior offset falls back to byte-pointer into enclosing member
        ent = emitted[('data', 0x2)]
        self.assertIsNone(ent[1])
        self.assertEqual(ent[2], 2)
        self.assertEqual(ent[0], 'big')

    def test_interior_of_array_element(self):
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'arr', 'db', 4), ('data', 0x2, 'mid', 'dw', 1)]
        txt, emitted = _emit(anchors, binds)
        self.assertIn('db arr[4];', txt)
        self.assertEqual(emitted[('data', 0x2)], ('arr[2]', 'db', 1))

    def test_seg_accessor_lines(self):
        anchors = {'data': 0x100, 'wsdata': 0x200}
        binds = [('data', 0x0, 'a', 'db', 1)]
        txt, _ = _emit(anchors, binds)
        self.assertIn('inline Seg_data& _seg_data = *(Seg_data*)&data;', txt)
        # wsdata has no bindings -> no struct, no accessor
        self.assertNotIn('_seg_wsdata', txt)

    def test_binding_to_unknown_segment_ignored(self):
        anchors = {'data': 0x100}
        binds = [('noseg', 0x0, 'a', 'db', 1)]
        txt, emitted = _emit(anchors, binds)
        self.assertEqual(emitted, {})

    def test_struct_keyword_type_size(self):
        # `struct clock` bindings: the `struct` prefix must not hide the type
        # from tsize() — sizeof=1 under-size shifts every later member.
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'clk', 'struct clock', 1),
                 ('data', 0x4, 'after', 'dw', 1)]
        with tempfile.TemporaryDirectory() as td:
            p = os.path.join(td, 'data_layouts.h')
            emitted = P.emit_data_layouts(
                p, anchors, binds, {'clock': 4})
            txt = open(p).read()
        # no padding may be emitted between clk and after
        self.assertNotIn('_pad', txt)
        self.assertEqual(emitted[('data', 0x4)], ('after', 'dw', 1))

    def test_struct_row_member_count_array_binding(self):
        # bindings of T(&x)[N] inside a run element must keep array-ness info
        # so rewrite_bindings emits the cast form, not a direct element ref
        anchors = {'data': 0x100}
        binds = [('data', 0x0, 'tab', 'db', 4)] + [
            ('data', 0x4 + i * 4, 'e%d' % i, 'db', 4) for i in range(3)]
        txt, emitted = _emit(anchors, binds)
        # db[4] run -> single array of 16
        self.assertIn('db tab[16];', txt)
        self.assertEqual(emitted[('data', 0x0)], ('tab[0]', 'db', 1))


# ---------------------------------------------------------------------------
class TestRewriteBindings(unittest.TestCase):
    def test_scalar_direct(self):
        emitted = {('data', 0x10): ('score', 'dw', 1)}
        src = 'dw& score = *((dw*)(&data+0x10));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('dw & score = _seg_data.score;', out)

    def test_array_direct(self):
        emitted = {('data', 0x20): ('buf', 'db', 16)}
        src = 'db (&buf)[16] = *((db(*)[16])(&data+0x20));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('db (&buf)[16] = _seg_data.buf;', out)

    def test_type_mismatch_casts(self):
        emitted = {('data', 0x10): ('row0', 'weapon', 1)}
        src = 'dw& weaponlist = *((dw*)(&data+0x10));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('dw & weaponlist = *(dw*)((db*)&_seg_data.row0);', out)

    def test_array_type_mismatch_casts(self):
        emitted = {('data', 0x10): ('row0', 'weapon', 1)}
        src = 'db (&bytes)[6] = *((db(*)[6])(&data+0x10));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('db (&bytes)[6] = *(db(*)[6])((db*)&_seg_data.row0);', out)

    def test_interior_offset(self):
        emitted = {('data', 0x12): ('big', None, 2)}
        src = 'dw& mid = *((dw*)(&data+0x12));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('dw & mid = *(dw*)((db*)&_seg_data.big+2);', out)

    def test_interior_offset_array(self):
        emitted = {('data', 0x12): ('big', None, 2)}
        src = 'db (&mid)[4] = *((db(*)[4])(&data+0x12));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('db (&mid)[4] = *(db(*)[4])((db*)&_seg_data.big+2);', out)

    def test_unknown_offset_untouched(self):
        src = 'dw& x = *((dw*)(&data+0x999));'
        self.assertEqual(P.rewrite_bindings(src, {}), src)

    def test_run_element_binding(self):
        # element expr 'arr[1]' binds a db scalar: type match + cnt 1
        emitted = {('data', 0x12): ('arr[1]', 'db', 1)}
        src = 'db& e1 = *((db*)(&data+0x12));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('db & e1 = _seg_data.arr[1];', out)

    def test_row_field_binding(self):
        emitted = {('data', 0x21): ('rows[0].f1', 'dw', 1)}
        src = 'dw& b = *((dw*)(&data+0x21));'
        out = P.rewrite_bindings(src, emitted)
        self.assertIn('dw & b = _seg_data.rows[0].f1;', out)

    def test_indent_preserved(self):
        emitted = {('data', 0x10): ('score', 'dw', 1)}
        src = '    dw& score = *((dw*)(&data+0x10));'
        out = P.rewrite_bindings(src, emitted)
        self.assertTrue(out.startswith('    dw & score'))


# ---------------------------------------------------------------------------
class TestSplitTop(unittest.TestCase):
    def test_simple(self):
        self.assertEqual(P.split_top('a+b'), [('+', 'a'), ('+', 'b')])

    def test_subtraction(self):
        self.assertEqual(P.split_top('a-b'), [('+', 'a'), ('-', 'b')])

    def test_leading_minus_glues(self):
        self.assertEqual(P.split_top('-a+b'), [('+', '-a'), ('+', 'b')])

    def test_nested_parens(self):
        self.assertEqual(P.split_top('a+(b-c)+d'),
                         [('+', 'a'), ('+', '(b-c)'), ('+', 'd')])

    def test_arrow_not_split(self):
        self.assertEqual(P.split_top('p->f+x'), [('+', 'p->f'), ('+', 'x')])

    def test_unary_minus_after_operator(self):
        # a*-b: '-' after '*' is unary, stays in term
        self.assertEqual(P.split_top('a*-b'), [('+', 'a*-b')])

    def test_double_plus(self):
        # a++b: second '+' after '+' is unary
        self.assertEqual(P.split_top('a++b'), [('+', 'a'), ('+', '+b')])

    def test_empty(self):
        self.assertEqual(P.split_top(''), [])

    def test_single(self):
        self.assertEqual(P.split_top('si'), [('+', 'si')])

    def test_shift_not_split(self):
        # 'a>>1' has no +/- so stays one term
        self.assertEqual(P.split_top('a>>1+b'),
                         [('+', 'a>>1'), ('+', 'b')])


# ---------------------------------------------------------------------------
class TestTryUnwrap(unittest.TestCase):
    def test_full_wrap(self):
        self.assertEqual(P.try_unwrap('(a+b)'), 'a+b')

    def test_nested(self):
        self.assertEqual(P.try_unwrap('((x))'), '(x)')

    def test_partial_wrap_returns_none(self):
        self.assertIsNone(P.try_unwrap('(a)+b'))

    def test_not_wrapped(self):
        self.assertIsNone(P.try_unwrap('a+b'))

    def test_two_groups(self):
        self.assertIsNone(P.try_unwrap('(a)(b)'))

    def test_empty_parens(self):
        self.assertEqual(P.try_unwrap('()'), '')


# ---------------------------------------------------------------------------
class TestJoinTerms(unittest.TestCase):
    def test_basic(self):
        self.assertEqual(P.join_terms([('+', 'a'), ('+', 'b')]), 'a+b')

    def test_negative(self):
        self.assertEqual(P.join_terms([('+', 'a'), ('-', 'b')]), 'a-b')

    def test_leading_negative(self):
        self.assertEqual(P.join_terms([('-', 'a'), ('+', 'b')]), '-a+b')

    def test_empty_terms_dropped(self):
        self.assertEqual(P.join_terms([('+', ''), ('+', 'b')]), 'b')


# ---------------------------------------------------------------------------
class TestFindField(unittest.TestCase):
    def setUp(self):
        self.f2s = {'pack_weap_type': 'package', 'mob_anim': 'mobile'}

    def test_field_term(self):
        self.assertEqual(P.find_field('si+pack_weap_type', self.f2s),
                         ('pack_weap_type', 'si'))

    def test_field_first(self):
        self.assertEqual(P.find_field('pack_weap_type+si', self.f2s),
                         ('pack_weap_type', 'si'))

    def test_no_field(self):
        self.assertIsNone(P.find_field('si+di', self.f2s))

    def test_subtracted_field_ignored(self):
        self.assertIsNone(P.find_field('si-pack_weap_type', self.f2s))

    def test_wrapped_field(self):
        self.assertEqual(P.find_field('si+(pack_weap_type)', self.f2s),
                         ('pack_weap_type', 'si+(0)'))

    def test_field_inside_parens(self):
        self.assertEqual(P.find_field('(si+pack_weap_type+2)', self.f2s),
                         ('pack_weap_type', '(si+2)'))

    def test_embedded_name_not_field(self):
        # field-like substring inside a larger name must not match
        self.assertIsNone(P.find_field('si+pack_weap_typex', self.f2s))


# ---------------------------------------------------------------------------
class TestRewriteRaddr(unittest.TestCase):
    def setUp(self):
        self.f2s = {'pack_weap_type': 'package', 'mob_anim': 'mobile',
                    'wpn_type': 'weapon', 'bflag': 'foo'}
        self.ft = {'pack_weap_type': 'dw', 'mob_anim': 'dw',
                   'wpn_type': 'db', 'bflag': 'db'}

    def test_cast_collapse_type_match(self):
        src = 'x = *(dw*)raddr(ds, si+pack_weap_type);'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out, 'x = ((package*)raddr(ds,si))->pack_weap_type;')

    def test_cast_collapse_type_mismatch_keeps_dbptr(self):
        src = 'x = *(dd*)raddr(ds, si+pack_weap_type);'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out,
            'x = *(dd*)((db*)&((package*)raddr(ds,si))->pack_weap_type);')

    def test_bare_raddr(self):
        src = 'p = raddr(ds, bx+mob_anim);'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out, 'p = ((db*)&((mobile*)raddr(ds,bx))->mob_anim);')

    def test_pderef_db_field(self):
        # *(raddr(...)) reads a db; a db field collapses to ->field
        src = 'v = *(raddr(ds, si+wpn_type));'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out, 'v = ((weapon*)raddr(ds,si))->wpn_type;')

    def test_pderef_wide_field(self):
        # *(raddr(...)) on a dw field: keep byte deref of member address
        src = 'v = *(raddr(ds, si+mob_anim));'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out, 'v = *(db*)&((mobile*)raddr(ds,si))->mob_anim;')

    def test_multiplication_not_deref(self):
        src = 'v = a * (raddr(ds, si+wpn_type));'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        # must NOT collapse to ->field deref
        self.assertNotIn('))->wpn_type;', out)
        self.assertIn('a * ', out)

    def test_no_field_untouched(self):
        src = 'p = raddr(ds, si+0x10);'
        self.assertEqual(P.rewrite_raddr(src, self.f2s, self.ft), src)

    def test_single_arg_untouched(self):
        src = 'p = raddr(linear);'
        self.assertEqual(P.rewrite_raddr(src, self.f2s, self.ft), src)

    def test_unterminated_parensafe(self):
        src = 'p = raddr(ds, si+pack_weap_type'
        self.assertEqual(P.rewrite_raddr(src, self.f2s, self.ft), src)

    def test_multiple_in_line(self):
        src = ('a=*(dw*)raddr(ds, si+pack_weap_type);'
               'b=*(dw*)raddr(ds, di+pack_weap_type);')
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out.count('->pack_weap_type'), 2)
        self.assertNotIn('*(dw*)raddr', out)

    def test_rest_expression_preserved(self):
        src = 'x = *(dw*)raddr(es, (bx+4)+si+pack_weap_type);'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out,
            'x = ((package*)raddr(es,(bx+4)+si))->pack_weap_type;')

    def test_rest_empty_becomes_zero(self):
        src = 'x = *(dw*)raddr(ds, pack_weap_type);'
        out = P.rewrite_raddr(src, self.f2s, self.ft)
        self.assertEqual(out, 'x = ((package*)raddr(ds,0))->pack_weap_type;')

    def test_field_stopword_not_rewritten(self):
        # 'bx' etc are stopwords removed from field2struct by main(); here a
        # name that ISN'T in f2s must stay raw
        src = 'x = *(dw*)raddr(ds, si+bx);'
        self.assertEqual(P.rewrite_raddr(src, self.f2s, self.ft), src)


# ---------------------------------------------------------------------------
class TestRewriteMycopy(unittest.TestCase):
    def test_scalar(self):
        src = '{db tmp999=0;MYCOPY(videomode)}'
        self.assertEqual(P.rewrite_mycopy(src), 'videomode = 0;')

    def test_scalar_expr_value(self):
        src = '{dw tmp999=0x12+3;MYCOPY(x)}'
        self.assertEqual(P.rewrite_mycopy(src), 'x = 0x12+3;')

    def test_struct_aggregate(self):
        src = '{tab tmp999={16,26,30};MYCOPY(tab1)}'
        self.assertEqual(P.rewrite_mycopy(src), 'tab1 = tab{16,26,30};')

    def test_nested_aggregate(self):
        src = '{model tmp999={{4,5},{1,2,3}};MYCOPY(m)}'
        self.assertEqual(P.rewrite_mycopy(src), 'm = model{{4,5},{1,2,3}};')

    def test_struct_keyword_memcpy(self):
        src = '{struct clock tmp999={1,2};MYCOPY(clk)}'
        self.assertEqual(P.rewrite_mycopy(src),
            '{struct clock tmp999={1,2};memcpy(&clk,&tmp999,sizeof tmp999);}')

    def test_array_memcpy(self):
        src = '{db tmp999[40]={{1,2},{3,4}};MYCOPY(rwrthreats)}'
        self.assertEqual(P.rewrite_mycopy(src),
            '{db tmp999[40]={{1,2},{3,4}};memcpy(&rwrthreats,&tmp999,sizeof tmp999);}')

    def test_array_string_init(self):
        src = '{db tmp999[8]="HELLO";MYCOPY(msg)}'
        self.assertEqual(P.rewrite_mycopy(src),
            '{db tmp999[8]="HELLO";memcpy(&msg,&tmp999,sizeof tmp999);}')

    def test_no_mycopy_untouched(self):
        src = 'db tmp999 = 5; copy(x);'
        self.assertEqual(P.rewrite_mycopy(src), src)

    def test_multiple_sites(self):
        src = '{db tmp999=1;MYCOPY(a)} mid {dw tmp999=2;MYCOPY(b)}'
        out = P.rewrite_mycopy(src)
        self.assertIn('a = 1;', out)
        self.assertIn('b = 2;', out)
        self.assertNotIn('MYCOPY(', out)

    def test_deep_nesting_left_alone(self):
        # three levels of braces exceed the regex's one level — must stay
        src = '{t tmp999={{{1}}};MYCOPY(x)}'
        self.assertEqual(P.rewrite_mycopy(src), src)


# ---------------------------------------------------------------------------
class TestCollectPreprocNames(unittest.TestCase):
    def test_names_from_conditionals(self):
        with tempfile.TemporaryDirectory() as td:
            p = os.path.join(td, 'a.h')
            open(p, 'w').write('''
#if defined(FOO) || BAR > 3
#ifdef BAZ
#ifndef QUX
#elif WIZ
#undef GONE
''')
            names = P.collect_preproc_names([p])
        for n in ('FOO', 'BAR', 'BAZ', 'QUX', 'WIZ', 'GONE'):
            self.assertIn(n, names)

    def test_plain_defines_not_collected(self):
        with tempfile.TemporaryDirectory() as td:
            p = os.path.join(td, 'a.h')
            open(p, 'w').write('#define VAL 5\nint x = VAL;\n')
            names = P.collect_preproc_names([p])
        self.assertNotIn('VAL', names)


# ---------------------------------------------------------------------------
class TestRewriteDefines(unittest.TestCase):
    def test_group_to_enum(self):
        src = '#define A 1\n#define B 2\n#define C 3\n'
        out = P.rewrite_defines(src, set())
        self.assertIn('enum {', out)
        self.assertIn('A = 1,', out)
        self.assertIn('C = 3,', out)
        self.assertNotIn('#define A', out)

    def test_singleton_to_constexpr(self):
        src = '#define ONLY 7\n'
        self.assertEqual(P.rewrite_defines(src, set()),
                         'constexpr int ONLY = 7;\n')

    def test_protected_name_stays(self):
        src = '#define KEEP 1\n#define A 2\n#define B 3\n'
        out = P.rewrite_defines(src, {'KEEP'})
        self.assertIn('#define KEEP 1', out)

    def test_protected_breaks_group(self):
        src = '#define A 1\n#define KEEP 2\n#define B 3\n'
        out = P.rewrite_defines(src, {'KEEP'})
        self.assertIn('#define KEEP 2', out)
        # A singleton -> constexpr, B singleton -> constexpr
        self.assertIn('constexpr int A = 1;', out)
        self.assertIn('constexpr int B = 3;', out)

    def test_hex_and_negative(self):
        src = '#define H 0xFF\n#define N -5\n'
        out = P.rewrite_defines(src, set())
        self.assertIn('H = 0xFF,', out)
        self.assertIn('N = -5,', out)

    def test_parenthesized_value(self):
        src = '#define P (42)\n'
        self.assertEqual(P.rewrite_defines(src, set()),
                         'constexpr int P = 42;\n')

    def test_comment_preserved(self):
        src = '#define A 1 // first\n#define B 2\n'
        out = P.rewrite_defines(src, set())
        self.assertIn('// first', out)

    def test_non_numeric_untouched(self):
        src = '#define EXPR (a+b)\n#define STR "x"\n#define CALL f()\n'
        self.assertEqual(P.rewrite_defines(src, set()), src)

    def test_group_boundary_non_numeric(self):
        src = '#define A 1\n#define EXPR (a+b)\n#define B 2\n#define C 3\n'
        out = P.rewrite_defines(src, set())
        self.assertIn('#define EXPR (a+b)', out)
        self.assertIn('constexpr int A = 1;', out)
        self.assertIn('B = 2,', out)
        self.assertIn('C = 3,', out)

    def test_empty_input(self):
        self.assertEqual(P.rewrite_defines('', set()), '')

    def test_indented_define(self):
        src = '  #define A 9\n'
        self.assertEqual(P.rewrite_defines(src, set()),
                         'constexpr int A = 9;\n')


# ---------------------------------------------------------------------------
class TestCollect(unittest.TestCase):
    def test_anchor_and_binding(self):
        with tempfile.TemporaryDirectory() as td:
            open(os.path.join(td, '_data_refs_0_lifted.cpp'), 'w').write('''
db& data = *((db*)&m2c::m+0x1dba0);
dw& score = *((dw*)(&data+0x10));
db (&buf)[8] = *((db(*)[8])(&data+0x20));
''')
            open(os.path.join(td, 't.h'), 'w').write(
                'struct s { db f; };\n#define X offsetof(struct s, f)\n')
            anchors, binds, f2s, sizes, sfields, ftypes = P.collect(td)
        self.assertEqual(anchors['data'], 0x1dba0)
        self.assertIn(('data', 0x10, 'score', 'dw', 1), binds)
        self.assertIn(('data', 0x20, 'buf', 'db', 8), binds)
        self.assertEqual(f2s['f'], 's')
        self.assertEqual(ftypes['f'], 'db')

    def test_non_data_files_skipped_for_bindings(self):
        with tempfile.TemporaryDirectory() as td:
            open(os.path.join(td, 'code.cpp'), 'w').write(
                'dw& x = *((dw*)(&data+0x10));\n')
            open(os.path.join(td, '_data.cpp'), 'w').write(
                'db& data = *((db*)&m2c::m+0x100);\n')
            anchors, binds, *_ = P.collect(td)
        self.assertEqual(binds, [])
        self.assertIn('data', anchors)

    def test_binding_variants(self):
        with tempfile.TemporaryDirectory() as td:
            open(os.path.join(td, '_data.cpp'), 'w').write('''
db& data = *((db*)&m2c::m+0x0);
db& b1 = *((db*)(&data+0x1));
dw (&a2)[3] = *((dw(*)[3])(&data+0x2));
dd& b3 = *((dd*)(&data+8));
''')
            _, binds, *_ = P.collect(td)
        offs = {b[1] for b in binds}
        self.assertEqual(offs, {1, 2, 8})


# ---------------------------------------------------------------------------
class TestMainIntegration(unittest.TestCase):
    def test_end_to_end_tiny(self):
        with tempfile.TemporaryDirectory() as td:
            open(os.path.join(td, '_data.h'), 'w').write(
                '#pragma once\n#include "asm.h"\nextern db& data;\n')
            open(os.path.join(td, '_data.cpp'), 'w').write(
                'db& data = *((db*)&m2c::m+0x0);\n')
            open(os.path.join(td, '_data_refs_0_lifted.cpp'), 'w').write(
                'dw& score = *((dw*)(&data+0x10));\n')
            open(os.path.join(td, 'game_lifted.cpp'), 'w').write(
                'void f() { {db tmp999=0;MYCOPY(score)} }\n')
            open(os.path.join(td, 'defs.h'), 'w').write(
                '#define A 1\n#define B 2\n')
            open(os.path.join(td, 'memmgr.h'), 'w').write(
                '#define SUCCESS 0\n')
            argv = sys.argv
            try:
                sys.argv = ['prettify.py', td]
                P.main()
            finally:
                sys.argv = argv
            refs = open(os.path.join(td, '_data_refs_0_lifted.cpp')).read()
            self.assertIn('_seg_data.score', refs)
            self.assertIn('#include "data_layouts.h"',
                          open(os.path.join(td, '_data.h')).read())
            self.assertIn('score = 0;',
                          open(os.path.join(td, 'game_lifted.cpp')).read())
            self.assertIn('enum {',
                          open(os.path.join(td, 'defs.h')).read())
            # runtime headers are never rewritten
            self.assertIn('#define SUCCESS 0',
                          open(os.path.join(td, 'memmgr.h')).read())


if __name__ == '__main__':
    unittest.main()
