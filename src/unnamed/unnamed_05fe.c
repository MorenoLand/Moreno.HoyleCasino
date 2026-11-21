#include "protos.h"

void f_005fe1c0(void) /* sub_5FE1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe1c0);
    /* 005fe1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe1c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe1c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fe1c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe1cd: jne 0x5fe1d3 */ if (!fZ) goto L_005fe1d3;
L_005fe1cf:; BB(0x005fe1cf);
    /* 005fe1cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fe1d1: jmp 0x5fe234 */ goto L_005fe234;
L_005fe1d3:; BB(0x005fe1d3);
    /* 005fe1d3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005fe1da: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fe1dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fe1e0:; BB(0x005fe1e0);
    /* 005fe1e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe1e3: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005fe1e6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe1e9: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe1ed: je 0x5fe232 */ if (fZ) goto L_005fe232;
L_005fe1ef:; BB(0x005fe1ef);
    /* 005fe1ef: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005fe1f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe1f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1f7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fe1fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe1fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe1fe: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005fe201: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fe204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe205: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe208: call 0x5fe290 */ r_esp -= 4; W32(r_esp, 0x5fe20du); f_005fe290();
    /* 005fe20d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fe210: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe212: jne 0x5fe218 */ if (!fZ) goto L_005fe218;
L_005fe214:; BB(0x005fe214);
    /* 005fe214: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fe216: jmp 0x5fe234 */ goto L_005fe234;
L_005fe218:; BB(0x005fe218);
    /* 005fe218: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe21b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005fe21e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe221: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 005fe224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fe227: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe22a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fe22d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fe230: jmp 0x5fe1e0 */ goto L_005fe1e0;
L_005fe232:; BB(0x005fe232);
    /* 005fe232: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005fe234:; BB(0x005fe234);
    /* 005fe234: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe237: ret 0x10 */ FN_RET(0x005fe1c0); r_esp += 20; return;
}

void f_005fe240(void) /* sub_5FE240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe240);
    /* 005fe240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe241: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe243: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe246: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fe249: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005fe24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe24d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe250: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe251: mov edx, dword ptr [0x15e55e4] */ r_edx = R32((u32)(0x15e55e4u));
    /* 005fe257: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe259: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fe25f: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 005fe262: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe264u); call_ind(t); }
    /* 005fe264: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fe267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe269: jne 0x5fe26f */ if (!fZ) goto L_005fe26f;
L_005fe26b:; BB(0x005fe26b);
    /* 005fe26b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fe26d: jmp 0x5fe287 */ goto L_005fe287;
L_005fe26f:; BB(0x005fe26f);
    /* 005fe26f: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005fe272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe273: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fe276: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe277: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe27b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005fe27e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe27f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe282: call 0x5fe290 */ r_esp -= 4; W32(r_esp, 0x5fe287u); f_005fe290();
L_005fe287:; BB(0x005fe287);
    /* 005fe287: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe28a: ret 0x10 */ FN_RET(0x005fe240); r_esp += 20; return;
}

