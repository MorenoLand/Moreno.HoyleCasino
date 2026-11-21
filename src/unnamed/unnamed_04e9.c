#include "protos.h"

void f_004e9480(void) /* sub_4E9480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e9480);
    /* 004e9480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9481: mov ebp, esp */ r_ebp = r_esp;
    /* 004e9483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e9486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e9489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e948c: movsx ecx, word ptr [eax + 0x28c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x28cu));
    /* 004e9493: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004e9496: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004e9499: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004e949f: mov esp, ebp */ r_esp = r_ebp;
    /* 004e94a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e94a2: ret  */ FN_RET(0x004e9480); r_esp += 4; return;
}

void f_004e9ce0(void) /* sub_4E9CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e9ce0);
    /* 004e9ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e9ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e9ce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9cea: mov ax, word ptr [eax + 0x2b0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x2b0u))) & 0xffffu);
    /* 004e9cf1: mov esp, ebp */ r_esp = r_ebp;
    /* 004e9cf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9cf4: ret  */ FN_RET(0x004e9ce0); r_esp += 4; return;
}

void f_004e9d00(void) /* sub_4E9D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e9d00);
    /* 004e9d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d01: mov ebp, esp */ r_ebp = r_esp;
    /* 004e9d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e9d07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9d0a: mov ax, word ptr [eax + 0x2b2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x2b2u))) & 0xffffu);
    /* 004e9d11: mov esp, ebp */ r_esp = r_ebp;
    /* 004e9d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9d14: ret  */ FN_RET(0x004e9d00); r_esp += 4; return;
}

void f_004e9de0(void) /* sub_4E9DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e9de0);
    /* 004e9de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9de1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e9de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e9de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9dea: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004e9dee: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9df1: jne 0x4e9e03 */ if (!fZ) goto L_004e9e03;
L_004e9df3:; BB(0x004e9df3);
    /* 004e9df3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9df6: movsx eax, word ptr [edx + 0x2b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b6u));
    /* 004e9dfd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004e9dff: jmp 0x4e9e0d */ goto L_004e9e0d;
L_004e9e03:; BB(0x004e9e03);
    /* 004e9e03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9e06: mov ax, word ptr [eax + 0x2b6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x2b6u))) & 0xffffu);
L_004e9e0d:; BB(0x004e9e0d);
    /* 004e9e0d: mov esp, ebp */ r_esp = r_ebp;
    /* 004e9e0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9e10: ret  */ FN_RET(0x004e9de0); r_esp += 4; return;
}

void f_004e9e20(void) /* sub_4E9E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e9e20);
    /* 004e9e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e21: mov ebp, esp */ r_ebp = r_esp;
    /* 004e9e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e9e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e9e27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9e2a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004e9e2e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9e31: jne 0x4e9e4a */ if (!fZ) goto L_004e9e4a;
L_004e9e33:; BB(0x004e9e33);
    /* 004e9e33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9e36: movsx eax, word ptr [edx + 0x2b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2b8u));
    /* 004e9e3d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004e9e3e: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004e9e41: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e9e43: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e9e46: jmp 0x4e9e59 */ goto L_004e9e59;
L_004e9e4a:; BB(0x004e9e4a);
    /* 004e9e4a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e9e4d: movsx eax, word ptr [eax + 0x2b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2b8u));
    /* 004e9e54: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004e9e55: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e9e57: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_004e9e59:; BB(0x004e9e59);
    /* 004e9e59: mov esp, ebp */ r_esp = r_ebp;
    /* 004e9e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e9e5c: ret  */ FN_RET(0x004e9e20); r_esp += 4; return;
}

