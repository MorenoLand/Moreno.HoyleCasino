#include "protos.h"

void f_00673cb0(void) /* savegamedialog::func_00673cb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673cb0);
    /* 00673cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00673cb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673cb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00673cb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673cbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673cbe: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673cc3u); f_005fb720();
    /* 00673cc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00673cc5: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x673ccau); f_005e4390();
    /* 00673cca: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00673ccd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00673cd0: je 0x673ce1 */ if (fZ) goto L_00673ce1;
L_00673cd2:; BB(0x00673cd2);
    /* 00673cd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673cd5: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00673cd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673cda: je 0x673ce1 */ if (fZ) goto L_00673ce1;
L_00673cdc:; BB(0x00673cdc);
    /* 00673cdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673cdf: jmp 0x673d01 */ goto L_00673d01;
L_00673ce1:; BB(0x00673ce1);
    /* 00673ce1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00673ce3: jne 0x673cfc */ if (!fZ) goto L_00673cfc;
L_00673ce5:; BB(0x00673ce5);
    /* 00673ce5: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 00673cea: push 0x6e16c4 */ { u32 v = 0x6e16c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673cef: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00673cf4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x673cf9u); f_005e9f20();
    /* 00673cf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00673cfc:; BB(0x00673cfc);
    /* 00673cfc: mov eax, 0x6e16c0 */ r_eax = 0x6e16c0u;
L_00673d01:; BB(0x00673d01);
    /* 00673d01: mov esp, ebp */ r_esp = r_ebp;
    /* 00673d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673d04: ret  */ FN_RET(0x00673cb0); r_esp += 4; return;
}

