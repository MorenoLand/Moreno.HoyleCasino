#include "protos.h"

void f_00671c80(void) /* RewardsOpenTagScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671c80);
    /* 00671c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00671c83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671c85: push 0x6ad208 */ { u32 v = 0x6ad208u; r_esp -= 4; W32(r_esp, v); }
    /* 00671c8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671c91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671c92: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671c97: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671c99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671c9a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00671c9d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671ca3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00671ca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671ca8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cab: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x671cb0u); f_005fc0d0();
    /* 00671cb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671cb7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cba: mov dword ptr [eax], 0x6e1200 */ W32((u32)(r_eax), 0x6e1200u);
    /* 00671cc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cc3: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00671cc6: mov byte ptr [ecx + 0x20], dl */ W8((u32)(r_ecx+0x20u), (u8)r_edx);
    /* 00671cc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671ccc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00671ccf: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00671cd2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cd5: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00671cd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cdb: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00671cde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671ce0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00671ce3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671ce5u); call_ind(t); }
    /* 00671ce5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671cec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671cef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671cf2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671cfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00671cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671cfd: ret 8 */ FN_RET(0x00671c80); r_esp += 12; return;
}

void f_00671d00(void) /* RewardsOpenTagScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671d00);
    /* 00671d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00671d03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671d05: push 0x6ad22b */ { u32 v = 0x6ad22bu; r_esp -= 4; W32(r_esp, v); }
    /* 00671d0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671d11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671d12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671d17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671d1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00671d1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671d23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00671d26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671d29: mov dword ptr [eax], 0x6e1200 */ W32((u32)(r_eax), 0x6e1200u);
    /* 00671d2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671d36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671d39: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00671d3c: mov byte ptr [edx + 0x184], 0 */ W8((u32)(r_edx+0x184u), 0x0u);
    /* 00671d43: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671d46: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00671d49: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671d4c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00671d4f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671d51: mov ecx, eax */ r_ecx = r_eax;
    /* 00671d53: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00671d56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671d58u); call_ind(t); }
    /* 00671d58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671d5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671d62: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x671d67u); f_005fc150();
    /* 00671d67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671d6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671d71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671d72: mov esp, ebp */ r_esp = r_ebp;
    /* 00671d74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671d75: ret  */ FN_RET(0x00671d00); r_esp += 4; return;
}

void f_00671d80(void) /* RewardsOpenTagScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671d80);
    /* 00671d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00671d83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671d85: push 0x6ad251 */ { u32 v = 0x6ad251u; r_esp -= 4; W32(r_esp, v); }
    /* 00671d8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671d91: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671d94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671d99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671d9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00671d9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671da5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00671da8: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00671dac: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671daf: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00671db2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00671db5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671db9: je 0x671dca */ if (fZ) goto L_00671dca;
L_00671dbb:; BB(0x00671dbb);
    /* 00671dbb: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671dbf: je 0x671e83 */ if (fZ) goto L_00671e83;
L_00671dc5:; BB(0x00671dc5);
    /* 00671dc5: jmp 0x671e90 */ goto L_00671e90;
L_00671dca:; BB(0x00671dca);
    /* 00671dca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671dcc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671dcf: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00671dd2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671dd5: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00671dd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671dda: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00671de0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671de2u); call_ind(t); }
    /* 00671de2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00671de4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x671de9u); f_00686d82();
    /* 00671de9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671dec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00671def: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671df6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671dfa: je 0x671e0d */ if (fZ) goto L_00671e0d;
L_00671dfc:; BB(0x00671dfc);
    /* 00671dfc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671e00: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671e03: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x671e08u); f_006010a0();
    /* 00671e08: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00671e0b: jmp 0x671e14 */ goto L_00671e14;
L_00671e0d:; BB(0x00671e0d);
    /* 00671e0d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00671e14:; BB(0x00671e14);
    /* 00671e14: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00671e17: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00671e1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671e21: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00671e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671e25: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671e28: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00671e2b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x671e30u); f_005f5d50();
    /* 00671e30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e32: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671e35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00671e37: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671e3a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00671e3d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x671e3fu); call_ind(t); }
    /* 00671e3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671e42: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00671e48: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00671e4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671e4c: fld1  */ FPUSH(1.0);
    /* 00671e4e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00671e51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e53: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e59: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671e5c: movzx ecx, byte ptr [eax + 0x20] */ r_ecx = (u32)R8((u32)(r_eax+0x20u));
    /* 00671e60: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00671e62: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00671e64: add ecx, 0x27ac42 */ {  u32 a = r_ecx; u32 b = 0x27ac42u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00671e6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671e6b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00671e71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00671e73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00671e79: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00671e7f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x671e81u); call_ind(t); }
    /* 00671e81: jmp 0x671e90 */ goto L_00671e90;
L_00671e83:; BB(0x00671e83);
    /* 00671e83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671e85: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00671e88: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00671e8b: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x671e90u); f_005f5df0();
L_00671e90:; BB(0x00671e90);
    /* 00671e90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671e93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671e9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671e9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00671e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671e9e: ret  */ FN_RET(0x00671d80); r_esp += 4; return;
}

