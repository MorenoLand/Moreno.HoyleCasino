#include "protos.h"

void f_005d0980(void) /* CasinoMachineState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0980);
    /* 005d0980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0981: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0985: push 0x6a8db8 */ { u32 v = 0x6a8db8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d098a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0991: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0992: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d0997: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d099a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d099d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d09a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d09a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09a9: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5d09aeu); f_005e9e20();
    /* 005d09ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d09b5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09b8: mov dword ptr [eax], 0x6d347c */ W32((u32)(r_eax), 0x6d347cu);
    /* 005d09be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d09c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09c3: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d09c8u); f_005d0a20();
    /* 005d09c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09cb: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005d09d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d09d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09d7: call 0x5d0a80 */ r_esp -= 4; W32(r_esp, 0x5d09dcu); f_005d0a80();
    /* 005d09dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d09e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d09e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d09e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d09f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d09f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005d09f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d09f4: ret  */ FN_RET(0x005d0980); r_esp += 4; return;
}

void f_005d0aa0(void) /* casinomachinestate::func_005d0aa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0aa0);
    /* 005d0aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0aa3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0aa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0aa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0aac: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0aaf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d0ab5: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 005d0abb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d0abe: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d0ac2: ja 0x5d0b11 */ if ((!fC&&!fZ)) goto L_005d0b11;
L_005d0ac4:; BB(0x005d0ac4);
    /* 005d0ac4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0ac7: jmp dword ptr [eax*4 + 0x5d0b30] */ { u32 t = R32((u32)(r_eax*4+0x5d0b30u)); switch (t) { case 0x5d0aceu: goto L_005d0ace; case 0x5d0ad2u: goto L_005d0ad2; case 0x5d0ad9u: goto L_005d0ad9; case 0x5d0ae0u: goto L_005d0ae0; case 0x5d0ae7u: goto L_005d0ae7; case 0x5d0aeeu: goto L_005d0aee; case 0x5d0af5u: goto L_005d0af5; case 0x5d0afcu: goto L_005d0afc; case 0x5d0b03u: goto L_005d0b03; case 0x5d0b0au: goto L_005d0b0a; default: UNSUP(0x005d0ac7, "jump table entry is not a known target"); } }
L_005d0ace:; BB(0x005d0ace);
    /* 005d0ace: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0ad0: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0ad2:; BB(0x005d0ad2);
    /* 005d0ad2: mov eax, 1 */ r_eax = 0x1u;
    /* 005d0ad7: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0ad9:; BB(0x005d0ad9);
    /* 005d0ad9: mov eax, 5 */ r_eax = 0x5u;
    /* 005d0ade: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0ae0:; BB(0x005d0ae0);
    /* 005d0ae0: mov eax, 0xa */ r_eax = 0xau;
    /* 005d0ae5: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0ae7:; BB(0x005d0ae7);
    /* 005d0ae7: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d0aec: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0aee:; BB(0x005d0aee);
    /* 005d0aee: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005d0af3: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0af5:; BB(0x005d0af5);
    /* 005d0af5: mov eax, 0x64 */ r_eax = 0x64u;
    /* 005d0afa: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0afc:; BB(0x005d0afc);
    /* 005d0afc: mov eax, 0xfa */ r_eax = 0xfau;
    /* 005d0b01: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0b03:; BB(0x005d0b03);
    /* 005d0b03: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005d0b08: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0b0a:; BB(0x005d0b0a);
    /* 005d0b0a: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005d0b0f: jmp 0x5d0b2b */ goto L_005d0b2b;
L_005d0b11:; BB(0x005d0b11);
    /* 005d0b11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005d0b13: jne 0x5d0b29 */ if (!fZ) goto L_005d0b29;
L_005d0b15:; BB(0x005d0b15);
    /* 005d0b15: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b17: push 0x6d3484 */ { u32 v = 0x6d3484u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b1c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b21: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d0b26u); f_005e9f20();
    /* 005d0b26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0b29:; BB(0x005d0b29);
    /* 005d0b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d0b2b:; BB(0x005d0b2b);
    /* 005d0b2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0b2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0b2e: ret  */ FN_RET(0x005d0aa0); r_esp += 4; return;
}

void f_005d0b60(void) /* casinomachinestate::func_005d0b60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0b60);
    /* 005d0b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0b63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0b66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0b69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0b6c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0b6f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d0b75: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 005d0b7b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d0b7e: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d0b82: ja 0x5d0be2 */ if ((!fC&&!fZ)) goto L_005d0be2;
