#include "protos.h"

void f_0040e090(void) /* sub_40E090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e090);
    /* 0040e090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e091: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040e097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e09a: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e09e: je 0x40e100 */ if (fZ) goto L_0040e100;
L_0040e0a0:; BB(0x0040e0a0);
    /* 0040e0a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e0a3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e0a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0a7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040e0ad: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x40e0b2u); f_00639110();
    /* 0040e0b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e0b4: je 0x40e0ee */ if (fZ) goto L_0040e0ee;
L_0040e0b6:; BB(0x0040e0b6);
    /* 0040e0b6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e0bb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040e0be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040e0c5: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x40e0cau); f_00639110();
    /* 0040e0ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0040e0cc: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x40e0d1u); f_00646380();
    /* 0040e0d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e0d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e0db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040e0e2: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x40e0e7u); f_00639110();
    /* 0040e0e7: mov ecx, eax */ r_ecx = r_eax;
    /* 0040e0e9: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x40e0eeu); f_006464d0();
L_0040e0ee:; BB(0x0040e0ee);
    /* 0040e0ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e0f1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e0f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e0f5: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040e0fb: call 0x5d8f50 */ r_esp -= 4; W32(r_esp, 0x40e100u); f_005d8f50();
L_0040e100:; BB(0x0040e100);
    /* 0040e100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e103: call 0x40e150 */ r_esp -= 4; W32(r_esp, 0x40e108u); f_0040e150();
    /* 0040e108: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e10b: call 0x40e2f0 */ r_esp -= 4; W32(r_esp, 0x40e110u); f_0040e2f0();
    /* 0040e110: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e113: call 0x40e520 */ r_esp -= 4; W32(r_esp, 0x40e118u); f_0040e520();
    /* 0040e118: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e11e: call 0x418480 */ r_esp -= 4; W32(r_esp, 0x40e123u); f_00418480();
    /* 0040e123: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040e126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e128: je 0x40e137 */ if (fZ) goto L_0040e137;
L_0040e12a:; BB(0x0040e12a);
    /* 0040e12a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e130: call 0x40db70 */ r_esp -= 4; W32(r_esp, 0x40e135u); f_0040db70();
    /* 0040e135: jmp 0x40e142 */ goto L_0040e142;
L_0040e137:; BB(0x0040e137);
    /* 0040e137: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e13d: call 0x40dc40 */ r_esp -= 4; W32(r_esp, 0x40e142u); f_0040dc40();
L_0040e142:; BB(0x0040e142);
    /* 0040e142: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e144: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e145: ret  */ FN_RET(0x0040e090); r_esp += 4; return;
}

void f_0040e150(void) /* sub_40E150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e150);
    /* 0040e150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e151: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e153: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e156: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040e159: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e160: jmp 0x40e16b */ goto L_0040e16b;
L_0040e162:; BB(0x0040e162);
    /* 0040e162: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e165: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e168: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040e16b:; BB(0x0040e16b);
    /* 0040e16b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e16f: jge 0x40e181 */ if ((fS==fO)) goto L_0040e181;
L_0040e171:; BB(0x0040e171);
    /* 0040e171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e173: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e176: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e177: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e17a: call 0x40e190 */ r_esp -= 4; W32(r_esp, 0x40e17fu); f_0040e190();
    /* 0040e17f: jmp 0x40e162 */ goto L_0040e162;
L_0040e181:; BB(0x0040e181);
    /* 0040e181: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e184: ret  */ FN_RET(0x0040e150); r_esp += 4; return;
}

void f_0040e190(void) /* sub_40E190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e190);
    /* 0040e190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e191: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e196: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040e199: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e1a0: jmp 0x40e1ab */ goto L_0040e1ab;
L_0040e1a2:; BB(0x0040e1a2);
    /* 0040e1a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e1a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e1a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040e1ab:; BB(0x0040e1ab);
    /* 0040e1ab: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e1af: jge 0x40e1e0 */ if ((fS==fO)) goto L_0040e1e0;
