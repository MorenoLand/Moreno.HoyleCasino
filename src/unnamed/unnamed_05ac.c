#include "protos.h"

void f_005ac1a0(void) /* sub_5AC1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac1a0);
    /* 005ac1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ac1a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac1aa: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac1ae: jne 0x5ac1cf */ if (!fZ) goto L_005ac1cf;
L_005ac1b0:; BB(0x005ac1b0);
    /* 005ac1b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac1b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac1b9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1bd: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac1c3: call 0x5a7240 */ r_esp -= 4; W32(r_esp, 0x5ac1c8u); f_005a7240();
    /* 005ac1c8: sub eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ac1cb: jmp 0x5ac1ea */ goto L_005ac1ea;
L_005ac1cf:; BB(0x005ac1cf);
    /* 005ac1cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac1d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac1d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1dc: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac1e2: call 0x5a7240 */ r_esp -= 4; W32(r_esp, 0x5ac1e7u); f_005a7240();
    /* 005ac1e7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_005ac1ea:; BB(0x005ac1ea);
    /* 005ac1ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac1ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac1ed: ret 4 */ FN_RET(0x005ac1a0); r_esp += 8; return;
}

void f_005ac1f0(void) /* sub_5AC1F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac1f0);
    /* 005ac1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ac1f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac1fa: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac1fe: jne 0x5ac21f */ if (!fZ) goto L_005ac21f;
L_005ac200:; BB(0x005ac200);
    /* 005ac200: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac202: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac205: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac206: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac209: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac20c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac20d: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac213: call 0x5a7460 */ r_esp -= 4; W32(r_esp, 0x5ac218u); f_005a7460();
    /* 005ac218: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac21b: jmp 0x5ac23a */ goto L_005ac23a;
L_005ac21f:; BB(0x005ac21f);
    /* 005ac21f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac221: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac224: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac225: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac228: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac22c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac232: call 0x5a7460 */ r_esp -= 4; W32(r_esp, 0x5ac237u); f_005a7460();
    /* 005ac237: sub eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_005ac23a:; BB(0x005ac23a);
    /* 005ac23a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac23c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac23d: ret 4 */ FN_RET(0x005ac1f0); r_esp += 8; return;
}

