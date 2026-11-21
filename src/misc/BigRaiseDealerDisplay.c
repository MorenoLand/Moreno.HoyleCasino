#include "protos.h"

void f_0059ba30(void) /* BigRaiseDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ba30);
    /* 0059ba30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba31: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ba33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba35: push 0x6a7513 */ { u32 v = 0x6a7513u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059ba40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba41: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ba47: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059ba4c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059ba4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ba4f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059ba52: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059ba58: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 0059ba5e: mov dword ptr [ebp - 0x3c], 5 */ W32((u32)(r_ebp+0xffffffc4u), 0x5u);
    /* 0059ba65: mov dword ptr [ebp - 0x38], 4 */ W32((u32)(r_ebp+0xffffffc8u), 0x4u);
    /* 0059ba6c: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 0059ba73: mov dword ptr [ebp - 0x30], 8 */ W32((u32)(r_ebp+0xffffffd0u), 0x8u);
    /* 0059ba7a: mov dword ptr [ebp - 0x2c], 7 */ W32((u32)(r_ebp+0xffffffd4u), 0x7u);
    /* 0059ba81: mov dword ptr [ebp - 0x28], 6 */ W32((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 0059ba88: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
    /* 0059ba8f: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0059ba96: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0059ba9d: mov dword ptr [ebp - 0x18], 0xb */ W32((u32)(r_ebp+0xffffffe8u), 0xbu);
    /* 0059baa4: mov dword ptr [ebp - 0x14], 0xa */ W32((u32)(r_ebp+0xffffffecu), 0xau);
    /* 0059baab: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
    /* 0059bab2: mov dword ptr [ebp - 0x9c], 0x142 */ W32((u32)(r_ebp+0xffffff64u), 0x142u);
    /* 0059babc: mov dword ptr [ebp - 0x98], 0x136 */ W32((u32)(r_ebp+0xffffff68u), 0x136u);
    /* 0059bac6: mov dword ptr [ebp - 0x94], 0x12b */ W32((u32)(r_ebp+0xffffff6cu), 0x12bu);
    /* 0059bad0: mov dword ptr [ebp - 0x90], 0x172 */ W32((u32)(r_ebp+0xffffff70u), 0x172u);
    /* 0059bada: mov dword ptr [ebp - 0x8c], 0x15f */ W32((u32)(r_ebp+0xffffff74u), 0x15fu);
    /* 0059bae4: mov dword ptr [ebp - 0x88], 0x153 */ W32((u32)(r_ebp+0xffffff78u), 0x153u);
    /* 0059baee: mov dword ptr [ebp - 0x84], 0xdd */ W32((u32)(r_ebp+0xffffff7cu), 0xddu);
    /* 0059baf8: mov dword ptr [ebp - 0x80], 0x134 */ W32((u32)(r_ebp+0xffffff80u), 0x134u);
    /* 0059baff: mov dword ptr [ebp - 0x7c], 0xbd */ W32((u32)(r_ebp+0xffffff84u), 0xbdu);
    /* 0059bb06: mov dword ptr [ebp - 0x78], 0x16f */ W32((u32)(r_ebp+0xffffff88u), 0x16fu);
    /* 0059bb0d: mov dword ptr [ebp - 0x74], 0xf2 */ W32((u32)(r_ebp+0xffffff8cu), 0xf2u);
    /* 0059bb14: mov dword ptr [ebp - 0x70], 0x152 */ W32((u32)(r_ebp+0xffffff90u), 0x152u);
    /* 0059bb1b: mov dword ptr [ebp - 0x6c], 0x201 */ W32((u32)(r_ebp+0xffffff94u), 0x201u);
    /* 0059bb22: mov dword ptr [ebp - 0x68], 0xe8 */ W32((u32)(r_ebp+0xffffff98u), 0xe8u);
    /* 0059bb29: mov dword ptr [ebp - 0x64], 0x205 */ W32((u32)(r_ebp+0xffffff9cu), 0x205u);
    /* 0059bb30: mov dword ptr [ebp - 0x60], 0x121 */ W32((u32)(r_ebp+0xffffffa0u), 0x121u);
    /* 0059bb37: mov dword ptr [ebp - 0x5c], 0x221 */ W32((u32)(r_ebp+0xffffffa4u), 0x221u);
    /* 0059bb3e: mov dword ptr [ebp - 0x58], 0x107 */ W32((u32)(r_ebp+0xffffffa8u), 0x107u);
    /* 0059bb45: mov dword ptr [ebp - 0x54], 0x3a */ W32((u32)(r_ebp+0xffffffacu), 0x3au);
    /* 0059bb4c: mov dword ptr [ebp - 0x50], 0xe9 */ W32((u32)(r_ebp+0xffffffb0u), 0xe9u);
    /* 0059bb53: mov dword ptr [ebp - 0x4c], 0xf */ W32((u32)(r_ebp+0xffffffb4u), 0xfu);
    /* 0059bb5a: mov dword ptr [ebp - 0x48], 0x108 */ W32((u32)(r_ebp+0xffffffb8u), 0x108u);
    /* 0059bb61: mov dword ptr [ebp - 0x44], 0x46 */ W32((u32)(r_ebp+0xffffffbcu), 0x46u);
    /* 0059bb68: mov dword ptr [ebp - 0x40], 0x124 */ W32((u32)(r_ebp+0xffffffc0u), 0x124u);
    /* 0059bb6f: push 0x6cee50 */ { u32 v = 0x6cee50u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb74: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59bb79u); f_00630f40();
    /* 0059bb79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bb7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb7d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059bb83: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x59bb88u); f_005f38b0();
    /* 0059bb88: push 0xfde8 */ { u32 v = 0xfde8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb8d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059bb93: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x59bb98u); f_005f1ad0();
    /* 0059bb98: push 0x315103 */ { u32 v = 0x315103u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bb9d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059bba3: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59bba8u); f_005f2ba0();
    /* 0059bba8: push 0x315104 */ { u32 v = 0x315104u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbad: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059bbb3: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59bbb8u); f_005f2ba0();
    /* 0059bbb8: push 0x315105 */ { u32 v = 0x315105u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbbd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059bbc3: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59bbc8u); f_005f2ba0();
    /* 0059bbc8: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0059bbd2: jmp 0x59bbe3 */ goto L_0059bbe3;
L_0059bbd4:; BB(0x0059bbd4);
    /* 0059bbd4: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bbda: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059bbdd: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
L_0059bbe3:; BB(0x0059bbe3);
    /* 0059bbe3: cmp dword ptr [ebp - 0xa0], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059bbea: jge 0x59bd13 */ if ((fS==fO)) goto L_0059bd13;
L_0059bbf0:; BB(0x0059bbf0);
    /* 0059bbf0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bbf2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59bbf7u); f_00686d82();
    /* 0059bbf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bbfa: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0059bc00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059bc07: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bc0e: je 0x59bc23 */ if (fZ) goto L_0059bc23;
L_0059bc10:; BB(0x0059bc10);
    /* 0059bc10: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0059bc16: call 0x59e270 */ r_esp -= 4; W32(r_esp, 0x59bc1bu); f_0059e270();
    /* 0059bc1b: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0059bc21: jmp 0x59bc2d */ goto L_0059bc2d;
L_0059bc23:; BB(0x0059bc23);
    /* 0059bc23: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0059bc2d:; BB(0x0059bc2d);
    /* 0059bc2d: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0059bc33: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0059bc39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059bc40: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bc46: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bc4c: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0059bc52: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 0059bc56: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bc5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc5d: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bc63: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bc69: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0059bc6d: call 0x59e370 */ r_esp -= 4; W32(r_esp, 0x59bc72u); f_0059e370();
    /* 0059bc72: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bc77: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59bc7cu); f_00686d82();
    /* 0059bc7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bc7f: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0059bc85: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059bc8c: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bc93: je 0x59bca8 */ if (fZ) goto L_0059bca8;
L_0059bc95:; BB(0x0059bc95);
    /* 0059bc95: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0059bc9b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x59bca0u); f_005ec5a0();
    /* 0059bca0: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0059bca6: jmp 0x59bcb2 */ goto L_0059bcb2;
L_0059bca8:; BB(0x0059bca8);
    /* 0059bca8: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0059bcb2:; BB(0x0059bcb2);
    /* 0059bcb2: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0059bcb8: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0059bcbe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059bcc5: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bccb: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bcd1: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0059bcd7: mov dword ptr [ecx + eax*4 + 0x84], edx */ W32((u32)(r_ecx+r_eax*4+0x84u), r_edx);
    /* 0059bcde: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bce0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bce2: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bce4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bce6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bce8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcea: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcef: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcf1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bcf6: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059bcfc: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bd02: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059bd09: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x59bd0eu); f_005ec8f0();
    /* 0059bd0e: jmp 0x59bbd4 */ goto L_0059bbd4;
L_0059bd13:; BB(0x0059bd13);
    /* 0059bd13: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 0059bd1d: jmp 0x59bd2e */ goto L_0059bd2e;
L_0059bd1f:; BB(0x0059bd1f);
    /* 0059bd1f: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bd25: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059bd28: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
L_0059bd2e:; BB(0x0059bd2e);
    /* 0059bd2e: cmp dword ptr [ebp - 0xa4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059bd35: jge 0x59bf4c */ if ((fS==fO)) goto L_0059bf4c;
L_0059bd3b:; BB(0x0059bd3b);
    /* 0059bd3b: push 0xae4 */ { u32 v = 0xae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bd40: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59bd45u); f_00686d82();
    /* 0059bd45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059bd48: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0059bd4e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059bd55: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059bd5c: je 0x59bd71 */ if (fZ) goto L_0059bd71;
L_0059bd5e:; BB(0x0059bd5e);
    /* 0059bd5e: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0059bd64: call 0x59cf60 */ r_esp -= 4; W32(r_esp, 0x59bd69u); f_0059cf60();
    /* 0059bd69: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0059bd6f: jmp 0x59bd7b */ goto L_0059bd7b;
L_0059bd71:; BB(0x0059bd71);
    /* 0059bd71: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0059bd7b:; BB(0x0059bd7b);
    /* 0059bd7b: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 0059bd81: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0059bd87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059bd8e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bd94: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bd9a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0059bda0: mov dword ptr [edx + ecx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ecx*4+0x1cu), r_eax);
    /* 0059bda4: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bdaa: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bdb0: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0059bdb4: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bdba: mov dword ptr [eax + 0xae0], ecx */ W32((u32)(r_eax+0xae0u), r_ecx);
    /* 0059bdc0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bdc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bdc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bdc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bdc8: push 0x310e9e */ { u32 v = 0x310e9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bdcd: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bdd3: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bdd9: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0059bddd: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59bde2u); f_005eae80();
    /* 0059bde2: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bde8: mov edx, dword ptr [ebp + ecx*4 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u));
    /* 0059bdec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bded: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bdf3: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bdf9: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059bdfd: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be03: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059be09: mov ecx, dword ptr [ecx + eax*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059be0d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059be0f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059be15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59be17u); call_ind(t); }
    /* 0059be17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059be19: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be1f: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059be25: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0059be29: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x59be2eu); f_005eb5d0();
    /* 0059be2e: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be34: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059be3a: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0059be3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059be3f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be45: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059be4b: mov ecx, dword ptr [ecx + eax*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059be4f: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x59be54u); f_005cc2c0();
    /* 0059be54: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be5a: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059be60: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0059be64: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059be6a: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059be70: mov edx, dword ptr [eax + edx*4 + 0x1c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0059be74: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0059be76: mov ecx, edx */ r_ecx = r_edx;
    /* 0059be78: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0059be7b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59be7du); call_ind(t); }
    /* 0059be7d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0059be82: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59be87u); f_00686d82();
    /* 0059be87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059be8a: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0059be90: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0059be97: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059be9e: je 0x59beb3 */ if (fZ) goto L_0059beb3;
L_0059bea0:; BB(0x0059bea0);
    /* 0059bea0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0059bea6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x59beabu); f_005eaaf0();
    /* 0059beab: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0059beb1: jmp 0x59bebd */ goto L_0059bebd;
L_0059beb3:; BB(0x0059beb3);
    /* 0059beb3: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0059bebd:; BB(0x0059bebd);
    /* 0059bebd: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 0059bec3: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0059bec9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059bed0: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bed6: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bedc: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0059bee2: mov dword ptr [edx + ecx*4 + 0x54], eax */ W32((u32)(r_edx+r_ecx*4+0x54u), r_eax);
    /* 0059bee6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bee8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0059beea: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bef0: mov edx, dword ptr [ebp + ecx*8 - 0x98] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff68u));
    /* 0059bef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bef8: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059befe: mov ecx, dword ptr [ebp + eax*8 - 0x9c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff64u));
    /* 0059bf05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf06: push 0x311292 */ { u32 v = 0x311292u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf0b: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bf11: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf17: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0059bf1b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59bf20u); f_005eae80();
    /* 0059bf20: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bf26: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf2c: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059bf30: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059bf36: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf3c: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059bf40: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059bf42: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0059bf45: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59bf47u); call_ind(t); }
    /* 0059bf47: jmp 0x59bd1f */ goto L_0059bd1f;
L_0059bf4c:; BB(0x0059bf4c);
    /* 0059bf4c: push -0x51 */ { u32 v = 0xffffffafu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf4e: push -0x1c */ { u32 v = 0xffffffe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf50: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf56: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0059bf59: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf5f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059bf62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059bf64: mov ecx, eax */ r_ecx = r_eax;
    /* 0059bf66: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bf69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bf6bu); call_ind(t); }
    /* 0059bf6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6d: push -0x29 */ { u32 v = 0xffffffd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf6f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf75: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0059bf78: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf7e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0059bf81: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059bf83: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bf86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bf88u); call_ind(t); }
    /* 0059bf88: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf8a: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bf8c: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf92: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0059bf95: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bf9b: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0059bf9e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059bfa0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bfa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bfa5u); call_ind(t); }
    /* 0059bfa5: push -0x50 */ { u32 v = 0xffffffb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfa7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfa9: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bfaf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0059bfb2: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bfb8: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0059bfbb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059bfbd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bfc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bfc2u); call_ind(t); }
    /* 0059bfc2: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfc4: push -0x19 */ { u32 v = 0xffffffe7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfc6: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bfcc: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0059bfcf: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bfd5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0059bfd8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059bfda: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bfdd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bfdfu); call_ind(t); }
    /* 0059bfdf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfe1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bfe3: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bfe9: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0059bfec: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059bff2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0059bff5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059bff7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059bffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59bffcu); call_ind(t); }
    /* 0059bffc: push -0x17 */ { u32 v = 0xffffffe9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059bffe: push -0x12 */ { u32 v = 0xffffffeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c000: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c006: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0059c009: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c00f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0059c012: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c014: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c017: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c019u); call_ind(t); }
    /* 0059c019: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c01b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c01d: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c023: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0059c026: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c02c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0059c02f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c031: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c034: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c036u); call_ind(t); }
    /* 0059c036: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c038: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c03a: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c040: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0059c043: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c049: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0059c04c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c04e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c051: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c053u); call_ind(t); }
    /* 0059c053: push -0x1b */ { u32 v = 0xffffffe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c055: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c057: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c05d: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0059c060: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c066: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0059c069: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c06b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c06e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c070u); call_ind(t); }
    /* 0059c070: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c072: push -0x3d */ { u32 v = 0xffffffc3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c074: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c07a: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0059c07d: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c083: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0059c086: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c088: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c08b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c08du); call_ind(t); }
    /* 0059c08d: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c08f: push -0x30 */ { u32 v = 0xffffffd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c091: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c097: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0059c09a: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c0a0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0059c0a3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c0a5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c0a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c0aau); call_ind(t); }
    /* 0059c0aa: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c0af: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59c0b4u); f_00686d82();
    /* 0059c0b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c0b7: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0059c0bd: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0059c0c4: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c0cb: je 0x59c0f2 */ if (fZ) goto L_0059c0f2;
