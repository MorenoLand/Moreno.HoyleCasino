import traceback, os
p = os.path.join(os.environ.get("HOYLE_IDA_OUT", "."), "names_error.txt")
try:
    import ida_name as _n
    print("SN_NOWARN", hasattr(_n, "SN_NOWARN"), "SN_FORCE", hasattr(_n, "SN_FORCE"))
    import idc as _i
    print("idc SN_NOWARN", hasattr(_i, "SN_NOWARN"), "save_database", hasattr(_i, "save_database"))
    open(p, "w").write("probe ok\n")
except Exception:
    open(p, "w").write(traceback.format_exc())
