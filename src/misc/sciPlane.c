#include "protos.h"

void f_005f79f0(void) /* sciPlane::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f79f0);
    /* 005f79f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f79f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f79f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f79f5: push 0x6aa223 */ { u32 v = 0x6aa223u; r_esp -= 4; W32(r_esp, v); }
    /* 005f79fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a01: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7a04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f7a09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f7a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f7a0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f7a15: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f7a18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a1b: mov dword ptr [eax], 0x6d6cac */ W32((u32)(r_eax), 0x6d6cacu);
    /* 005f7a21: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 005f7a28: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a2b: call 0x5fb0c0 */ r_esp -= 4; W32(r_esp, 0x5f7a30u); f_005fb0c0();
    /* 005f7a30: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a33: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f7a38u); f_005f9a80();
    /* 005f7a38: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a3b: call 0x5f8970 */ r_esp -= 4; W32(r_esp, 0x5f7a40u); f_005f8970();
    /* 005f7a40: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f7a43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7a45: je 0x5f7a6c */ if (fZ) goto L_005f7a6c;
L_005f7a47:; BB(0x005f7a47);
    /* 005f7a47: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f7a4d: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f7a52u); f_005f3fe0();
    /* 005f7a52: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7a55: jne 0x5f7a6c */ if (!fZ) goto L_005f7a6c;
L_005f7a57:; BB(0x005f7a57);
    /* 005f7a57: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a5a: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 005f7a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a61: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f7a67: call 0x5f3f90 */ r_esp -= 4; W32(r_esp, 0x5f7a6cu); f_005f3f90();
L_005f7a6c:; BB(0x005f7a6c);
    /* 005f7a6c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a6f: call 0x5f9b20 */ r_esp -= 4; W32(r_esp, 0x5f7a74u); f_005f9b20();
    /* 005f7a74: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a77: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f7a7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a7e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a81: call 0x5f8ce0 */ r_esp -= 4; W32(r_esp, 0x5f7a86u); f_005f8ce0();
    /* 005f7a86: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7a89: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7a8f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7a94u); f_0060c9a0();
    /* 005f7a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7a96: je 0x5f7aac */ if (fZ) goto L_005f7aac;
L_005f7a98:; BB(0x005f7a98);
    /* 005f7a98: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a9a: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7a9f: push 0x6d6cfc */ { u32 v = 0x6d6cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7aa4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f7aa9u); f_005e9f20();
    /* 005f7aa9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7aac:; BB(0x005f7aac);
    /* 005f7aac: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7aaf: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7ab5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7abau); f_0060c9a0();
    /* 005f7aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7abc: je 0x5f7af9 */ if (fZ) goto L_005f7af9;
L_005f7abe:; BB(0x005f7abe);
    /* 005f7abe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ac0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7ac3: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7ac9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f7aceu); f_0060ca40();
    /* 005f7ace: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f7ad1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7ad4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f7ad7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7adb: je 0x5f7af0 */ if (fZ) goto L_005f7af0;
L_005f7add:; BB(0x005f7add);
    /* 005f7add: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7adf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f7ae2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7ae4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f7ae7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7ae9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f7aebu); call_ind(t); }
    /* 005f7aeb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f7aee: jmp 0x5f7af7 */ goto L_005f7af7;
L_005f7af0:; BB(0x005f7af0);
    /* 005f7af0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005f7af7:; BB(0x005f7af7);
    /* 005f7af7: jmp 0x5f7aac */ goto L_005f7aac;
