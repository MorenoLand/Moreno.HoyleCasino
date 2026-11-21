#include "protos.h"

void f_004c4b50(void) /* DealHoldemScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c4b50);
    /* 004c4b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b51: mov ebp, esp */ r_ebp = r_esp;
    /* 004c4b53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c4b56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c4b5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c4b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4b61: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x4c4b66u); f_005fc3a0();
    /* 004c4b66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4b69: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004c4b6c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004c4b6f: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c4b73: ja 0x4c55da */ if ((!fC&&!fZ)) goto L_004c55da;
L_004c4b79:; BB(0x004c4b79);
    /* 004c4b79: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c4b7c: jmp dword ptr [eax*4 + 0x4c55e4] */ { u32 t = R32((u32)(r_eax*4+0x4c55e4u)); switch (t) { case 0x4c4b83u: goto L_004c4b83; case 0x4c4fc5u: goto L_004c4fc5; case 0x4c5029u: goto L_004c5029; case 0x4c508fu: goto L_004c508f; case 0x4c50dfu: goto L_004c50df; case 0x4c5117u: goto L_004c5117; case 0x4c530bu: goto L_004c530b; case 0x4c54cdu: goto L_004c54cd; case 0x4c558fu: goto L_004c558f; default: UNSUP(0x004c4b7c, "jump table entry is not a known target"); } }
L_004c4b83:; BB(0x004c4b83);
    /* 004c4b83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4b8b: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x4c4b90u); f_0047e540();
    /* 004c4b90: mov byte ptr [0x791e38], 0 */ W8((u32)(0x791e38u), 0x0u);
    /* 004c4b97: mov dword ptr [0x791e50], 0 */ W32((u32)(0x791e50u), 0x0u);
    /* 004c4ba1: mov dword ptr [0x791e40], 0 */ W32((u32)(0x791e40u), 0x0u);
    /* 004c4bab: mov dword ptr [0x791eb4], 0 */ W32((u32)(0x791eb4u), 0x0u);
    /* 004c4bb5: jmp 0x4c4bc6 */ goto L_004c4bc6;
L_004c4bb7:; BB(0x004c4bb7);
    /* 004c4bb7: mov ecx, dword ptr [0x791eb4] */ r_ecx = R32((u32)(0x791eb4u));
    /* 004c4bbd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4bc0: mov dword ptr [0x791eb4], ecx */ W32((u32)(0x791eb4u), r_ecx);
