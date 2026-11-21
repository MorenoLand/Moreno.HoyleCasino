#include "protos.h"

void f_005ba030(void) /* sub_5BA030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba030);
    /* 005ba030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba031: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba033: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba036: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ba039: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba03c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba03f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ba042: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ba045: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005ba04b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba04f: je 0x5ba067 */ if (fZ) goto L_005ba067;
L_005ba051:; BB(0x005ba051);
    /* 005ba051: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba054: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ba057: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba05a: ja 0x5ba067 */ if ((!fC&&!fZ)) goto L_005ba067;
L_005ba05c:; BB(0x005ba05c);
    /* 005ba05c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba05f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba062: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba065: jbe 0x5ba06d */ if ((fC||fZ)) goto L_005ba06d;
L_005ba067:; BB(0x005ba067);
    /* 005ba067: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba06du); call_ind(t); }
L_005ba06d:; BB(0x005ba06d);
    /* 005ba06d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba070: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba073: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ba075: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba078: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba07b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005ba07e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba081: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba084: ret 4 */ FN_RET(0x005ba030); r_esp += 8; return;
}

void f_005ba090(void) /* sub_5BA090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba090);
    /* 005ba090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba091: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba093: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba096: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005ba099: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba09c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba0a0: jne 0x5ba0ab */ if (!fZ) goto L_005ba0ab;
L_005ba0a2:; BB(0x005ba0a2);
    /* 005ba0a2: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005ba0a9: jmp 0x5ba0bd */ goto L_005ba0bd;
L_005ba0ab:; BB(0x005ba0ab);
    /* 005ba0ab: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0ae: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0b1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba0b4: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba0b7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba0ba: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_005ba0bd:; BB(0x005ba0bd);
    /* 005ba0bd: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0c0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba0c4: jne 0x5ba0cf */ if (!fZ) goto L_005ba0cf;
L_005ba0c6:; BB(0x005ba0c6);
    /* 005ba0c6: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005ba0cd: jmp 0x5ba0e1 */ goto L_005ba0e1;
L_005ba0cf:; BB(0x005ba0cf);
    /* 005ba0cf: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0d2: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0d5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005ba0d8: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba0db: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba0de: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
L_005ba0e1:; BB(0x005ba0e1);
    /* 005ba0e1: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005ba0e4: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba0e7: jae 0x5ba134 */ if (!fC) goto L_005ba134;
L_005ba0e9:; BB(0x005ba0e9);
    /* 005ba0e9: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba0ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba0ef: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005ba0f2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba0f5: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ba0f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba0fa: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005ba0fd: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 005ba100: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 005ba103: mov dl, byte ptr [ebp - 0x11] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 005ba106: mov byte ptr [ebp - 0x39], dl */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_edx);
    /* 005ba109: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ba10c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ba10f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba112: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba113: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba115: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ba118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba119: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5ba11eu); f_005c0910();
    /* 005ba11e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba121: mov eax, 1 */ r_eax = 0x1u;
    /* 005ba126: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ba129: add eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba12c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba12f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005ba132: jmp 0x5ba18a */ goto L_005ba18a;
L_005ba134:; BB(0x005ba134);
    /* 005ba134: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba137: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba13a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ba13d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ba144: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba148: je 0x5ba160 */ if (fZ) goto L_005ba160;
L_005ba14a:; BB(0x005ba14a);
    /* 005ba14a: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba14d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ba150: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba153: ja 0x5ba160 */ if ((!fC&&!fZ)) goto L_005ba160;
L_005ba155:; BB(0x005ba155);
    /* 005ba155: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba158: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba15b: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba15e: jbe 0x5ba166 */ if ((fC||fZ)) goto L_005ba166;
L_005ba160:; BB(0x005ba160);
    /* 005ba160: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba166u); call_ind(t); }
L_005ba166:; BB(0x005ba166);
    /* 005ba166: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba169: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ba16c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba16f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba172: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba176: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba17a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba17d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba17e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005ba181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba182: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ba185: call 0x5ba440 */ r_esp -= 4; W32(r_esp, 0x5ba18au); f_005ba440();
L_005ba18a:; BB(0x005ba18a);
    /* 005ba18a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba18c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba18d: ret 4 */ FN_RET(0x005ba090); r_esp += 8; return;
}

void f_005ba190(void) /* sub_5BA190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba190);
    /* 005ba190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba191: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ba197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba19a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba19d: jne 0x5ba1a5 */ if (!fZ) goto L_005ba1a5;
L_005ba19f:; BB(0x005ba19f);
    /* 005ba19f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba1a5u); call_ind(t); }
L_005ba1a5:; BB(0x005ba1a5);
    /* 005ba1a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba1a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ba1aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba1ad: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ba1b0: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba1b3: jb 0x5ba1bb */ if (fC) goto L_005ba1bb;
L_005ba1b5:; BB(0x005ba1b5);
    /* 005ba1b5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba1bbu); call_ind(t); }
L_005ba1bb:; BB(0x005ba1bb);
    /* 005ba1bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba1be: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ba1c1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba1c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba1c7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ba1ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba1cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba1cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba1d0: ret  */ FN_RET(0x005ba190); r_esp += 4; return;
}

