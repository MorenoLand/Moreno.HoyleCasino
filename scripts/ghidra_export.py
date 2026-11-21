# ghidra_export.py: export every function as decompiler C and as x86 listing.
# usage: analyzeHeadless ... -postScript ghidra_export.py <pseudo_dir> <asm_dir>
import os

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
pseudo_dir = args[0]
asm_dir = args[1]
for d in (pseudo_dir, asm_dir):
    if not os.path.isdir(d):
        os.makedirs(d)

decomp = DecompInterface()
decomp.openProgram(currentProgram)
monitor = ConsoleTaskMonitor()
fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()

index = open(os.path.join(pseudo_dir, "index.tsv"), "w")
count = 0
failed = 0
for fn in fm.getFunctions(True):
    name = fn.getName()
    ea = fn.getEntryPoint().toString()
    safe = "".join(c if c.isalnum() or c in "._-" else "_" for c in name)
    base = "%s_%s" % (safe, ea.replace("0x", ""))
    while os.path.exists(os.path.join(pseudo_dir, base + ".c")):
        base = base + "_"
    ok = False
    text = "// decompile failed\n"
    try:
        res = decomp.decompileFunction(fn, 90, monitor)
        if res is not None and res.decompileCompleted():
            text = res.getDecompiledFunction().getC()
            ok = True
    except Exception as error:
        text = "// decompile failed: %s\n" % error
    if not ok:
        failed += 1
    f = open(os.path.join(pseudo_dir, base + ".c"), "w")
    f.write("// %s  %s\n" % (name, ea))
    f.write(text)
    f.close()
    a = open(os.path.join(asm_dir, base + ".asm"), "w")
    a.write("; %s  %s\n" % (name, ea))
    it = listing.getInstructions(fn.getBody(), True)
    while it.hasNext():
        ins = it.next()
        a.write("%s  %s\n" % (ins.getAddress(), ins.toString()))
    a.close()
    index.write("%s\t%s\t%s\n" % (ea, name, "ok" if ok else "failed"))
    count += 1
index.close()
print("ghidra_export: %d functions, %d failed" % (count, failed))