L_004c4bc6:; BB(0x004c4bc6);
    /* 004c4bc6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4bcc: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c4bd1u); f_0047f950();
    /* 004c4bd1: cmp dword ptr [0x791eb4], eax */ {  u32 a = R32((u32)(0x791eb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4bd7: jge 0x4c4d38 */ if ((fS==fO)) goto L_004c4d38;
L_004c4bdd:; BB(0x004c4bdd);
    /* 004c4bdd: mov edx, dword ptr [0x791eb4] */ r_edx = R32((u32)(0x791eb4u));
    /* 004c4be3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4be4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4bea: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4befu); f_0047e390();
    /* 004c4bef: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004c4bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4bf3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4c4bf8u); f_005dcb00();
    /* 004c4bf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4bfb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c4bfe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c4c01: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 004c4c07: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 004c4c0a: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004c4c0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4c10: jne 0x4c4cfe */ if (!fZ) goto L_004c4cfe;
L_004c4c16:; BB(0x004c4c16);
    /* 004c4c16: mov ecx, dword ptr [0x791eb4] */ r_ecx = R32((u32)(0x791eb4u));
    /* 004c4c1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4c23: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4c28u); f_0047e390();
    /* 004c4c28: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4c2a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c4c2fu); f_004c6cb0();
    /* 004c4c2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4c31: je 0x4c4cfe */ if (fZ) goto L_004c4cfe;
L_004c4c37:; BB(0x004c4c37);
    /* 004c4c37: mov edx, dword ptr [0x791eb4] */ r_edx = R32((u32)(0x791eb4u));
    /* 004c4c3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c3e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4c44: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4c49u); f_0047e390();
    /* 004c4c49: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4c4b: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c4c50u); f_004c6a70();
    /* 004c4c50: mov esi, eax */ r_esi = r_eax;
    /* 004c4c52: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4c58: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c4c5du); f_0047bc20();
    /* 004c4c5d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4c5f: jl 0x4c4cfe */ if ((fS!=fO)) goto L_004c4cfe;
L_004c4c65:; BB(0x004c4c65);
    /* 004c4c65: mov eax, dword ptr [0x791eb4] */ r_eax = R32((u32)(0x791eb4u));
    /* 004c4c6a: mov word ptr [eax*2 + 0x791d80], 0xffff */ W16((u32)(r_eax*2+0x791d80u), 0xffffu);
    /* 004c4c74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c76: mov ecx, dword ptr [0x791eb4] */ r_ecx = R32((u32)(0x791eb4u));
    /* 004c4c7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c7d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4c83: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4c88u); f_0047e390();
    /* 004c4c88: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4c8a: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c4c8fu); f_004c7030();
    /* 004c4c8f: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c4c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c96: mov eax, dword ptr [0x791eb4] */ r_eax = R32((u32)(0x791eb4u));
    /* 004c4c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4c9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4ca2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4ca7u); f_0047e390();
    /* 004c4ca7: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4ca9: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x4c4caeu); f_004c7070();
    /* 004c4cae: mov ecx, dword ptr [0x791eb4] */ r_ecx = R32((u32)(0x791eb4u));
    /* 004c4cb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4cb5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4cbb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4cc0u); f_0047e390();
    /* 004c4cc0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4cc2: call 0x4c9160 */ r_esp -= 4; W32(r_esp, 0x4c4cc7u); f_004c9160();
    /* 004c4cc7: mov edx, dword ptr [0x791eb4] */ r_edx = R32((u32)(0x791eb4u));
    /* 004c4ccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4cce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4cd4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4cd9u); f_0047e390();
    /* 004c4cd9: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4cdb: call 0x4dd760 */ r_esp -= 4; W32(r_esp, 0x4c4ce0u); f_004dd760();
    /* 004c4ce0: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c4ce5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4ce8: mov dword ptr [0x791e50], eax */ W32((u32)(0x791e50u), r_eax);
    /* 004c4ced: mov ecx, dword ptr [0x791e40] */ r_ecx = R32((u32)(0x791e40u));
    /* 004c4cf3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4cf6: mov dword ptr [0x791e40], ecx */ W32((u32)(0x791e40u), r_ecx);
    /* 004c4cfc: jmp 0x4c4d33 */ goto L_004c4d33;
L_004c4cfe:; BB(0x004c4cfe);
    /* 004c4cfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d00: mov edx, dword ptr [0x791eb4] */ r_edx = R32((u32)(0x791eb4u));
    /* 004c4d06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d0d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4d12u); f_0047e390();
    /* 004c4d12: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4d14: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4c4d19u); f_004c7030();
    /* 004c4d19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d1b: mov eax, dword ptr [0x791eb4] */ r_eax = R32((u32)(0x791eb4u));
    /* 004c4d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d21: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d27: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4d2cu); f_0047e390();
    /* 004c4d2c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4d2e: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x4c4d33u); f_004c7070();
L_004c4d33:; BB(0x004c4d33);
    /* 004c4d33: jmp 0x4c4bb7 */ goto L_004c4bb7;
L_004c4d38:; BB(0x004c4d38);
    /* 004c4d38: cmp dword ptr [0x791e50], 2 */ {  u32 a = R32((u32)(0x791e50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4d3f: jge 0x4c4d64 */ if ((fS==fO)) goto L_004c4d64;
L_004c4d41:; BB(0x004c4d41);
    /* 004c4d41: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4d46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c4d48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4d4b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c4d4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c4d50u); call_ind(t); }
    /* 004c4d50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4d52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4d55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c4d57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4d5a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c4d5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c4d5fu); call_ind(t); }
    /* 004c4d5f: jmp 0x4c55da */ goto L_004c55da;
L_004c4d64:; BB(0x004c4d64);
    /* 004c4d64: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d6a: call 0x47e860 */ r_esp -= 4; W32(r_esp, 0x4c4d6fu); f_0047e860();
    /* 004c4d6f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d75: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x4c4d7au); f_0047e170();
    /* 004c4d7a: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4d7d: jne 0x4c4d84 */ if (!fZ) goto L_004c4d84;
L_004c4d7f:; BB(0x004c4d7f);
    /* 004c4d7f: jmp 0x4c4f56 */ goto L_004c4f56;
L_004c4d84:; BB(0x004c4d84);
    /* 004c4d84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d8a: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c4d8fu); f_0047d6b0();
    /* 004c4d8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4d92: jne 0x4c4e7a */ if (!fZ) goto L_004c4e7a;
L_004c4d98:; BB(0x004c4d98);
    /* 004c4d98: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4d9e: cmp dword ptr [ecx + 0xd0], -1 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4da5: jne 0x4c4de6 */ if (!fZ) goto L_004c4de6;
L_004c4da7:; BB(0x004c4da7);
    /* 004c4da7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4dad: cmp dword ptr [edx + 0xd4], -1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4db4: je 0x4c4dcf */ if (fZ) goto L_004c4dcf;
L_004c4db6:; BB(0x004c4db6);
    /* 004c4db6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4dbc: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c4dc1u); f_0047bbc0();
    /* 004c4dc1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4dc7: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 004c4dcd: jmp 0x4c4de6 */ goto L_004c4de6;
L_004c4dcf:; BB(0x004c4dcf);
    /* 004c4dcf: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4dd5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c4dda: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 004c4de0: mov dword ptr [edx + 0xd0], ecx */ W32((u32)(r_edx+0xd0u), r_ecx);
L_004c4de6:; BB(0x004c4de6);
    /* 004c4de6: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4dec: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 004c4df2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4df5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4dfb: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 004c4e01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e07: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c4e0cu); f_0047f950();
    /* 004c4e0c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c4e0f: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4e15: cmp dword ptr [edx + 0xd0], eax */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4e1b: jle 0x4c4e2c */ if ((fZ||fS!=fO)) goto L_004c4e2c;
L_004c4e1d:; BB(0x004c4e1d);
    /* 004c4e1d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c4e22: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_004c4e2c:; BB(0x004c4e2c);
    /* 004c4e2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e32: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 004c4e38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4e39: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e3f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4e44u); f_0047e390();
    /* 004c4e44: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4e46: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c4e4bu); f_004c7010();
    /* 004c4e4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4d: je 0x4c4de6 */ if (fZ) goto L_004c4de6;
L_004c4e4f:; BB(0x004c4e4f);
    /* 004c4e4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e55: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c4e5au); f_0047bbc0();
    /* 004c4e5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e60: cmp eax, dword ptr [ecx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e66: je 0x4c4e75 */ if (fZ) goto L_004c4e75;
L_004c4e68:; BB(0x004c4e68);
    /* 004c4e68: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e6e: call 0x47bac0 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_0047bac0();
    /* 004c4e73: jmp 0x4c4e4f */ goto L_004c4e4f;
L_004c4e75:; BB(0x004c4e75);
    /* 004c4e75: jmp 0x4c4f56 */ goto L_004c4f56;
L_004c4e7a:; BB(0x004c4e7a);
    /* 004c4e7a: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4e80: cmp dword ptr [edx + 0xd4], -1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e87: jne 0x4c4ec7 */ if (!fZ) goto L_004c4ec7;
L_004c4e89:; BB(0x004c4e89);
    /* 004c4e89: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c4e8e: cmp dword ptr [eax + 0xd0], -1 */ {  u32 a = R32((u32)(r_eax+0xd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e95: je 0x4c4eb0 */ if (fZ) goto L_004c4eb0;
L_004c4e97:; BB(0x004c4e97);
    /* 004c4e97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4e9d: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c4ea2u); f_0047bbc0();
    /* 004c4ea2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4ea8: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 004c4eae: jmp 0x4c4ec7 */ goto L_004c4ec7;
L_004c4eb0:; BB(0x004c4eb0);
    /* 004c4eb0: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4eb6: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c4ebb: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 004c4ec1: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
L_004c4ec7:; BB(0x004c4ec7);
    /* 004c4ec7: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4ecd: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 004c4ed3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4ed6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4edc: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 004c4ee2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4ee8: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4c4eedu); f_0047f950();
    /* 004c4eed: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c4ef0: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c4ef6: cmp dword ptr [edx + 0xd4], eax */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4efc: jle 0x4c4f0d */ if ((fZ||fS!=fO)) goto L_004c4f0d;
L_004c4efe:; BB(0x004c4efe);
    /* 004c4efe: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004c4f03: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_004c4f0d:; BB(0x004c4f0d);
    /* 004c4f0d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f13: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 004c4f19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f20: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4c4f25u); f_0047e390();
    /* 004c4f25: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4f27: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c4f2cu); f_004c7010();
    /* 004c4f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4f2e: je 0x4c4ec7 */ if (fZ) goto L_004c4ec7;
L_004c4f30:; BB(0x004c4f30);
    /* 004c4f30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f36: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c4f3bu); f_0047bbc0();
    /* 004c4f3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f41: cmp eax, dword ptr [ecx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4f47: je 0x4c4f56 */ if (fZ) goto L_004c4f56;
L_004c4f49:; BB(0x004c4f49);
    /* 004c4f49: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f4f: call 0x47bac0 */ r_esp -= 4; W32(r_esp, 0x4c4f54u); f_0047bac0();
    /* 004c4f54: jmp 0x4c4f30 */ goto L_004c4f30;
L_004c4f56:; BB(0x004c4f56);
    /* 004c4f56: mov dword ptr [0x791eb0], 0 */ W32((u32)(0x791eb0u), 0x0u);
    /* 004c4f60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f66: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c4f6bu); f_0047bbc0();
    /* 004c4f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f72: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4c4f77u); f_0047e400();
L_004c4f77:; BB(0x004c4f77);
    /* 004c4f77: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f7d: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4c4f82u); f_0047e440();
    /* 004c4f82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4f88: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4f8du); f_0047e3b0();
    /* 004c4f8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4f8f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c4f94u); f_004c7010();
    /* 004c4f94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4f96: je 0x4c4f77 */ if (fZ) goto L_004c4f77;
L_004c4f98:; BB(0x004c4f98);
    /* 004c4f98: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4f9b: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 004c4fa2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fa4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fa7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c4fa9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fac: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c4faf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c4fb1u); call_ind(t); }
    /* 004c4fb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fb6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c4fb8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fbb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c4fbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c4fc0u); call_ind(t); }
    /* 004c4fc0: jmp 0x4c55da */ goto L_004c55da;
L_004c4fc5:; BB(0x004c4fc5);
    /* 004c4fc5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4fcb: call 0x47ecf0 */ r_esp -= 4; W32(r_esp, 0x4c4fd0u); f_0047ecf0();
    /* 004c4fd0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4fd6: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004c4fd9: call 0x4654d0 */ r_esp -= 4; W32(r_esp, 0x4c4fdeu); f_004654d0();
    /* 004c4fde: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fe0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fe3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c4fe5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c4fe8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c4feb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c4fedu); call_ind(t); }
    /* 004c4fed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ff0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 004c4ff6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c4ff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ffa: fld1  */ FPUSH(1.0);
    /* 004c4ffc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c4fff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5001: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5003: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5005: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5009: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c500e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c5014: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c5016: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004c501c: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004c5022: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5024u); call_ind(t); }
    /* 004c5024: jmp 0x4c55da */ goto L_004c55da;
L_004c5029:; BB(0x004c5029);
    /* 004c5029: mov cx, word ptr [0x791e50] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791e50u))) & 0xffffu);
    /* 004c5030: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5031: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5037: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c503a: call 0x4f4320 */ r_esp -= 4; W32(r_esp, 0x4c503fu); f_004f4320();
    /* 004c503f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5041: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5047: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c504cu); f_0047ec90();
    /* 004c504c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5052: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c5057u); f_0047d6b0();
    /* 004c5057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5059: jne 0x4c506c */ if (!fZ) goto L_004c506c;
L_004c505b:; BB(0x004c505b);
    /* 004c505b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c505d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5060: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c5062: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5065: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c5068: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c506au); call_ind(t); }
    /* 004c506a: jmp 0x4c507b */ goto L_004c507b;
L_004c506c:; BB(0x004c506c);
    /* 004c506c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c506e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5071: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c5073: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5076: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c5079: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c507bu); call_ind(t); }
L_004c507b:; BB(0x004c507b);
    /* 004c507b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c507d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5080: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c5082: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5085: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c5088: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c508au); call_ind(t); }
    /* 004c508a: jmp 0x4c55da */ goto L_004c55da;
L_004c508f:; BB(0x004c508f);
    /* 004c508f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5095: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c509au); f_0047e3b0();
    /* 004c509a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c509c: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4c50a1u); f_004c7050();
    /* 004c50a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c50a2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c50a8: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x4c50adu); f_0047bc60();
    /* 004c50ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c50ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c50b4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c50b7: call 0x4f5110 */ r_esp -= 4; W32(r_esp, 0x4c50bcu); f_004f5110();
    /* 004c50bc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c50be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c50c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50c6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c50c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c50cbu); call_ind(t); }
    /* 004c50cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c50cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c50d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50d5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c50d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c50dau); call_ind(t); }
    /* 004c50da: jmp 0x4c55da */ goto L_004c55da;
L_004c50df:; BB(0x004c50df);
    /* 004c50df: call 0x4c5610 */ r_esp -= 4; W32(r_esp, 0x4c50e4u); f_004c5610();
    /* 004c50e4: mov dword ptr [0x791e3c], eax */ W32((u32)(0x791e3cu), r_eax);
    /* 004c50e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c50ef: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x4c50f4u); f_0047e500();
    /* 004c50f4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c50f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c50fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c50fe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c5101: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5103u); call_ind(t); }
    /* 004c5103: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c5105: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5108: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c510a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c510d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c5110: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5112u); call_ind(t); }
    /* 004c5112: jmp 0x4c55da */ goto L_004c55da;
L_004c5117:; BB(0x004c5117);
    /* 004c5117: cmp dword ptr [0x791e3c], -1 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c511e: jne 0x4c516c */ if (!fZ) goto L_004c516c;
L_004c5120:; BB(0x004c5120);
    /* 004c5120: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5126: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c512bu); f_0047bbc0();
    /* 004c512b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c512c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5132: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4c5137u); f_0047e400();
L_004c5137:; BB(0x004c5137);
    /* 004c5137: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c513d: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4c5142u); f_0047e440();
    /* 004c5142: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5148: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c514du); f_0047e3b0();
    /* 004c514d: mov ecx, eax */ r_ecx = r_eax;
    /* 004c514f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c5154u); f_004c7010();
    /* 004c5154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5156: je 0x4c5137 */ if (fZ) goto L_004c5137;
L_004c5158:; BB(0x004c5158);
    /* 004c5158: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c515a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c515d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c515f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5162: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c5165: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5167u); call_ind(t); }
    /* 004c5167: jmp 0x4c52f7 */ goto L_004c52f7;
L_004c516c:; BB(0x004c516c);
    /* 004c516c: cmp dword ptr [0x791e3c], -3 */ {  u32 a = R32((u32)(0x791e3cu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5173: jne 0x4c52ca */ if (!fZ) goto L_004c52ca;
L_004c5179:; BB(0x004c5179);
    /* 004c5179: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c517f: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4c5184u); f_0047bbc0();
    /* 004c5184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5185: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c518b: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4c5190u); f_0047e400();
L_004c5190:; BB(0x004c5190);
    /* 004c5190: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5196: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4c519bu); f_0047e440();
    /* 004c519b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51a1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c51a6u); f_0047e3b0();
    /* 004c51a6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c51a8: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c51adu); f_004c7010();
    /* 004c51ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c51af: je 0x4c5190 */ if (fZ) goto L_004c5190;
L_004c51b1:; BB(0x004c51b1);
    /* 004c51b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51b7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c51ba: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4c51bfu); f_004f6420();
    /* 004c51bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c51c1: jle 0x4c52b2 */ if ((fZ||fS!=fO)) goto L_004c52b2;
L_004c51c7:; BB(0x004c51c7);
    /* 004c51c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51cd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c51d0: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4c51d5u); f_004f6420();
    /* 004c51d5: mov esi, eax */ r_esi = r_eax;
    /* 004c51d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51dd: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c51e2u); f_0047bc20();
    /* 004c51e2: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c51e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c51e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51ec: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c51ef: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4c51f4u); f_004f64b0();
    /* 004c51f4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c51f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c51f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c51fe: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c5203u); f_0047e3d0();
    /* 004c5203: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5205: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4c520au); f_004c6b80();
    /* 004c520a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5210: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5213: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4c5218u); f_004f64b0();
    /* 004c5218: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004c521b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c521c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5222: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c5227u); f_0047e3d0();
    /* 004c5227: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5229: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4c522eu); f_004da300();
    /* 004c522e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5230: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5236: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4c523bu); f_0047ec90();
    /* 004c523b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5241: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5244: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4c5249u); f_004f64b0();
    /* 004c5249: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c524c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c524d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5253: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4c5258u); f_0047e3d0();
    /* 004c5258: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004c525b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c525e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5260: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5266: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5269: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4c526eu); f_004f6420();
    /* 004c526e: mov esi, eax */ r_esi = r_eax;
    /* 004c5270: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5276: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c527bu); f_0047bc20();
    /* 004c527b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c527e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c527f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4c5284u); f_0064c8a0();
    /* 004c5284: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5287: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004c528a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004c528d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c5290: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004c5293: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c5296: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c5299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c529c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c529d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c52a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c52a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c52a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c52a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c52a7: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004c52ad: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4c52b2u); f_005e7e40();
L_004c52b2:; BB(0x004c52b2);
    /* 004c52b2: mov byte ptr [0x791e38], 1 */ W8((u32)(0x791e38u), 0x1u);
    /* 004c52b9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c52bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c52be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c52c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c52c3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c52c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c52c8u); call_ind(t); }
    /* 004c52c8: jmp 0x4c52f7 */ goto L_004c52f7;
L_004c52ca:; BB(0x004c52ca);
    /* 004c52ca: mov ecx, dword ptr [0x791e3c] */ r_ecx = R32((u32)(0x791e3cu));
    /* 004c52d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c52d1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c52d7: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4c52dcu); f_0047e490();
    /* 004c52dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c52dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c52e3: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4c52e8u); f_0047e400();
    /* 004c52e8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c52ea: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c52ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c52ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c52f2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c52f5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c52f7u); call_ind(t); }
L_004c52f7:; BB(0x004c52f7);
    /* 004c52f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c52f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c52fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c52fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5301: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c5304: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5306u); call_ind(t); }
    /* 004c5306: jmp 0x4c55da */ goto L_004c55da;
L_004c530b:; BB(0x004c530b);
    /* 004c530b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5311: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c5316u); f_0047e3b0();
    /* 004c5316: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5318: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c531du); f_004c7010();
    /* 004c531d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c531f: jne 0x4c5338 */ if (!fZ) goto L_004c5338;
L_004c5321:; BB(0x004c5321);
    /* 004c5321: push 0xd66 */ { u32 v = 0xd66u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5326: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c532b: push 0x6bf338 */ { u32 v = 0x6bf338u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5330: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c5335u); f_005e9f20();
    /* 004c5335: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c5338:; BB(0x004c5338);
    /* 004c5338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c533a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c533c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c533e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5341: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5344: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5346: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c534c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c5351u); f_0047e3b0();
    /* 004c5351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5352: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5358: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x4c535du); f_0047b010();
L_004c535d:; BB(0x004c535d);
    /* 004c535d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5363: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4c5368u); f_0047e440();
    /* 004c5368: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c536e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c5373u); f_0047e3b0();
    /* 004c5373: mov ecx, eax */ r_ecx = r_eax;
    /* 004c5375: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c537au); f_004c7010();
    /* 004c537a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c537c: je 0x4c535d */ if (fZ) goto L_004c535d;
L_004c537e:; BB(0x004c537e);
    /* 004c537e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5381: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004c5384: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5387: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c538a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004c538d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5390: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004c5393: cmp ecx, dword ptr [0x791e50] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x791e50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5399: jne 0x4c53b2 */ if (!fZ) goto L_004c53b2;
L_004c539b:; BB(0x004c539b);
    /* 004c539b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c539e: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 004c53a5: mov eax, dword ptr [0x791eb0] */ r_eax = R32((u32)(0x791eb0u));
    /* 004c53aa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ad: mov dword ptr [0x791eb0], eax */ W32((u32)(0x791eb0u), r_eax);
L_004c53b2:; BB(0x004c53b2);
    /* 004c53b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c53b8: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c53bdu); f_0047e190();
    /* 004c53bd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c53c0: jne 0x4c53df */ if (!fZ) goto L_004c53df;
L_004c53c2:; BB(0x004c53c2);
    /* 004c53c2: cmp dword ptr [0x791eb0], 2 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c53c9: jge 0x4c53df */ if ((fS==fO)) goto L_004c53df;
L_004c53cb:; BB(0x004c53cb);
    /* 004c53cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c53cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c53d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c53d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c53d5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c53d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c53dau); call_ind(t); }
    /* 004c53da: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c53df:; BB(0x004c53df);
    /* 004c53df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c53e5: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c53eau); f_0047e190();
    /* 004c53ea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c53ed: jne 0x4c540c */ if (!fZ) goto L_004c540c;
L_004c53ef:; BB(0x004c53ef);
    /* 004c53ef: cmp dword ptr [0x791eb0], 4 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c53f6: jge 0x4c540c */ if ((fS==fO)) goto L_004c540c;
L_004c53f8:; BB(0x004c53f8);
    /* 004c53f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c53fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c53fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c53ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5402: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c5405: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5407u); call_ind(t); }
    /* 004c5407: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c540c:; BB(0x004c540c);
    /* 004c540c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5412: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c5417u); f_0047e190();
    /* 004c5417: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c541a: jne 0x4c5439 */ if (!fZ) goto L_004c5439;
L_004c541c:; BB(0x004c541c);
    /* 004c541c: cmp dword ptr [0x791eb0], 4 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5423: jge 0x4c5439 */ if ((fS==fO)) goto L_004c5439;
L_004c5425:; BB(0x004c5425);
    /* 004c5425: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5427: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c542a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c542c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c542f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c5432: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5434u); call_ind(t); }
    /* 004c5434: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c5439:; BB(0x004c5439);
    /* 004c5439: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c543f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c5444u); f_0047e190();
    /* 004c5444: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5447: jne 0x4c5463 */ if (!fZ) goto L_004c5463;
L_004c5449:; BB(0x004c5449);
    /* 004c5449: cmp dword ptr [0x791eb0], 4 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5450: jge 0x4c5463 */ if ((fS==fO)) goto L_004c5463;
L_004c5452:; BB(0x004c5452);
    /* 004c5452: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5454: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5457: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c5459: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c545c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c545f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c5461u); call_ind(t); }
    /* 004c5461: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c5463:; BB(0x004c5463);
    /* 004c5463: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5469: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c546eu); f_0047e190();
    /* 004c546e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5471: jne 0x4c548e */ if (!fZ) goto L_004c548e;
L_004c5473:; BB(0x004c5473);
    /* 004c5473: mov dword ptr [0x791eb0], 0 */ W32((u32)(0x791eb0u), 0x0u);
    /* 004c547d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c547f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5482: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c5484: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5487: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c548a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c548cu); call_ind(t); }
    /* 004c548c: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c548e:; BB(0x004c548e);
    /* 004c548e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5494: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c5499u); f_0047e190();
    /* 004c5499: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c549c: jne 0x4c54b9 */ if (!fZ) goto L_004c54b9;
L_004c549e:; BB(0x004c549e);
    /* 004c549e: mov dword ptr [0x791eb0], 0 */ W32((u32)(0x791eb0u), 0x0u);
    /* 004c54a8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c54aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c54ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c54af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c54b2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c54b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c54b7u); call_ind(t); }
    /* 004c54b7: jmp 0x4c54c8 */ goto L_004c54c8;
L_004c54b9:; BB(0x004c54b9);
    /* 004c54b9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c54bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c54be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c54c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c54c3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c54c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c54c8u); call_ind(t); }
L_004c54c8:; BB(0x004c54c8);
    /* 004c54c8: jmp 0x4c55da */ goto L_004c55da;
L_004c54cd:; BB(0x004c54cd);
    /* 004c54cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c54d3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c54d8u); f_0047e190();
    /* 004c54d8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c54db: jne 0x4c54f8 */ if (!fZ) goto L_004c54f8;
L_004c54dd:; BB(0x004c54dd);
    /* 004c54dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c54e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c54e1: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c54e7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004c54ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c54eb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c54f1: call 0x47b5b0 */ r_esp -= 4; W32(r_esp, 0x4c54f6u); f_0047b5b0();
    /* 004c54f6: jmp 0x4c551b */ goto L_004c551b;
L_004c54f8:; BB(0x004c54f8);
    /* 004c54f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c54fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c54fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c54fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5501: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5502: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5504: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5506: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004c550c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004c550f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c5510: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5516: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x4c551bu); f_0047b010();
L_004c551b:; BB(0x004c551b);
    /* 004c551b: mov ecx, dword ptr [0x791eb0] */ r_ecx = R32((u32)(0x791eb0u));
    /* 004c5521: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c5524: mov dword ptr [0x791eb0], ecx */ W32((u32)(0x791eb0u), r_ecx);
    /* 004c552a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5530: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c5535u); f_0047e190();
    /* 004c5535: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5538: jne 0x4c5554 */ if (!fZ) goto L_004c5554;
L_004c553a:; BB(0x004c553a);
    /* 004c553a: cmp dword ptr [0x791eb0], 4 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c5541: jge 0x4c5554 */ if ((fS==fO)) goto L_004c5554;
L_004c5543:; BB(0x004c5543);
    /* 004c5543: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5545: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5548: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c554a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c554d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c5550: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c5552u); call_ind(t); }
    /* 004c5552: jmp 0x4c558d */ goto L_004c558d;
L_004c5554:; BB(0x004c5554);
    /* 004c5554: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c555a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c555fu); f_0047e190();
    /* 004c555f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c5562: jne 0x4c557e */ if (!fZ) goto L_004c557e;
L_004c5564:; BB(0x004c5564);
    /* 004c5564: cmp dword ptr [0x791eb0], 5 */ {  u32 a = R32((u32)(0x791eb0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c556b: jge 0x4c557e */ if ((fS==fO)) goto L_004c557e;
L_004c556d:; BB(0x004c556d);
    /* 004c556d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c556f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5572: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c5574: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5577: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c557a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c557cu); call_ind(t); }
    /* 004c557c: jmp 0x4c558d */ goto L_004c558d;
L_004c557e:; BB(0x004c557e);
    /* 004c557e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5580: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5583: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c5585: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c5588: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004c558b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c558du); call_ind(t); }
L_004c558d:; BB(0x004c558d);
    /* 004c558d: jmp 0x4c55da */ goto L_004c55da;
L_004c558f:; BB(0x004c558f);
    /* 004c558f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c5595: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c559au); f_0047e190();
    /* 004c559a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c559d: jne 0x4c55b8 */ if (!fZ) goto L_004c55b8;
L_004c559f:; BB(0x004c559f);
    /* 004c559f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c55a1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c55a6u); f_0062fbf0();
    /* 004c55a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c55a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c55ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c55ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c55b3: call 0x47edd0 */ r_esp -= 4; W32(r_esp, 0x4c55b8u); f_0047edd0();
L_004c55b8:; BB(0x004c55b8);
    /* 004c55b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c55ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c55bd: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004c55c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c55c3: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004c55c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004c55c8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c55cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c55cdu); call_ind(t); }
    /* 004c55cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c55cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c55d2: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004c55d5: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4c55dau); f_005fc420();
L_004c55da:; BB(0x004c55da);
    /* 004c55da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c55db: mov esp, ebp */ r_esp = r_ebp;
    /* 004c55dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c55de: ret 4 */ FN_RET(0x004c4b50); r_esp += 8; return;
}

