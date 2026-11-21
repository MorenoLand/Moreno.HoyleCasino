#include "protos.h"

void f_00606e60(void) /* sciMotionTo::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606e60);
    /* 00606e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00606e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00606e65: push 0x6aac3b */ { u32 v = 0x6aac3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00606e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00606e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606e71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606e72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00606e77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00606e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606e7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00606e7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00606e83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00606e86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00606e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606e8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606e8d: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x606e92u); f_006069b0();
    /* 00606e92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606e99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606e9c: mov dword ptr [ecx], 0x6d7e04 */ W32((u32)(r_ecx), 0x6d7e04u);
    /* 00606ea2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00606ea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606ea6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00606ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606eaa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606ead: call 0x606bc0 */ r_esp -= 4; W32(r_esp, 0x606eb2u); f_00606bc0();
    /* 00606eb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606eb5: mov dl, byte ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 00606eb8: mov byte ptr [ecx + 0xd], dl */ W8((u32)(r_ecx+0xdu), (u8)r_edx);
    /* 00606ebb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00606ec2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606ec5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ec8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00606ecf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00606ed0: mov esp, ebp */ r_esp = r_ebp;
    /* 00606ed2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606ed3: ret 0x10 */ FN_RET(0x00606e60); r_esp += 20; return;
}

