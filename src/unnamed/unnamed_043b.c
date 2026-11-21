#include "protos.h"

void f_0043b220(void) /* sub_43B220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b220);
    /* 0043b220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b221: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b227: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043b22a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b22d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0043b231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b233: cmp dword ptr [edx + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b23a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043b23d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b23f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b240: ret 4 */ FN_RET(0x0043b220); r_esp += 8; return;
}

void f_0043b250(void) /* sub_43B250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b250);
    /* 0043b250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b251: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b253: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b256: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b259: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b260: jmp 0x43b26b */ goto L_0043b26b;
L_0043b262:; BB(0x0043b262);
    /* 0043b262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b265: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b268: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b26b:; BB(0x0043b26b);
    /* 0043b26b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b26f: jge 0x43b28a */ if ((fS==fO)) goto L_0043b28a;
L_0043b271:; BB(0x0043b271);
    /* 0043b271: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b274: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b275: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b278: call 0x43b220 */ r_esp -= 4; W32(r_esp, 0x43b27du); f_0043b220();
    /* 0043b27d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043b280: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b282: je 0x43b288 */ if (fZ) goto L_0043b288;
L_0043b284:; BB(0x0043b284);
    /* 0043b284: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043b286: jmp 0x43b28c */ goto L_0043b28c;
L_0043b288:; BB(0x0043b288);
    /* 0043b288: jmp 0x43b262 */ goto L_0043b262;
L_0043b28a:; BB(0x0043b28a);
    /* 0043b28a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043b28c:; BB(0x0043b28c);
    /* 0043b28c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b28e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b28f: ret  */ FN_RET(0x0043b250); r_esp += 4; return;
}

void f_0043b290(void) /* sub_43B290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b290);
    /* 0043b290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b291: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b296: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b299: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b2a0: jmp 0x43b2ab */ goto L_0043b2ab;
L_0043b2a2:; BB(0x0043b2a2);
    /* 0043b2a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b2a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b2a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b2ab:; BB(0x0043b2ab);
    /* 0043b2ab: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b2af: jge 0x43b309 */ if ((fS==fO)) goto L_0043b309;
L_0043b2b1:; BB(0x0043b2b1);
    /* 0043b2b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b2b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2b7: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043b2bb: cmp dword ptr [eax + 0x110], 1 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b2c2: je 0x43b2d7 */ if (fZ) goto L_0043b2d7;