L_005d0b84:; BB(0x005d0b84);
    /* 005d0b84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0b87: jmp dword ptr [eax*4 + 0x5d0c00] */ { u32 t = R32((u32)(r_eax*4+0x5d0c00u)); switch (t) { case 0x5d0b8eu: goto L_005d0b8e; case 0x5d0b95u: goto L_005d0b95; case 0x5d0b9cu: goto L_005d0b9c; case 0x5d0ba3u: goto L_005d0ba3; case 0x5d0baau: goto L_005d0baa; case 0x5d0bb1u: goto L_005d0bb1; case 0x5d0bb8u: goto L_005d0bb8; case 0x5d0bbfu: goto L_005d0bbf; case 0x5d0bc6u: goto L_005d0bc6; case 0x5d0bcdu: goto L_005d0bcd; case 0x5d0bd4u: goto L_005d0bd4; case 0x5d0bdbu: goto L_005d0bdb; default: UNSUP(0x005d0b87, "jump table entry is not a known target"); } }
L_005d0b8e:; BB(0x005d0b8e);
    /* 005d0b8e: mov eax, 5 */ r_eax = 0x5u;
    /* 005d0b93: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0b95:; BB(0x005d0b95);
    /* 005d0b95: mov eax, 0xa */ r_eax = 0xau;
    /* 005d0b9a: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0b9c:; BB(0x005d0b9c);
    /* 005d0b9c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d0ba1: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0ba3:; BB(0x005d0ba3);
    /* 005d0ba3: mov eax, 0x64 */ r_eax = 0x64u;
    /* 005d0ba8: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0baa:; BB(0x005d0baa);
    /* 005d0baa: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005d0baf: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bb1:; BB(0x005d0bb1);
    /* 005d0bb1: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005d0bb6: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bb8:; BB(0x005d0bb8);
    /* 005d0bb8: mov eax, 0x9c4 */ r_eax = 0x9c4u;
    /* 005d0bbd: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bbf:; BB(0x005d0bbf);
    /* 005d0bbf: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 005d0bc4: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bc6:; BB(0x005d0bc6);
    /* 005d0bc6: mov eax, 0x2710 */ r_eax = 0x2710u;
    /* 005d0bcb: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bcd:; BB(0x005d0bcd);
    /* 005d0bcd: mov eax, 0x61a8 */ r_eax = 0x61a8u;
    /* 005d0bd2: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bd4:; BB(0x005d0bd4);
    /* 005d0bd4: mov eax, 0xc350 */ r_eax = 0xc350u;
    /* 005d0bd9: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0bdb:; BB(0x005d0bdb);
    /* 005d0bdb: mov eax, 0x186a0 */ r_eax = 0x186a0u;
    /* 005d0be0: jmp 0x5d0bfc */ goto L_005d0bfc;
L_005d0be2:; BB(0x005d0be2);
    /* 005d0be2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005d0be4: jne 0x5d0bfa */ if (!fZ) goto L_005d0bfa;
L_005d0be6:; BB(0x005d0be6);
    /* 005d0be6: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0be8: push 0x6d3484 */ { u32 v = 0x6d3484u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bed: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0bf2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d0bf7u); f_005e9f20();
    /* 005d0bf7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0bfa:; BB(0x005d0bfa);
    /* 005d0bfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d0bfc:; BB(0x005d0bfc);
    /* 005d0bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0bff: ret  */ FN_RET(0x005d0b60); r_esp += 4; return;
}

void f_005d0f00(void) /* casinomachinestate::func_005d0f00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0f00);
    /* 005d0f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0f03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0f06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d0f09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f0b: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d0f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f12: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0f17u); f_005d0c30();
    /* 005d0f17: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d0f1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f21: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d0f24: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d0f27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0f2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f2f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d0f32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d0f34u); call_ind(t); }
    /* 005d0f34: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0f37: jl 0x5d0f50 */ if ((fS!=fO)) goto L_005d0f50;
L_005d0f39:; BB(0x005d0f39);
    /* 005d0f39: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f3e: push 0x6d3484 */ { u32 v = 0x6d3484u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f43: push 0x6d34a8 */ { u32 v = 0x6d34a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f48: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d0f4du); f_005e9f20();
    /* 005d0f4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0f50:; BB(0x005d0f50);
    /* 005d0f50: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f53: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d0f56: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d0f59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0f5c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0f5f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f62: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005d0f65: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f68: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0f6b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d0f6e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0f72: je 0x5d0f8e */ if (fZ) goto L_005d0f8e;
L_005d0f74:; BB(0x005d0f74);
    /* 005d0f74: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f77: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d0f7a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d0f7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0f80: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0f84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f87: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d0f8cu); f_005d0a20();
    /* 005d0f8c: jmp 0x5d0feb */ goto L_005d0feb;
L_005d0f8e:; BB(0x005d0f8e);
    /* 005d0f8e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0f92: jne 0x5d0fc2 */ if (!fZ) goto L_005d0fc2;
L_005d0f94:; BB(0x005d0f94);
    /* 005d0f94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0f97: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0f9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0f9d: imul edx, dword ptr [eax + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0fa1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d0fa4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0fa7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d0fa8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d0fad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d0fad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d0fad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d0faf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d0fb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0fb5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d0fb6: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d0fbb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d0fbb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d0fbb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d0fbd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d0fc0: jmp 0x5d0fdb */ goto L_005d0fdb;
L_005d0fc2:; BB(0x005d0fc2);
    /* 005d0fc2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0fc5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005d0fc8: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0fcb: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0fcf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d0fd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0fd5: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0fd8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d0fdb:; BB(0x005d0fdb);
    /* 005d0fdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0fde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fdf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fe3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0fe6: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d0febu); f_005d1420();
L_005d0feb:; BB(0x005d0feb);
    /* 005d0feb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0fee: ret  */ FN_RET(0x005d0f00); r_esp += 4; return;
}

