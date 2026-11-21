#include "protos.h"

void f_005cdbd0(void) /* FinishedViewingResultsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdbd0);
    /* 005cdbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdbd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdbd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdbd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdbd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdbdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdbde: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cdbe3u); f_005f71f0();
    /* 005cdbe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdbe6: mov dword ptr [eax], 0x6d2b5c */ W32((u32)(r_eax), 0x6d2b5cu);
    /* 005cdbec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdbef: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdbf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdbf2: ret  */ FN_RET(0x005cdbd0); r_esp += 4; return;
}

void f_005cdc20(void) /* FinishedViewingResultsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdc20);
    /* 005cdc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdc23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdc27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc29: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc31: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cdc36u); f_005f83d0();
    /* 005cdc36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc3b: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5cdc40u); f_005f89d0();
    /* 005cdc40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc48: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc4a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc4c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc4e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc50: push 0x6d2b9c */ { u32 v = 0x6d2b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc55: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdc5au); f_00630f40();
    /* 005cdc5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdc5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc65: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cdc6au); f_005fa5b0();
    /* 005cdc6a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc6e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc70: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc72: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc74: push 0x6b9a50 */ { u32 v = 0x6b9a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc79: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdc7eu); f_00630f40();
    /* 005cdc7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdc81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc84: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc88: push 0x30d4e6 */ { u32 v = 0x30d4e6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc94: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5cdc99u); f_005f9de0();
    /* 005cdc99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc9b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc9f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdca1: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdca3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdca5: push 0x6b9a34 */ { u32 v = 0x6b9a34u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdcafu); f_00630f40();
    /* 005cdcaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdcb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcb9: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdcc5: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5cdccau); f_005f9ef0();
    /* 005cdcca: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdccd: ret  */ FN_RET(0x005cdc20); r_esp += 4; return;
}

void f_005cdcd0(void) /* FinishedViewingResultsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdcd0);
    /* 005cdcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdcd7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cdcdb: jne 0x5cdd04 */ if (!fZ) goto L_005cdd04;
L_005cdcdd:; BB(0x005cdcdd);
    /* 005cdcdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdce2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5cdce7u); f_005fb350();
    /* 005cdce7: mov ecx, eax */ r_ecx = r_eax;
    /* 005cdce9: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5cdceeu); f_00600230();
    /* 005cdcee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdcef: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cdcf4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cdcf6: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdcfc: mov eax, dword ptr [edx + 0x274] */ r_eax = R32((u32)(r_edx+0x274u));
    /* 005cdd02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdd04u); call_ind(t); }
L_005cdd04:; BB(0x005cdd04);
    /* 005cdd04: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdd06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdd07: ret 4 */ FN_RET(0x005cdcd0); r_esp += 8; return;
}

