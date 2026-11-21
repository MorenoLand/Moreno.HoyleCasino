#include "protos.h"

void f_0062a760(void) /* sciSpinBoxButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a760);
    /* 0062a760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a761: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a76a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x62a76fu); f_00601a80();
    /* 0062a76f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a772: mov dword ptr [eax], 0x6d95e4 */ W32((u32)(r_eax), 0x6d95e4u);
    /* 0062a778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a77b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062a77e: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0062a784: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a787: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062a78a: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 0062a790: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a793: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a796: ret 8 */ FN_RET(0x0062a760); r_esp += 12; return;
}

void f_0062a7a0(void) /* sciSpinBoxButton::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a7a0);
    /* 0062a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a7a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7aa: mov dword ptr [eax], 0x6d95e4 */ W32((u32)(r_eax), 0x6d95e4u);
    /* 0062a7b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7b3: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 0062a7bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7c0: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x62a7c5u); f_00601ba0();
    /* 0062a7c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a7c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a7c8: ret  */ FN_RET(0x0062a7a0); r_esp += 4; return;
}

void f_0062a7d0(void) /* sciSpinBoxButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a7d0);
    /* 0062a7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a7d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062a7d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7da: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0062a7e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a7e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7e4: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0062a7ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062a7ed: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0062a7f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062a7f5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0062a7fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62a7fdu); call_ind(t); }
    /* 0062a7fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a7ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a800: ret  */ FN_RET(0x0062a7d0); r_esp += 4; return;
}