L_0043b2c4:; BB(0x0043b2c4);
    /* 0043b2c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b2c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2ca: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043b2ce: cmp dword ptr [eax + 0x110], 3 */ {  u32 a = R32((u32)(r_eax+0x110u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b2d5: jne 0x43b307 */ if (!fZ) goto L_0043b307;
L_0043b2d7:; BB(0x0043b2d7);
    /* 0043b2d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b2da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2dd: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043b2e1: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43b2e6u); f_005f5400();
    /* 0043b2e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b2e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2ea: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x43b2efu); f_00438870();
    /* 0043b2ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043b2f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b2f4: je 0x43b2f8 */ if (fZ) goto L_0043b2f8;
L_0043b2f6:; BB(0x0043b2f6);
    /* 0043b2f6: jmp 0x43b2a2 */ goto L_0043b2a2;
L_0043b2f8:; BB(0x0043b2f8);
    /* 0043b2f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b2fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b2fe: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043b302: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x43b307u); f_005cb9b0();
L_0043b307:; BB(0x0043b307);
    /* 0043b307: jmp 0x43b2a2 */ goto L_0043b2a2;
L_0043b309:; BB(0x0043b309);
    /* 0043b309: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b30b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b30c: ret  */ FN_RET(0x0043b290); r_esp += 4; return;
}

void f_0043b310(void) /* sub_43B310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b310);
    /* 0043b310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b311: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b313: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b316: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043b319: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043b320: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b322: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b324: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43b329u); f_0064c8a0();
    /* 0043b329: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b32c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b32f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0043b332: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b335: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043b338: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b33b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b33e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043b345: jmp 0x43b350 */ goto L_0043b350;
L_0043b347:; BB(0x0043b347);
    /* 0043b347: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b34a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b34d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0043b350:; BB(0x0043b350);
    /* 0043b350: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b354: jge 0x43b3e9 */ if ((fS==fO)) goto L_0043b3e9;
L_0043b35a:; BB(0x0043b35a);
    /* 0043b35a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b35e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b363u); f_005dcb00();
    /* 0043b363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b366: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b369: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b36c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43b371u); f_0063aac0();
    /* 0043b371: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b373: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043b376: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b378: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b37c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043b37f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043b382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b384: jne 0x43b3e4 */ if (!fZ) goto L_0043b3e4;
L_0043b386:; BB(0x0043b386);
    /* 0043b386: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b38a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b38fu); f_005dcb00();
    /* 0043b38f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b392: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b394: call 0x5d5920 */ r_esp -= 4; W32(r_esp, 0x43b399u); f_005d5920();
    /* 0043b399: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043b39c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b39e: je 0x43b3e4 */ if (fZ) goto L_0043b3e4;
L_0043b3a0:; BB(0x0043b3a0);
    /* 0043b3a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b3a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b3a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b3ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b3b1u); f_005dcb00();
    /* 0043b3b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3b4: add eax, 0x4cc */ {  u32 a = r_eax; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b3b9: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b3bb: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x43b3c0u); f_0064c6e0();
    /* 0043b3c0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043b3c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b3c5: je 0x43b3e4 */ if (fZ) goto L_0043b3e4;
L_0043b3c7:; BB(0x0043b3c7);
    /* 0043b3c7: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0043b3ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b3ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3cf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b3d4u); f_005dcb00();
    /* 0043b3d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3d7: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b3d9: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x43b3deu); f_005d6020();
    /* 0043b3de: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b3e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b3e4:; BB(0x0043b3e4);
    /* 0043b3e4: jmp 0x43b347 */ goto L_0043b347;
L_0043b3e9:; BB(0x0043b3e9);
    /* 0043b3e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b3ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b3ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b3ef: ret  */ FN_RET(0x0043b310); r_esp += 4; return;
}

void f_0043b3f0(void) /* sub_43B3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b3f0);
    /* 0043b3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b3f3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043b3f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043b400: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b402: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b407: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43b40cu); f_0064c8a0();
    /* 0043b40c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b40f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b412: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0043b415: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b418: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043b41b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b41e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043b421: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043b428: jmp 0x43b433 */ goto L_0043b433;
L_0043b42a:; BB(0x0043b42a);
    /* 0043b42a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b42d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b430: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0043b433:; BB(0x0043b433);
    /* 0043b433: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b437: jge 0x43b4cc */ if ((fS==fO)) goto L_0043b4cc;
L_0043b43d:; BB(0x0043b43d);
    /* 0043b43d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b441: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b446u); f_005dcb00();
    /* 0043b446: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b449: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b44c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b44f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43b454u); f_0063aac0();
    /* 0043b454: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b456: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043b459: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b45b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b45f: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043b462: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043b465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b467: jne 0x43b4c7 */ if (!fZ) goto L_0043b4c7;
L_0043b469:; BB(0x0043b469);
    /* 0043b469: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b46d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b472u); f_005dcb00();
    /* 0043b472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b475: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b477: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x43b47cu); f_005d58d0();
    /* 0043b47c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043b47f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b481: je 0x43b4c7 */ if (fZ) goto L_0043b4c7;
L_0043b483:; BB(0x0043b483);
    /* 0043b483: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b487: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b48a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b48b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b48e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b48f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b494u); f_005dcb00();
    /* 0043b494: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b497: add eax, 0x4cc */ {  u32 a = r_eax; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b49c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b49e: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x43b4a3u); f_0064c6a0();
    /* 0043b4a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043b4a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b4a8: je 0x43b4c7 */ if (fZ) goto L_0043b4c7;
L_0043b4aa:; BB(0x0043b4aa);
    /* 0043b4aa: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0043b4ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b4ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b4b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b4b2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b4b7u); f_005dcb00();
    /* 0043b4b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b4ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b4bc: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x43b4c1u); f_005d6020();
    /* 0043b4c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b4c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b4c7:; BB(0x0043b4c7);
    /* 0043b4c7: jmp 0x43b42a */ goto L_0043b42a;
L_0043b4cc:; BB(0x0043b4cc);
    /* 0043b4cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b4cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b4d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b4d2: ret  */ FN_RET(0x0043b3f0); r_esp += 4; return;
}

