#include "protos.h"

void f_0043bb00(void) /* CrapsBet::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bb00);
    /* 0043bb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bb03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb05: push 0x69e847 */ { u32 v = 0x69e847u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043bb10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb11: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bb14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043bb19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bb1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043bb1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0043bb25: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043bb28: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bb2b: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x43bb30u); f_005cb4b0();
    /* 0043bb30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043bb37: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bb3a: mov dword ptr [eax], 0x6b8084 */ W32((u32)(r_eax), 0x6b8084u);
    /* 0043bb40: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043bb47: jmp 0x43bb52 */ goto L_0043bb52;
L_0043bb49:; BB(0x0043bb49);
    /* 0043bb49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043bb4c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bb4f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043bb52:; BB(0x0043bb52);
    /* 0043bb52: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bb56: jge 0x43bb86 */ if ((fS==fO)) goto L_0043bb86;
L_0043bb58:; BB(0x0043bb58);
    /* 0043bb58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb5c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43bb61u); f_0064c8a0();
    /* 0043bb61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bb64: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043bb67: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0043bb6a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043bb6d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bb70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043bb73: mov dword ptr [eax + edx*8 + 0xf0], ecx */ W32((u32)(r_eax+r_edx*8+0xf0u), r_ecx);
    /* 0043bb7a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bb7d: mov dword ptr [eax + edx*8 + 0xf4], ecx */ W32((u32)(r_eax+r_edx*8+0xf4u), r_ecx);
    /* 0043bb84: jmp 0x43bb49 */ goto L_0043bb49;
L_0043bb86:; BB(0x0043bb86);
    /* 0043bb86: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bb89: mov dword ptr [edx + 0x110], 0xffffffff */ W32((u32)(r_edx+0x110u), 0xffffffffu);
    /* 0043bb93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043bb9a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043bb9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bba0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043bba7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043bba8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bbaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bbab: ret  */ FN_RET(0x0043bb00); r_esp += 4; return;
}

void f_0043bbd0(void) /* CrapsBet::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bbd0);
    /* 0043bbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bbd3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bbd6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043bbd9: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bbdd: jle 0x43bbe4 */ if ((fZ||fS!=fO)) goto L_0043bbe4;
L_0043bbdf:; BB(0x0043bbdf);
    /* 0043bbdf: jmp 0x43bcc0 */ goto L_0043bcc0;
L_0043bbe4:; BB(0x0043bbe4);
    /* 0043bbe4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043bbe7: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043bbea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bbed: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0043bbf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bbf3: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043bbf6: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0043bbf9: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0043bbfd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043bc00: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043bc03: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc07: jne 0x43bc2e */ if (!fZ) goto L_0043bc2e;
L_0043bc09:; BB(0x0043bc09);
    /* 0043bc09: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0043bc0c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043bc0f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc12: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0043bc16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bc18: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043bc1b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0043bc1e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0043bc22: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043bc25: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043bc28: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc2c: je 0x43bc8e */ if (fZ) goto L_0043bc8e;
L_0043bc2e:; BB(0x0043bc2e);
    /* 0043bc2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc32: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043bc38: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43bc3du); f_00434820();
    /* 0043bc3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc3f: jne 0x43bc5d */ if (!fZ) goto L_0043bc5d;
L_0043bc41:; BB(0x0043bc41);
    /* 0043bc41: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0043bc44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc45: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0043bc48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc49: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0043bc4e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0043bc51: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x43bc56u); f_005cb7d0();
    /* 0043bc56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043bc59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc5b: je 0x43bc8e */ if (fZ) goto L_0043bc8e;
L_0043bc5d:; BB(0x0043bc5d);
    /* 0043bc5d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc61: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043bc67: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43bc6cu); f_00434820();
    /* 0043bc6c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc6f: jne 0x43bca8 */ if (!fZ) goto L_0043bca8;
L_0043bc71:; BB(0x0043bc71);
    /* 0043bc71: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0043bc74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc75: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0043bc78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bc79: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0043bc7f: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0043bc82: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x43bc87u); f_005cb7d0();
    /* 0043bc87: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043bc8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bc8c: jne 0x43bca8 */ if (!fZ) goto L_0043bca8;
L_0043bc8e:; BB(0x0043bc8e);
    /* 0043bc8e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0043bc91: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043bc97: mov dword ptr [edx + ecx*8 + 0xf0], eax */ W32((u32)(r_edx+r_ecx*8+0xf0u), r_eax);
    /* 0043bc9e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bca1: mov dword ptr [edx + ecx*8 + 0xf4], eax */ W32((u32)(r_edx+r_ecx*8+0xf4u), r_eax);
L_0043bca8:; BB(0x0043bca8);
    /* 0043bca8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0043bcab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcac: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0043bcaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcb0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bcb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bcb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcb8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bcbb: call 0x5cb6d0 */ r_esp -= 4; W32(r_esp, 0x43bcc0u); f_005cb6d0();
L_0043bcc0:; BB(0x0043bcc0);
    /* 0043bcc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bcc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bcc3: ret 0x10 */ FN_RET(0x0043bbd0); r_esp += 20; return;
}

void f_0043bcd0(void) /* CrapsBet::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bcd0);
    /* 0043bcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bcd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bcd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0043bcd9: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcdd: jle 0x43bce1 */ if ((fZ||fS!=fO)) goto L_0043bce1;
L_0043bcdf:; BB(0x0043bcdf);
    /* 0043bcdf: jmp 0x43bd1d */ goto L_0043bd1d;
L_0043bce1:; BB(0x0043bce1);
    /* 0043bce1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043bce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bce5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043bce8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bce9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bcec: call 0x5cb780 */ r_esp -= 4; W32(r_esp, 0x43bcf1u); f_005cb780();
    /* 0043bcf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bcf5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43bcfau); f_0064c8a0();
    /* 0043bcfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bcfd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043bd00: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043bd03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043bd06: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bd09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043bd0c: mov dword ptr [eax + edx*8 + 0xf0], ecx */ W32((u32)(r_eax+r_edx*8+0xf0u), r_ecx);
    /* 0043bd13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bd16: mov dword ptr [eax + edx*8 + 0xf4], ecx */ W32((u32)(r_eax+r_edx*8+0xf4u), r_ecx);
L_0043bd1d:; BB(0x0043bd1d);
    /* 0043bd1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bd1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bd20: ret 8 */ FN_RET(0x0043bcd0); r_esp += 12; return;
}

