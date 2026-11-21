#include "protos.h"

void f_004d9000(void) /* sub_4D9000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d9000);
    /* 004d9000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9001: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d9007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d900a: mov ax, word ptr [eax + 0x204] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x204u))) & 0xffffu);
    /* 004d9011: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9013: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9014: ret  */ FN_RET(0x004d9000); r_esp += 4; return;
}

void f_004d9020(void) /* sub_4D9020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d9020);
    /* 004d9020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9021: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d9027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d902a: mov ax, word ptr [eax + 0x206] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x206u))) & 0xffffu);
    /* 004d9031: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9034: ret  */ FN_RET(0x004d9020); r_esp += 4; return;
}

void f_004d9100(void) /* sub_4D9100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d9100);
    /* 004d9100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9101: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d9107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d910a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d910e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9111: jne 0x4d9123 */ if (!fZ) goto L_004d9123;
L_004d9113:; BB(0x004d9113);
    /* 004d9113: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d9116: movsx eax, word ptr [edx + 0x20a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20au));
    /* 004d911d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004d911f: jmp 0x4d912d */ goto L_004d912d;
L_004d9123:; BB(0x004d9123);
    /* 004d9123: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d9126: mov ax, word ptr [eax + 0x20a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x20au))) & 0xffffu);
L_004d912d:; BB(0x004d912d);
    /* 004d912d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d912f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9130: ret  */ FN_RET(0x004d9100); r_esp += 4; return;
}

void f_004d9140(void) /* sub_4D9140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d9140);
    /* 004d9140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9141: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d9147: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d914a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004d914e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d9151: jne 0x4d9166 */ if (!fZ) goto L_004d9166;
L_004d9153:; BB(0x004d9153);
    /* 004d9153: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d9156: movsx eax, word ptr [edx + 0x20c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20cu));
    /* 004d915d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004d915e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004d9160: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d9162: jmp 0x4d9170 */ goto L_004d9170;
L_004d9166:; BB(0x004d9166);
    /* 004d9166: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d9169: mov ax, word ptr [eax + 0x20c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x20cu))) & 0xffffu);
L_004d9170:; BB(0x004d9170);
    /* 004d9170: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9172: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9173: ret  */ FN_RET(0x004d9140); r_esp += 4; return;
}

void f_004d9e60(void) /* sub_4D9E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d9e60);
    /* 004d9e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e61: mov ebp, esp */ r_ebp = r_esp;
    /* 004d9e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d9e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d9e67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d9e6a: mov ax, word ptr [eax + 0x1f2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1f2u))) & 0xffffu);
    /* 004d9e71: mov esp, ebp */ r_esp = r_ebp;
    /* 004d9e73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d9e74: ret  */ FN_RET(0x004d9e60); r_esp += 4; return;
}