void f_005ba1e0(void) /* sub_5BA1E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba1e0);
    /* 005ba1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1e5: push 0x6a7f48 */ { u32 v = 0x6a7f48u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ba1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1f1: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba1f7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ba1fc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba1fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba1ff: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ba202: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ba208: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005ba20e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ba215: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba21b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba21f: jne 0x5ba22d */ if (!fZ) goto L_005ba22d;
L_005ba221:; BB(0x005ba221);
    /* 005ba221: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 005ba22b: jmp 0x5ba248 */ goto L_005ba248;
L_005ba22d:; BB(0x005ba22d);
    /* 005ba22d: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba233: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba239: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba23c: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba23f: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba242: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
L_005ba248:; BB(0x005ba248);
    /* 005ba248: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005ba24e: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba251: jae 0x5ba2fd */ if (!fC) goto L_005ba2fd;
L_005ba257:; BB(0x005ba257);
    /* 005ba257: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba25d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba261: jne 0x5ba26f */ if (!fZ) goto L_005ba26f;
L_005ba263:; BB(0x005ba263);
    /* 005ba263: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 005ba26d: jmp 0x5ba28a */ goto L_005ba28a;
L_005ba26f:; BB(0x005ba26f);
    /* 005ba26f: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba275: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba27b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ba27e: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ba281: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005ba284: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
L_005ba28a:; BB(0x005ba28a);
    /* 005ba28a: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba290: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba293: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005ba296: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ba29d: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba2a4: je 0x5ba2c2 */ if (fZ) goto L_005ba2c2;
L_005ba2a6:; BB(0x005ba2a6);
    /* 005ba2a6: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba2ac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ba2af: cmp eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba2b2: ja 0x5ba2c2 */ if ((!fC&&!fZ)) goto L_005ba2c2;
L_005ba2b4:; BB(0x005ba2b4);
    /* 005ba2b4: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba2ba: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ba2bd: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba2c0: jbe 0x5ba2c8 */ if ((fC||fZ)) goto L_005ba2c8;
L_005ba2c2:; BB(0x005ba2c2);
    /* 005ba2c2: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba2c8u); call_ind(t); }
L_005ba2c8:; BB(0x005ba2c8);
    /* 005ba2c8: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba2ce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ba2d1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ba2d4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ba2d7: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 005ba2da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba2de: sub eax, dword ptr [ebp - 0xc4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff3cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba2e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba2ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba2ed: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba2f3: call 0x5ba640 */ r_esp -= 4; W32(r_esp, 0x5ba2f8u); f_005ba640();
    /* 005ba2f8: jmp 0x5ba41c */ goto L_005ba41c;
L_005ba2fd:; BB(0x005ba2fd);
    /* 005ba2fd: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba303: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba307: jne 0x5ba315 */ if (!fZ) goto L_005ba315;
L_005ba309:; BB(0x005ba309);
    /* 005ba309: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 005ba313: jmp 0x5ba330 */ goto L_005ba330;
L_005ba315:; BB(0x005ba315);
    /* 005ba315: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba31b: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba321: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba324: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba327: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba32a: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005ba330:; BB(0x005ba330);
    /* 005ba330: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba333: cmp ecx, dword ptr [ebp - 0xc8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff38u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba339: jae 0x5ba41c */ if (!fC) goto L_005ba41c;
L_005ba33f:; BB(0x005ba33f);
    /* 005ba33f: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba345: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ba348: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ba34b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005ba352: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba359: je 0x5ba377 */ if (fZ) goto L_005ba377;
L_005ba35b:; BB(0x005ba35b);
    /* 005ba35b: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba361: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ba364: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba367: ja 0x5ba377 */ if ((!fC&&!fZ)) goto L_005ba377;
L_005ba369:; BB(0x005ba369);
    /* 005ba369: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba36f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ba372: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba375: jbe 0x5ba37d */ if ((fC||fZ)) goto L_005ba37d;
L_005ba377:; BB(0x005ba377);
    /* 005ba377: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba37du); call_ind(t); }
L_005ba37d:; BB(0x005ba37d);
    /* 005ba37d: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba383: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ba386: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ba389: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ba38c: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba392: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ba395: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ba398: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ba39f: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba3a6: je 0x5ba3c4 */ if (fZ) goto L_005ba3c4;
L_005ba3a8:; BB(0x005ba3a8);
    /* 005ba3a8: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba3ae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ba3b1: cmp ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba3b4: ja 0x5ba3c4 */ if ((!fC&&!fZ)) goto L_005ba3c4;
L_005ba3b6:; BB(0x005ba3b6);
    /* 005ba3b6: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba3bc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ba3bf: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba3c2: jbe 0x5ba3ca */ if ((fC||fZ)) goto L_005ba3ca;
L_005ba3c4:; BB(0x005ba3c4);
    /* 005ba3c4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba3cau); call_ind(t); }
L_005ba3ca:; BB(0x005ba3ca);
    /* 005ba3ca: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba3d0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ba3d3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ba3d6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005ba3d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba3dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba3df: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ba3e2: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005ba3e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ba3e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba3e9: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005ba3ec: call 0x5bba90 */ r_esp -= 4; W32(r_esp, 0x5ba3f1u); f_005bba90();
    /* 005ba3f1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ba3f4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ba3f7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ba3fa: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ba3fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba401: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ba404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba405: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba408: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba409: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ba40c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba40d: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005ba410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba411: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba417: call 0x5ba570 */ r_esp -= 4; W32(r_esp, 0x5ba41cu); f_005ba570();
L_005ba41c:; BB(0x005ba41c);
    /* 005ba41c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ba423: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 005ba426: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5ba42bu); f_005be450();
    /* 005ba42b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ba42e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ba435: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ba436: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba439: ret 0x14 */ FN_RET(0x005ba1e0); r_esp += 24; return;
}

void f_005ba440(void) /* sub_5BA440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba440);
    /* 005ba440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba441: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba443: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba446: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ba449: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba44c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba450: jne 0x5ba45b */ if (!fZ) goto L_005ba45b;
L_005ba452:; BB(0x005ba452);
    /* 005ba452: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005ba459: jmp 0x5ba46d */ goto L_005ba46d;
L_005ba45b:; BB(0x005ba45b);
    /* 005ba45b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba45e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba461: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba464: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba467: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba46a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005ba46d:; BB(0x005ba46d);
    /* 005ba46d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba471: jne 0x5ba47c */ if (!fZ) goto L_005ba47c;
L_005ba473:; BB(0x005ba473);
    /* 005ba473: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ba47a: jmp 0x5ba4da */ goto L_005ba4da;
L_005ba47c:; BB(0x005ba47c);
    /* 005ba47c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba47f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ba482: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ba485: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ba48c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba490: je 0x5ba4a8 */ if (fZ) goto L_005ba4a8;
L_005ba492:; BB(0x005ba492);
    /* 005ba492: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba495: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ba498: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba49b: ja 0x5ba4a8 */ if ((!fC&&!fZ)) goto L_005ba4a8;
L_005ba49d:; BB(0x005ba49d);
    /* 005ba49d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba4a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba4a3: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba4a6: jbe 0x5ba4ae */ if ((fC||fZ)) goto L_005ba4ae;
L_005ba4a8:; BB(0x005ba4a8);
    /* 005ba4a8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba4aeu); call_ind(t); }
L_005ba4ae:; BB(0x005ba4ae);
    /* 005ba4ae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba4b1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ba4b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ba4b7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ba4ba: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba4be: je 0x5ba4c8 */ if (fZ) goto L_005ba4c8;
L_005ba4c0:; BB(0x005ba4c0);
    /* 005ba4c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ba4c3: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba4c6: je 0x5ba4ce */ if (fZ) goto L_005ba4ce;
L_005ba4c8:; BB(0x005ba4c8);
    /* 005ba4c8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba4ceu); call_ind(t); }
L_005ba4ce:; BB(0x005ba4ce);
    /* 005ba4ce: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ba4d1: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba4d4: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba4d7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005ba4da:; BB(0x005ba4da);
    /* 005ba4da: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ba4dd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ba4e0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ba4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4e6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ba4e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4ea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ba4ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba4ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba4f1: call 0x5bafc0 */ r_esp -= 4; W32(r_esp, 0x5ba4f6u); f_005bafc0();
    /* 005ba4f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba4f9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ba4fc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005ba4ff: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ba506: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba50a: je 0x5ba522 */ if (fZ) goto L_005ba522;
L_005ba50c:; BB(0x005ba50c);
    /* 005ba50c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba50f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ba512: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba515: ja 0x5ba522 */ if ((!fC&&!fZ)) goto L_005ba522;
L_005ba517:; BB(0x005ba517);
    /* 005ba517: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba51a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ba51d: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba520: jbe 0x5ba528 */ if ((fC||fZ)) goto L_005ba528;
L_005ba522:; BB(0x005ba522);
    /* 005ba522: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba528u); call_ind(t); }
L_005ba528:; BB(0x005ba528);
    /* 005ba528: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba52b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ba52e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ba531: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ba534: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ba537: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ba53a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ba53d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ba540: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba544: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005ba547: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x5ba54cu); f_005beeb0();
    /* 005ba54c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba54f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ba552: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba555: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ba557: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ba55a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba55d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba55f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba560: ret 0x10 */ FN_RET(0x005ba440); r_esp += 20; return;
}

