# ida_names_pass.py: name engine functions from RTTI vtables, assert file paths, vtable stores and import thunks.
# Applies names to the open database, writes recomp/data/name_sources.tsv and re-exports ida/functions.tsv.
import csv
import os
import re

import ida_funcs
import ida_name
import idautils
import idc

ida_out = os.environ["HOYLE_IDA_OUT"]
data_dir = os.environ["HOYLE_DATA"]
root = os.path.dirname(ida_out.rstrip("\\/"))

vt_class = {}
vfunc = {}
for r in csv.DictReader(open(os.path.join(data_dir, "rtti_names.tsv"), encoding="utf-8"), delimiter="\t"):
    ea = int(r["ea"], 16)
    if r["kind"] == "vftable":
        vt_class[ea] = r["name"][len("vftable_"):]
    elif r["kind"] == "vfunc":
        vfunc.setdefault(ea, r["name"])

paths = {}
for item in idautils.Strings():
    text = str(item)
    if text.lower().endswith(".cpp") or ".cpp" in text.lower():
        stem = os.path.basename(text.replace("\\", "/"))
        stem = stem.split(".cpp")[0]
        paths[item.ea] = re.sub(r"[^A-Za-z0-9_]", "_", stem)

bad = ("sub_", "nullsub_", "j_sub_", "unknown_", "j_")
rows = []
named = 0
for ea in idautils.Functions():
    func = ida_funcs.get_func(ea)
    if not func or (func.flags & ida_funcs.FUNC_LIB):
        continue
    module = None
    ctor = None
    thunk = None
    end = func.end_ea
    if end - ea <= 8:
        if idc.print_insn_mnem(ea) == "jmp":
            value = idc.get_operand_value(ea, 0)
            target = idc.get_name(value) if value else ""
            if target and ("__imp_" in target or target.startswith("_imp__")):
                thunk = target.replace("__imp__", "").replace("_imp__", "").split("@")[0]
    at = ea
    while at < end and at != idc.BADADDR:
        for n in range(3):
            v = idc.get_operand_value(at, n)
            if v in paths:
                module = paths[v]
            if v in vt_class:
                ctor = vt_class[v]
        at = idc.next_head(at, end)
    current = ida_name.get_name(ea)
    name = None
    source = None
    if not current.startswith(bad):
        name = current
        source = "existing"
    elif ea in vfunc:
        name = vfunc[ea]
        source = "rtti"
    elif ctor:
        name = ctor + "::ctor"
        source = "vtable_store"
    elif module:
        name = "%s::func_%08x" % (module, ea)
        source = "assert_path"
    elif thunk:
        name = "imp_" + thunk
        source = "import"
    if name and source != "existing":
        idc.set_name(ea, name, ida_name.SN_NOWARN | ida_name.SN_FORCE)
        named += 1
    if name:
        rows.append((ea, name, source))

with open(os.path.join(data_dir, "name_sources.tsv"), "w", encoding="utf-8", newline="") as f:
    w = csv.writer(f, delimiter="\t")
    w.writerow(["ea", "name", "source"])
    for ea, name, source in rows:
        w.writerow(["%08x" % ea, name, source])

with open(os.path.join(ida_out, "functions.tsv"), "w", encoding="utf-8", newline="") as f:
    f.write("address\tname\tsize\tlib\n")
    for ea in idautils.Functions():
        func = ida_funcs.get_func(ea)
        f.write("%08x\t%s\t%d\t%d\n" % (ea, ida_name.get_name(ea), func.end_ea - func.start_ea,
                                        1 if func.flags & ida_funcs.FUNC_LIB else 0))
idc.save_database(os.path.join(ida_out, "HoyleCasino.i64"), 0)
print("named %d, rows %d" % (named, len(rows)))
