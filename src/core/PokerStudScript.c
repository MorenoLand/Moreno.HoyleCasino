#include "protos.h"

void f_00517a30(void) /* PokerStudScript::func_00517a30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00517a30);
    /* 00517a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00517a33: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517a36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517a37: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517a3d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x517a42u); f_0047e3b0();
    /* 00517a42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00517a45: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517a4b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x517a50u); f_0047e190();
    /* 00517a50: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00517a53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517a56: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x517a5bu); f_004c6cb0();
    /* 00517a5b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517a5e: jne 0x517c12 */ if (!fZ) goto L_00517c12;
L_00517a64:; BB(0x00517a64);
    /* 00517a64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517a67: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x517a6cu); f_004c7010();
    /* 00517a6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517a6f: je 0x517a88 */ if (fZ) goto L_00517a88;
L_00517a71:; BB(0x00517a71);
    /* 00517a71: push 0x246 */ { u32 v = 0x246u; r_esp -= 4; W32(r_esp, v); }
    /* 00517a76: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517a7b: push 0x6bc65c */ { u32 v = 0x6bc65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00517a80: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517a85u); f_005e9f20();
    /* 00517a85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517a88:; BB(0x00517a88);
    /* 00517a88: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517a8c: jne 0x517b0a */ if (!fZ) goto L_00517b0a;
L_00517a8e:; BB(0x00517a8e);
    /* 00517a8e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517a94: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x517a99u); f_0047e280();
    /* 00517a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517a9b: jne 0x517adb */ if (!fZ) goto L_00517adb;
L_00517a9d:; BB(0x00517a9d);
    /* 00517a9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517aa3: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x517aa8u); f_0047d770();
    /* 00517aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517aaa: jne 0x517adb */ if (!fZ) goto L_00517adb;
L_00517aac:; BB(0x00517aac);
    /* 00517aac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517ab2: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517ab7u); f_0047bca0();
    /* 00517ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517ab8: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00517abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517abf: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00517ac5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517ac6: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 00517acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517acc: call 0x4fe290 */ r_esp -= 4; W32(r_esp, 0x517ad1u); f_004fe290();
    /* 00517ad1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517ad4: mov dword ptr [0x793100], eax */ W32((u32)(0x793100u), r_eax);
    /* 00517ad9: jmp 0x517b08 */ goto L_00517b08;
L_00517adb:; BB(0x00517adb);
    /* 00517adb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517ae1: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517ae6u); f_0047bca0();
    /* 00517ae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517ae7: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00517aed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517aee: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00517af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517af5: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 00517afa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517afb: call 0x502ed0 */ r_esp -= 4; W32(r_esp, 0x517b00u); f_00502ed0();
    /* 00517b00: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517b03: mov dword ptr [0x793100], eax */ W32((u32)(0x793100u), r_eax);
L_00517b08:; BB(0x00517b08);
    /* 00517b08: jmp 0x517b83 */ goto L_00517b83;
L_00517b0a:; BB(0x00517b0a);
    /* 00517b0a: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b0e: jne 0x517b3f */ if (!fZ) goto L_00517b3f;
L_00517b10:; BB(0x00517b10);
    /* 00517b10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517b16: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517b1bu); f_0047bca0();
    /* 00517b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517b1c: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00517b22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517b23: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00517b29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517b2a: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 00517b2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517b30: call 0x50a190 */ r_esp -= 4; W32(r_esp, 0x517b35u); f_0050a190();
    /* 00517b35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517b38: mov dword ptr [0x793100], eax */ W32((u32)(0x793100u), r_eax);
    /* 00517b3d: jmp 0x517b83 */ goto L_00517b83;
L_00517b3f:; BB(0x00517b3f);
    /* 00517b3f: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b43: jne 0x517b68 */ if (!fZ) goto L_00517b68;
L_00517b45:; BB(0x00517b45);
    /* 00517b45: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00517b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517b4c: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00517b52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517b53: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 00517b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517b59: call 0x50c6c0 */ r_esp -= 4; W32(r_esp, 0x517b5eu); f_0050c6c0();
    /* 00517b5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517b61: mov dword ptr [0x793100], eax */ W32((u32)(0x793100u), r_eax);
    /* 00517b66: jmp 0x517b83 */ goto L_00517b83;
L_00517b68:; BB(0x00517b68);
    /* 00517b68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00517b6a: jne 0x517b83 */ if (!fZ) goto L_00517b83;
L_00517b6c:; BB(0x00517b6c);
    /* 00517b6c: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00517b71: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517b76: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00517b7b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517b80u); f_005e9f20();
    /* 00517b80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517b83:; BB(0x00517b83);
    /* 00517b83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517b89: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x517b8eu); f_0047d6b0();
    /* 00517b8e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b91: jne 0x517c03 */ if (!fZ) goto L_00517c03;