void f_0043bfc0(void) /* CrapsBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bfc0);
    /* 0043bfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bfc3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043bfc6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043bfc9: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043bfcf: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43bfd4u); f_004347f0();
    /* 0043bfd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bfd6: je 0x43c057 */ if (fZ) goto L_0043c057;
L_0043bfd8:; BB(0x0043bfd8);
    /* 0043bfd8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043bfde: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43bfe3u); f_004347f0();
    /* 0043bfe3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043bfe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bfe9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43bfeeu); f_0063aac0();
    /* 0043bfee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043bff0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043bff3: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bff7: je 0x43c015 */ if (fZ) goto L_0043c015;
L_0043bff9:; BB(0x0043bff9);
    /* 0043bff9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043bffc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c001u); f_0063aac0();
    /* 0043c001: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043c003: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043c006: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c00a: je 0x43c015 */ if (fZ) goto L_0043c015;
L_0043c00c:; BB(0x0043c00c);
    /* 0043c00c: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0043c013: jmp 0x43c01c */ goto L_0043c01c;
L_0043c015:; BB(0x0043c015);
    /* 0043c015: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_0043c01c:; BB(0x0043c01c);
    /* 0043c01c: movzx edx, byte ptr [ebp - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 0043c020: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c022: je 0x43c057 */ if (fZ) goto L_0043c057;
L_0043c024:; BB(0x0043c024);
    /* 0043c024: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c02a: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43c02fu); f_004347f0();
    /* 0043c02f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043c032: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c035: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0043c03b: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 0043c03e: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0043c042: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c044: jne 0x43c057 */ if (!fZ) goto L_0043c057;
L_0043c046:; BB(0x0043c046);
    /* 0043c046: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c04a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c050: call 0x435290 */ r_esp -= 4; W32(r_esp, 0x43c055u); f_00435290();
    /* 0043c055: jmp 0x43c059 */ goto L_0043c059;
L_0043c057:; BB(0x0043c057);
    /* 0043c057: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043c059:; BB(0x0043c059);
    /* 0043c059: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c05b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c05c: ret  */ FN_RET(0x0043bfc0); r_esp += 4; return;
}

void f_0043c060(void) /* CrapsBet::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c060);
    /* 0043c060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c061: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c063: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c066: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043c069: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c06c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c06e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c071: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0043c077: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43c079u); call_ind(t); }
    /* 0043c079: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043c07c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c07e: je 0x43c087 */ if (fZ) goto L_0043c087;
L_0043c080:; BB(0x0043c080);
    /* 0043c080: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043c082: jmp 0x43c117 */ goto L_0043c117;
L_0043c087:; BB(0x0043c087);
    /* 0043c087: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c08d: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43c092u); f_004347f0();
    /* 0043c092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c094: je 0x43c115 */ if (fZ) goto L_0043c115;
L_0043c096:; BB(0x0043c096);
    /* 0043c096: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c09c: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43c0a1u); f_004347f0();
    /* 0043c0a1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043c0a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c0a7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c0acu); f_0063aac0();
    /* 0043c0ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c0ae: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043c0b1: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c0b5: je 0x43c0d3 */ if (fZ) goto L_0043c0d3;
L_0043c0b7:; BB(0x0043c0b7);
    /* 0043c0b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c0ba: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c0bfu); f_0063aac0();
    /* 0043c0bf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043c0c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043c0c4: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c0c8: je 0x43c0d3 */ if (fZ) goto L_0043c0d3;
L_0043c0ca:; BB(0x0043c0ca);
    /* 0043c0ca: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0043c0d1: jmp 0x43c0da */ goto L_0043c0da;
L_0043c0d3:; BB(0x0043c0d3);
    /* 0043c0d3: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_0043c0da:; BB(0x0043c0da);
    /* 0043c0da: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 0043c0de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c0e0: je 0x43c115 */ if (fZ) goto L_0043c115;
L_0043c0e2:; BB(0x0043c0e2);
    /* 0043c0e2: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c0e8: call 0x4347f0 */ r_esp -= 4; W32(r_esp, 0x43c0edu); f_004347f0();
    /* 0043c0ed: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043c0f0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043c0f3: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0043c0f9: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 0043c0fc: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0043c100: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c102: jne 0x43c115 */ if (!fZ) goto L_0043c115;
L_0043c104:; BB(0x0043c104);
    /* 0043c104: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043c107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c108: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c10e: call 0x435300 */ r_esp -= 4; W32(r_esp, 0x43c113u); f_00435300();
    /* 0043c113: jmp 0x43c117 */ goto L_0043c117;
L_0043c115:; BB(0x0043c115);
    /* 0043c115: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043c117:; BB(0x0043c117);
    /* 0043c117: mov esp, ebp */ r_esp = r_ebp;
    /* 0043c119: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c11a: ret  */ FN_RET(0x0043c060); r_esp += 4; return;
}

void f_0043c120(void) /* CrapsBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043c120);
    /* 0043c120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043c121: mov ebp, esp */ r_ebp = r_esp;
    /* 0043c123: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c129: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043c12e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043c130: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043c133: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043c134: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 0043c13a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c13d: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c140: jl 0x43c156 */ if ((fS!=fO)) goto L_0043c156;
L_0043c142:; BB(0x0043c142);
    /* 0043c142: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c145: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c148: jl 0x43c156 */ if ((fS!=fO)) goto L_0043c156;
L_0043c14a:; BB(0x0043c14a);
    /* 0043c14a: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
    /* 0043c154: jmp 0x43c160 */ goto L_0043c160;
L_0043c156:; BB(0x0043c156);
    /* 0043c156: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_0043c160:; BB(0x0043c160);
    /* 0043c160: mov dl, byte ptr [ebp - 0x16c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe94u))) & 0xffu);
    /* 0043c166: mov byte ptr [ebp - 0x11d], dl */ W8((u32)(r_ebp+0xfffffee3u), (u8)r_edx);
    /* 0043c16c: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 0043c171: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c173: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043c179: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 0043c17f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43c181u); call_ind(t); }
    /* 0043c181: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0043c187: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c18e: jne 0x43c195 */ if (!fZ) goto L_0043c195;
L_0043c190:; BB(0x0043c190);
    /* 0043c190: jmp 0x43cd21 */ goto L_0043cd21;