void f_005ac240(void) /* sub_5AC240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac240);
    /* 005ac240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac241: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac245: push 0x6a7c61 */ { u32 v = 0x6a7c61u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac24a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ac250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac251: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac254: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ac259: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ac25b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac25c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ac25f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ac265: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005ac268: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac26b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac26e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005ac271: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ac278: jmp 0x5ac283 */ goto L_005ac283;
L_005ac27a:; BB(0x005ac27a);
    /* 005ac27a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac27d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ac280: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005ac283:; BB(0x005ac283);
    /* 005ac283: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac287: jge 0x5ac334 */ if ((fS==fO)) goto L_005ac334;
L_005ac28d:; BB(0x005ac28d);
    /* 005ac28d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ac294: jmp 0x5ac29f */ goto L_005ac29f;
L_005ac296:; BB(0x005ac296);
    /* 005ac296: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac299: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac29c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ac29f:; BB(0x005ac29f);
    /* 005ac29f: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac2a3: jge 0x5ac32f */ if ((fS==fO)) goto L_005ac32f;
L_005ac2a9:; BB(0x005ac2a9);
    /* 005ac2a9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac2ae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ac2b3u); f_00686d82();
    /* 005ac2b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac2b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ac2b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac2c0: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac2c4: je 0x5ac2d3 */ if (fZ) goto L_005ac2d3;
L_005ac2c6:; BB(0x005ac2c6);
    /* 005ac2c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ac2c9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5ac2ceu); f_005eaaf0();
    /* 005ac2ce: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ac2d1: jmp 0x5ac2da */ goto L_005ac2da;
L_005ac2d3:; BB(0x005ac2d3);
    /* 005ac2d3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005ac2da:; BB(0x005ac2da);
    /* 005ac2da: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ac2dd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ac2e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac2e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac2ea: imul edx, edx, 0x58 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x58u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac2ed: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac2f0: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 005ac2f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac2f7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac2fa: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 005ac2fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac300: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac303: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac306: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 005ac30a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac30d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005ac310: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac313: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac316: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac319: lea eax, [ecx + eax + 0x28] */ r_eax = (u32)(r_ecx+r_eax+0x28u);
    /* 005ac31d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac320: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005ac323: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac325: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005ac328: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac32au); call_ind(t); }
    /* 005ac32a: jmp 0x5ac296 */ goto L_005ac296;
L_005ac32f:; BB(0x005ac32f);
    /* 005ac32f: jmp 0x5ac27a */ goto L_005ac27a;
L_005ac334:; BB(0x005ac334);
    /* 005ac334: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ac33b: jmp 0x5ac346 */ goto L_005ac346;
L_005ac33d:; BB(0x005ac33d);
    /* 005ac33d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac340: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac343: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ac346:; BB(0x005ac346);
    /* 005ac346: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac34a: jge 0x5ac449 */ if ((fS==fO)) goto L_005ac449;
L_005ac350:; BB(0x005ac350);
    /* 005ac350: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac355: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ac35au); f_00686d82();
    /* 005ac35a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac35d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ac360: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ac367: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac36b: je 0x5ac37a */ if (fZ) goto L_005ac37a;
L_005ac36d:; BB(0x005ac36d);
    /* 005ac36d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ac370: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x5ac375u); f_005cd360();
    /* 005ac375: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ac378: jmp 0x5ac381 */ goto L_005ac381;
L_005ac37a:; BB(0x005ac37a);
    /* 005ac37a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ac381:; BB(0x005ac381);
    /* 005ac381: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ac384: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ac387: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac38e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac391: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac394: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ac397: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 005ac39b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac39d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac39f: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3a5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3a7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3ab: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac3b3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac3b6: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ac3ba: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5ac3bfu); f_005ec8f0();
    /* 005ac3bf: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3c4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3c9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac3d1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac3d4: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005ac3d8: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5ac3ddu); f_005ee8c0();
    /* 005ac3dd: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac3e2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ac3e7u); f_00686d82();
    /* 005ac3e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac3ea: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ac3ed: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ac3f4: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac3f8: je 0x5ac407 */ if (fZ) goto L_005ac407;
L_005ac3fa:; BB(0x005ac3fa);
    /* 005ac3fa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ac3fd: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5ac402u); f_005eaaf0();
    /* 005ac402: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005ac405: jmp 0x5ac40e */ goto L_005ac40e;
L_005ac407:; BB(0x005ac407);
    /* 005ac407: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005ac40e:; BB(0x005ac40e);
    /* 005ac40e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ac411: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ac414: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac41b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac41e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac421: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ac424: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 005ac428: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac42a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac42c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac42e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac430: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac435: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac438: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac43b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005ac43f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5ac444u); f_005eae80();
    /* 005ac444: jmp 0x5ac33d */ goto L_005ac33d;
L_005ac449:; BB(0x005ac449);
    /* 005ac449: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac44c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ac453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ac454: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac457: ret 4 */ FN_RET(0x005ac240); r_esp += 8; return;
}

void f_005ac460(void) /* sub_5AC460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac460);
    /* 005ac460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac461: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ac467: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac46a: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac46e: je 0x5ac4d0 */ if (fZ) goto L_005ac4d0;
L_005ac470:; BB(0x005ac470);
    /* 005ac470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac473: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac477: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ac47d: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5ac482u); f_00639110();
    /* 005ac482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac484: je 0x5ac4be */ if (fZ) goto L_005ac4be;
