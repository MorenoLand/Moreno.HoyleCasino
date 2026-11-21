#include "protos.h"

void f_0058d6e0(void) /* KenoSpecialBetCheckBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d6e0);
    /* 0058d6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d6e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058d6ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d6eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d6ee: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x58d6f3u); f_005f4d00();
    /* 0058d6f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d6f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d6f6: ret 4 */ FN_RET(0x0058d6e0); r_esp += 8; return;
}

void f_0058d700(void) /* KenoSpecialBetCheckBox::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d700);
    /* 0058d700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d701: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d70a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x58d70fu); f_00600230();
    /* 0058d70f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058d712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d714: je 0x58d72b */ if (fZ) goto L_0058d72b;
L_0058d716:; BB(0x0058d716);
    /* 0058d716: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d718: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058d71e: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058d724: call 0x585c90 */ r_esp -= 4; W32(r_esp, 0x58d729u); f_00585c90();
    /* 0058d729: jmp 0x58d73e */ goto L_0058d73e;
L_0058d72b:; BB(0x0058d72b);
    /* 0058d72b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d72d: mov edx, dword ptr [0x793584] */ r_edx = R32((u32)(0x793584u));
    /* 0058d733: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 0058d739: call 0x585c90 */ r_esp -= 4; W32(r_esp, 0x58d73eu); f_00585c90();
L_0058d73e:; BB(0x0058d73e);
    /* 0058d73e: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d740: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d741: ret  */ FN_RET(0x0058d700); r_esp += 4; return;
}

