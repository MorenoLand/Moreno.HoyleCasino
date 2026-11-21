"""Shared locations for the scripts. Everything inside the repository is found relative to the repository root."""
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BIN = os.path.join(ROOT, "bin")
BUILD = os.path.join(ROOT, "build")
SRC = os.path.join(ROOT, "src")
BUILD_OUT = SRC
DATA = os.path.join(ROOT, "recomp", "data")
RT = os.path.join(ROOT, "recomp", "rt")
IDA = os.path.join(ROOT, "ida")


def need(env, what, flag):
    if flag in sys.argv:
        i = sys.argv.index(flag)
        v = sys.argv[i + 1]
        del sys.argv[i:i + 2]
        return v
    v = os.environ.get(env)
    if not v:
        sys.exit("missing input: %s.\n  pass %s <path> or set %s" % (what, flag, env))
    return v


def game_exe():
    return need("HOYLE_EXE", "Hoyle Casino Classic.exe", "--exe")


def ida_dump():
    v = os.environ.get("HOYLE_IDA_OUT")
    return v or IDA


def mingw32():
    return need("MINGW32", "the 32-bit MinGW root (contains bin/ and lib/)", "--mingw32")