void f_005d0ff0(void) /* casinomachinestate::func_005d0ff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0ff0);
    /* 005d0ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0ff3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0ff6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005d0ff9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ffb: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d0ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0fff: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1002: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d1007u); f_005d0c30();
    /* 005d1007: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005d100e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d1015: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d101c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d101f: fild dword ptr [ecx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0xcu)));
    /* 005d1022: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1025: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005d1028: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d102b: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x5d1030u); f_0064c560();
    /* 005d1030: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1033: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d1036: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d1039: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d103c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d103e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1041: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d1044: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1046u); call_ind(t); }
    /* 005d1046: cmp dword ptr [ebp - 0x30], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1049: jl 0x5d1062 */ if ((fS!=fO)) goto L_005d1062;
L_005d104b:; BB(0x005d104b);
    /* 005d104b: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1050: push 0x6d3484 */ { u32 v = 0x6d3484u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1055: push 0x6d34a8 */ { u32 v = 0x6d34a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d105a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d105fu); f_005e9f20();
    /* 005d105f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d1062:; BB(0x005d1062);
    /* 005d1062: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1065: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d1068: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d106b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d106e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d1071: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1074: jl 0x5d10ad */ if ((fS!=fO)) goto L_005d10ad;
L_005d1076:; BB(0x005d1076);
    /* 005d1076: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1079: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d107c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d107f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1082: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d1085: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d1088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1089: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d108c: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d1091u); f_005d0a20();
    /* 005d1091: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1094: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d1097: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005d109a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d109d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d10a0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10a3: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d10a6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d10a8: jmp 0x5d119e */ goto L_005d119e;
L_005d10ad:; BB(0x005d10ad);
    /* 005d10ad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d10b4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d10ba: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d10bd: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d10c1: je 0x5d10d6 */ if (fZ) goto L_005d10d6;
L_005d10c3:; BB(0x005d10c3);
    /* 005d10c3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10c6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d10c9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d10cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d10ce: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10d1: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d10d6u); f_005d0a20();
L_005d10d6:; BB(0x005d10d6);
    /* 005d10d6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10d9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005d10dc: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d10df: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d10e2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d10e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d10e6: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005d10e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d10ea: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d10ed: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d10f2u); f_005d0c30();
    /* 005d10f2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d10f4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d10f7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d10fa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d10fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1101: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d1104: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1105: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005d1108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1109: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d110b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d1110u); f_005dcb00();
    /* 005d1110: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1113: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1115: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d111au); f_005d5a90();
    /* 005d111a: mov ecx, eax */ r_ecx = r_eax;
    /* 005d111c: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x5d1121u); f_0064c6a0();
    /* 005d1121: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d1124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1126: je 0x5d1138 */ if (fZ) goto L_005d1138;
L_005d1128:; BB(0x005d1128);
    /* 005d1128: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d112b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d112c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d112f: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d1134u); f_005d0a20();
    /* 005d1134: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d1136: jmp 0x5d119e */ goto L_005d119e;
L_005d1138:; BB(0x005d1138);
    /* 005d1138: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d113c: jne 0x5d1165 */ if (!fZ) goto L_005d1165;
L_005d113e:; BB(0x005d113e);
    /* 005d113e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1141: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1144: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d1147: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d114a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d114b: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d1150: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d1150, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d1150, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d1152: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d1155: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d1158: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d1159: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d115e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d115e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d115e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d1160: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d1163: jmp 0x5d1177 */ goto L_005d1177;
L_005d1165:; BB(0x005d1165);
    /* 005d1165: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d1168: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d116b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d116e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1171: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1174: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005d1177:; BB(0x005d1177);
    /* 005d1177: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d117a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d117b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d117e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d117f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1182: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d1187u); f_005d1420();
    /* 005d1187: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d118a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d118d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005d1190: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d1193: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d1196: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1199: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005d119c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005d119e:; BB(0x005d119e);
    /* 005d119e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d11a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d11a1: ret  */ FN_RET(0x005d0ff0); r_esp += 4; return;
}