L_0059c0cd:; BB(0x0059c0cd);
    /* 0059c0cd: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059c0d3: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x59c0d8u); f_005cd6a0();
    /* 0059c0d8: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059c0de: mov dword ptr [ecx], 0x6ced8c */ W32((u32)(r_ecx), 0x6ced8cu);
    /* 0059c0e4: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059c0ea: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 0059c0f0: jmp 0x59c0fc */ goto L_0059c0fc;
L_0059c0f2:; BB(0x0059c0f2);
    /* 0059c0f2: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0059c0fc:; BB(0x0059c0fc);
    /* 0059c0fc: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0059c102: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0059c108: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059c10f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c115: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0059c11b: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0059c11e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c122: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c124: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c128: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c12e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0059c131: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59c136u); f_005eae80();
    /* 0059c136: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c13b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59c140u); f_00686d82();
    /* 0059c140: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c143: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0059c149: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0059c150: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c157: je 0x59c16c */ if (fZ) goto L_0059c16c;
L_0059c159:; BB(0x0059c159);
    /* 0059c159: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0059c15f: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x59c164u); f_005f5bf0();
    /* 0059c164: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0059c16a: jmp 0x59c176 */ goto L_0059c176;
L_0059c16c:; BB(0x0059c16c);
    /* 0059c16c: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_0059c176:; BB(0x0059c176);
    /* 0059c176: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 0059c17c: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 0059c182: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059c189: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c18f: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0059c195: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 0059c19b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c19d: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c19f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c1a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c1a3: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c1a8: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c1ae: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0059c1b4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59c1b9u); f_005eae80();
    /* 0059c1b9: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c1be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59c1c3u); f_00686d82();
    /* 0059c1c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c1c6: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0059c1cc: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0059c1d3: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c1da: je 0x59c1ef */ if (fZ) goto L_0059c1ef;
