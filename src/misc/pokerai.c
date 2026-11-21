#include "protos.h"

void f_00462ba0(void) /* pokerai::func_00462ba0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462ba0);
    /* 00462ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00462ba3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462ba6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00462bab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00462bad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00462bb0: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00462bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462bb6: je 0x462bcf */ if (fZ) goto L_00462bcf;
L_00462bb8:; BB(0x00462bb8);
    /* 00462bb8: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00462bbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462bbe: je 0x462bc6 */ if (fZ) goto L_00462bc6;
L_00462bc0:; BB(0x00462bc0);
    /* 00462bc0: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462bc4: jge 0x462bcf */ if ((fS==fO)) goto L_00462bcf;
L_00462bc6:; BB(0x00462bc6);
    /* 00462bc6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00462bcd: jmp 0x462bd6 */ goto L_00462bd6;
L_00462bcf:; BB(0x00462bcf);
    /* 00462bcf: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00462bd6:; BB(0x00462bd6);
    /* 00462bd6: mov dl, byte ptr [ebp - 0x38] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc8u))) & 0xffu);
    /* 00462bd9: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 00462bdc: cmp dword ptr [ebp + 0xc], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462be0: jl 0x462bf6 */ if ((fS!=fO)) goto L_00462bf6;
L_00462be2:; BB(0x00462be2);
    /* 00462be2: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 00462be4: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 00462be9: push 0x6ba714 */ { u32 v = 0x6ba714u; r_esp -= 4; W32(r_esp, v); }
    /* 00462bee: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x462bf3u); f_005e9f20();
    /* 00462bf3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00462bf6:; BB(0x00462bf6);
    /* 00462bf6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00462bfd: jmp 0x462c08 */ goto L_00462c08;
L_00462bff:; BB(0x00462bff);
    /* 00462bff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462c02: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00462c05: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00462c08:; BB(0x00462c08);
    /* 00462c08: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462c0c: jge 0x462c36 */ if ((fS==fO)) goto L_00462c36;
L_00462c0e:; BB(0x00462c0e);
    /* 00462c0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462c11: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462c14: jge 0x462c2a */ if ((fS==fO)) goto L_00462c2a;
L_00462c16:; BB(0x00462c16);
    /* 00462c16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462c19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462c1c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00462c1f: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00462c23: mov word ptr [ebp + eax*2 - 0x30], cx */ W16((u32)(r_ebp+r_eax*2+0xffffffd0u), (u16)r_ecx);
    /* 00462c28: jmp 0x462c34 */ goto L_00462c34;
L_00462c2a:; BB(0x00462c2a);
    /* 00462c2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462c2d: mov word ptr [ebp + edx*2 - 0x30], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffd0u), 0x0u);
L_00462c34:; BB(0x00462c34);
    /* 00462c34: jmp 0x462bff */ goto L_00462bff;
L_00462c36:; BB(0x00462c36);
    /* 00462c36: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462c3a: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00462c3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462c3e: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x462c43u); f_00641e20();
    /* 00462c43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462c46: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00462c49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462c4a: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00462c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462c4e: call 0x463710 */ r_esp -= 4; W32(r_esp, 0x462c53u); f_00463710();
    /* 00462c53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462c56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00462c59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462c5b: je 0x462c6f */ if (fZ) goto L_00462c6f;
L_00462c5d:; BB(0x00462c5d);
    /* 00462c5d: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00462c61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462c63: je 0x462c6f */ if (fZ) goto L_00462c6f;
L_00462c65:; BB(0x00462c65);
    /* 00462c65: mov eax, 0xa */ r_eax = 0xau;
    /* 00462c6a: jmp 0x462d88 */ goto L_00462d88;
L_00462c6f:; BB(0x00462c6f);
    /* 00462c6f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462c73: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00462c76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462c77: call 0x463760 */ r_esp -= 4; W32(r_esp, 0x462c7cu); f_00463760();
    /* 00462c7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462c7f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00462c82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462c84: je 0x462c98 */ if (fZ) goto L_00462c98;
L_00462c86:; BB(0x00462c86);
    /* 00462c86: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00462c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462c8c: je 0x462c98 */ if (fZ) goto L_00462c98;
L_00462c8e:; BB(0x00462c8e);
    /* 00462c8e: mov eax, 9 */ r_eax = 0x9u;
    /* 00462c93: jmp 0x462d88 */ goto L_00462d88;
