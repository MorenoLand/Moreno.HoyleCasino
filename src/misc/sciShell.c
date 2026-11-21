#include "protos.h"

void f_005f2eb0(void) /* sciShell::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2eb0);
    /* 005f2eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2eb5: push 0x6a9e96 */ { u32 v = 0x6a9e96u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ec1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2ec4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f2ec9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f2ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ecc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f2ecf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f2ed5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f2ed8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2edb: mov dword ptr [eax], 0x6d666c */ W32((u32)(r_eax), 0x6d666cu);
    /* 005f2ee1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f2ee8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2eea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2eed: call 0x5f3c80 */ r_esp -= 4; W32(r_esp, 0x5f2ef2u); f_005f3c80();
    /* 005f2ef2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2ef5: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f2ef8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f2efb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2efe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f2f01: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2f05: je 0x5f2f1a */ if (fZ) goto L_005f2f1a;
L_005f2f07:; BB(0x005f2f07);
    /* 005f2f07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2f0c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2f0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2f11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f2f13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2f15u); call_ind(t); }
    /* 005f2f15: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f2f18: jmp 0x5f2f21 */ goto L_005f2f21;
L_005f2f1a:; BB(0x005f2f1a);
    /* 005f2f1a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f2f21:; BB(0x005f2f21);
    /* 005f2f21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2f26: call 0x5f3de0 */ r_esp -= 4; W32(r_esp, 0x5f2f2bu); f_005f3de0();
    /* 005f2f2b: mov dword ptr [0x15e55e8], 0 */ W32((u32)(0x15e55e8u), 0x0u);
    /* 005f2f35: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2f39: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2f3c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2f3f: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f2f44u); f_0060c6a0();
    /* 005f2f44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2f4b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2f4e: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5f2f53u); f_005e9e40();
    /* 005f2f53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2f56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2f5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2f5e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2f60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2f61: ret  */ FN_RET(0x005f2eb0); r_esp += 4; return;
}

void f_005f2f70(void) /* sciShell::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2f70);
    /* 005f2f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f75: push 0x6a9ebc */ { u32 v = 0x6a9ebcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f81: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2f84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f2f89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f2f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2f8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f2f8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f2f95: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f2f98: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2f9b: call 0x5f3e70 */ r_esp -= 4; W32(r_esp, 0x5f2fa0u); f_005f3e70();
    /* 005f2fa0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2fa3: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005f2fa6: push 0x1b4 */ { u32 v = 0x1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fab: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f2fb0u); f_00686d82();
    /* 005f2fb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f2fb3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f2fb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2fbd: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2fc1: je 0x5f2fe2 */ if (fZ) goto L_005f2fe2;
L_005f2fc3:; BB(0x005f2fc3);
    /* 005f2fc3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2fc6: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005f2fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2fcd: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005f2fd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2fd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2fd8: call 0x5f7670 */ r_esp -= 4; W32(r_esp, 0x5f2fddu); f_005f7670();
    /* 005f2fdd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f2fe0: jmp 0x5f2fe9 */ goto L_005f2fe9;
L_005f2fe2:; BB(0x005f2fe2);
    /* 005f2fe2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005f2fe9:; BB(0x005f2fe9);
    /* 005f2fe9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2fec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f2fef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2ff6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2ff9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2ffc: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005f2fff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f3002: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f3005: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f300b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f300e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3013: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f3016: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005f3019: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f301b: push 0x6d6784 */ { u32 v = 0x6d6784u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3020: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f3026: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f3029: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f302eu); f_00607900();
    /* 005f302e: mov byte ptr [0x795fa1], al */ W8((u32)(0x795fa1u), (u8)r_eax);
    /* 005f3033: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3035: push 0x6d6774 */ { u32 v = 0x6d6774u; r_esp -= 4; W32(r_esp, v); }
    /* 005f303a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f303f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f3042: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f3047u); f_00607900();
    /* 005f3047: mov byte ptr [0x795fa2], al */ W8((u32)(0x795fa2u), (u8)r_eax);
    /* 005f304c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f304e: push 0x6d6760 */ { u32 v = 0x6d6760u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3053: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f3059: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f305c: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f3061u); f_00607900();
    /* 005f3061: mov byte ptr [0x795fa4], al */ W8((u32)(0x795fa4u), (u8)r_eax);
    /* 005f3066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3068: push 0x6d674c */ { u32 v = 0x6d674cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f306d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f3073: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f3076: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f307bu); f_00607900();
    /* 005f307b: mov byte ptr [0x795fb0], al */ W8((u32)(0x795fb0u), (u8)r_eax);
    /* 005f3080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3082: push 0x6d673c */ { u32 v = 0x6d673cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3087: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f308c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f308f: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f3094u); f_00607900();
    /* 005f3094: mov byte ptr [0x795fb1], al */ W8((u32)(0x795fb1u), (u8)r_eax);
    /* 005f3099: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f309b: push 0x6d6728 */ { u32 v = 0x6d6728u; r_esp -= 4; W32(r_esp, v); }
    /* 005f30a0: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f30a6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f30a9: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f30aeu); f_00607900();
    /* 005f30ae: mov byte ptr [0x795fa5], al */ W8((u32)(0x795fa5u), (u8)r_eax);
    /* 005f30b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f30b5: push 0x6d6718 */ { u32 v = 0x6d6718u; r_esp -= 4; W32(r_esp, v); }
    /* 005f30ba: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f30c0: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f30c3: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x5f30c8u); f_00607900();
    /* 005f30c8: mov byte ptr [0x795fa0], al */ W8((u32)(0x795fa0u), (u8)r_eax);
    /* 005f30cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f30cf: push 0x6d6700 */ { u32 v = 0x6d6700u; r_esp -= 4; W32(r_esp, v); }
    /* 005f30d4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f30d9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f30dc: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x5f30e1u); f_00607960();
    /* 005f30e1: mov dword ptr [0x7950b8], eax */ W32((u32)(0x7950b8u), r_eax);
    /* 005f30e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f30e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f30f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f30f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f30f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f30f4: ret  */ FN_RET(0x005f2f70); r_esp += 4; return;
}