L_00517b93:; BB(0x00517b93);
    /* 00517b93: cmp dword ptr [0x793100], 2 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517b9a: je 0x517ba5 */ if (fZ) goto L_00517ba5;
L_00517b9c:; BB(0x00517b9c);
    /* 00517b9c: cmp dword ptr [0x793100], 4 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ba3: jne 0x517c03 */ if (!fZ) goto L_00517c03;
L_00517ba5:; BB(0x00517ba5);
    /* 00517ba5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00517bac: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x517bb1u); f_00516dd0();
    /* 00517bb1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00517bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517bb6: je 0x517bc8 */ if (fZ) goto L_00517bc8;
L_00517bb8:; BB(0x00517bb8);
    /* 00517bb8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517bbe: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x517bc3u); f_0047bde0();
    /* 00517bc3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00517bc6: jmp 0x517bd6 */ goto L_00517bd6;
L_00517bc8:; BB(0x00517bc8);
    /* 00517bc8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517bce: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x517bd3u); f_0047bda0();
    /* 00517bd3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00517bd6:; BB(0x00517bd6);
    /* 00517bd6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00517bd9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00517bdc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00517bdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517be0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517be6: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x517bebu); f_0047bd60();
    /* 00517beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517bec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517bef: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x517bf4u); f_004c79f0();
    /* 00517bf4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00517bf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00517bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517bfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517bfe: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x517c03u); f_004c79b0();
L_00517c03:; BB(0x00517c03);
    /* 00517c03: mov eax, 5 */ r_eax = 0x5u;
    /* 00517c08: jmp 0x517f8c */ goto L_00517f8c;
L_00517c12:; BB(0x00517c12);
    /* 00517c12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517c15: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x517c1au); f_004c6cb0();
    /* 00517c1a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c1d: jne 0x517f45 */ if (!fZ) goto L_00517f45;
L_00517c23:; BB(0x00517c23);
    /* 00517c23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517c26: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x517c2bu); f_004c7010();
    /* 00517c2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c2e: je 0x517c47 */ if (fZ) goto L_00517c47;
L_00517c30:; BB(0x00517c30);
    /* 00517c30: push 0x266 */ { u32 v = 0x266u; r_esp -= 4; W32(r_esp, v); }
    /* 00517c35: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517c3a: push 0x6bc65c */ { u32 v = 0x6bc65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00517c3f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517c44u); f_005e9f20();
    /* 00517c44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517c47:; BB(0x00517c47);
    /* 00517c47: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00517c4e: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c52: jne 0x517d4d */ if (!fZ) goto L_00517d4d;
L_00517c58:; BB(0x00517c58);
    /* 00517c58: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517c5e: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x517c63u); f_0047e280();
    /* 00517c63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c65: jne 0x517ca3 */ if (!fZ) goto L_00517ca3;
L_00517c67:; BB(0x00517c67);
    /* 00517c67: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517c6d: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x517c72u); f_0047d770();
    /* 00517c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517c74: jne 0x517ca3 */ if (!fZ) goto L_00517ca3;
L_00517c76:; BB(0x00517c76);
    /* 00517c76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517c7c: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517c81u); f_0047bca0();
    /* 00517c81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517c82: mov edx, dword ptr [0x793058] */ r_edx = R32((u32)(0x793058u));
    /* 00517c88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517c89: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00517c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517c8f: mov ecx, dword ptr [0x793078] */ r_ecx = R32((u32)(0x793078u));
    /* 00517c95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517c96: call 0x4fe290 */ r_esp -= 4; W32(r_esp, 0x517c9bu); f_004fe290();
    /* 00517c9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517c9e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00517ca1: jmp 0x517cce */ goto L_00517cce;
L_00517ca3:; BB(0x00517ca3);
    /* 00517ca3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517ca9: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517caeu); f_0047bca0();
    /* 00517cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517caf: mov edx, dword ptr [0x793058] */ r_edx = R32((u32)(0x793058u));
    /* 00517cb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517cb6: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00517cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517cbc: mov ecx, dword ptr [0x793078] */ r_ecx = R32((u32)(0x793078u));
    /* 00517cc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517cc3: call 0x502ed0 */ r_esp -= 4; W32(r_esp, 0x517cc8u); f_00502ed0();
    /* 00517cc8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517ccb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00517cce:; BB(0x00517cce);
    /* 00517cce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517cd4: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x517cd9u); f_0047d6b0();
    /* 00517cd9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517cdc: jne 0x517d48 */ if (!fZ) goto L_00517d48;
L_00517cde:; BB(0x00517cde);
    /* 00517cde: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ce2: je 0x517cea */ if (fZ) goto L_00517cea;
L_00517ce4:; BB(0x00517ce4);
    /* 00517ce4: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ce8: jne 0x517d48 */ if (!fZ) goto L_00517d48;