L_00462c98:; BB(0x00462c98);
    /* 00462c98: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462c9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462c9c: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00462c9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ca0: call 0x4637b0 */ r_esp -= 4; W32(r_esp, 0x462ca5u); f_004637b0();
    /* 00462ca5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462ca8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00462cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462cad: je 0x462cb9 */ if (fZ) goto L_00462cb9;
L_00462caf:; BB(0x00462caf);
    /* 00462caf: mov eax, 8 */ r_eax = 0x8u;
    /* 00462cb4: jmp 0x462d88 */ goto L_00462d88;
L_00462cb9:; BB(0x00462cb9);
    /* 00462cb9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462cbd: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00462cc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462cc1: call 0x4637d0 */ r_esp -= 4; W32(r_esp, 0x462cc6u); f_004637d0();
    /* 00462cc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462cc9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00462ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462cce: je 0x462cda */ if (fZ) goto L_00462cda;
L_00462cd0:; BB(0x00462cd0);
    /* 00462cd0: mov eax, 7 */ r_eax = 0x7u;
    /* 00462cd5: jmp 0x462d88 */ goto L_00462d88;
L_00462cda:; BB(0x00462cda);
    /* 00462cda: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462cde: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00462ce1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ce2: call 0x463840 */ r_esp -= 4; W32(r_esp, 0x462ce7u); f_00463840();
    /* 00462ce7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462cea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00462ced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462cef: je 0x462d03 */ if (fZ) goto L_00462d03;
L_00462cf1:; BB(0x00462cf1);
    /* 00462cf1: movzx ecx, byte ptr [ebp - 0x31] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00462cf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462cf7: je 0x462d03 */ if (fZ) goto L_00462d03;
L_00462cf9:; BB(0x00462cf9);
    /* 00462cf9: mov eax, 6 */ r_eax = 0x6u;
    /* 00462cfe: jmp 0x462d88 */ goto L_00462d88;
L_00462d03:; BB(0x00462d03);
    /* 00462d03: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00462d06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462d07: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00462d0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462d0b: call 0x4638a0 */ r_esp -= 4; W32(r_esp, 0x462d10u); f_004638a0();
    /* 00462d10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462d13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00462d16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462d18: je 0x462d29 */ if (fZ) goto L_00462d29;
L_00462d1a:; BB(0x00462d1a);
    /* 00462d1a: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00462d1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462d20: je 0x462d29 */ if (fZ) goto L_00462d29;
L_00462d22:; BB(0x00462d22);
    /* 00462d22: mov eax, 5 */ r_eax = 0x5u;
    /* 00462d27: jmp 0x462d88 */ goto L_00462d88;
L_00462d29:; BB(0x00462d29);
    /* 00462d29: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462d2d: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00462d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462d31: call 0x463940 */ r_esp -= 4; W32(r_esp, 0x462d36u); f_00463940();
    /* 00462d36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462d39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00462d3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462d3e: je 0x462d47 */ if (fZ) goto L_00462d47;
L_00462d40:; BB(0x00462d40);
    /* 00462d40: mov eax, 4 */ r_eax = 0x4u;
    /* 00462d45: jmp 0x462d88 */ goto L_00462d88;
L_00462d47:; BB(0x00462d47);
    /* 00462d47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462d4b: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00462d4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462d4f: call 0x463960 */ r_esp -= 4; W32(r_esp, 0x462d54u); f_00463960();
    /* 00462d54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462d57: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00462d5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462d5c: je 0x462d65 */ if (fZ) goto L_00462d65;
L_00462d5e:; BB(0x00462d5e);
    /* 00462d5e: mov eax, 3 */ r_eax = 0x3u;
    /* 00462d63: jmp 0x462d88 */ goto L_00462d88;
L_00462d65:; BB(0x00462d65);
    /* 00462d65: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462d69: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00462d6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462d6d: call 0x4639c0 */ r_esp -= 4; W32(r_esp, 0x462d72u); f_004639c0();
    /* 00462d72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462d75: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00462d78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462d7a: je 0x462d83 */ if (fZ) goto L_00462d83;
L_00462d7c:; BB(0x00462d7c);
    /* 00462d7c: mov eax, 2 */ r_eax = 0x2u;
    /* 00462d81: jmp 0x462d88 */ goto L_00462d88;
L_00462d83:; BB(0x00462d83);
    /* 00462d83: mov eax, 1 */ r_eax = 0x1u;