void f_005fe290(void) /* sub_5FE290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe290);
    /* 005fe290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe291: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe295: push 0x6aa707 */ { u32 v = 0x6aa707u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe29a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe2a1: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe2a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fe2a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe2ab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fe2ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe2af: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fe2b2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fe2b8: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005fe2bb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fe2c2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe2c6: je 0x5fe2d0 */ if (fZ) goto L_005fe2d0;
L_005fe2c8:; BB(0x005fe2c8);
    /* 005fe2c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe2cb: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe2ce: jne 0x5fe2d7 */ if (!fZ) goto L_005fe2d7;
L_005fe2d0:; BB(0x005fe2d0);
    /* 005fe2d0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fe2d2: jmp 0x5fe618 */ goto L_005fe618;
L_005fe2d7:; BB(0x005fe2d7);
    /* 005fe2d7: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe2db: jne 0x5fe2e8 */ if (!fZ) goto L_005fe2e8;
L_005fe2dd:; BB(0x005fe2dd);
    /* 005fe2dd: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe2e0: call 0x5fe7f0 */ r_esp -= 4; W32(r_esp, 0x5fe2e5u); f_005fe7f0();
    /* 005fe2e5: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005fe2e8:; BB(0x005fe2e8);
    /* 005fe2e8: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe2ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fe2f2u); f_00686d82();
    /* 005fe2f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe2f5: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005fe2f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe2ff: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe303: je 0x5fe31c */ if (fZ) goto L_005fe31c;
L_005fe305:; BB(0x005fe305);
    /* 005fe305: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe309: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe30c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe30f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005fe312: call 0x5fc850 */ r_esp -= 4; W32(r_esp, 0x5fe317u); f_005fc850();
    /* 005fe317: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005fe31a: jmp 0x5fe323 */ goto L_005fe323;
L_005fe31c:; BB(0x005fe31c);
    /* 005fe31c: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005fe323:; BB(0x005fe323);
    /* 005fe323: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005fe326: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005fe329: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe330: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe332: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe334: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fe33a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe33c: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe342: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 005fe345: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe347u); call_ind(t); }
    /* 005fe347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe348: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fe34d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe34f: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe355: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005fe358: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe35au); call_ind(t); }
    /* 005fe35a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe35b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe361: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe363: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe369: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005fe36c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe36eu); call_ind(t); }
    /* 005fe36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe36f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe372: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005fe375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe376: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fe37b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe37d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe383: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fe386: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe388u); call_ind(t); }
    /* 005fe388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe389: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe38b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe38d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe38f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fe392: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe393: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe396: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe399: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe39c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe39d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe3a0: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5fe3a5u); f_005f9de0();
    /* 005fe3a5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005fe3a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe3ab: cmp dword ptr [edx], -2 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3ae: jne 0x5fe3c2 */ if (!fZ) goto L_005fe3c2;
L_005fe3b0:; BB(0x005fe3b0);
    /* 005fe3b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe3b2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe3b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe3b7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe3ba: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fe3c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe3c2u); call_ind(t); }
L_005fe3c2:; BB(0x005fe3c2);
    /* 005fe3c2: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005fe3c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3c8: je 0x5fe46e */ if (fZ) goto L_005fe46e;
L_005fe3ce:; BB(0x005fe3ce);
    /* 005fe3ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe3d1: cmp dword ptr [edx + 8], -1 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3d5: je 0x5fe45d */ if (fZ) goto L_005fe45d;
L_005fe3db:; BB(0x005fe3db);
    /* 005fe3db: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe3e0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fe3e5u); f_00686d82();
    /* 005fe3e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe3e8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005fe3eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fe3f2: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe3f6: je 0x5fe405 */ if (fZ) goto L_005fe405;
L_005fe3f8:; BB(0x005fe3f8);
    /* 005fe3f8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005fe3fb: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5fe400u); f_005eaaf0();
    /* 005fe400: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005fe403: jmp 0x5fe40c */ goto L_005fe40c;
L_005fe405:; BB(0x005fe405);
    /* 005fe405: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005fe40c:; BB(0x005fe40c);
    /* 005fe40c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005fe40f: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005fe412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe419: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe41c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe41f: mov dword ptr [ecx + 0x1f4], edx */ W32((u32)(r_ecx+0x1f4u), r_edx);
    /* 005fe425: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe428: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fe42e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe431: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005fe434: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe436: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe438: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe43a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe43c: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fe441: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe443: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe449: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005fe44c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe44eu); call_ind(t); }
    /* 005fe44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe44f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe452: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 005fe458: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fe45du); f_005eae80();
L_005fe45d:; BB(0x005fe45d);
    /* 005fe45d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe460: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe463: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005fe466: mov dword ptr [edx + 0x1ec], ecx */ W32((u32)(r_edx+0x1ecu), r_ecx);
    /* 005fe46c: jmp 0x5fe47b */ goto L_005fe47b;
L_005fe46e:; BB(0x005fe46e);
    /* 005fe46e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe471: mov dword ptr [edx + 0x1ec], 0xffffffff */ W32((u32)(r_edx+0x1ecu), 0xffffffffu);
L_005fe47b:; BB(0x005fe47b);
    /* 005fe47b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe47d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005fe47f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe482: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005fe488: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x5fe48du); f_005ef340();
    /* 005fe48d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe48f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe492: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005fe498: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x5fe49du); f_005ef310();
    /* 005fe49d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe4a0: movsx eax, byte ptr [edx + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xcu));
    /* 005fe4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe4a6: je 0x5fe4c7 */ if (fZ) goto L_005fe4c7;
L_005fe4a8:; BB(0x005fe4a8);
    /* 005fe4a8: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005fe4ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe4af: mov al, byte ptr [edx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0xcu))) & 0xffu);
    /* 005fe4b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4b3: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe4b6: call 0x5fe770 */ r_esp -= 4; W32(r_esp, 0x5fe4bbu); f_005fe770();
    /* 005fe4bb: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005fe4be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4bf: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe4c2: call 0x5fd730 */ r_esp -= 4; W32(r_esp, 0x5fe4c7u); f_005fd730();
L_005fe4c7:; BB(0x005fe4c7);
    /* 005fe4c7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fe4ca: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005fe4cd: cmp dword ptr [ebp - 0x7c], -2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe4d1: je 0x5fe4fe */ if (fZ) goto L_005fe4fe;
L_005fe4d3:; BB(0x005fe4d3);
    /* 005fe4d3: cmp dword ptr [ebp - 0x7c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe4d7: je 0x5fe4db */ if (fZ) goto L_005fe4db;
L_005fe4d9:; BB(0x005fe4d9);
    /* 005fe4d9: jmp 0x5fe503 */ goto L_005fe503;
L_005fe4db:; BB(0x005fe4db);
    /* 005fe4db: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe4de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4df: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe4e2: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe4e5: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe4eau); f_0060c890();
    /* 005fe4ea: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe4ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4ee: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe4f1: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe4f4: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5fe4f9u); f_0060c7d0();
    /* 005fe4f9: jmp 0x5fe5e7 */ goto L_005fe5e7;
L_005fe4fe:; BB(0x005fe4fe);
    /* 005fe4fe: jmp 0x5fe5e7 */ goto L_005fe5e7;
L_005fe503:; BB(0x005fe503);
    /* 005fe503: mov dword ptr [ebp - 0x50], 0xfffffffe */ W32((u32)(r_ebp+0xffffffb0u), 0xfffffffeu);
    /* 005fe50a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fe50d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe50e: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x5fe513u); f_00686eba();
    /* 005fe513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe517: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe51a: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5fe51fu); f_005ff060();
    /* 005fe51f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005fe522: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe526: je 0x5fe549 */ if (fZ) goto L_005fe549;
L_005fe528:; BB(0x005fe528);
    /* 005fe528: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005fe52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe52c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe52f: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe532: call 0x60cac0 */ r_esp -= 4; W32(r_esp, 0x5fe537u); f_0060cac0();
    /* 005fe537: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005fe53a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe53e: jge 0x5fe549 */ if ((fS==fO)) goto L_005fe549;
L_005fe540:; BB(0x005fe540);
    /* 005fe540: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005fe543: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe546: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_005fe549:; BB(0x005fe549);
    /* 005fe549: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe54d: jge 0x5fe593 */ if ((fS==fO)) goto L_005fe593;
L_005fe54f:; BB(0x005fe54f);
    /* 005fe54f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe553: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe556: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe559: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe55eu); f_0060c890();
    /* 005fe55e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe561: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005fe564: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005fe567: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005fe56a: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe56e: je 0x5fe583 */ if (fZ) goto L_005fe583;
L_005fe570:; BB(0x005fe570);
    /* 005fe570: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe572: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005fe575: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe577: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005fe57a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe57c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe57eu); call_ind(t); }
    /* 005fe57e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005fe581: jmp 0x5fe58a */ goto L_005fe58a;
L_005fe583:; BB(0x005fe583);
    /* 005fe583: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005fe58a:; BB(0x005fe58a);
    /* 005fe58a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fe58c: jmp 0x5fe618 */ goto L_005fe618;
L_005fe593:; BB(0x005fe593);
    /* 005fe593: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe597: jne 0x5fe5b9 */ if (!fZ) goto L_005fe5b9;
L_005fe599:; BB(0x005fe599);
    /* 005fe599: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe59d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe5a0: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5a3: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe5a8u); f_0060c890();
    /* 005fe5a8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5ac: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe5af: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5b2: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5fe5b7u); f_0060c7d0();
    /* 005fe5b7: jmp 0x5fe5e7 */ goto L_005fe5e7;
L_005fe5b9:; BB(0x005fe5b9);
    /* 005fe5b9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe5bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5bd: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe5c0: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5c3: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe5c8u); f_0060c890();
    /* 005fe5c8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe5cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5cc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005fe5cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5d0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe5d3: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5d6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fe5dbu); f_0060ca40();
    /* 005fe5db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5dc: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe5df: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe5e2: call 0x60cb20 */ r_esp -= 4; W32(r_esp, 0x5fe5e7u); f_0060cb20();
L_005fe5e7:; BB(0x005fe5e7);
    /* 005fe5e7: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005fe5eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe5ed: je 0x5fe60e */ if (fZ) goto L_005fe60e;
L_005fe5ef:; BB(0x005fe5ef);
    /* 005fe5ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe5f2: cmp dword ptr [eax + 8], -1 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe5f6: je 0x5fe60e */ if (fZ) goto L_005fe60e;
L_005fe5f8:; BB(0x005fe5f8);
    /* 005fe5f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe5ff: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005fe602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe603: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fe609: call 0x5f2370 */ r_esp -= 4; W32(r_esp, 0x5fe60eu); f_005f2370();
L_005fe60e:; BB(0x005fe60e);
    /* 005fe60e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005fe611: call 0x5fdd10 */ r_esp -= 4; W32(r_esp, 0x5fe616u); f_005fdd10();
    /* 005fe616: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005fe618:; BB(0x005fe618);
    /* 005fe618: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe61b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe623: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe626: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe628: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5fe62du); f_00686d72();
    /* 005fe62d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe62f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe630: ret 0x10 */ FN_RET(0x005fe290); r_esp += 20; return;
}

