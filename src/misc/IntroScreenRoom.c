#include "protos.h"

void f_0066b230(void) /* IntroScreenRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b230);
    /* 0066b230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b231: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b235: push 0x6acd68 */ { u32 v = 0x6acd68u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066b240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b242: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066b247: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b24a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066b24d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066b253: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066b256: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b259: call 0x64cbe0 */ r_esp -= 4; W32(r_esp, 0x66b25eu); f_0064cbe0();
    /* 0066b25e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066b265: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b268: mov dword ptr [eax], 0x6e052c */ W32((u32)(r_eax), 0x6e052cu);
    /* 0066b26e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b271: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 0066b278: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b27b: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 0066b282: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b288: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b28b: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x66b290u); f_005f1b10();
    /* 0066b290: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0066b295: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0066b298: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x66b29du); f_00613f80();
    /* 0066b29d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b2a4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b2a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066b2aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066b2b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b2b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b2b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b2b5: ret  */ FN_RET(0x0066b230); r_esp += 4; return;
}

void f_0066b2c0(void) /* IntroScreenRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b2c0);
    /* 0066b2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2c5: push 0x6acd8b */ { u32 v = 0x6acd8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066b2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2d2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066b2d7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b2d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b2da: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066b2dd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066b2e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066b2e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b2e9: mov dword ptr [eax], 0x6e052c */ W32((u32)(r_eax), 0x6e052cu);
    /* 0066b2ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066b2f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b2f9: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b2fd: je 0x66b316 */ if (fZ) goto L_0066b316;
L_0066b2ff:; BB(0x0066b2ff);
    /* 0066b2ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b301: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b304: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066b307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b308: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b30e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066b311: call 0x5fb9e0 */ r_esp -= 4; W32(r_esp, 0x66b316u); f_005fb9e0();
L_0066b316:; BB(0x0066b316);
    /* 0066b316: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b319: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 0066b320: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b327: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b32a: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x66b32fu); f_0064cc80();
    /* 0066b32f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066b332: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066b339: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b33a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b33c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b33d: ret  */ FN_RET(0x0066b2c0); r_esp += 4; return;
}

void f_0066b340(void) /* IntroScreenRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b340);
    /* 0066b340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b341: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b34a: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x66b34fu); f_0064ce60();
    /* 0066b34f: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b352: ret  */ FN_RET(0x0066b340); r_esp += 4; return;
}

void f_0066b360(void) /* IntroScreenRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b360);
    /* 0066b360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b361: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066b36a: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b36e: jne 0x66b378 */ if (!fZ) goto L_0066b378;
L_0066b370:; BB(0x0066b370);
    /* 0066b370: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b373: call 0x66b7a0 */ r_esp -= 4; W32(r_esp, 0x66b378u); f_0066b7a0();
L_0066b378:; BB(0x0066b378);
    /* 0066b378: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066b37b: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b37f: jne 0x66b389 */ if (!fZ) goto L_0066b389;
L_0066b381:; BB(0x0066b381);
    /* 0066b381: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b384: call 0x66b7a0 */ r_esp -= 4; W32(r_esp, 0x66b389u); f_0066b7a0();
L_0066b389:; BB(0x0066b389);
    /* 0066b389: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b38c: ret 4 */ FN_RET(0x0066b360); r_esp += 8; return;
}

void f_0066b390(void) /* IntroScreenRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b390);
    /* 0066b390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b391: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066b39a: movzx eax, byte ptr [eax + 4] */ r_eax = (u32)R8((u32)(r_eax+0x4u));
    /* 0066b39e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0066b3a0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0066b3a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b3a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b3a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b3a8: ret 4 */ FN_RET(0x0066b390); r_esp += 8; return;
}

