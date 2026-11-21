#include "protos.h"

void f_00584210(void) /* sub_584210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584210);
    /* 00584210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584211: mov ebp, esp */ r_ebp = r_esp;
    /* 00584213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584217: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058421a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058421d: mov dword ptr [eax + 0x19c], ecx */ W32((u32)(r_eax+0x19cu), r_ecx);
    /* 00584223: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584226: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00584229: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 0058422f: mov esp, ebp */ r_esp = r_ebp;
    /* 00584231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584232: ret 8 */ FN_RET(0x00584210); r_esp += 12; return;
}

void f_00584260(void) /* sub_584260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584260);
    /* 00584260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584261: mov ebp, esp */ r_ebp = r_esp;
    /* 00584263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058426a: mov eax, dword ptr [eax + 0x1a0] */ r_eax = R32((u32)(r_eax+0x1a0u));
    /* 00584270: mov esp, ebp */ r_esp = r_ebp;
    /* 00584272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584273: ret  */ FN_RET(0x00584260); r_esp += 4; return;
}

void f_00584ed0(void) /* sub_584ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584ed0);
    /* 00584ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00584ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584eda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584edd: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 00584ee0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ee3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00584ee6: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00584ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584eec: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00584eef: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 00584ef5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ef8: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00584efb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584efc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584eff: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00584f02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f05: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00584f08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584f0a: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00584f10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584f12u); call_ind(t); }
    /* 00584f12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f15: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00584f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584f19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f1c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584f1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f22: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00584f25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584f27: mov ecx, eax */ r_ecx = r_eax;
    /* 00584f29: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00584f2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584f31u); call_ind(t); }
    /* 00584f31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f34: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00584f3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584f3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f3e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584f41: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x584f46u); f_005eaf00();
    /* 00584f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00584f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584f49: ret 0xc */ FN_RET(0x00584ed0); r_esp += 16; return;
}

