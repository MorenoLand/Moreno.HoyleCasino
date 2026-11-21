#include "protos.h"

void f_00546bd0(void) /* VideoBlackjackDealerScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546bd0);
    /* 00546bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00546bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546bd5: push 0x6a5157 */ { u32 v = 0x6a5157u; r_esp -= 4; W32(r_esp, v); }
    /* 00546bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546be1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546be2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546be7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546bea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00546bed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546bf3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00546bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546bf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546bfb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x546c00u); f_005fc0d0();
    /* 00546c00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546c07: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546c0a: mov dword ptr [eax], 0x6c68d0 */ W32((u32)(r_eax), 0x6c68d0u);
    /* 00546c10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546c12: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00546c18: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x546c1du); f_00637810();
    /* 00546c1d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00546c20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546c23: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00546c26: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546c2d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546c30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546c33: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546c3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546c3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00546c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546c3e: ret  */ FN_RET(0x00546bd0); r_esp += 4; return;
}

void f_00546c40(void) /* VideoBlackjackDealerScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546c40);
    /* 00546c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00546c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546c46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546c49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546c4c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x546c51u); f_005fc360();
    /* 00546c51: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00546c54: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00546c58: ja 0x546d5f */ if ((!fC&&!fZ)) goto L_00546d5f;
L_00546c5e:; BB(0x00546c5e);
    /* 00546c5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546c61: jmp dword ptr [eax*4 + 0x546d80] */ { u32 t = R32((u32)(r_eax*4+0x546d80u)); switch (t) { case 0x546c68u: goto L_00546c68; case 0x546c83u: goto L_00546c83; case 0x546cd3u: goto L_00546cd3; case 0x546d24u: goto L_00546d24; case 0x546d37u: goto L_00546d37; default: UNSUP(0x00546c61, "jump table entry is not a known target"); } }
L_00546c68:; BB(0x00546c68);
    /* 00546c68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546c6b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546c6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546c6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546c71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546c74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546c76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546c79: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546c7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546c7eu); call_ind(t); }
    /* 00546c7e: jmp 0x546d7a */ goto L_00546d7a;
L_00546c83:; BB(0x00546c83);
    /* 00546c83: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00546c89: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x546c8eu); f_005442b0();
    /* 00546c8e: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 00546c94: call 0x542980 */ r_esp -= 4; W32(r_esp, 0x546c99u); f_00542980();
    /* 00546c99: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00546c9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546c9e: je 0x546cb8 */ if (fZ) goto L_00546cb8;
L_00546ca0:; BB(0x00546ca0);
    /* 00546ca0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546ca3: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00546ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546ca7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546cae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cb1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546cb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546cb6u); call_ind(t); }
    /* 00546cb6: jmp 0x546cce */ goto L_00546cce;
L_00546cb8:; BB(0x00546cb8);
    /* 00546cb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cbb: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546cbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546cbf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546cc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546cc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cc9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546ccc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546cceu); call_ind(t); }
L_00546cce:; BB(0x00546cce);
    /* 00546cce: jmp 0x546d7a */ goto L_00546d7a;
L_00546cd3:; BB(0x00546cd3);
    /* 00546cd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546cd7: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546cdd: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546ce2u); f_005492c0();
    /* 00546ce2: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 00546ce8: call 0x542980 */ r_esp -= 4; W32(r_esp, 0x546cedu); f_00542980();
    /* 00546ced: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00546cf0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546cf2: je 0x546d0c */ if (fZ) goto L_00546d0c;
L_00546cf4:; BB(0x00546cf4);
    /* 00546cf4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546cf7: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00546cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546cfb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546cfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546d02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d05: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546d08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546d0au); call_ind(t); }
    /* 00546d0a: jmp 0x546d22 */ goto L_00546d22;
L_00546d0c:; BB(0x00546d0c);
    /* 00546d0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d0f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546d12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546d13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546d1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d1d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546d20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546d22u); call_ind(t); }
L_00546d22:; BB(0x00546d22);
    /* 00546d22: jmp 0x546d7a */ goto L_00546d7a;
L_00546d24:; BB(0x00546d24);
    /* 00546d24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d26: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546d2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546d30: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546d33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546d35u); call_ind(t); }
    /* 00546d35: jmp 0x546d7a */ goto L_00546d7a;
L_00546d37:; BB(0x00546d37);
    /* 00546d37: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00546d3d: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x546d42u); f_005450a0();
    /* 00546d42: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546d48: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x546d4du); f_005493a0();
    /* 00546d4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d4f: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00546d55: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00546d58: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x546d5du); f_005fc420();
    /* 00546d5d: jmp 0x546d7a */ goto L_00546d7a;
L_00546d5f:; BB(0x00546d5f);
    /* 00546d5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00546d61: jne 0x546d7a */ if (!fZ) goto L_00546d7a;
L_00546d63:; BB(0x00546d63);
    /* 00546d63: push 0x599 */ { u32 v = 0x599u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d68: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00546d6d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00546d72: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x546d77u); f_005e9f20();
    /* 00546d77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00546d7a:; BB(0x00546d7a);
    /* 00546d7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00546d7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546d7d: ret  */ FN_RET(0x00546c40); r_esp += 4; return;
}

