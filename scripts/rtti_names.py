# rtti_names.py: recover MSVC RTTI class names, vtables and vfunc slots from the image.
# Output: recomp/data/rtti_names.tsv (ea, name, kind) with kind in class|vftable|vfunc.
import csv
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cfg
from pe_image import Image

im = Image(cfg.game_exe())
secs = {s[0]: s for s in im.secs}
text = secs[".text"]
lo, hi = text[2], text[2] + text[1]
buffers = []
for s in im.secs:
    if s[0] in (".rdata", ".data") and s[3]:
        buffers.append((s[2], im.read(s[2], s[3])))


def read(v, n):
    b = im.read(v, n)
    return b if len(b) == n else None


def u32(v):
    b = read(v, 4)
    return struct.unpack("<I", b)[0] if b else None


def find(bufs, value):
    pat = struct.pack("<I", value)
    hits = []
    for va, data in bufs:
        pos = data.find(pat)
        while pos >= 0:
            hits.append(va + pos)
            pos = data.find(pat, pos + 1)
    return hits


descriptors = []
for va, data in buffers:
    pos = data.find(b".?AV")
    while pos >= 0:
        end = data.find(b"\0", pos)
        name = data[pos:end].decode("latin-1", "replace")
        descriptors.append((va + pos - 8, name))
        pos = data.find(b".?AV", pos + 1)
    pos = data.find(b".?AU")
    while pos >= 0:
        end = data.find(b"\0", pos)
        name = data[pos:end].decode("latin-1", "replace")
        descriptors.append((va + pos - 8, name))
        pos = data.find(b".?AU", pos + 1)

rows = []
vtables = {}
for td, mangled in descriptors:
    base = mangled
    for p in (".?AV", ".?AU"):
        if base.startswith(p):
            base = base[len(p):]
            break
    base = base.split("@@")[0]
    if not base:
        continue
    rows.append((td, "rtti_" + base, "class"))
    for col_na in find(buffers, td):
        col = col_na - 12
        if u32(col) != 0:
            continue
        for vt_na in find(buffers, col):
            vt = vt_na + 4
            if vt in vtables:
                continue
            vtables[vt] = base
            rows.append((vt, "vftable_" + base, "vftable"))
            slot = vt
            index = 0
            while True:
                fn = u32(slot)
                if fn is None or not (lo <= fn < hi):
                    break
                rows.append((fn, "%s::vfunc%d" % (base, index), "vfunc"))
                slot += 4
                index += 1
            break

out = os.path.join(cfg.DATA, "rtti_names.tsv")
os.makedirs(cfg.DATA, exist_ok=True)
seen = set()
with open(out, "w", encoding="utf-8", newline="") as f:
    w = csv.writer(f, delimiter="\t")
    w.writerow(["ea", "name", "kind"])
    for ea, name, kind in rows:
        key = (ea, name)
        if key in seen:
            continue
        seen.add(key)
        w.writerow(["%08x" % ea, name, kind])
print("type descriptors %d, vtables %d, rows %d -> %s" % (len(descriptors), len(vtables), len(seen), out))