void f_005f37f0(void) /* sciShell::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f37f0);
    /* 005f37f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f37f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f37f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f37f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f37f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f37fa: movzx ecx, byte ptr [eax + 0x25] */ r_ecx = (u32)R8((u32)(r_eax+0x25u));
    /* 005f37fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3800: je 0x5f3841 */ if (fZ) goto L_005f3841;
L_005f3802:; BB(0x005f3802);
    /* 005f3802: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3805: movzx eax, byte ptr [edx + 0x26] */ r_eax = (u32)R8((u32)(r_edx+0x26u));
    /* 005f3809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f380b: jne 0x5f3841 */ if (!fZ) goto L_005f3841;
L_005f380d:; BB(0x005f380d);
    /* 005f380d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f3810: cmp dword ptr [ecx + 0x18], 0x15 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3814: je 0x5f3831 */ if (fZ) goto L_005f3831;
L_005f3816:; BB(0x005f3816);
    /* 005f3816: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f3819: cmp dword ptr [edx + 0x18], 0x16 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f381d: je 0x5f3831 */ if (fZ) goto L_005f3831;
L_005f381f:; BB(0x005f381f);
    /* 005f381f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3822: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3826: je 0x5f3831 */ if (fZ) goto L_005f3831;
L_005f3828:; BB(0x005f3828);
    /* 005f3828: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f382b: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f382f: jne 0x5f3841 */ if (!fZ) goto L_005f3841;
L_005f3831:; BB(0x005f3831);
    /* 005f3831: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3834: mov byte ptr [edx + 0x26], 1 */ W8((u32)(r_edx+0x26u), 0x1u);
    /* 005f3838: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f383b: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 005f383f: jmp 0x5f38a0 */ goto L_005f38a0;
L_005f3841:; BB(0x005f3841);
    /* 005f3841: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3844: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3848: je 0x5f3880 */ if (fZ) goto L_005f3880;
L_005f384a:; BB(0x005f384a);
    /* 005f384a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f384d: cmp dword ptr [edx + 0x18], 0x15 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3851: je 0x5f3865 */ if (fZ) goto L_005f3865;
L_005f3853:; BB(0x005f3853);
    /* 005f3853: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3856: cmp dword ptr [eax + 0x18], 0x16 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f385a: je 0x5f3865 */ if (fZ) goto L_005f3865;
L_005f385c:; BB(0x005f385c);
    /* 005f385c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f385f: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3863: jne 0x5f3880 */ if (!fZ) goto L_005f3880;
L_005f3865:; BB(0x005f3865);
    /* 005f3865: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f3868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3869: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f386c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005f386f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3872: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005f3875: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3877: mov ecx, eax */ r_ecx = r_eax;
    /* 005f3879: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005f387c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f387eu); call_ind(t); }
    /* 005f387e: jmp 0x5f38a0 */ goto L_005f38a0;
L_005f3880:; BB(0x005f3880);
    /* 005f3880: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3887: je 0x5f38a0 */ if (fZ) goto L_005f38a0;
L_005f3889:; BB(0x005f3889);
    /* 005f3889: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f388c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f388d: mov edx, dword ptr [0x15e55e4] */ r_edx = R32((u32)(0x15e55e4u));
    /* 005f3893: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3895: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f389b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f389e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f38a0u); call_ind(t); }
L_005f38a0:; BB(0x005f38a0);
    /* 005f38a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f38a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f38a3: ret 4 */ FN_RET(0x005f37f0); r_esp += 8; return;
}

void f_005f3c80(void) /* sciShell::vfunc36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3c80);
    /* 005f3c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3c83: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3c86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f3c89: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3c90: je 0x5f3d82 */ if (fZ) goto L_005f3d82;
L_005f3c96:; BB(0x005f3c96);
    /* 005f3c96: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3c9b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3c9f: je 0x5f3cd6 */ if (fZ) goto L_005f3cd6;