void f_005fe640(void) /* sub_5FE640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe640);
    /* 005fe640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe641: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe643: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe646: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fe649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe650: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe654: jle 0x5fe6ff */ if ((fZ||fS!=fO)) goto L_005fe6ff;
L_005fe65a:; BB(0x005fe65a);
    /* 005fe65a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005fe661: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005fe668:; BB(0x005fe668);
    /* 005fe668: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe66b: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe66e: jge 0x5fe6ae */ if ((fS==fO)) goto L_005fe6ae;
L_005fe670:; BB(0x005fe670);
    /* 005fe670: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe673: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe676: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fe67bu); f_0060c9a0();
    /* 005fe67b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe67e: jge 0x5fe6ae */ if ((fS==fO)) goto L_005fe6ae;
L_005fe680:; BB(0x005fe680);
    /* 005fe680: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe684: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe687: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fe68cu); f_005ff080();
    /* 005fe68c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fe68f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe692: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005fe695: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe698: jne 0x5fe6a3 */ if (!fZ) goto L_005fe6a3;
L_005fe69a:; BB(0x005fe69a);
    /* 005fe69a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe69d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe6a0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005fe6a3:; BB(0x005fe6a3);
    /* 005fe6a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe6a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fe6a9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005fe6ac: jmp 0x5fe668 */ goto L_005fe668;
L_005fe6ae:; BB(0x005fe6ae);
    /* 005fe6ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fe6b1: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe6b4: jne 0x5fe6fd */ if (!fZ) goto L_005fe6fd;
L_005fe6b6:; BB(0x005fe6b6);
    /* 005fe6b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe6b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe6bd: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe6c0: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe6c5u); f_0060c890();
    /* 005fe6c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe6c8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005fe6cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe6ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fe6d1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe6d5: je 0x5fe6ea */ if (fZ) goto L_005fe6ea;
L_005fe6d7:; BB(0x005fe6d7);
    /* 005fe6d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fe6dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe6de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fe6e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe6e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe6e5u); call_ind(t); }
    /* 005fe6e5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fe6e8: jmp 0x5fe6f1 */ goto L_005fe6f1;
L_005fe6ea:; BB(0x005fe6ea);
    /* 005fe6ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fe6f1:; BB(0x005fe6f1);
    /* 005fe6f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe6f4: call 0x5fdd10 */ r_esp -= 4; W32(r_esp, 0x5fe6f9u); f_005fdd10();
    /* 005fe6f9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005fe6fb: jmp 0x5fe75d */ goto L_005fe75d;
