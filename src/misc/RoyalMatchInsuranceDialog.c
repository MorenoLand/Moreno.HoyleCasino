#include "protos.h"

void f_005abd70(void) /* RoyalMatchInsuranceDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abd70);
    /* 005abd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abd71: mov ebp, esp */ r_ebp = r_esp;
    /* 005abd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005abd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005abd77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abd79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abd7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abd7e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5abd83u); f_005f71f0();
    /* 005abd83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abd86: mov dword ptr [eax], 0x6cfdd4 */ W32((u32)(r_eax), 0x6cfdd4u);
    /* 005abd8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abd8f: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 005abd99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abd9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005abd9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abd9f: ret  */ FN_RET(0x005abd70); r_esp += 4; return;
}

void f_005abdc0(void) /* RoyalMatchInsuranceDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abdc0);
    /* 005abdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005abdc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abdc5: push 0x6a7c02 */ { u32 v = 0x6a7c02u; r_esp -= 4; W32(r_esp, v); }
    /* 005abdca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005abdd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abdd1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005abdd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005abdd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005abddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abddc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005abddf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005abde5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005abde8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005abdea: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abdee: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005abdf1: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 005abdf4: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005abdfa: call 0x5a7130 */ r_esp -= 4; W32(r_esp, 0x5abdffu); f_005a7130();
    /* 005abdff: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe01: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5abe06u); f_00686d82();
    /* 005abe06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abe09: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005abe0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005abe13: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abe17: je 0x5abe32 */ if (fZ) goto L_005abe32;
L_005abe19:; BB(0x005abe19);
    /* 005abe19: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005abe1d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005abe1f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005abe21: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005abe24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005abe25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005abe28: call 0x5acb70 */ r_esp -= 4; W32(r_esp, 0x5abe2du); f_005acb70();
    /* 005abe2d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005abe30: jmp 0x5abe39 */ goto L_005abe39;
L_005abe32:; BB(0x005abe32);
    /* 005abe32: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005abe39:; BB(0x005abe39);
    /* 005abe39: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005abe3c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005abe3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005abe46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005abe49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abe4a: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005abe50: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005abe53: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5abe58u); f_005fc420();
    /* 005abe58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005abe5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005abe62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005abe63: mov esp, ebp */ r_esp = r_ebp;
    /* 005abe65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abe66: ret 4 */ FN_RET(0x005abdc0); r_esp += 8; return;
}

void f_005abe70(void) /* RoyalMatchInsuranceDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abe70);
    /* 005abe70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abe71: mov ebp, esp */ r_ebp = r_esp;
    /* 005abe73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005abe74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005abe77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe79: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abe81: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5abe86u); f_005f83d0();
    /* 005abe86: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abe8b: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5abe90u); f_005f89d0();
    /* 005abe90: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe94: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe96: push 0x6cfe34 */ { u32 v = 0x6cfe34u; r_esp -= 4; W32(r_esp, v); }
    /* 005abe9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5abea0u); f_00630f40();
    /* 005abea0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abea4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abea7: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5abeacu); f_005f73e0();
    /* 005abeac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abeae: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005abeb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005abeb2: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005abeb4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005abeb6: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005abeb8: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 005abebd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005abebf: push 0x6cfe14 */ { u32 v = 0x6cfe14u; r_esp -= 4; W32(r_esp, v); }
    /* 005abec4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5abec9u); f_00630f40();
    /* 005abec9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abecd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abecf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abed1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abed4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5abed9u); f_005fa5b0();
    /* 005abed9: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 005abedb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abedd: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005abedf: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005abee1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005abee3: push 0x6b3bac */ { u32 v = 0x6b3bacu; r_esp -= 4; W32(r_esp, v); }
    /* 005abee8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5abeedu); f_00630f40();
    /* 005abeed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abef1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005abef3: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 005abef5: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005abef7: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005abefc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abefe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf03: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5abf08u); f_005f9de0();
    /* 005abf08: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf0a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf0c: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005abf0e: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf10: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf12: push 0x6b3b9c */ { u32 v = 0x6b3b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf17: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5abf1cu); f_00630f40();
    /* 005abf1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005abf1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abf20: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf22: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 005abf24: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf29: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf35: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5abf3au); f_005f9de0();
    /* 005abf3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf3c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abf41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf43: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf45: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf4a: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf4c: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf58: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5abf5du); f_005f9ce0();
    /* 005abf5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf60: mov dword ptr [ecx + 0x1bc], eax */ W32((u32)(r_ecx+0x1bcu), r_eax);
    /* 005abf66: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005abf68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf6b: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 005abf71: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5abf76u); f_005eb5d0();
    /* 005abf76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf79: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005abf7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf82: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005abf88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abf8a: mov ecx, eax */ r_ecx = r_eax;
    /* 005abf8c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005abf8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abf91u); call_ind(t); }
    /* 005abf91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abf94: mov byte ptr [ecx + 0x1c0], 1 */ W8((u32)(r_ecx+0x1c0u), 0x1u);
    /* 005abf9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005abf9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abf9e: ret  */ FN_RET(0x005abe70); r_esp += 4; return;
}

