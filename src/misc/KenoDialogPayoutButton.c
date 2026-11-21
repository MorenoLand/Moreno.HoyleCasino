#include "protos.h"

void f_0058b0c0(void) /* KenoDialogPayoutButton::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058b0c0);
    /* 0058b0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058b0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058b0c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058b0ca: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0058b0ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b0d0: je 0x58b0d4 */ if (fZ) goto L_0058b0d4;
L_0058b0d2:; BB(0x0058b0d2);
    /* 0058b0d2: jmp 0x58b12c */ goto L_0058b12c;
L_0058b0d4:; BB(0x0058b0d4);
    /* 0058b0d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058b0d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058b0d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b0db: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x58b0e0u); f_005f56a0();
    /* 0058b0e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058b0e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b0e5: je 0x58b0fb */ if (fZ) goto L_0058b0fb;
L_0058b0e7:; BB(0x0058b0e7);
    /* 0058b0e7: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058b0ed: call 0x58a570 */ r_esp -= 4; W32(r_esp, 0x58b0f2u); f_0058a570();
    /* 0058b0f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058b0f5: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0058b0f9: jmp 0x58b12c */ goto L_0058b12c;
L_0058b0fb:; BB(0x0058b0fb);
    /* 0058b0fb: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058b101: cmp dword ptr [edx + 0x3b70], 0 */ {  u32 a = R32((u32)(r_edx+0x3b70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b108: je 0x58b12c */ if (fZ) goto L_0058b12c;
L_0058b10a:; BB(0x0058b10a);
    /* 0058b10a: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058b10f: mov ecx, dword ptr [eax + 0x3b70] */ r_ecx = R32((u32)(r_eax+0x3b70u));
    /* 0058b115: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x58b11au); f_005f54a0();
    /* 0058b11a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058b11d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b11f: je 0x58b12c */ if (fZ) goto L_0058b12c;
L_0058b121:; BB(0x0058b121);
    /* 0058b121: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058b127: call 0x58a600 */ r_esp -= 4; W32(r_esp, 0x58b12cu); f_0058a600();
L_0058b12c:; BB(0x0058b12c);
    /* 0058b12c: mov esp, ebp */ r_esp = r_ebp;
    /* 0058b12e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058b12f: ret 4 */ FN_RET(0x0058b0c0); r_esp += 8; return;
}