L_005ac486:; BB(0x005ac486);
    /* 005ac486: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac488: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac48b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ac48e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac48f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ac495: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5ac49au); f_00639110();
    /* 005ac49a: mov ecx, eax */ r_ecx = r_eax;
    /* 005ac49c: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x5ac4a1u); f_00646380();
    /* 005ac4a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac4a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac4a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac4a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac4ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ac4b2: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5ac4b7u); f_00639110();
    /* 005ac4b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005ac4b9: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x5ac4beu); f_006464d0();
L_005ac4be:; BB(0x005ac4be);
    /* 005ac4be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac4c1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac4c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac4c5: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ac4cb: call 0x5d8f50 */ r_esp -= 4; W32(r_esp, 0x5ac4d0u); f_005d8f50();
L_005ac4d0:; BB(0x005ac4d0);
    /* 005ac4d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac4d3: call 0x5ac520 */ r_esp -= 4; W32(r_esp, 0x5ac4d8u); f_005ac520();
    /* 005ac4d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac4db: call 0x5ac620 */ r_esp -= 4; W32(r_esp, 0x5ac4e0u); f_005ac620();
    /* 005ac4e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac4e3: call 0x5ac850 */ r_esp -= 4; W32(r_esp, 0x5ac4e8u); f_005ac850();
    /* 005ac4e8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac4ee: call 0x5b7d10 */ r_esp -= 4; W32(r_esp, 0x5ac4f3u); f_005b7d10();
    /* 005ac4f3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ac4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac4f8: je 0x5ac507 */ if (fZ) goto L_005ac507;
L_005ac4fa:; BB(0x005ac4fa);
    /* 005ac4fa: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac500: call 0x5a84c0 */ r_esp -= 4; W32(r_esp, 0x5ac505u); f_005a84c0();
    /* 005ac505: jmp 0x5ac512 */ goto L_005ac512;
L_005ac507:; BB(0x005ac507);
    /* 005ac507: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac50d: call 0x5a7100 */ r_esp -= 4; W32(r_esp, 0x5ac512u); f_005a7100();
L_005ac512:; BB(0x005ac512);
    /* 005ac512: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac515: ret  */ FN_RET(0x005ac460); r_esp += 4; return;
}

void f_005ac520(void) /* sub_5AC520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac520);
    /* 005ac520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac521: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac523: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac526: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ac529: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac530: jmp 0x5ac53b */ goto L_005ac53b;
L_005ac532:; BB(0x005ac532);
    /* 005ac532: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac535: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac538: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ac53b:; BB(0x005ac53b);
    /* 005ac53b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac53f: jge 0x5ac551 */ if ((fS==fO)) goto L_005ac551;
L_005ac541:; BB(0x005ac541);
    /* 005ac541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac543: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac546: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac547: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac54a: call 0x5ac560 */ r_esp -= 4; W32(r_esp, 0x5ac54fu); f_005ac560();
    /* 005ac54f: jmp 0x5ac532 */ goto L_005ac532;
L_005ac551:; BB(0x005ac551);
    /* 005ac551: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac554: ret  */ FN_RET(0x005ac520); r_esp += 4; return;
}

void f_005ac560(void) /* sub_5AC560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac560);
    /* 005ac560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac561: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac563: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac566: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ac569: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac570: jmp 0x5ac57b */ goto L_005ac57b;
L_005ac572:; BB(0x005ac572);
    /* 005ac572: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac575: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac578: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ac57b:; BB(0x005ac57b);
    /* 005ac57b: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac57f: jge 0x5ac5b0 */ if ((fS==fO)) goto L_005ac5b0;
L_005ac581:; BB(0x005ac581);
    /* 005ac581: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ac584: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac587: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac58a: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 005ac58e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac591: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005ac594: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ac597: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac59a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac59d: lea eax, [ecx + eax + 0x28] */ r_eax = (u32)(r_ecx+r_eax+0x28u);
    /* 005ac5a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac5a4: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005ac5a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac5a9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ac5ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac5aeu); call_ind(t); }
    /* 005ac5ae: jmp 0x5ac572 */ goto L_005ac572;