void f_0043b4e0(void) /* sub_43B4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b4e0);
    /* 0043b4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b4e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b4e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b4e9: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b4ef: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x43b4f4u); f_005da8c0();
    /* 0043b4f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b4f7: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b4fd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x43b502u); f_005da7b0();
    /* 0043b502: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043b505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b507: je 0x43b522 */ if (fZ) goto L_0043b522;
L_0043b509:; BB(0x0043b509);
    /* 0043b509: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b50f: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x43b514u); f_005da8a0();
    /* 0043b514: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b517: jl 0x43b522 */ if ((fS!=fO)) goto L_0043b522;
L_0043b519:; BB(0x0043b519);
    /* 0043b519: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0043b520: jmp 0x43b529 */ goto L_0043b529;
L_0043b522:; BB(0x0043b522);
    /* 0043b522: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0043b529:; BB(0x0043b529);
    /* 0043b529: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0043b52c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b52e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b52f: ret  */ FN_RET(0x0043b4e0); r_esp += 4; return;
}

void f_0043b530(void) /* sub_43B530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b530);
    /* 0043b530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b531: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b533: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b536: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043b537: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043b53a: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b540: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x43b545u); f_005da880();
    /* 0043b545: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043b548: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b54b: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b54e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043b54f: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0043b554: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043b554, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043b554, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043b556: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043b559: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b55c: call 0x43b6f0 */ r_esp -= 4; W32(r_esp, 0x43b561u); f_0043b6f0();
    /* 0043b561: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043b564: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b567: call 0x43b790 */ r_esp -= 4; W32(r_esp, 0x43b56cu); f_0043b790();
    /* 0043b56c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043b56f: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b575: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x43b57au); f_005da8c0();
    /* 0043b57a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043b57d: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b581: je 0x43b5c8 */ if (fZ) goto L_0043b5c8;
L_0043b583:; BB(0x0043b583);
    /* 0043b583: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043b586: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b589: jne 0x43b5c8 */ if (!fZ) goto L_0043b5c8;
L_0043b58b:; BB(0x0043b58b);
    /* 0043b58b: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0043b58e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b58f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043b592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b593: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b598u); f_005dcb00();
    /* 0043b598: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b59b: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b59d: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b5a2u); f_005d5a90();
    /* 0043b5a2: mov esi, eax */ r_esi = r_eax;
    /* 0043b5a4: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0043b5a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5a8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b5ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b5b1u); f_005dcb00();
    /* 0043b5b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b5b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b5b6: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b5bbu); f_005d5a90();
    /* 0043b5bb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b5bd: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b5c0: cmp dword ptr [esi], ecx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b5c2: jge 0x43b5c8 */ if ((fS==fO)) goto L_0043b5c8;
L_0043b5c4:; BB(0x0043b5c4);
    /* 0043b5c4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043b5c6: jmp 0x43b5ca */ goto L_0043b5ca;
L_0043b5c8:; BB(0x0043b5c8);
    /* 0043b5c8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043b5ca:; BB(0x0043b5ca);
    /* 0043b5ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043b5cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b5cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b5ce: ret 4 */ FN_RET(0x0043b530); r_esp += 8; return;
}

void f_0043b5e0(void) /* sub_43B5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b5e0);
    /* 0043b5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b5e3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b5e6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043b5e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b5ed: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43b5f2u); f_0064c8a0();
    /* 0043b5f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b5f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b5f8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0043b5fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b5fe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043b601: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b604: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043b607: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0043b60d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043b60f: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b615: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0043b61b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43b61du); call_ind(t); }
    /* 0043b61d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043b620: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0043b623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b624: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043b627: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b628: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0043b62e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043b630: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b636: mov edx, dword ptr [eax + 0x27c] */ r_edx = R32((u32)(r_eax+0x27cu));
    /* 0043b63c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43b63eu); call_ind(t); }
    /* 0043b63e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b641: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043b644: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b64a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x43b64fu); f_005da7b0();
    /* 0043b64f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043b652: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b654: je 0x43b6a3 */ if (fZ) goto L_0043b6a3;