L_005fe6fd:; BB(0x005fe6fd);
    /* 005fe6fd: jmp 0x5fe75b */ goto L_005fe75b;
L_005fe6ff:; BB(0x005fe6ff);
    /* 005fe6ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fe702: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe703: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe706: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5fe70bu); f_005ff060();
    /* 005fe70b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fe70e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe712: je 0x5fe75b */ if (fZ) goto L_005fe75b;
L_005fe714:; BB(0x005fe714);
    /* 005fe714: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe718: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe71b: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe71e: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5fe723u); f_0060c890();
    /* 005fe723: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fe726: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fe729: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe72c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fe72f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe733: je 0x5fe748 */ if (fZ) goto L_005fe748;
L_005fe735:; BB(0x005fe735);
    /* 005fe735: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe737: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe73a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe73c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe73f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe741: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe743u); call_ind(t); }
    /* 005fe743: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fe746: jmp 0x5fe74f */ goto L_005fe74f;
L_005fe748:; BB(0x005fe748);
    /* 005fe748: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fe74f:; BB(0x005fe74f);
    /* 005fe74f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe752: call 0x5fdd10 */ r_esp -= 4; W32(r_esp, 0x5fe757u); f_005fdd10();
    /* 005fe757: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005fe759: jmp 0x5fe75d */ goto L_005fe75d;
L_005fe75b:; BB(0x005fe75b);
    /* 005fe75b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005fe75d:; BB(0x005fe75d);
    /* 005fe75d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe75f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe760: ret 8 */ FN_RET(0x005fe640); r_esp += 12; return;
}

void f_005fe770(void) /* sub_5FE770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe770);
    /* 005fe770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe771: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fe777: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005fe77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe77d: jne 0x5fe795 */ if (!fZ) goto L_005fe795;
L_005fe77f:; BB(0x005fe77f);
    /* 005fe77f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe784: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fe787: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe788: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5fe78du); f_00686d8e();
    /* 005fe78d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe790: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe793: jmp 0x5fe7df */ goto L_005fe7df;
L_005fe795:; BB(0x005fe795);
    /* 005fe795: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005fe799: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe79c: jge 0x5fe7c5 */ if ((fS==fO)) goto L_005fe7c5;
L_005fe79e:; BB(0x005fe79e);
    /* 005fe79e: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005fe7a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7a3: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe7a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe7ab: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe7b1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005fe7b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe7b6u); call_ind(t); }
    /* 005fe7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7b7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fe7ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7bb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5fe7c0u); f_00686d8e();
    /* 005fe7c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe7c3: jmp 0x5fe7dc */ goto L_005fe7dc;
L_005fe7c5:; BB(0x005fe7c5);
    /* 005fe7c5: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005fe7c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7ca: push 0x6d33e4 */ { u32 v = 0x6d33e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe7d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7d3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5fe7d9u); call_ind(t); }
    /* 005fe7d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fe7dc:; BB(0x005fe7dc);
    /* 005fe7dc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_005fe7df:; BB(0x005fe7df);
    /* 005fe7df: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe7e2: ret 8 */ FN_RET(0x005fe770); r_esp += 12; return;
}

void f_005fe7f0(void) /* sub_5FE7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fe7f0);
    /* 005fe7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7f5: push 0x6aa737 */ { u32 v = 0x6aa737u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe801: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fe809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe80c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fe80f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fe815: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005fe818: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005fe81f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005fe826: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fe82d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005fe834: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe839: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fe83eu); f_00686d82();
    /* 005fe83e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe841: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005fe844: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe84b: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe84f: je 0x5fe85e */ if (fZ) goto L_005fe85e;
L_005fe851:; BB(0x005fe851);
    /* 005fe851: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005fe854: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5fe859u); f_005eaaf0();
    /* 005fe859: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005fe85c: jmp 0x5fe865 */ goto L_005fe865;
L_005fe85e:; BB(0x005fe85e);
    /* 005fe85e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005fe865:; BB(0x005fe865);
    /* 005fe865: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005fe868: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fe86b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe872: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005fe875: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fe878: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005fe87f: jmp 0x5fe88a */ goto L_005fe88a;
L_005fe881:; BB(0x005fe881);
    /* 005fe881: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe884: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fe887: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005fe88a:; BB(0x005fe88a);
    /* 005fe88a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fe88d: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fe892u); f_005feda0();
    /* 005fe892: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe895: jge 0x5fe91f */ if ((fS==fO)) goto L_005fe91f;
L_005fe89b:; BB(0x005fe89b);
    /* 005fe89b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe89f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fe8a2: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fe8a7u); f_005ff080();
    /* 005fe8a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fe8aa: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8ae: je 0x5fe8bc */ if (fZ) goto L_005fe8bc;