L_005ac5b0:; BB(0x005ac5b0);
    /* 005ac5b0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ac5b7: jmp 0x5ac5c2 */ goto L_005ac5c2;
L_005ac5b9:; BB(0x005ac5b9);
    /* 005ac5b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac5bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac5bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ac5c2:; BB(0x005ac5c2);
    /* 005ac5c2: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac5c6: jge 0x5ac60b */ if ((fS==fO)) goto L_005ac60b;
L_005ac5c8:; BB(0x005ac5c8);
    /* 005ac5c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac5cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ac5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac5d3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac5d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5d7: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac5dd: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5ac5e2u); f_005b5c60();
    /* 005ac5e2: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005ac5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac5e7: jne 0x5ac5eb */ if (!fZ) goto L_005ac5eb;
L_005ac5e9:; BB(0x005ac5e9);
    /* 005ac5e9: jmp 0x5ac5b9 */ goto L_005ac5b9;
L_005ac5eb:; BB(0x005ac5eb);
    /* 005ac5eb: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005ac5ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ac5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac5fa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac5fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac5fe: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ac604: call 0x5a82a0 */ r_esp -= 4; W32(r_esp, 0x5ac609u); f_005a82a0();
    /* 005ac609: jmp 0x5ac5b9 */ goto L_005ac5b9;
L_005ac60b:; BB(0x005ac60b);
    /* 005ac60b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac60d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac60e: ret 8 */ FN_RET(0x005ac560); r_esp += 12; return;
}

void f_005ac620(void) /* sub_5AC620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac620);
    /* 005ac620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac621: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac623: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac626: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ac62b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ac62d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ac630: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ac633: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac636: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac63a: jne 0x5ac665 */ if (!fZ) goto L_005ac665;
L_005ac63c:; BB(0x005ac63c);
    /* 005ac63c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac63e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac640: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac646: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5ac64bu); f_005b5830();
    /* 005ac64b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac64e: jge 0x5ac665 */ if ((fS==fO)) goto L_005ac665;
L_005ac650:; BB(0x005ac650);
    /* 005ac650: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac653: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005ac656: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5ac65bu); f_005eb220();
    /* 005ac65b: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac65e: jne 0x5ac665 */ if (!fZ) goto L_005ac665;
L_005ac660:; BB(0x005ac660);
    /* 005ac660: jmp 0x5ac840 */ goto L_005ac840;
L_005ac665:; BB(0x005ac665);
    /* 005ac665: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac66c: jmp 0x5ac677 */ goto L_005ac677;
L_005ac66e:; BB(0x005ac66e);
    /* 005ac66e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac671: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ac674: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005ac677:; BB(0x005ac677);
    /* 005ac677: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac67b: jge 0x5ac69a */ if ((fS==fO)) goto L_005ac69a;
L_005ac67d:; BB(0x005ac67d);
    /* 005ac67d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac680: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac683: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ac687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac68a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac68d: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ac691: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac693: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ac696: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac698u); call_ind(t); }
    /* 005ac698: jmp 0x5ac66e */ goto L_005ac66e;
L_005ac69a:; BB(0x005ac69a);
    /* 005ac69a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ac6a1: jmp 0x5ac6ac */ goto L_005ac6ac;
L_005ac6a3:; BB(0x005ac6a3);
    /* 005ac6a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac6a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac6a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ac6ac:; BB(0x005ac6ac);
    /* 005ac6ac: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac6af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6b3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac6b9: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5ac6beu); f_005b58f0();
    /* 005ac6be: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac6c1: jge 0x5ac840 */ if ((fS==fO)) goto L_005ac840;