void f_005ba570(void) /* sub_5BA570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba570);
    /* 005ba570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba571: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba573: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba576: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005ba579: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba57d: je 0x5ba587 */ if (fZ) goto L_005ba587;
L_005ba57f:; BB(0x005ba57f);
    /* 005ba57f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ba582: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba585: je 0x5ba58d */ if (fZ) goto L_005ba58d;
L_005ba587:; BB(0x005ba587);
    /* 005ba587: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba58du); call_ind(t); }
L_005ba58d:; BB(0x005ba58d);
    /* 005ba58d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ba590: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ba592: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba595: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ba598: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005ba59b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005ba59d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005ba59f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ba5a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ba5a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba5a7: je 0x5ba623 */ if (fZ) goto L_005ba623;
L_005ba5a9:; BB(0x005ba5a9);
    /* 005ba5a9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ba5ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5ad: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005ba5b0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba5b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5b4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005ba5b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba5b8: call 0x5bbb00 */ r_esp -= 4; W32(r_esp, 0x5ba5bdu); f_005bbb00();
    /* 005ba5bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba5c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ba5c3: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005ba5c6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba5c9: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005ba5cc: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ba5cf: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005ba5d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba5d5: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005ba5d8: mov cl, byte ptr [ebp - 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 005ba5db: mov byte ptr [ebp - 0x33], cl */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_ecx);
    /* 005ba5de: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ba5e1: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005ba5e4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005ba5e7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ba5ea: jmp 0x5ba5f5 */ goto L_005ba5f5;
L_005ba5ec:; BB(0x005ba5ec);
    /* 005ba5ec: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba5ef: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba5f2: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005ba5f5:; BB(0x005ba5f5);
    /* 005ba5f5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba5f8: cmp edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba5fb: je 0x5ba61a */ if (fZ) goto L_005ba61a;
L_005ba5fd:; BB(0x005ba5fd);
    /* 005ba5fd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba600: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5ba605u); f_005be450();
    /* 005ba605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba607: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ba60a: je 0x5ba618 */ if (fZ) goto L_005ba618;
L_005ba60c:; BB(0x005ba60c);
    /* 005ba60c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ba60f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba610: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ba615u); f_00686cae();
    /* 005ba615: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ba618:; BB(0x005ba618);
    /* 005ba618: jmp 0x5ba5ec */ goto L_005ba5ec;
L_005ba61a:; BB(0x005ba61a);
    /* 005ba61a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005ba61d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba620: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005ba623:; BB(0x005ba623);
    /* 005ba623: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba626: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ba629: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ba62b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ba62e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ba631: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba634: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba637: ret 0x14 */ FN_RET(0x005ba570); r_esp += 24; return;
}