L_0040e1b1:; BB(0x0040e1b1);
    /* 0040e1b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e1b4: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e1ba: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 0040e1be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e1c1: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0040e1c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040e1c7: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e1ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e1cd: lea eax, [ecx + eax + 0x28] */ r_eax = (u32)(r_ecx+r_eax+0x28u);
    /* 0040e1d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e1d4: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0040e1d7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e1d9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040e1dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e1deu); call_ind(t); }
    /* 0040e1de: jmp 0x40e1a2 */ goto L_0040e1a2;
L_0040e1e0:; BB(0x0040e1e0);
    /* 0040e1e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e1e7: jmp 0x40e1f2 */ goto L_0040e1f2;
L_0040e1e9:; BB(0x0040e1e9);
    /* 0040e1e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e1ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e1ef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040e1f2:; BB(0x0040e1f2);
    /* 0040e1f2: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e1f6: jge 0x40e23b */ if ((fS==fO)) goto L_0040e23b;
L_0040e1f8:; BB(0x0040e1f8);
    /* 0040e1f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e1fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e1fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040e1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e200: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e203: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e206: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e207: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e20d: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x40e212u); f_004193d0();
    /* 0040e212: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0040e215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e217: jne 0x40e21b */ if (!fZ) goto L_0040e21b;
L_0040e219:; BB(0x0040e219);
    /* 0040e219: jmp 0x40e1e9 */ goto L_0040e1e9;
L_0040e21b:; BB(0x0040e21b);
    /* 0040e21b: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0040e21e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e21f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e222: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e223: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040e226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e227: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e22a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e22d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e22e: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e234: call 0x40cdc0 */ r_esp -= 4; W32(r_esp, 0x40e239u); f_0040cdc0();
    /* 0040e239: jmp 0x40e1e9 */ goto L_0040e1e9;
L_0040e23b:; BB(0x0040e23b);
    /* 0040e23b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e23e: ret 8 */ FN_RET(0x0040e190); r_esp += 12; return;
}

void f_0040e250(void) /* sub_40E250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e250);
    /* 0040e250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e251: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040e257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e25a: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e25e: jne 0x40e27d */ if (!fZ) goto L_0040e27d;
L_0040e260:; BB(0x0040e260);
    /* 0040e260: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e262: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e265: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e266: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e269: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e26c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e26d: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e273: call 0x40d0f0 */ r_esp -= 4; W32(r_esp, 0x40e278u); f_0040d0f0();
    /* 0040e278: sub eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e27b: jmp 0x40e298 */ goto L_0040e298;
L_0040e27d:; BB(0x0040e27d);
    /* 0040e27d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e27f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e283: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e286: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e28a: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e290: call 0x40d0f0 */ r_esp -= 4; W32(r_esp, 0x40e295u); f_0040d0f0();
    /* 0040e295: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0040e298:; BB(0x0040e298);
    /* 0040e298: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e29a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e29b: ret 4 */ FN_RET(0x0040e250); r_esp += 8; return;
}

void f_0040e2a0(void) /* sub_40E2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e2a0);
    /* 0040e2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040e2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e2aa: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e2ae: jne 0x40e2cd */ if (!fZ) goto L_0040e2cd;
L_0040e2b0:; BB(0x0040e2b0);
    /* 0040e2b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e2b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e2b9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2bd: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e2c3: call 0x40d330 */ r_esp -= 4; W32(r_esp, 0x40e2c8u); f_0040d330();
    /* 0040e2c8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e2cb: jmp 0x40e2e8 */ goto L_0040e2e8;
L_0040e2cd:; BB(0x0040e2cd);
    /* 0040e2cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e2d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e2d6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e2d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2da: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e2e0: call 0x40d330 */ r_esp -= 4; W32(r_esp, 0x40e2e5u); f_0040d330();
    /* 0040e2e5: sub eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0040e2e8:; BB(0x0040e2e8);
    /* 0040e2e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e2ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e2eb: ret 4 */ FN_RET(0x0040e2a0); r_esp += 8; return;
}