void f_0066b3b0(void) /* IntroScreenRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b3b0);
    /* 0066b3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b3b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3b5: push 0x6acdd2 */ { u32 v = 0x6acdd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066b3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3c1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066b3c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3c5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066b3ca: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3cd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066b3d0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066b3d6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0066b3d9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b3dc: call 0x64d030 */ r_esp -= 4; W32(r_esp, 0x66b3e1u); f_0064d030();
    /* 0066b3e1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b3e4: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b3e8: je 0x66b3fe */ if (fZ) goto L_0066b3fe;
L_0066b3ea:; BB(0x0066b3ea);
    /* 0066b3ea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b3ed: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066b3f0: call 0x5f60e0 */ r_esp -= 4; W32(r_esp, 0x66b3f5u); f_005f60e0();
    /* 0066b3f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b3f7: je 0x66b3fe */ if (fZ) goto L_0066b3fe;
L_0066b3f9:; BB(0x0066b3f9);
    /* 0066b3f9: jmp 0x66b781 */ goto L_0066b781;
L_0066b3fe:; BB(0x0066b3fe);
    /* 0066b3fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b401: cmp dword ptr [edx + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b405: je 0x66b5ba */ if (fZ) goto L_0066b5ba;
L_0066b40b:; BB(0x0066b40b);
    /* 0066b40b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b40e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066b411: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x66b416u); f_005eb610();
    /* 0066b416: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066b419: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b41f: jle 0x66b4fb */ if ((fZ||fS!=fO)) goto L_0066b4fb;
L_0066b425:; BB(0x0066b425);
    /* 0066b425: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b427: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66b42cu); f_00686d82();
    /* 0066b42c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b42f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066b432: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066b439: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b43d: je 0x66b482 */ if (fZ) goto L_0066b482;
L_0066b43f:; BB(0x0066b43f);
    /* 0066b43f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b441: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b444: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x66b449u); f_006069b0();
    /* 0066b449: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b44c: mov dword ptr [edx], 0x6d1cbc */ W32((u32)(r_edx), 0x6d1cbcu);
    /* 0066b452: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b455: mov dword ptr [eax + 0x2c], 0xfffffff4 */ W32((u32)(r_eax+0x2cu), 0xfffffff4u);
    /* 0066b45c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b45f: mov dword ptr [ecx + 0x30], 0xb4 */ W32((u32)(r_ecx+0x30u), 0xb4u);
    /* 0066b466: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b469: mov dword ptr [edx + 0x14], 0xffffffff */ W32((u32)(r_edx+0x14u), 0xffffffffu);
    /* 0066b470: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b473: mov dword ptr [eax + 0x10], 0xffffffff */ W32((u32)(r_eax+0x10u), 0xffffffffu);
    /* 0066b47a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066b47d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0066b480: jmp 0x66b489 */ goto L_0066b489;
L_0066b482:; BB(0x0066b482);
    /* 0066b482: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0066b489:; BB(0x0066b489);
    /* 0066b489: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066b48c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0066b48f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b496: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b49a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b49d: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066b4a0: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x66b4a5u); f_005f6050();
    /* 0066b4a5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66b4acu); f_00686d82();
    /* 0066b4ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b4af: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066b4b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066b4b9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b4bd: je 0x66b4ce */ if (fZ) goto L_0066b4ce;
L_0066b4bf:; BB(0x0066b4bf);
    /* 0066b4bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4c1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066b4c4: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x66b4c9u); f_006010a0();
    /* 0066b4c9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0066b4cc: jmp 0x66b4d5 */ goto L_0066b4d5;
L_0066b4ce:; BB(0x0066b4ce);
    /* 0066b4ce: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0066b4d5:; BB(0x0066b4d5);
    /* 0066b4d5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066b4d8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0066b4db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b4e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066b4e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b4e9: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066b4ec: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x66b4f1u); f_005f5d50();
    /* 0066b4f1: jmp 0x66b781 */ goto L_0066b781;
L_0066b4fb:; BB(0x0066b4fb);
    /* 0066b4fb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b4fe: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066b501: call 0x5eb110 */ r_esp -= 4; W32(r_esp, 0x66b506u); f_005eb110();
    /* 0066b506: mov esi, eax */ r_esi = r_eax;
    /* 0066b508: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b50b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066b50e: call 0x5eb130 */ r_esp -= 4; W32(r_esp, 0x66b513u); f_005eb130();
    /* 0066b513: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b515: jge 0x66b5ba */ if ((fS==fO)) goto L_0066b5ba;
L_0066b51b:; BB(0x0066b51b);
    /* 0066b51b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b51e: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066b521: call 0x5eb110 */ r_esp -= 4; W32(r_esp, 0x66b526u); f_005eb110();
    /* 0066b526: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b52a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b52d: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066b530: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x66b535u); f_005eb000();
    /* 0066b535: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b537: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66b53cu); f_00686d82();
    /* 0066b53c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b53f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0066b542: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066b549: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b54d: je 0x66b592 */ if (fZ) goto L_0066b592;
L_0066b54f:; BB(0x0066b54f);
    /* 0066b54f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b551: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b554: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x66b559u); f_006069b0();
    /* 0066b559: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b55c: mov dword ptr [eax], 0x6d1cbc */ W32((u32)(r_eax), 0x6d1cbcu);
    /* 0066b562: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b565: mov dword ptr [ecx + 0x2c], 0xc */ W32((u32)(r_ecx+0x2cu), 0xcu);
    /* 0066b56c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b56f: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 0066b576: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b579: mov dword ptr [eax + 0x14], 0xffffffff */ W32((u32)(r_eax+0x14u), 0xffffffffu);
    /* 0066b580: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b583: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 0066b58a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066b58d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0066b590: jmp 0x66b599 */ goto L_0066b599;
L_0066b592:; BB(0x0066b592);
    /* 0066b592: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0066b599:; BB(0x0066b599);
    /* 0066b599: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b59c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066b59f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b5a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066b5a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b5aa: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b5ad: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066b5b0: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x66b5b5u); f_005f6050();
    /* 0066b5b5: jmp 0x66b781 */ goto L_0066b781;
L_0066b5ba:; BB(0x0066b5ba);
    /* 0066b5ba: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b5bd: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b5c1: je 0x66b5d9 */ if (fZ) goto L_0066b5d9;
L_0066b5c3:; BB(0x0066b5c3);
    /* 0066b5c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b5c5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b5c8: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0066b5cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b5cc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066b5d1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0066b5d4: call 0x5fb9e0 */ r_esp -= 4; W32(r_esp, 0x66b5d9u); f_005fb9e0();
L_0066b5d9:; BB(0x0066b5d9);
    /* 0066b5d9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b5dc: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0066b5e3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b5e6: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b5ea: jne 0x66b606 */ if (!fZ) goto L_0066b606;
L_0066b5ec:; BB(0x0066b5ec);
    /* 0066b5ec: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066b5f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b5f3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b5f9: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0066b5ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b601u); call_ind(t); }
    /* 0066b601: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066b604: jmp 0x66b612 */ goto L_0066b612;
L_0066b606:; BB(0x0066b606);
    /* 0066b606: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b609: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066b60c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b60f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_0066b612:; BB(0x0066b612);
    /* 0066b612: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b615: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0066b618: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 0066b61b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b61d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b620: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066b623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b624: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b629: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0066b62f: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0066b632: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x66b637u); f_00603c50();
    /* 0066b637: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066b63a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b63e: je 0x66b651 */ if (fZ) goto L_0066b651;
L_0066b640:; BB(0x0066b640);
    /* 0066b640: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b643: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066b645: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b648: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066b64b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66b64du); call_ind(t); }
    /* 0066b64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b64f: jne 0x66b65e */ if (!fZ) goto L_0066b65e;
L_0066b651:; BB(0x0066b651);
    /* 0066b651: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b654: call 0x66b7a0 */ r_esp -= 4; W32(r_esp, 0x66b659u); f_0066b7a0();
    /* 0066b659: jmp 0x66b781 */ goto L_0066b781;
L_0066b65e:; BB(0x0066b65e);
    /* 0066b65e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066b663: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0066b666: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066b669: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b66b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b66d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b66f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b673: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b675: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b67b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b67e: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0066b681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b684: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b686: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b689: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x66b68eu); f_005f9b40();
    /* 0066b68e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b691: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0066b694: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b697: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066b69a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b69b: push 0x6e0784 */ { u32 v = 0x6e0784u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6a0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x66b6a5u); f_0062fde0();
    /* 0066b6a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b6a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b6ab: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x66b6b0u); f_005f8570();
    /* 0066b6b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066b6b1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b6b3: mov esi, eax */ r_esi = r_eax;
    /* 0066b6b5: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0066b6b7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b6ba: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0066b6bd: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x66b6c2u); f_005f5590();
    /* 0066b6c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066b6c3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b6c5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066b6c7: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066b6c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b6cd: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x66b6d2u); f_005f8550();
    /* 0066b6d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066b6d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b6d5: mov esi, eax */ r_esi = r_eax;
    /* 0066b6d7: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0066b6d9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b6dc: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0066b6df: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x66b6e4u); f_005f5550();
    /* 0066b6e4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066b6e5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b6e7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0066b6e9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066b6eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6ec: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b6ef: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066b6f2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b6f5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0066b6f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b6fa: mov ecx, eax */ r_ecx = r_eax;
    /* 0066b6fc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066b6ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b701u); call_ind(t); }
    /* 0066b701: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b703: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66b708u); f_00686d82();
    /* 0066b708: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b70b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0066b70e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0066b715: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b719: je 0x66b75e */ if (fZ) goto L_0066b75e;
L_0066b71b:; BB(0x0066b71b);
    /* 0066b71b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b71d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b720: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x66b725u); f_006069b0();
    /* 0066b725: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b728: mov dword ptr [ecx], 0x6d1cbc */ W32((u32)(r_ecx), 0x6d1cbcu);
    /* 0066b72e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b731: mov dword ptr [edx + 0x2c], 0xc */ W32((u32)(r_edx+0x2cu), 0xcu);
    /* 0066b738: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b73b: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0066b742: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b745: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
    /* 0066b74c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b74f: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 0066b756: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b759: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0066b75c: jmp 0x66b765 */ goto L_0066b765;
L_0066b75e:; BB(0x0066b75e);
    /* 0066b75e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0066b765:; BB(0x0066b765);
    /* 0066b765: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066b768: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0066b76b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b772: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066b775: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b776: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066b779: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0066b77c: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x66b781u); f_005f6050();
L_0066b781:; BB(0x0066b781);
    /* 0066b781: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066b784: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066b78b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b78c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066b78d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b78f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b790: ret  */ FN_RET(0x0066b3b0); r_esp += 4; return;
}