L_005ac6c7:; BB(0x005ac6c7);
    /* 005ac6c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac6ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6cb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac6ce: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac6d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6d2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac6d8: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5ac6ddu); f_005b5260();
    /* 005ac6dd: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ac6e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6e4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac6e7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac6ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac6eb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac6f1: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ac6f6u); f_005b4f50();
    /* 005ac6f6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ac6f9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac6fc: cmp dword ptr [ecx + 4], 4 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac700: jne 0x5ac726 */ if (!fZ) goto L_005ac726;
L_005ac702:; BB(0x005ac702);
    /* 005ac702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac704: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac706: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac70c: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5ac711u); f_005b4f50();
    /* 005ac711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac712: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac717: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ac71a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac71b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ac721u); call_ind(t); }
    /* 005ac721: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac724: jmp 0x5ac766 */ goto L_005ac766;
L_005ac726:; BB(0x005ac726);
    /* 005ac726: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ac729: cmp eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac72c: je 0x5ac750 */ if (fZ) goto L_005ac750;
L_005ac72e:; BB(0x005ac72e);
    /* 005ac72e: cmp dword ptr [ebp - 0x48], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac732: jg 0x5ac750 */ if ((!fZ&&fS==fO)) goto L_005ac750;
L_005ac734:; BB(0x005ac734);
    /* 005ac734: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ac737: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac738: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ac73b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac73c: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac741: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ac744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac745: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ac74bu); call_ind(t); }
    /* 005ac74b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ac74e: jmp 0x5ac766 */ goto L_005ac766;
L_005ac750:; BB(0x005ac750);
    /* 005ac750: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ac753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac754: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac759: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005ac75c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac75d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ac763u); call_ind(t); }
    /* 005ac763: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ac766:; BB(0x005ac766);
    /* 005ac766: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005ac769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac76a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac76d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac770: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ac774: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac777: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac77a: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ac77e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac780: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005ac786: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac788u); call_ind(t); }
    /* 005ac788: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac78c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac78f: call 0x5ac1f0 */ r_esp -= 4; W32(r_esp, 0x5ac794u); f_005ac1f0();
    /* 005ac794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac795: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac799: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac79c: call 0x5ac1a0 */ r_esp -= 4; W32(r_esp, 0x5ac7a1u); f_005ac1a0();
    /* 005ac7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac7a5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac7a8: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005ac7ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac7af: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac7b2: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005ac7b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ac7b8: mov ecx, edx */ r_ecx = r_edx;
    /* 005ac7ba: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005ac7bd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac7bfu); call_ind(t); }
    /* 005ac7bf: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac7c5: call 0x5b7d50 */ r_esp -= 4; W32(r_esp, 0x5ac7cau); f_005b7d50();
    /* 005ac7ca: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ac7cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac7cf: je 0x5ac820 */ if (fZ) goto L_005ac820;
L_005ac7d1:; BB(0x005ac7d1);
    /* 005ac7d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac7d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7d5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac7d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ac7db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac7dc: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac7e2: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5ac7e7u); f_005b5830();
    /* 005ac7e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac7ea: jle 0x5ac820 */ if ((fZ||fS!=fO)) goto L_005ac820;
L_005ac7ec:; BB(0x005ac7ec);
    /* 005ac7ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac7ef: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac7f2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac7f5: mov ecx, dword ptr [edx + ecx + 0x28] */ r_ecx = R32((u32)(r_edx+r_ecx+0x28u));
    /* 005ac7f9: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5ac7feu); f_005eb220();
    /* 005ac7fe: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac801: je 0x5ac820 */ if (fZ) goto L_005ac820;
L_005ac803:; BB(0x005ac803);
    /* 005ac803: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac806: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac809: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ac80d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac810: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac813: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005ac817: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac819: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005ac81c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac81eu); call_ind(t); }
    /* 005ac81e: jmp 0x5ac83b */ goto L_005ac83b;
