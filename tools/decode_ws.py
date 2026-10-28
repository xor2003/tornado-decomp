#!/usr/bin/env python3
"""Decode Tornado's mode-X work screen / VGA plane data to a linear image,
and optionally diff two captures.

Tornado renders into a 64000-byte planar work screen: four planes of 16000
bytes each (80x200 bytes per plane), stored plane-major:

    WorkScreen[32000] @ flat 0xe060   -> planes 0,1
    CopyScreen[32000] @ flat 0x15d60  -> planes 2,3

storeworkscreen() (VGAPANEL.ASM) blits it verbatim to VGA with
map-mask 1,2,4,8 and rep movsb of (320*200)/4 each -- i.e. each plane is a
plain 80-byte-per-row plane of the 320x200 screen.

    pixel(x, y) = buf[(x % 4) * 16000 + y * 80 + x // 4]

Note: the sky region looks "vertically striped" when decoded -- that is the
real stored data. Tornado's fast sky is drawn with column dithering whose
period is 4 px, so all four planes hold identical bytes there; on a CRT it
blends to a gradient.

Inputs:
  --kvikdos FILE      kvikdos --video-dump sidecar (.png.mem, flat guest
                      memory; work screen at +0xe060)
  --mdata FILE        translated binary's /tmp/mdata.bin dump (base+0x70,
                      0x2c000 bytes; work screen at +0xdff0)
  --raw FILE          raw 64000-byte work screen dump (or --size-trimmed)
  --offset N          override the work screen offset inside the input
  -o OUT.pgm          decoded grayscale output (palette indices)
  --diff OTHER.pgm    compare with another decoded image
"""
import argparse
import sys

WS_FLAT_OFF = 0xE060          # work screen in flat guest memory
MDATA_BASE = 0x70             # mdata.bin starts at flat 0x70
W, H = 320, 200
PLANE = (W // 4) * H          # 16000
SCREEN = PLANE * 4            # 64000


def load_workscreen(path, kind, offset):
    d = open(path, 'rb').read()
    if kind == 'kvikdos':
        off = WS_FLAT_OFF if offset is None else offset
    elif kind == 'mdata':
        off = WS_FLAT_OFF - MDATA_BASE if offset is None else offset
    else:
        off = 0 if offset is None else offset
    buf = d[off:off + SCREEN]
    if len(buf) < SCREEN:
        sys.exit(f'work screen truncated: need {SCREEN} bytes at +{off:#x}, got {len(buf)}')
    return buf


def deplane(buf):
    out = bytearray(W * H)
    for y in range(H):
        row = y * (W // 4)
        for x in range(W):
            out[y * W + x] = buf[(x % 4) * PLANE + row + x // 4]
    return out


def write_pgm(path, pix):
    with open(path, 'wb') as f:
        f.write(b'P5\n%d %d\n255\n' % (W, H) + bytes(pix))


def main():
    ap = argparse.ArgumentParser()
    src = ap.add_mutually_exclusive_group(required=True)
    src.add_argument('--kvikdos')
    src.add_argument('--mdata')
    src.add_argument('--raw')
    ap.add_argument('--offset', type=lambda s: int(s, 0))
    ap.add_argument('-o', '--out')
    ap.add_argument('--diff', help='second decoded .pgm to compare')
    ap.add_argument('--diff-out', help='write diff visualization .pgm')
    a = ap.parse_args()

    kind = 'kvikdos' if a.kvikdos else 'mdata' if a.mdata else 'raw'
    path = a.kvikdos or a.mdata or a.raw
    pix = deplane(load_workscreen(path, kind, a.offset))
    if a.out:
        write_pgm(a.out, pix)

    if a.diff:
        hdr = 13  # len(b'P5\n320 200\n255\n')
        other = open(a.diff, 'rb').read()[-W * H:]
        ndiff = sum(1 for i in range(W * H) if pix[i] != other[i])
        print(f'diff: {ndiff}/{W * H} pixels ({100.0 * ndiff / (W * H):.2f}%)')
        if a.diff_out:
            write_pgm(a.diff_out, bytearray(
                255 if pix[i] != other[i] else pix[i] // 4
                for i in range(W * H)))


if __name__ == '__main__':
    main()