L_0043c195:; BB(0x0043c195);
    /* 0043c195: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043c19b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c19d: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043c1a3: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0043c1a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43c1abu); call_ind(t); }
    /* 0043c1ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043c1ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1b2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43c1b7u); f_0064c8a0();
    /* 0043c1b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c1ba: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0043c1c0: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 0043c1c6: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0043c1cc: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0043c1d2: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0043c1d8: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 0043c1de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c1e1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043c1e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c1e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c1ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1eb: push 0x6b81a8 */ { u32 v = 0x6b81a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f0: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0043c1f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x43c1fdu); call_ind(t); }
    /* 0043c1fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c200: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0043c206: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c207: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x43c20cu); f_0062fde0();
    /* 0043c20c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c20f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c215: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c21au); f_005f5400();
    /* 0043c21a: cmp eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c21d: je 0x43c253 */ if (fZ) goto L_0043c253;
L_0043c21f:; BB(0x0043c21f);
    /* 0043c21f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c225: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c22au); f_005f5400();
    /* 0043c22a: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c22d: je 0x43c253 */ if (fZ) goto L_0043c253;
L_0043c22f:; BB(0x0043c22f);
    /* 0043c22f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c235: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c23au); f_005f5400();
    /* 0043c23a: cmp eax, 0x2f */ {  u32 a = r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c23d: je 0x43c253 */ if (fZ) goto L_0043c253;
L_0043c23f:; BB(0x0043c23f);
    /* 0043c23f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c245: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c24au); f_005f5400();
    /* 0043c24a: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c24d: jne 0x43c36a */ if (!fZ) goto L_0043c36a;
L_0043c253:; BB(0x0043c253);
    /* 0043c253: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c256: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c259: jne 0x43c31e */ if (!fZ) goto L_0043c31e;
L_0043c25f:; BB(0x0043c25f);
    /* 0043c25f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c265: cmp dword ptr [ecx + 0x4bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x4bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c26c: jle 0x43c2ea */ if ((fZ||fS!=fO)) goto L_0043c2ea;
L_0043c26e:; BB(0x0043c26e);
    /* 0043c26e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c271: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c274: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c27a: cmp dword ptr [eax + 0x4bc], edx */ {  u32 a = R32((u32)(r_eax+0x4bcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c280: jle 0x43c2ad */ if ((fZ||fS!=fO)) goto L_0043c2ad;
L_0043c282:; BB(0x0043c282);
    /* 0043c282: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c288: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 0043c28e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c28f: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043c294: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c294, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c294, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c296: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c298: jne 0x43c2ad */ if (!fZ) goto L_0043c2ad;
L_0043c29a:; BB(0x0043c29a);
    /* 0043c29a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c29d: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c2a3: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 0043c2a9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0043c2ab: jmp 0x43c2e8 */ goto L_0043c2e8;
L_0043c2ad:; BB(0x0043c2ad);
    /* 0043c2ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c2b0: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c2b6: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 0043c2bc: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0043c2be:; BB(0x0043c2be);
    /* 0043c2be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c2c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c2c3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c2c4: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043c2c9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c2c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c2c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c2cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c2cd: jne 0x43c2d9 */ if (!fZ) goto L_0043c2d9;
L_0043c2cf:; BB(0x0043c2cf);
    /* 0043c2cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c2d2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c2d4: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c2d7: jge 0x43c2e8 */ if ((fS==fO)) goto L_0043c2e8;
L_0043c2d9:; BB(0x0043c2d9);
    /* 0043c2d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c2dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c2de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c2e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c2e4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c2e6: jmp 0x43c2be */ goto L_0043c2be;
L_0043c2e8:; BB(0x0043c2e8);
    /* 0043c2e8: jmp 0x43c31c */ goto L_0043c31c;
L_0043c2ea:; BB(0x0043c2ea);
    /* 0043c2ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c2ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c2f0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0043c2f2:; BB(0x0043c2f2);
    /* 0043c2f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c2f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043c2f7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c2f8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043c2fd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c2fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c2fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c2ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c301: jne 0x43c30d */ if (!fZ) goto L_0043c30d;
L_0043c303:; BB(0x0043c303);
    /* 0043c303: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c306: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c308: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c30b: jge 0x43c31c */ if ((fS==fO)) goto L_0043c31c;
L_0043c30d:; BB(0x0043c30d);
    /* 0043c30d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c310: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c312: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c315: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c318: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c31a: jmp 0x43c2f2 */ goto L_0043c2f2;
L_0043c31c:; BB(0x0043c31c);
    /* 0043c31c: jmp 0x43c36a */ goto L_0043c36a;
L_0043c31e:; BB(0x0043c31e);
    /* 0043c31e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c321: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c324: jge 0x43c36a */ if ((fS==fO)) goto L_0043c36a;
L_0043c326:; BB(0x0043c326);
    /* 0043c326: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c329: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c32b: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c32e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c331: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0043c333:; BB(0x0043c333);
    /* 0043c333: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c336: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c338: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c339: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0043c33e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c33e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c33e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c340: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c342: jne 0x43c34e */ if (!fZ) goto L_0043c34e;
L_0043c344:; BB(0x0043c344);
    /* 0043c344: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c347: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c349: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c34c: jge 0x43c35d */ if ((fS==fO)) goto L_0043c35d;
L_0043c34e:; BB(0x0043c34e);
    /* 0043c34e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c351: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c353: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c356: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c359: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c35b: jmp 0x43c333 */ goto L_0043c333;
L_0043c35d:; BB(0x0043c35d);
    /* 0043c35d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c360: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c362: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c365: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c368: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0043c36a:; BB(0x0043c36a);
    /* 0043c36a: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c370: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c375u); f_005f5400();
    /* 0043c375: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c378: je 0x43c38e */ if (fZ) goto L_0043c38e;
L_0043c37a:; BB(0x0043c37a);
    /* 0043c37a: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c380: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c385u); f_005f5400();
    /* 0043c385: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c388: jne 0x43c4a5 */ if (!fZ) goto L_0043c4a5;
L_0043c38e:; BB(0x0043c38e);
    /* 0043c38e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c391: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c394: jne 0x43c459 */ if (!fZ) goto L_0043c459;
L_0043c39a:; BB(0x0043c39a);
    /* 0043c39a: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c3a0: cmp dword ptr [edx + 0x4bc], 0 */ {  u32 a = R32((u32)(r_edx+0x4bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c3a7: jle 0x43c425 */ if ((fZ||fS!=fO)) goto L_0043c425;
L_0043c3a9:; BB(0x0043c3a9);
    /* 0043c3a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c3ac: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c3af: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c3b5: cmp dword ptr [ecx + 0x4bc], eax */ {  u32 a = R32((u32)(r_ecx+0x4bcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c3bb: jle 0x43c3e8 */ if ((fZ||fS!=fO)) goto L_0043c3e8;
L_0043c3bd:; BB(0x0043c3bd);
    /* 0043c3bd: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c3c3: mov eax, dword ptr [edx + 0x4bc] */ r_eax = R32((u32)(r_edx+0x4bcu));
    /* 0043c3c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c3ca: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0043c3cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c3cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c3cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c3d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c3d3: jne 0x43c3e8 */ if (!fZ) goto L_0043c3e8;
L_0043c3d5:; BB(0x0043c3d5);
    /* 0043c3d5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c3d8: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c3de: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 0043c3e4: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0043c3e6: jmp 0x43c423 */ goto L_0043c423;
L_0043c3e8:; BB(0x0043c3e8);
    /* 0043c3e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c3eb: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c3f1: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 0043c3f7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0043c3f9:; BB(0x0043c3f9);
    /* 0043c3f9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c3fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c3fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c3ff: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0043c404: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c404, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c404, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c406: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c408: jne 0x43c414 */ if (!fZ) goto L_0043c414;
L_0043c40a:; BB(0x0043c40a);
    /* 0043c40a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c40d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c40f: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c412: jge 0x43c423 */ if ((fS==fO)) goto L_0043c423;
L_0043c414:; BB(0x0043c414);
    /* 0043c414: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c417: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c419: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c41c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c41f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c421: jmp 0x43c3f9 */ goto L_0043c3f9;
L_0043c423:; BB(0x0043c423);
    /* 0043c423: jmp 0x43c457 */ goto L_0043c457;
L_0043c425:; BB(0x0043c425);
    /* 0043c425: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c428: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c42b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0043c42d:; BB(0x0043c42d);
    /* 0043c42d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c430: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043c432: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c433: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0043c438: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c438, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c438, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c43a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c43c: jne 0x43c448 */ if (!fZ) goto L_0043c448;
L_0043c43e:; BB(0x0043c43e);
    /* 0043c43e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c441: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c443: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c446: jge 0x43c457 */ if ((fS==fO)) goto L_0043c457;
L_0043c448:; BB(0x0043c448);
    /* 0043c448: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c44b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c44d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c450: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c453: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c455: jmp 0x43c42d */ goto L_0043c42d;
L_0043c457:; BB(0x0043c457);
    /* 0043c457: jmp 0x43c4a5 */ goto L_0043c4a5;
L_0043c459:; BB(0x0043c459);
    /* 0043c459: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c45c: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c45f: jge 0x43c4a5 */ if ((fS==fO)) goto L_0043c4a5;
L_0043c461:; BB(0x0043c461);
    /* 0043c461: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c464: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c466: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c469: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c46c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0043c46e:; BB(0x0043c46e);
    /* 0043c46e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c471: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c473: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043c474: mov ecx, 6 */ r_ecx = 0x6u;
    /* 0043c479: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0043c479, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043c479, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043c47b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c47d: jne 0x43c489 */ if (!fZ) goto L_0043c489;
L_0043c47f:; BB(0x0043c47f);
    /* 0043c47f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c482: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c484: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c487: jge 0x43c498 */ if ((fS==fO)) goto L_0043c498;
L_0043c489:; BB(0x0043c489);
    /* 0043c489: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c48c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c48e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c491: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c494: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c496: jmp 0x43c46e */ goto L_0043c46e;
L_0043c498:; BB(0x0043c498);
    /* 0043c498: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c49b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c49d: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c4a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c4a3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0043c4a5:; BB(0x0043c4a5);
    /* 0043c4a5: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c4ab: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c4b0u); f_005f5400();
    /* 0043c4b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4b1: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c4b7: call 0x435ca0 */ r_esp -= 4; W32(r_esp, 0x43c4bcu); f_00435ca0();
    /* 0043c4bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043c4bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c4c1: jne 0x43c4e5 */ if (!fZ) goto L_0043c4e5;
L_0043c4c3:; BB(0x0043c4c3);
    /* 0043c4c3: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c4c9: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c4ceu); f_005f5400();
    /* 0043c4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c4cf: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c4d5: call 0x435cf0 */ r_esp -= 4; W32(r_esp, 0x43c4dau); f_00435cf0();
    /* 0043c4da: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043c4dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c4df: je 0x43c6f3 */ if (fZ) goto L_0043c6f3;
L_0043c4e5:; BB(0x0043c4e5);
    /* 0043c4e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c4e8: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c4eb: jne 0x43c6f3 */ if (!fZ) goto L_0043c6f3;
L_0043c4f1:; BB(0x0043c4f1);
    /* 0043c4f1: movzx ecx, byte ptr [ebp - 0x11d] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffee3u));
    /* 0043c4f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c4fa: je 0x43c6f3 */ if (fZ) goto L_0043c6f3;
L_0043c500:; BB(0x0043c500);
    /* 0043c500: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c506: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43c50bu); f_005d5a50();
    /* 0043c50b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c50d: je 0x43c6f3 */ if (fZ) goto L_0043c6f3;
L_0043c513:; BB(0x0043c513);
    /* 0043c513: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c519: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c51eu); f_0063aac0();
    /* 0043c51e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c520: mov dword ptr [ebp - 0x154], edx */ W32((u32)(r_ebp+0xfffffeacu), r_edx);
    /* 0043c526: cmp dword ptr [ebp - 0x154], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c52d: je 0x43c557 */ if (fZ) goto L_0043c557;
L_0043c52f:; BB(0x0043c52f);
    /* 0043c52f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c535: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c53au); f_0063aac0();
    /* 0043c53a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043c53c: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0043c542: cmp dword ptr [ebp - 0x158], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffea8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c549: je 0x43c557 */ if (fZ) goto L_0043c557;
L_0043c54b:; BB(0x0043c54b);
    /* 0043c54b: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 0043c555: jmp 0x43c561 */ goto L_0043c561;
L_0043c557:; BB(0x0043c557);
    /* 0043c557: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
L_0043c561:; BB(0x0043c561);
    /* 0043c561: movzx ecx, byte ptr [ebp - 0x170] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe90u));
    /* 0043c568: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c56a: je 0x43c5ad */ if (fZ) goto L_0043c5ad;
L_0043c56c:; BB(0x0043c56c);
    /* 0043c56c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c572: call 0x4342d0 */ r_esp -= 4; W32(r_esp, 0x43c577u); f_004342d0();
    /* 0043c577: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043c57a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c57c: je 0x43c5ad */ if (fZ) goto L_0043c5ad;
L_0043c57e:; BB(0x0043c57e);
    /* 0043c57e: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c585: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c58b: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43c590u); f_00434820();
    /* 0043c590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c591: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c597: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043c59a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c59b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c5a1: call 0x436570 */ r_esp -= 4; W32(r_esp, 0x43c5a6u); f_00436570();
    /* 0043c5a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c5a9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0043c5ab: jmp 0x43c5be */ goto L_0043c5be;
L_0043c5ad:; BB(0x0043c5ad);
    /* 0043c5ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c5b0: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c5b6: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 0043c5bc: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0043c5be:; BB(0x0043c5be);
    /* 0043c5be: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c5c4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043c5c7: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 0043c5cd: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0043c5d3: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043c5d6: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c5dc: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0043c5e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c5e2: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043c5e5: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0043c5e8: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0043c5ec: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043c5ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043c5f2: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c5f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c5f9: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c5ff: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43c604u); f_00434820();
    /* 0043c604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c605: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c60b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0043c60e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c60f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c615: call 0x436570 */ r_esp -= 4; W32(r_esp, 0x43c61au); f_00436570();
    /* 0043c61a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c61d: jne 0x43c624 */ if (!fZ) goto L_0043c624;
L_0043c61f:; BB(0x0043c61f);
    /* 0043c61f: jmp 0x43cd21 */ goto L_0043cd21;
L_0043c624:; BB(0x0043c624);
    /* 0043c624: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c627: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043c62a: add esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043c62c: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c632: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c633: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c639: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43c63eu); f_00434820();
    /* 0043c63e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c63f: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c645: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043c648: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c649: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c64f: call 0x436570 */ r_esp -= 4; W32(r_esp, 0x43c654u); f_00436570();
    /* 0043c654: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c656: jle 0x43c6b4 */ if ((fZ||fS!=fO)) goto L_0043c6b4;
L_0043c658:; BB(0x0043c658);
    /* 0043c658: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c65e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c65f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c665: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43c66au); f_00434820();
    /* 0043c66a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c66b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c671: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043c674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c675: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c67b: call 0x436570 */ r_esp -= 4; W32(r_esp, 0x43c680u); f_00436570();
    /* 0043c680: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043c683: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c686: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0043c688: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c68b: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c68e: jg 0x43c6a7 */ if ((!fZ&&fS==fO)) goto L_0043c6a7;
L_0043c690:; BB(0x0043c690);
    /* 0043c690: push 0xac1 */ { u32 v = 0xac1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c695: push 0x6b7f20 */ { u32 v = 0x6b7f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c69a: push 0x6b8190 */ { u32 v = 0x6b8190u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c69f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43c6a4u); f_005e9f20();
    /* 0043c6a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043c6a7:; BB(0x0043c6a7);
    /* 0043c6a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c6aa: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c6ad: jg 0x43c6b4 */ if ((!fZ&&fS==fO)) goto L_0043c6b4;
L_0043c6af:; BB(0x0043c6af);
    /* 0043c6af: jmp 0x43cd21 */ goto L_0043cd21;
L_0043c6b4:; BB(0x0043c6b4);
    /* 0043c6b4: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c6ba: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43c6bfu); f_005d5a50();
    /* 0043c6bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c6c2: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c6c4: jge 0x43c6d9 */ if ((fS==fO)) goto L_0043c6d9;
L_0043c6c6:; BB(0x0043c6c6);
    /* 0043c6c6: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c6cc: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43c6d1u); f_005d5a50();
    /* 0043c6d1: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0043c6d7: jmp 0x43c6e4 */ goto L_0043c6e4;
L_0043c6d9:; BB(0x0043c6d9);
    /* 0043c6d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c6dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c6de: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
L_0043c6e4:; BB(0x0043c6e4);
    /* 0043c6e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c6e7: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0043c6ed: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0043c6ef: mov byte ptr [ebp + 0x10], 0 */ W8((u32)(r_ebp+0x10u), 0x0u);
L_0043c6f3:; BB(0x0043c6f3);
    /* 0043c6f3: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c6f9: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c6feu); f_005f5400();
    /* 0043c6fe: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c701: jne 0x43c80a */ if (!fZ) goto L_0043c80a;
L_0043c707:; BB(0x0043c707);
    /* 0043c707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c70a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c70d: jne 0x43c7b9 */ if (!fZ) goto L_0043c7b9;
L_0043c713:; BB(0x0043c713);
    /* 0043c713: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c719: cmp dword ptr [ecx + 0x4bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x4bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c720: jle 0x43c7ac */ if ((fZ||fS!=fO)) goto L_0043c7ac;
L_0043c726:; BB(0x0043c726);
    /* 0043c726: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c729: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043c72c: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c732: cmp dword ptr [eax + 0x4bc], edx */ {  u32 a = R32((u32)(r_eax+0x4bcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c738: jle 0x43c76a */ if ((fZ||fS!=fO)) goto L_0043c76a;
L_0043c73a:; BB(0x0043c73a);
    /* 0043c73a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c740: mov edx, dword ptr [ecx + 0x4bc] */ r_edx = R32((u32)(r_ecx+0x4bcu));
    /* 0043c746: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0043c74c: jns 0x43c753 */ if (!fS) goto L_0043c753;
L_0043c74e:; BB(0x0043c74e);
    /* 0043c74e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043c74f: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043c752: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0043c753:; BB(0x0043c753);
    /* 0043c753: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c755: jne 0x43c76a */ if (!fZ) goto L_0043c76a;
L_0043c757:; BB(0x0043c757);
    /* 0043c757: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c75a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c760: mov edx, dword ptr [ecx + 0x4bc] */ r_edx = R32((u32)(r_ecx+0x4bcu));
    /* 0043c766: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c768: jmp 0x43c7aa */ goto L_0043c7aa;
L_0043c76a:; BB(0x0043c76a);
    /* 0043c76a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c76d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c773: mov edx, dword ptr [ecx + 0x4bc] */ r_edx = R32((u32)(r_ecx+0x4bcu));
    /* 0043c779: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0043c77b:; BB(0x0043c77b);
    /* 0043c77b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c77e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043c780: and ecx, 0x80000003 */ {  u32 a = r_ecx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0043c786: jns 0x43c78d */ if (!fS) goto L_0043c78d;
L_0043c788:; BB(0x0043c788);
    /* 0043c788: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c789: or ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c78c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0043c78d:; BB(0x0043c78d);
    /* 0043c78d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c78f: jne 0x43c79b */ if (!fZ) goto L_0043c79b;
L_0043c791:; BB(0x0043c791);
    /* 0043c791: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c794: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c796: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c799: jge 0x43c7aa */ if ((fS==fO)) goto L_0043c7aa;
L_0043c79b:; BB(0x0043c79b);
    /* 0043c79b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c79e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c7a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043c7a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c7a6: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043c7a8: jmp 0x43c77b */ goto L_0043c77b;
L_0043c7aa:; BB(0x0043c7aa);
    /* 0043c7aa: jmp 0x43c7b7 */ goto L_0043c7b7;
L_0043c7ac:; BB(0x0043c7ac);
    /* 0043c7ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c7af: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043c7b2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c7b5: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0043c7b7:; BB(0x0043c7b7);
    /* 0043c7b7: jmp 0x43c80a */ goto L_0043c80a;
L_0043c7b9:; BB(0x0043c7b9);
    /* 0043c7b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c7bc: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c7bf: jge 0x43c80a */ if ((fS==fO)) goto L_0043c80a;
L_0043c7c1:; BB(0x0043c7c1);
    /* 0043c7c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c7c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c7c6: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c7c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c7cc: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0043c7ce:; BB(0x0043c7ce);
    /* 0043c7ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c7d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c7d3: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0043c7d9: jns 0x43c7e0 */ if (!fS) goto L_0043c7e0;
L_0043c7db:; BB(0x0043c7db);
    /* 0043c7db: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043c7dc: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043c7df: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0043c7e0:; BB(0x0043c7e0);
    /* 0043c7e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c7e2: jne 0x43c7ee */ if (!fZ) goto L_0043c7ee;
L_0043c7e4:; BB(0x0043c7e4);
    /* 0043c7e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c7e7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043c7e9: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c7ec: jge 0x43c7fd */ if ((fS==fO)) goto L_0043c7fd;
L_0043c7ee:; BB(0x0043c7ee);
    /* 0043c7ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c7f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c7f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043c7f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c7f9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0043c7fb: jmp 0x43c7ce */ goto L_0043c7ce;
L_0043c7fd:; BB(0x0043c7fd);
    /* 0043c7fd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c800: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043c802: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043c805: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c808: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0043c80a:; BB(0x0043c80a);
    /* 0043c80a: movzx edx, byte ptr [ebp - 0x11d] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffee3u));
    /* 0043c811: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c813: je 0x43ca80 */ if (fZ) goto L_0043ca80;
L_0043c819:; BB(0x0043c819);
    /* 0043c819: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c81f: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c824u); f_005f5400();
    /* 0043c824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c825: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c82b: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x43c830u); f_004388a0();
    /* 0043c830: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043c833: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c835: jne 0x43c859 */ if (!fZ) goto L_0043c859;
L_0043c837:; BB(0x0043c837);
    /* 0043c837: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c83d: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c842u); f_005f5400();
    /* 0043c842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c843: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c849: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x43c84eu); f_004388d0();
    /* 0043c84e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043c851: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c853: je 0x43ca80 */ if (fZ) goto L_0043ca80;
L_0043c859:; BB(0x0043c859);
    /* 0043c859: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043c85c: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c85f: jne 0x43c88b */ if (!fZ) goto L_0043c88b;
L_0043c861:; BB(0x0043c861);
    /* 0043c861: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c867: cmp dword ptr [eax + 0x4bc], 0 */ {  u32 a = R32((u32)(r_eax+0x4bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c86e: jle 0x43c883 */ if ((fZ||fS!=fO)) goto L_0043c883;
L_0043c870:; BB(0x0043c870);
    /* 0043c870: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c873: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c879: mov eax, dword ptr [edx + 0x4bc] */ r_eax = R32((u32)(r_edx+0x4bcu));
    /* 0043c87f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0043c881: jmp 0x43c88b */ goto L_0043c88b;
L_0043c883:; BB(0x0043c883);
    /* 0043c883: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c886: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043c889: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0043c88b:; BB(0x0043c88b);
    /* 0043c88b: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c891: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c896u); f_005f5400();
    /* 0043c896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c897: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c89d: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x43c8a2u); f_004388d0();
    /* 0043c8a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043c8a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c8a7: je 0x43c8d9 */ if (fZ) goto L_0043c8d9;
L_0043c8a9:; BB(0x0043c8a9);
    /* 0043c8a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c8ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c8ae: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0043c8b1: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 0043c8b7: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0043c8bd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c8c0: fld qword ptr [0x6b8188] */ FPUSH(R_F64((u32)(0x6b8188u)));
    /* 0043c8c6: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043c8c9: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0043c8cf: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43c8d4u); f_0064c560();
    /* 0043c8d4: jmp 0x43c98b */ goto L_0043c98b;
L_0043c8d9:; BB(0x0043c8d9);
    /* 0043c8d9: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c8df: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c8e4u); f_005f5400();
    /* 0043c8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c8e5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c8eb: call 0x43adc0 */ r_esp -= 4; W32(r_esp, 0x43c8f0u); f_0043adc0();
    /* 0043c8f0: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 0043c8f6: fild dword ptr [ebp - 0x178] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe88u)));
    /* 0043c8fc: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043c902: fstp qword ptr [ebp - 0x180] */ W_F64((u32)(r_ebp+0xfffffe80u), ST(0)); FPOP();
    /* 0043c908: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43c90du); f_005f5400();
    /* 0043c90d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043c90e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043c914: call 0x43aff0 */ r_esp -= 4; W32(r_esp, 0x43c919u); f_0043aff0();
    /* 0043c919: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 0043c91f: fild dword ptr [ebp - 0x184] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe7cu)));
    /* 0043c925: fdivr qword ptr [ebp - 0x180] */ ST(0) = R_F64((u32)(r_ebp+0xfffffe80u)) / ST(0);
    /* 0043c92b: fstp qword ptr [ebp - 0x128] */ W_F64((u32)(r_ebp+0xfffffed8u), ST(0)); FPOP();
    /* 0043c931: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c934: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043c936: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0043c939: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 0043c93f: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0043c945: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c948: fld qword ptr [ebp - 0x128] */ FPUSH(R_F64((u32)(r_ebp+0xfffffed8u)));
    /* 0043c94e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043c951: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 0043c957: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43c95cu); f_0064c560();
    /* 0043c95c: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0043c962: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0043c968: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0043c96e: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 0043c974: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043c977: fld qword ptr [0x6b8188] */ FPUSH(R_F64((u32)(0x6b8188u)));
    /* 0043c97d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043c980: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0043c986: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43c98bu); f_0064c560();
L_0043c98b:; BB(0x0043c98b);
    /* 0043c98b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043c98e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0043c990: add esi, dword ptr [ebp - 0x118] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffee8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043c996: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c99c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43c9a1u); f_005d5a50();
    /* 0043c9a1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c9a3: jle 0x43ca4b */ if ((fZ||fS!=fO)) goto L_0043ca4b;
L_0043c9a9:; BB(0x0043c9a9);
    /* 0043c9a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043c9ac: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0043c9ae: add esi, dword ptr [ebp - 0x118] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffee8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043c9b4: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c9ba: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x43c9bfu); f_005d5a50();
    /* 0043c9bf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c9c1: jle 0x43ca4b */ if ((fZ||fS!=fO)) goto L_0043ca4b;
L_0043c9c7:; BB(0x0043c9c7);
    /* 0043c9c7: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c9cd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c9d2u); f_0063aac0();
    /* 0043c9d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c9d4: mov dword ptr [ebp - 0x160], edx */ W32((u32)(r_ebp+0xfffffea0u), r_edx);
    /* 0043c9da: cmp dword ptr [ebp - 0x160], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffea0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c9e1: je 0x43ca0b */ if (fZ) goto L_0043ca0b;
L_0043c9e3:; BB(0x0043c9e3);
    /* 0043c9e3: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043c9e9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43c9eeu); f_0063aac0();
    /* 0043c9ee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043c9f0: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 0043c9f6: cmp dword ptr [ebp - 0x164], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe9cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c9fd: je 0x43ca0b */ if (fZ) goto L_0043ca0b;
L_0043c9ff:; BB(0x0043c9ff);
    /* 0043c9ff: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 0043ca09: jmp 0x43ca15 */ goto L_0043ca15;
L_0043ca0b:; BB(0x0043ca0b);
    /* 0043ca0b: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
L_0043ca15:; BB(0x0043ca15);
    /* 0043ca15: movzx ecx, byte ptr [ebp - 0x188] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe78u));
    /* 0043ca1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca1e: je 0x43ca46 */ if (fZ) goto L_0043ca46;
L_0043ca20:; BB(0x0043ca20);
    /* 0043ca20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca22: push 0x6b8170 */ { u32 v = 0x6b8170u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca27: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43ca2cu); f_00630f40();
    /* 0043ca2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ca2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca30: push 0x6b814c */ { u32 v = 0x6b814cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca35: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43ca3au); f_00630f40();
    /* 0043ca3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ca3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca3e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x43ca43u); f_0062ff10();
    /* 0043ca43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043ca46:; BB(0x0043ca46);
    /* 0043ca46: jmp 0x43cd21 */ goto L_0043cd21;
L_0043ca4b:; BB(0x0043ca4b);
    /* 0043ca4b: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0043ca51: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ca53: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 0043ca59: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0043ca5f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ca61: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0043ca67: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0043ca6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca6e: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0043ca74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca75: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043ca7b: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43ca80u); f_005d5cf0();
L_0043ca80:; BB(0x0043ca80);
    /* 0043ca80: movzx eax, byte ptr [ebp - 0x11d] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee3u));
    /* 0043ca87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ca89: jne 0x43cc48 */ if (!fZ) goto L_0043cc48;
L_0043ca8f:; BB(0x0043ca8f);
    /* 0043ca8f: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043ca95: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43ca9au); f_005f5400();
    /* 0043ca9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ca9b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043caa1: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x43caa6u); f_004388a0();
    /* 0043caa6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043caa9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043caab: jne 0x43cacf */ if (!fZ) goto L_0043cacf;
L_0043caad:; BB(0x0043caad);
    /* 0043caad: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cab3: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cab8u); f_005f5400();
    /* 0043cab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cab9: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cabf: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x43cac4u); f_004388d0();
    /* 0043cac4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043cac7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cac9: je 0x43cc48 */ if (fZ) goto L_0043cc48;
L_0043cacf:; BB(0x0043cacf);
    /* 0043cacf: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043cad5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0043cad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cad9: lea edx, [ebp - 0x150] */ r_edx = (u32)(r_ebp+0xfffffeb0u);
    /* 0043cadf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cae0: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cae6: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x43caebu); f_005cb880();
    /* 0043caeb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0043caed: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0043caf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043caf3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0043caf5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0043caf8: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cafe: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cb03u); f_005f5400();
    /* 0043cb03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb04: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cb0a: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x43cb0fu); f_004388d0();
    /* 0043cb0f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043cb12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cb14: je 0x43cb46 */ if (fZ) goto L_0043cb46;
L_0043cb16:; BB(0x0043cb16);
    /* 0043cb16: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043cb19: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043cb1b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043cb1e: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0043cb24: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 0043cb2a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cb2d: fld qword ptr [0x6b8188] */ FPUSH(R_F64((u32)(0x6b8188u)));
    /* 0043cb33: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043cb36: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0043cb3c: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43cb41u); f_0064c560();
    /* 0043cb41: jmp 0x43cbf8 */ goto L_0043cbf8;
L_0043cb46:; BB(0x0043cb46);
    /* 0043cb46: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cb4c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cb51u); f_005f5400();
    /* 0043cb51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb52: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cb58: call 0x43adc0 */ r_esp -= 4; W32(r_esp, 0x43cb5du); f_0043adc0();
    /* 0043cb5d: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 0043cb63: fild dword ptr [ebp - 0x18c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe74u)));
    /* 0043cb69: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cb6f: fstp qword ptr [ebp - 0x194] */ W_F64((u32)(r_ebp+0xfffffe6cu), ST(0)); FPOP();
    /* 0043cb75: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cb7au); f_005f5400();
    /* 0043cb7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cb7b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043cb81: call 0x43aff0 */ r_esp -= 4; W32(r_esp, 0x43cb86u); f_0043aff0();
    /* 0043cb86: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 0043cb8c: fild dword ptr [ebp - 0x198] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe68u)));
    /* 0043cb92: fdivr qword ptr [ebp - 0x194] */ ST(0) = R_F64((u32)(r_ebp+0xfffffe6cu)) / ST(0);
    /* 0043cb98: fstp qword ptr [ebp - 0x138] */ W_F64((u32)(r_ebp+0xfffffec8u), ST(0)); FPOP();
    /* 0043cb9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043cba1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043cba3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0043cba6: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0043cbac: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0043cbb2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cbb5: fld qword ptr [ebp - 0x138] */ FPUSH(R_F64((u32)(r_ebp+0xfffffec8u)));
    /* 0043cbbb: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043cbbe: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0043cbc4: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43cbc9u); f_0064c560();
    /* 0043cbc9: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0043cbcf: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 0043cbd5: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0043cbdb: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0043cbe1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043cbe4: fld qword ptr [0x6b8188] */ FPUSH(R_F64((u32)(0x6b8188u)));
    /* 0043cbea: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0043cbed: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0043cbf3: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x43cbf8u); f_0064c560();
L_0043cbf8:; BB(0x0043cbf8);
    /* 0043cbf8: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0043cbfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cbff: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0043cc05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043cc06: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0043cc0c: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x43cc11u); f_005d5cf0();
    /* 0043cc11: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc18: jne 0x43cc2c */ if (!fZ) goto L_0043cc2c;
L_0043cc1a:; BB(0x0043cc1a);
    /* 0043cc1a: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc21: jne 0x43cc2c */ if (!fZ) goto L_0043cc2c;
L_0043cc23:; BB(0x0043cc23);
    /* 0043cc23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043cc26: mov dword ptr [eax], 5 */ W32((u32)(r_eax), 0x5u);
L_0043cc2c:; BB(0x0043cc2c);
    /* 0043cc2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cc2f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043cc31: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043cc34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043cc37: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0043cc39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043cc3c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043cc3f: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043cc42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043cc45: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0043cc48:; BB(0x0043cc48);
    /* 0043cc48: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cc4e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cc53u); f_005f5400();
    /* 0043cc53: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc56: je 0x43cc88 */ if (fZ) goto L_0043cc88;
L_0043cc58:; BB(0x0043cc58);
    /* 0043cc58: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cc5e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cc63u); f_005f5400();
    /* 0043cc63: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc66: je 0x43cc88 */ if (fZ) goto L_0043cc88;
L_0043cc68:; BB(0x0043cc68);
    /* 0043cc68: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cc6e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cc73u); f_005f5400();
    /* 0043cc73: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc76: je 0x43cc88 */ if (fZ) goto L_0043cc88;
L_0043cc78:; BB(0x0043cc78);
    /* 0043cc78: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cc7e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cc83u); f_005f5400();
    /* 0043cc83: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc86: jne 0x43cc8c */ if (!fZ) goto L_0043cc8c;
L_0043cc88:; BB(0x0043cc88);
    /* 0043cc88: mov byte ptr [ebp + 0x10], 0 */ W8((u32)(r_ebp+0x10u), 0x0u);
L_0043cc8c:; BB(0x0043cc8c);
    /* 0043cc8c: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cc92: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cc97u); f_005f5400();
    /* 0043cc97: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cc9a: je 0x43ccac */ if (fZ) goto L_0043ccac;
L_0043cc9c:; BB(0x0043cc9c);
    /* 0043cc9c: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cca2: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cca7u); f_005f5400();
    /* 0043cca7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccaa: jne 0x43ccb0 */ if (!fZ) goto L_0043ccb0;
L_0043ccac:; BB(0x0043ccac);
    /* 0043ccac: mov byte ptr [ebp + 0x10], 0 */ W8((u32)(r_ebp+0x10u), 0x0u);
L_0043ccb0:; BB(0x0043ccb0);
    /* 0043ccb0: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043ccb6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43ccbbu); f_005f5400();
    /* 0043ccbb: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccbe: je 0x43ccf0 */ if (fZ) goto L_0043ccf0;
L_0043ccc0:; BB(0x0043ccc0);
    /* 0043ccc0: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043ccc6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43cccbu); f_005f5400();
    /* 0043cccb: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccce: je 0x43ccf0 */ if (fZ) goto L_0043ccf0;
L_0043ccd0:; BB(0x0043ccd0);
    /* 0043ccd0: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043ccd6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43ccdbu); f_005f5400();
    /* 0043ccdb: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccde: je 0x43ccf0 */ if (fZ) goto L_0043ccf0;
L_0043cce0:; BB(0x0043cce0);
    /* 0043cce0: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cce6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43ccebu); f_005f5400();
    /* 0043cceb: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ccee: jne 0x43ccf4 */ if (!fZ) goto L_0043ccf4;
L_0043ccf0:; BB(0x0043ccf0);
    /* 0043ccf0: mov byte ptr [ebp + 0x10], 0 */ W8((u32)(r_ebp+0x10u), 0x0u);
L_0043ccf4:; BB(0x0043ccf4);
    /* 0043ccf4: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0043ccf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccf8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0043ccfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ccfc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043ccff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043cd00: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0043cd06: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x43cd0bu); f_005cba10();
    /* 0043cd0b: movzx ecx, byte ptr [ebp - 0x11d] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffee3u));
    /* 0043cd12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043cd14: jne 0x43cd21 */ if (!fZ) goto L_0043cd21;
L_0043cd16:; BB(0x0043cd16);
    /* 0043cd16: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0043cd1c: call 0x5da460 */ r_esp -= 4; W32(r_esp, 0x43cd21u); f_005da460();
L_0043cd21:; BB(0x0043cd21);
    /* 0043cd21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043cd22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043cd25: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043cd27: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x43cd2cu); f_00686d72();
    /* 0043cd2c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043cd2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043cd2f: ret 0xc */ FN_RET(0x0043c120); r_esp += 16; return;
}

void f_0043d0d0(void) /* CrapsBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d0d0);
    /* 0043d0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d0d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d0d7: cmp dword ptr [0x7906dc], 0 */ {  u32 a = R32((u32)(0x7906dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d0de: je 0x43d0ff */ if (fZ) goto L_0043d0ff;
L_0043d0e0:; BB(0x0043d0e0);
    /* 0043d0e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d0e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d0e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0e8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0043d0ee: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x43d0f3u); f_00434820();
    /* 0043d0f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d0f4: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0043d0fa: call 0x42a050 */ r_esp -= 4; W32(r_esp, 0x43d0ffu); f_0042a050();
L_0043d0ff:; BB(0x0043d0ff);
    /* 0043d0ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d102: ret 8 */ FN_RET(0x0043d0d0); r_esp += 12; return;
}

