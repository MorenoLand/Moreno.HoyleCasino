#include "protos.h"

void f_005ceb60(void) /* TournamentStatusDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceb60);
    /* 005ceb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb61: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb65: push 0x6a8c51 */ { u32 v = 0x6a8c51u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ceb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ceb77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ceb79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ceb7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ceb83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ceb86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceb8d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5ceb92u); f_005f71f0();
    /* 005ceb92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ceb99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceb9c: mov dword ptr [eax], 0x6d2e6c */ W32((u32)(r_eax), 0x6d2e6cu);
    /* 005ceba2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceba4: push 0x4e4 */ { u32 v = 0x4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceba9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cebac: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cebb1u); f_005f83d0();
    /* 005cebb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cebb8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cebbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cebbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cebc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cebc6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cebc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cebc9: ret  */ FN_RET(0x005ceb60); r_esp += 4; return;
}

void f_005cebf0(void) /* TournamentStatusDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cebf0);
    /* 005cebf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cebf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cebf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cebf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cebf7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cebf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cebfb: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cebfd: push 0x6b3194 */ { u32 v = 0x6b3194u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cec07u); f_00630f40();
    /* 005cec07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cec0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cec0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cec0e: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5cec13u); f_005f73e0();
    /* 005cec13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cec15: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec19: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec1b: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec1d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec1f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cec21: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec23: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cec2f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cec34u); f_005fa5b0();
    /* 005cec34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cec37: call 0x5cec40 */ r_esp -= 4; W32(r_esp, 0x5cec3cu); f_005cec40();
    /* 005cec3c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cec3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cec3f: ret  */ FN_RET(0x005cebf0); r_esp += 4; return;
}