L_00462d88:; BB(0x00462d88);
    /* 00462d88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462d8b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00462d8d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x462d92u); f_00686d72();
    /* 00462d92: mov esp, ebp */ r_esp = r_ebp;
    /* 00462d94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462d95: ret  */ FN_RET(0x00462ba0); r_esp += 4; return;
}

void f_004630c0(void) /* pokerai::func_004630c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004630c0);
    /* 004630c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004630c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004630c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004630c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004630cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004630cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004630d0: cmp dword ptr [ebp + 0x10], 0x15 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004630d4: jl 0x4630ed */ if ((fS!=fO)) goto L_004630ed;
L_004630d6:; BB(0x004630d6);
    /* 004630d6: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 004630db: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 004630e0: push 0x6ba714 */ { u32 v = 0x6ba714u; r_esp -= 4; W32(r_esp, v); }
    /* 004630e5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4630eau); f_005e9f20();
    /* 004630ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004630ed:; BB(0x004630ed);
    /* 004630ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004630f4: jmp 0x4630ff */ goto L_004630ff;
L_004630f6:; BB(0x004630f6);
    /* 004630f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004630f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004630fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004630ff:; BB(0x004630ff);
    /* 004630ff: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463103: jge 0x463111 */ if ((fS==fO)) goto L_00463111;
L_00463105:; BB(0x00463105);
    /* 00463105: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463108: mov word ptr [ebp + edx*2 - 0x30], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffd0u), 0x0u);
    /* 0046310f: jmp 0x4630f6 */ goto L_004630f6;
L_00463111:; BB(0x00463111);
    /* 00463111: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463118: jmp 0x463123 */ goto L_00463123;
L_0046311a:; BB(0x0046311a);
    /* 0046311a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046311d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00463120: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00463123:; BB(0x00463123);
    /* 00463123: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463126: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463129: jge 0x46313f */ if ((fS==fO)) goto L_0046313f;
L_0046312b:; BB(0x0046312b);
    /* 0046312b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046312e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463131: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463134: mov ax, word ptr [ecx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00463138: mov word ptr [ebp + edx*2 - 0x30], ax */ W16((u32)(r_ebp+r_edx*2+0xffffffd0u), (u16)r_eax);
    /* 0046313d: jmp 0x46311a */ goto L_0046311a;
L_0046313f:; BB(0x0046313f);
    /* 0046313f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00463142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463143: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00463146: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463147: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x46314cu); f_00641e20();
    /* 0046314c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046314f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00463151: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00463154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463155: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463159: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x46315eu); f_00462ba0();
    /* 0046315e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463161: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00463164: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00463167: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046316a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0046316d: cmp dword ptr [ebp - 0x34], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00463171: ja 0x463515 */ if ((!fC&&!fZ)) goto L_00463515;
L_00463177:; BB(0x00463177);
    /* 00463177: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0046317a: jmp dword ptr [eax*4 + 0x463544] */ { u32 t = R32((u32)(r_eax*4+0x463544u)); switch (t) { case 0x4632a4u: goto L_004632a4; case 0x463460u: goto L_00463460; case 0x463383u: goto L_00463383; case 0x4632c0u: goto L_004632c0; case 0x463181u: goto L_00463181; case 0x463219u: goto L_00463219; case 0x46318eu: goto L_0046318e; default: UNSUP(0x0046317a, "jump table entry is not a known target"); } }
L_00463181:; BB(0x00463181);
    /* 00463181: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00463184: movzx eax, word ptr [ebp + ecx*2 - 0x32] */ r_eax = (u32)R16((u32)(r_ebp+r_ecx*2+0xffffffceu));
    /* 00463189: jmp 0x463533 */ goto L_00463533;
L_0046318e:; BB(0x0046318e);
    /* 0046318e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00463195: jmp 0x4631a0 */ goto L_004631a0;
L_00463197:; BB(0x00463197);
    /* 00463197: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046319a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046319d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004631a0:; BB(0x004631a0);
    /* 004631a0: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004631a4: jge 0x4631f6 */ if ((fS==fO)) goto L_004631f6;
L_004631a6:; BB(0x004631a6);
    /* 004631a6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004631a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004631aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004631ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004631ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004631b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004631b2: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4631b7u); f_00463a40();
    /* 004631b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004631ba: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004631bd: jne 0x4631cd */ if (!fZ) goto L_004631cd;
L_004631bf:; BB(0x004631bf);
    /* 004631bf: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004631c3: jne 0x4631cd */ if (!fZ) goto L_004631cd;
L_004631c5:; BB(0x004631c5);
    /* 004631c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004631c8: jmp 0x463533 */ goto L_00463533;
