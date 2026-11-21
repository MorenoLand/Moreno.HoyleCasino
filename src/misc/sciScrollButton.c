#include "protos.h"

void f_00615b10(void) /* sciScrollButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615b10);
    /* 00615b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00615b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615b17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b1a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x615b1fu); f_00601a80();
    /* 00615b1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b22: mov dword ptr [eax], 0x6d8784 */ W32((u32)(r_eax), 0x6d8784u);
    /* 00615b28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615b2e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00615b34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b37: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00615b3a: mov dword ptr [eax + 0x1e0], ecx */ W32((u32)(r_eax+0x1e0u), r_ecx);
    /* 00615b40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b43: mov esp, ebp */ r_esp = r_ebp;
    /* 00615b45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615b46: ret 8 */ FN_RET(0x00615b10); r_esp += 12; return;
}

void f_00615b70(void) /* sciScrollButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615b70);
    /* 00615b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00615b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615b77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615b79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b7c: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00615b82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615b83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b86: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00615b8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615b8f: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00615b95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615b97: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00615b9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615b9fu); call_ind(t); }
    /* 00615b9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00615ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615ba2: ret  */ FN_RET(0x00615b70); r_esp += 4; return;
}

