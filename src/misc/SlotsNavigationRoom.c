#include "protos.h"

void f_005e8830(void) /* SlotsNavigationRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8830);
    /* 005e8830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8831: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8835: push 0x6a9a88 */ { u32 v = 0x6a9a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005e883a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e8840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8842: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e8847: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e8849: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e884a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e884d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e8853: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e8856: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8859: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5e885eu); f_005d7b60();
    /* 005e885e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e8865: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8868: mov dword ptr [eax], 0x6d5e8c */ W32((u32)(r_eax), 0x6d5e8cu);
    /* 005e886e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8871: mov dword ptr [0x795070], ecx */ W32((u32)(0x795070u), r_ecx);
    /* 005e8877: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e887a: mov dword ptr [edx + 0x80], 0xffffffff */ W32((u32)(r_edx+0x80u), 0xffffffffu);
    /* 005e8884: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8886: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8889: call 0x5e88e0 */ r_esp -= 4; W32(r_esp, 0x5e888eu); f_005e88e0();
    /* 005e888e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e8895: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8898: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e889b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e88a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e88a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e88a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e88a6: ret  */ FN_RET(0x005e8830); r_esp += 4; return;
}

void f_005e88b0(void) /* SlotsNavigationRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e88b0);
    /* 005e88b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e88b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e88b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e88b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e88b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e88ba: mov dword ptr [eax], 0x6d5e8c */ W32((u32)(r_eax), 0x6d5e8cu);
    /* 005e88c0: mov dword ptr [0x795070], 0 */ W32((u32)(0x795070u), 0x0u);
    /* 005e88ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e88cd: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5e88d2u); f_005d7bd0();
    /* 005e88d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005e88d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e88d5: ret  */ FN_RET(0x005e88b0); r_esp += 4; return;
}

void f_005e8930(void) /* SlotsNavigationRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8930);
    /* 005e8930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8931: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8935: push 0x6a9aae */ { u32 v = 0x6a9aaeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e893a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e8940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8941: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8944: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e8949: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e894b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e894c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e894f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e8955: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e8958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e895b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5e8960u); f_005d8230();
    /* 005e8960: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8966: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x5e896bu); f_00636760();
    /* 005e896b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e896e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8970: je 0x5e898c */ if (fZ) goto L_005e898c;
L_005e8972:; BB(0x005e8972);
    /* 005e8972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8974: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8976: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e897a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e897c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e897f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e8981: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e8984: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005e898a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e898cu); call_ind(t); }
L_005e898c:; BB(0x005e898c);
    /* 005e898c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e898e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e8993u); f_00686d82();
    /* 005e8993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8996: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e8999: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e89a0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89a4: je 0x5e89c1 */ if (fZ) goto L_005e89c1;
L_005e89a6:; BB(0x005e89a6);
    /* 005e89a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e89a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e89ab: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5e89b0u); f_005fc0d0();
    /* 005e89b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e89b3: mov dword ptr [ecx], 0x6d618c */ W32((u32)(r_ecx), 0x6d618cu);
    /* 005e89b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e89bc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e89bf: jmp 0x5e89c8 */ goto L_005e89c8;
L_005e89c1:; BB(0x005e89c1);
    /* 005e89c1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005e89c8:; BB(0x005e89c8);
    /* 005e89c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e89cb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e89ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e89d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e89d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e89d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e89dc: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5e89e1u); f_005f1b70();
    /* 005e89e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e89e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e89eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e89ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005e89ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e89ef: ret  */ FN_RET(0x005e8930); r_esp += 4; return;
}

void f_005e89f0(void) /* SlotsNavigationRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e89f0);
    /* 005e89f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e89f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e89f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e89f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e89f7: cmp dword ptr [ebp + 8], 0xc9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e89fe: jne 0x5e8a0c */ if (!fZ) goto L_005e8a0c;
L_005e8a00:; BB(0x005e8a00);
    /* 005e8a00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a05: call 0x5e88e0 */ r_esp -= 4; W32(r_esp, 0x5e8a0au); f_005e88e0();
    /* 005e8a0a: jmp 0x5e8a1e */ goto L_005e8a1e;
