#include "protos.h"

void f_004ec020(void) /* sub_4EC020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec020);
    /* 004ec020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec021: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec02a: mov ax, word ptr [eax + 0x364] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x364u))) & 0xffffu);
    /* 004ec031: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec034: ret  */ FN_RET(0x004ec020); r_esp += 4; return;
}

void f_004ec040(void) /* sub_4EC040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec040);
    /* 004ec040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec041: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec04a: mov ax, word ptr [eax + 0x366] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x366u))) & 0xffffu);
    /* 004ec051: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec053: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec054: ret  */ FN_RET(0x004ec040); r_esp += 4; return;
}

void f_004ec120(void) /* sub_4EC120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec120);
    /* 004ec120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec121: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec127: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec12a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec12e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec131: jne 0x4ec143 */ if (!fZ) goto L_004ec143;
L_004ec133:; BB(0x004ec133);
    /* 004ec133: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec136: movsx eax, word ptr [edx + 0x36a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x36au));
    /* 004ec13d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ec13f: jmp 0x4ec14d */ goto L_004ec14d;
L_004ec143:; BB(0x004ec143);
    /* 004ec143: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec146: mov ax, word ptr [eax + 0x36a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x36au))) & 0xffffu);
L_004ec14d:; BB(0x004ec14d);
    /* 004ec14d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec14f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec150: ret  */ FN_RET(0x004ec120); r_esp += 4; return;
}

void f_004ec160(void) /* sub_4EC160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec160);
    /* 004ec160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec161: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec16a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec16e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec171: jne 0x4ec186 */ if (!fZ) goto L_004ec186;
L_004ec173:; BB(0x004ec173);
    /* 004ec173: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec176: movsx eax, word ptr [edx + 0x36c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x36cu));
    /* 004ec17d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ec17e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ec180: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ec182: jmp 0x4ec190 */ goto L_004ec190;
L_004ec186:; BB(0x004ec186);
    /* 004ec186: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec189: mov ax, word ptr [eax + 0x36c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x36cu))) & 0xffffu);
L_004ec190:; BB(0x004ec190);
    /* 004ec190: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec193: ret  */ FN_RET(0x004ec160); r_esp += 4; return;
}

void f_004ece80(void) /* sub_4ECE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ece80);
    /* 004ece80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ece81: mov ebp, esp */ r_ebp = r_esp;
    /* 004ece83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ece84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ece87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ece8a: mov ax, word ptr [eax + 0x352] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x352u))) & 0xffffu);
    /* 004ece91: mov esp, ebp */ r_esp = r_ebp;
    /* 004ece93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ece94: ret  */ FN_RET(0x004ece80); r_esp += 4; return;
}

