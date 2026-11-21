# classify.py: merge the borne_fixed names/facts with our address list and split the image into recomp targets.
# Output: functions.tsv (ea, name, size, category, callers, callees, apis) and a summary on stdout.
import json
from collections import Counter, defaultdict

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cfg

D = cfg.ida_dump()
OUT = os.path.join(cfg.DATA, "functions.tsv")
fn = json.load(open(os.path.join(D, "functions.json"), encoding="utf-8"))
facts = json.load(open(os.path.join(D, "facts.json"), encoding="utf-8"))
names = json.load(open(os.path.join(D, "current_names.json"), encoding="utf-8"))

RANGES = [
    (0x401000, 0x404000, "lib:yajl"),
    (0x404000, 0x417370, "lib:cyassl"),
    (0x417370, 0x5E0000, "app"),
    (0x5E0000, 0x5F8E20, "lib:crt"),
    (0x5F8E20, 0x600580, "lib:bzip2"),
    (0x6006E0, 0x6016D0, "lib:des"),
    (0x6016D0, 0x623DB0, "lib:jasper"),
    (0x623DB0, 0x637000, "lib:libjpeg"),
    (0x637000, 0x645000, "lib:gif_zip_zlib_tinyxml"),
    (0x645000, 0x65BF36, "lib:freetype"),
    (0x65BF36, 0x680B50, "lib:crt"),
    (0x680B50, 0x6818D0, "crt:static_init"),
    (0x742000, 0xA40000, "themida"),
]


def cat(ea):
    for lo, hi, c in RANGES:
        if lo <= ea < hi:
            return c
    return "other"


rows = []
for f in fn:
    ea = int(f["ea"], 16)
    k = f"0x{ea:x}"
    fa = facts.get(k, {})
    rows.append((ea, names.get(k, f["name"]), f["size"], cat(ea), len(fa.get("callers", [])), fa.get("callees", []), fa.get("apis", [])))
rows.sort()
with open(OUT, "w", encoding="utf-8") as o:
    o.write("ea\tname\tsize\tcategory\tncallers\tcallees\tapis\n")
    for ea, n, s, c, nc, ce, ap in rows:
        o.write(f"{ea:08x}\t{n}\t{s}\t{c}\t{nc}\t{','.join(x[2:] for x in ce)}\t{','.join(ap)}\n")

cnt = Counter(); size = Counter()
for r in rows:
    cnt[r[3]] += 1; size[r[3]] += r[2]
for c in sorted(cnt):
    print(f"{c:28s} {cnt[c]:6d} functions {size[c]:9d} bytes")
app = [r for r in rows if r[3] == "app"]
named = sum(1 for r in app if not r[1].startswith("sub_"))
print("app functions still named sub_:", len(app) - named, "of", len(app))
api = Counter(a for r in app for a in r[6] if not a.startswith("jpt_"))
print("most used APIs in app code:", api.most_common(25))
big = sorted(app, key=lambda r: -r[2])[:10]
print("largest app functions:", [(hex(r[0]), r[1], r[2]) for r in big])
