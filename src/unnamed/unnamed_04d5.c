#include "protos.h"

void f_004d5010(void) /* sub_4D5010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5010);
    /* 004d5010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5011: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5013: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d5016: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5019: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d501c: movsx ecx, word ptr [eax + 0x180] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x180u));
    /* 004d5023: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004d5026: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004d5029: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004d502f: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5032: ret  */ FN_RET(0x004d5010); r_esp += 4; return;
}

void f_004d5590(void) /* sub_4D5590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5590);
    /* 004d5590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5591: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d559a: mov ax, word ptr [eax + 0x19e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x19eu))) & 0xffffu);
    /* 004d55a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d55a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d55a4: ret  */ FN_RET(0x004d5590); r_esp += 4; return;
}

void f_004d55b0(void) /* sub_4D55B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d55b0);
    /* 004d55b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d55b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d55b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d55b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d55b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d55ba: mov ax, word ptr [eax + 0x1a0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1a0u))) & 0xffffu);
    /* 004d55c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d55c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d55c4: ret  */ FN_RET(0x004d55b0); r_esp += 4; return;
}

void f_004d5690(void) /* sub_4D5690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5690);
    /* 004d5690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5691: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5697: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d569a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d569e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d56a1: jne 0x4d56b3 */ if (!fZ) goto L_004d56b3;
L_004d56a3:; BB(0x004d56a3);
    /* 004d56a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d56a6: movsx eax, word ptr [edx + 0x1a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1a4u));
    /* 004d56ad: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004d56af: jmp 0x4d56bd */ goto L_004d56bd;
L_004d56b3:; BB(0x004d56b3);
    /* 004d56b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d56b6: mov ax, word ptr [eax + 0x1a4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1a4u))) & 0xffffu);
L_004d56bd:; BB(0x004d56bd);
    /* 004d56bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004d56bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d56c0: ret  */ FN_RET(0x004d5690); r_esp += 4; return;
}

void f_004d56d0(void) /* sub_4D56D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d56d0);
    /* 004d56d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d56d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d56d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d56d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d56d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d56da: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d56de: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d56e1: jne 0x4d56f6 */ if (!fZ) goto L_004d56f6;
L_004d56e3:; BB(0x004d56e3);
    /* 004d56e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d56e6: movsx eax, word ptr [edx + 0x1a6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1a6u));
    /* 004d56ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004d56ee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d56f0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d56f2: jmp 0x4d5700 */ goto L_004d5700;
L_004d56f6:; BB(0x004d56f6);
    /* 004d56f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d56f9: mov ax, word ptr [eax + 0x1a6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1a6u))) & 0xffffu);
L_004d5700:; BB(0x004d5700);
    /* 004d5700: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5703: ret  */ FN_RET(0x004d56d0); r_esp += 4; return;
}

void f_004d5ad0(void) /* sub_4D5AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5ad0);
    /* 004d5ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5ada: mov ax, word ptr [eax + 0x1a8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1a8u))) & 0xffffu);
    /* 004d5ae1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5ae3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5ae4: ret  */ FN_RET(0x004d5ad0); r_esp += 4; return;
}

void f_004d5af0(void) /* sub_4D5AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5af0);
    /* 004d5af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5af1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5af7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5afa: mov ax, word ptr [eax + 0x1aa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1aau))) & 0xffffu);
    /* 004d5b01: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b04: ret  */ FN_RET(0x004d5af0); r_esp += 4; return;
}

void f_004d5b10(void) /* sub_4D5B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5b10);
    /* 004d5b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b11: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5b1a: mov ax, word ptr [eax + 0x1ac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1acu))) & 0xffffu);
    /* 004d5b21: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b24: ret  */ FN_RET(0x004d5b10); r_esp += 4; return;
}

void f_004d5b30(void) /* sub_4D5B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5b30);
    /* 004d5b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b31: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5b37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5b3a: mov ax, word ptr [eax + 0x1ae] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1aeu))) & 0xffffu);
    /* 004d5b41: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b44: ret  */ FN_RET(0x004d5b30); r_esp += 4; return;
}

void f_004d5b50(void) /* sub_4D5B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5b50);
    /* 004d5b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b51: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5b57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5b5a: mov ax, word ptr [eax + 0x1b0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1b0u))) & 0xffffu);
    /* 004d5b61: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b64: ret  */ FN_RET(0x004d5b50); r_esp += 4; return;
}

void f_004d5b70(void) /* sub_4D5B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5b70);
    /* 004d5b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b71: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5b77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5b7a: mov ax, word ptr [eax + 0x1b2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1b2u))) & 0xffffu);
    /* 004d5b81: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5b84: ret  */ FN_RET(0x004d5b70); r_esp += 4; return;
}

void f_004d5b90(void) /* sub_4D5B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5b90);
    /* 004d5b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b91: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5b9a: mov ax, word ptr [eax + 0x1b4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1b4u))) & 0xffffu);
    /* 004d5ba1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5ba4: ret  */ FN_RET(0x004d5b90); r_esp += 4; return;
}

void f_004d5bb0(void) /* sub_4D5BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5bb0);
    /* 004d5bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d5bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d5bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d5bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d5bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d5bba: mov ax, word ptr [eax + 0x1b6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1b6u))) & 0xffffu);
    /* 004d5bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d5bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d5bc4: ret  */ FN_RET(0x004d5bb0); r_esp += 4; return;
}