void f_0040e2f0(void) /* sub_40E2F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e2f0);
    /* 0040e2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e2f3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e2f6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040e2fb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e2fd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040e300: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0040e303: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e306: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e30a: jne 0x40e335 */ if (!fZ) goto L_0040e335;
L_0040e30c:; BB(0x0040e30c);
    /* 0040e30c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e30e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e310: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e316: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x40e31bu); f_00419530();
    /* 0040e31b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e31e: jge 0x40e335 */ if ((fS==fO)) goto L_0040e335;
L_0040e320:; BB(0x0040e320);
    /* 0040e320: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e323: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0040e326: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x40e32bu); f_005eb220();
    /* 0040e32b: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e32e: jne 0x40e335 */ if (!fZ) goto L_0040e335;
L_0040e330:; BB(0x0040e330);
    /* 0040e330: jmp 0x40e510 */ goto L_0040e510;
L_0040e335:; BB(0x0040e335);
    /* 0040e335: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e33c: jmp 0x40e347 */ goto L_0040e347;
L_0040e33e:; BB(0x0040e33e);
    /* 0040e33e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e341: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040e344: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0040e347:; BB(0x0040e347);
    /* 0040e347: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e34b: jge 0x40e36a */ if ((fS==fO)) goto L_0040e36a;
L_0040e34d:; BB(0x0040e34d);
    /* 0040e34d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e350: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e353: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040e357: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e35a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e35d: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040e361: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e363: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0040e366: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e368u); call_ind(t); }
    /* 0040e368: jmp 0x40e33e */ goto L_0040e33e;
L_0040e36a:; BB(0x0040e36a);
    /* 0040e36a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e371: jmp 0x40e37c */ goto L_0040e37c;
L_0040e373:; BB(0x0040e373);
    /* 0040e373: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e376: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e379: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040e37c:; BB(0x0040e37c);
    /* 0040e37c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e37f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e383: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e389: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40e38eu); f_004194c0();
    /* 0040e38e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e391: jge 0x40e510 */ if ((fS==fO)) goto L_0040e510;
L_0040e397:; BB(0x0040e397);
    /* 0040e397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e39a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e39b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e39e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e3a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3a2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e3a8: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40e3adu); f_004198d0();
    /* 0040e3ad: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040e3b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3b4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e3b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3bb: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e3c1: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40e3c6u); f_004197d0();
    /* 0040e3c6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040e3c9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e3cc: cmp dword ptr [ecx + 4], 4 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e3d0: jne 0x40e3f6 */ if (!fZ) goto L_0040e3f6;
L_0040e3d2:; BB(0x0040e3d2);
    /* 0040e3d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3d6: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e3dc: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x40e3e1u); f_00419980();
    /* 0040e3e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3e2: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3e7: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0040e3ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e3eb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x40e3f1u); call_ind(t); }
    /* 0040e3f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e3f4: jmp 0x40e436 */ goto L_0040e436;
L_0040e3f6:; BB(0x0040e3f6);
    /* 0040e3f6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040e3f9: cmp eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e3fc: je 0x40e420 */ if (fZ) goto L_0040e420;
L_0040e3fe:; BB(0x0040e3fe);
    /* 0040e3fe: cmp dword ptr [ebp - 0x44], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e402: jge 0x40e420 */ if ((fS==fO)) goto L_0040e420;
L_0040e404:; BB(0x0040e404);
    /* 0040e404: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040e407: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e408: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040e40b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e40c: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e411: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0040e414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e415: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x40e41bu); call_ind(t); }
    /* 0040e41b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e41e: jmp 0x40e436 */ goto L_0040e436;
