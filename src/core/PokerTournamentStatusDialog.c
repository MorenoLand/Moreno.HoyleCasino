#include "protos.h"

void f_0051cad0(void) /* PokerTournamentStatusDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cad0);
    /* 0051cad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cad1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cad5: push 0x6a3d9c */ { u32 v = 0x6a3d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cada: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051cae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cae2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051cae7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051cae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051caea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051caed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051caf3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051caf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051caf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cafa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051cafd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51cb02u); f_005f71f0();
    /* 0051cb02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051cb09: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051cb0c: mov dword ptr [eax], 0x6c248c */ W32((u32)(r_eax), 0x6c248cu);
    /* 0051cb12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb14: push 0x30e7f9 */ { u32 v = 0x30e7f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051cb1c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51cb21u); f_005f83d0();
    /* 0051cb21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051cb28: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051cb2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051cb2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051cb35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051cb36: mov esp, ebp */ r_esp = r_ebp;
    /* 0051cb38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cb39: ret  */ FN_RET(0x0051cad0); r_esp += 4; return;
}

void f_0051cb60(void) /* PokerTournamentStatusDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cb60);
    /* 0051cb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051cb67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb69: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb6d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb6f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb71: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb73: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb78: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb7a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cb83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cb86: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51cb8bu); f_005fa5b0();
    /* 0051cb8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cb8e: call 0x51cba0 */ r_esp -= 4; W32(r_esp, 0x51cb93u); f_0051cba0();
    /* 0051cb93: mov esp, ebp */ r_esp = r_ebp;
    /* 0051cb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cb96: ret  */ FN_RET(0x0051cb60); r_esp += 4; return;
}

