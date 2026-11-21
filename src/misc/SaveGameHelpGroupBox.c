#include "protos.h"

void f_00673130(void) /* SaveGameHelpGroupBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673130);
    /* 00673130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673131: mov ebp, esp */ r_ebp = r_esp;
    /* 00673133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673135: push 0x6ad348 */ { u32 v = 0x6ad348u; r_esp -= 4; W32(r_esp, v); }
    /* 0067313a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673141: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673144: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00673149: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067314b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067314c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067314f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00673155: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00673158: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067315b: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0067315e: mov byte ptr [eax + 0x1c4], cl */ W8((u32)(r_eax+0x1c4u), (u8)r_ecx);
    /* 00673164: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00673166: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673168: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0067316a: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067316c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0067316e: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 00673173: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673178u); f_00630f40();
    /* 00673178: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067317b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067317c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067317e: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00673183: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673186: movzx eax, byte ptr [edx + 0x1c4] */ r_eax = (u32)R8((u32)(r_edx+0x1c4u));
    /* 0067318d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0067318f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00673191: and eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00673194: add eax, 0x11c */ {  u32 a = r_eax; u32 b = 0x11cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00673199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067319a: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067319f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006731a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006731a3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006731a6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6731abu); f_005f9de0();
    /* 006731ab: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006731ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006731af: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006731b1: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006731b3: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006731b5: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 006731ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6731bfu); f_00630f40();
    /* 006731bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006731c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006731c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006731c5: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 006731ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006731cd: movzx edx, byte ptr [ecx + 0x1c4] */ r_edx = (u32)R8((u32)(r_ecx+0x1c4u));
    /* 006731d4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006731d6: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 006731d8: and edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006731db: add edx, 0x176 */ {  u32 a = r_edx; u32 b = 0x176u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006731e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006731e2: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006731e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006731e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006731eb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006731ee: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6731f3u); f_005f9de0();
    /* 006731f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006731f5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006731f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006731f9: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 006731fe: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 00673203: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00673205: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067320a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067320c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673215: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673218: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x67321du); f_005fa5b0();
    /* 0067321d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067321f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673221: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673223: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00673228: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 0067322d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0067322f: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00673231: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00673233: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673238: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067323a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067323c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067323f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x673244u); f_005fa5b0();
    /* 00673244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673246: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067324b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067324d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067324f: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00673251: push 0x147 */ { u32 v = 0x147u; r_esp -= 4; W32(r_esp, v); }
    /* 00673256: push 0x30d4f4 */ { u32 v = 0x30d4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067325b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067325d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067325f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673262: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x673267u); f_005f9ce0();
    /* 00673267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673269: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067326b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067326d: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0067326f: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673274: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00673276: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067327b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067327d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673282: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673286: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673289: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x67328eu); f_005fa5b0();
    /* 0067328e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673290: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673292: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673294: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673297: movzx ecx, byte ptr [eax + 0x1c4] */ r_ecx = (u32)R8((u32)(r_eax+0x1c4u));
    /* 0067329e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006732a0: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006732a2: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006732a5: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006732a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006732a9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006732ab: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006732ad: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 006732b2: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006732b4: push 0x6e1660 */ { u32 v = 0x6e1660u; r_esp -= 4; W32(r_esp, v); }
    /* 006732b9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6732beu); f_00630f40();
    /* 006732be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006732c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006732c2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006732c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732c6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006732c9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6732ceu); f_005fa5b0();
    /* 006732ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732d4: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 006732d9: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006732db: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006732dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006732df: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006732e1: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006732e6: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 006732eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006732ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732f1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006732f4: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x6732f9u); f_005fa880();
    /* 006732f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006732ff: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673304: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673309: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067330e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673310: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00673312: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 00673317: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067331c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067331e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673320: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673322: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673325: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x67332au); f_005fa880();
    /* 0067332a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067332c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067332e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673330: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673335: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673337: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00673339: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067333b: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 00673340: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00673342: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673344: push 0x22a */ { u32 v = 0x22au; r_esp -= 4; W32(r_esp, v); }
    /* 00673349: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067334b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067334d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673350: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x673355u); f_005fa880();
    /* 00673355: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673359: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067335b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673360: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673365: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067336a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067336c: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 00673371: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673373: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673375: push 0x22a */ { u32 v = 0x22au; r_esp -= 4; W32(r_esp, v); }
    /* 0067337a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067337c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067337e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673381: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x673386u); f_005fa880();
    /* 00673386: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673389: cmp dword ptr [edx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_edx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673390: jne 0x6734d6 */ if (!fZ) goto L_006734d6;