L_0040e420:; BB(0x0040e420);
    /* 0040e420: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040e423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e424: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e429: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0040e42c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e42d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x40e433u); call_ind(t); }
    /* 0040e433: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040e436:; BB(0x0040e436);
    /* 0040e436: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0040e439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e43a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e43d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e440: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0040e444: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e447: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e44a: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0040e44e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e450: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0040e456: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e458u); call_ind(t); }
    /* 0040e458: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e45c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e45f: call 0x40e2a0 */ r_esp -= 4; W32(r_esp, 0x40e464u); f_0040e2a0();
    /* 0040e464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e465: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e468: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e469: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e46c: call 0x40e250 */ r_esp -= 4; W32(r_esp, 0x40e471u); f_0040e250();
    /* 0040e471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e472: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e475: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e478: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040e47c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e47f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e482: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040e486: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040e488: mov ecx, edx */ r_ecx = r_edx;
    /* 0040e48a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0040e48d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e48fu); call_ind(t); }
    /* 0040e48f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e495: call 0x418460 */ r_esp -= 4; W32(r_esp, 0x40e49au); f_00418460();
    /* 0040e49a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040e49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e49f: je 0x40e4f0 */ if (fZ) goto L_0040e4f0;
L_0040e4a1:; BB(0x0040e4a1);
    /* 0040e4a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4a5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e4a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040e4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e4ac: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e4b2: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x40e4b7u); f_00419530();
    /* 0040e4b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e4ba: jle 0x40e4f0 */ if ((fZ||fS!=fO)) goto L_0040e4f0;
L_0040e4bc:; BB(0x0040e4bc);
    /* 0040e4bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4bf: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e4c2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e4c5: mov ecx, dword ptr [edx + ecx + 0x28] */ r_ecx = R32((u32)(r_edx+r_ecx+0x28u));
    /* 0040e4c9: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x40e4ceu); f_005eb220();
    /* 0040e4ce: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e4d1: je 0x40e4f0 */ if (fZ) goto L_0040e4f0;
L_0040e4d3:; BB(0x0040e4d3);
    /* 0040e4d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4d6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e4d9: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040e4dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4e0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e4e3: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040e4e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e4e9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e4ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e4eeu); call_ind(t); }
    /* 0040e4ee: jmp 0x40e50b */ goto L_0040e50b;
L_0040e4f0:; BB(0x0040e4f0);
    /* 0040e4f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4f3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e4f6: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0040e4fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e4fd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040e500: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0040e504: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e506: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040e509: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e50bu); call_ind(t); }
L_0040e50b:; BB(0x0040e50b);
    /* 0040e50b: jmp 0x40e373 */ goto L_0040e373;
L_0040e510:; BB(0x0040e510);
    /* 0040e510: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e513: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e515: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x40e51au); f_00686d72();
    /* 0040e51a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e51c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e51d: ret  */ FN_RET(0x0040e2f0); r_esp += 4; return;
}

void f_0040e520(void) /* sub_40E520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e520);
    /* 0040e520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e521: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e523: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e526: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e527: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040e528: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e52b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e52e: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e532: jne 0x40e539 */ if (!fZ) goto L_0040e539;
L_0040e534:; BB(0x0040e534);
    /* 0040e534: jmp 0x40e825 */ goto L_0040e825;
L_0040e539:; BB(0x0040e539);
    /* 0040e539: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040e540: jmp 0x40e54b */ goto L_0040e54b;
L_0040e542:; BB(0x0040e542);
    /* 0040e542: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e545: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e548: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040e54b:; BB(0x0040e54b);
    /* 0040e54b: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e54f: jge 0x40e570 */ if ((fS==fO)) goto L_0040e570;
L_0040e551:; BB(0x0040e551);
    /* 0040e551: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e554: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e557: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e55b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e55e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e561: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e565: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040e567: mov ecx, edx */ r_ecx = r_edx;
    /* 0040e569: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040e56c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e56eu); call_ind(t); }
    /* 0040e56e: jmp 0x40e542 */ goto L_0040e542;
L_0040e570:; BB(0x0040e570);
    /* 0040e570: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040e577: jmp 0x40e582 */ goto L_0040e582;
