#include "protos.h"

void f_00538fc0(void) /* SlotMachineColdCash::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538fc0);
    /* 00538fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538fc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538fca: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538fcd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538fd0: mov eax, dword ptr [eax + ecx*4 + 0x730ef8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730ef8u));
    /* 00538fd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538fd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538fda: ret 8 */ FN_RET(0x00538fc0); r_esp += 12; return;
}

void f_00538fe0(void) /* SlotMachineColdCash::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538fe0);
    /* 00538fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538fe7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538fea: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538fed: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538ff0: mov eax, dword ptr [eax + ecx*4 + 0x731000] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731000u));
    /* 00538ff7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ff9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538ffa: ret 8 */ FN_RET(0x00538fe0); r_esp += 12; return;
}

void f_00539000(void) /* SlotMachineColdCash::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539000);
    /* 00539000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539001: mov ebp, esp */ r_ebp = r_esp;
    /* 00539003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539007: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053900a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053900d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00539010: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539013: mov eax, dword ptr [eax + ecx*4 + 0x730b50] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730b50u));
    /* 0053901a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053901c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053901d: ret 8 */ FN_RET(0x00539000); r_esp += 12; return;
}

void f_00539020(void) /* SlotMachineColdCash::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539020);
    /* 00539020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539021: mov ebp, esp */ r_ebp = r_esp;
    /* 00539023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053902a: cmp dword ptr [eax + 4], 1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053902e: jne 0x53903e */ if (!fZ) goto L_0053903e;
L_00539030:; BB(0x00539030);
    /* 00539030: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539033: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539036: mov eax, dword ptr [ecx + 0x730bd0] */ r_eax = R32((u32)(r_ecx+0x730bd0u));
    /* 0053903c: jmp 0x539061 */ goto L_00539061;
L_0053903e:; BB(0x0053903e);
    /* 0053903e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539041: cmp dword ptr [edx + 4], 2 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539045: jne 0x539055 */ if (!fZ) goto L_00539055;
L_00539047:; BB(0x00539047);
    /* 00539047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053904a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053904d: mov eax, dword ptr [eax + 0x730c98] */ r_eax = R32((u32)(r_eax+0x730c98u));
    /* 00539053: jmp 0x539061 */ goto L_00539061;
L_00539055:; BB(0x00539055);
    /* 00539055: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539058: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053905b: mov eax, dword ptr [ecx + 0x730dd8] */ r_eax = R32((u32)(r_ecx+0x730dd8u));
L_00539061:; BB(0x00539061);
    /* 00539061: mov esp, ebp */ r_esp = r_ebp;
    /* 00539063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539064: ret 4 */ FN_RET(0x00539020); r_esp += 8; return;
}

void f_00539070(void) /* SlotMachineColdCash::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539070);
    /* 00539070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539071: mov ebp, esp */ r_ebp = r_esp;
    /* 00539073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539077: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053907a: cmp dword ptr [eax + 4], 1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053907e: jne 0x539087 */ if (!fZ) goto L_00539087;
L_00539080:; BB(0x00539080);
    /* 00539080: mov eax, 5 */ r_eax = 0x5u;
    /* 00539085: jmp 0x53909c */ goto L_0053909c;
L_00539087:; BB(0x00539087);
    /* 00539087: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053908a: cmp dword ptr [ecx + 4], 2 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053908e: jne 0x539097 */ if (!fZ) goto L_00539097;
L_00539090:; BB(0x00539090);
    /* 00539090: mov eax, 8 */ r_eax = 0x8u;
    /* 00539095: jmp 0x53909c */ goto L_0053909c;
L_00539097:; BB(0x00539097);
    /* 00539097: mov eax, 8 */ r_eax = 0x8u;
L_0053909c:; BB(0x0053909c);
    /* 0053909c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053909e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053909f: ret  */ FN_RET(0x00539070); r_esp += 4; return;
}

void f_005390a0(void) /* SlotMachineColdCash::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005390a0);
    /* 005390a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005390a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005390a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005390a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005390a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005390aa: cmp dword ptr [eax + 4], 1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005390ae: jne 0x5390bd */ if (!fZ) goto L_005390bd;
L_005390b0:; BB(0x005390b0);
    /* 005390b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005390b3: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005390b6: add eax, 0x730bb0 */ {  u32 a = r_eax; u32 b = 0x730bb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005390bb: jmp 0x5390de */ goto L_005390de;
L_005390bd:; BB(0x005390bd);
    /* 005390bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005390c0: cmp dword ptr [ecx + 4], 2 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005390c4: jne 0x5390d3 */ if (!fZ) goto L_005390d3;
L_005390c6:; BB(0x005390c6);
    /* 005390c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005390c9: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005390cc: add eax, 0x730c78 */ {  u32 a = r_eax; u32 b = 0x730c78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005390d1: jmp 0x5390de */ goto L_005390de;
L_005390d3:; BB(0x005390d3);
    /* 005390d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005390d6: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005390d9: add eax, 0x730db8 */ {  u32 a = r_eax; u32 b = 0x730db8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005390de:; BB(0x005390de);
    /* 005390de: mov esp, ebp */ r_esp = r_ebp;
    /* 005390e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005390e1: ret 4 */ FN_RET(0x005390a0); r_esp += 8; return;
}

void f_005390f0(void) /* SlotMachineColdCash::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005390f0);
    /* 005390f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005390f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005390f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005390f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005390f9: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 005390fe: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00539101: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539104: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539108: jne 0x539111 */ if (!fZ) goto L_00539111;
L_0053910a:; BB(0x0053910a);
    /* 0053910a: mov eax, 5 */ r_eax = 0x5u;
    /* 0053910f: jmp 0x539116 */ goto L_00539116;
L_00539111:; BB(0x00539111);
    /* 00539111: mov eax, 8 */ r_eax = 0x8u;
L_00539116:; BB(0x00539116);
    /* 00539116: mov esp, ebp */ r_esp = r_ebp;
    /* 00539118: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539119: ret  */ FN_RET(0x005390f0); r_esp += 4; return;
}