void f_005ba640(void) /* sub_5BA640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ba640);
    /* 005ba640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ba641: mov ebp, esp */ r_ebp = r_esp;
    /* 005ba643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ba645: push 0x6a7f80 */ { u32 v = 0x6a7f80u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba64a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ba650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba652: sub esp, 0x264 */ {  u32 a = r_esp; u32 b = 0x264u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ba658: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba659: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba65a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ba65b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ba660: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba663: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ba666: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ba66c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ba66f: mov dword ptr [ebp - 0x24c], ecx */ W32((u32)(r_ebp+0xfffffdb4u), r_ecx);
    /* 005ba675: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005ba678: call 0x5bbcc0 */ r_esp -= 4; W32(r_esp, 0x5ba67du); f_005bbcc0();
    /* 005ba67d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ba684: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ba687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba688: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005ba68b: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5ba690u); f_005bc040();
    /* 005ba690: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ba697: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba69d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6a1: jne 0x5ba6af */ if (!fZ) goto L_005ba6af;
L_005ba6a3:; BB(0x005ba6a3);
    /* 005ba6a3: mov dword ptr [ebp - 0x250], 0 */ W32((u32)(r_ebp+0xfffffdb0u), 0x0u);
    /* 005ba6ad: jmp 0x5ba6ca */ goto L_005ba6ca;
L_005ba6af:; BB(0x005ba6af);
    /* 005ba6af: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba6b5: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba6bb: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005ba6be: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba6c1: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba6c4: mov dword ptr [ebp - 0x250], ecx */ W32((u32)(r_ebp+0xfffffdb0u), r_ecx);
L_005ba6ca:; BB(0x005ba6ca);
    /* 005ba6ca: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 005ba6d0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ba6d3: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba6d7: jne 0x5ba6de */ if (!fZ) goto L_005ba6de;
L_005ba6d9:; BB(0x005ba6d9);
    /* 005ba6d9: jmp 0x5baf9d */ goto L_005baf9d;
L_005ba6de:; BB(0x005ba6de);
    /* 005ba6de: mov dword ptr [ebp - 0x34], 0xfffffff */ W32((u32)(r_ebp+0xffffffccu), 0xfffffffu);
    /* 005ba6e5: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba6e9: jbe 0x5ba6f6 */ if ((fC||fZ)) goto L_005ba6f6;
L_005ba6eb:; BB(0x005ba6eb);
    /* 005ba6eb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ba6ee: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 005ba6f4: jmp 0x5ba700 */ goto L_005ba700;
L_005ba6f6:; BB(0x005ba6f6);
    /* 005ba6f6: mov dword ptr [ebp - 0x254], 1 */ W32((u32)(r_ebp+0xfffffdacu), 0x1u);
L_005ba700:; BB(0x005ba700);
    /* 005ba700: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba706: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba70a: jne 0x5ba718 */ if (!fZ) goto L_005ba718;
L_005ba70c:; BB(0x005ba70c);
    /* 005ba70c: mov dword ptr [ebp - 0x258], 0 */ W32((u32)(r_ebp+0xfffffda8u), 0x0u);
    /* 005ba716: jmp 0x5ba733 */ goto L_005ba733;
L_005ba718:; BB(0x005ba718);
    /* 005ba718: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba71e: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba724: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ba727: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba72a: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba72d: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
L_005ba733:; BB(0x005ba733);
    /* 005ba733: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 005ba739: sub edx, dword ptr [ebp - 0x258] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffda8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ba73f: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba742: jae 0x5ba74e */ if (!fC) goto L_005ba74e;
L_005ba744:; BB(0x005ba744);
    /* 005ba744: call 0x5bb750 */ r_esp -= 4; W32(r_esp, 0x5ba749u); f_005bb750();
    /* 005ba749: jmp 0x5baf9d */ goto L_005baf9d;
L_005ba74e:; BB(0x005ba74e);
    /* 005ba74e: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba754: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba758: jne 0x5ba766 */ if (!fZ) goto L_005ba766;
L_005ba75a:; BB(0x005ba75a);
    /* 005ba75a: mov dword ptr [ebp - 0x25c], 0 */ W32((u32)(r_ebp+0xfffffda4u), 0x0u);
    /* 005ba764: jmp 0x5ba781 */ goto L_005ba781;
L_005ba766:; BB(0x005ba766);
    /* 005ba766: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba76c: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba772: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba775: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba778: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba77b: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
L_005ba781:; BB(0x005ba781);
    /* 005ba781: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 005ba787: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba78a: cmp dword ptr [ebp - 0x24], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba78d: jae 0x5bac06 */ if (!fC) goto L_005bac06;
L_005ba793:; BB(0x005ba793);
    /* 005ba793: mov dword ptr [ebp - 0x7c], 0xfffffff */ W32((u32)(r_ebp+0xffffff84u), 0xfffffffu);
    /* 005ba79a: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba79e: jbe 0x5ba7ab */ if ((fC||fZ)) goto L_005ba7ab;
L_005ba7a0:; BB(0x005ba7a0);
    /* 005ba7a0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ba7a3: mov dword ptr [ebp - 0x260], edx */ W32((u32)(r_ebp+0xfffffda0u), r_edx);
    /* 005ba7a9: jmp 0x5ba7b5 */ goto L_005ba7b5;
L_005ba7ab:; BB(0x005ba7ab);
    /* 005ba7ab: mov dword ptr [ebp - 0x260], 1 */ W32((u32)(r_ebp+0xfffffda0u), 0x1u);
L_005ba7b5:; BB(0x005ba7b5);
    /* 005ba7b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba7b8: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005ba7ba: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 005ba7c0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba7c2: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba7c5: jae 0x5ba7d3 */ if (!fC) goto L_005ba7d3;
L_005ba7c7:; BB(0x005ba7c7);
    /* 005ba7c7: mov dword ptr [ebp - 0x264], 0 */ W32((u32)(r_ebp+0xfffffd9cu), 0x0u);
    /* 005ba7d1: jmp 0x5ba7e1 */ goto L_005ba7e1;
L_005ba7d3:; BB(0x005ba7d3);
    /* 005ba7d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba7d6: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005ba7d8: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba7db: mov dword ptr [ebp - 0x264], edx */ W32((u32)(r_ebp+0xfffffd9cu), r_edx);
L_005ba7e1:; BB(0x005ba7e1);
    /* 005ba7e1: mov eax, dword ptr [ebp - 0x264] */ r_eax = R32((u32)(r_ebp+0xfffffd9cu));
    /* 005ba7e7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ba7ea: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba7f0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba7f4: jne 0x5ba802 */ if (!fZ) goto L_005ba802;
L_005ba7f6:; BB(0x005ba7f6);
    /* 005ba7f6: mov dword ptr [ebp - 0x268], 0 */ W32((u32)(r_ebp+0xfffffd98u), 0x0u);
    /* 005ba800: jmp 0x5ba81d */ goto L_005ba81d;
L_005ba802:; BB(0x005ba802);
    /* 005ba802: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba808: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba80e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005ba811: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba814: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005ba817: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
L_005ba81d:; BB(0x005ba81d);
    /* 005ba81d: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005ba823: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba826: cmp dword ptr [ebp - 0x24], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ba829: jae 0x5ba86a */ if (!fC) goto L_005ba86a;
L_005ba82b:; BB(0x005ba82b);
    /* 005ba82b: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba831: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ba835: jne 0x5ba843 */ if (!fZ) goto L_005ba843;
L_005ba837:; BB(0x005ba837);
    /* 005ba837: mov dword ptr [ebp - 0x26c], 0 */ W32((u32)(r_ebp+0xfffffd94u), 0x0u);
    /* 005ba841: jmp 0x5ba85e */ goto L_005ba85e;
L_005ba843:; BB(0x005ba843);
    /* 005ba843: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba849: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba84f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005ba852: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ba855: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ba858: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
L_005ba85e:; BB(0x005ba85e);
    /* 005ba85e: mov ecx, dword ptr [ebp - 0x26c] */ r_ecx = R32((u32)(r_ebp+0xfffffd94u));
    /* 005ba864: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ba867: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_005ba86a:; BB(0x005ba86a);
    /* 005ba86a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ba86c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ba86f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba870: call 0x5bbbd0 */ r_esp -= 4; W32(r_esp, 0x5ba875u); f_005bbbd0();
    /* 005ba875: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba878: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ba87b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ba87e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ba881: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ba885: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba88b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ba88e: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005ba894: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ba897: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005ba89d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ba8a0: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005ba8a6: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005ba8ac: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 005ba8b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba8b4: mov byte ptr [ebp - 0x7d], al */ W8((u32)(r_ebp+0xffffff83u), (u8)r_eax);
    /* 005ba8b7: mov cl, byte ptr [ebp - 0x7f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff81u))) & 0xffu);
    /* 005ba8ba: mov byte ptr [ebp - 0x7e], cl */ W8((u32)(r_ebp+0xffffff82u), (u8)r_ecx);
    /* 005ba8bd: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005ba8c3: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005ba8c9: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005ba8cf: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005ba8d5: mov cl, byte ptr [ebp - 0x7d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff83u))) & 0xffu);
    /* 005ba8d8: mov byte ptr [ebp - 0x91], cl */ W8((u32)(r_ebp+0xffffff6fu), (u8)r_ecx);
    /* 005ba8de: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005ba8e4: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005ba8ea: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba8f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8f1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005ba8f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8f8: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005ba8fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba8ff: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005ba905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba906: call 0x5bc5d0 */ r_esp -= 4; W32(r_esp, 0x5ba90bu); f_005bc5d0();
    /* 005ba90b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba90e: mov dword ptr [ebp - 0x270], eax */ W32((u32)(r_ebp+0xfffffd90u), r_eax);
    /* 005ba914: mov ecx, dword ptr [ebp - 0x270] */ r_ecx = R32((u32)(r_ebp+0xfffffd90u));
    /* 005ba91a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ba91d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba920: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005ba926: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ba928: mov byte ptr [ebp - 0xa5], al */ W8((u32)(r_ebp+0xffffff5bu), (u8)r_eax);
    /* 005ba92e: mov cl, byte ptr [ebp - 0xa7] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff59u))) & 0xffu);
    /* 005ba934: mov byte ptr [ebp - 0xa6], cl */ W8((u32)(r_ebp+0xffffff5au), (u8)r_ecx);
    /* 005ba93a: mov dl, byte ptr [ebp - 0xa5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5bu))) & 0xffu);
    /* 005ba940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba941: mov al, byte ptr [ebp - 0xa6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5au))) & 0xffu);
    /* 005ba947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba948: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba94e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba94f: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005ba952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba953: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ba956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba957: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005ba95d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba95e: call 0x5bbf70 */ r_esp -= 4; W32(r_esp, 0x5ba963u); f_005bbf70();
    /* 005ba963: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ba966: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ba969: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005ba96c: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ba96f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005ba972: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba978: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ba97b: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 005ba981: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ba984: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 005ba98a: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 005ba990: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005ba996: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ba999: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 005ba99f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ba9a1: mov byte ptr [ebp - 0xad], dl */ W8((u32)(r_ebp+0xffffff53u), (u8)r_edx);
    /* 005ba9a7: mov al, byte ptr [ebp - 0xaf] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff51u))) & 0xffu);
    /* 005ba9ad: mov byte ptr [ebp - 0xae], al */ W8((u32)(r_ebp+0xffffff52u), (u8)r_eax);
    /* 005ba9b3: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ba9b9: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005ba9bf: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 005ba9c5: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 005ba9cb: mov al, byte ptr [ebp - 0xad] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff53u))) & 0xffu);
    /* 005ba9d1: mov byte ptr [ebp - 0xc1], al */ W8((u32)(r_ebp+0xffffff3fu), (u8)r_eax);
    /* 005ba9d7: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 005ba9dd: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005ba9e3: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005ba9e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9ea: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005ba9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005ba9f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9f8: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ba9fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ba9ff: call 0x5bc5d0 */ r_esp -= 4; W32(r_esp, 0x5baa04u); f_005bc5d0();
    /* 005baa04: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baa07: jmp 0x5baaa6 */ goto L_005baaa6;
L_005baaa6:; BB(0x005baaa6);
    /* 005baaa6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005baaad: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baab3: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baab7: jne 0x5baac5 */ if (!fZ) goto L_005baac5;
L_005baab9:; BB(0x005baab9);
    /* 005baab9: mov dword ptr [ebp - 0x274], 0 */ W32((u32)(r_ebp+0xfffffd8cu), 0x0u);
    /* 005baac3: jmp 0x5baae0 */ goto L_005baae0;
L_005baac5:; BB(0x005baac5);
    /* 005baac5: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baacb: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baad1: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005baad4: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005baad7: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005baada: mov dword ptr [ebp - 0x274], ecx */ W32((u32)(r_ebp+0xfffffd8cu), r_ecx);
L_005baae0:; BB(0x005baae0);
    /* 005baae0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005baae3: add edx, dword ptr [ebp - 0x274] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005baae9: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 005baaec: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baaf2: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baaf6: je 0x5babd1 */ if (fZ) goto L_005babd1;
L_005baafc:; BB(0x005baafc);
    /* 005baafc: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bab02: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bab05: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 005bab0b: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bab11: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bab14: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005bab1a: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005bab20: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 005bab26: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005bab2c: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005bab32: mov cl, byte ptr [ebp - 0xea] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff16u))) & 0xffu);
    /* 005bab38: mov byte ptr [ebp - 0xe9], cl */ W8((u32)(r_ebp+0xffffff17u), (u8)r_ecx);
    /* 005bab3e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005bab44: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 005bab4a: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005bab50: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005bab56: jmp 0x5bab67 */ goto L_005bab67;
L_005bab58:; BB(0x005bab58);
    /* 005bab58: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bab5e: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bab61: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
L_005bab67:; BB(0x005bab67);
    /* 005bab67: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bab6d: cmp edx, dword ptr [ebp - 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bab73: je 0x5bab98 */ if (fZ) goto L_005bab98;
L_005bab75:; BB(0x005bab75);
    /* 005bab75: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bab7b: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5bab80u); f_005be450();
    /* 005bab80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bab82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005bab85: je 0x5bab96 */ if (fZ) goto L_005bab96;
L_005bab87:; BB(0x005bab87);
    /* 005bab87: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bab8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bab8e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bab93u); f_00686cae();
    /* 005bab93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bab96:; BB(0x005bab96);
    /* 005bab96: jmp 0x5bab58 */ goto L_005bab58;
L_005bab98:; BB(0x005bab98);
    /* 005bab98: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bab9e: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baba4: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005baba7: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005babaa: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005babad: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 005babb3: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005babb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005babbc: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 005babc2: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005babc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005babc9: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5babceu); f_00686cae();
    /* 005babce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005babd1:; BB(0x005babd1);
    /* 005babd1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005babd4: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005babd7: add edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005babda: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005babe0: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005babe3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005babe6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005babe9: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005babec: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005babf2: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005babf5: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005babfb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005babfe: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005bac01: jmp 0x5baf9d */ goto L_005baf9d;
L_005bac06:; BB(0x005bac06);
    /* 005bac06: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bac0c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bac0f: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bac12: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bac15: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bac18: jae 0x5bae72 */ if (!fC) goto L_005bae72;
L_005bac1e:; BB(0x005bac1e);
    /* 005bac1e: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bac24: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bac27: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 005bac2d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bac30: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bac33: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bac36: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 005bac3c: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005bac42: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 005bac48: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bac4b: mov dword ptr [ebp - 0x140], edx */ W32((u32)(r_ebp+0xfffffec0u), r_edx);
    /* 005bac51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bac53: mov byte ptr [ebp - 0x125], al */ W8((u32)(r_ebp+0xfffffedbu), (u8)r_eax);
    /* 005bac59: mov cl, byte ptr [ebp - 0x127] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffed9u))) & 0xffu);
    /* 005bac5f: mov byte ptr [ebp - 0x126], cl */ W8((u32)(r_ebp+0xfffffedau), (u8)r_ecx);
    /* 005bac65: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005bac6b: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 005bac71: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005bac77: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 005bac7d: mov cl, byte ptr [ebp - 0x125] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffedbu))) & 0xffu);
    /* 005bac83: mov byte ptr [ebp - 0x139], cl */ W8((u32)(r_ebp+0xfffffec7u), (u8)r_ecx);
    /* 005bac89: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bac8f: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 005bac95: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bac9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bac9c: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005baca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baca3: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005baca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bacaa: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 005bacb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bacb1: call 0x5bc5d0 */ r_esp -= 4; W32(r_esp, 0x5bacb6u); f_005bc5d0();
    /* 005bacb6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bacb9: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005bacbd: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bacc3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bacc6: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bacc9: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005baccc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005baccf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bacd1: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 005bacd7: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bacdd: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bace0: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
    /* 005bace6: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 005bacec: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 005bacf2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bacf4: mov byte ptr [ebp - 0x14d], cl */ W8((u32)(r_ebp+0xfffffeb3u), (u8)r_ecx);
    /* 005bacfa: mov dl, byte ptr [ebp - 0x14f] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeb1u))) & 0xffu);
    /* 005bad00: mov byte ptr [ebp - 0x14e], dl */ W8((u32)(r_ebp+0xfffffeb2u), (u8)r_edx);
    /* 005bad06: mov al, byte ptr [ebp - 0x14d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeb3u))) & 0xffu);
    /* 005bad0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bad0d: mov cl, byte ptr [ebp - 0x14e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeb2u))) & 0xffu);
    /* 005bad13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad14: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bad1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad1b: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005bad1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bad1f: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 005bad25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad26: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005bad2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bad2d: call 0x5bbf70 */ r_esp -= 4; W32(r_esp, 0x5bad32u); f_005bbf70();
    /* 005bad32: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bad35: jmp 0x5bade6 */ goto L_005bade6;
L_005bade6:; BB(0x005bade6);
    /* 005bade6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005baded: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005badf0: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005badf3: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005badf9: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005badfc: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bae02: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005bae05: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bae08: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bae0b: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bae11: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bae14: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bae16: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005bae1c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bae1f: mov dword ptr [ebp - 0x1a0], edx */ W32((u32)(r_ebp+0xfffffe60u), r_edx);
    /* 005bae25: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005bae2b: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 005bae31: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005bae37: mov dword ptr [ebp - 0x19c], ecx */ W32((u32)(r_ebp+0xfffffe64u), r_ecx);
    /* 005bae3d: jmp 0x5bae4e */ goto L_005bae4e;
L_005bae3f:; BB(0x005bae3f);
    /* 005bae3f: mov edx, dword ptr [ebp - 0x19c] */ r_edx = R32((u32)(r_ebp+0xfffffe64u));
    /* 005bae45: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bae48: mov dword ptr [ebp - 0x19c], edx */ W32((u32)(r_ebp+0xfffffe64u), r_edx);
L_005bae4e:; BB(0x005bae4e);
    /* 005bae4e: mov eax, dword ptr [ebp - 0x19c] */ r_eax = R32((u32)(r_ebp+0xfffffe64u));
    /* 005bae54: cmp eax, dword ptr [ebp - 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bae5a: je 0x5bae6d */ if (fZ) goto L_005bae6d;
L_005bae5c:; BB(0x005bae5c);
    /* 005bae5c: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005bae5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae60: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 005bae66: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5bae6bu); f_005bc040();
    /* 005bae6b: jmp 0x5bae3f */ goto L_005bae3f;
L_005bae6d:; BB(0x005bae6d);
    /* 005bae6d: jmp 0x5baf9d */ goto L_005baf9d;
L_005bae72:; BB(0x005bae72);
    /* 005bae72: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bae78: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bae7b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005bae7e: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bae84: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bae87: mov dword ptr [ebp - 0x1dc], edx */ W32((u32)(r_ebp+0xfffffe24u), r_edx);
    /* 005bae8d: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005bae93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bae94: mov ecx, dword ptr [ebp - 0x1dc] */ r_ecx = R32((u32)(r_ebp+0xfffffe24u));
    /* 005bae9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae9b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bae9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bae9f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005baea2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005baea5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005baea8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005baeaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baeab: call 0x5bbe20 */ r_esp -= 4; W32(r_esp, 0x5baeb0u); f_005bbe20();
    /* 005baeb0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baeb3: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005baeb9: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005baebc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005baebf: mov dword ptr [ebp - 0x214], eax */ W32((u32)(r_ebp+0xfffffdecu), r_eax);
    /* 005baec5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005baec8: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005baecb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005baece: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005baed0: mov dword ptr [ebp - 0x210], edx */ W32((u32)(r_ebp+0xfffffdf0u), r_edx);
    /* 005baed6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005baed9: mov dword ptr [ebp - 0x20c], eax */ W32((u32)(r_ebp+0xfffffdf4u), r_eax);
    /* 005baedf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005baee1: mov byte ptr [ebp - 0x1dd], cl */ W8((u32)(r_ebp+0xfffffe23u), (u8)r_ecx);
    /* 005baee7: mov dl, byte ptr [ebp - 0x1e0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe20u))) & 0xffu);
    /* 005baeed: mov byte ptr [ebp - 0x1de], dl */ W8((u32)(r_ebp+0xfffffe22u), (u8)r_edx);
    /* 005baef3: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 005baef9: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
    /* 005baeff: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005baf05: mov dword ptr [ebp - 0x1f0], ecx */ W32((u32)(r_ebp+0xfffffe10u), r_ecx);
    /* 005baf0b: mov dl, byte ptr [ebp - 0x1dd] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe23u))) & 0xffu);
    /* 005baf11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf12: mov al, byte ptr [ebp - 0x1de] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe22u))) & 0xffu);
    /* 005baf18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf19: mov cl, byte ptr [ebp - 0x1df] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe21u))) & 0xffu);
    /* 005baf1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf20: mov edx, dword ptr [ebp - 0x214] */ r_edx = R32((u32)(r_ebp+0xfffffdecu));
    /* 005baf26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf27: mov eax, dword ptr [ebp - 0x1e8] */ r_eax = R32((u32)(r_ebp+0xfffffe18u));
    /* 005baf2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005baf2e: mov ecx, dword ptr [ebp - 0x1f0] */ r_ecx = R32((u32)(r_ebp+0xfffffe10u));
    /* 005baf34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf35: call 0x5bbea0 */ r_esp -= 4; W32(r_esp, 0x5baf3au); f_005bbea0();
    /* 005baf3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005baf3d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005baf40: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005baf43: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005baf46: mov dword ptr [ebp - 0x22c], edx */ W32((u32)(r_ebp+0xfffffdd4u), r_edx);
    /* 005baf4c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005baf4f: mov dword ptr [ebp - 0x228], eax */ W32((u32)(r_ebp+0xfffffdd8u), r_eax);
    /* 005baf55: mov ecx, dword ptr [ebp - 0x22c] */ r_ecx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 005baf5b: mov dword ptr [ebp - 0x21c], ecx */ W32((u32)(r_ebp+0xfffffde4u), r_ecx);
    /* 005baf61: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 005baf67: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
    /* 005baf6d: jmp 0x5baf7e */ goto L_005baf7e;
L_005baf6f:; BB(0x005baf6f);
    /* 005baf6f: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005baf75: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005baf78: mov dword ptr [ebp - 0x224], eax */ W32((u32)(r_ebp+0xfffffddcu), r_eax);
L_005baf7e:; BB(0x005baf7e);
    /* 005baf7e: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 005baf84: cmp ecx, dword ptr [ebp - 0x21c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffde4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005baf8a: je 0x5baf9d */ if (fZ) goto L_005baf9d;
L_005baf8c:; BB(0x005baf8c);
    /* 005baf8c: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005baf8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005baf90: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 005baf96: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5baf9bu); f_005bc040();
    /* 005baf9b: jmp 0x5baf6f */ goto L_005baf6f;
L_005baf9d:; BB(0x005baf9d);
    /* 005baf9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bafa4: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005bafa7: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5bafacu); f_005be450();
    /* 005bafac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bafaf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bafb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bafb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bafb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bafb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bafba: mov esp, ebp */ r_esp = r_ebp;
    /* 005bafbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bafbd: ret 0x10 */ FN_RET(0x005ba640); r_esp += 20; return;
}

void f_005bafc0(void) /* sub_5BAFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bafc0);
    /* 005bafc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bafc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bafc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bafc5: push 0x6a7fa0 */ { u32 v = 0x6a7fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bafca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bafd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bafd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bafd2: sub esp, 0x220 */ {  u32 a = r_esp; u32 b = 0x220u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bafd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bafd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bafda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bafdb: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bafe0: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bafe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bafe3: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bafe6: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bafec: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bafef: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
    /* 005baff5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005baff8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005baffa: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005baffd: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb003: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb007: jne 0x5bb015 */ if (!fZ) goto L_005bb015;
L_005bb009:; BB(0x005bb009);
    /* 005bb009: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 005bb013: jmp 0x5bb030 */ goto L_005bb030;
L_005bb015:; BB(0x005bb015);
    /* 005bb015: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb01b: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb021: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005bb024: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bb027: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bb02a: mov dword ptr [ebp - 0x20c], edx */ W32((u32)(r_ebp+0xfffffdf4u), r_edx);
L_005bb030:; BB(0x005bb030);
    /* 005bb030: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005bb036: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bb039: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb03d: jne 0x5bb044 */ if (!fZ) goto L_005bb044;
L_005bb03f:; BB(0x005bb03f);
    /* 005bb03f: jmp 0x5bb731 */ goto L_005bb731;
L_005bb044:; BB(0x005bb044);
    /* 005bb044: mov dword ptr [ebp - 0x28], 0x3fffffff */ W32((u32)(r_ebp+0xffffffd8u), 0x3fffffffu);
    /* 005bb04b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb04f: jbe 0x5bb05c */ if ((fC||fZ)) goto L_005bb05c;
L_005bb051:; BB(0x005bb051);
    /* 005bb051: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bb054: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 005bb05a: jmp 0x5bb066 */ goto L_005bb066;
L_005bb05c:; BB(0x005bb05c);
    /* 005bb05c: mov dword ptr [ebp - 0x210], 1 */ W32((u32)(r_ebp+0xfffffdf0u), 0x1u);
L_005bb066:; BB(0x005bb066);
    /* 005bb066: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb06c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb070: jne 0x5bb07e */ if (!fZ) goto L_005bb07e;
L_005bb072:; BB(0x005bb072);
    /* 005bb072: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 005bb07c: jmp 0x5bb099 */ goto L_005bb099;
L_005bb07e:; BB(0x005bb07e);
    /* 005bb07e: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb084: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb08a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bb08d: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bb090: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bb093: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
L_005bb099:; BB(0x005bb099);
    /* 005bb099: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 005bb09f: sub eax, dword ptr [ebp - 0x214] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb0a5: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bb0a8: jae 0x5bb0b4 */ if (!fC) goto L_005bb0b4;
L_005bb0aa:; BB(0x005bb0aa);
    /* 005bb0aa: call 0x5bb8f0 */ r_esp -= 4; W32(r_esp, 0x5bb0afu); f_005bb8f0();
    /* 005bb0af: jmp 0x5bb731 */ goto L_005bb731;
L_005bb0b4:; BB(0x005bb0b4);
    /* 005bb0b4: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb0ba: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb0be: jne 0x5bb0cc */ if (!fZ) goto L_005bb0cc;
L_005bb0c0:; BB(0x005bb0c0);
    /* 005bb0c0: mov dword ptr [ebp - 0x218], 0 */ W32((u32)(r_ebp+0xfffffde8u), 0x0u);
    /* 005bb0ca: jmp 0x5bb0e7 */ goto L_005bb0e7;
L_005bb0cc:; BB(0x005bb0cc);
    /* 005bb0cc: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb0d2: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb0d8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bb0db: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb0de: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bb0e1: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
L_005bb0e7:; BB(0x005bb0e7);
    /* 005bb0e7: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 005bb0ed: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb0f0: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bb0f3: jae 0x5bb4ab */ if (!fC) goto L_005bb4ab;
L_005bb0f9:; BB(0x005bb0f9);
    /* 005bb0f9: mov dword ptr [ebp - 0x70], 0x3fffffff */ W32((u32)(r_ebp+0xffffff90u), 0x3fffffffu);
    /* 005bb100: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bb104: jbe 0x5bb111 */ if ((fC||fZ)) goto L_005bb111;
L_005bb106:; BB(0x005bb106);
    /* 005bb106: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005bb109: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 005bb10f: jmp 0x5bb11b */ goto L_005bb11b;
L_005bb111:; BB(0x005bb111);
    /* 005bb111: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
L_005bb11b:; BB(0x005bb11b);
    /* 005bb11b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb11e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005bb120: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 005bb126: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bb128: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bb12b: jae 0x5bb139 */ if (!fC) goto L_005bb139;
L_005bb12d:; BB(0x005bb12d);
    /* 005bb12d: mov dword ptr [ebp - 0x220], 0 */ W32((u32)(r_ebp+0xfffffde0u), 0x0u);
    /* 005bb137: jmp 0x5bb147 */ goto L_005bb147;
L_005bb139:; BB(0x005bb139);
    /* 005bb139: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb13c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bb13e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb141: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
L_005bb147:; BB(0x005bb147);
    /* 005bb147: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005bb14d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bb150: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb156: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb15a: jne 0x5bb168 */ if (!fZ) goto L_005bb168;
L_005bb15c:; BB(0x005bb15c);
    /* 005bb15c: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 005bb166: jmp 0x5bb183 */ goto L_005bb183;
L_005bb168:; BB(0x005bb168);
    /* 005bb168: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb16e: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb174: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bb177: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bb17a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bb17d: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
L_005bb183:; BB(0x005bb183);
    /* 005bb183: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005bb189: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb18c: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bb18f: jae 0x5bb1d0 */ if (!fC) goto L_005bb1d0;
L_005bb191:; BB(0x005bb191);
    /* 005bb191: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb197: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb19b: jne 0x5bb1a9 */ if (!fZ) goto L_005bb1a9;
L_005bb19d:; BB(0x005bb19d);
    /* 005bb19d: mov dword ptr [ebp - 0x228], 0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x0u);
    /* 005bb1a7: jmp 0x5bb1c4 */ goto L_005bb1c4;
L_005bb1a9:; BB(0x005bb1a9);
    /* 005bb1a9: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb1af: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb1b5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bb1b8: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb1bb: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bb1be: mov dword ptr [ebp - 0x228], ecx */ W32((u32)(r_ebp+0xfffffdd8u), r_ecx);
L_005bb1c4:; BB(0x005bb1c4);
    /* 005bb1c4: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 005bb1ca: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb1cd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005bb1d0:; BB(0x005bb1d0);
    /* 005bb1d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb1d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb1d6: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5bb1dbu); f_005c6310();
    /* 005bb1db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb1de: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bb1e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb1e4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bb1e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bb1ee: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb1f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bb1f7: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005bb1fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb200: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005bb206: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb209: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005bb20f: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005bb215: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005bb21b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb21d: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 005bb220: mov dl, byte ptr [ebp - 0x73] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8du))) & 0xffu);
    /* 005bb223: mov byte ptr [ebp - 0x72], dl */ W8((u32)(r_ebp+0xffffff8eu), (u8)r_edx);
    /* 005bb226: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005bb22c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005bb22f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005bb235: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005bb238: mov dl, byte ptr [ebp - 0x71] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8fu))) & 0xffu);
    /* 005bb23b: mov byte ptr [ebp - 0x85], dl */ W8((u32)(r_ebp+0xffffff7bu), (u8)r_edx);
    /* 005bb241: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bb247: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005bb24d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb254: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005bb25a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb25b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bb25e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb25f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005bb262: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb263: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bb268u); f_005bf010();
    /* 005bb268: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb26b: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 005bb271: mov edx, dword ptr [ebp - 0x22c] */ r_edx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 005bb277: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005bb27a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb27d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005bb283: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb285: mov byte ptr [ebp - 0x99], cl */ W8((u32)(r_ebp+0xffffff67u), (u8)r_ecx);
    /* 005bb28b: mov dl, byte ptr [ebp - 0x9b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff65u))) & 0xffu);
    /* 005bb291: mov byte ptr [ebp - 0x9a], dl */ W8((u32)(r_ebp+0xffffff66u), (u8)r_edx);
    /* 005bb297: mov al, byte ptr [ebp - 0x99] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff67u))) & 0xffu);
    /* 005bb29d: mov byte ptr [ebp - 0xa1], al */ W8((u32)(r_ebp+0xffffff5fu), (u8)r_eax);
    /* 005bb2a3: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005bb2a9: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005bb2af: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005bb2b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2b3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bb2b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2b7: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bb2bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb2be: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5bb2c3u); f_005c0910();
    /* 005bb2c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb2c6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bb2c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb2cc: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005bb2cf: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bb2d2: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb2d8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb2db: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005bb2e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bb2e4: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005bb2ea: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005bb2f0: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005bb2f6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bb2f9: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005bb2ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb301: mov byte ptr [ebp - 0xa9], cl */ W8((u32)(r_ebp+0xffffff57u), (u8)r_ecx);
    /* 005bb307: mov dl, byte ptr [ebp - 0xab] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff55u))) & 0xffu);
    /* 005bb30d: mov byte ptr [ebp - 0xaa], dl */ W8((u32)(r_ebp+0xffffff56u), (u8)r_edx);
    /* 005bb313: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005bb319: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005bb31f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005bb325: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005bb32b: mov dl, byte ptr [ebp - 0xa9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff57u))) & 0xffu);
    /* 005bb331: mov byte ptr [ebp - 0xbd], dl */ W8((u32)(r_ebp+0xffffff43u), (u8)r_edx);
    /* 005bb337: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005bb33d: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005bb343: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb34a: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bb350: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb351: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bb357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb358: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005bb35e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb35f: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bb364u); f_005bf010();
    /* 005bb364: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb367: jmp 0x5bb3a9 */ goto L_005bb3a9;
L_005bb3a9:; BB(0x005bb3a9);
    /* 005bb3a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb3b0: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb3b6: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3ba: jne 0x5bb3c8 */ if (!fZ) goto L_005bb3c8;
L_005bb3bc:; BB(0x005bb3bc);
    /* 005bb3bc: mov dword ptr [ebp - 0x230], 0 */ W32((u32)(r_ebp+0xfffffdd0u), 0x0u);
    /* 005bb3c6: jmp 0x5bb3e3 */ goto L_005bb3e3;
L_005bb3c8:; BB(0x005bb3c8);
    /* 005bb3c8: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb3ce: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb3d4: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bb3d7: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb3da: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bb3dd: mov dword ptr [ebp - 0x230], eax */ W32((u32)(r_ebp+0xfffffdd0u), r_eax);
L_005bb3e3:; BB(0x005bb3e3);
    /* 005bb3e3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bb3e6: add ecx, dword ptr [ebp - 0x230] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb3ec: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005bb3ef: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb3f5: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb3f9: je 0x5bb476 */ if (fZ) goto L_005bb476;
L_005bb3fb:; BB(0x005bb3fb);
    /* 005bb3fb: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb401: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bb404: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005bb40a: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb410: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bb413: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005bb419: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bb41f: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005bb425: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005bb42b: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005bb431: mov al, byte ptr [ebp - 0xde] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff22u))) & 0xffu);
    /* 005bb437: mov byte ptr [ebp - 0xdd], al */ W8((u32)(r_ebp+0xffffff23u), (u8)r_eax);
    /* 005bb43d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb443: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb449: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005bb44c: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb44f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bb452: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005bb458: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb45e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bb461: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005bb467: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005bb46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb46e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bb473u); f_00686cae();
    /* 005bb473: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bb476:; BB(0x005bb476);
    /* 005bb476: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bb479: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb47c: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005bb47f: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb485: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005bb488: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bb48b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb48e: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005bb491: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb497: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005bb49a: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb4a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bb4a3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005bb4a6: jmp 0x5bb731 */ goto L_005bb731;
L_005bb4ab:; BB(0x005bb4ab);
    /* 005bb4ab: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb4b1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb4b4: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb4b7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bb4ba: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bb4bd: jae 0x5bb607 */ if (!fC) goto L_005bb607;
L_005bb4c3:; BB(0x005bb4c3);
    /* 005bb4c3: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb4c9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb4cc: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005bb4d2: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4d9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bb4dc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb4df: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005bb4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4e3: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005bb4e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4ea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb4ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb4ee: call 0x5befc0 */ r_esp -= 4; W32(r_esp, 0x5bb4f3u); f_005befc0();
    /* 005bb4f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb4f6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bb4fd: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005bb500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb501: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb507: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb50a: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bb50d: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bb510: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bb513: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bb515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb516: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb51c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bb51f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb520: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb526: call 0x5c5fd0 */ r_esp -= 4; W32(r_esp, 0x5bb52bu); f_005c5fd0();
    /* 005bb52b: jmp 0x5bb57f */ goto L_005bb57f;
L_005bb57f:; BB(0x005bb57f);
    /* 005bb57f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bb586: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb58c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bb58f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bb592: lea eax, [ecx + edx*4] */ r_eax = (u32)(r_ecx+r_edx*4);
    /* 005bb595: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb59b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bb59e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bb5a1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bb5a4: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb5aa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bb5ad: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb5af: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 005bb5b5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb5b8: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 005bb5be: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 005bb5c4: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 005bb5ca: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005bb5d0: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 005bb5d6: jmp 0x5bb5e7 */ goto L_005bb5e7;
L_005bb5d8:; BB(0x005bb5d8);
    /* 005bb5d8: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005bb5de: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bb5e1: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
L_005bb5e7:; BB(0x005bb5e7);
    /* 005bb5e7: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 005bb5ed: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb5f3: je 0x5bb602 */ if (fZ) goto L_005bb602;
L_005bb5f5:; BB(0x005bb5f5);
    /* 005bb5f5: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005bb5fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bb5fe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bb600: jmp 0x5bb5d8 */ goto L_005bb5d8;
L_005bb602:; BB(0x005bb602);
    /* 005bb602: jmp 0x5bb731 */ goto L_005bb731;
L_005bb607:; BB(0x005bb607);
    /* 005bb607: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb60d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bb610: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005bb613: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb619: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bb61c: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 005bb622: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005bb628: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 005bb62e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bb631: mov dword ptr [ebp - 0x1b0], edx */ W32((u32)(r_ebp+0xfffffe50u), r_edx);
    /* 005bb637: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bb63a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bb63d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bb640: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb642: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005bb648: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bb64a: mov byte ptr [ebp - 0x171], dl */ W8((u32)(r_ebp+0xfffffe8fu), (u8)r_edx);
    /* 005bb650: mov al, byte ptr [ebp - 0x173] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8du))) & 0xffu);
    /* 005bb656: mov byte ptr [ebp - 0x172], al */ W8((u32)(r_ebp+0xfffffe8eu), (u8)r_eax);
    /* 005bb65c: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 005bb662: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 005bb668: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005bb66e: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 005bb674: mov al, byte ptr [ebp - 0x171] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8fu))) & 0xffu);
    /* 005bb67a: mov byte ptr [ebp - 0x1a5], al */ W8((u32)(r_ebp+0xfffffe5bu), (u8)r_eax);
    /* 005bb680: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005bb686: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005bb68c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb693: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005bb699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bb69a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 005bb6a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6a1: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 005bb6a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6a8: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bb6adu); f_005bf010();
    /* 005bb6ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb6b0: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bb6b6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bb6b9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bb6bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6bd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bb6c0: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bb6c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bb6c6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bb6c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6c9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bb6cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bb6cd: call 0x5c61d0 */ r_esp -= 4; W32(r_esp, 0x5bb6d2u); f_005c61d0();
    /* 005bb6d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bb6d5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bb6d8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bb6db: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 005bb6de: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
    /* 005bb6e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bb6e7: mov dword ptr [ebp - 0x200], eax */ W32((u32)(r_ebp+0xfffffe00u), r_eax);
    /* 005bb6ed: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005bb6f3: mov dword ptr [ebp - 0x1f4], ecx */ W32((u32)(r_ebp+0xfffffe0cu), r_ecx);
    /* 005bb6f9: mov edx, dword ptr [ebp - 0x200] */ r_edx = R32((u32)(r_ebp+0xfffffe00u));
    /* 005bb6ff: mov dword ptr [ebp - 0x1fc], edx */ W32((u32)(r_ebp+0xfffffe04u), r_edx);
    /* 005bb705: jmp 0x5bb716 */ goto L_005bb716;
L_005bb707:; BB(0x005bb707);
    /* 005bb707: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 005bb70d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bb710: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
L_005bb716:; BB(0x005bb716);
    /* 005bb716: mov ecx, dword ptr [ebp - 0x1fc] */ r_ecx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005bb71c: cmp ecx, dword ptr [ebp - 0x1f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffe0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bb722: je 0x5bb731 */ if (fZ) goto L_005bb731;
L_005bb724:; BB(0x005bb724);
    /* 005bb724: mov edx, dword ptr [ebp - 0x1fc] */ r_edx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005bb72a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bb72d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005bb72f: jmp 0x5bb707 */ goto L_005bb707;
L_005bb731:; BB(0x005bb731);
    /* 005bb731: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bb734: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bb73b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bb73c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bb73d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bb73e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bb73f: mov esp, ebp */ r_esp = r_ebp;
    /* 005bb741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bb742: ret 0x10 */ FN_RET(0x005bafc0); r_esp += 20; return;
}