L_0040e579:; BB(0x0040e579);
    /* 0040e579: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e57c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040e57f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0040e582:; BB(0x0040e582);
    /* 0040e582: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e585: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e588: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e589: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e58f: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40e594u); f_004194c0();
    /* 0040e594: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040e597: jge 0x40e825 */ if ((fS==fO)) goto L_0040e825;
L_0040e59d:; BB(0x0040e59d);
    /* 0040e59d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e5a0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040e5a3: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e5a9: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e5ac: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040e5b2: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 0040e5ba: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040e5bd: cmp dword ptr [ebp - 0x1c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040e5c1: ja 0x40e6a8 */ if ((!fC&&!fZ)) goto L_0040e6a8;
L_0040e5c7:; BB(0x0040e5c7);
    /* 0040e5c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e5ca: jmp dword ptr [ecx*4 + 0x40e82c] */ { u32 t = R32((u32)(r_ecx*4+0x40e82cu)); switch (t) { case 0x40e61du: goto L_0040e61d; case 0x40e642u: goto L_0040e642; case 0x40e664u: goto L_0040e664; case 0x40e6a8u: goto L_0040e6a8; case 0x40e686u: goto L_0040e686; case 0x40e5d1u: goto L_0040e5d1; case 0x40e5f8u: goto L_0040e5f8; default: UNSUP(0x0040e5ca, "jump table entry is not a known target"); } }
L_0040e5d1:; BB(0x0040e5d1);
    /* 0040e5d1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e5d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e5d9: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e5dd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e5e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e5e3: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e5e7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040e5e9: mov ecx, edx */ r_ecx = r_edx;
    /* 0040e5eb: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040e5f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e5f3u); call_ind(t); }
    /* 0040e5f3: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e5f8:; BB(0x0040e5f8);
    /* 0040e5f8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e5fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e5fd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e600: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e604: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e607: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e60a: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e60e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e610: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040e616: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e618u); call_ind(t); }
    /* 0040e618: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e61d:; BB(0x0040e61d);
    /* 0040e61d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e61f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e622: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e625: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e629: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e62c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e62f: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e633: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e635: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040e63b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e63du); call_ind(t); }
    /* 0040e63d: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e642:; BB(0x0040e642);
    /* 0040e642: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e644: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e647: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e64a: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e64e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e651: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e654: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e658: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e65a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040e660: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e662u); call_ind(t); }
    /* 0040e662: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e664:; BB(0x0040e664);
    /* 0040e664: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e666: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e669: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e66c: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e670: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e673: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e676: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e67a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e67c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040e682: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e684u); call_ind(t); }
    /* 0040e684: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e686:; BB(0x0040e686);
    /* 0040e686: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e688: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e68b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e68e: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e692: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e695: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e698: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e69c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e69e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040e6a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e6a6u); call_ind(t); }
    /* 0040e6a6: jmp 0x40e6c3 */ goto L_0040e6c3;
L_0040e6a8:; BB(0x0040e6a8);
    /* 0040e6a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e6ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e6ae: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e6b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e6b5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e6b8: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e6bc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e6be: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040e6c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e6c3u); call_ind(t); }
L_0040e6c3:; BB(0x0040e6c3);
    /* 0040e6c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e6c6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040e6c9: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e6cf: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e6d2: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040e6d8: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 0040e6e0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e6e3: jne 0x40e6ea */ if (!fZ) goto L_0040e6ea;
L_0040e6e5:; BB(0x0040e6e5);
    /* 0040e6e5: jmp 0x40e579 */ goto L_0040e579;
