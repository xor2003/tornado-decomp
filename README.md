# Tornado (1993) — lifted source tree

Machine-translated C++ of **Tornado: Operation Desert Storm** (Digital
Integration, 1993), produced from the original 16-bit MASM sources by
[masm2c](https://github.com/xor2003/masm2c) with the `-l` lift pass, then
restyled by `tools/prettify.py` into more idiomatic C++.

This is **decompiled-style code**: functions still pass arguments in x86
register variables (`ax`, `bx`, `si`, `di`…), keep the original `goto`
control flow, and address DOS memory through `raddr()`. What *has* been
recovered into real C++ structure:

- **Typed data segments** — `src/data_layouts.h` defines one packed struct
  per original segment (`Seg_data`, `Seg_wpndata`, `Seg_stack`, …) with
  named members at their exact original offsets. Repeated records become
  real arrays (`Row_wpndata_0 weaponlist[128]` =
  `{mobile, viewpoint, weapon}` × `NUM_WEAPONS`,
  `impact impactlist[128]` up to `impactlistend`), same-type runs become
  `T name[N]`, and `Xxx`/`XxxEnd` boundary labels coalesce into arrays.
  Global variables are real C++ references into those structs
  (`dw& weaponptr = _seg_data.weaponptr[0];`) instead of
  `*((dw*)(&data+0xd57a))`.
- **Structs** — the original `STRUC` definitions (`mobile`, `weapon`,
  `aircraft`, `waypoint`, `airfield`, …) live in `src/_data_types.h` and the
  per-module headers.
- **Field access** — register-indexed record reads are rewritten to member
  access: `*(dw*)raddr(ds, si+pack_weap_type)` →
  `((package*)raddr(ds,si))->pack_weap_type`.
- **Enums / constants** — flag and constant blocks are `enum {}` /
  `constexpr`, matching the original `EQU`s.

## Layout

- `src/` — lifted translation units (`*_lifted.cpp`), generated headers,
  `data_layouts.h`, and the masm2c runtime (`asm.h`, `asm.cpp`, `memmgr.*`)
- `tools/prettify.py` — the restyle pass (re-runnable text filters)

## Building

```sh
./build.sh                      # produces ./tornado_lifted  (needs SDL2 + ncurses)
TORNADO_GAMEDIR=/path/to/TORNADO/FLIGHT ./run_tornado.sh
```

To re-run the restyle pass on a fresh copy of the lifted sources:

```sh
cp /path/to/src_tornado/*_lifted.cpp /path/to/src_tornado/*.h src/
python3 tools/prettify.py src   # regenerates src/data_layouts.h + rewrites
```

## Testing

```sh
bash tests/run_tests.sh      # full suite; SKIP_GOLDEN=1 to skip the e2e run
```

Four layers, each aimed at a different regression class:

1. **`tests/test_procs.cpp`** — semantic unit tests: fabricate an
   `m2c::_STATE` + sentinel return frame, call lifted procs through their
   weak wrappers, assert registers/memory. Expected values are derived
   from the original `.ASM` sources (182 assertions; e.g. `randx` is
   checked against a reference LFSR, trig tables are planted at their
   stack-image offsets).
2. **`tools/test_codegen.py`** — static audit of every lifted module:
   `.ASM` `label: REPT` bodies must survive translation, and removed
   `ret`s must leave a surviving sibling — the loss classes fixed in
   `d8ff754`/`f195b12`.
3. **`tools/gen_smoke.py`** — ABI smoke over all 1659 weak proc wrappers:
   each called in a forked child with sentinel state (1s watchdog,
   pipe sentinel so `exit()` can't fake a return), results diffed
   against `tests/smoke_expected.txt`.
4. **`tools/test_golden.sh`** — deterministic end-to-end: fixed-step
   timer + committed keyscript, records per-tick state hashes and
   per-frame render hashes (`M2C_TICKHASH`/`M2C_FRAMEHASH`) and diffs
   them against `tests/golden/`. `--record` regenerates. Needs
   `TORNADO_GAMEDIR` to point at the FLIGHT data directory.

`tools/test_prettify.py` — unit tests for the restyle pass (run with
`python3 tools/test_prettify.py`).

## Provenance

Original sources: IDA `.lst` listings of `FLIGHT.EXE`, `LIB8086` library,
and `VISUAL` modules → `lst2asm.py` → `masm2c` (`-m persegment -l`) →
`tools/prettify.py`. Generated code; comments preserve original assembly
(lines marked `/* ... */`).
