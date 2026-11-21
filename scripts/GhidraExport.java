// GhidraExport.java: export every function as decompiler C and as x86 listing.
// usage: analyzeHeadless ... -postScript GhidraExport.java <pseudo_dir> <asm_dir>
import java.io.File;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class GhidraExport extends GhidraScript {

    private static String safe(String name) {
        StringBuilder b = new StringBuilder();
        for (char c : name.toCharArray()) {
            b.append(Character.isLetterOrDigit(c) || c == '.' || c == '_' || c == '-' ? c : '_');
        }
        return b.toString();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File pd = new File(args[0]);
        File ad = new File(args[1]);
        pd.mkdirs();
        ad.mkdirs();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        PrintWriter index = new PrintWriter(new File(pd, "index.tsv"), "UTF-8");
        int count = 0;
        int failed = 0;
        for (Function fn : fm.getFunctions(true)) {
            String name = fn.getName();
            String ea = fn.getEntryPoint().toString();
            String base = safe(name) + "_" + ea.replace("0x", "");
            File cf = new File(pd, base + ".c");
            while (cf.exists()) {
                base = base + "_";
                cf = new File(pd, base + ".c");
            }
            boolean ok = false;
            String text = "// decompile failed\n";
            try {
                DecompileResults res = dec.decompileFunction(fn, 30, monitor);
                if (res != null && res.decompileCompleted()) {
                    text = res.getDecompiledFunction().getC();
                    ok = true;
                }
            } catch (Exception e) {
                text = "// decompile failed: " + e.getMessage() + "\n";
            }
            if (!ok) {
                failed++;
            }
            PrintWriter w = new PrintWriter(cf, "UTF-8");
            w.println("// " + name + "  " + ea);
            w.print(text);
            w.close();
            PrintWriter a = new PrintWriter(new File(ad, base + ".asm"), "UTF-8");
            a.println("; " + name + "  " + ea);
            InstructionIterator it = listing.getInstructions(fn.getBody(), true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                a.println(ins.getAddress() + "  " + ins.toString());
            }
            a.close();
            index.println(ea + "\t" + name + "\t" + (ok ? "ok" : "failed"));
            count++;
            if (count % 500 == 0) {
                println("exported " + count);
            }
        }
        index.close();
        println("ghidra_export: " + count + " functions, " + failed + " failed");
    }
}
