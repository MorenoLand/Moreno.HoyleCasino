#include "protos.h"

void f_005840e0(void) /* KenoScrollButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005840e0);
    /* 005840e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005840e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005840e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005840e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005840e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005840ea: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5840efu); f_00601a80();
    /* 005840ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005840f2: mov dword ptr [eax], 0x6cc99c */ W32((u32)(r_eax), 0x6cc99cu);
    /* 005840f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005840fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005840fe: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00584104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584107: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0058410a: mov dword ptr [eax + 0x1e0], ecx */ W32((u32)(r_eax+0x1e0u), r_ecx);
    /* 00584110: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584113: mov esp, ebp */ r_esp = r_ebp;
    /* 00584115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584116: ret 8 */ FN_RET(0x005840e0); r_esp += 12; return;
}

void f_00584140(void) /* KenoScrollButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584140);
    /* 00584140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584141: mov ebp, esp */ r_ebp = r_esp;
    /* 00584143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584147: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584149: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058414c: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00584152: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584153: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584156: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0058415c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058415f: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00584165: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584167: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0058416d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58416fu); call_ind(t); }
    /* 0058416f: mov esp, ebp */ r_esp = r_ebp;
    /* 00584171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584172: ret  */ FN_RET(0x00584140); r_esp += 4; return;
}