L_005f3ca1:; BB(0x005f3ca1);
    /* 005f3ca1: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f3ca7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f3caa: call 0x6098d0 */ r_esp -= 4; W32(r_esp, 0x5f3cafu); f_006098d0();
    /* 005f3caf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3cb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3cb4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3cb7: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 005f3cbd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3cbfu); call_ind(t); }
    /* 005f3cbf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f3cc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3cc4: je 0x5f3cd6 */ if (fZ) goto L_005f3cd6;
L_005f3cc6:; BB(0x005f3cc6);
    /* 005f3cc6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3cc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3ccb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3cce: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005f3cd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3cd6u); call_ind(t); }
L_005f3cd6:; BB(0x005f3cd6);
    /* 005f3cd6: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f3cdc: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f3cdf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f3ce2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f3ce5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3ce9: je 0x5f3cfe */ if (fZ) goto L_005f3cfe;
L_005f3ceb:; BB(0x005f3ceb);
    /* 005f3ceb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3ced: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f3cf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3cf2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f3cf5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3cf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3cf9u); call_ind(t); }
    /* 005f3cf9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f3cfc: jmp 0x5f3d05 */ goto L_005f3d05;
L_005f3cfe:; BB(0x005f3cfe);
    /* 005f3cfe: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005f3d05:; BB(0x005f3d05);
    /* 005f3d05: mov dword ptr [0x15e55e4], 0 */ W32((u32)(0x15e55e4u), 0x0u);
    /* 005f3d0f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3d13: je 0x5f3d29 */ if (fZ) goto L_005f3d29;
L_005f3d15:; BB(0x005f3d15);
    /* 005f3d15: cmp dword ptr [ebp + 8], 0x44c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3d1c: je 0x5f3d29 */ if (fZ) goto L_005f3d29;
L_005f3d1e:; BB(0x005f3d1e);
    /* 005f3d1e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3d21: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f3d24: call 0x5f7d50 */ r_esp -= 4; W32(r_esp, 0x5f3d29u); f_005f7d50();
L_005f3d29:; BB(0x005f3d29);
    /* 005f3d29: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f3d2e: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f3d33u); f_0060c9a0();
    /* 005f3d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3d35: je 0x5f3d82 */ if (fZ) goto L_005f3d82;
L_005f3d37:; BB(0x005f3d37);
    /* 005f3d37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d39: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f3d3e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f3d43u); f_0060ca40();
    /* 005f3d43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f3d46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3d49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d4a: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f3d4f: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f3d54u); f_0060c890();
    /* 005f3d54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3d57: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f3d5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f3d5d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f3d60: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3d64: je 0x5f3d79 */ if (fZ) goto L_005f3d79;
L_005f3d66:; BB(0x005f3d66);
    /* 005f3d66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d68: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f3d6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3d6d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f3d70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3d72: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3d74u); call_ind(t); }
    /* 005f3d74: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f3d77: jmp 0x5f3d80 */ goto L_005f3d80;
L_005f3d79:; BB(0x005f3d79);
    /* 005f3d79: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f3d80:; BB(0x005f3d80);
    /* 005f3d80: jmp 0x5f3d29 */ goto L_005f3d29;
L_005f3d82:; BB(0x005f3d82);
    /* 005f3d82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d84: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f3d8a: call 0x625240 */ r_esp -= 4; W32(r_esp, 0x5f3d8fu); f_00625240();
    /* 005f3d8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3d96: jmp 0x5f3da1 */ goto L_005f3da1;
L_005f3d98:; BB(0x005f3d98);
    /* 005f3d98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3d9b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f3d9e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f3da1:; BB(0x005f3da1);
    /* 005f3da1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3da4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3da7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f3dacu); f_0060c9a0();
    /* 005f3dac: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3daf: jge 0x5f3dd9 */ if ((fS==fO)) goto L_005f3dd9;
L_005f3db1:; BB(0x005f3db1);
    /* 005f3db1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3db4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3db5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f3db8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3dbb: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f3dc0u); f_0060ca40();
    /* 005f3dc0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f3dc3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3dc6: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f3dcc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f3dcf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3dd2: call 0x613da0 */ r_esp -= 4; W32(r_esp, 0x5f3dd7u); f_00613da0();
    /* 005f3dd7: jmp 0x5f3d98 */ goto L_005f3d98;
L_005f3dd9:; BB(0x005f3dd9);
    /* 005f3dd9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3ddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3ddc: ret 4 */ FN_RET(0x005f3c80); r_esp += 8; return;
}

void f_005f43e0(void) /* sciShell::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f43e0);
    /* 005f43e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f43e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f43e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f43e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f43e7: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005f43ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f43eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f43ec: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005f43ef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f43f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f43f3: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 005f43f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f43f9: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f43fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f43fd: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f4400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4401: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f4404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4405: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f4408: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4409: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f440c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f440d: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4415: call 0x5f4210 */ r_esp -= 4; W32(r_esp, 0x5f441au); f_005f4210();
    /* 005f441a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f441c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f441d: ret 0x20 */ FN_RET(0x005f43e0); r_esp += 36; return;
}