L_005ac820:; BB(0x005ac820);
    /* 005ac820: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac823: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac826: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ac82a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac82d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ac830: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005ac834: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac836: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005ac839: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac83bu); call_ind(t); }
L_005ac83b:; BB(0x005ac83b);
    /* 005ac83b: jmp 0x5ac6a3 */ goto L_005ac6a3;
L_005ac840:; BB(0x005ac840);
    /* 005ac840: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac843: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac845: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ac84au); f_00686d72();
    /* 005ac84a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac84c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac84d: ret  */ FN_RET(0x005ac620); r_esp += 4; return;
}

void f_005ac850(void) /* sub_5AC850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac850);
    /* 005ac850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac851: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac853: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac857: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ac858: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ac85b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac85e: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac862: jne 0x5ac869 */ if (!fZ) goto L_005ac869;
L_005ac864:; BB(0x005ac864);
    /* 005ac864: jmp 0x5acb45 */ goto L_005acb45;
L_005ac869:; BB(0x005ac869);
    /* 005ac869: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac870: jmp 0x5ac87b */ goto L_005ac87b;
L_005ac872:; BB(0x005ac872);
    /* 005ac872: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac875: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac878: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ac87b:; BB(0x005ac87b);
    /* 005ac87b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac87f: jge 0x5ac8a0 */ if ((fS==fO)) goto L_005ac8a0;
L_005ac881:; BB(0x005ac881);
    /* 005ac881: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac884: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac887: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005ac88b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ac88e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac891: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005ac895: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ac897: mov ecx, edx */ r_ecx = r_edx;
    /* 005ac899: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005ac89c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac89eu); call_ind(t); }
    /* 005ac89e: jmp 0x5ac872 */ goto L_005ac872;
L_005ac8a0:; BB(0x005ac8a0);
    /* 005ac8a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ac8a7: jmp 0x5ac8b2 */ goto L_005ac8b2;
L_005ac8a9:; BB(0x005ac8a9);
    /* 005ac8a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac8ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ac8af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ac8b2:; BB(0x005ac8b2);
    /* 005ac8b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac8b5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac8b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8b9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac8bf: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5ac8c4u); f_005b58f0();
    /* 005ac8c4: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac8c7: jge 0x5acb45 */ if ((fS==fO)) goto L_005acb45;
L_005ac8cd:; BB(0x005ac8cd);
    /* 005ac8cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac8d4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8d8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac8de: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5ac8e3u); f_005b5010();
    /* 005ac8e3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ac8e6: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ac8ea: ja 0x5ac9cf */ if ((!fC&&!fZ)) goto L_005ac9cf;
L_005ac8f0:; BB(0x005ac8f0);
    /* 005ac8f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ac8f3: jmp dword ptr [eax*4 + 0x5acb4c] */ { u32 t = R32((u32)(r_eax*4+0x5acb4cu)); switch (t) { case 0x5ac944u: goto L_005ac944; case 0x5ac969u: goto L_005ac969; case 0x5ac98bu: goto L_005ac98b; case 0x5ac9cfu: goto L_005ac9cf; case 0x5ac9adu: goto L_005ac9ad; case 0x5ac8fau: goto L_005ac8fa; case 0x5ac91fu: goto L_005ac91f; default: UNSUP(0x005ac8f3, "jump table entry is not a known target"); } }
L_005ac8fa:; BB(0x005ac8fa);
    /* 005ac8fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac8fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac8ff: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac902: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac906: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac909: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac90c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac910: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac912: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005ac918: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac91au); call_ind(t); }
    /* 005ac91a: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac91f:; BB(0x005ac91f);
    /* 005ac91f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac921: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac924: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac927: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac92b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac92e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac931: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac935: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac937: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ac93d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac93fu); call_ind(t); }
    /* 005ac93f: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac944:; BB(0x005ac944);
    /* 005ac944: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac946: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac949: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac94c: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac950: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac953: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac956: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac95a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac95c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005ac962: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac964u); call_ind(t); }
    /* 005ac964: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac969:; BB(0x005ac969);
    /* 005ac969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac96b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac96e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac971: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac975: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac978: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac97b: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac97f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac981: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ac987: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac989u); call_ind(t); }
    /* 005ac989: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac98b:; BB(0x005ac98b);
    /* 005ac98b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac98d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac990: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac993: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac997: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac99a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac99d: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac9a1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac9a3: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005ac9a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac9abu); call_ind(t); }
    /* 005ac9ab: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac9ad:; BB(0x005ac9ad);
    /* 005ac9ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac9b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac9b5: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac9b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac9bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac9bf: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005ac9c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ac9c5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ac9cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac9cdu); call_ind(t); }
    /* 005ac9cd: jmp 0x5ac9ea */ goto L_005ac9ea;