L_0040e6ea:; BB(0x0040e6ea);
    /* 0040e6ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e6ed: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e6f0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e6f3: mov eax, dword ptr [edx + ecx + 0x28] */ r_eax = R32((u32)(r_edx+r_ecx+0x28u));
    /* 0040e6f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e6fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e6fd: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040e700: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e703: lea esi, [edx + ecx + 0x28] */ r_esi = (u32)(r_edx+r_ecx+0x28u);
    /* 0040e707: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e70a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e70b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e70e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040e711: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e712: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040e718: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x40e71du); f_00419530();
    /* 0040e71d: mov eax, dword ptr [esi + eax*4 - 4] */ r_eax = R32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0040e721: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040e724: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e727: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e729: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e72c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040e72f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e731u); call_ind(t); }
    /* 0040e731: mov esi, eax */ r_esi = r_eax;
    /* 0040e733: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e736: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e738: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e73b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040e73e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e740u); call_ind(t); }
    /* 0040e740: mov edi, eax */ r_edi = r_eax;
    /* 0040e742: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e745: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x40e74au); f_005f5550();
    /* 0040e74a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040e74c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e74f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e751: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e754: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040e757: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e759u); call_ind(t); }
    /* 0040e759: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040e75b: mov eax, edi */ r_eax = r_edi;
    /* 0040e75d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e75e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e760: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040e762: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040e764: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0040e767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e76a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e76c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e76f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0040e772: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e774u); call_ind(t); }
    /* 0040e774: mov esi, eax */ r_esi = r_eax;
    /* 0040e776: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e779: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e77b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e77e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0040e781: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e783u); call_ind(t); }
    /* 0040e783: mov edi, eax */ r_edi = r_eax;
    /* 0040e785: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e788: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x40e78du); f_005f5590();
    /* 0040e78d: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040e78f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e792: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040e794: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e797: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0040e79a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e79cu); call_ind(t); }
    /* 0040e79c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040e79e: mov eax, edi */ r_eax = r_edi;
    /* 0040e7a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e7a1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7a3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040e7a5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040e7a7: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0040e7aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e7ad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e7b0: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e7b4: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x40e7b9u); f_005f5550();
    /* 0040e7b9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e7ba: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7bc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040e7be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e7c1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e7c3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040e7c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e7c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e7cc: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e7d0: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x40e7d5u); f_005f5590();
    /* 0040e7d5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040e7d6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040e7d8: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040e7da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e7dd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040e7df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040e7e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040e7e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e7e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040e7e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e7ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e7ed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e7f0: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e7f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e7f7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e7fa: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040e7fe: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040e800: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0040e803: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40e805u); call_ind(t); }
    /* 0040e805: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e808: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e80b: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e80f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e812: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e815: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040e819: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e81b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e81e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e820u); call_ind(t); }
    /* 0040e820: jmp 0x40e579 */ goto L_0040e579;
L_0040e825:; BB(0x0040e825);
    /* 0040e825: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040e826: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040e827: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e82a: ret  */ FN_RET(0x0040e520); r_esp += 4; return;
}