L_004631cd:; BB(0x004631cd);
    /* 004631cd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004631d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004631d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004631d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004631d5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004631d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004631d9: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4631deu); f_00463a40();
    /* 004631de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004631e1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004631e4: jne 0x4631f4 */ if (!fZ) goto L_004631f4;
L_004631e6:; BB(0x004631e6);
    /* 004631e6: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004631ea: je 0x4631f4 */ if (fZ) goto L_004631f4;
L_004631ec:; BB(0x004631ec);
    /* 004631ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004631ef: jmp 0x463533 */ goto L_00463533;
L_004631f4:; BB(0x004631f4);
    /* 004631f4: jmp 0x463197 */ goto L_00463197;
L_004631f6:; BB(0x004631f6);
    /* 004631f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004631f8: jne 0x463211 */ if (!fZ) goto L_00463211;
L_004631fa:; BB(0x004631fa);
    /* 004631fa: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 004631ff: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 00463204: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00463209: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46320eu); f_005e9f20();
    /* 0046320e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00463211:; BB(0x00463211);
    /* 00463211: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00463214: jmp 0x463533 */ goto L_00463533;
L_00463219:; BB(0x00463219);
    /* 00463219: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00463220: jmp 0x46322b */ goto L_0046322b;
L_00463222:; BB(0x00463222);
    /* 00463222: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463225: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463228: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0046322b:; BB(0x0046322b);
    /* 0046322b: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046322f: jg 0x463281 */ if ((!fZ&&fS==fO)) goto L_00463281;
L_00463231:; BB(0x00463231);
    /* 00463231: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00463234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463235: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463238: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463239: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046323c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046323d: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463242u); f_00463a40();
    /* 00463242: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463245: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463248: jne 0x463258 */ if (!fZ) goto L_00463258;
L_0046324a:; BB(0x0046324a);
    /* 0046324a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046324e: jne 0x463258 */ if (!fZ) goto L_00463258;
L_00463250:; BB(0x00463250);
    /* 00463250: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463253: jmp 0x463533 */ goto L_00463533;
L_00463258:; BB(0x00463258);
    /* 00463258: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046325b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046325c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046325f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463260: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00463263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463264: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463269u); f_00463a40();
    /* 00463269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046326c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046326f: jne 0x46327f */ if (!fZ) goto L_0046327f;
L_00463271:; BB(0x00463271);
    /* 00463271: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463275: je 0x46327f */ if (fZ) goto L_0046327f;
L_00463277:; BB(0x00463277);
    /* 00463277: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046327a: jmp 0x463533 */ goto L_00463533;
L_0046327f:; BB(0x0046327f);
    /* 0046327f: jmp 0x463222 */ goto L_00463222;
L_00463281:; BB(0x00463281);
    /* 00463281: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00463283: jne 0x46329c */ if (!fZ) goto L_0046329c;
L_00463285:; BB(0x00463285);
    /* 00463285: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0046328a: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 0046328f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00463294: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x463299u); f_005e9f20();
    /* 00463299: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046329c:; BB(0x0046329c);
    /* 0046329c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0046329f: jmp 0x463533 */ goto L_00463533;
L_004632a4:; BB(0x004632a4);
    /* 004632a4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004632a7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004632aa: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004632ad: mov ax, word ptr [ebp + edx*2 - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xffffffd0u))) & 0xffffu);
    /* 004632b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004632b3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4632b8u); f_00641280();
    /* 004632b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004632bb: jmp 0x463533 */ goto L_00463533;
L_004632c0:; BB(0x004632c0);
    /* 004632c0: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004632c7: jmp 0x4632d2 */ goto L_004632d2;
L_004632c9:; BB(0x004632c9);
    /* 004632c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004632cc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004632cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004632d2:; BB(0x004632d2);
    /* 004632d2: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004632d6: jl 0x463328 */ if ((fS!=fO)) goto L_00463328;
L_004632d8:; BB(0x004632d8);
    /* 004632d8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004632db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004632dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004632df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004632e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004632e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004632e4: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4632e9u); f_00463a40();
    /* 004632e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004632ec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004632ef: jne 0x4632ff */ if (!fZ) goto L_004632ff;
L_004632f1:; BB(0x004632f1);
    /* 004632f1: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004632f5: jne 0x4632ff */ if (!fZ) goto L_004632ff;
L_004632f7:; BB(0x004632f7);
    /* 004632f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004632fa: jmp 0x463533 */ goto L_00463533;