L_005ac9cf:; BB(0x005ac9cf);
    /* 005ac9cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac9d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac9d5: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac9d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac9dc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac9df: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac9e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ac9e5: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005ac9e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac9eau); call_ind(t); }
L_005ac9ea:; BB(0x005ac9ea);
    /* 005ac9ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ac9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9ee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac9f1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ac9f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ac9f5: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ac9fb: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5aca00u); f_005b5010();
    /* 005aca00: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aca03: jne 0x5aca0a */ if (!fZ) goto L_005aca0a;
L_005aca05:; BB(0x005aca05);
    /* 005aca05: jmp 0x5ac8a9 */ goto L_005ac8a9;
L_005aca0a:; BB(0x005aca0a);
    /* 005aca0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005aca0d: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005aca10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aca13: mov edx, dword ptr [ecx + eax + 0x28] */ r_edx = R32((u32)(r_ecx+r_eax+0x28u));
    /* 005aca17: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aca1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005aca1d: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005aca20: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aca23: lea esi, [ecx + eax + 0x28] */ r_esi = (u32)(r_ecx+r_eax+0x28u);
    /* 005aca27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005aca2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aca2b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aca2e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aca31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aca32: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aca38: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5aca3du); f_005b5830();
    /* 005aca3d: mov edx, dword ptr [esi + eax*4 - 4] */ r_edx = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 005aca41: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005aca44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aca49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca4c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005aca4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aca51u); call_ind(t); }
    /* 005aca51: mov esi, eax */ r_esi = r_eax;
    /* 005aca53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca56: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aca58: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca5b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005aca5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aca60u); call_ind(t); }
    /* 005aca60: mov edi, eax */ r_edi = r_eax;
    /* 005aca62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca65: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5aca6au); f_005f5550();
    /* 005aca6a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005aca6c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aca71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca74: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005aca77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aca79u); call_ind(t); }
    /* 005aca79: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005aca7b: mov eax, edi */ r_eax = r_edi;
    /* 005aca7d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005aca7e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005aca80: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005aca82: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005aca84: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 005aca87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aca8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aca8f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005aca92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aca94u); call_ind(t); }
    /* 005aca94: mov esi, eax */ r_esi = r_eax;
    /* 005aca96: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aca9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aca9e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005acaa1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acaa3u); call_ind(t); }
    /* 005acaa3: mov edi, eax */ r_edi = r_eax;
    /* 005acaa5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005acaa8: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5acaadu); f_005f5590();
    /* 005acaad: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005acaaf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005acab2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005acab4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005acab7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005acaba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acabcu); call_ind(t); }
    /* 005acabc: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005acabe: mov eax, edi */ r_eax = r_edi;
    /* 005acac0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005acac1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005acac3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005acac5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005acac7: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 005acaca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acacd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acad0: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005acad4: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5acad9u); f_005f5550();
    /* 005acad9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005acada: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005acadc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005acade: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005acae1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005acae3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005acae6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acae9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acaec: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005acaf0: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5acaf5u); f_005f5590();
    /* 005acaf5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005acaf6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005acaf8: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005acafa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005acafd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005acaff: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005acb02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005acb05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005acb06: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005acb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acb0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acb0d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acb10: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005acb14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acb17: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acb1a: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005acb1e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005acb20: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005acb23: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5acb25u); call_ind(t); }
    /* 005acb25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acb28: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acb2b: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005acb2f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005acb32: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005acb35: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005acb39: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005acb3b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005acb3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acb40u); call_ind(t); }
    /* 005acb40: jmp 0x5ac8a9 */ goto L_005ac8a9;