L_00517cea:; BB(0x00517cea);
    /* 00517cea: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00517cf1: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x517cf6u); f_00516dd0();
    /* 00517cf6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00517cf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517cfb: je 0x517d0d */ if (fZ) goto L_00517d0d;
L_00517cfd:; BB(0x00517cfd);
    /* 00517cfd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517d03: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x517d08u); f_0047bde0();
    /* 00517d08: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00517d0b: jmp 0x517d1b */ goto L_00517d1b;
L_00517d0d:; BB(0x00517d0d);
    /* 00517d0d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517d13: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x517d18u); f_0047bda0();
    /* 00517d18: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00517d1b:; BB(0x00517d1b);
    /* 00517d1b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00517d1e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00517d21: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00517d24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517d25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517d2b: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x517d30u); f_0047bd60();
    /* 00517d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517d31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517d34: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x517d39u); f_004c79f0();
    /* 00517d39: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00517d3c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00517d3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517d40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517d43: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x517d48u); f_004c79b0();
L_00517d48:; BB(0x00517d48);
    /* 00517d48: jmp 0x517ec1 */ goto L_00517ec1;
L_00517d4d:; BB(0x00517d4d);
    /* 00517d4d: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517d51: jne 0x517e01 */ if (!fZ) goto L_00517e01;
L_00517d57:; BB(0x00517d57);
    /* 00517d57: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517d5d: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517d62u); f_0047bca0();
    /* 00517d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517d63: mov eax, dword ptr [0x793058] */ r_eax = R32((u32)(0x793058u));
    /* 00517d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517d69: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 00517d6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517d70: mov edx, dword ptr [0x793078] */ r_edx = R32((u32)(0x793078u));
    /* 00517d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517d77: call 0x50a190 */ r_esp -= 4; W32(r_esp, 0x517d7cu); f_0050a190();
    /* 00517d7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517d7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00517d82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517d88: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x517d8du); f_0047d6b0();
    /* 00517d8d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517d90: jne 0x517dfc */ if (!fZ) goto L_00517dfc;
L_00517d92:; BB(0x00517d92);
    /* 00517d92: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517d96: je 0x517d9e */ if (fZ) goto L_00517d9e;
L_00517d98:; BB(0x00517d98);
    /* 00517d98: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517d9c: jne 0x517dfc */ if (!fZ) goto L_00517dfc;
L_00517d9e:; BB(0x00517d9e);
    /* 00517d9e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00517da5: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x517daau); f_00516dd0();
    /* 00517daa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00517dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517daf: je 0x517dc1 */ if (fZ) goto L_00517dc1;
L_00517db1:; BB(0x00517db1);
    /* 00517db1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517db7: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x517dbcu); f_0047bde0();
    /* 00517dbc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00517dbf: jmp 0x517dcf */ goto L_00517dcf;
L_00517dc1:; BB(0x00517dc1);
    /* 00517dc1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517dc7: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x517dccu); f_0047bda0();
    /* 00517dcc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00517dcf:; BB(0x00517dcf);
    /* 00517dcf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00517dd2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00517dd5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00517dd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517dd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517ddf: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x517de4u); f_0047bd60();
    /* 00517de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517de5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517de8: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x517dedu); f_004c79f0();
    /* 00517ded: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00517df0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00517df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517df4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517df7: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x517dfcu); f_004c79b0();
L_00517dfc:; BB(0x00517dfc);
    /* 00517dfc: jmp 0x517ec1 */ goto L_00517ec1;
L_00517e01:; BB(0x00517e01);
    /* 00517e01: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517e05: jne 0x517ea6 */ if (!fZ) goto L_00517ea6;
L_00517e0b:; BB(0x00517e0b);
    /* 00517e0b: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00517e11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517e12: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00517e18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517e19: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 00517e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517e1f: call 0x50c6c0 */ r_esp -= 4; W32(r_esp, 0x517e24u); f_0050c6c0();
    /* 00517e24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517e27: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00517e2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517e30: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x517e35u); f_0047d6b0();
    /* 00517e35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517e38: jne 0x517ea4 */ if (!fZ) goto L_00517ea4;
L_00517e3a:; BB(0x00517e3a);
    /* 00517e3a: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517e3e: je 0x517e46 */ if (fZ) goto L_00517e46;
L_00517e40:; BB(0x00517e40);
    /* 00517e40: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517e44: jne 0x517ea4 */ if (!fZ) goto L_00517ea4;
L_00517e46:; BB(0x00517e46);
    /* 00517e46: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00517e4d: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x517e52u); f_00516dd0();
    /* 00517e52: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00517e55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517e57: je 0x517e69 */ if (fZ) goto L_00517e69;