L_005fe8b0:; BB(0x005fe8b0);
    /* 005fe8b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe8b3: cmp dword ptr [ecx + 0x1e8], -2 */ {  u32 a = R32((u32)(r_ecx+0x1e8u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8ba: jne 0x5fe8be */ if (!fZ) goto L_005fe8be;
L_005fe8bc:; BB(0x005fe8bc);
    /* 005fe8bc: jmp 0x5fe881 */ goto L_005fe881;
L_005fe8be:; BB(0x005fe8be);
    /* 005fe8be: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe8c1: cmp dword ptr [edx + 0x200], 0 */ {  u32 a = R32((u32)(r_edx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8c8: je 0x5fe8ed */ if (fZ) goto L_005fe8ed;
L_005fe8ca:; BB(0x005fe8ca);
    /* 005fe8ca: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe8cd: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005fe8d3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe8d6: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 005fe8dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe8de: mov ecx, eax */ r_ecx = r_eax;
    /* 005fe8e0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005fe8e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe8e8u); call_ind(t); }
    /* 005fe8e8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005fe8eb: jmp 0x5fe8f4 */ goto L_005fe8f4;
L_005fe8ed:; BB(0x005fe8ed);
    /* 005fe8ed: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005fe8f4:; BB(0x005fe8f4);
    /* 005fe8f4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe8f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8f8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe8fb: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x5fe900u); f_00602b70();
    /* 005fe900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe901: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fe904: call 0x5fea30 */ r_esp -= 4; W32(r_esp, 0x5fe909u); f_005fea30();
    /* 005fe909: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fe90c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe90f: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe912: jle 0x5fe91a */ if ((fZ||fS!=fO)) goto L_005fe91a;
L_005fe914:; BB(0x005fe914);
    /* 005fe914: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe917: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005fe91a:; BB(0x005fe91a);
    /* 005fe91a: jmp 0x5fe881 */ goto L_005fe881;
L_005fe91f:; BB(0x005fe91f);
    /* 005fe91f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe922: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe925: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fe928: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005fe92f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe933: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fe936: mov ecx, dword ptr [eax + 0x1b4] */ r_ecx = R32((u32)(r_eax+0x1b4u));
    /* 005fe93c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe93d: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fe943: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe945: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe94b: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 005fe94e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe950u); call_ind(t); }
    /* 005fe950: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005fe953:; BB(0x005fe953);
    /* 005fe953: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe957: je 0x5fe9ed */ if (fZ) goto L_005fe9ed;
L_005fe95d:; BB(0x005fe95d);
    /* 005fe95d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe961: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe964: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5fe969u); f_005eaf00();
    /* 005fe969: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe96c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe96e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe971: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005fe974: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe976u); call_ind(t); }
    /* 005fe976: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe979: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fe97eu); f_005f5550();
    /* 005fe97e: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe981: jge 0x5fe9b7 */ if ((fS==fO)) goto L_005fe9b7;
L_005fe983:; BB(0x005fe983);
    /* 005fe983: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe986: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe989: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fe98c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe98f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005fe992: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe996: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005fe999: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 005fe99f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9a0: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fe9a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe9a7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe9ad: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005fe9b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe9b2u); call_ind(t); }
    /* 005fe9b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fe9b5: jmp 0x5fe9e8 */ goto L_005fe9e8;
L_005fe9b7:; BB(0x005fe9b7);
    /* 005fe9b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe9ba: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005fe9bd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005fe9c0: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005fe9c3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe9c7: je 0x5fe9dc */ if (fZ) goto L_005fe9dc;
L_005fe9c9:; BB(0x005fe9c9);
    /* 005fe9c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9cb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005fe9ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe9d0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005fe9d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe9d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe9d7u); call_ind(t); }
    /* 005fe9d7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005fe9da: jmp 0x5fe9e3 */ goto L_005fe9e3;
L_005fe9dc:; BB(0x005fe9dc);
    /* 005fe9dc: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005fe9e3:; BB(0x005fe9e3);
    /* 005fe9e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe9e6: jmp 0x5fea1c */ goto L_005fea1c;
L_005fe9e8:; BB(0x005fe9e8);
    /* 005fe9e8: jmp 0x5fe953 */ goto L_005fe953;
L_005fe9ed:; BB(0x005fe9ed);
    /* 005fe9ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe9f0: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005fe9f3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005fe9f6: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005fe9f9: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe9fd: je 0x5fea12 */ if (fZ) goto L_005fea12;
L_005fe9ff:; BB(0x005fe9ff);
    /* 005fe9ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fea01: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005fea04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fea06: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005fea09: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fea0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fea0du); call_ind(t); }
    /* 005fea0d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005fea10: jmp 0x5fea19 */ goto L_005fea19;
L_005fea12:; BB(0x005fea12);
    /* 005fea12: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005fea19:; BB(0x005fea19);
    /* 005fea19: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_005fea1c:; BB(0x005fea1c);
    /* 005fea1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fea1f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fea26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fea27: mov esp, ebp */ r_esp = r_ebp;
    /* 005fea29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fea2a: ret  */ FN_RET(0x005fe7f0); r_esp += 4; return;
}

void f_005fea30(void) /* sub_5FEA30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fea30);
    /* 005fea30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fea31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fea33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fea35: push 0x6aa768 */ { u32 v = 0x6aa768u; r_esp -= 4; W32(r_esp, v); }
    /* 005fea3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fea40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea41: sub esp, 0x360 */ {  u32 a = r_esp; u32 b = 0x360u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fea47: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fea4c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fea4e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fea51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea52: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fea55: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fea5b: mov dword ptr [ebp - 0x36c], ecx */ W32((u32)(r_ebp+0xfffffc94u), r_ecx);
    /* 005fea61: mov dword ptr [ebp - 0x1e8], 0 */ W32((u32)(r_ebp+0xfffffe18u), 0x0u);
    /* 005fea6b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea6f: je 0x5fea7b */ if (fZ) goto L_005fea7b;
L_005fea71:; BB(0x005fea71);
    /* 005fea71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fea74: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005fea77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea79: jne 0x5fea82 */ if (!fZ) goto L_005fea82;
L_005fea7b:; BB(0x005fea7b);
    /* 005fea7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fea7d: jmp 0x5fec2a */ goto L_005fec2a;
L_005fea82:; BB(0x005fea82);
    /* 005fea82: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005fea88: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5fea8du); f_005ec5a0();
    /* 005fea8d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fea94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fea95: mov edx, esp */ r_edx = r_esp;
    /* 005fea97: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005fea9d: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005feaa0: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005feaa6: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005feaa9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005feaab: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005feab1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005feab3: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005feab9: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005feabc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5feabeu); call_ind(t); }
    /* 005feabe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feabf: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feac5: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5feacau); f_005ecd00();
    /* 005feaca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005feacd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feace: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005fead4: call 0x5ee5e0 */ r_esp -= 4; W32(r_esp, 0x5fead9u); f_005ee5e0();
    /* 005fead9: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feadf: call 0x5ef3e0 */ r_esp -= 4; W32(r_esp, 0x5feae4u); f_005ef3e0();
    /* 005feae4: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feaea: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5feaefu); f_005ef050();
    /* 005feaef: add eax, dword ptr [ebp - 0x1e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005feaf5: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
    /* 005feafb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feaff: je 0x5feb72 */ if (fZ) goto L_005feb72;
L_005feb01:; BB(0x005feb01);
    /* 005feb01: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005feb04: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005feb07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feb09: je 0x5feb72 */ if (fZ) goto L_005feb72;
L_005feb0b:; BB(0x005feb0b);
    /* 005feb0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005feb0c: mov eax, esp */ r_eax = r_esp;
    /* 005feb0e: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005feb15: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005feb18: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005feb1e: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005feb21: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005feb23: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005feb28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005feb2a: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005feb30: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005feb33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5feb35u); call_ind(t); }
    /* 005feb35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feb36: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feb3c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5feb41u); f_005ecd00();
    /* 005feb41: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005feb44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005feb45: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feb4b: call 0x5ee5e0 */ r_esp -= 4; W32(r_esp, 0x5feb50u); f_005ee5e0();
    /* 005feb50: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feb56: call 0x5ef3e0 */ r_esp -= 4; W32(r_esp, 0x5feb5bu); f_005ef3e0();
    /* 005feb5b: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005feb61: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5feb66u); f_005ef050();
    /* 005feb66: add eax, dword ptr [ebp - 0x1e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005feb6c: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
L_005feb72:; BB(0x005feb72);
    /* 005feb72: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005feb78: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5feb7du); f_005eaaf0();
    /* 005feb7d: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005feb81: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005feb87: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005feb89: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005feb8f: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 005feb92: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5feb94u); call_ind(t); }
    /* 005feb94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feb95: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005feb9b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5feba0u); f_005eaf00();
    /* 005feba0: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005feba6: call 0x5eacb0 */ r_esp -= 4; W32(r_esp, 0x5febabu); f_005eacb0();
    /* 005febab: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005febb1: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5febb6u); f_005f5550();
    /* 005febb6: add eax, dword ptr [ebp - 0x1e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005febbc: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
    /* 005febc2: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005febc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005febc9: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005febcf: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005febd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5febd4u); call_ind(t); }
    /* 005febd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005febd5: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005febdb: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5febe0u); f_005eaf00();
    /* 005febe0: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005febe6: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5febebu); f_005f5550();
    /* 005febeb: add eax, dword ptr [ebp - 0x1e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005febf1: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
    /* 005febf7: mov ecx, dword ptr [ebp - 0x1e8] */ r_ecx = R32((u32)(r_ebp+0xfffffe18u));
    /* 005febfd: mov dword ptr [ebp - 0x368], ecx */ W32((u32)(r_ebp+0xfffffc98u), r_ecx);
    /* 005fec03: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fec07: lea ecx, [ebp - 0x364] */ r_ecx = (u32)(r_ebp+0xfffffc9cu);
    /* 005fec0d: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x5fec12u); f_005eac00();
    /* 005fec12: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fec19: lea ecx, [ebp - 0x1e4] */ r_ecx = (u32)(r_ebp+0xfffffe1cu);
    /* 005fec1f: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x5fec24u); f_005ec760();
    /* 005fec24: mov eax, dword ptr [ebp - 0x368] */ r_eax = R32((u32)(r_ebp+0xfffffc98u));
L_005fec2a:; BB(0x005fec2a);
    /* 005fec2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fec2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fec34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fec35: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fec38: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fec3a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5fec3fu); f_00686d72();
    /* 005fec3f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fec41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fec42: ret 8 */ FN_RET(0x005fea30); r_esp += 12; return;
}

void f_005fecb0(void) /* sub_5FECB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fecb0);
    /* 005fecb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fecb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fecb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fecb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fecb7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fecba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fecbd: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fecc2u); f_005feda0();
    /* 005fecc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecc4: je 0x5fecf1 */ if (fZ) goto L_005fecf1;
L_005fecc6:; BB(0x005fecc6);
    /* 005fecc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fecc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005feccb: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fecd0u); f_005ff080();
    /* 005fecd0: mov ecx, eax */ r_ecx = r_eax;
    /* 005fecd2: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fecd7u); f_005f5550();
    /* 005fecd7: mov esi, eax */ r_esi = r_eax;
    /* 005fecd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fecdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fecde: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fece3u); f_005ff080();
    /* 005fece3: mov ecx, eax */ r_ecx = r_eax;
    /* 005fece5: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5feceau); f_005eb470();
    /* 005fecea: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fecec: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005fecef: jmp 0x5fecf8 */ goto L_005fecf8;
L_005fecf1:; BB(0x005fecf1);
    /* 005fecf1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005fecf8:; BB(0x005fecf8);
    /* 005fecf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fecfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fecfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005fecfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fecff: ret  */ FN_RET(0x005fecb0); r_esp += 4; return;
}

void f_005fed00(void) /* sub_5FED00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fed00);
    /* 005fed00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fed01: mov ebp, esp */ r_ebp = r_esp;
    /* 005fed03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fed06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fed09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005fed10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fed17: jmp 0x5fed22 */ goto L_005fed22;
L_005fed19:; BB(0x005fed19);
    /* 005fed19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fed1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fed22:; BB(0x005fed22);
    /* 005fed22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed25: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fed2au); f_005feda0();
    /* 005fed2a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fed2d: jge 0x5fed4a */ if ((fS==fO)) goto L_005fed4a;
L_005fed2f:; BB(0x005fed2f);
    /* 005fed2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fed32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed36: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fed3bu); f_005ff080();
    /* 005fed3b: mov ecx, eax */ r_ecx = r_eax;
    /* 005fed3d: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fed42u); f_005f5590();
    /* 005fed42: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fed45: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fed48: jmp 0x5fed19 */ goto L_005fed19;
L_005fed4a:; BB(0x005fed4a);
    /* 005fed4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed4f: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fed54u); f_005fb2b0();
    /* 005fed54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fed56: je 0x5fed6f */ if (fZ) goto L_005fed6f;
L_005fed58:; BB(0x005fed58);
    /* 005fed58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed5d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fed62u); f_005fb2b0();
    /* 005fed62: mov ecx, eax */ r_ecx = r_eax;
    /* 005fed64: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fed69u); f_005f5590();
    /* 005fed69: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fed6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005fed6f:; BB(0x005fed6f);
    /* 005fed6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed74: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fed79u); f_005fb2b0();
    /* 005fed79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fed7b: je 0x5fed94 */ if (fZ) goto L_005fed94;
L_005fed7d:; BB(0x005fed7d);
    /* 005fed7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed82: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fed87u); f_005fb2b0();
    /* 005fed87: mov ecx, eax */ r_ecx = r_eax;
    /* 005fed89: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fed8eu); f_005f5590();
    /* 005fed8e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fed91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005fed94:; BB(0x005fed94);
    /* 005fed94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fed97: mov esp, ebp */ r_esp = r_ebp;
    /* 005fed99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fed9a: ret  */ FN_RET(0x005fed00); r_esp += 4; return;
}

void f_005fedc0(void) /* sub_5FEDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fedc0);
    /* 005fedc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fedc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fedc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fedc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fedc7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fedc8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fedcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fedce: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5fedd3u); f_005f84d0();
    /* 005fedd3: mov esi, eax */ r_esi = r_eax;
    /* 005fedd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fedd8: call 0x5fecb0 */ r_esp -= 4; W32(r_esp, 0x5fedddu); f_005fecb0();
    /* 005feddd: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005feddf: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fede4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fede7: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5fedecu); f_005f8550();
    /* 005fedec: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fedee: jle 0x5fee87 */ if ((fZ||fS!=fO)) goto L_005fee87;
L_005fedf4:; BB(0x005fedf4);
    /* 005fedf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedf6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fedf9: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fedfeu); f_005fb2b0();
    /* 005fedfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee00: je 0x5fee37 */ if (fZ) goto L_005fee37;
L_005fee02:; BB(0x005fee02);
    /* 005fee02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee07: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fee0cu); f_005fb2b0();
    /* 005fee0c: mov ecx, eax */ r_ecx = r_eax;
    /* 005fee0e: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5fee13u); f_005eb240();
    /* 005fee13: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fee16: jl 0x5fee37 */ if ((fS!=fO)) goto L_005fee37;
L_005fee18:; BB(0x005fee18);
    /* 005fee18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee1d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fee22u); f_005fb2b0();
    /* 005fee22: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005fee25: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fee2a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fee2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fee2f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fee35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fee37u); call_ind(t); }
L_005fee37:; BB(0x005fee37);
    /* 005fee37: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee3c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5fee41u); f_005f84f0();
    /* 005fee41: add eax, dword ptr [0x6d6eb8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6d6eb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fee47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fee48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee4b: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5fee50u); f_005f84d0();
    /* 005fee50: mov esi, eax */ r_esi = r_eax;
    /* 005fee52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee55: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5fee5au); f_005f84d0();
    /* 005fee5a: mov edi, eax */ r_edi = r_eax;
    /* 005fee5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee5f: call 0x5fecb0 */ r_esp -= 4; W32(r_esp, 0x5fee64u); f_005fecb0();
    /* 005fee64: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fee66: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fee6c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005fee6f: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5fee74u); f_005f8550();
    /* 005fee74: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fee76: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fee78: add esi, dword ptr [0x6d6eb4] */ {  u32 a = r_esi; u32 b = R32((u32)(0x6d6eb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fee7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fee7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee82: call 0x5fddf0 */ r_esp -= 4; W32(r_esp, 0x5fee87u); f_005fddf0();
L_005fee87:; BB(0x005fee87);
    /* 005fee87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee8a: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5fee8fu); f_005f84f0();
    /* 005fee8f: mov esi, eax */ r_esi = r_eax;
    /* 005fee91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fee94: call 0x5fed00 */ r_esp -= 4; W32(r_esp, 0x5fee99u); f_005fed00();
    /* 005fee99: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fee9b: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005feea1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005feea4: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5feea9u); f_005f8570();
    /* 005feea9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005feeab: jle 0x5fef44 */ if ((fZ||fS!=fO)) goto L_005fef44;
L_005feeb1:; BB(0x005feeb1);
    /* 005feeb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005feeb3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005feeb6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5feebbu); f_005fb2b0();
    /* 005feebb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feebd: je 0x5feef4 */ if (fZ) goto L_005feef4;
L_005feebf:; BB(0x005feebf);
    /* 005feebf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005feec1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005feec4: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5feec9u); f_005fb2b0();
    /* 005feec9: mov ecx, eax */ r_ecx = r_eax;
    /* 005feecb: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5feed0u); f_005eb240();
    /* 005feed0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005feed3: jl 0x5feef4 */ if ((fS!=fO)) goto L_005feef4;
L_005feed5:; BB(0x005feed5);
    /* 005feed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005feed7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005feeda: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5feedfu); f_005fb2b0();
    /* 005feedf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005feee2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005feee4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005feee7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005feee9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005feeec: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005feef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5feef4u); call_ind(t); }
L_005feef4:; BB(0x005feef4);
    /* 005feef4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005feef6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005feef9: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5feefeu); f_005f84f0();
    /* 005feefe: mov esi, eax */ r_esi = r_eax;
    /* 005fef00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef03: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5fef08u); f_005f84f0();
    /* 005fef08: mov edi, eax */ r_edi = r_eax;
    /* 005fef0a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef0d: call 0x5fed00 */ r_esp -= 4; W32(r_esp, 0x5fef12u); f_005fed00();
    /* 005fef12: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fef14: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fef1a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005fef1d: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5fef22u); f_005f8570();
    /* 005fef22: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005fef24: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fef26: add esi, dword ptr [0x6d6eb8] */ {  u32 a = r_esi; u32 b = R32((u32)(0x6d6eb8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fef2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fef2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef30: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5fef35u); f_005f84d0();
    /* 005fef35: add eax, dword ptr [0x6d6eb4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6d6eb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fef3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef3f: call 0x5fddf0 */ r_esp -= 4; W32(r_esp, 0x5fef44u); f_005fddf0();
L_005fef44:; BB(0x005fef44);
    /* 005fef44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef47: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5fef4cu); f_005f85d0();
    /* 005fef4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fef53: jmp 0x5fef5e */ goto L_005fef5e;
L_005fef55:; BB(0x005fef55);
    /* 005fef55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fef58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fef5b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005fef5e:; BB(0x005fef5e);
    /* 005fef5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef61: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fef66u); f_005feda0();
    /* 005fef66: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fef69: jge 0x5fef89 */ if ((fS==fO)) goto L_005fef89;
L_005fef6b:; BB(0x005fef6b);
    /* 005fef6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fef6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fef72: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fef77u); f_005ff080();
    /* 005fef77: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fef7a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fef7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fef7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fef82: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fef85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fef87u); call_ind(t); }
    /* 005fef87: jmp 0x5fef55 */ goto L_005fef55;
L_005fef89:; BB(0x005fef89);
    /* 005fef89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fef8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fef8b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fef8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fef8e: ret  */ FN_RET(0x005fedc0); r_esp += 4; return;
}

void f_005fef90(void) /* sub_5FEF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fef90);
    /* 005fef90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fef91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fef93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fef96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fef99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fefa0: jmp 0x5fefab */ goto L_005fefab;
L_005fefa2:; BB(0x005fefa2);
    /* 005fefa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefa5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fefa8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fefab:; BB(0x005fefab);
    /* 005fefab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fefae: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fefb3u); f_005feda0();
    /* 005fefb3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fefb6: jge 0x5fefd6 */ if ((fS==fO)) goto L_005fefd6;
L_005fefb8:; BB(0x005fefb8);
    /* 005fefb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fefbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fefbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fefbf: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fefc4u); f_005ff080();
    /* 005fefc4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005fefc7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fefca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fefcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fefcf: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005fefd2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fefd4u); call_ind(t); }
    /* 005fefd4: jmp 0x5fefa2 */ goto L_005fefa2;
L_005fefd6:; BB(0x005fefd6);
    /* 005fefd6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fefd9: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x5fefdeu); f_005f87d0();
    /* 005fefde: mov esp, ebp */ r_esp = r_ebp;
    /* 005fefe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fefe1: ret  */ FN_RET(0x005fef90); r_esp += 4; return;
}

void f_005feff0(void) /* sub_5FEFF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005feff0);
    /* 005feff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005feff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005feff3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005feff6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005feff9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff000: jmp 0x5ff00b */ goto L_005ff00b;
L_005ff002:; BB(0x005ff002);
    /* 005ff002: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff005: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ff008: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ff00b:; BB(0x005ff00b);
    /* 005ff00b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff00e: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5ff013u); f_005feda0();
    /* 005ff013: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff016: jge 0x5ff038 */ if ((fS==fO)) goto L_005ff038;
L_005ff018:; BB(0x005ff018);
    /* 005ff018: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff01b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff01c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff01f: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5ff024u); f_005ff080();
    /* 005ff024: mov edx, dword ptr [eax + 0x1ec] */ r_edx = R32((u32)(r_eax+0x1ecu));
    /* 005ff02a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff02b: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005ff031: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x5ff036u); f_005f2840();
    /* 005ff036: jmp 0x5ff002 */ goto L_005ff002;
L_005ff038:; BB(0x005ff038);
    /* 005ff038: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff03a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff03b: ret  */ FN_RET(0x005feff0); r_esp += 4; return;
}

