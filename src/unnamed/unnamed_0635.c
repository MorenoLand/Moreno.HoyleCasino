#include "protos.h"

void f_006352f0(void) /* sub_6352F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006352f0);
    /* 006352f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006352f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006352f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006352f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006352f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006352fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006352fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006352ff: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 00635305: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635307u); call_ind(t); }
    /* 00635307: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063530a: jne 0x635310 */ if (!fZ) goto L_00635310;
L_0063530c:; BB(0x0063530c);
    /* 0063530c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063530e: jmp 0x63532a */ goto L_0063532a;
L_00635310:; BB(0x00635310);
    /* 00635310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635313: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635318: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063531e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635320u); call_ind(t); }
    /* 00635320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635322: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635325: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00635328: mov eax, ecx */ r_eax = r_ecx;
L_0063532a:; BB(0x0063532a);
    /* 0063532a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063532c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063532d: ret 4 */ FN_RET(0x006352f0); r_esp += 8; return;
}

void f_00635cb0(void) /* sub_635CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635cb0);
    /* 00635cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00635cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635cb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635cba: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x635cbfu); f_005f3bf0();
    /* 00635cbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635cc1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635cc4: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00635cc7: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00635cc9: mov esp, ebp */ r_esp = r_ebp;
    /* 00635ccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635ccc: ret 4 */ FN_RET(0x00635cb0); r_esp += 8; return;
}

