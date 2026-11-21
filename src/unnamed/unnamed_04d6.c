#include "protos.h"

void f_004d66f0(void) /* sub_4D66F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d66f0);
    /* 004d66f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d66f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d66f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d66f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d66f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d66fc: movsx ecx, word ptr [eax + 0x1ba] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bau));
    /* 004d6703: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004d6706: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004d6709: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004d670f: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6712: ret  */ FN_RET(0x004d66f0); r_esp += 4; return;
}

void f_004d6c70(void) /* sub_4D6C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d6c70);
    /* 004d6c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c71: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d6c77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6c7a: mov ax, word ptr [eax + 0x1d8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1d8u))) & 0xffffu);
    /* 004d6c81: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6c83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6c84: ret  */ FN_RET(0x004d6c70); r_esp += 4; return;
}

void f_004d6c90(void) /* sub_4D6C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d6c90);
    /* 004d6c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c91: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d6c97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6c9a: mov ax, word ptr [eax + 0x1da] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1dau))) & 0xffffu);
    /* 004d6ca1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6ca3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6ca4: ret  */ FN_RET(0x004d6c90); r_esp += 4; return;
}

void f_004d6d70(void) /* sub_4D6D70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d6d70);
    /* 004d6d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6d71: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d6d77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6d7a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d6d7e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6d81: jne 0x4d6d93 */ if (!fZ) goto L_004d6d93;
L_004d6d83:; BB(0x004d6d83);
    /* 004d6d83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6d86: movsx eax, word ptr [edx + 0x1de] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1deu));
    /* 004d6d8d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004d6d8f: jmp 0x4d6d9d */ goto L_004d6d9d;
L_004d6d93:; BB(0x004d6d93);
    /* 004d6d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6d96: mov ax, word ptr [eax + 0x1de] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1deu))) & 0xffffu);
L_004d6d9d:; BB(0x004d6d9d);
    /* 004d6d9d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6da0: ret  */ FN_RET(0x004d6d70); r_esp += 4; return;
}

void f_004d6db0(void) /* sub_4D6DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d6db0);
    /* 004d6db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6db1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d6db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6dba: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d6dbe: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6dc1: jne 0x4d6dd6 */ if (!fZ) goto L_004d6dd6;
L_004d6dc3:; BB(0x004d6dc3);
    /* 004d6dc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6dc6: movsx eax, word ptr [edx + 0x1e0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1e0u));
    /* 004d6dcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004d6dce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d6dd0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d6dd2: jmp 0x4d6de0 */ goto L_004d6de0;
L_004d6dd6:; BB(0x004d6dd6);
    /* 004d6dd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d6dd9: mov ax, word ptr [eax + 0x1e0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1e0u))) & 0xffffu);
L_004d6de0:; BB(0x004d6de0);
    /* 004d6de0: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6de2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6de3: ret  */ FN_RET(0x004d6db0); r_esp += 4; return;
}

