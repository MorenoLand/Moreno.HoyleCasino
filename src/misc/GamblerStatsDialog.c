#include "protos.h"

void f_005cdd90(void) /* GamblerStatsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdd90);
    /* 005cdd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd91: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdd93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd95: push 0x6a8be8 */ { u32 v = 0x6a8be8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdd9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cdda0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdda1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdda2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cdda7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cdda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cddaa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cddad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cddb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cddb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cddb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cddba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cddbd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cddc2u); f_005f71f0();
    /* 005cddc2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cddc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cddcc: mov dword ptr [eax], 0x6d2bbc */ W32((u32)(r_eax), 0x6d2bbcu);
    /* 005cddd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cddd4: push 0x421 */ { u32 v = 0x421u; r_esp -= 4; W32(r_esp, v); }
    /* 005cddd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cdddc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cdde1u); f_005f83d0();
    /* 005cdde1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cdde8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cddeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cddee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cddf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cddf6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cddf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cddf9: ret  */ FN_RET(0x005cdd90); r_esp += 4; return;
}