L_00673396:; BB(0x00673396);
    /* 00673396: push 0x214cc */ { u32 v = 0x214ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067339b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6733a0u); f_00686d82();
    /* 006733a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006733a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006733a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006733ad: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006733b1: je 0x6733c0 */ if (fZ) goto L_006733c0;
L_006733b3:; BB(0x006733b3);
    /* 006733b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006733b6: call 0x673d10 */ r_esp -= 4; W32(r_esp, 0x6733bbu); f_00673d10();
    /* 006733bb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006733be: jmp 0x6733c7 */ goto L_006733c7;
L_006733c0:; BB(0x006733c0);
    /* 006733c0: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006733c7:; BB(0x006733c7);
    /* 006733c7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 006733ca: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006733cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006733d4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006733d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006733da: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 006733e0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006733e3: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006733e9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006733ec: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006733ef: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 006733f4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6733f9u); f_00686d82();
    /* 006733f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006733fc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006733ff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00673406: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067340a: je 0x67343c */ if (fZ) goto L_0067343c;
L_0067340c:; BB(0x0067340c);
    /* 0067340c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00673411: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00673414: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x673419u); f_005f8570();
    /* 00673419: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0067341c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067341d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00673423: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00673426: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x67342bu); f_005f8550();
    /* 0067342b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0067342e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067342f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00673432: call 0x62e170 */ r_esp -= 4; W32(r_esp, 0x673437u); f_0062e170();
    /* 00673437: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067343a: jmp 0x673443 */ goto L_00673443;
L_0067343c:; BB(0x0067343c);
    /* 0067343c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00673443:; BB(0x00673443);
    /* 00673443: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00673446: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00673449: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673450: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673453: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00673459: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067345c: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 0067345f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673462: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00673468: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067346b: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00673471: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00673473: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00673476: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673478u); call_ind(t); }
    /* 00673478: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067347d: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673482: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673485: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0067348b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067348e: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00673494: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00673496: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00673499: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67349bu); call_ind(t); }
    /* 0067349b: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067349d: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 006734a2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006734a5: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006734ab: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006734ae: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006734b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006734b6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006734b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6734bbu); call_ind(t); }
    /* 006734bb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006734bd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006734c0: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006734c6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006734c9: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006734cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006734d1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006734d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6734d6u); call_ind(t); }
L_006734d6:; BB(0x006734d6);
    /* 006734d6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006734d9: movzx edx, byte ptr [ecx + 0x1c4] */ r_edx = (u32)R8((u32)(r_ecx+0x1c4u));
    /* 006734e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006734e2: je 0x673682 */ if (fZ) goto L_00673682;
L_006734e8:; BB(0x006734e8);
    /* 006734e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006734ea: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006734ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006734ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006734f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006734f2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006734f4: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 006734f9: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 006734fb: push 0x6dfc18 */ { u32 v = 0x6dfc18u; r_esp -= 4; W32(r_esp, v); }
    /* 00673500: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673505u); f_00630f40();
    /* 00673505: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673509: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067350b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067350d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673510: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x673515u); f_005fa5b0();
    /* 00673515: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067351a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67351fu); f_00686d82();
    /* 0067351f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673522: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00673525: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067352c: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673530: je 0x67354b */ if (fZ) goto L_0067354b;
L_00673532:; BB(0x00673532);
    /* 00673532: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673535: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x67353au); f_006280d0();
    /* 0067353a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067353d: mov dword ptr [eax], 0x6e1564 */ W32((u32)(r_eax), 0x6e1564u);
    /* 00673543: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673546: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00673549: jmp 0x673552 */ goto L_00673552;
