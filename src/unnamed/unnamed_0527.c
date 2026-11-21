#include "protos.h"

void f_00527c80(void) /* sub_527C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527c80);
    /* 00527c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00527c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527c87: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527c8b: jne 0x527c9c */ if (!fZ) goto L_00527c9c;
L_00527c8d:; BB(0x00527c8d);
    /* 00527c8d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527c8f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00527c95: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x527c9au); f_006375d0();
    /* 00527c9a: jmp 0x527cb1 */ goto L_00527cb1;
L_00527c9c:; BB(0x00527c9c);
    /* 00527c9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527c9e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00527ca3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00527ca6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00527ca9: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00527cac: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x527cb1u); f_0063aae0();
L_00527cb1:; BB(0x00527cb1);
    /* 00527cb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00527cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527cb4: ret 4 */ FN_RET(0x00527c80); r_esp += 8; return;
}

void f_00527cc0(void) /* sub_527CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527cc0);
    /* 00527cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00527cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527cc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527cc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527ccc: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x527cd1u); f_00527c80();
    /* 00527cd1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00527cd4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00527cd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00527cd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527cd9: ret 4 */ FN_RET(0x00527cc0); r_esp += 8; return;
}

void f_00527ce0(void) /* sub_527CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527ce0);
    /* 00527ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00527ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527ce7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527ce9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527cec: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x527cf1u); f_00527c80();
    /* 00527cf1: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00527cf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00527cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527cf6: ret  */ FN_RET(0x00527ce0); r_esp += 4; return;
}

void f_00527d00(void) /* sub_527D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527d00);
    /* 00527d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00527d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527d07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527d09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527d0c: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x527d11u); f_00527c80();
    /* 00527d11: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00527d14: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00527d17: mov esp, ebp */ r_esp = r_ebp;
    /* 00527d19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527d1a: ret 4 */ FN_RET(0x00527d00); r_esp += 8; return;
}

void f_00527d20(void) /* sub_527D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527d20);
    /* 00527d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00527d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527d27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527d29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527d2c: call 0x527c80 */ r_esp -= 4; W32(r_esp, 0x527d31u); f_00527c80();
    /* 00527d31: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00527d34: mov esp, ebp */ r_esp = r_ebp;
    /* 00527d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527d37: ret  */ FN_RET(0x00527d20); r_esp += 4; return;
}

void f_00527d40(void) /* sub_527D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527d40);
    /* 00527d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00527d43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527d45: push 0x6a4231 */ { u32 v = 0x6a4231u; r_esp -= 4; W32(r_esp, v); }
    /* 00527d4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00527d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527d51: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527d54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00527d59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527d5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00527d5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00527d65: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00527d68: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00527d6f: jmp 0x527d7a */ goto L_00527d7a;
L_00527d71:; BB(0x00527d71);
    /* 00527d71: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527d74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527d77: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00527d7a:; BB(0x00527d7a);
    /* 00527d7a: cmp dword ptr [ebp - 0x10], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527d81: jge 0x527de3 */ if ((fS==fO)) goto L_00527de3;
L_00527d83:; BB(0x00527d83);
    /* 00527d83: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00527d88: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x527d8du); f_00686d82();
    /* 00527d8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527d90: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00527d93: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527d9a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527d9e: je 0x527dad */ if (fZ) goto L_00527dad;
L_00527da0:; BB(0x00527da0);
    /* 00527da0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00527da3: call 0x5297d0 */ r_esp -= 4; W32(r_esp, 0x527da8u); f_005297d0();
    /* 00527da8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00527dab: jmp 0x527db4 */ goto L_00527db4;
L_00527dad:; BB(0x00527dad);
    /* 00527dad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00527db4:; BB(0x00527db4);
    /* 00527db4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00527db7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00527dba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00527dc1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527dc4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00527dc7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527dca: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 00527dce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527dd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527dd2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527dd5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00527dd8: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00527ddc: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x527de1u); f_005f53e0();
    /* 00527de1: jmp 0x527d71 */ goto L_00527d71;
L_00527de3:; BB(0x00527de3);
    /* 00527de3: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00527dea: jmp 0x527df5 */ goto L_00527df5;
L_00527dec:; BB(0x00527dec);
    /* 00527dec: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527def: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00527df2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00527df5:; BB(0x00527df5);
    /* 00527df5: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527df9: jge 0x527e2a */ if ((fS==fO)) goto L_00527e2a;
L_00527dfb:; BB(0x00527dfb);
    /* 00527dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527dfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527dff: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x527e04u); f_0064c8a0();
    /* 00527e04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527e07: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00527e0a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00527e0d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00527e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527e11: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00527e14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527e15: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527e18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527e19: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527e1eu); f_005dcb00();
    /* 00527e1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527e21: mov ecx, eax */ r_ecx = r_eax;
    /* 00527e23: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x527e28u); f_005d6050();
    /* 00527e28: jmp 0x527dec */ goto L_00527dec;
L_00527e2a:; BB(0x00527e2a);
    /* 00527e2a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00527e2d: call 0x527e50 */ r_esp -= 4; W32(r_esp, 0x527e32u); f_00527e50();
    /* 00527e32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527e35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00527e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00527e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527e40: ret  */ FN_RET(0x00527d40); r_esp += 4; return;
}

