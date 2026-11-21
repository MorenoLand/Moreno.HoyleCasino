#include "protos.h"

void f_004e0390(void) /* sub_4E0390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e0390);
    /* 004e0390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e0391: mov ebp, esp */ r_ebp = r_esp;
    /* 004e0393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e0394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e0397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e039a: mov ax, word ptr [eax + 0x23a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x23au))) & 0xffffu);
    /* 004e03a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004e03a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e03a4: ret  */ FN_RET(0x004e0390); r_esp += 4; return;
}

void f_004e03b0(void) /* sub_4E03B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e03b0);
    /* 004e03b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e03b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e03b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e03b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e03b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e03ba: mov ax, word ptr [eax + 0x23c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x23cu))) & 0xffffu);
    /* 004e03c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004e03c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e03c4: ret  */ FN_RET(0x004e03b0); r_esp += 4; return;
}

void f_004e0490(void) /* sub_4E0490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e0490);
    /* 004e0490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e0491: mov ebp, esp */ r_ebp = r_esp;
    /* 004e0493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e0494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e0497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e049a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004e049e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e04a1: jne 0x4e04b3 */ if (!fZ) goto L_004e04b3;
L_004e04a3:; BB(0x004e04a3);
    /* 004e04a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e04a6: movsx eax, word ptr [edx + 0x240] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x240u));
    /* 004e04ad: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004e04af: jmp 0x4e04bd */ goto L_004e04bd;
L_004e04b3:; BB(0x004e04b3);
    /* 004e04b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e04b6: mov ax, word ptr [eax + 0x240] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x240u))) & 0xffffu);
L_004e04bd:; BB(0x004e04bd);
    /* 004e04bd: mov esp, ebp */ r_esp = r_ebp;
    /* 004e04bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e04c0: ret  */ FN_RET(0x004e0490); r_esp += 4; return;
}

void f_004e04d0(void) /* sub_4E04D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004e04d0);
    /* 004e04d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e04d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004e04d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e04d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004e04d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e04da: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004e04de: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e04e1: jne 0x4e04f6 */ if (!fZ) goto L_004e04f6;
L_004e04e3:; BB(0x004e04e3);
    /* 004e04e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e04e6: movsx eax, word ptr [edx + 0x242] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x242u));
    /* 004e04ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004e04ee: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e04f0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004e04f2: jmp 0x4e0500 */ goto L_004e0500;
L_004e04f6:; BB(0x004e04f6);
    /* 004e04f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004e04f9: mov ax, word ptr [eax + 0x242] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x242u))) & 0xffffu);
L_004e0500:; BB(0x004e0500);
    /* 004e0500: mov esp, ebp */ r_esp = r_ebp;
    /* 004e0502: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e0503: ret  */ FN_RET(0x004e04d0); r_esp += 4; return;
}

