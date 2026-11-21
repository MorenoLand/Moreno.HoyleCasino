#include "protos.h"

void f_0045a680(void) /* sub_45A680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a680);
    /* 0045a680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a681: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a683: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a686: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a689: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045a68f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x45a694u); f_00637630();
    /* 0045a694: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045a697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a699: je 0x45a6cb */ if (fZ) goto L_0045a6cb;
L_0045a69b:; BB(0x0045a69b);
    /* 0045a69b: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 0045a6a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6a4: jne 0x45a6cb */ if (!fZ) goto L_0045a6cb;
L_0045a6a6:; BB(0x0045a6a6);
    /* 0045a6a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a6a9: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 0045a6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6af: jne 0x45a6cb */ if (!fZ) goto L_0045a6cb;
L_0045a6b1:; BB(0x0045a6b1);
    /* 0045a6b1: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045a6b7: movzx edx, byte ptr [ecx + 0x116] */ r_edx = (u32)R8((u32)(r_ecx+0x116u));
    /* 0045a6be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6c0: jne 0x45a6cb */ if (!fZ) goto L_0045a6cb;
L_0045a6c2:; BB(0x0045a6c2);
    /* 0045a6c2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0045a6c9: jmp 0x45a6d2 */ goto L_0045a6d2;
L_0045a6cb:; BB(0x0045a6cb);
    /* 0045a6cb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0045a6d2:; BB(0x0045a6d2);
    /* 0045a6d2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0045a6d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a6d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a6d8: ret  */ FN_RET(0x0045a680); r_esp += 4; return;
}