L_0043b656:; BB(0x0043b656);
    /* 0043b656: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b65c: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x43b661u); f_005da8c0();
    /* 0043b661: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043b664: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b66a: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x43b66fu); f_005da8a0();
    /* 0043b66f: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b672: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b676: cmp eax, 0x190 */ {  u32 a = r_eax; u32 b = 0x190u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b67b: jge 0x43b686 */ if ((fS==fO)) goto L_0043b686;
L_0043b67d:; BB(0x0043b67d);
    /* 0043b67d: mov dword ptr [ebp - 0x28], 0x190 */ W32((u32)(r_ebp+0xffffffd8u), 0x190u);
    /* 0043b684: jmp 0x43b69b */ goto L_0043b69b;
L_0043b686:; BB(0x0043b686);
    /* 0043b686: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043b68c: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x43b691u); f_005da8a0();
    /* 0043b691: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b694: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b698: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0043b69b:; BB(0x0043b69b);
    /* 0043b69b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b69e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043b6a1: jmp 0x43b6c8 */ goto L_0043b6c8;
L_0043b6a3:; BB(0x0043b6a3);
    /* 0043b6a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b6a6: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b6a9: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b6ae: jge 0x43b6b9 */ if ((fS==fO)) goto L_0043b6b9;
L_0043b6b0:; BB(0x0043b6b0);
    /* 0043b6b0: mov dword ptr [ebp - 0x2c], 0x1f4 */ W32((u32)(r_ebp+0xffffffd4u), 0x1f4u);
    /* 0043b6b7: jmp 0x43b6c2 */ goto L_0043b6c2;
L_0043b6b9:; BB(0x0043b6b9);
    /* 0043b6b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b6bc: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b6bf: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0043b6c2:; BB(0x0043b6c2);
    /* 0043b6c2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043b6c5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043b6c8:; BB(0x0043b6c8);
    /* 0043b6c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043b6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6cc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b6d1u); f_005dcb00();
    /* 0043b6d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b6d4: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b6d6: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43b6dbu); f_005d5a50();
    /* 0043b6db: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6de: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b6e1: jge 0x43b6e7 */ if ((fS==fO)) goto L_0043b6e7;
L_0043b6e3:; BB(0x0043b6e3);
    /* 0043b6e3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043b6e5: jmp 0x43b6e9 */ goto L_0043b6e9;
L_0043b6e7:; BB(0x0043b6e7);
    /* 0043b6e7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043b6e9:; BB(0x0043b6e9);
    /* 0043b6e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b6eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b6ec: ret 4 */ FN_RET(0x0043b5e0); r_esp += 8; return;
}

void f_0043b6f0(void) /* sub_43B6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b6f0);
    /* 0043b6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b6f3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b6f6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043b6f9: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 0043b700: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0043b707: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043b70e: jmp 0x43b719 */ goto L_0043b719;
L_0043b710:; BB(0x0043b710);
    /* 0043b710: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b713: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b716: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0043b719:; BB(0x0043b719);
    /* 0043b719: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b71d: jge 0x43b784 */ if ((fS==fO)) goto L_0043b784;
L_0043b71f:; BB(0x0043b71f);
    /* 0043b71f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b723: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b728u); f_005dcb00();
    /* 0043b728: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b72b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b72e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b731: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0043b737: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0043b73a: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0043b73e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b740: jne 0x43b782 */ if (!fZ) goto L_0043b782;
L_0043b742:; BB(0x0043b742);
    /* 0043b742: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0043b745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b746: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b74a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b74fu); f_005dcb00();
    /* 0043b74f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b752: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b754: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b759u); f_005d5a90();
    /* 0043b759: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b75b: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b75e: jge 0x43b782 */ if ((fS==fO)) goto L_0043b782;
L_0043b760:; BB(0x0043b760);
    /* 0043b760: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0043b763: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b764: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b768: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b76du); f_005dcb00();
    /* 0043b76d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b770: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b772: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b777u); f_005d5a90();
    /* 0043b777: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b779: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b77c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b77f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043b782:; BB(0x0043b782);
    /* 0043b782: jmp 0x43b710 */ goto L_0043b710;
