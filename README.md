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

## Provenance

Original sources: IDA `.lst` listings of `FLIGHT.EXE`, `LIB8086` library,
and `VISUAL` modules → `lst2asm.py` → `masm2c` (`-m persegment -l`) →
`tools/prettify.py`. Generated code; comments preserve original assembly
(lines marked `/* ... */`).