L_005e8a0c:; BB(0x005e8a0c);
    /* 005e8a0c: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8a10: jl 0x5e8a1e */ if ((fS!=fO)) goto L_005e8a1e;
L_005e8a12:; BB(0x005e8a12);
    /* 005e8a12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8a16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8a19: call 0x5e8a40 */ r_esp -= 4; W32(r_esp, 0x5e8a1eu); f_005e8a40();
L_005e8a1e:; BB(0x005e8a1e);
    /* 005e8a1e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8a20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8a21: ret 4 */ FN_RET(0x005e89f0); r_esp += 8; return;
}

void f_005e9c40(void) /* SlotsNavigationRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e9c40);
    /* 005e9c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e9c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e9c49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e9c4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e9c4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9c52: sub ecx, 0x186a1 */ {  u32 a = r_ecx; u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9c58: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e9c5b: cmp dword ptr [ebp - 8], 0x36 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e9c5f: ja 0x5e9d86 */ if ((!fC&&!fZ)) goto L_005e9d86;
L_005e9c65:; BB(0x005e9c65);
    /* 005e9c65: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e9c68: movzx eax, byte ptr [edx + 0x5e9db0] */ r_eax = (u32)R8((u32)(r_edx+0x5e9db0u));
    /* 005e9c6f: jmp dword ptr [eax*4 + 0x5e9d9c] */ { u32 t = R32((u32)(r_eax*4+0x5e9d9cu)); switch (t) { case 0x5e9c76u: goto L_005e9c76; case 0x5e9cedu: goto L_005e9ced; case 0x5e9d0au: goto L_005e9d0a; case 0x5e9d36u: goto L_005e9d36; case 0x5e9d86u: goto L_005e9d86; default: UNSUP(0x005e9c6f, "jump table entry is not a known target"); } }
L_005e9c76:; BB(0x005e9c76);
    /* 005e9c76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c78: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9c7d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9c82u); f_005fe640();
    /* 005e9c82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c84: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9c8c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9c91u); f_005fe640();
    /* 005e9c91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c93: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9c9b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9ca0u); f_005fe640();
    /* 005e9ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ca2: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ca7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9caa: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9cafu); f_005fe640();
    /* 005e9caf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cb1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cb5: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9cbd: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5e9cc2u); f_005fe240();
    /* 005e9cc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cc4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cc8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ccd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9cd0: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5e9cd5u); f_005fe240();
    /* 005e9cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cd7: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cdc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cde: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ce0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9ce3: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5e9ce8u); f_005fe240();
    /* 005e9ce8: jmp 0x5e9d86 */ goto L_005e9d86;
L_005e9ced:; BB(0x005e9ced);
    /* 005e9ced: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cef: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9cf4: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9cf9u); f_005fe640();
    /* 005e9cf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cfb: push 0x186c1 */ { u32 v = 0x186c1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d03: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d08u); f_005fe640();
    /* 005e9d08: jmp 0x5e9d86 */ goto L_005e9d86;
L_005e9d0a:; BB(0x005e9d0a);
    /* 005e9d0a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d0c: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d0e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d11: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d16u); f_005fe640();
    /* 005e9d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d18: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d20: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d25u); f_005fe640();
    /* 005e9d25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d27: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d2f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d34u); f_005fe640();
    /* 005e9d34: jmp 0x5e9d86 */ goto L_005e9d86;
L_005e9d36:; BB(0x005e9d36);
    /* 005e9d36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d38: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d3d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d42u); f_005fe640();
    /* 005e9d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d44: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d4c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d51u); f_005fe640();
    /* 005e9d51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d53: push 0x186d9 */ { u32 v = 0x186d9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d5b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e9d60u); f_005fe640();
    /* 005e9d60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d62: push 0x186dd */ { u32 v = 0x186ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d69: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d6e: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5e9d73u); f_005fe240();
    /* 005e9d73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d75: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d79: push 0x186de */ { u32 v = 0x186deu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e9d81: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5e9d86u); f_005fe240();
L_005e9d86:; BB(0x005e9d86);
    /* 005e9d86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e9d89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d8a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e9d8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e9d91: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5e9d96u); f_005d8670();
    /* 005e9d96: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9d99: ret 8 */ FN_RET(0x005e9c40); r_esp += 12; return;
}

