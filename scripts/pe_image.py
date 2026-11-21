# pe_image.py: read the original PE sections so scripts can read guest bytes by virtual address.
import struct

import cfg

BASE = 0x400000


class Image:
    def __init__(self, path=None):
        path = path or cfg.game_exe()
        self.d = open(path, "rb").read()
        o = struct.unpack_from("<I", self.d, 0x3C)[0]
        n = struct.unpack_from("<H", self.d, o + 6)[0]
        so = struct.unpack_from("<H", self.d, o + 20)[0]
        self.secs = []
        for i in range(n):
            nm, vs, va, rs, rp = struct.unpack_from("<8sIIII", self.d, o + 24 + so + 40 * i)
            self.secs.append((nm.rstrip(b"\0").decode(), vs, va + BASE, rs, rp))

    def off(self, v):
        for nm, vs, va, rs, rp in self.secs:
            if va <= v < va + max(vs, rs):
                return rp + v - va if v - va < rs else None
        return None

    def read(self, v, n):
        o = self.off(v)
        return self.d[o:o + n] if o is not None else b""

    def u32(self, v):
        b = self.read(v, 4)
        return struct.unpack("<I", b)[0] if len(b) == 4 else None
