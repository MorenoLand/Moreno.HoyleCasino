#include "protos.h"

void f_00654820(void) /* StatisticsPlayersListBoxItem::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654820);
    /* 00654820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654821: mov ebp, esp */ r_ebp = r_esp;
    /* 00654823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654825: push 0x6ac515 */ { u32 v = 0x6ac515u; r_esp -= 4; W32(r_esp, v); }
    /* 0065482a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654831: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654834: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00654839: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065483b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065483c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065483f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00654845: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00654848: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065484b: mov dword ptr [eax], 0x6dd584 */ W32((u32)(r_eax), 0x6dd584u);
    /* 00654851: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654858: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065485b: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065485f: je 0x654876 */ if (fZ) goto L_00654876;
L_00654861:; BB(0x00654861);
    /* 00654861: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654864: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00654867: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065486a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065486d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065486e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x654873u); f_00686cae();
    /* 00654873: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00654876:; BB(0x00654876);
    /* 00654876: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065487d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654880: call 0x629b00 */ r_esp -= 4; W32(r_esp, 0x654885u); f_00629b00();
    /* 00654885: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654888: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065488f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00654890: mov esp, ebp */ r_esp = r_ebp;
    /* 00654892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654893: ret  */ FN_RET(0x00654820); r_esp += 4; return;
}