L_0059c1dc:; BB(0x0059c1dc);
    /* 0059c1dc: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0059c1e2: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x59c1e7u); f_005f5bf0();
    /* 0059c1e7: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0059c1ed: jmp 0x59c1f9 */ goto L_0059c1f9;
L_0059c1ef:; BB(0x0059c1ef);
    /* 0059c1ef: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_0059c1f9:; BB(0x0059c1f9);
    /* 0059c1f9: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0059c1ff: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 0059c205: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059c20c: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c212: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0059c218: mov dword ptr [eax + 0xa0], ecx */ W32((u32)(r_eax+0xa0u), r_ecx);
    /* 0059c21e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c220: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c222: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c226: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c22b: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c231: mov ecx, dword ptr [edx + 0xa0] */ r_ecx = R32((u32)(r_edx+0xa0u));
    /* 0059c237: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59c23cu); f_005eae80();
    /* 0059c23c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c241: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59c246u); f_00686d82();
    /* 0059c246: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c249: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0059c24f: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0059c256: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c25d: je 0x59c272 */ if (fZ) goto L_0059c272;
L_0059c25f:; BB(0x0059c25f);
    /* 0059c25f: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0059c265: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x59c26au); f_005f5bf0();
    /* 0059c26a: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0059c270: jmp 0x59c27c */ goto L_0059c27c;
L_0059c272:; BB(0x0059c272);
    /* 0059c272: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_0059c27c:; BB(0x0059c27c);
    /* 0059c27c: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 0059c282: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0059c288: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059c28f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c295: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 0059c29b: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0059c2a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2a9: push 0x310ea0 */ { u32 v = 0x310ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2ae: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059c2b4: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059c2ba: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x59c2bfu); f_005eae80();
    /* 0059c2bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c2c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059c2c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c2ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0059c2cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c2cd: ret  */ FN_RET(0x0059ba30); r_esp += 4; return;
}

