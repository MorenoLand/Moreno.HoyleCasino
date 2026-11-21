#include "protos.h"

void f_0066aa20(void) /* SituationListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aa20);
    /* 0066aa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa21: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aa23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066aa27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066aa2a: call 0x615ef0 */ r_esp -= 4; W32(r_esp, 0x66aa2fu); f_00615ef0();
    /* 0066aa2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066aa32: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0066aa38: call 0x669f10 */ r_esp -= 4; W32(r_esp, 0x66aa3du); f_00669f10();
    /* 0066aa3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066aa3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066aa40: ret  */ FN_RET(0x0066aa20); r_esp += 4; return;
}

void f_0066ac60(void) /* SituationListBox::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ac60);
    /* 0066ac60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac61: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ac63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066ac67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac6a: mov dword ptr [eax], 0x6e013c */ W32((u32)(r_eax), 0x6e013cu);
    /* 0066ac70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac73: call 0x628220 */ r_esp -= 4; W32(r_esp, 0x66ac78u); f_00628220();
    /* 0066ac78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066ac7b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066ac7e: je 0x66ac8c */ if (fZ) goto L_0066ac8c;
L_0066ac80:; BB(0x0066ac80);
    /* 0066ac80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac84: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66ac89u); f_00686cae();
    /* 0066ac89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ac8c:; BB(0x0066ac8c);
    /* 0066ac8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac8f: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ac91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ac92: ret 4 */ FN_RET(0x0066ac60); r_esp += 8; return;
}