L_005acb45:; BB(0x005acb45);
    /* 005acb45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005acb46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005acb47: mov esp, ebp */ r_esp = r_ebp;
    /* 005acb49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acb4a: ret  */ FN_RET(0x005ac850); r_esp += 4; return;
}

void f_005acf90(void) /* sub_5ACF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acf90);
    /* 005acf90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acf91: mov ebp, esp */ r_ebp = r_esp;
    /* 005acf93: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005acf96: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005acf99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005acf9c: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 005acfa0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acfa2: jne 0x5acfdd */ if (!fZ) goto L_005acfdd;
L_005acfa4:; BB(0x005acfa4);
    /* 005acfa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005acfa7: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 005acfab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005acfad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005acfaf: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005acfb5: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5acfbau); f_005b7310();
    /* 005acfba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005acfbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acfbe: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005acfc3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005acfc6: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005acfcc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005acfcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005acfd1: mov ecx, eax */ r_ecx = r_eax;
    /* 005acfd3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005acfd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acfd8u); call_ind(t); }
    /* 005acfd8: jmp 0x5ad091 */ goto L_005ad091;
L_005acfdd:; BB(0x005acfdd);
    /* 005acfdd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005acfe0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acfe1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5acfe6u); f_005dcb00();
    /* 005acfe6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005acfe9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005acfec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005acfef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5acff4u); f_0063aac0();
    /* 005acff4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005acff6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005acff9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acffd: je 0x5ad01b */ if (fZ) goto L_005ad01b;
L_005acfff:; BB(0x005acfff);
    /* 005acfff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ad002: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ad007u); f_0063aac0();
    /* 005ad007: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ad009: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ad00c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad010: je 0x5ad01b */ if (fZ) goto L_005ad01b;
L_005ad012:; BB(0x005ad012);
    /* 005ad012: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ad019: jmp 0x5ad022 */ goto L_005ad022;
L_005ad01b:; BB(0x005ad01b);
    /* 005ad01b: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005ad022:; BB(0x005ad022);
    /* 005ad022: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005ad026: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad028: je 0x5ad037 */ if (fZ) goto L_005ad037;
L_005ad02a:; BB(0x005ad02a);
    /* 005ad02a: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ad030: call 0x5a8610 */ r_esp -= 4; W32(r_esp, 0x5ad035u); f_005a8610();
    /* 005ad035: jmp 0x5ad091 */ goto L_005ad091;
L_005ad037:; BB(0x005ad037);
    /* 005ad037: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ad03a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad03b: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005ad041: call 0x5a6bb0 */ r_esp -= 4; W32(r_esp, 0x5ad046u); f_005a6bb0();
    /* 005ad046: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005ad049: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005ad04c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad04d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ad050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad051: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad057: call 0x5b73e0 */ r_esp -= 4; W32(r_esp, 0x5ad05cu); f_005b73e0();
    /* 005ad05c: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005ad060: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad062: je 0x5ad075 */ if (fZ) goto L_005ad075;
L_005ad064:; BB(0x005ad064);
    /* 005ad064: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ad067: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad068: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad06a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ad070: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5ad075u); f_005b7310();
L_005ad075:; BB(0x005ad075);
    /* 005ad075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad077: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad079: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005ad07f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ad082: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005ad087: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ad08a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ad08c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ad08f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ad091u); call_ind(t); }
L_005ad091:; BB(0x005ad091);
    /* 005ad091: mov esp, ebp */ r_esp = r_ebp;
    /* 005ad093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad094: ret 4 */ FN_RET(0x005acf90); r_esp += 8; return;
}