L_004632ff:; BB(0x004632ff);
    /* 004632ff: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00463302: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463303: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463307: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046330a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046330b: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463310u); f_00463a40();
    /* 00463310: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463313: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463316: jne 0x463326 */ if (!fZ) goto L_00463326;
L_00463318:; BB(0x00463318);
    /* 00463318: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046331c: jne 0x463326 */ if (!fZ) goto L_00463326;
L_0046331e:; BB(0x0046331e);
    /* 0046331e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463321: jmp 0x463533 */ goto L_00463533;
L_00463326:; BB(0x00463326);
    /* 00463326: jmp 0x4632c9 */ goto L_004632c9;
L_00463328:; BB(0x00463328);
    /* 00463328: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0046332f: jmp 0x46333a */ goto L_0046333a;
L_00463331:; BB(0x00463331);
    /* 00463331: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463334: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463337: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0046333a:; BB(0x0046333a);
    /* 0046333a: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046333e: jge 0x463363 */ if ((fS==fO)) goto L_00463363;
L_00463340:; BB(0x00463340);
    /* 00463340: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00463343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463344: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463348: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046334b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046334c: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463351u); f_00463a40();
    /* 00463351: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463354: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463357: jne 0x463361 */ if (!fZ) goto L_00463361;
L_00463359:; BB(0x00463359);
    /* 00463359: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046335c: jmp 0x463533 */ goto L_00463533;
L_00463361:; BB(0x00463361);
    /* 00463361: jmp 0x463331 */ goto L_00463331;
L_00463363:; BB(0x00463363);
    /* 00463363: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00463365: jne 0x46337e */ if (!fZ) goto L_0046337e;
L_00463367:; BB(0x00463367);
    /* 00463367: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0046336c: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 00463371: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00463376: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46337bu); f_005e9f20();
    /* 0046337b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046337e:; BB(0x0046337e);
    /* 0046337e: jmp 0x463515 */ goto L_00463515;
L_00463383:; BB(0x00463383);
    /* 00463383: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463387: jne 0x4633c4 */ if (!fZ) goto L_004633c4;
L_00463389:; BB(0x00463389);
    /* 00463389: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00463390: jmp 0x46339b */ goto L_0046339b;
L_00463392:; BB(0x00463392);
    /* 00463392: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463395: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00463398: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0046339b:; BB(0x0046339b);
    /* 0046339b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046339f: jl 0x4633c4 */ if ((fS!=fO)) goto L_004633c4;
L_004633a1:; BB(0x004633a1);
    /* 004633a1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004633a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004633a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004633a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004633a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004633ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004633ad: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4633b2u); f_00463a40();
    /* 004633b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004633b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004633b8: jne 0x4633c2 */ if (!fZ) goto L_004633c2;
L_004633ba:; BB(0x004633ba);
    /* 004633ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004633bd: jmp 0x463533 */ goto L_00463533;
L_004633c2:; BB(0x004633c2);
    /* 004633c2: jmp 0x463392 */ goto L_00463392;
L_004633c4:; BB(0x004633c4);
    /* 004633c4: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004633c8: jne 0x463405 */ if (!fZ) goto L_00463405;
L_004633ca:; BB(0x004633ca);
    /* 004633ca: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004633d1: jmp 0x4633dc */ goto L_004633dc;
L_004633d3:; BB(0x004633d3);
    /* 004633d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004633d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004633d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004633dc:; BB(0x004633dc);
    /* 004633dc: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004633e0: jg 0x463405 */ if ((!fZ&&fS==fO)) goto L_00463405;
L_004633e2:; BB(0x004633e2);
    /* 004633e2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004633e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004633e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004633e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004633ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004633ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004633ee: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4633f3u); f_00463a40();
    /* 004633f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004633f6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004633f9: jne 0x463403 */ if (!fZ) goto L_00463403;
L_004633fb:; BB(0x004633fb);
    /* 004633fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004633fe: jmp 0x463533 */ goto L_00463533;
L_00463403:; BB(0x00463403);
    /* 00463403: jmp 0x4633d3 */ goto L_004633d3;
L_00463405:; BB(0x00463405);
    /* 00463405: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0046340c: jmp 0x463417 */ goto L_00463417;
L_0046340e:; BB(0x0046340e);
    /* 0046340e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463411: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00463414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00463417:; BB(0x00463417);
    /* 00463417: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046341b: jg 0x463440 */ if ((!fZ&&fS==fO)) goto L_00463440;
