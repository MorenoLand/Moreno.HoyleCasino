#include "protos.h"

void f_004f0500(void) /* sub_4F0500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0500);
    /* 004f0500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0501: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0506: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0509: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f050c: movsx ecx, word ptr [eax + 0x3a2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004f0513: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f0516: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f0519: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f051f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0522: ret  */ FN_RET(0x004f0500); r_esp += 4; return;
}

void f_004f0a80(void) /* sub_4F0A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0a80);
    /* 004f0a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0a87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0a8a: mov ax, word ptr [eax + 0x3c0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3c0u))) & 0xffffu);
    /* 004f0a91: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0a94: ret  */ FN_RET(0x004f0a80); r_esp += 4; return;
}

void f_004f0aa0(void) /* sub_4F0AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0aa0);
    /* 004f0aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0aaa: mov ax, word ptr [eax + 0x3c2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3c2u))) & 0xffffu);
    /* 004f0ab1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0ab4: ret  */ FN_RET(0x004f0aa0); r_esp += 4; return;
}

void f_004f0b80(void) /* sub_4F0B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0b80);
    /* 004f0b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0b87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b8a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0b8e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0b91: jne 0x4f0ba3 */ if (!fZ) goto L_004f0ba3;
L_004f0b93:; BB(0x004f0b93);
    /* 004f0b93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b96: movsx eax, word ptr [edx + 0x3c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3c6u));
    /* 004f0b9d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f0b9f: jmp 0x4f0bad */ goto L_004f0bad;
L_004f0ba3:; BB(0x004f0ba3);
    /* 004f0ba3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0ba6: mov ax, word ptr [eax + 0x3c6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3c6u))) & 0xffffu);
L_004f0bad:; BB(0x004f0bad);
    /* 004f0bad: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0bb0: ret  */ FN_RET(0x004f0b80); r_esp += 4; return;
}

void f_004f0bc0(void) /* sub_4F0BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0bc0);
    /* 004f0bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0bc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0bca: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0bce: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0bd1: jne 0x4f0be6 */ if (!fZ) goto L_004f0be6;
L_004f0bd3:; BB(0x004f0bd3);
    /* 004f0bd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0bd6: movsx eax, word ptr [edx + 0x3c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3c8u));
    /* 004f0bdd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f0bde: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f0be0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f0be2: jmp 0x4f0bf0 */ goto L_004f0bf0;
L_004f0be6:; BB(0x004f0be6);
    /* 004f0be6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0be9: mov ax, word ptr [eax + 0x3c8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3c8u))) & 0xffffu);
L_004f0bf0:; BB(0x004f0bf0);
    /* 004f0bf0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0bf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0bf3: ret  */ FN_RET(0x004f0bc0); r_esp += 4; return;
}

