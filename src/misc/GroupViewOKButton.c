#include "protos.h"

void f_00519ae0(void) /* GroupViewOKButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519ae0);
    /* 00519ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00519ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519ae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519aea: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x519aefu); f_00601a80();
    /* 00519aef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519af2: mov dword ptr [eax], 0x6c143c */ W32((u32)(r_eax), 0x6c143cu);
    /* 00519af8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519afb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519afe: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 00519b04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b07: mov esp, ebp */ r_esp = r_ebp;
    /* 00519b09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519b0a: ret 4 */ FN_RET(0x00519ae0); r_esp += 8; return;
}

void f_00519b10(void) /* GroupViewOKButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519b10);
    /* 00519b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00519b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519b17: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00519b1d: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x519b22u); f_0057ae30();
    /* 00519b22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b25: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00519b2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b2e: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00519b34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519b36: mov ecx, eax */ r_ecx = r_eax;
    /* 00519b38: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00519b3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519b3du); call_ind(t); }
    /* 00519b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00519b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519b40: ret  */ FN_RET(0x00519b10); r_esp += 4; return;
}

