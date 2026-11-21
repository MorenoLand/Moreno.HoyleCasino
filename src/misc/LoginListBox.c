#include "protos.h"

void f_00660440(void) /* LoginListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660440);
    /* 00660440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660441: mov ebp, esp */ r_ebp = r_esp;
    /* 00660443: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660449: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066044e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660450: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00660453: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00660459: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0066045f: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x660464u); f_005e4390();
    /* 00660464: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0066046a: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00660470: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660474: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0066047a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066047b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x660480u); f_00686d8e();
    /* 00660480: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660483: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660485: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0066048b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066048c: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00660492: mov cl, byte ptr [eax + 0x3b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3bu))) & 0xffu);
    /* 00660495: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660496: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0066049c: mov al, byte ptr [edx + 0x3a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3au))) & 0xffu);
    /* 0066049f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006604a0: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006604a6: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x6604abu); f_0065c820();
    /* 006604ab: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006604b1: add ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006604b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006604b5: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x6604bau); f_00665800();
    /* 006604ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006604bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006604be: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006604c4: call 0x65c9c0 */ r_esp -= 4; W32(r_esp, 0x6604c9u); f_0065c9c0();
    /* 006604c9: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006604cf: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x6604d4u); f_00629c70();
    /* 006604d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006604d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006604d7: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006604dd: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x6604e2u); f_005fb5a0();
    /* 006604e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006604e5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006604e7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6604ecu); f_00686d72();
    /* 006604ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006604ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006604ef: ret  */ FN_RET(0x00660440); r_esp += 4; return;
}

