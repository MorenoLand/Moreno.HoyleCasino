#include "protos.h"

void f_00673b60(void) /* SavedGameListText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673b60);
    /* 00673b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00673b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673b65: push 0x6ad36e */ { u32 v = 0x6ad36eu; r_esp -= 4; W32(r_esp, v); }
    /* 00673b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673b71: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673b74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00673b79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673b7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00673b7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00673b85: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00673b88: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00673b8a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x673b8fu); f_00686d82();
    /* 00673b8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673b92: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00673b95: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673b9c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673ba0: je 0x673bbb */ if (fZ) goto L_00673bbb;
L_00673ba2:; BB(0x00673ba2);
    /* 00673ba2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673ba5: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x673baau); f_00629ab0();
    /* 00673baa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673bad: mov dword ptr [eax], 0x6e16b0 */ W32((u32)(r_eax), 0x6e16b0u);
    /* 00673bb3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673bb6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00673bb9: jmp 0x673bc2 */ goto L_00673bc2;
L_00673bbb:; BB(0x00673bbb);
    /* 00673bbb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00673bc2:; BB(0x00673bc2);
    /* 00673bc2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673bc5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00673bc8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673bcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00673bd2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00673bd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673bd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673bd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00673bdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673bdd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673be0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673be1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673be3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673be6: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673bebu); f_005fb720();
    /* 00673beb: mov ecx, eax */ r_ecx = r_eax;
    /* 00673bed: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x673bf2u); f_00628980();
    /* 00673bf2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00673bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673bf6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673bf9: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673bfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673bfd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x673c02u); f_00686d8e();
    /* 00673c02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673c05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673c08: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673c0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673c10: mov esp, ebp */ r_esp = r_ebp;
    /* 00673c12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673c13: ret 8 */ FN_RET(0x00673b60); r_esp += 12; return;
}

void f_006748f0(void) /* SavedGameListText::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006748f0);
    /* 006748f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006748f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006748f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006748f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006748f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006748fa: mov dword ptr [eax], 0x6e16b0 */ W32((u32)(r_eax), 0x6e16b0u);
    /* 00674900: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674903: call 0x629b00 */ r_esp -= 4; W32(r_esp, 0x674908u); f_00629b00();
    /* 00674908: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067490b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0067490e: je 0x67491c */ if (fZ) goto L_0067491c;
L_00674910:; BB(0x00674910);
    /* 00674910: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674914: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x674919u); f_00686cae();
    /* 00674919: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067491c:; BB(0x0067491c);
    /* 0067491c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067491f: mov esp, ebp */ r_esp = r_ebp;
    /* 00674921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674922: ret 4 */ FN_RET(0x006748f0); r_esp += 8; return;
}