void f_00527e50(void) /* sub_527E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527e50);
    /* 00527e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00527e53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527e56: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00527e59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e5c: mov dword ptr [eax + 0xdb8], 0xffffffff */ W32((u32)(r_eax+0xdb8u), 0xffffffffu);
    /* 00527e66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e69: mov byte ptr [ecx + 0xdbc], 0 */ W8((u32)(r_ecx+0xdbcu), 0x0u);
    /* 00527e70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527e72: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527e74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e77: call 0x528030 */ r_esp -= 4; W32(r_esp, 0x527e7cu); f_00528030();
    /* 00527e7c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527e7e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e81: call 0x528b60 */ r_esp -= 4; W32(r_esp, 0x527e86u); f_00528b60();
    /* 00527e86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e89: mov dword ptr [edx + 0xdb0], 0xffffffff */ W32((u32)(r_edx+0xdb0u), 0xffffffffu);
    /* 00527e93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00527e96: mov dword ptr [eax + 0xdb4], 0xffffffff */ W32((u32)(r_eax+0xdb4u), 0xffffffffu);
    /* 00527ea0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527ea7: jmp 0x527eb2 */ goto L_00527eb2;
L_00527ea9:; BB(0x00527ea9);
    /* 00527ea9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527eac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527eaf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00527eb2:; BB(0x00527eb2);
    /* 00527eb2: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527eb9: jge 0x527ee0 */ if ((fS==fO)) goto L_00527ee0;
L_00527ebb:; BB(0x00527ebb);
    /* 00527ebb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527ebe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00527ec1: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00527ec5: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x527ecau); f_005cb9b0();
    /* 00527eca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527ecd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00527ed0: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00527ed4: mov dword ptr [eax + 0xf0], 2 */ W32((u32)(r_eax+0xf0u), 0x2u);
    /* 00527ede: jmp 0x527ea9 */ goto L_00527ea9;
L_00527ee0:; BB(0x00527ee0);
    /* 00527ee0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527ee7: jmp 0x527ef2 */ goto L_00527ef2;
L_00527ee9:; BB(0x00527ee9);
    /* 00527ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527eec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527eef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00527ef2:; BB(0x00527ef2);
    /* 00527ef2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527ef6: jge 0x527f45 */ if ((fS==fO)) goto L_00527f45;
L_00527ef8:; BB(0x00527ef8);
    /* 00527ef8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527efb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527efc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527f01u); f_005dcb00();
    /* 00527f01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527f04: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00527f07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00527f0a: mov byte ptr [eax + 0x4a0], 0 */ W8((u32)(r_eax+0x4a0u), 0x0u);
    /* 00527f11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527f14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527f15: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527f1au); f_005dcb00();
    /* 00527f1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527f1d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00527f20: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527f23: mov byte ptr [edx + 0x4a2], 0 */ W8((u32)(r_edx+0x4a2u), 0x0u);
    /* 00527f2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527f2e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527f33u); f_005dcb00();
    /* 00527f33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527f36: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00527f39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527f3c: mov byte ptr [ecx + 0x4a1], 0 */ W8((u32)(r_ecx+0x4a1u), 0x0u);
    /* 00527f43: jmp 0x527ee9 */ goto L_00527ee9;
L_00527f45:; BB(0x00527f45);
    /* 00527f45: mov esp, ebp */ r_esp = r_ebp;
    /* 00527f47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527f48: ret  */ FN_RET(0x00527e50); r_esp += 4; return;
}

void f_00527f50(void) /* sub_527F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527f50);
    /* 00527f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00527f53: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527f56: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00527f59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527f60: jmp 0x527f6b */ goto L_00527f6b;
L_00527f62:; BB(0x00527f62);
    /* 00527f62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527f65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00527f68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00527f6b:; BB(0x00527f6b);
    /* 00527f6b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00527f6f: jge 0x527fec */ if ((fS==fO)) goto L_00527fec;
L_00527f71:; BB(0x00527f71);
    /* 00527f71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527f74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527f75: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527f7au); f_005dcb00();
    /* 00527f7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527f7d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00527f80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527f83: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x527f88u); f_0063aac0();
    /* 00527f88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00527f8a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00527f8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527f8f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f93: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00527f96: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00527f99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527f9b: jne 0x527fe7 */ if (!fZ) goto L_00527fe7;
L_00527f9d:; BB(0x00527f9d);
    /* 00527f9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527fa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527fa1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527fa6u); f_005dcb00();
    /* 00527fa6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527fa9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00527fac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527faf: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00527fb5: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00527fb8: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00527fbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527fbe: jne 0x527fe7 */ if (!fZ) goto L_00527fe7;
L_00527fc0:; BB(0x00527fc0);
    /* 00527fc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527fc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527fc4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x527fc9u); f_005dcb00();
    /* 00527fc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527fcc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00527fcf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00527fd2: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00527fd8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00527fdb: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00527fdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527fe1: jne 0x527fe7 */ if (!fZ) goto L_00527fe7;
L_00527fe3:; BB(0x00527fe3);
    /* 00527fe3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00527fe5: jmp 0x527fee */ goto L_00527fee;
L_00527fe7:; BB(0x00527fe7);
    /* 00527fe7: jmp 0x527f62 */ goto L_00527f62;
L_00527fec:; BB(0x00527fec);
    /* 00527fec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00527fee:; BB(0x00527fee);
    /* 00527fee: mov esp, ebp */ r_esp = r_ebp;
    /* 00527ff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527ff1: ret  */ FN_RET(0x00527f50); r_esp += 4; return;
}