L_0043b784:; BB(0x0043b784);
    /* 0043b784: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b787: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b789: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b78a: ret  */ FN_RET(0x0043b6f0); r_esp += 4; return;
}

void f_0043b790(void) /* sub_43B790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043b790);
    /* 0043b790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b791: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b793: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b796: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043b799: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043b7a0: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0043b7a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b7ae: jmp 0x43b7b9 */ goto L_0043b7b9;
L_0043b7b0:; BB(0x0043b7b0);
    /* 0043b7b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b7b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b7b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043b7b9:; BB(0x0043b7b9);
    /* 0043b7b9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b7bd: jge 0x43b824 */ if ((fS==fO)) goto L_0043b824;
L_0043b7bf:; BB(0x0043b7bf);
    /* 0043b7bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b7c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b7c8u); f_005dcb00();
    /* 0043b7c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b7cb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043b7ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b7d1: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0043b7d7: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0043b7da: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0043b7de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7e0: jne 0x43b822 */ if (!fZ) goto L_0043b822;
L_0043b7e2:; BB(0x0043b7e2);
    /* 0043b7e2: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0043b7e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b7e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ea: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b7efu); f_005dcb00();
    /* 0043b7ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b7f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b7f4: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b7f9u); f_005d5a90();
    /* 0043b7f9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b7fb: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b7fe: jle 0x43b822 */ if ((fZ||fS!=fO)) goto L_0043b822;
L_0043b800:; BB(0x0043b800);
    /* 0043b800: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0043b803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b804: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b808: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43b80du); f_005dcb00();
    /* 0043b80d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b810: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b812: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x43b817u); f_005d5a90();
    /* 0043b817: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043b819: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043b81c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b81f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0043b822:; BB(0x0043b822);
    /* 0043b822: jmp 0x43b7b0 */ goto L_0043b7b0;
L_0043b824:; BB(0x0043b824);
    /* 0043b824: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b827: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b82a: ret  */ FN_RET(0x0043b790); r_esp += 4; return;
}

void f_0043bd30(void) /* sub_43BD30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bd30);
    /* 0043bd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd31: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bd33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bd36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043bd39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bd3c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43bd41u); f_005f5400();
    /* 0043bd41: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043bd44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bd47: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043bd4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043bd4d: cmp dword ptr [ebp - 8], 0x29 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043bd51: ja 0x43bf24 */ if ((!fC&&!fZ)) goto L_0043bf24;
L_0043bd57:; BB(0x0043bd57);
    /* 0043bd57: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bd5a: movzx edx, byte ptr [ecx + 0x43bf88] */ r_edx = (u32)R8((u32)(r_ecx+0x43bf88u));
    /* 0043bd61: jmp dword ptr [edx*4 + 0x43bf4c] */ { u32 t = R32((u32)(r_edx*4+0x43bf4cu)); switch (t) { case 0x43bd68u: goto L_0043bd68; case 0x43bd86u: goto L_0043bd86; case 0x43bda4u: goto L_0043bda4; case 0x43bdc5u: goto L_0043bdc5; case 0x43bde6u: goto L_0043bde6; case 0x43be07u: goto L_0043be07; case 0x43be28u: goto L_0043be28; case 0x43be49u: goto L_0043be49; case 0x43be6au: goto L_0043be6a; case 0x43be8bu: goto L_0043be8b; case 0x43beacu: goto L_0043beac; case 0x43becau: goto L_0043beca; case 0x43bee8u: goto L_0043bee8; case 0x43bf06u: goto L_0043bf06; case 0x43bf24u: goto L_0043bf24; default: UNSUP(0x0043bd61, "jump table entry is not a known target"); } }