L_0067354b:; BB(0x0067354b);
    /* 0067354b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00673552:; BB(0x00673552);
    /* 00673552: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00673555: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00673558: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067355f: push 0x30d4ee */ { u32 v = 0x30d4eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00673564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067356a: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067356c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0067356e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00673570: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00673572: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00673574: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00673579: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067357b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067357d: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0067357f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00673581: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00673583: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00673588: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0067358a: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0067358c: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00673591: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00673596: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00673598: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067359d: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 006735a2: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006735a4: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 006735a9: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006735ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006735b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006735b2: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 006735b4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006735b6: push 0x30d4ec */ { u32 v = 0x30d4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006735bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006735bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006735c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006735c1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006735c4: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x6735c9u); f_005fac90();
    /* 006735c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006735cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006735cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006735cf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006735d1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006735d3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006735d5: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006735da: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006735dc: push 0x6e1540 */ { u32 v = 0x6e1540u; r_esp -= 4; W32(r_esp, v); }
    /* 006735e1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6735e6u); f_00630f40();
    /* 006735e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006735e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006735ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006735ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006735ee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006735f1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6735f6u); f_005fa5b0();
    /* 006735f6: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006735fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x673600u); f_00686d82();
    /* 00673600: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673603: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00673606: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067360d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673611: je 0x67362c */ if (fZ) goto L_0067362c;
L_00673613:; BB(0x00673613);
    /* 00673613: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00673616: call 0x60b4a0 */ r_esp -= 4; W32(r_esp, 0x67361bu); f_0060b4a0();
    /* 0067361b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067361e: mov dword ptr [ecx], 0x6e147c */ W32((u32)(r_ecx), 0x6e147cu);
    /* 00673624: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00673627: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0067362a: jmp 0x673633 */ goto L_00673633;
L_0067362c:; BB(0x0067362c);
    /* 0067362c: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00673633:; BB(0x00673633);
    /* 00673633: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00673636: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00673639: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673640: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673642: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00673644: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673646: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00673648: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067364a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067364c: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 00673651: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00673653: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673658: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0067365a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067365c: push 0x30d4e9 */ { u32 v = 0x30d4e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00673661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673663: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00673666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673667: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067366a: call 0x5fa6a0 */ r_esp -= 4; W32(r_esp, 0x67366fu); f_005fa6a0();
    /* 0067366f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673672: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00673678: call 0x674060 */ r_esp -= 4; W32(r_esp, 0x67367du); f_00674060();
    /* 0067367d: jmp 0x673798 */ goto L_00673798;
L_00673682:; BB(0x00673682);
    /* 00673682: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673684: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00673686: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673688: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067368a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067368c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0067368e: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00673693: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00673695: push 0x6dfd28 */ { u32 v = 0x6dfd28u; r_esp -= 4; W32(r_esp, v); }
    /* 0067369a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67369fu); f_00630f40();
    /* 0067369f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006736a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006736a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006736a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006736a7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006736aa: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6736afu); f_005fa5b0();
    /* 006736af: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 006736b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006736b3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006736b5: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006736b7: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006736b9: push 0x6de780 */ { u32 v = 0x6de780u; r_esp -= 4; W32(r_esp, v); }
    /* 006736be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6736c3u); f_00630f40();
    /* 006736c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006736c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006736c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006736c9: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 006736ce: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006736d3: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006736d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006736da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006736dc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006736df: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6736e4u); f_005f9de0();
    /* 006736e4: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 006736e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6736eeu); f_00686d82();
    /* 006736ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006736f1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006736f4: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006736fb: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006736ff: je 0x67371a */ if (fZ) goto L_0067371a;
L_00673701:; BB(0x00673701);
    /* 00673701: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00673704: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x673709u); f_006280d0();
    /* 00673709: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0067370c: mov dword ptr [eax], 0x6e1564 */ W32((u32)(r_eax), 0x6e1564u);
    /* 00673712: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00673715: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00673718: jmp 0x673721 */ goto L_00673721;
L_0067371a:; BB(0x0067371a);
    /* 0067371a: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00673721:; BB(0x00673721);
    /* 00673721: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00673724: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00673727: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067372e: push 0x30d4ee */ { u32 v = 0x30d4eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00673733: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673735: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673739: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067373b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0067373d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067373f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00673741: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00673743: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00673748: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067374a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067374c: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0067374e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00673750: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00673752: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00673757: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00673759: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0067375b: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00673760: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00673765: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00673767: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067376c: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00673771: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673773: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 00673778: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067377d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067377f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673781: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00673783: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673785: push 0x30d4ec */ { u32 v = 0x30d4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0067378a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067378c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067378f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673790: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673793: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x673798u); f_005fac90();
L_00673798:; BB(0x00673798);
    /* 00673798: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067379b: call 0x673c20 */ r_esp -= 4; W32(r_esp, 0x6737a0u); f_00673c20();
    /* 006737a0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006737a3: movzx edx, byte ptr [ecx + 0x1c4] */ r_edx = (u32)R8((u32)(r_ecx+0x1c4u));
    /* 006737aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006737ac: jne 0x6737f0 */ if (!fZ) goto L_006737f0;
L_006737ae:; BB(0x006737ae);
    /* 006737ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006737b0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006737b3: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6737b8u); f_005fb720();
    /* 006737b8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006737bb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006737be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006737c0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006737c3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006737c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6737cbu); call_ind(t); }
    /* 006737cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006737cd: je 0x6737f0 */ if (fZ) goto L_006737f0;
L_006737cf:; BB(0x006737cf);
    /* 006737cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006737d1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006737d4: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6737d9u); f_005fb720();
    /* 006737d9: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006737dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006737de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006737e0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006737e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006737e5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006737e8: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006737ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6737f0u); call_ind(t); }
L_006737f0:; BB(0x006737f0);
    /* 006737f0: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 006737f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6737f7u); f_00686d82();
    /* 006737f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006737fa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006737fd: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00673804: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673808: je 0x673823 */ if (fZ) goto L_00673823;
L_0067380a:; BB(0x0067380a);
    /* 0067380a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067380d: call 0x680b70 */ r_esp -= 4; W32(r_esp, 0x673812u); f_00680b70();
    /* 00673812: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00673815: mov dword ptr [ecx], 0x6e13c4 */ W32((u32)(r_ecx), 0x6e13c4u);
    /* 0067381b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067381e: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00673821: jmp 0x67382a */ goto L_0067382a;
L_00673823:; BB(0x00673823);
    /* 00673823: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0067382a:; BB(0x0067382a);
    /* 0067382a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067382d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00673830: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673837: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067383a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067383d: mov dword ptr [ecx + 0x1c0], edx */ W32((u32)(r_ecx+0x1c0u), r_edx);
    /* 00673843: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673846: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0067384c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067384f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00673852: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673854: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673856: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00673858: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0067385a: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 0067385f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00673861: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673863: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00673865: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067386a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67386fu); f_00630f40();
    /* 0067386f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673873: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673878: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067387d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673882: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673887: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673889: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0067388b: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067388d: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 00673892: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673894: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00673899: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067389b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067389e: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 006738a4: call 0x680ca0 */ r_esp -= 4; W32(r_esp, 0x6738a9u); f_00680ca0();
    /* 006738a9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006738ac: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 006738b2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006738b5: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 006738bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006738bd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006738c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6738c2u); call_ind(t); }
    /* 006738c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006738c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006738cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006738cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006738cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006738d0: ret 4 */ FN_RET(0x00673130); r_esp += 8; return;
}

void f_00674500(void) /* SaveGameHelpGroupBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674500);
    /* 00674500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674501: mov ebp, esp */ r_ebp = r_esp;
    /* 00674503: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674506: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00674509: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00674510: cmp dword ptr [0x16306d0], 0 */ {  u32 a = R32((u32)(0x16306d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674517: jne 0x67451e */ if (!fZ) goto L_0067451e;
L_00674519:; BB(0x00674519);
    /* 00674519: jmp 0x67482f */ goto L_0067482f;
L_0067451e:; BB(0x0067451e);
    /* 0067451e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674520: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674526: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x67452bu); f_005fb300();
    /* 0067452b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067452e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00674535: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00674537: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067453d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x674542u); f_005fb300();
    /* 00674542: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00674545: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0067454c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067454e: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674554: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x674559u); f_005fb720();
    /* 00674559: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0067455c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067455f: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 00674566: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067456c: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00674572: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00674575: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 0067457c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067457e: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674584: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x674589u); f_005fb810();
    /* 00674589: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067458c: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 00674593: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00674595: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067459b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6745a0u); f_005fb300();
    /* 006745a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006745a3: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 006745aa: mov dword ptr [ebp - 0xc], 6 */ W32((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 006745b1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006745b8: jmp 0x6745c3 */ goto L_006745c3;
L_006745ba:; BB(0x006745ba);
    /* 006745ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006745c0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006745c3:; BB(0x006745c3);
    /* 006745c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745c6: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006745c9: jge 0x674606 */ if ((fS==fO)) goto L_00674606;
L_006745cb:; BB(0x006745cb);
    /* 006745cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745ce: cmp dword ptr [ebp + edx*8 - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745d3: je 0x674604 */ if (fZ) goto L_00674604;
L_006745d5:; BB(0x006745d5);
    /* 006745d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006745d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006745d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745dc: mov edx, dword ptr [ebp + ecx*8 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffc4u));
    /* 006745e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745e3: mov ecx, dword ptr [ebp + eax*8 - 0x3c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffc4u));
    /* 006745e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006745e9: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006745ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6745f1u); call_ind(t); }
    /* 006745f1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006745f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745f6: je 0x674604 */ if (fZ) goto L_00674604;
L_006745f8:; BB(0x006745f8);
    /* 006745f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006745fb: mov eax, dword ptr [ebp + edx*8 - 0x38] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffc8u));
    /* 006745ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00674602: jmp 0x674606 */ goto L_00674606;
L_00674604:; BB(0x00674604);
    /* 00674604: jmp 0x6745ba */ goto L_006745ba;
L_00674606:; BB(0x00674606);
    /* 00674606: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067460a: jne 0x674635 */ if (!fZ) goto L_00674635;
L_0067460c:; BB(0x0067460c);
    /* 0067460c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0067460f: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674613: jne 0x674630 */ if (!fZ) goto L_00674630;
L_00674615:; BB(0x00674615);
    /* 00674615: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067461a: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067461d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00674620: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674623: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674626: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674628: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067462e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674630u); call_ind(t); }
L_00674630:; BB(0x00674630);
    /* 00674630: jmp 0x67482f */ goto L_0067482f;
L_00674635:; BB(0x00674635);
    /* 00674635: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067463b: movzx edx, byte ptr [ecx + 0x1c4] */ r_edx = (u32)R8((u32)(r_ecx+0x1c4u));
    /* 00674642: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674644: je 0x67473f */ if (fZ) goto L_0067473f;
L_0067464a:; BB(0x0067464a);
    /* 0067464a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067464e: jne 0x67467a */ if (!fZ) goto L_0067467a;
L_00674650:; BB(0x00674650);
    /* 00674650: push 0x6e1900 */ { u32 v = 0x6e1900u; r_esp -= 4; W32(r_esp, v); }
    /* 00674655: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67465au); f_00630f40();
    /* 0067465a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067465d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00674660: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00674663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674664: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674667: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0067466a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067466d: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00674670: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00674672: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00674678: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67467au); call_ind(t); }
L_0067467a:; BB(0x0067467a);
    /* 0067467a: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067467e: jne 0x6746aa */ if (!fZ) goto L_006746aa;
L_00674680:; BB(0x00674680);
    /* 00674680: push 0x6e18e0 */ { u32 v = 0x6e18e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674685: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67468au); f_00630f40();
    /* 0067468a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067468d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00674690: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00674693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674694: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674697: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067469a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067469d: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006746a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006746a2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006746a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6746aau); call_ind(t); }
L_006746aa:; BB(0x006746aa);
    /* 006746aa: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006746ae: jne 0x6746da */ if (!fZ) goto L_006746da;
L_006746b0:; BB(0x006746b0);
    /* 006746b0: push 0x6e18c0 */ { u32 v = 0x6e18c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006746b5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6746bau); f_00630f40();
    /* 006746ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006746bd: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006746c0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006746c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006746c4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006746c7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006746ca: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006746cd: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006746d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006746d2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006746d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6746dau); call_ind(t); }
L_006746da:; BB(0x006746da);
    /* 006746da: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006746de: jne 0x67470a */ if (!fZ) goto L_0067470a;
L_006746e0:; BB(0x006746e0);
    /* 006746e0: push 0x6e18a0 */ { u32 v = 0x6e18a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006746e5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6746eau); f_00630f40();
    /* 006746ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006746ed: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006746f0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006746f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006746f4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006746f7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006746fa: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006746fd: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674700: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674702: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00674708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67470au); call_ind(t); }
L_0067470a:; BB(0x0067470a);
    /* 0067470a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067470e: jne 0x67473a */ if (!fZ) goto L_0067473a;
L_00674710:; BB(0x00674710);
    /* 00674710: push 0x6e1880 */ { u32 v = 0x6e1880u; r_esp -= 4; W32(r_esp, v); }
    /* 00674715: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67471au); f_00630f40();
    /* 0067471a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067471d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00674720: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00674723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674724: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674727: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067472a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067472d: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674730: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674732: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00674738: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67473au); call_ind(t); }
L_0067473a:; BB(0x0067473a);
    /* 0067473a: jmp 0x67482f */ goto L_0067482f;
L_0067473f:; BB(0x0067473f);
    /* 0067473f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674743: jne 0x67476f */ if (!fZ) goto L_0067476f;
L_00674745:; BB(0x00674745);
    /* 00674745: push 0x6e1860 */ { u32 v = 0x6e1860u; r_esp -= 4; W32(r_esp, v); }
    /* 0067474a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67474fu); f_00630f40();
    /* 0067474f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674752: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00674755: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00674758: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674759: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067475c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067475f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674762: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674765: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674767: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067476d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67476fu); call_ind(t); }
L_0067476f:; BB(0x0067476f);
    /* 0067476f: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674773: jne 0x67479f */ if (!fZ) goto L_0067479f;
L_00674775:; BB(0x00674775);
    /* 00674775: push 0x6e1840 */ { u32 v = 0x6e1840u; r_esp -= 4; W32(r_esp, v); }
    /* 0067477a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67477fu); f_00630f40();
    /* 0067477f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674782: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00674785: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00674788: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674789: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067478c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067478f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674792: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674795: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674797: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067479d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67479fu); call_ind(t); }
L_0067479f:; BB(0x0067479f);
    /* 0067479f: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006747a3: jne 0x6747cf */ if (!fZ) goto L_006747cf;
L_006747a5:; BB(0x006747a5);
    /* 006747a5: push 0x6e1820 */ { u32 v = 0x6e1820u; r_esp -= 4; W32(r_esp, v); }
    /* 006747aa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6747afu); f_00630f40();
    /* 006747af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006747b2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006747b5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006747b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006747b9: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006747bc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006747bf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006747c2: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006747c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006747c7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006747cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6747cfu); call_ind(t); }
L_006747cf:; BB(0x006747cf);
    /* 006747cf: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006747d3: jne 0x6747ff */ if (!fZ) goto L_006747ff;
L_006747d5:; BB(0x006747d5);
    /* 006747d5: push 0x6e1800 */ { u32 v = 0x6e1800u; r_esp -= 4; W32(r_esp, v); }
    /* 006747da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6747dfu); f_00630f40();
    /* 006747df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006747e2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006747e5: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006747e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006747e9: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006747ec: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006747ef: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006747f2: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006747f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006747f7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006747fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6747ffu); call_ind(t); }
L_006747ff:; BB(0x006747ff);
    /* 006747ff: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674803: jne 0x67482f */ if (!fZ) goto L_0067482f;
L_00674805:; BB(0x00674805);
    /* 00674805: push 0x6e17e0 */ { u32 v = 0x6e17e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067480a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67480fu); f_00630f40();
    /* 0067480f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674812: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00674815: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00674818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674819: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067481c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067481f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00674822: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00674825: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674827: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067482d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67482fu); call_ind(t); }
L_0067482f:; BB(0x0067482f);
    /* 0067482f: mov esp, ebp */ r_esp = r_ebp;
    /* 00674831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674832: ret 4 */ FN_RET(0x00674500); r_esp += 8; return;
}

