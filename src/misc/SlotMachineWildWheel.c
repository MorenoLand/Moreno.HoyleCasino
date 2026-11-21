#include "protos.h"

void f_00534c20(void) /* SlotMachineWildWheel::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c20);
    /* 00534c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c27: mov eax, 0x30f0b3 */ r_eax = 0x30f0b3u;
    /* 00534c2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c2f: ret  */ FN_RET(0x00534c20); r_esp += 4; return;
}

void f_00534c30(void) /* SlotMachineWildWheel::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c30);
    /* 00534c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c37: mov eax, 0x30f09a */ r_eax = 0x30f09au;
    /* 00534c3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c3f: ret  */ FN_RET(0x00534c30); r_esp += 4; return;
}

void f_00534c40(void) /* SlotMachineWildWheel::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c40);
    /* 00534c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c47: mov eax, 0x30f09b */ r_eax = 0x30f09bu;
    /* 00534c4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c4f: ret  */ FN_RET(0x00534c40); r_esp += 4; return;
}

void f_00534c50(void) /* SlotMachineWildWheel::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534c50);
    /* 00534c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00534c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534c57: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534c5b: jne 0x534c64 */ if (!fZ) goto L_00534c64;
L_00534c5d:; BB(0x00534c5d);
    /* 00534c5d: mov eax, 0xc */ r_eax = 0xcu;
    /* 00534c62: jmp 0x534c90 */ goto L_00534c90;
L_00534c64:; BB(0x00534c64);
    /* 00534c64: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534c68: jne 0x534c71 */ if (!fZ) goto L_00534c71;
L_00534c6a:; BB(0x00534c6a);
    /* 00534c6a: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00534c6f: jmp 0x534c90 */ goto L_00534c90;
L_00534c71:; BB(0x00534c71);
    /* 00534c71: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534c75: jne 0x534c7e */ if (!fZ) goto L_00534c7e;
L_00534c77:; BB(0x00534c77);
    /* 00534c77: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00534c7c: jmp 0x534c90 */ goto L_00534c90;
L_00534c7e:; BB(0x00534c7e);
    /* 00534c7e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534c82: jne 0x534c8b */ if (!fZ) goto L_00534c8b;
L_00534c84:; BB(0x00534c84);
    /* 00534c84: mov eax, 0x24 */ r_eax = 0x24u;
    /* 00534c89: jmp 0x534c90 */ goto L_00534c90;
L_00534c8b:; BB(0x00534c8b);
    /* 00534c8b: mov eax, 0x2c */ r_eax = 0x2cu;
L_00534c90:; BB(0x00534c90);
    /* 00534c90: mov esp, ebp */ r_esp = r_ebp;
    /* 00534c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534c93: ret 4 */ FN_RET(0x00534c50); r_esp += 8; return;
}

void f_00534ca0(void) /* SlotMachineWildWheel::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ca0);
    /* 00534ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ca7: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534cab: jne 0x534cb2 */ if (!fZ) goto L_00534cb2;
L_00534cad:; BB(0x00534cad);
    /* 00534cad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00534cb0: jmp 0x534cb4 */ goto L_00534cb4;
L_00534cb2:; BB(0x00534cb2);
    /* 00534cb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00534cb4:; BB(0x00534cb4);
    /* 00534cb4: mov esp, ebp */ r_esp = r_ebp;
    /* 00534cb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534cb7: ret 4 */ FN_RET(0x00534ca0); r_esp += 8; return;
}

void f_005391d0(void) /* SlotMachineWildWheel::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005391d0);
    /* 005391d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005391d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005391d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005391d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005391d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005391da: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005391dd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005391e0: mov eax, dword ptr [eax + ecx*4 + 0x7320b0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7320b0u));
    /* 005391e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005391e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005391ea: ret 8 */ FN_RET(0x005391d0); r_esp += 12; return;
}

void f_005391f0(void) /* SlotMachineWildWheel::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005391f0);
    /* 005391f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005391f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005391f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005391f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005391f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005391fa: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005391fd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539200: mov eax, dword ptr [eax + ecx*4 + 0x731fa8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731fa8u));
    /* 00539207: mov esp, ebp */ r_esp = r_ebp;
    /* 00539209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053920a: ret 8 */ FN_RET(0x005391f0); r_esp += 12; return;
}

void f_00539210(void) /* SlotMachineWildWheel::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539210);
    /* 00539210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539211: mov ebp, esp */ r_ebp = r_esp;
    /* 00539213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539217: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053921a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053921d: mov eax, dword ptr [eax + 0x731b18] */ r_eax = R32((u32)(r_eax+0x731b18u));
    /* 00539223: mov esp, ebp */ r_esp = r_ebp;
    /* 00539225: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539226: ret 4 */ FN_RET(0x00539210); r_esp += 8; return;
}

void f_00539230(void) /* SlotMachineWildWheel::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539230);
    /* 00539230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539231: mov ebp, esp */ r_ebp = r_esp;
    /* 00539233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539237: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053923a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053923d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00539240: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539243: mov eax, dword ptr [eax + ecx*4 + 0x731a58] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731a58u));
    /* 0053924a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053924c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053924d: ret 8 */ FN_RET(0x00539230); r_esp += 12; return;
}

void f_00539250(void) /* SlotMachineWildWheel::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539250);
    /* 00539250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539251: mov ebp, esp */ r_ebp = r_esp;
    /* 00539253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539257: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0053925c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053925e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053925f: ret  */ FN_RET(0x00539250); r_esp += 4; return;
}

void f_00539260(void) /* SlotMachineWildWheel::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539260);
    /* 00539260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539261: mov ebp, esp */ r_ebp = r_esp;
    /* 00539263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539267: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053926a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053926d: add eax, 0x731af8 */ {  u32 a = r_eax; u32 b = 0x731af8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539272: mov esp, ebp */ r_esp = r_ebp;
    /* 00539274: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539275: ret 4 */ FN_RET(0x00539260); r_esp += 8; return;
}