L_005f7af9:; BB(0x005f7af9);
    /* 005f7af9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7afc: cmp dword ptr [eax + 0x14c], 0 */ {  u32 a = R32((u32)(r_eax+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7b03: je 0x5f7b1d */ if (fZ) goto L_005f7b1d;
L_005f7b05:; BB(0x005f7b05);
    /* 005f7b05: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7b08: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 005f7b0e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f7b11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b15: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5f7b1au); f_00686cae();
    /* 005f7b1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7b1d:; BB(0x005f7b1d);
    /* 005f7b1d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7b20: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7b26: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7b2bu); f_0060c9a0();
    /* 005f7b2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7b2d: je 0x5f7b43 */ if (fZ) goto L_005f7b43;
L_005f7b2f:; BB(0x005f7b2f);
    /* 005f7b2f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b31: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b36: push 0x6d6ce8 */ { u32 v = 0x6d6ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b3b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f7b40u); f_005e9f20();
    /* 005f7b40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7b43:; BB(0x005f7b43);
    /* 005f7b43: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7b46: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7b4c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7b51u); f_0060c9a0();
    /* 005f7b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7b53: je 0x5f7b90 */ if (fZ) goto L_005f7b90;
L_005f7b55:; BB(0x005f7b55);
    /* 005f7b55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b57: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7b5a: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7b60: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f7b65u); f_0060ca40();
    /* 005f7b65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f7b68: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7b6b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f7b6e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7b72: je 0x5f7b87 */ if (fZ) goto L_005f7b87;
L_005f7b74:; BB(0x005f7b74);
    /* 005f7b74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7b76: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7b79: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7b7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7b7e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7b80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7b82u); call_ind(t); }
    /* 005f7b82: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f7b85: jmp 0x5f7b8e */ goto L_005f7b8e;
L_005f7b87:; BB(0x005f7b87);
    /* 005f7b87: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005f7b8e:; BB(0x005f7b8e);
    /* 005f7b8e: jmp 0x5f7b43 */ goto L_005f7b43;
L_005f7b90:; BB(0x005f7b90);
    /* 005f7b90: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7b93: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005f7b99: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005f7b9c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f7b9f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f7ba2: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7ba6: je 0x5f7bbb */ if (fZ) goto L_005f7bbb;
L_005f7ba8:; BB(0x005f7ba8);
    /* 005f7ba8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7baa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f7bad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f7baf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f7bb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7bb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7bb6u); call_ind(t); }
    /* 005f7bb6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005f7bb9: jmp 0x5f7bc2 */ goto L_005f7bc2;
L_005f7bbb:; BB(0x005f7bbb);
    /* 005f7bbb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005f7bc2:; BB(0x005f7bc2);
    /* 005f7bc2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7bc5: movzx edx, byte ptr [ecx + 0x168] */ r_edx = (u32)R8((u32)(r_ecx+0x168u));
    /* 005f7bcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7bce: je 0x5f7c02 */ if (fZ) goto L_005f7c02;
L_005f7bd0:; BB(0x005f7bd0);
    /* 005f7bd0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7bd3: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f7bd9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005f7bdc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f7bdf: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f7be2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7be6: je 0x5f7bfb */ if (fZ) goto L_005f7bfb;
L_005f7be8:; BB(0x005f7be8);
    /* 005f7be8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7bea: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f7bed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7bef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f7bf2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f7bf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7bf6u); call_ind(t); }
    /* 005f7bf6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005f7bf9: jmp 0x5f7c02 */ goto L_005f7c02;
L_005f7bfb:; BB(0x005f7bfb);
    /* 005f7bfb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005f7c02:; BB(0x005f7c02);
    /* 005f7c02: mov byte ptr [ebp - 4], 0x11 */ W8((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 005f7c06: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c09: add ecx, 0x158 */ {  u32 a = r_ecx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c0f: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c14u); f_0060c6a0();
    /* 005f7c14: mov byte ptr [ebp - 4], 0x10 */ W8((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 005f7c18: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c1b: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c21: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c26u); f_0060c6a0();
    /* 005f7c26: mov byte ptr [ebp - 4], 0xf */ W8((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 005f7c2a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c2d: add ecx, 0xf4 */ {  u32 a = r_ecx; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c33: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c38u); f_0060c6a0();
    /* 005f7c38: mov byte ptr [ebp - 4], 0xe */ W8((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 005f7c3c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c3f: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c45: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c4au); f_0060c6a0();
    /* 005f7c4a: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 005f7c4e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c51: add ecx, 0xd4 */ {  u32 a = r_ecx; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c57: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c5cu); f_0060c6a0();
    /* 005f7c5c: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 005f7c60: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c63: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c69: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c6eu); f_0060c6a0();
    /* 005f7c6e: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 005f7c72: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c75: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c7b: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c80u); f_0060c6a0();
    /* 005f7c80: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005f7c84: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c87: add ecx, 0xa4 */ {  u32 a = r_ecx; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c8d: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7c92u); f_0060c6a0();
    /* 005f7c92: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005f7c96: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7c99: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7c9f: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7ca4u); f_0060c6a0();
    /* 005f7ca4: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005f7ca8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7cab: add ecx, 0x84 */ {  u32 a = r_ecx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7cb1: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7cb6u); f_0060c6a0();
    /* 005f7cb6: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005f7cba: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7cbd: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7cc0: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7cc5u); f_0060c6a0();
    /* 005f7cc5: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005f7cc9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7ccc: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7ccf: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7cd4u); f_0060c6a0();
    /* 005f7cd4: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005f7cd8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7cdb: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7cde: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7ce3u); f_0060c6a0();
    /* 005f7ce3: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005f7ce7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7cea: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7ced: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7cf2u); f_0060c6a0();
    /* 005f7cf2: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005f7cf6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7cf9: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7cfc: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7d01u); f_0060c6a0();
    /* 005f7d01: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005f7d05: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7d08: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7d0b: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7d10u); f_0060c6a0();
    /* 005f7d10: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f7d14: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7d17: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7d1a: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7d1fu); f_0060c6a0();
    /* 005f7d1f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7d23: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7d26: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7d29: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f7d2eu); f_0060c6a0();
    /* 005f7d2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f7d35: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f7d38: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5f7d3du); f_005e9e40();
    /* 005f7d3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f7d40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f7d47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f7d48: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7d4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7d4b: ret  */ FN_RET(0x005f79f0); r_esp += 4; return;
}

void f_005f7e80(void) /* sciPlane::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f7e80);
    /* 005f7e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7e83: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7e86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e87: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f7e8a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7e8e: jne 0x5f7ead */ if (!fZ) goto L_005f7ead;
L_005f7e90:; BB(0x005f7e90);
    /* 005f7e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f7e92: jne 0x5f7ea8 */ if (!fZ) goto L_005f7ea8;
L_005f7e94:; BB(0x005f7e94);
    /* 005f7e94: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e96: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7e9b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7ea0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f7ea5u); f_005e9f20();
    /* 005f7ea5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7ea8:; BB(0x005f7ea8);
    /* 005f7ea8: jmp 0x5f832d */ goto L_005f832d;
L_005f7ead:; BB(0x005f7ead);
    /* 005f7ead: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f7eb0: cmp dword ptr [edx + 0x18], 3 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7eb4: jne 0x5f7ed4 */ if (!fZ) goto L_005f7ed4;
L_005f7eb6:; BB(0x005f7eb6);
    /* 005f7eb6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7eb9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f7ebc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f7ebf: mov dword ptr [eax + 0x128], edx */ W32((u32)(r_eax+0x128u), r_edx);
    /* 005f7ec5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7ec8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f7ecb: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005f7ece: mov dword ptr [eax + 0x12c], edx */ W32((u32)(r_eax+0x12cu), r_edx);
L_005f7ed4:; BB(0x005f7ed4);
    /* 005f7ed4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7ed7: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f7edcu); f_005f88f0();
    /* 005f7edc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f7edf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7ee1: je 0x5f7ee8 */ if (fZ) goto L_005f7ee8;
L_005f7ee3:; BB(0x005f7ee3);
    /* 005f7ee3: jmp 0x5f832d */ goto L_005f832d;
L_005f7ee8:; BB(0x005f7ee8);
    /* 005f7ee8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7eeb: cmp dword ptr [ecx + 0x16c], 0 */ {  u32 a = R32((u32)(r_ecx+0x16cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7ef2: je 0x5f7f56 */ if (fZ) goto L_005f7f56;
L_005f7ef4:; BB(0x005f7ef4);
    /* 005f7ef4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7ef7: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005f7efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7efe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f01: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7f07: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5f7f0cu); f_0060c9e0();
    /* 005f7f0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f7f0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7f11: je 0x5f7f34 */ if (fZ) goto L_005f7f34;
L_005f7f13:; BB(0x005f7f13);
    /* 005f7f13: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f7f16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f17: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f1a: mov ecx, dword ptr [eax + 0x16c] */ r_ecx = R32((u32)(r_eax+0x16cu));
    /* 005f7f20: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f23: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005f7f29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f7f2b: mov ecx, eax */ r_ecx = r_eax;
    /* 005f7f2d: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005f7f30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7f32u); call_ind(t); }
    /* 005f7f32: jmp 0x5f7f56 */ goto L_005f7f56;
L_005f7f34:; BB(0x005f7f34);
    /* 005f7f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f7f36: jne 0x5f7f4c */ if (!fZ) goto L_005f7f4c;
L_005f7f38:; BB(0x005f7f38);
    /* 005f7f38: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f3a: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f3f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f44: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f7f49u); f_005e9f20();
    /* 005f7f49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7f4c:; BB(0x005f7f4c);
    /* 005f7f4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f4e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f51: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x5f7f56u); f_005f89f0();
L_005f7f56:; BB(0x005f7f56);
    /* 005f7f56: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f59: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7f5f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7f64u); f_0060c9a0();
    /* 005f7f64: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f67: cmp dword ptr [ecx + 0x150], eax */ {  u32 a = R32((u32)(r_ecx+0x150u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f7f6d: jge 0x5f8005 */ if ((fS==fO)) goto L_005f8005;
L_005f7f73:; BB(0x005f7f73);
    /* 005f7f73: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f76: cmp dword ptr [edx + 0x14c], 0 */ {  u32 a = R32((u32)(r_edx+0x14cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f7f7d: je 0x5f7f97 */ if (fZ) goto L_005f7f97;
L_005f7f7f:; BB(0x005f7f7f);
    /* 005f7f7f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f82: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 005f7f88: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f7f8b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f7f8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7f8f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5f7f94u); f_00686cae();
    /* 005f7f94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f7f97:; BB(0x005f7f97);
    /* 005f7f97: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7f9a: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7fa0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7fa5u); f_0060c9a0();
    /* 005f7fa5: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005f7fa7: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f7faa: jge 0x5f7fb5 */ if ((fS==fO)) goto L_005f7fb5;
L_005f7fac:; BB(0x005f7fac);
    /* 005f7fac: mov dword ptr [ebp - 0x20], 0x14 */ W32((u32)(r_ebp+0xffffffe0u), 0x14u);
    /* 005f7fb3: jmp 0x5f7fc8 */ goto L_005f7fc8;
L_005f7fb5:; BB(0x005f7fb5);
    /* 005f7fb5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7fb8: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7fbe: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f7fc3u); f_0060c9a0();
    /* 005f7fc3: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005f7fc5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005f7fc8:; BB(0x005f7fc8);
    /* 005f7fc8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7fcb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f7fce: mov dword ptr [eax + 0x150], ecx */ W32((u32)(r_eax+0x150u), r_ecx);
    /* 005f7fd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7fd6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7fd9: mov eax, dword ptr [edx + 0x150] */ r_eax = R32((u32)(r_edx+0x150u));
    /* 005f7fdf: mov edx, 4 */ r_edx = 0x4u;
    /* 005f7fe4: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005f7fe6: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 005f7fe9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7feb: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7fed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7fee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f7ff3u); f_00686d82();
    /* 005f7ff3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f7ff6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f7ff9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f7ffc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f7fff: mov dword ptr [eax + 0x14c], ecx */ W32((u32)(r_eax+0x14cu), r_ecx);
L_005f8005:; BB(0x005f8005);
    /* 005f8005: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f800c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f800f: mov dword ptr [edx + 0x154], 0 */ W32((u32)(r_edx+0x154u), 0x0u);
    /* 005f8019: jmp 0x5f8024 */ goto L_005f8024;
L_005f801b:; BB(0x005f801b);
    /* 005f801b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f801e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8021: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f8024:; BB(0x005f8024);
    /* 005f8024: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8027: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f802d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f8032u); f_0060c9a0();
    /* 005f8032: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8035: jge 0x5f80aa */ if ((fS==fO)) goto L_005f80aa;
L_005f8037:; BB(0x005f8037);
    /* 005f8037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8039: push 0x7050f4 */ { u32 v = 0x7050f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f803e: push 0x70501c */ { u32 v = 0x70501cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f8043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8045: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8049: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f804c: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8052: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f8057u); f_0060ca40();
    /* 005f8057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8058: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5f805du); f_00686ede();
    /* 005f805d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8060: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f8063: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8067: je 0x5f80a5 */ if (fZ) goto L_005f80a5;
L_005f8069:; BB(0x005f8069);
    /* 005f8069: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f806c: call 0x5f5600 */ r_esp -= 4; W32(r_esp, 0x5f8071u); f_005f5600();
    /* 005f8071: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f8074: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8076: jne 0x5f80a5 */ if (!fZ) goto L_005f80a5;
L_005f8078:; BB(0x005f8078);
    /* 005f8078: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f807b: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 005f8081: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8084: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 005f808a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f808d: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 005f8090: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8093: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 005f8099: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f809c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f809f: mov dword ptr [edx + 0x154], ecx */ W32((u32)(r_edx+0x154u), r_ecx);
L_005f80a5:; BB(0x005f80a5);
    /* 005f80a5: jmp 0x5f801b */ goto L_005f801b;
L_005f80aa:; BB(0x005f80aa);
    /* 005f80aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f80b1: jmp 0x5f80bc */ goto L_005f80bc;
L_005f80b3:; BB(0x005f80b3);
    /* 005f80b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f80b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f80b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f80bc:; BB(0x005f80bc);
    /* 005f80bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f80bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f80c2: cmp edx, dword ptr [ecx + 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f80c8: jge 0x5f8109 */ if ((fS==fO)) goto L_005f8109;
L_005f80ca:; BB(0x005f80ca);
    /* 005f80ca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f80cd: mov ecx, dword ptr [eax + 0x14c] */ r_ecx = R32((u32)(r_eax+0x14cu));
    /* 005f80d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f80d6: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f80da: je 0x5f8107 */ if (fZ) goto L_005f8107;
L_005f80dc:; BB(0x005f80dc);
    /* 005f80dc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f80df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f80e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f80e3: mov edx, dword ptr [ecx + 0x14c] */ r_edx = R32((u32)(r_ecx+0x14cu));
    /* 005f80e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f80ec: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005f80ef: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f80f2: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 005f80f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f80fb: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005f80fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f8100: mov ecx, eax */ r_ecx = r_eax;
    /* 005f8102: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005f8105: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f8107u); call_ind(t); }
L_005f8107:; BB(0x005f8107);
    /* 005f8107: jmp 0x5f80b3 */ goto L_005f80b3;
L_005f8109:; BB(0x005f8109);
    /* 005f8109: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f810c: mov dword ptr [ecx + 0x154], 0 */ W32((u32)(r_ecx+0x154u), 0x0u);
    /* 005f8116: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8119: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005f811c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f811f: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8123: je 0x5f813e */ if (fZ) goto L_005f813e;
L_005f8125:; BB(0x005f8125);
    /* 005f8125: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8129: je 0x5f82ff */ if (fZ) goto L_005f82ff;
L_005f812f:; BB(0x005f812f);
    /* 005f812f: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8133: je 0x5f820b */ if (fZ) goto L_005f820b;
L_005f8139:; BB(0x005f8139);
    /* 005f8139: jmp 0x5f832d */ goto L_005f832d;
L_005f813e:; BB(0x005f813e);
    /* 005f813e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8141: cmp dword ptr [ecx + 0x1a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8148: jne 0x5f814f */ if (!fZ) goto L_005f814f;
L_005f814a:; BB(0x005f814a);
    /* 005f814a: jmp 0x5f832d */ goto L_005f832d;
L_005f814f:; BB(0x005f814f);
    /* 005f814f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8152: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8153: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8159: call 0x5f3f70 */ r_esp -= 4; W32(r_esp, 0x5f815eu); f_005f3f70();
    /* 005f815e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8162: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8168: call 0x5f3ee0 */ r_esp -= 4; W32(r_esp, 0x5f816du); f_005f3ee0();
    /* 005f816d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8170: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f8175u); f_005f9a80();
    /* 005f8175: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8178: movzx edx, byte ptr [ecx + 0x124] */ r_edx = (u32)R8((u32)(r_ecx+0x124u));
    /* 005f817f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8181: je 0x5f8188 */ if (fZ) goto L_005f8188;
L_005f8183:; BB(0x005f8183);
    /* 005f8183: jmp 0x5f832d */ goto L_005f832d;
L_005f8188:; BB(0x005f8188);
    /* 005f8188: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f818b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f818e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005f8191: cmp edx, dword ptr [ecx + 0x120] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8197: jg 0x5f81a2 */ if ((!fZ&&fS==fO)) goto L_005f81a2;
L_005f8199:; BB(0x005f8199);
    /* 005f8199: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f819c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f81a0: jge 0x5f81a7 */ if ((fS==fO)) goto L_005f81a7;
L_005f81a2:; BB(0x005f81a2);
    /* 005f81a2: jmp 0x5f832d */ goto L_005f832d;
L_005f81a7:; BB(0x005f81a7);
    /* 005f81a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f81aa: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f81afu); f_005f8550();
    /* 005f81af: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f81b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f81b5: cmp dword ptr [ecx + 8], eax */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f81b8: jg 0x5f81c3 */ if ((!fZ&&fS==fO)) goto L_005f81c3;
L_005f81ba:; BB(0x005f81ba);
    /* 005f81ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f81bd: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f81c1: jge 0x5f81c8 */ if ((fS==fO)) goto L_005f81c8;
L_005f81c3:; BB(0x005f81c3);
    /* 005f81c3: jmp 0x5f832d */ goto L_005f832d;
L_005f81c8:; BB(0x005f81c8);
    /* 005f81c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f81cb: mov byte ptr [eax + 0x124], 1 */ W8((u32)(r_eax+0x124u), 0x1u);
    /* 005f81d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f81d5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f81d8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f81db: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 005f81e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f81e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f81e7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f81ea: mov dword ptr [ecx + 0x134], eax */ W32((u32)(r_ecx+0x134u), r_eax);
    /* 005f81f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f81f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f81f4: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f81fa: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f81ffu); f_005f41c0();
    /* 005f81ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8202: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005f8206: jmp 0x5f832d */ goto L_005f832d;
L_005f820b:; BB(0x005f820b);
    /* 005f820b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f820e: movzx ecx, byte ptr [eax + 0x124] */ r_ecx = (u32)R8((u32)(r_eax+0x124u));
    /* 005f8215: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8217: je 0x5f82fd */ if (fZ) goto L_005f82fd;
L_005f821d:; BB(0x005f821d);
    /* 005f821d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8220: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f8225u); f_005f84d0();
    /* 005f8225: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8228: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f822b: mov edx, dword ptr [edx + 0x130] */ r_edx = R32((u32)(r_edx+0x130u));
    /* 005f8231: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f8234: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8236: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f8239: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f823c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f8241u); f_005f84f0();
    /* 005f8241: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8244: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f8247: mov ecx, dword ptr [ecx + 0x134] */ r_ecx = R32((u32)(r_ecx+0x134u));
    /* 005f824d: sub ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8250: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f8252: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f8255: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8259: jge 0x5f8262 */ if ((fS==fO)) goto L_005f8262;
L_005f825b:; BB(0x005f825b);
    /* 005f825b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005f8262:; BB(0x005f8262);
    /* 005f8262: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8266: jge 0x5f826f */ if ((fS==fO)) goto L_005f826f;
L_005f8268:; BB(0x005f8268);
    /* 005f8268: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005f826f:; BB(0x005f826f);
    /* 005f826f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8272: call 0x5f8590 */ r_esp -= 4; W32(r_esp, 0x5f8277u); f_005f8590();
    /* 005f8277: mov esi, eax */ r_esi = r_eax;
    /* 005f8279: add esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f827c: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f8282: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f8285: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f828au); f_005f8550();
    /* 005f828a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f828c: jle 0x5f82aa */ if ((fZ||fS!=fO)) goto L_005f82aa;
L_005f828e:; BB(0x005f828e);
    /* 005f828e: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f8293: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f8296: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f829bu); f_005f8550();
    /* 005f829b: mov esi, eax */ r_esi = r_eax;
    /* 005f829d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f82a0: call 0x5f8590 */ r_esp -= 4; W32(r_esp, 0x5f82a5u); f_005f8590();
    /* 005f82a5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f82a7: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
L_005f82aa:; BB(0x005f82aa);
    /* 005f82aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f82ad: call 0x5f85b0 */ r_esp -= 4; W32(r_esp, 0x5f82b2u); f_005f85b0();
    /* 005f82b2: mov esi, eax */ r_esi = r_eax;
    /* 005f82b4: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f82b7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f82bd: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f82c0: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f82c5u); f_005f8570();
    /* 005f82c5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f82c7: jle 0x5f82e6 */ if ((fZ||fS!=fO)) goto L_005f82e6;
L_005f82c9:; BB(0x005f82c9);
    /* 005f82c9: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f82cf: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f82d2: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f82d7u); f_005f8570();
    /* 005f82d7: mov esi, eax */ r_esi = r_eax;
    /* 005f82d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f82dc: call 0x5f85b0 */ r_esp -= 4; W32(r_esp, 0x5f82e1u); f_005f85b0();
    /* 005f82e1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f82e3: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
L_005f82e6:; BB(0x005f82e6);
    /* 005f82e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f82e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f82ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f82ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f82ee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f82f1: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x5f82f6u); f_005f8420();
    /* 005f82f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f82f9: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_005f82fd:; BB(0x005f82fd);
    /* 005f82fd: jmp 0x5f832d */ goto L_005f832d;
L_005f82ff:; BB(0x005f82ff);
    /* 005f82ff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8302: movzx ecx, byte ptr [eax + 0x124] */ r_ecx = (u32)R8((u32)(r_eax+0x124u));
    /* 005f8309: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f830b: jne 0x5f830f */ if (!fZ) goto L_005f830f;
L_005f830d:; BB(0x005f830d);
    /* 005f830d: jmp 0x5f832d */ goto L_005f832d;
L_005f830f:; BB(0x005f830f);
    /* 005f830f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f8312: mov byte ptr [edx + 0x124], 0 */ W8((u32)(r_edx+0x124u), 0x0u);
    /* 005f8319: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f831b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8321: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f8326u); f_005f41c0();
    /* 005f8326: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8329: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_005f832d:; BB(0x005f832d);
    /* 005f832d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f832e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f8330: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f8331: ret 4 */ FN_RET(0x005f7e80); r_esp += 8; return;
}

void f_005f87d0(void) /* sciplane::func_005f87d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f87d0);
    /* 005f87d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f87d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f87d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f87d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f87d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f87db: jne 0x5f87fd */ if (!fZ) goto L_005f87fd;
L_005f87dd:; BB(0x005f87dd);
    /* 005f87dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f87df: jne 0x5f87f8 */ if (!fZ) goto L_005f87f8;
L_005f87e1:; BB(0x005f87e1);
    /* 005f87e1: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f87e6: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f87eb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f87f0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f87f5u); f_005e9f20();
    /* 005f87f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f87f8:; BB(0x005f87f8);
    /* 005f87f8: jmp 0x5f88e4 */ goto L_005f88e4;
L_005f87fd:; BB(0x005f87fd);
    /* 005f87fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8800: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f8805u); f_005f88f0();
    /* 005f8805: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f8808: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f880a: je 0x5f8811 */ if (fZ) goto L_005f8811;
L_005f880c:; BB(0x005f880c);
    /* 005f880c: jmp 0x5f88e4 */ goto L_005f88e4;
L_005f8811:; BB(0x005f8811);
    /* 005f8811: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8814: call 0x5f8720 */ r_esp -= 4; W32(r_esp, 0x5f8819u); f_005f8720();
    /* 005f8819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f881c: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f8821u); f_005f8910();
    /* 005f8821: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f8824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8826: je 0x5f8845 */ if (fZ) goto L_005f8845;
L_005f8828:; BB(0x005f8828);
    /* 005f8828: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f882e: call 0x5f41f0 */ r_esp -= 4; W32(r_esp, 0x5f8833u); f_005f41f0();
    /* 005f8833: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8836: jne 0x5f8845 */ if (!fZ) goto L_005f8845;
L_005f8838:; BB(0x005f8838);
    /* 005f8838: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f883a: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8840: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f8845u); f_005f41c0();
L_005f8845:; BB(0x005f8845);
    /* 005f8845: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8848: call 0x5f8970 */ r_esp -= 4; W32(r_esp, 0x5f884du); f_005f8970();
    /* 005f884d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f8850: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8852: je 0x5f88b8 */ if (fZ) goto L_005f88b8;
L_005f8854:; BB(0x005f8854);
    /* 005f8854: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8857: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f885cu); f_005f8910();
    /* 005f885c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f885f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8861: je 0x5f88b8 */ if (fZ) goto L_005f88b8;
L_005f8863:; BB(0x005f8863);
    /* 005f8863: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8869: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f886eu); f_005f3fe0();
    /* 005f886e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8871: jne 0x5f888a */ if (!fZ) goto L_005f888a;
L_005f8873:; BB(0x005f8873);
    /* 005f8873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8876: mov ecx, dword ptr [eax + 0x170] */ r_ecx = R32((u32)(r_eax+0x170u));
    /* 005f887c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f887d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f8883: call 0x5f3f90 */ r_esp -= 4; W32(r_esp, 0x5f8888u); f_005f3f90();
    /* 005f8888: jmp 0x5f88ab */ goto L_005f88ab;
L_005f888a:; BB(0x005f888a);
    /* 005f888a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f888d: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 005f8893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8894: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8898: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f889e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f88a0: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f88a6: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005f88a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f88abu); call_ind(t); }
L_005f88ab:; BB(0x005f88ab);
    /* 005f88ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88ae: mov dword ptr [eax + 0x170], 0 */ W32((u32)(r_eax+0x170u), 0x0u);
L_005f88b8:; BB(0x005f88b8);
    /* 005f88b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88bb: mov byte ptr [ecx + 0x138], 0 */ W8((u32)(r_ecx+0x138u), 0x0u);
    /* 005f88c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88c5: mov dword ptr [edx + 0x128], 0xffffffff */ W32((u32)(r_edx+0x128u), 0xffffffffu);
    /* 005f88cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88d2: mov dword ptr [eax + 0x12c], 0xffffffff */ W32((u32)(r_eax+0x12cu), 0xffffffffu);
    /* 005f88dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f88df: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f88e4u); f_005f9a80();
L_005f88e4:; BB(0x005f88e4);
    /* 005f88e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f88e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f88e7: ret  */ FN_RET(0x005f87d0); r_esp += 4; return;
}

void f_005f8ea0(void) /* sciplane::func_005f8ea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f8ea0);
    /* 005f8ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f8ea3: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f8ea9: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005f8eaf: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8eb6: jne 0x5f8eda */ if (!fZ) goto L_005f8eda;
L_005f8eb8:; BB(0x005f8eb8);
    /* 005f8eb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f8eba: jne 0x5f8ed3 */ if (!fZ) goto L_005f8ed3;
L_005f8ebc:; BB(0x005f8ebc);
    /* 005f8ebc: push 0x227 */ { u32 v = 0x227u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ec1: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ec6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ecb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f8ed0u); f_005e9f20();
    /* 005f8ed0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f8ed3:; BB(0x005f8ed3);
    /* 005f8ed3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f8ed5: jmp 0x5f91aa */ goto L_005f91aa;
L_005f8eda:; BB(0x005f8eda);
    /* 005f8eda: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8ee0: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f8ee5u); f_005f88f0();
    /* 005f8ee5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f8ee8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8eea: je 0x5f8ef3 */ if (fZ) goto L_005f8ef3;
L_005f8eec:; BB(0x005f8eec);
    /* 005f8eec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f8eee: jmp 0x5f91aa */ goto L_005f91aa;
L_005f8ef3:; BB(0x005f8ef3);
    /* 005f8ef3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8ef7: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8efd: add ecx, 0x180 */ {  u32 a = r_ecx; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f04: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005f8f07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f08: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x5f8f0du); f_005ec3a0();
    /* 005f8f0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8f10: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f8f13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8f15: jne 0x5f8f1e */ if (!fZ) goto L_005f8f1e;
L_005f8f17:; BB(0x005f8f17);
    /* 005f8f17: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f8f19: jmp 0x5f91aa */ goto L_005f91aa;
L_005f8f1e:; BB(0x005f8f1e);
    /* 005f8f1e: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005f8f21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f22: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8f28: add edx, 0x180 */ {  u32 a = r_edx; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f8f2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f8f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8f33: call 0x624c50 */ r_esp -= 4; W32(r_esp, 0x5f8f38u); f_00624c50();
    /* 005f8f38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8f3b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005f8f3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f8f45: jmp 0x5f8f50 */ goto L_005f8f50;
L_005f8f47:; BB(0x005f8f47);
    /* 005f8f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8f4a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f8f4d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f8f50:; BB(0x005f8f50);
    /* 005f8f50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8f53: cmp edx, dword ptr [ebp - 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f8f56: jge 0x5f8ff1 */ if ((fS==fO)) goto L_005f8ff1;
L_005f8f5c:; BB(0x005f8f5c);
    /* 005f8f5c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8f62: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f8f67u); f_005f84f0();
    /* 005f8f67: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005f8f6a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8f70: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f8f75u); f_005f84d0();
    /* 005f8f75: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005f8f78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8f7b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005f8f7e: lea ecx, [ebp + eax - 0x48] */ r_ecx = (u32)(r_ebp+r_eax+0xffffffb8u);
    /* 005f8f82: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005f8f85: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8f88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f8f8a: add eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8f8d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8f90: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005f8f92: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8f95: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f8f98: add eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8f9b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8f9e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005f8fa1: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8fa4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f8fa7: add eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8faa: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8fad: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005f8fb0: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8fb3: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f8fb6: add eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f8fb9: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005f8fbc: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f8fbf: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8fc5: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f8fcb: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005f8fce: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8fd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f8fd8: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005f8fdb: lea eax, [ebp + edx - 0x48] */ r_eax = (u32)(r_ebp+r_edx+0xffffffb8u);
    /* 005f8fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fe0: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f8fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f8fe4: call 0x630130 */ r_esp -= 4; W32(r_esp, 0x5f8fe9u); f_00630130();
    /* 005f8fe9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f8fec: jmp 0x5f8f47 */ goto L_005f8f47;
L_005f8ff1:; BB(0x005f8ff1);
    /* 005f8ff1: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f8ff7: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f8ffe: jne 0x5f9059 */ if (!fZ) goto L_005f9059;
L_005f9000:; BB(0x005f9000);
    /* 005f9000: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9006: movzx ecx, byte ptr [eax + 0x178] */ r_ecx = (u32)R8((u32)(r_eax+0x178u));
    /* 005f900d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f900f: jne 0x5f9059 */ if (!fZ) goto L_005f9059;
L_005f9011:; BB(0x005f9011);
    /* 005f9011: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9017: cmp dword ptr [edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f901e: jne 0x5f9048 */ if (!fZ) goto L_005f9048;
L_005f9020:; BB(0x005f9020);
    /* 005f9020: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9026: movzx ecx, byte ptr [eax + 0x178] */ r_ecx = (u32)R8((u32)(r_eax+0x178u));
    /* 005f902d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f902f: jne 0x5f9048 */ if (!fZ) goto L_005f9048;
L_005f9031:; BB(0x005f9031);
    /* 005f9031: push 0x23f */ { u32 v = 0x23fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9036: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f903b: push 0x6d6d28 */ { u32 v = 0x6d6d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9040: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f9045u); f_005e9f20();
    /* 005f9045: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f9048:; BB(0x005f9048);
    /* 005f9048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f904a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f904c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f904e: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9054: call 0x5f8a40 */ r_esp -= 4; W32(r_esp, 0x5f9059u); f_005f8a40();
L_005f9059:; BB(0x005f9059);
    /* 005f9059: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f905f: movzx ecx, byte ptr [eax + 0x178] */ r_ecx = (u32)R8((u32)(r_eax+0x178u));
    /* 005f9066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9068: je 0x5f909b */ if (fZ) goto L_005f909b;
L_005f906a:; BB(0x005f906a);
    /* 005f906a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f906d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9070: mov eax, esp */ r_eax = r_esp;
    /* 005f9072: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005f9074: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005f9076: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f9079: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005f907c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f907f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f9082: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005f9085: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005f9088: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f908e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9090: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9096: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f9099: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f909bu); call_ind(t); }
L_005f909b:; BB(0x005f909b);
    /* 005f909b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f90a1: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f90a8: je 0x5f90d2 */ if (fZ) goto L_005f90d2;
L_005f90aa:; BB(0x005f90aa);
    /* 005f90aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f90ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f90ae: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f90b4: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f90ba: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f90c0: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f90c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f90c8: mov ecx, eax */ r_ecx = r_eax;
    /* 005f90ca: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005f90d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f90d2u); call_ind(t); }
L_005f90d2:; BB(0x005f90d2);
    /* 005f90d2: movzx ecx, byte ptr [0x7960cd] */ r_ecx = (u32)R8((u32)(0x7960cdu));
    /* 005f90d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f90db: je 0x5f90fb */ if (fZ) goto L_005f90fb;
L_005f90dd:; BB(0x005f90dd);
    /* 005f90dd: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f90e3: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f90e9: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005f90ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f90ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f90f0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f90f3: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 005f90f6: call 0x623950 */ r_esp -= 4; W32(r_esp, 0x5f90fbu); f_00623950();
L_005f90fb:; BB(0x005f90fb);
    /* 005f90fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f90fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9101: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9107: call 0x5f91b0 */ r_esp -= 4; W32(r_esp, 0x5f910cu); f_005f91b0();
    /* 005f910c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f910f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f9111: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005f9114: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005f9117: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005f911a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f911d: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005f9120: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f9123: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005f9126: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f912c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f9131u); f_005f84f0();
    /* 005f9131: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005f9137: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f913d: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f9142u); f_005f84d0();
    /* 005f9142: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005f9148: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005f914b: add ecx, dword ptr [ebp - 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9151: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005f9154: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005f9157: add edx, dword ptr [ebp - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f915d: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005f9160: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005f9163: add eax, dword ptr [ebp - 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f9169: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005f916c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005f916f: add ecx, dword ptr [ebp - 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9175: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005f9178: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f917e: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f9184: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005f918a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f918d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f918e: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f9194: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9195: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 005f9198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9199: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005f919f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f91a0: call 0x630280 */ r_esp -= 4; W32(r_esp, 0x5f91a5u); f_00630280();
    /* 005f91a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f91a8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005f91aa:; BB(0x005f91aa);
    /* 005f91aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005f91ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f91ad: ret 8 */ FN_RET(0x005f8ea0); r_esp += 12; return;
}

void f_005f91b0(void) /* sciplane::func_005f91b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f91b0);
    /* 005f91b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f91b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f91b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f91b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f91b9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91bd: jne 0x5f91e1 */ if (!fZ) goto L_005f91e1;
L_005f91bf:; BB(0x005f91bf);
    /* 005f91bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f91c1: jne 0x5f91da */ if (!fZ) goto L_005f91da;
L_005f91c3:; BB(0x005f91c3);
    /* 005f91c3: push 0x25b */ { u32 v = 0x25bu; r_esp -= 4; W32(r_esp, v); }
    /* 005f91c8: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f91cd: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f91d2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f91d7u); f_005e9f20();
    /* 005f91d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f91da:; BB(0x005f91da);
    /* 005f91da: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f91dc: jmp 0x5f92cd */ goto L_005f92cd;
L_005f91e1:; BB(0x005f91e1);
    /* 005f91e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f91e4: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f91e9u); f_005f88f0();
    /* 005f91e9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f91ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91ee: je 0x5f91f7 */ if (fZ) goto L_005f91f7;
L_005f91f0:; BB(0x005f91f0);
    /* 005f91f0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f91f2: jmp 0x5f92cd */ goto L_005f92cd;
L_005f91f7:; BB(0x005f91f7);
    /* 005f91f7: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 005f91fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91fd: je 0x5f9266 */ if (fZ) goto L_005f9266;
L_005f91ff:; BB(0x005f91ff);
    /* 005f91ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9202: movzx edx, byte ptr [ecx + 0x178] */ r_edx = (u32)R8((u32)(r_ecx+0x178u));
    /* 005f9209: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f920b: je 0x5f9238 */ if (fZ) goto L_005f9238;
L_005f920d:; BB(0x005f920d);
    /* 005f920d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9210: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9213: mov ecx, esp */ r_ecx = r_esp;
    /* 005f9215: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f9217: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f9219: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f921c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005f921f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f9222: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005f9225: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005f9228: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f922b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f922e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f9230: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9233: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f9236: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9238u); call_ind(t); }
L_005f9238:; BB(0x005f9238);
    /* 005f9238: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f923b: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9242: je 0x5f9266 */ if (fZ) goto L_005f9266;
L_005f9244:; BB(0x005f9244);
    /* 005f9244: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f9247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9248: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f924b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005f9251: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9254: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 005f925a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f925c: mov ecx, eax */ r_ecx = r_eax;
    /* 005f925e: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005f9264: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f9266u); call_ind(t); }
L_005f9266:; BB(0x005f9266);
    /* 005f9266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9269: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f926f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f9274u); f_0060c9a0();
    /* 005f9274: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f9277: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f927a: jmp 0x5f9285 */ goto L_005f9285;
L_005f927c:; BB(0x005f927c);
    /* 005f927c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f927f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9282: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f9285:; BB(0x005f9285);
    /* 005f9285: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9289: jl 0x5f92cb */ if ((fS!=fO)) goto L_005f92cb;
L_005f928b:; BB(0x005f928b);
    /* 005f928b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f928e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f928f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9292: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9298: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f929du); f_0060ca40();
    /* 005f929d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f92a0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f92a4: je 0x5f92c9 */ if (fZ) goto L_005f92c9;
L_005f92a6:; BB(0x005f92a6);
    /* 005f92a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f92a9: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f92aeu); f_005f54a0();
    /* 005f92ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f92b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f92b3: je 0x5f92c9 */ if (fZ) goto L_005f92c9;
L_005f92b5:; BB(0x005f92b5);
    /* 005f92b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f92b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f92b9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f92bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f92be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f92c1: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 005f92c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f92c9u); call_ind(t); }
L_005f92c9:; BB(0x005f92c9);
    /* 005f92c9: jmp 0x5f927c */ goto L_005f927c;
L_005f92cb:; BB(0x005f92cb);
    /* 005f92cb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005f92cd:; BB(0x005f92cd);
    /* 005f92cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f92cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f92d0: ret 8 */ FN_RET(0x005f91b0); r_esp += 12; return;
}

void f_005fb0c0(void) /* sciplane::func_005fb0c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb0c0);
    /* 005fb0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb0c7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb0cb: jne 0x5fb0ed */ if (!fZ) goto L_005fb0ed;
L_005fb0cd:; BB(0x005fb0cd);
    /* 005fb0cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005fb0cf: jne 0x5fb0e8 */ if (!fZ) goto L_005fb0e8;
L_005fb0d1:; BB(0x005fb0d1);
    /* 005fb0d1: push 0x4b1 */ { u32 v = 0x4b1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0d6: push 0x6d6d10 */ { u32 v = 0x6d6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0db: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5fb0e5u); f_005e9f20();
    /* 005fb0e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fb0e8:; BB(0x005fb0e8);
    /* 005fb0e8: jmp 0x5fb1a7 */ goto L_005fb1a7;
L_005fb0ed:; BB(0x005fb0ed);
    /* 005fb0ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb0f0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb0f3: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb0f8u); f_0060c910();
    /* 005fb0f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb0fb: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb0fe: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb103u); f_0060c910();
    /* 005fb103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb106: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb109: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb10eu); f_0060c910();
    /* 005fb10e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb111: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb114: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb119u); f_0060c910();
    /* 005fb119: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb11c: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb11f: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb124u); f_0060c910();
    /* 005fb124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb127: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb12a: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb12fu); f_0060c910();
    /* 005fb12f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb132: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb135: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb13au); f_0060c910();
    /* 005fb13a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb13d: add ecx, 0xa4 */ {  u32 a = r_ecx; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb143: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb148u); f_0060c910();
    /* 005fb148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb14b: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb151: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb156u); f_0060c910();
    /* 005fb156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb159: add ecx, 0xc4 */ {  u32 a = r_ecx; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb15f: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb164u); f_0060c910();
    /* 005fb164: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb167: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb16d: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb172u); f_0060c910();
    /* 005fb172: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb175: add ecx, 0xd4 */ {  u32 a = r_ecx; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb17b: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb180u); f_0060c910();
    /* 005fb180: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb183: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb186: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb18bu); f_0060c910();
    /* 005fb18b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb18e: add ecx, 0x84 */ {  u32 a = r_ecx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb194: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb199u); f_0060c910();
    /* 005fb199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fb19c: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb1a2: call 0x60c910 */ r_esp -= 4; W32(r_esp, 0x5fb1a7u); f_0060c910();
L_005fb1a7:; BB(0x005fb1a7);
    /* 005fb1a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb1a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb1aa: ret  */ FN_RET(0x005fb0c0); r_esp += 4; return;
}