L_00517e59:; BB(0x00517e59);
    /* 00517e59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517e5f: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x517e64u); f_0047bde0();
    /* 00517e64: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00517e67: jmp 0x517e77 */ goto L_00517e77;
L_00517e69:; BB(0x00517e69);
    /* 00517e69: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517e6f: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x517e74u); f_0047bda0();
    /* 00517e74: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_00517e77:; BB(0x00517e77);
    /* 00517e77: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00517e7a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00517e7d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00517e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517e81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517e87: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x517e8cu); f_0047bd60();
    /* 00517e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517e8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517e90: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x517e95u); f_004c79f0();
    /* 00517e95: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00517e98: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00517e9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517e9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517e9f: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x517ea4u); f_004c79b0();
L_00517ea4:; BB(0x00517ea4);
    /* 00517ea4: jmp 0x517ec1 */ goto L_00517ec1;
L_00517ea6:; BB(0x00517ea6);
    /* 00517ea6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00517ea8: jne 0x517ec1 */ if (!fZ) goto L_00517ec1;
L_00517eaa:; BB(0x00517eaa);
    /* 00517eaa: push 0x291 */ { u32 v = 0x291u; r_esp -= 4; W32(r_esp, v); }
    /* 00517eaf: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517eb4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00517eb9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517ebeu); f_005e9f20();
    /* 00517ebe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517ec1:; BB(0x00517ec1);
    /* 00517ec1: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ec5: jne 0x517efb */ if (!fZ) goto L_00517efb;
L_00517ec7:; BB(0x00517ec7);
    /* 00517ec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517eca: call 0x4c6eb0 */ r_esp -= 4; W32(r_esp, 0x517ecfu); f_004c6eb0();
    /* 00517ecf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00517ed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ed4: je 0x517efb */ if (fZ) goto L_00517efb;
L_00517ed6:; BB(0x00517ed6);
    /* 00517ed6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517edc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517edf: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x517ee4u); f_004f6640();
    /* 00517ee4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00517ee7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517ee9: je 0x517ef4 */ if (fZ) goto L_00517ef4;
L_00517eeb:; BB(0x00517eeb);
    /* 00517eeb: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00517ef2: jmp 0x517efb */ goto L_00517efb;
L_00517ef4:; BB(0x00517ef4);
    /* 00517ef4: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
L_00517efb:; BB(0x00517efb);
    /* 00517efb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517eff: jne 0x517f3e */ if (!fZ) goto L_00517f3e;
L_00517f01:; BB(0x00517f01);
    /* 00517f01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517f04: call 0x4c6e30 */ r_esp -= 4; W32(r_esp, 0x517f09u); f_004c6e30();
    /* 00517f09: mov esi, eax */ r_esi = r_eax;
    /* 00517f0b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f0d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x517f12u); f_0062fbf0();
    /* 00517f12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00517f15: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517f17: jle 0x517f3e */ if ((fZ||fS!=fO)) goto L_00517f3e;
L_00517f19:; BB(0x00517f19);
    /* 00517f19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517f1f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517f22: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x517f27u); f_004f6640();
    /* 00517f27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00517f2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517f2c: je 0x517f37 */ if (fZ) goto L_00517f37;
L_00517f2e:; BB(0x00517f2e);
    /* 00517f2e: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00517f35: jmp 0x517f3e */ goto L_00517f3e;
L_00517f37:; BB(0x00517f37);
    /* 00517f37: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
L_00517f3e:; BB(0x00517f3e);
    /* 00517f3e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00517f41: jmp 0x517f8c */ goto L_00517f8c;
L_00517f45:; BB(0x00517f45);
    /* 00517f45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517f48: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x517f4du); f_004c6cb0();
    /* 00517f4d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517f50: jne 0x517f6f */ if (!fZ) goto L_00517f6f;
L_00517f52:; BB(0x00517f52);
    /* 00517f52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00517f54: jne 0x517f6d */ if (!fZ) goto L_00517f6d;
L_00517f56:; BB(0x00517f56);
    /* 00517f56: push 0x2d3 */ { u32 v = 0x2d3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f5b: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f60: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f65: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517f6au); f_005e9f20();
    /* 00517f6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517f6d:; BB(0x00517f6d);
    /* 00517f6d: jmp 0x517f8a */ goto L_00517f8a;
L_00517f6f:; BB(0x00517f6f);
    /* 00517f6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00517f71: jne 0x517f8a */ if (!fZ) goto L_00517f8a;
L_00517f73:; BB(0x00517f73);
    /* 00517f73: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f78: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f7d: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00517f82: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x517f87u); f_005e9f20();
    /* 00517f87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00517f8a:; BB(0x00517f8a);
    /* 00517f8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00517f8c:; BB(0x00517f8c);
    /* 00517f8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517f8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00517f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517f90: ret  */ FN_RET(0x00517a30); r_esp += 4; return;
}