void f_0040e850(void) /* sub_40E850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e850);
    /* 0040e850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e851: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e855: push 0x69dae5 */ { u32 v = 0x69dae5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e85a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040e860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e861: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e864: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040e869: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e86b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e86c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040e86f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040e875: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040e878: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e87d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e881: je 0x40e921 */ if (fZ) goto L_0040e921;
L_0040e887:; BB(0x0040e887);
    /* 0040e887: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e88c: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e892: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040e895: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40e89au); f_005eaf00();
    /* 0040e89a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e89c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040e8a2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0040e8a5: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e8ab: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040e8ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040e8b0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040e8b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e8b8u); call_ind(t); }
    /* 0040e8b8: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e8be: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0040e8c1: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e8c6: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0040e8c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e8cb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e8ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e8d0u); call_ind(t); }
    /* 0040e8d0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e8d2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40e8d7u); f_00686d82();
    /* 0040e8d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e8da: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040e8dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040e8e4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e8e8: je 0x40e8fb */ if (fZ) goto L_0040e8fb;
L_0040e8ea:; BB(0x0040e8ea);
    /* 0040e8ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040e8ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e8ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040e8f1: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40e8f6u); f_006010a0();
    /* 0040e8f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040e8f9: jmp 0x40e902 */ goto L_0040e902;
L_0040e8fb:; BB(0x0040e8fb);
    /* 0040e8fb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040e902:; BB(0x0040e902);
    /* 0040e902: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040e905: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040e908: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040e90f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e913: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e919: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040e91c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40e921u); f_005f5d50();
L_0040e921:; BB(0x0040e921);
    /* 0040e921: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040e927: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e92b: je 0x40e9c6 */ if (fZ) goto L_0040e9c6;
L_0040e931:; BB(0x0040e931);
    /* 0040e931: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e936: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e93b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040e93e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40e943u); f_005eaf00();
    /* 0040e943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e945: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e94b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0040e94e: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e953: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040e956: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e958: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040e95e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e960u); call_ind(t); }
    /* 0040e960: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040e966: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0040e969: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e96e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040e971: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040e973: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040e976: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40e978u); call_ind(t); }
    /* 0040e978: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e97a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40e97fu); f_00686d82();
    /* 0040e97f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e982: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040e985: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040e98c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e990: je 0x40e9a1 */ if (fZ) goto L_0040e9a1;
L_0040e992:; BB(0x0040e992);
    /* 0040e992: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e994: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040e997: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40e99cu); f_006010a0();
    /* 0040e99c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040e99f: jmp 0x40e9a8 */ goto L_0040e9a8;
L_0040e9a1:; BB(0x0040e9a1);
    /* 0040e9a1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040e9a8:; BB(0x0040e9a8);
    /* 0040e9a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e9ab: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040e9ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040e9b5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040e9b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9b9: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040e9be: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040e9c1: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40e9c6u); f_005f5d50();
L_0040e9c6:; BB(0x0040e9c6);
    /* 0040e9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e9c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e9d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e9d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e9d4: ret 4 */ FN_RET(0x0040e850); r_esp += 8; return;
}

void f_0040e9e0(void) /* sub_40E9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040e9e0);
    /* 0040e9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040e9e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9e5: push 0x69db16 */ { u32 v = 0x69db16u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040e9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9f1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040e9f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040e9f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040e9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040e9fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040e9ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040ea05: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040ea08: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040ea0d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea11: je 0x40ea99 */ if (fZ) goto L_0040ea99;
L_0040ea17:; BB(0x0040ea17);
    /* 0040ea17: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea1c: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ea22: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040ea25: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40ea2au); f_005eaf00();
    /* 0040ea2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea2c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040ea32: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0040ea35: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ea3b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040ea3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ea40: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040ea46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ea48u); call_ind(t); }
    /* 0040ea48: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea4a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40ea4fu); f_00686d82();
    /* 0040ea4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ea52: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040ea55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ea5c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ea60: je 0x40ea73 */ if (fZ) goto L_0040ea73;
L_0040ea62:; BB(0x0040ea62);
    /* 0040ea62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ea65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ea69: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40ea6eu); f_006010a0();
    /* 0040ea6e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040ea71: jmp 0x40ea7a */ goto L_0040ea7a;
L_0040ea73:; BB(0x0040ea73);
    /* 0040ea73: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040ea7a:; BB(0x0040ea7a);
    /* 0040ea7a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ea7d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040ea80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ea87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ea8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ea8b: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ea91: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040ea94: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40ea99u); f_005f5d50();
L_0040ea99:; BB(0x0040ea99);
    /* 0040ea99: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040ea9f: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eaa3: je 0x40eb22 */ if (fZ) goto L_0040eb22;
L_0040eaa5:; BB(0x0040eaa5);
    /* 0040eaa5: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaaa: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040eaaf: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040eab2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40eab7u); f_005eaf00();
    /* 0040eab7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eab9: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040eabf: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0040eac2: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040eac7: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040eaca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040eacc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040ead2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ead4u); call_ind(t); }
    /* 0040ead4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ead6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40eadbu); f_00686d82();
    /* 0040eadb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040eade: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040eae1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040eae8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eaec: je 0x40eafd */ if (fZ) goto L_0040eafd;
L_0040eaee:; BB(0x0040eaee);
    /* 0040eaee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eaf0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040eaf3: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40eaf8u); f_006010a0();
    /* 0040eaf8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040eafb: jmp 0x40eb04 */ goto L_0040eb04;
L_0040eafd:; BB(0x0040eafd);
    /* 0040eafd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040eb04:; BB(0x0040eb04);
    /* 0040eb04: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040eb07: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040eb0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040eb11: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040eb14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb15: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040eb1a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040eb1d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40eb22u); f_005f5d50();
L_0040eb22:; BB(0x0040eb22);
    /* 0040eb22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040eb25: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040eb2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040eb2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040eb2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040eb30: ret 4 */ FN_RET(0x0040e9e0); r_esp += 8; return;
}