L_0043bd68:; BB(0x0043bd68);
    /* 0043bd68: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bd6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd6c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bd6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd70: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bd76: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043bd79: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bd7eu); f_0043bd30();
    /* 0043bd7e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bd81: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bd86:; BB(0x0043bd86);
    /* 0043bd86: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bd89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bd8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bd8e: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bd94: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0043bd97: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bd9cu); f_0043bd30();
    /* 0043bd9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bd9f: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bda4:; BB(0x0043bda4);
    /* 0043bda4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bda7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bda8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bdab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdac: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bdb2: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 0043bdb8: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bdbdu); f_0043bd30();
    /* 0043bdbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bdc0: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bdc5:; BB(0x0043bdc5);
    /* 0043bdc5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bdc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bdcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdcd: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bdd3: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 0043bdd9: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bddeu); f_0043bd30();
    /* 0043bdde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bde1: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bde6:; BB(0x0043bde6);
    /* 0043bde6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bde9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bded: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bdee: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bdf4: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 0043bdfa: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bdffu); f_0043bd30();
    /* 0043bdff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043be02: jmp 0x43bf43 */ goto L_0043bf43;
L_0043be07:; BB(0x0043be07);
    /* 0043be07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043be0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043be0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be0f: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043be15: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 0043be1b: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43be20u); f_0043bd30();
    /* 0043be20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043be23: jmp 0x43bf43 */ goto L_0043bf43;
L_0043be28:; BB(0x0043be28);
    /* 0043be28: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043be2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043be2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be30: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043be36: mov ecx, dword ptr [edx + 0xa8] */ r_ecx = R32((u32)(r_edx+0xa8u));
    /* 0043be3c: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43be41u); f_0043bd30();
    /* 0043be41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043be44: jmp 0x43bf43 */ goto L_0043bf43;
L_0043be49:; BB(0x0043be49);
    /* 0043be49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043be4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043be4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be51: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043be57: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0043be5d: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43be62u); f_0043bd30();
    /* 0043be62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043be65: jmp 0x43bf43 */ goto L_0043bf43;
L_0043be6a:; BB(0x0043be6a);
    /* 0043be6a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043be6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043be6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be72: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043be78: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0043be7e: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43be83u); f_0043bd30();
    /* 0043be83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043be86: jmp 0x43bf43 */ goto L_0043bf43;
L_0043be8b:; BB(0x0043be8b);
    /* 0043be8b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043be8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043be8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043be92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043be93: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043be99: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 0043be9f: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bea4u); f_0043bd30();
    /* 0043bea4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bea7: jmp 0x43bf43 */ goto L_0043bf43;
L_0043beac:; BB(0x0043beac);
    /* 0043beac: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043beaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043beb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043beb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043beb4: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043beba: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0043bec0: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bec5u); f_0043bd30();
    /* 0043bec5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bec8: jmp 0x43bf43 */ goto L_0043bf43;
L_0043beca:; BB(0x0043beca);
    /* 0043beca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043becd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bece: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bed1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bed2: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bed8: mov ecx, dword ptr [edx + 0xd0] */ r_ecx = R32((u32)(r_edx+0xd0u));
    /* 0043bede: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bee3u); f_0043bd30();
    /* 0043bee3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bee6: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bee8:; BB(0x0043bee8);
    /* 0043bee8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043beeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043beec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043beef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bef0: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bef6: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 0043befc: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bf01u); f_0043bd30();
    /* 0043bf01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bf04: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bf06:; BB(0x0043bf06);
    /* 0043bf06: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bf09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bf0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bf0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bf0e: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bf14: mov ecx, dword ptr [edx + 0xe0] */ r_ecx = R32((u32)(r_edx+0xe0u));
    /* 0043bf1a: call 0x43bd30 */ r_esp -= 4; W32(r_esp, 0x43bf1fu); f_0043bd30();
    /* 0043bf1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bf22: jmp 0x43bf43 */ goto L_0043bf43;
L_0043bf24:; BB(0x0043bf24);
    /* 0043bf24: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bf27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bf2a: mov edx, dword ptr [ecx + eax*8 + 0xf0] */ r_edx = R32((u32)(r_ecx+r_eax*8+0xf0u));
    /* 0043bf31: mov eax, dword ptr [ecx + eax*8 + 0xf4] */ r_eax = R32((u32)(r_ecx+r_eax*8+0xf4u));
    /* 0043bf38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bf3b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0043bf3d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0043bf40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0043bf43:; BB(0x0043bf43);
    /* 0043bf43: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bf45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bf46: ret 8 */ FN_RET(0x0043bd30); r_esp += 12; return;
}

