#include "protos.h"

void f_00656980(void) /* FaceMakerDialogPageRadioButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656980);
    /* 00656980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656981: mov ebp, esp */ r_ebp = r_esp;
    /* 00656983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656985: push 0x6ac659 */ { u32 v = 0x6ac659u; r_esp -= 4; W32(r_esp, v); }
    /* 0065698a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00656990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656991: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656997: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065699c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065699e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065699f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006569a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006569a8: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 006569ab: mov dword ptr [ebp - 0x2c], 0x1e84da */ W32((u32)(r_ebp+0xffffffd4u), 0x1e84dau);
    /* 006569b2: mov dword ptr [ebp - 0x28], 0x1e84db */ W32((u32)(r_ebp+0xffffffd8u), 0x1e84dbu);
    /* 006569b9: mov dword ptr [ebp - 0x24], 0x1e84dc */ W32((u32)(r_ebp+0xffffffdcu), 0x1e84dcu);
    /* 006569c0: mov dword ptr [ebp - 0x20], 0x1e84dd */ W32((u32)(r_ebp+0xffffffe0u), 0x1e84ddu);
    /* 006569c7: mov dword ptr [ebp - 0x1c], 0x1e8499 */ W32((u32)(r_ebp+0xffffffe4u), 0x1e8499u);
    /* 006569ce: mov dword ptr [ebp - 0x18], 0x1e849a */ W32((u32)(r_ebp+0xffffffe8u), 0x1e849au);
    /* 006569d5: mov dword ptr [ebp - 0x14], 0x1e849b */ W32((u32)(r_ebp+0xffffffecu), 0x1e849bu);
    /* 006569dc: mov dword ptr [ebp - 0x10], 0x1e849c */ W32((u32)(r_ebp+0xfffffff0u), 0x1e849cu);
    /* 006569e3: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 006569ea: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006569f1: mov dword ptr [ebp - 0x58], 2 */ W32((u32)(r_ebp+0xffffffa8u), 0x2u);
    /* 006569f8: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 006569ff: mov dword ptr [ebp - 0x50], 5 */ W32((u32)(r_ebp+0xffffffb0u), 0x5u);
    /* 00656a06: mov dword ptr [ebp - 0x4c], 6 */ W32((u32)(r_ebp+0xffffffb4u), 0x6u);
    /* 00656a0d: mov dword ptr [ebp - 0x48], 7 */ W32((u32)(r_ebp+0xffffffb8u), 0x7u);
    /* 00656a14: mov dword ptr [ebp - 0x44], 8 */ W32((u32)(r_ebp+0xffffffbcu), 0x8u);
    /* 00656a1b: mov dword ptr [ebp - 0x40], 0xa */ W32((u32)(r_ebp+0xffffffc0u), 0xau);
    /* 00656a22: mov dword ptr [ebp - 0x3c], 0xb */ W32((u32)(r_ebp+0xffffffc4u), 0xbu);
    /* 00656a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a2d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a31: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a33: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a3e: push 0x1e84a3 */ { u32 v = 0x1e84a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a43: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a4a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656a4d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656a52u); f_005f9de0();
    /* 00656a52: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656a55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a5d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a5f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a64: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a6a: push 0x1e84a4 */ { u32 v = 0x1e84a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a6f: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a76: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656a79: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656a7eu); f_005f9de0();
    /* 00656a7e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656a81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a85: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a89: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656a8b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a90: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a96: push 0x1e8495 */ { u32 v = 0x1e8495u; r_esp -= 4; W32(r_esp, v); }
    /* 00656a9b: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 00656aa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656aa2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656aa5: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656aaau); f_005f9de0();
    /* 00656aaa: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656aaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ab1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ab3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ab5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ab7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656abc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656abe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ac0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ac2: push 0x1e848a */ { u32 v = 0x1e848au; r_esp -= 4; W32(r_esp, v); }
    /* 00656ac7: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00656acc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ace: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656ad1: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656ad6u); f_005f9de0();
    /* 00656ad6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656ad9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656adb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656add: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656adf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ae1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ae3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ae8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656aea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656aec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656aee: push 0x1e84bb */ { u32 v = 0x1e84bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00656af3: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00656af8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656afa: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656afd: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656b02u); f_005f9de0();
    /* 00656b02: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656b05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b0d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b0f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b14: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b1a: push 0x1e848d */ { u32 v = 0x1e848du; r_esp -= 4; W32(r_esp, v); }
    /* 00656b1f: push 0x3ee */ { u32 v = 0x3eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b26: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656b29: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656b2eu); f_005f9de0();
    /* 00656b2e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656b31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b39: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b3b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b40: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b46: push 0x1e8490 */ { u32 v = 0x1e8490u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b4b: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b52: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656b55: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656b5au); f_005f9de0();
    /* 00656b5a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656b5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b65: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b67: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b6c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b72: push 0x1e8485 */ { u32 v = 0x1e8485u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b77: push 0x3ef */ { u32 v = 0x3efu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b7e: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656b81: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656b86u); f_005f9de0();
    /* 00656b86: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00656b89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b8d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b91: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656b93: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b98: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b9e: push 0x1e84aa */ { u32 v = 0x1e84aau; r_esp -= 4; W32(r_esp, v); }
    /* 00656ba3: push 0x3f0 */ { u32 v = 0x3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ba8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656baa: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656bad: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656bb2u); f_005f9de0();
    /* 00656bb2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656bb5: mov dword ptr [ecx + 0x284], eax */ W32((u32)(r_ecx+0x284u), r_eax);
    /* 00656bbb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656bbd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656bbf: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656bc2: mov ecx, dword ptr [edx + 0x284] */ r_ecx = R32((u32)(r_edx+0x284u));
    /* 00656bc8: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x656bcdu); f_00602ef0();
    /* 00656bcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656bcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656bd1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656bd5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656bd7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656bdc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656bde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656be0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656be2: push 0x1e84ab */ { u32 v = 0x1e84abu; r_esp -= 4; W32(r_esp, v); }
    /* 00656be7: push 0x3f1 */ { u32 v = 0x3f1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656bec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656bee: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656bf1: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656bf6u); f_005f9de0();
    /* 00656bf6: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656bf9: mov dword ptr [ecx + 0x288], eax */ W32((u32)(r_ecx+0x288u), r_eax);
    /* 00656bff: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656c01: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656c03: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656c06: mov ecx, dword ptr [edx + 0x288] */ r_ecx = R32((u32)(r_edx+0x288u));
    /* 00656c0c: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x656c11u); f_00602ef0();
    /* 00656c11: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00656c18: mov dword ptr [ebp - 0x70], 2 */ W32((u32)(r_ebp+0xffffff90u), 0x2u);
    /* 00656c1f: mov dword ptr [ebp - 0x6c], 3 */ W32((u32)(r_ebp+0xffffff94u), 0x3u);
    /* 00656c26: mov dword ptr [ebp - 0x68], 4 */ W32((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 00656c2d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00656c34: jmp 0x656c3f */ goto L_00656c3f;
L_00656c36:; BB(0x00656c36);
    /* 00656c36: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656c3c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00656c3f:; BB(0x00656c3f);
    /* 00656c3f: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656c43: jge 0x656ce5 */ if ((fS==fO)) goto L_00656ce5;
L_00656c49:; BB(0x00656c49);
    /* 00656c49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656c4d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656c4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656c51: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656c53: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c58: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c5b: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656c5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656c5f: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c63: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c66: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 00656c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656c6b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c6e: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656c75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c77: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656c7a: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656c7fu); f_005f9de0();
    /* 00656c7f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c82: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656c85: mov dword ptr [ecx + edx*4 + 0x28c], eax */ W32((u32)(r_ecx+r_edx*4+0x28cu), r_eax);
    /* 00656c8c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c8f: mov al, byte ptr [ebp + edx*4 - 0x74] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx*4+0xffffff8cu))) & 0xffu);
    /* 00656c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656c94: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656c97: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656c9a: mov ecx, dword ptr [edx + ecx*4 + 0x28c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28cu));
    /* 00656ca1: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x656ca6u); f_006026f0();
    /* 00656ca6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656ca9: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656cac: mov edx, dword ptr [ecx + eax*4 + 0x28c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x28cu));
    /* 00656cb3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656cb6: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656cb9: mov ecx, dword ptr [ecx + eax*4 + 0x28c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x28cu));
    /* 00656cc0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00656cc2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00656cc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656ccau); call_ind(t); }
    /* 00656cca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656ccc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00656cce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656cd1: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656cd4: mov ecx, dword ptr [edx + ecx*4 + 0x28c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28cu));
    /* 00656cdb: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x656ce0u); f_00602ef0();
    /* 00656ce0: jmp 0x656c36 */ goto L_00656c36;
L_00656ce5:; BB(0x00656ce5);
    /* 00656ce5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00656cec: jmp 0x656cf7 */ goto L_00656cf7;
L_00656cee:; BB(0x00656cee);
    /* 00656cee: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656cf1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656cf4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00656cf7:; BB(0x00656cf7);
    /* 00656cf7: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656cfb: jge 0x656d75 */ if ((fS==fO)) goto L_00656d75;
L_00656cfd:; BB(0x00656cfd);
    /* 00656cfd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d00: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656d03: cmp dword ptr [edx + ecx*4 + 0x414], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x414u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656d0b: jne 0x656d70 */ if (!fZ) goto L_00656d70;
L_00656d0d:; BB(0x00656d0d);
    /* 00656d0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d11: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d15: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d17: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d22: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d25: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 00656d29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656d2a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d2d: add edx, 0x3f6 */ {  u32 a = r_edx; u32 b = 0x3f6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656d33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656d34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d36: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656d39: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x656d3eu); f_005f9de0();
    /* 00656d3e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d41: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656d44: mov dword ptr [edx + ecx*4 + 0x414], eax */ W32((u32)(r_edx+r_ecx*4+0x414u), r_eax);
    /* 00656d4b: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d4f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d52: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656d55: mov edx, dword ptr [ecx + eax*4 + 0x414] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x414u));
    /* 00656d5c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d5f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656d62: mov ecx, dword ptr [ecx + eax*4 + 0x414] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x414u));
    /* 00656d69: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00656d6b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00656d6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656d70u); call_ind(t); }
L_00656d70:; BB(0x00656d70);
    /* 00656d70: jmp 0x656cee */ goto L_00656cee;
L_00656d75:; BB(0x00656d75);
    /* 00656d75: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00656d7c: jmp 0x656d87 */ goto L_00656d87;
L_00656d7e:; BB(0x00656d7e);
    /* 00656d7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656d81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656d84: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00656d87:; BB(0x00656d87);
    /* 00656d87: cmp dword ptr [ebp - 0x30], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656d8b: jge 0x656dd8 */ if ((fS==fO)) goto L_00656dd8;
L_00656d8d:; BB(0x00656d8d);
    /* 00656d8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d8f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d91: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d95: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656d99: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656d9e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00656da0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656da2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656da4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656da7: add edx, 0x1e85ac */ {  u32 a = r_edx; u32 b = 0x1e85acu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656dad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656dae: push 0x3fa */ { u32 v = 0x3fau; r_esp -= 4; W32(r_esp, v); }
    /* 00656db3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656db6: mov ecx, dword ptr [ebp + eax*4 - 0x60] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa0u));
    /* 00656dba: add ecx, 0x403 */ {  u32 a = r_ecx; u32 b = 0x403u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656dc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656dc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656dc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656dc5: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656dc8: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x656dcdu); f_005f9ff0();
    /* 00656dcd: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656dd0: mov dword ptr [edx + 0x424], eax */ W32((u32)(r_edx+0x424u), r_eax);
    /* 00656dd6: jmp 0x656d7e */ goto L_00656d7e;
L_00656dd8:; BB(0x00656dd8);
    /* 00656dd8: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00656ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656ddc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656ddf: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656de5: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656de8: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00656dee: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00656df4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x656df6u); call_ind(t); }
    /* 00656df6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656df8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656dfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656dfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656dfe: push 0x1e84de */ { u32 v = 0x1e84deu; r_esp -= 4; W32(r_esp, v); }
    /* 00656e03: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656e06: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656e0c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x656e11u); f_005eae80();
    /* 00656e11: mov eax, dword ptr [0x77089c] */ r_eax = R32((u32)(0x77089cu));
    /* 00656e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e17: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656e1a: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656e20: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656e23: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00656e29: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00656e2f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x656e31u); call_ind(t); }
    /* 00656e31: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656e34: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656e3a: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00656e3d: mov edx, dword ptr [eax + 0x29c] */ r_edx = R32((u32)(r_eax+0x29cu));
    /* 00656e43: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00656e46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656e48u); call_ind(t); }
    /* 00656e48: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00656e4f: jmp 0x656e5a */ goto L_00656e5a;
L_00656e51:; BB(0x00656e51);
    /* 00656e51: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656e54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656e57: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00656e5a:; BB(0x00656e5a);
    /* 00656e5a: cmp dword ptr [ebp - 0x30], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656e5e: jge 0x656f20 */ if ((fS==fO)) goto L_00656f20;
L_00656e64:; BB(0x00656e64);
    /* 00656e64: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656e67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656e6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e6b: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e70: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00656e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e74: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x656e7au); call_ind(t); }
    /* 00656e7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656e7d: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e82: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x656e87u); f_00686d82();
    /* 00656e87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656e8a: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00656e8d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00656e94: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656e98: je 0x656eb6 */ if (fZ) goto L_00656eb6;
L_00656e9a:; BB(0x00656e9a);
    /* 00656e9a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00656e9d: call 0x6060a0 */ r_esp -= 4; W32(r_esp, 0x656ea2u); f_006060a0();
    /* 00656ea2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00656ea5: mov dword ptr [ecx], 0x6de3ac */ W32((u32)(r_ecx), 0x6de3acu);
    /* 00656eab: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00656eae: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00656eb4: jmp 0x656ec0 */ goto L_00656ec0;
L_00656eb6:; BB(0x00656eb6);
    /* 00656eb6: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00656ec0:; BB(0x00656ec0);
    /* 00656ec0: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00656ec6: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00656ec9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656ed0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ed2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ed4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ed6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ed8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656eda: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00656edc: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00656edf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656ee0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ee2: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ee7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656eea: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00656eed: add edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656ef1: push 0x1e84cd */ { u32 v = 0x1e84cdu; r_esp -= 4; W32(r_esp, v); }
    /* 00656ef6: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00656efb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656efe: add eax, 0x473 */ {  u32 a = r_eax; u32 b = 0x473u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656f04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f06: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00656f09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656f0a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f0d: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x656f12u); f_005f9ff0();
    /* 00656f12: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f15: mov dword ptr [edx + 0x428], eax */ W32((u32)(r_edx+0x428u), r_eax);
    /* 00656f1b: jmp 0x656e51 */ goto L_00656e51;
L_00656f20:; BB(0x00656f20);
    /* 00656f20: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656f24: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f27: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656f2d: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f30: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00656f36: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00656f3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x656f3eu); call_ind(t); }
    /* 00656f3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656f40: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f42: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f44: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 00656f49: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 00656f4e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f50: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f52: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f54: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f59: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f5c: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656f62: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x656f67u); f_005ec8f0();
    /* 00656f67: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f6a: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656f70: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f73: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00656f79: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00656f7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656f7eu); call_ind(t); }
    /* 00656f7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f80: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f8d: push 0x1e84df */ { u32 v = 0x1e84dfu; r_esp -= 4; W32(r_esp, v); }
    /* 00656f92: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656f94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f96: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656f99: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x656f9eu); f_005f9ce0();
    /* 00656f9e: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656fa1: mov dword ptr [ecx + 0x604], eax */ W32((u32)(r_ecx+0x604u), r_eax);
    /* 00656fa7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00656fae: jmp 0x656fb9 */ goto L_00656fb9;
L_00656fb0:; BB(0x00656fb0);
    /* 00656fb0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656fb3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656fb6: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00656fb9:; BB(0x00656fb9);
    /* 00656fb9: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656fbd: jge 0x657000 */ if ((fS==fO)) goto L_00657000;
L_00656fbf:; BB(0x00656fbf);
    /* 00656fbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fc1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656fc5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656fc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656fc9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fcb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fd0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fd6: push 0x1e84e0 */ { u32 v = 0x1e84e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fdb: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fe0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00656fe3: add eax, 0x3fd */ {  u32 a = r_eax; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656fe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656fe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656feb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fed: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656ff0: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x656ff5u); f_005f9ff0();
    /* 00656ff5: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00656ff8: mov dword ptr [ecx + 0x600], eax */ W32((u32)(r_ecx+0x600u), r_eax);
    /* 00656ffe: jmp 0x656fb0 */ goto L_00656fb0;
L_00657000:; BB(0x00657000);
    /* 00657000: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657002: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00657005: mov ecx, dword ptr [edx + 0x600] */ r_ecx = R32((u32)(r_edx+0x600u));
    /* 0065700b: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657010u); f_00606350();
    /* 00657010: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00657016: push 0x1e84e0 */ { u32 v = 0x1e84e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065701b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00657021: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657023: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00657029: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0065702f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657031u); call_ind(t); }
    /* 00657031: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657033: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00657036: mov ecx, dword ptr [ecx + 0x600] */ r_ecx = R32((u32)(r_ecx+0x600u));
    /* 0065703c: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657041u); f_00606350();
    /* 00657041: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00657047: push 0x1e84e1 */ { u32 v = 0x1e84e1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065704c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00657052: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00657054: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0065705a: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00657060: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x657062u); call_ind(t); }
    /* 00657062: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00657064: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00657067: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 0065706d: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x657072u); f_00606350();
    /* 00657072: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00657078: push 0x1e84e2 */ { u32 v = 0x1e84e2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065707d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00657083: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00657085: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0065708b: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00657091: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657093u); call_ind(t); }
    /* 00657093: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00657095: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00657098: mov ecx, dword ptr [ecx + 0x600] */ r_ecx = R32((u32)(r_ecx+0x600u));
    /* 0065709e: call 0x6064e0 */ r_esp -= 4; W32(r_esp, 0x6570a3u); f_006064e0();
    /* 006570a3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006570a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006570ab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006570b1: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 006570b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6570b9u); call_ind(t); }
    /* 006570b9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006570bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006570be: je 0x657199 */ if (fZ) goto L_00657199;
L_006570c4:; BB(0x006570c4);
    /* 006570c4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006570c6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006570c8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006570ca: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006570cc: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006570d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006570d3: push 0x1390 */ { u32 v = 0x1390u; r_esp -= 4; W32(r_esp, v); }
    /* 006570d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006570da: push 0x1a1 */ { u32 v = 0x1a1u; r_esp -= 4; W32(r_esp, v); }
    /* 006570df: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 006570e4: push 0x231ae1 */ { u32 v = 0x231ae1u; r_esp -= 4; W32(r_esp, v); }
    /* 006570e9: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006570ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006570f0: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006570f3: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x6570f8u); f_005faee0();
    /* 006570f8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006570fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006570fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006570ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657101: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657105: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065710a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065710c: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 00657111: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00657116: push 0x231ae0 */ { u32 v = 0x231ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065711b: push 0x401 */ { u32 v = 0x401u; r_esp -= 4; W32(r_esp, v); }
    /* 00657120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657122: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00657125: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65712au); f_005f9de0();
    /* 0065712a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065712c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065712e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00657131: call 0x602e30 */ r_esp -= 4; W32(r_esp, 0x657136u); f_00602e30();
    /* 00657136: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 0065713d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065713f: je 0x657199 */ if (fZ) goto L_00657199;
L_00657141:; BB(0x00657141);
    /* 00657141: mov dword ptr [ebp - 0x30], 0x186e1 */ W32((u32)(r_ebp+0xffffffd0u), 0x186e1u);
    /* 00657148: jmp 0x657153 */ goto L_00657153;
L_0065714a:; BB(0x0065714a);
    /* 0065714a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065714d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657150: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00657153:; BB(0x00657153);
    /* 00657153: cmp dword ptr [ebp - 0x30], 0x186e4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x186e4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065715a: jg 0x65716d */ if ((!fZ&&fS==fO)) goto L_0065716d;
L_0065715c:; BB(0x0065715c);
    /* 0065715c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065715f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657160: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00657166: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x65716bu); f_005f2ba0();
    /* 0065716b: jmp 0x65714a */ goto L_0065714a;
L_0065716d:; BB(0x0065716d);
    /* 0065716d: mov dword ptr [ebp - 0x30], 0x186e6 */ W32((u32)(r_ebp+0xffffffd0u), 0x186e6u);
    /* 00657174: jmp 0x65717f */ goto L_0065717f;
L_00657176:; BB(0x00657176);
    /* 00657176: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00657179: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065717c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0065717f:; BB(0x0065717f);
    /* 0065717f: cmp dword ptr [ebp - 0x30], 0x186e9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x186e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657186: jg 0x657199 */ if ((!fZ&&fS==fO)) goto L_00657199;
L_00657188:; BB(0x00657188);
    /* 00657188: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065718b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065718c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00657192: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x657197u); f_005f2ba0();
    /* 00657197: jmp 0x657176 */ goto L_00657176;
L_00657199:; BB(0x00657199);
    /* 00657199: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065719c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006571a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006571a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006571a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006571a7: ret  */ FN_RET(0x00656980); r_esp += 4; return;
}

void f_0065b8a0(void) /* FaceMakerDialogPageRadioButton::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065b8a0);
    /* 0065b8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b8a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065b8a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8ab: mov dword ptr [eax + 0x1b8], 3 */ W32((u32)(r_eax+0x1b8u), 0x3u);
    /* 0065b8b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8b8: mov edx, dword ptr [ecx + 0x1b8] */ r_edx = R32((u32)(r_ecx+0x1b8u));
    /* 0065b8be: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b8c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8c4: mov dword ptr [eax + 0x1c0], edx */ W32((u32)(r_eax+0x1c0u), r_edx);
    /* 0065b8ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8cd: mov dword ptr [ecx + 0x1bc], 2 */ W32((u32)(r_ecx+0x1bcu), 0x2u);
    /* 0065b8d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8da: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0065b8e0: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b8e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8e6: mov dword ptr [ecx + 0x1c4], eax */ W32((u32)(r_ecx+0x1c4u), r_eax);
    /* 0065b8ec: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b8ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8f1: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0065b8f7: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x65b8fcu); f_005ef310();
    /* 0065b8fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b8ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b902: mov edx, dword ptr [eax + 0x1c0] */ r_edx = R32((u32)(r_eax+0x1c0u));
    /* 0065b908: sub edx, dword ptr [ecx + 0x1b8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1b8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065b90e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065b911: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065b912: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b915: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0065b91b: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x65b920u); f_005ecc60();
    /* 0065b920: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b923: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b926: mov eax, dword ptr [ecx + 0x1c4] */ r_eax = R32((u32)(r_ecx+0x1c4u));
    /* 0065b92c: sub eax, dword ptr [edx + 0x1bc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1bcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065b932: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b936: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b939: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0065b93f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x65b944u); f_005eccb0();
    /* 0065b944: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b947: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065b949: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b94c: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0065b94f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b951u); call_ind(t); }
    /* 0065b951: mov esi, eax */ r_esi = r_eax;
    /* 0065b953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b956: add esi, dword ptr [eax + 0x1bc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1bcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b95c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b95f: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x65b964u); f_005eb470();
    /* 0065b964: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b966: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b96a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065b96c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b96f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b972: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b974u); call_ind(t); }
    /* 0065b974: mov esi, eax */ r_esi = r_eax;
    /* 0065b976: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b979: add esi, dword ptr [ecx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1b8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b97f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b982: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x65b987u); f_005eb470();
    /* 0065b987: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065b989: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065b98a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b98d: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0065b993: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b996: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0065b99c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065b99e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0065b9a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b9a3u); call_ind(t); }
    /* 0065b9a3: jmp 0x65ba6a */ goto L_0065ba6a;
L_0065ba6a:; BB(0x0065ba6a);
    /* 0065ba6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065ba6b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ba6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ba6e: ret  */ FN_RET(0x0065b8a0); r_esp += 4; return;
}