void f_0040eb40(void) /* sub_40EB40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040eb40);
    /* 0040eb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0040eb43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb45: push 0x69db47 */ { u32 v = 0x69db47u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040eb50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb51: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040eb54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040eb59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040eb5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040eb5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040eb65: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040eb68: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040eb6d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eb71: je 0x40ebf9 */ if (fZ) goto L_0040ebf9;
L_0040eb77:; BB(0x0040eb77);
    /* 0040eb77: push 0x13ad */ { u32 v = 0x13adu; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb7c: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040eb82: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040eb85: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40eb8au); f_005eaf00();
    /* 0040eb8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040eb8c: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040eb92: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0040eb95: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040eb9b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040eb9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040eba0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040eba6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40eba8u); call_ind(t); }
    /* 0040eba8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebaa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40ebafu); f_00686d82();
    /* 0040ebaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ebb2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040ebb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ebbc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ebc0: je 0x40ebd3 */ if (fZ) goto L_0040ebd3;
L_0040ebc2:; BB(0x0040ebc2);
    /* 0040ebc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ebc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebc6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ebc9: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40ebceu); f_006010a0();
    /* 0040ebce: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040ebd1: jmp 0x40ebda */ goto L_0040ebda;
L_0040ebd3:; BB(0x0040ebd3);
    /* 0040ebd3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040ebda:; BB(0x0040ebda);
    /* 0040ebda: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ebdd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040ebe0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ebe7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ebea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ebeb: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ebf1: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040ebf4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40ebf9u); f_005f5d50();
L_0040ebf9:; BB(0x0040ebf9);
    /* 0040ebf9: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0040ebff: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec03: je 0x40ec82 */ if (fZ) goto L_0040ec82;
L_0040ec05:; BB(0x0040ec05);
    /* 0040ec05: push 0x13ac */ { u32 v = 0x13acu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec0a: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040ec0f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040ec12: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40ec17u); f_005eaf00();
    /* 0040ec17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec19: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ec1f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0040ec22: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040ec27: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040ec2a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040ec2c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040ec32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ec34u); call_ind(t); }
    /* 0040ec34: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec36: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40ec3bu); f_00686d82();
    /* 0040ec3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ec3e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040ec41: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040ec48: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ec4c: je 0x40ec5d */ if (fZ) goto L_0040ec5d;
L_0040ec4e:; BB(0x0040ec4e);
    /* 0040ec4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec50: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040ec53: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x40ec58u); f_006010a0();
    /* 0040ec58: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040ec5b: jmp 0x40ec64 */ goto L_0040ec64;
L_0040ec5d:; BB(0x0040ec5d);
    /* 0040ec5d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040ec64:; BB(0x0040ec64);
    /* 0040ec64: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040ec67: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040ec6a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ec71: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ec74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ec75: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040ec7a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040ec7d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x40ec82u); f_005f5d50();
L_0040ec82:; BB(0x0040ec82);
    /* 0040ec82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ec85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040ec8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ec8d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ec8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ec90: ret 4 */ FN_RET(0x0040eb40); r_esp += 8; return;
}

