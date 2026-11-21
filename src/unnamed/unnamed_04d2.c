#include "protos.h"

void f_004d22d0(void) /* sub_4D22D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d22d0);
    /* 004d22d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d22d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d22d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d22d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d22d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d22da: mov ax, word ptr [eax + 0x152] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x152u))) & 0xffffu);
    /* 004d22e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d22e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d22e4: ret  */ FN_RET(0x004d22d0); r_esp += 4; return;
}

void f_004d23e0(void) /* sub_4D23E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d23e0);
    /* 004d23e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d23e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d23e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d23e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d23e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d23ec: movsx ecx, word ptr [eax + 0x146] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x146u));
    /* 004d23f3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004d23f6: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004d23f9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004d23ff: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2402: ret  */ FN_RET(0x004d23e0); r_esp += 4; return;
}

void f_004d2960(void) /* sub_4D2960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2960);
    /* 004d2960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2961: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2967: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d296a: mov ax, word ptr [eax + 0x164] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x164u))) & 0xffffu);
    /* 004d2971: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2974: ret  */ FN_RET(0x004d2960); r_esp += 4; return;
}

void f_004d2980(void) /* sub_4D2980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2980);
    /* 004d2980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2981: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d298a: mov ax, word ptr [eax + 0x166] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x166u))) & 0xffffu);
    /* 004d2991: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2994: ret  */ FN_RET(0x004d2980); r_esp += 4; return;
}

void f_004d2a60(void) /* sub_4D2A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2a60);
    /* 004d2a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2a61: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2a67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2a6a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d2a6e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2a71: jne 0x4d2a83 */ if (!fZ) goto L_004d2a83;
L_004d2a73:; BB(0x004d2a73);
    /* 004d2a73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2a76: movsx eax, word ptr [edx + 0x16a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x16au));
    /* 004d2a7d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004d2a7f: jmp 0x4d2a8d */ goto L_004d2a8d;
L_004d2a83:; BB(0x004d2a83);
    /* 004d2a83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2a86: mov ax, word ptr [eax + 0x16a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x16au))) & 0xffffu);
L_004d2a8d:; BB(0x004d2a8d);
    /* 004d2a8d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2a90: ret  */ FN_RET(0x004d2a60); r_esp += 4; return;
}

void f_004d2aa0(void) /* sub_4D2AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2aa0);
    /* 004d2aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2aaa: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d2aae: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2ab1: jne 0x4d2ac6 */ if (!fZ) goto L_004d2ac6;
L_004d2ab3:; BB(0x004d2ab3);
    /* 004d2ab3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2ab6: movsx eax, word ptr [edx + 0x16c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x16cu));
    /* 004d2abd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004d2abe: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d2ac0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d2ac2: jmp 0x4d2ad0 */ goto L_004d2ad0;
L_004d2ac6:; BB(0x004d2ac6);
    /* 004d2ac6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2ac9: mov ax, word ptr [eax + 0x16c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x16cu))) & 0xffffu);
L_004d2ad0:; BB(0x004d2ad0);
    /* 004d2ad0: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2ad2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2ad3: ret  */ FN_RET(0x004d2aa0); r_esp += 4; return;
}

void f_004d2dd0(void) /* sub_4D2DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2dd0);
    /* 004d2dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2dd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2dda: mov ax, word ptr [eax + 0x15a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x15au))) & 0xffffu);
    /* 004d2de1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2de4: ret  */ FN_RET(0x004d2dd0); r_esp += 4; return;
}

void f_004d2ea0(void) /* sub_4D2EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2ea0);
    /* 004d2ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2eaa: mov ax, word ptr [eax + 0x16e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x16eu))) & 0xffffu);
    /* 004d2eb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2eb4: ret  */ FN_RET(0x004d2ea0); r_esp += 4; return;
}

void f_004d2ec0(void) /* sub_4D2EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2ec0);
    /* 004d2ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2ec7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2eca: mov ax, word ptr [eax + 0x170] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x170u))) & 0xffffu);
    /* 004d2ed1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2ed4: ret  */ FN_RET(0x004d2ec0); r_esp += 4; return;
}

void f_004d2ee0(void) /* sub_4D2EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2ee0);
    /* 004d2ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2ee7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2eea: mov ax, word ptr [eax + 0x172] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x172u))) & 0xffffu);
    /* 004d2ef1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2ef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2ef4: ret  */ FN_RET(0x004d2ee0); r_esp += 4; return;
}

void f_004d2f00(void) /* sub_4D2F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2f00);
    /* 004d2f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f01: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2f07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2f0a: mov ax, word ptr [eax + 0x174] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x174u))) & 0xffffu);
    /* 004d2f11: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2f13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2f14: ret  */ FN_RET(0x004d2f00); r_esp += 4; return;
}

void f_004d2f20(void) /* sub_4D2F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2f20);
    /* 004d2f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f21: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2f27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2f2a: mov ax, word ptr [eax + 0x176] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x176u))) & 0xffffu);
    /* 004d2f31: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2f34: ret  */ FN_RET(0x004d2f20); r_esp += 4; return;
}

void f_004d2f40(void) /* sub_4D2F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2f40);
    /* 004d2f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f41: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2f47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2f4a: mov ax, word ptr [eax + 0x178] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x178u))) & 0xffffu);
    /* 004d2f51: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2f54: ret  */ FN_RET(0x004d2f40); r_esp += 4; return;
}

void f_004d2f60(void) /* sub_4D2F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d2f60);
    /* 004d2f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f61: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d2f67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d2f6a: mov ax, word ptr [eax + 0x17a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x17au))) & 0xffffu);
    /* 004d2f71: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2f73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2f74: ret  */ FN_RET(0x004d2f60); r_esp += 4; return;
}