L_0046341d:; BB(0x0046341d);
    /* 0046341d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00463420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463421: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463425: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463429: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x46342eu); f_00463a40();
    /* 0046342e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463431: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463434: jne 0x46343e */ if (!fZ) goto L_0046343e;
L_00463436:; BB(0x00463436);
    /* 00463436: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463439: jmp 0x463533 */ goto L_00463533;
L_0046343e:; BB(0x0046343e);
    /* 0046343e: jmp 0x46340e */ goto L_0046340e;
L_00463440:; BB(0x00463440);
    /* 00463440: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00463442: jne 0x46345b */ if (!fZ) goto L_0046345b;
L_00463444:; BB(0x00463444);
    /* 00463444: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 00463449: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 0046344e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00463453: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x463458u); f_005e9f20();
    /* 00463458: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046345b:; BB(0x0046345b);
    /* 0046345b: jmp 0x463515 */ goto L_00463515;
L_00463460:; BB(0x00463460);
    /* 00463460: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463464: jne 0x4634a1 */ if (!fZ) goto L_004634a1;
L_00463466:; BB(0x00463466);
    /* 00463466: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0046346d: jmp 0x463478 */ goto L_00463478;
L_0046346f:; BB(0x0046346f);
    /* 0046346f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463472: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00463475: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00463478:; BB(0x00463478);
    /* 00463478: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046347c: jg 0x4634a1 */ if ((!fZ&&fS==fO)) goto L_004634a1;
L_0046347e:; BB(0x0046347e);
    /* 0046347e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00463481: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463482: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463486: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463489: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046348a: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x46348fu); f_00463a40();
    /* 0046348f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463492: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463495: jne 0x46349f */ if (!fZ) goto L_0046349f;
L_00463497:; BB(0x00463497);
    /* 00463497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046349a: jmp 0x463533 */ goto L_00463533;
L_0046349f:; BB(0x0046349f);
    /* 0046349f: jmp 0x46346f */ goto L_0046346f;
L_004634a1:; BB(0x004634a1);
    /* 004634a1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004634a4: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 004634a7: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 004634aa: jns 0x4634b3 */ if (!fS) goto L_004634b3;
L_004634ac:; BB(0x004634ac);
    /* 004634ac: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
L_004634b3:; BB(0x004634b3);
    /* 004634b3: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004634ba: jmp 0x4634c5 */ goto L_004634c5;
L_004634bc:; BB(0x004634bc);
    /* 004634bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004634bf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004634c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004634c5:; BB(0x004634c5);
    /* 004634c5: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004634c9: jl 0x4634fa */ if ((fS!=fO)) goto L_004634fa;
L_004634cb:; BB(0x004634cb);
    /* 004634cb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004634ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004634cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004634d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004634d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004634d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004634d7: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x4634dcu); f_00463a40();
    /* 004634dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004634df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004634e2: jne 0x4634f8 */ if (!fZ) goto L_004634f8;
L_004634e4:; BB(0x004634e4);
    /* 004634e4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004634e8: jne 0x4634ef */ if (!fZ) goto L_004634ef;
L_004634ea:; BB(0x004634ea);
    /* 004634ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004634ed: jmp 0x463533 */ goto L_00463533;
L_004634ef:; BB(0x004634ef);
    /* 004634ef: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004634f2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004634f5: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_004634f8:; BB(0x004634f8);
    /* 004634f8: jmp 0x4634bc */ goto L_004634bc;
L_004634fa:; BB(0x004634fa);
    /* 004634fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004634fc: jne 0x463515 */ if (!fZ) goto L_00463515;
L_004634fe:; BB(0x004634fe);
    /* 004634fe: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 00463503: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 00463508: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0046350d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x463512u); f_005e9f20();
    /* 00463512: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00463515:; BB(0x00463515);
    /* 00463515: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00463517: jne 0x463530 */ if (!fZ) goto L_00463530;
L_00463519:; BB(0x00463519);
    /* 00463519: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0046351e: push 0x6ba724 */ { u32 v = 0x6ba724u; r_esp -= 4; W32(r_esp, v); }
    /* 00463523: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00463528: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46352du); f_005e9f20();
    /* 0046352d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00463530:; BB(0x00463530);
    /* 00463530: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00463533:; BB(0x00463533);
    /* 00463533: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463536: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00463538: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46353du); f_00686d72();
    /* 0046353d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046353f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463540: ret  */ FN_RET(0x004630c0); r_esp += 4; return;
}

