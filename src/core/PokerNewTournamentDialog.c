#include "protos.h"

void f_0051afc0(void) /* PokerNewTournamentDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051afc0);
    /* 0051afc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051afc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051afc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051afc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051afc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051afc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051afcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051afce: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51afd3u); f_005f71f0();
    /* 0051afd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051afd6: mov dword ptr [eax], 0x6c1e3c */ W32((u32)(r_eax), 0x6c1e3cu);
    /* 0051afdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051afdf: mov dword ptr [ecx + 0x1bc], 0xffffffff */ W32((u32)(r_ecx+0x1bcu), 0xffffffffu);
    /* 0051afe9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051afec: mov dword ptr [edx + 0x1c0], 0 */ W32((u32)(r_edx+0x1c0u), 0x0u);
    /* 0051aff6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051aff9: mov esp, ebp */ r_esp = r_ebp;
    /* 0051affb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051affc: ret  */ FN_RET(0x0051afc0); r_esp += 4; return;
}

void f_0051b050(void) /* PokerNewTournamentDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051b050);
    /* 0051b050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051b051: mov ebp, esp */ r_ebp = r_esp;
    /* 0051b053: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051b059: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051b05e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051b060: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051b063: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0051b069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b06b: push 0x30e7ef */ { u32 v = 0x30e7efu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b070: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b076: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51b07bu); f_005f83d0();
    /* 0051b07b: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b081: mov byte ptr [eax + 0x1b8], 1 */ W8((u32)(r_eax+0x1b8u), 0x1u);
    /* 0051b088: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0051b08f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b091: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b093: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b095: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b097: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b099: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b09e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b0a3u); f_00630f40();
    /* 0051b0a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b0a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b0ac: add ecx, 0x1a1 */ {  u32 a = r_ecx; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b0b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0b3: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0b8: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0c1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b0c7: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b0ccu); f_005f9de0();
    /* 0051b0cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0d0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0d2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0d4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0d6: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b0e0u); f_00630f40();
    /* 0051b0e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b0e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0e4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b0e9: add edx, 0x1a1 */ {  u32 a = r_edx; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b0ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0f0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0f2: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b0fb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b101: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b106u); f_005f9de0();
    /* 0051b106: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b108: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b10a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b10c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b10e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b110: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b115: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b11au); f_00630f40();
    /* 0051b11a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b11e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b123: add eax, 0x1a1 */ {  u32 a = r_eax; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b129: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b12e: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b133: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b135: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b137: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b13d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b142u); f_005f9de0();
    /* 0051b142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b144: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b146: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b148: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b14a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b14c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b151: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b153: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b156: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b159: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b15a: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b15f: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b164: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b166: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b168: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b16e: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b173u); f_005f9de0();
    /* 0051b173: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b175: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b179: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b17b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b17d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b182: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b184: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b187: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b18a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b18b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b190: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b195: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b199: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b19f: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b1a4u); f_005f9de0();
    /* 0051b1a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1a6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1ae: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b1b8: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b1bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1bc: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1c1: push 0x401 */ { u32 v = 0x401u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1c6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1ca: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b1d0: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b1d5u); f_005f9de0();
    /* 0051b1d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1df: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b1e9: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1ed: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1f2: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1f7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b1fb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b201: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b206u); f_005f9de0();
    /* 0051b206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b208: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b20a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b20c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b20e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b210: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b217: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b21a: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b21d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b21e: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b223: push 0x403 */ { u32 v = 0x403u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b228: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b22a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b22c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b232: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51b237u); f_005f9de0();
    /* 0051b237: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b239: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b23e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b242: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b245: add eax, 0x76 */ {  u32 a = r_eax; u32 b = 0x76u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b249: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b24b: push 0x30e7ec */ { u32 v = 0x30e7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b250: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051b252: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b254: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b25a: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51b25fu); f_005f9ce0();
    /* 0051b25f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b261: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b266: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b268: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b26a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b26d: add ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b271: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b273: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b278: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b27a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b27c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b282: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51b287u); f_005f9ce0();
    /* 0051b287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b289: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b28e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b290: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b292: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b295: add edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b299: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b29b: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2a0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2a4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b2aa: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51b2afu); f_005f9ce0();
    /* 0051b2af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2b1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b2bd: add eax, 0x195 */ {  u32 a = r_eax; u32 b = 0x195u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2c3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2c5: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ca: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ce: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b2d4: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51b2d9u); f_005f9ce0();
    /* 0051b2d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b2e2: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b2e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2e6: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2e8: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ea: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ef: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2f1: push 0x6c22f4 */ { u32 v = 0x6c22f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2f6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b2fbu); f_00630f40();
    /* 0051b2fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b2fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b2ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b303: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b309: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b30eu); f_005fa5b0();
    /* 0051b30e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b310: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b312: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b314: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b317: add edx, 0x56 */ {  u32 a = r_edx; u32 b = 0x56u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b31a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b31b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b31d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b31f: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b324: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b326: push 0x6c22d4 */ { u32 v = 0x6c22d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b32b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b330u); f_00630f40();
    /* 0051b330: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b334: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b336: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b338: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b33e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b343u); f_005fa5b0();
    /* 0051b343: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b349: call 0x51b020 */ r_esp -= 4; W32(r_esp, 0x51b34eu); f_0051b020();
    /* 0051b34e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b34f: push 0x6c22a8 */ { u32 v = 0x6c22a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b354: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b359u); f_00630f40();
    /* 0051b359: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b35d: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0051b363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b364: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51b36au); call_ind(t); }
    /* 0051b36a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b36d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b36f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b371: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b373: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b375: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b377: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b379: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b37e: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b380: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051b386: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b387: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b389: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b38b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b391: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b396u); f_005fa5b0();
    /* 0051b396: push 0x6c2288 */ { u32 v = 0x6c2288u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b39b: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051b3a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3a2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51b3a8u); call_ind(t); }
    /* 0051b3a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b3ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3ad: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b3b4: add eax, 0x16a */ {  u32 a = r_eax; u32 b = 0x16au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b3b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3bc: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3be: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3c3: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3c5: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051b3cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3d0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b3d6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b3dbu); f_005fa5b0();
    /* 0051b3db: push 0x6c225c */ { u32 v = 0x6c225cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3e0: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051b3e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3e7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51b3edu); call_ind(t); }
    /* 0051b3ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b3f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b3f9: add eax, 0x17e */ {  u32 a = r_eax; u32 b = 0x17eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b3fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b3ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b401: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b403: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b408: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b40a: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051b410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b411: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b413: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b415: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b41b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b420u); f_005fa5b0();
    /* 0051b420: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b422: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b424: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b426: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b429: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b42c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b42d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b42f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b431: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b436: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b438: push 0x6c2240 */ { u32 v = 0x6c2240u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b43d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b442u); f_00630f40();
    /* 0051b442: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b446: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b448: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b44a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b450: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b455u); f_005fa5b0();
    /* 0051b455: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b458: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051b45b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051b45e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b460: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b462: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b464: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b467: add ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b46d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b46e: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b470: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b472: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b477: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b479: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b47e: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b480: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b482: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b488: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b48du); f_005fa5b0();
    /* 0051b48d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b48f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b491: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b493: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b496: add edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b49c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b49d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b49f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4a1: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4a6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4a8: push 0x6c2224 */ { u32 v = 0x6c2224u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b4b2u); f_00630f40();
    /* 0051b4b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b4b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4b6: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4ba: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b4c0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b4c5u); f_005fa5b0();
    /* 0051b4c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b4c8: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051b4cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051b4ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4d0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4d2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b4d7: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b4dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4de: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4e0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4e2: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4e7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4e9: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b4f3u); f_00630f40();
    /* 0051b4f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b4f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4f7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b4fb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b501: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b506u); f_005fa5b0();
    /* 0051b506: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b508: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b50a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b50c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b50f: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b516: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b518: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b51a: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b51c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b51e: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b523: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b528u); f_00630f40();
    /* 0051b528: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b52c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b52e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b530: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b536: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b53bu); f_005fa5b0();
    /* 0051b53b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b53d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b53f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b544: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b54a: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b54c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b54e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b550: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b552: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b557: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b55cu); f_00630f40();
    /* 0051b55c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b55f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b560: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b564: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b56a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b56fu); f_005fa5b0();
    /* 0051b56f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b571: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b573: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b575: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b578: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b57e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b57f: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b584: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b586: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b588: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b58a: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b58f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b594u); f_00630f40();
    /* 0051b594: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b598: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b59a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b59c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b5a2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b5a7u); f_005fa5b0();
    /* 0051b5a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5a9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5ab: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b5b0: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b5b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5b7: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5b9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5bb: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5bd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5bf: push 0x6c21ac */ { u32 v = 0x6c21acu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5c4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5c8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b5ce: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b5d3u); f_005fa5b0();
    /* 0051b5d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5d5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b5dc: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5e2: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5e4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5e6: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5e8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5ea: push 0x6c21a8 */ { u32 v = 0x6c21a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5ef: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b5f3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b5f9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b5feu); f_005fa5b0();
    /* 0051b5fe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b600: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b602: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b604: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b607: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b60d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b60e: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b613: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b615: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b617: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b619: push 0x6c21a4 */ { u32 v = 0x6c21a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b61e: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b620: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b622: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b628: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b62du); f_005fa5b0();
    /* 0051b62d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b62f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b631: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b633: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b636: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b63c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b63d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b63f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b641: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b643: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b645: push 0x6c21a0 */ { u32 v = 0x6c21a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b64a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b64c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b64e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b654: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b659u); f_005fa5b0();
    /* 0051b659: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b65b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b65d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b65f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b662: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b668: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b66a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b66c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b66e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b670: push 0x6c219c */ { u32 v = 0x6c219cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b675: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b679: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b67f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b684u); f_005fa5b0();
    /* 0051b684: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b686: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b688: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b68a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b68d: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b694: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b699: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b69b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b69d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b69f: push 0x6c2198 */ { u32 v = 0x6c2198u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6a4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6a8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b6ae: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b6b3u); f_005fa5b0();
    /* 0051b6b3: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 0051b6ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6bc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b6c3: add edx, 0x12f */ {  u32 a = r_edx; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b6c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6ca: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6cc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6ce: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6d3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6d5: push 0x6c2178 */ { u32 v = 0x6c2178u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b6dfu); f_00630f40();
    /* 0051b6df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6e3: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6e7: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b6ed: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b6f2u); f_005fa5b0();
    /* 0051b6f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6f4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b6f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b6fb: add eax, 0x143 */ {  u32 a = r_eax; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b701: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b703: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b705: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b70a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b70c: push 0x6c215c */ { u32 v = 0x6c215cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b711: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b716u); f_00630f40();
    /* 0051b716: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b71a: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b71c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b71e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b724: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b729u); f_005fa5b0();
    /* 0051b729: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0051b730: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b732: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b734: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b736: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b739: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b73c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b73d: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b742: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b744: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b749: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b74b: push 0x6c2140 */ { u32 v = 0x6c2140u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b750: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b755u); f_00630f40();
    /* 0051b755: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b759: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b75b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b75d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b763: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b768u); f_005fa5b0();
    /* 0051b768: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b76b: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051b76e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051b771: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b773: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b775: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b777: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b77a: add eax, 0x9e */ {  u32 a = r_eax; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b77f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b780: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b785: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b787: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b78c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b78e: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b793: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b795: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b797: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b79d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b7a2u); f_005fa5b0();
    /* 0051b7a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7a4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7a6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b7ab: add ecx, 0xb2 */ {  u32 a = r_ecx; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b7b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7b2: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7b7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7b9: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7be: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7c0: push 0x6c2124 */ { u32 v = 0x6c2124u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7c5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b7cau); f_00630f40();
    /* 0051b7ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7ce: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7d2: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b7d8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b7ddu); f_005fa5b0();
    /* 0051b7dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b7e0: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051b7e3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051b7e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7e8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7ea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b7ef: add eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7f5: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7fa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b7fc: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b801: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b803: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b808: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b80du); f_00630f40();
    /* 0051b80d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b811: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b813: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b815: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b81b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b820u); f_005fa5b0();
    /* 0051b820: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b822: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b824: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b826: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b829: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b82f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b830: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b835: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b837: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b839: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b83b: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b840: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b845u); f_00630f40();
    /* 0051b845: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b849: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b84b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b84d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b853: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b858u); f_005fa5b0();
    /* 0051b858: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b85a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b85c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b85e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b861: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b867: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b868: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b86d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b86f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b871: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b873: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b878: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b87du); f_00630f40();
    /* 0051b87d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b881: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b883: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b885: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b88b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b890u); f_005fa5b0();
    /* 0051b890: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b892: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b894: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b896: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b899: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b89f: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8a4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8a6: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8a8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8aa: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8af: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b8b4u); f_00630f40();
    /* 0051b8b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b8b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8b8: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8bc: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b8c2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b8c7u); f_005fa5b0();
    /* 0051b8c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8c9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b8d0: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b8d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8d7: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8de: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8e0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8e2: push 0x6c211c */ { u32 v = 0x6c211cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8e7: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8eb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b8f1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b8f6u); f_005fa5b0();
    /* 0051b8f6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8f8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8fa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b8fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b8ff: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b906: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b90b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b90d: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b90f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b911: push 0x6c2114 */ { u32 v = 0x6c2114u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b916: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b91a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b920: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b925u); f_005fa5b0();
    /* 0051b925: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b927: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b929: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b92b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b92e: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b934: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b939: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b93b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b93d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b93f: push 0x6c210c */ { u32 v = 0x6c210cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b944: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b946: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b948: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b94e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b953u); f_005fa5b0();
    /* 0051b953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b955: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b957: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b959: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b95c: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b962: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b963: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b968: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b96a: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b96c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b96e: push 0x6c2104 */ { u32 v = 0x6c2104u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b973: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b977: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b97d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b982u); f_005fa5b0();
    /* 0051b982: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b984: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b986: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b988: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b98b: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051b991: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b992: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b997: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b999: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b99b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b99d: push 0x6c20fc */ { u32 v = 0x6c20fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9a2: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9a6: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b9ac: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b9b1u); f_005fa5b0();
    /* 0051b9b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9b3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b9ba: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051b9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c0: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c7: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9c9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9cb: push 0x6c20f4 */ { u32 v = 0x6c20f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9d0: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9d4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051b9da: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51b9dfu); f_005fa5b0();
    /* 0051b9df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9e1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9e3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b9e8: add ecx, 0x120 */ {  u32 a = r_ecx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051b9ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9ef: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9f4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9f6: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9f8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9fa: push 0x6c20ec */ { u32 v = 0x6c20ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051b9ff: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba03: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ba09: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ba0eu); f_005fa5b0();
    /* 0051ba0e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba10: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba12: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ba17: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051ba1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba1e: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba23: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba25: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba27: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba29: push 0x6c20e4 */ { u32 v = 0x6c20e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba2e: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba32: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ba38: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ba3du); f_005fa5b0();
    /* 0051ba3d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba3f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba41: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ba46: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ba4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba4c: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba51: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba53: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba55: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba57: push 0x6c20dc */ { u32 v = 0x6c20dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba5c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba60: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ba66: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ba6bu); f_005fa5b0();
    /* 0051ba6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba6d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba6f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ba74: add ecx, 0x134 */ {  u32 a = r_ecx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ba7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba7b: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba80: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba82: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba84: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba86: push 0x6c20d4 */ { u32 v = 0x6c20d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba8b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba8f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ba95: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ba9au); f_005fa5b0();
    /* 0051ba9a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba9c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ba9e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051baa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051baa3: add edx, 0x134 */ {  u32 a = r_edx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051baa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051baaa: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051baaf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bab1: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bab3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bab5: push 0x6c20cc */ { u32 v = 0x6c20ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051baba: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0051babc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051babe: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bac4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bac9u); f_005fa5b0();
    /* 0051bac9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bacb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bacd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bacf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bad2: add eax, 0x134 */ {  u32 a = r_eax; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bad8: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051badd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051badf: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bae1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bae3: push 0x6c20c4 */ { u32 v = 0x6c20c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bae8: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0051baea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051baec: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051baf2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51baf7u); f_005fa5b0();
    /* 0051baf7: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 0051bafe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb00: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb02: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bb07: add ecx, 0x12f */ {  u32 a = r_ecx; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bb0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb0e: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb13: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb15: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb1a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb1c: push 0x6c20a4 */ { u32 v = 0x6c20a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb21: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bb26u); f_00630f40();
    /* 0051bb26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bb29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb2a: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb2e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bb34: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bb39u); f_005fa5b0();
    /* 0051bb39: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb3b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb3d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bb42: add edx, 0x143 */ {  u32 a = r_edx; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bb48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb49: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb4e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb50: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb55: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb57: push 0x6c215c */ { u32 v = 0x6c215cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb5c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bb61u); f_00630f40();
    /* 0051bb61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bb64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb65: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb69: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bb6f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bb74u); f_005fa5b0();
    /* 0051bb74: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0051bb7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb7d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb7f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bb84: add eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bb87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb88: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb8d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb8f: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb94: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb96: push 0x6c2088 */ { u32 v = 0x6c2088u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bb9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bba0u); f_00630f40();
    /* 0051bba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bba4: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bba8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bbae: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bbb3u); f_005fa5b0();
    /* 0051bbb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bbb6: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bbb9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051bbbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbbe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbc0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bbc5: add edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bbcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbcc: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbd1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbd3: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbd8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbda: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbdf: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbe1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbe3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bbe9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bbeeu); f_005fa5b0();
    /* 0051bbee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbf0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbf2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bbf7: add eax, 0xb2 */ {  u32 a = r_eax; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bbfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bbfd: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc02: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc04: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc09: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc0b: push 0x6c205c */ { u32 v = 0x6c205cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc10: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bc15u); f_00630f40();
    /* 0051bc15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bc18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc19: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc1d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bc23: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bc28u); f_005fa5b0();
    /* 0051bc28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bc2b: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bc2e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051bc31: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc33: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bc3a: add edx, 0xd0 */ {  u32 a = r_edx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bc40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc41: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc46: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc48: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc4d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc4f: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc54: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bc59u); f_00630f40();
    /* 0051bc59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc5d: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc61: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bc67: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bc6cu); f_005fa5b0();
    /* 0051bc6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc6e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc70: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bc75: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bc7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc7b: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc80: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc82: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc84: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc86: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc8b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bc90u); f_00630f40();
    /* 0051bc90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bc93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc94: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bc98: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bc9e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bca3u); f_005fa5b0();
    /* 0051bca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bca5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bca7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bcac: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bcb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcb3: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcb8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcba: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcbc: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcbe: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcc3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bcc8u); f_00630f40();
    /* 0051bcc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bccc: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcd0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bcd6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bcdbu); f_005fa5b0();
    /* 0051bcdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcdd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcdf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bce1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bce4: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bceb: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcf0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcf2: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcf4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcf6: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bcfb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bd00u); f_00630f40();
    /* 0051bd00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bd03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd04: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd08: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bd0e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bd13u); f_005fa5b0();
    /* 0051bd13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd15: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd17: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bd1c: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bd21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd22: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd27: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd29: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd2b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd2d: push 0x6c2054 */ { u32 v = 0x6c2054u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd32: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd36: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bd3c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bd41u); f_005fa5b0();
    /* 0051bd41: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd43: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bd4a: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bd50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd51: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd56: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd58: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd5a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd5c: push 0x6c204c */ { u32 v = 0x6c204cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd61: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd65: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bd6b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bd70u); f_005fa5b0();
    /* 0051bd70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd72: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd74: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bd79: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bd7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd80: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd85: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd87: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd89: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd8b: push 0x6c2044 */ { u32 v = 0x6c2044u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd90: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bd94: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bd9a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bd9fu); f_005fa5b0();
    /* 0051bd9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bda1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bda3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bda5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bda8: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bdad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdae: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdb3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdb5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdb7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdb9: push 0x6c203c */ { u32 v = 0x6c203cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdbe: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdc2: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bdc8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bdcdu); f_005fa5b0();
    /* 0051bdcd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdcf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdd1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bdd6: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bddd: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bde2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bde4: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bde6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bde8: push 0x6c2034 */ { u32 v = 0x6c2034u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bded: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdf1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bdf7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bdfcu); f_005fa5b0();
    /* 0051bdfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bdfe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be00: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051be05: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051be0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051be0c: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051be11: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be13: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be15: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be17: push 0x6c202c */ { u32 v = 0x6c202cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be1c: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be20: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051be26: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51be2bu); f_005fa5b0();
    /* 0051be2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be2d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051be34: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051be39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051be3a: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be3f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be41: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be43: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be45: push 0x6c2024 */ { u32 v = 0x6c2024u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be4a: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be4e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051be54: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51be59u); f_005fa5b0();
    /* 0051be59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be5b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be5d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051be62: add ecx, 0x120 */ {  u32 a = r_ecx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051be68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051be69: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be6e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be70: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be72: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be74: push 0x6c201c */ { u32 v = 0x6c201cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be79: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be7d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051be83: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51be88u); f_005fa5b0();
    /* 0051be88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051be8a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be8c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051be91: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051be97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051be98: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051be9d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051be9f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bea1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bea3: push 0x6c2014 */ { u32 v = 0x6c2014u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bea8: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0051beaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051beac: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051beb2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51beb7u); f_005fa5b0();
    /* 0051beb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051beb9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bebb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bec0: add eax, 0x134 */ {  u32 a = r_eax; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bec6: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051becb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051becd: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051becf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bed1: push 0x6c200c */ { u32 v = 0x6c200cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bed6: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bed8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051beda: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bee0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bee5u); f_005fa5b0();
    /* 0051bee5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bee7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bee9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051beeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051beee: add ecx, 0x134 */ {  u32 a = r_ecx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bef5: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051befa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051befc: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051befe: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf00: push 0x6c2004 */ { u32 v = 0x6c2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf05: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf09: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bf0f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bf14u); f_005fa5b0();
    /* 0051bf14: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf16: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bf1d: add edx, 0x134 */ {  u32 a = r_edx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bf23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf24: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf29: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf2b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf2d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf2f: push 0x6c1ffc */ { u32 v = 0x6c1ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf34: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf38: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bf3e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bf43u); f_005fa5b0();
    /* 0051bf43: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 0051bf4a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf4c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf4e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bf53: add eax, 0x12f */ {  u32 a = r_eax; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051bf58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf59: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf5e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf60: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf65: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf67: push 0x6c1fd4 */ { u32 v = 0x6c1fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bf71u); f_00630f40();
    /* 0051bf71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bf74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf75: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf79: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bf7f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bf84u); f_005fa5b0();
    /* 0051bf84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf86: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf88: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bf8d: add ecx, 0x143 */ {  u32 a = r_ecx; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051bf93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf94: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf99: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bf9b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfa0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfa2: push 0x6c1fb8 */ { u32 v = 0x6c1fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfa7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51bfacu); f_00630f40();
    /* 0051bfac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051bfaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfb0: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfb4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bfba: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51bfbfu); f_005fa5b0();
    /* 0051bfbf: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0051bfc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfc8: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051bfd4: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051bfd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfd8: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfda: push 0x30e7f0 */ { u32 v = 0x30e7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfdf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfe1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bfe3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bfe9: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51bfeeu); f_005f9ce0();
    /* 0051bfee: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051bff0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051bff6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51bffbu); f_005fb2b0();
    /* 0051bffb: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0051c001: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 0051c007: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051c009: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0051c00f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051c012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c014u); call_ind(t); }
    /* 0051c014: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c016: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051c01c: call 0x51c700 */ r_esp -= 4; W32(r_esp, 0x51c021u); f_0051c700();
    /* 0051c021: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051c027: call 0x51c040 */ r_esp -= 4; W32(r_esp, 0x51c02cu); f_0051c040();
    /* 0051c02c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c02f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c031: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51c036u); f_00686d72();
    /* 0051c036: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c038: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c039: ret  */ FN_RET(0x0051b050); r_esp += 4; return;
}

void f_0051c750(void) /* PokerNewTournamentDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c750);
    /* 0051c750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c751: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c756: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051c759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c75c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c75f: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051c763: ja 0x51c7f1 */ if ((!fC&&!fZ)) goto L_0051c7f1;
L_0051c769:; BB(0x0051c769);
    /* 0051c769: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c76c: jmp dword ptr [ecx*4 + 0x51c7f8] */ { u32 t = R32((u32)(r_ecx*4+0x51c7f8u)); switch (t) { case 0x51c773u: goto L_0051c773; case 0x51c787u: goto L_0051c787; case 0x51c77du: goto L_0051c77d; case 0x51c793u: goto L_0051c793; default: UNSUP(0x0051c76c, "jump table entry is not a known target"); } }
L_0051c773:; BB(0x0051c773);
    /* 0051c773: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c776: call 0x51c860 */ r_esp -= 4; W32(r_esp, 0x51c77bu); f_0051c860();
    /* 0051c77b: jmp 0x51c7f1 */ goto L_0051c7f1;
L_0051c77d:; BB(0x0051c77d);
    /* 0051c77d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c780: call 0x51cab0 */ r_esp -= 4; W32(r_esp, 0x51c785u); f_0051cab0();
    /* 0051c785: jmp 0x51c7f1 */ goto L_0051c7f1;
L_0051c787:; BB(0x0051c787);
    /* 0051c787: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c789: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x51c78eu); f_0060cce0();
    /* 0051c78e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c791: jmp 0x51c7f1 */ goto L_0051c7f1;
L_0051c793:; BB(0x0051c793);
    /* 0051c793: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c795: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c796: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0051c79c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c79f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7a0: fld1  */ FPUSH(1.0);
    /* 0051c7a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051c7a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7a7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7ad: push 0x30e7fa */ { u32 v = 0x30e7fau; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7b2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051c7b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c7ba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051c7c0: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0051c7c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c7c8u); call_ind(t); }
    /* 0051c7c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c7cb: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051c7ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c7d1: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 0051c7d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c7da: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0051c7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c7e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c7e4: call 0x51c700 */ r_esp -= 4; W32(r_esp, 0x51c7e9u); f_0051c700();
    /* 0051c7e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c7ec: call 0x51c040 */ r_esp -= 4; W32(r_esp, 0x51c7f1u); f_0051c040();
L_0051c7f1:; BB(0x0051c7f1);
    /* 0051c7f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c7f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c7f4: ret 4 */ FN_RET(0x0051c750); r_esp += 8; return;
}

