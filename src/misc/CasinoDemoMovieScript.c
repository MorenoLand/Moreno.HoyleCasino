#include "protos.h"

void f_005e4a00(void) /* CasinoDemoMovieScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4a00);
    /* 005e4a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4a07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a0c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5e4a11u); f_005fc0d0();
    /* 005e4a11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a14: mov dword ptr [eax], 0x6d560c */ W32((u32)(r_eax), 0x6d560cu);
    /* 005e4a1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4a1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4a1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4a20: ret  */ FN_RET(0x005e4a00); r_esp += 4; return;
}

void f_005e4a50(void) /* CasinoDemoMovieScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4a50);
    /* 005e4a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4a53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a55: push 0x6a986d */ { u32 v = 0x6a986du; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a61: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4a64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a65: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e4a6a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a6d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e4a70: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e4a76: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005e4a79: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4a7c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5e4a81u); f_005fc360();
    /* 005e4a81: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005e4a84: cmp dword ptr [ebp - 0x48], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e4a88: ja 0x5e56a0 */ if ((!fC&&!fZ)) goto L_005e56a0;
L_005e4a8e:; BB(0x005e4a8e);
    /* 005e4a8e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e4a91: jmp dword ptr [eax*4 + 0x5e56b0] */ { u32 t = R32((u32)(r_eax*4+0x5e56b0u)); switch (t) { case 0x5e4a98u: goto L_005e4a98; case 0x5e4f5eu: goto L_005e4f5e; case 0x5e4f88u: goto L_005e4f88; case 0x5e4fe5u: goto L_005e4fe5; case 0x5e500fu: goto L_005e500f; case 0x5e5165u: goto L_005e5165; case 0x5e51a9u: goto L_005e51a9; case 0x5e5230u: goto L_005e5230; case 0x5e5272u: goto L_005e5272; case 0x5e52e3u: goto L_005e52e3; case 0x5e555au: goto L_005e555a; case 0x5e551du: goto L_005e551d; default: UNSUP(0x005e4a91, "jump table entry is not a known target"); } }
L_005e4a98:; BB(0x005e4a98);
    /* 005e4a98: mov byte ptr [0x794909], 1 */ W8((u32)(0x794909u), 0x1u);
    /* 005e4a9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aa3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aab: push 0xf618 */ { u32 v = 0xf618u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ab0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ab4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4aba: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4abd: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5e4ac2u); f_005f8570();
    /* 005e4ac2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e4ac3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4ac5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e4ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ac8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4ace: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4ad1: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5e4ad6u); f_005f8550();
    /* 005e4ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ad7: push 0x311aba */ { u32 v = 0x311abau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4adc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ade: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4ae3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4ae6: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5e4aebu); f_005fa880();
    /* 005e4aeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4aef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4af1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4af3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4af5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4af7: push 0xf618 */ { u32 v = 0xf618u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4afc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4b02: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4b05: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5e4b0au); f_005f8570();
    /* 005e4b0a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e4b0b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4b0d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e4b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b12: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4b18: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4b1b: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5e4b20u); f_005f8570();
    /* 005e4b20: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e4b21: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e4b23: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e4b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b26: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4b2b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4b2e: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5e4b33u); f_005f8550();
    /* 005e4b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b34: push 0x311abb */ { u32 v = 0x311abbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b3b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4b41: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4b44: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5e4b49u); f_005fa880();
    /* 005e4b49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b4b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b58: push 0xfa00 */ { u32 v = 0xfa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b5d: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b5f: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b64: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b69: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b70: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4b76: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4b79: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4b7eu); f_005f9b40();
    /* 005e4b7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b80: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b8d: push 0xfa00 */ { u32 v = 0xfa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b92: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b97: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b9c: push 0x311ab5 */ { u32 v = 0x311ab5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ba1: push 0x311abf */ { u32 v = 0x311abfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ba8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4bad: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4bb0: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4bb5u); f_005f9b40();
    /* 005e4bb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bb7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bc4: push 0xfa00 */ { u32 v = 0xfa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bc9: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bce: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bd3: push 0x311ab5 */ { u32 v = 0x311ab5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bd8: push 0x311ac0 */ { u32 v = 0x311ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bdf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4be5: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4be8: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4bedu); f_005f9b40();
    /* 005e4bed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bef: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bfc: push 0xfa00 */ { u32 v = 0xfa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c01: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c06: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c0b: push 0x311ab5 */ { u32 v = 0x311ab5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c10: push 0x311ac1 */ { u32 v = 0x311ac1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c17: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4c1d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4c20: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4c25u); f_005f9b40();
    /* 005e4c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c27: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c34: push 0xfa01 */ { u32 v = 0xfa01u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c39: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c3e: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c43: push 0x311ab6 */ { u32 v = 0x311ab6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c48: push 0x311abc */ { u32 v = 0x311abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c4f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4c54: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4c57: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4c5cu); f_005f9b40();
    /* 005e4c5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e4c5f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4c62: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5e4c67u); f_005eb240();
    /* 005e4c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c6a: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5e4c6fu); f_0062fc30();
    /* 005e4c6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c73: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4c76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4c78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4c7b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e4c81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4c83u); call_ind(t); }
    /* 005e4c83: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c85: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4c8au); f_00686d82();
    /* 005e4c8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4c8d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e4c90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e4c97: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c9b: je 0x5e4cac */ if (fZ) goto L_005e4cac;
L_005e4c9d:; BB(0x005e4c9d);
    /* 005e4c9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4c9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4ca2: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5e4ca7u); f_00600a70();
    /* 005e4ca7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e4caa: jmp 0x5e4cb3 */ goto L_005e4cb3;
L_005e4cac:; BB(0x005e4cac);
    /* 005e4cac: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005e4cb3:; BB(0x005e4cb3);
    /* 005e4cb3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e4cb6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e4cb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4cc0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e4cc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4cc7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e4cccu); f_005f5d50();
    /* 005e4ccc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4ccf: mov dword ptr [eax + 0x178], 5 */ W32((u32)(r_eax+0x178u), 0x5u);
    /* 005e4cd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cdb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ce0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ce2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ce4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ce6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ce8: push 0xfa01 */ { u32 v = 0xfa01u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ced: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cf2: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cf7: push 0x311ab6 */ { u32 v = 0x311ab6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cfc: push 0x311abd */ { u32 v = 0x311abdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d03: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4d09: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4d0c: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4d11u); f_005f9b40();
    /* 005e4d11: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e4d14: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d17: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5e4d1cu); f_005eb240();
    /* 005e4d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d1f: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5e4d24u); f_0062fc30();
    /* 005e4d24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d28: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d2b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e4d2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d30: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005e4d36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e4d38u); call_ind(t); }
    /* 005e4d38: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d3a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4d3fu); f_00686d82();
    /* 005e4d3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4d42: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e4d45: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e4d4c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4d50: je 0x5e4d61 */ if (fZ) goto L_005e4d61;
L_005e4d52:; BB(0x005e4d52);
    /* 005e4d52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d54: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e4d57: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5e4d5cu); f_00600a70();
    /* 005e4d5c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005e4d5f: jmp 0x5e4d68 */ goto L_005e4d68;
L_005e4d61:; BB(0x005e4d61);
    /* 005e4d61: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005e4d68:; BB(0x005e4d68);
    /* 005e4d68: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e4d6b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e4d6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4d75: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e4d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d7c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e4d81u); f_005f5d50();
    /* 005e4d81: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4d84: mov dword ptr [edx + 0x178], 5 */ W32((u32)(r_edx+0x178u), 0x5u);
    /* 005e4d8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d90: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d9d: push 0xfa01 */ { u32 v = 0xfa01u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4da2: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e4da7: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dac: push 0x311ab6 */ { u32 v = 0x311ab6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4db1: push 0x311abe */ { u32 v = 0x311abeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4db8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4dbd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4dc0: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5e4dc5u); f_005f9b40();
    /* 005e4dc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e4dc8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4dcb: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5e4dd0u); f_005eb240();
    /* 005e4dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dd3: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5e4dd8u); f_0062fc30();
    /* 005e4dd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ddc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4ddf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4de1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4de4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e4dea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4decu); call_ind(t); }
    /* 005e4dec: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4df3u); f_00686d82();
    /* 005e4df3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4df6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e4df9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e4e00: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4e04: je 0x5e4e15 */ if (fZ) goto L_005e4e15;
L_005e4e06:; BB(0x005e4e06);
    /* 005e4e06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e08: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e4e0b: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5e4e10u); f_00600a70();
    /* 005e4e10: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005e4e13: jmp 0x5e4e1c */ goto L_005e4e1c;
L_005e4e15:; BB(0x005e4e15);
    /* 005e4e15: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005e4e1c:; BB(0x005e4e1c);
    /* 005e4e1c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e4e1f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e4e22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4e29: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e4e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4e30: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e4e35u); f_005f5d50();
    /* 005e4e35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4e38: mov dword ptr [eax + 0x178], 5 */ W32((u32)(r_eax+0x178u), 0x5u);
    /* 005e4e42: mov dword ptr [0x794918], 0 */ W32((u32)(0x794918u), 0x0u);
    /* 005e4e4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e58: push 0xfde8 */ { u32 v = 0xfde8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e61: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4e67: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4e6a: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5e4e6fu); f_005f8570();
    /* 005e4e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e70: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4e76: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4e79: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5e4e7eu); f_005f8550();
    /* 005e4e7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e7f: push 0x311ac2 */ { u32 v = 0x311ac2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e86: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4e8b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4e8e: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5e4e93u); f_005fa880();
    /* 005e4e93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e95: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e9a: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e9f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005e4ea5: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005e4ea8: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5e4eadu); f_006044b0();
    /* 005e4ead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4eaf: push 0x311ab5 */ { u32 v = 0x311ab5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4eb4: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4eb9: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005e4ebf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005e4ec2: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5e4ec7u); f_006044b0();
    /* 005e4ec7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ec9: push 0x311ab7 */ { u32 v = 0x311ab7u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ece: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ed3: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005e4ed8: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005e4edb: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5e4ee0u); f_006044b0();
    /* 005e4ee0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ee2: push 0x311ab8 */ { u32 v = 0x311ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ee7: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4eec: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005e4ef2: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005e4ef5: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5e4efau); f_006044b0();
    /* 005e4efa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4efc: push 0x311ab9 */ { u32 v = 0x311ab9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f01: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f06: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005e4f0c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005e4f0f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5e4f14u); f_006044b0();
    /* 005e4f14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f17: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005e4f1d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e4f20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f21: fld1  */ FPUSH(1.0);
    /* 005e4f23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e4f26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f28: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f2e: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f33: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4f38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e4f3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4f40: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005e4f46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4f48u); call_ind(t); }
    /* 005e4f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f4c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4f4f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4f51: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4f54: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e4f57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4f59u); call_ind(t); }
    /* 005e4f59: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e4f5e:; BB(0x005e4f5e);
    /* 005e4f5e: mov dword ptr [0x794914], 0xff */ W32((u32)(0x794914u), 0xffu);
    /* 005e4f68: mov dword ptr [0x794910], 0 */ W32((u32)(0x794910u), 0x0u);
    /* 005e4f72: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f74: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f76: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4f79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4f7b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4f7e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e4f81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4f83u); call_ind(t); }
    /* 005e4f83: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e4f88:; BB(0x005e4f88);
    /* 005e4f88: mov ecx, dword ptr [0x794914] */ r_ecx = R32((u32)(0x794914u));
    /* 005e4f8e: sub ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 005e4f91: mov dword ptr [0x794914], ecx */ W32((u32)(0x794914u), r_ecx);
    /* 005e4f97: jns 0x5e4faf */ if (!fS) goto L_005e4faf;
L_005e4f99:; BB(0x005e4f99);
    /* 005e4f99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f9b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f9d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4fa0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e4fa2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4fa5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e4fa8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e4faau); call_ind(t); }
    /* 005e4faa: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e4faf:; BB(0x005e4faf);
    /* 005e4faf: mov al, byte ptr [0x794914] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x794914u))) & 0xffu);
    /* 005e4fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fb5: push 0x311ac2 */ { u32 v = 0x311ac2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e4fc0: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e4fc3: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5e4fc8u); f_005fb630();
    /* 005e4fc8: mov ecx, eax */ r_ecx = r_eax;
    /* 005e4fca: call 0x5f62f0 */ r_esp -= 4; W32(r_esp, 0x5e4fcfu); f_005f62f0();
    /* 005e4fcf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fd1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fd3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4fd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e4fd8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e4fdb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e4fde: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e4fe0u); call_ind(t); }
    /* 005e4fe0: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e4fe5:; BB(0x005e4fe5);
    /* 005e4fe5: push 0x311ac2 */ { u32 v = 0x311ac2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4fec: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4ff1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4ff4: call 0x5fbd70 */ r_esp -= 4; W32(r_esp, 0x5e4ff9u); f_005fbd70();
    /* 005e4ff9: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ffb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ffd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5000: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5002: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5005: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5008: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e500au); call_ind(t); }
    /* 005e500a: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e500f:; BB(0x005e500f);
    /* 005e500f: cmp dword ptr [0x794918], 3 */ {  u32 a = R32((u32)(0x794918u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5016: jl 0x5e502e */ if ((fS!=fO)) goto L_005e502e;
L_005e5018:; BB(0x005e5018);
    /* 005e5018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e501a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e501c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e501f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5021: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5024: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5027: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5029u); call_ind(t); }
    /* 005e5029: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e502e:; BB(0x005e502e);
    /* 005e502e: mov ecx, dword ptr [0x794918] */ r_ecx = R32((u32)(0x794918u));
    /* 005e5034: add ecx, 0x311abc */ {  u32 a = r_ecx; u32 b = 0x311abcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e503a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e503b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e5041: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e5044: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e5049u); f_005fb210();
    /* 005e5049: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e504c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e504e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5051: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5e5056u); f_005f5d50();
    /* 005e5056: mov eax, dword ptr [0x794918] */ r_eax = R32((u32)(0x794918u));
    /* 005e505b: add eax, 0x311ab7 */ {  u32 a = r_eax; u32 b = 0x311ab7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5061: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5064: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5e5069u); f_005eaf00();
    /* 005e5069: mov dword ptr [ebp - 0x18], 0x1e */ W32((u32)(r_ebp+0xffffffe8u), 0x1eu);
    /* 005e5070: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5073: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5075: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5078: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e507b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e507du); call_ind(t); }
    /* 005e507d: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5081: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5084: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5086: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5089: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005e508c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e508eu); call_ind(t); }
    /* 005e508e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e5091: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e5092: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e5095: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5097: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e509a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e509d: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 005e50a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e50a6: mov dword ptr [edx + 0x184], 1 */ W32((u32)(r_edx+0x184u), 0x1u);
    /* 005e50b0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e50b2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e50b7u); f_00686d82();
    /* 005e50b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e50ba: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e50bd: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e50c4: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e50c8: je 0x5e50fc */ if (fZ) goto L_005e50fc;
L_005e50ca:; BB(0x005e50ca);
    /* 005e50ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e50cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e50cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e50d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e50d4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005e50d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e50d9u); call_ind(t); }
    /* 005e50d9: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e50dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e50dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e50e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e50e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e50e5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e50e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e50eau); call_ind(t); }
    /* 005e50ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e50eb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e50ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e50ef: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e50f2: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x5e50f7u); f_00606e60();
    /* 005e50f7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005e50fa: jmp 0x5e5103 */ goto L_005e5103;
L_005e50fc:; BB(0x005e50fc);
    /* 005e50fc: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005e5103:; BB(0x005e5103);
    /* 005e5103: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e5106: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005e5109: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5110: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e5113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5114: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5117: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5e511cu); f_005f6050();
    /* 005e511c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e511e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e511f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005e5125: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e5128: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5129: fld1  */ FPUSH(1.0);
    /* 005e512b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e512e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5130: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5132: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5134: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5136: push 0x311ab5 */ { u32 v = 0x311ab5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e513b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5141: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5143: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5149: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005e514f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5151u); call_ind(t); }
    /* 005e5151: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5153: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5156: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5158: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e515b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e515e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5160u); call_ind(t); }
    /* 005e5160: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e5165:; BB(0x005e5165);
    /* 005e5165: mov ecx, dword ptr [0x794918] */ r_ecx = R32((u32)(0x794918u));
    /* 005e516b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e516e: mov dword ptr [0x794918], ecx */ W32((u32)(0x794918u), r_ecx);
    /* 005e5174: cmp dword ptr [0x794918], 3 */ {  u32 a = R32((u32)(0x794918u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e517b: jl 0x5e5193 */ if ((fS!=fO)) goto L_005e5193;
L_005e517d:; BB(0x005e517d);
    /* 005e517d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e517f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5181: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5184: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5186: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5189: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e518c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e518eu); call_ind(t); }
    /* 005e518e: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e5193:; BB(0x005e5193);
    /* 005e5193: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5195: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5197: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e519a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e519c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e519f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e51a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e51a4u); call_ind(t); }
    /* 005e51a4: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e51a9:; BB(0x005e51a9);
    /* 005e51a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51ab: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51b0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51b3: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e51b8u); f_005e56e0();
    /* 005e51b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51ba: push 0x311abf */ { u32 v = 0x311abfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e51bf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51c2: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e51c7u); f_005e56e0();
    /* 005e51c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51c9: push 0x311ac0 */ { u32 v = 0x311ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51ce: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51d1: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e51d6u); f_005e56e0();
    /* 005e51d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51d8: push 0x311ac1 */ { u32 v = 0x311ac1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51dd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51e0: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e51e5u); f_005e56e0();
    /* 005e51e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51e7: push 0x311abc */ { u32 v = 0x311abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e51ec: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51ef: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e51f4u); f_005e56e0();
    /* 005e51f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51f6: push 0x311abd */ { u32 v = 0x311abdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e51fb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e51fe: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e5203u); f_005e56e0();
    /* 005e5203: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5205: push 0x311abe */ { u32 v = 0x311abeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e520a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e520d: call 0x5e56e0 */ r_esp -= 4; W32(r_esp, 0x5e5212u); f_005e56e0();
    /* 005e5212: mov dword ptr [0x79490c], 0 */ W32((u32)(0x79490cu), 0x0u);
    /* 005e521c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005e521e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5221: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5223: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5226: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e5229: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e522bu); call_ind(t); }
    /* 005e522b: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e5230:; BB(0x005e5230);
    /* 005e5230: cmp dword ptr [0x79490c], 0xa */ {  u32 a = R32((u32)(0x79490cu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5237: jle 0x5e524f */ if ((fZ||fS!=fO)) goto L_005e524f;
L_005e5239:; BB(0x005e5239);
    /* 005e5239: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e523b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e523d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5240: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5242: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5245: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5248: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e524au); call_ind(t); }
    /* 005e524a: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e524f:; BB(0x005e524f);
    /* 005e524f: mov ecx, dword ptr [0x79490c] */ r_ecx = R32((u32)(0x79490cu));
    /* 005e5255: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5258: mov dword ptr [0x79490c], ecx */ W32((u32)(0x79490cu), r_ecx);
    /* 005e525e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5260: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5263: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5265: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5268: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e526b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e526du); call_ind(t); }
    /* 005e526d: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e5272:; BB(0x005e5272);
    /* 005e5272: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5277: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e527a: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e527fu); f_005e57f0();
    /* 005e527f: push 0x311abf */ { u32 v = 0x311abfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5284: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5287: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e528cu); f_005e57f0();
    /* 005e528c: push 0x311ac0 */ { u32 v = 0x311ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5291: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5294: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e5299u); f_005e57f0();
    /* 005e5299: push 0x311ac1 */ { u32 v = 0x311ac1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e529e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52a1: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e52a6u); f_005e57f0();
    /* 005e52a6: push 0x311abc */ { u32 v = 0x311abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52ab: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52ae: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e52b3u); f_005e57f0();
    /* 005e52b3: push 0x311abd */ { u32 v = 0x311abdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52b8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52bb: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e52c0u); f_005e57f0();
    /* 005e52c0: push 0x311abe */ { u32 v = 0x311abeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52c5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52c8: call 0x5e57f0 */ r_esp -= 4; W32(r_esp, 0x5e52cdu); f_005e57f0();
    /* 005e52cd: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e52cf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e52d1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e52d6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e52d9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e52dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e52deu); call_ind(t); }
    /* 005e52de: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e52e3:; BB(0x005e52e3);
    /* 005e52e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e52e9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e52ec: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5e52f1u); f_005f8550();
    /* 005e52f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e52f2: mov ecx, 0x1e */ r_ecx = 0x1eu;
    /* 005e52f7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005e52f7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e52f7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e52f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e52fc: push 0x311abb */ { u32 v = 0x311abbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5301: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e5307: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e530a: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5e530fu); f_005fb630();
    /* 005e530f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e5312: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5315: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5317: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e531a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e531d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e531fu); call_ind(t); }
    /* 005e531f: mov esi, eax */ r_esi = r_eax;
    /* 005e5321: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5327: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e532a: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5e532fu); f_005f8550();
    /* 005e532f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5331: jle 0x5e5349 */ if ((fZ||fS!=fO)) goto L_005e5349;
L_005e5333:; BB(0x005e5333);
    /* 005e5333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5335: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5337: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e533a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e533c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e533f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e5342: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e5344u); call_ind(t); }
    /* 005e5344: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e5349:; BB(0x005e5349);
    /* 005e5349: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e534c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e534e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5351: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005e5354: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5356u); call_ind(t); }
    /* 005e5356: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e535a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e535d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e535f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5362: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5365: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5367u); call_ind(t); }
    /* 005e5367: push 0x311abf */ { u32 v = 0x311abfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e536c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5372: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5375: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e537au); f_005fb210();
    /* 005e537a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e537d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5380: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5382: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5385: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e5388: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e538au); call_ind(t); }
    /* 005e538a: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e538d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e538e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5391: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5393: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5396: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5399: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e539bu); call_ind(t); }
    /* 005e539b: push 0x311ac0 */ { u32 v = 0x311ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e53a0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e53a6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e53a9: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e53aeu); f_005fb210();
    /* 005e53ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e53b1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e53b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53b9: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e53bc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e53beu); call_ind(t); }
    /* 005e53be: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e53c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e53c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e53c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53ca: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e53cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e53cfu); call_ind(t); }
    /* 005e53cf: push 0x311ac1 */ { u32 v = 0x311ac1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e53d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e53da: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e53dd: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e53e2u); f_005fb210();
    /* 005e53e2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e53e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e53ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53ed: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e53f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e53f2u); call_ind(t); }
    /* 005e53f2: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e53f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e53f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e53fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e53fe: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5401: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5403u); call_ind(t); }
    /* 005e5403: push 0x311abc */ { u32 v = 0x311abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5408: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e540e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5411: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e5416u); f_005fb210();
    /* 005e5416: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e5419: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e541c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e541e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5421: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e5424: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e5426u); call_ind(t); }
    /* 005e5426: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e542a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e542d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e542f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5432: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5435: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5437u); call_ind(t); }
    /* 005e5437: push 0x311abd */ { u32 v = 0x311abdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e543c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5442: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5445: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e544au); f_005fb210();
    /* 005e544a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e544d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5450: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5452: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5455: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e5458: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e545au); call_ind(t); }
    /* 005e545a: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e545d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e545e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5461: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5463: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5466: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5469: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e546bu); call_ind(t); }
    /* 005e546b: push 0x311abe */ { u32 v = 0x311abeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5470: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e5476: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e5479: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e547eu); f_005fb210();
    /* 005e547e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e5481: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5484: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e5486: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5489: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e548c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e548eu); call_ind(t); }
    /* 005e548e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5492: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5495: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5497: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e549a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e549d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e549fu); call_ind(t); }
    /* 005e549f: push 0x311aba */ { u32 v = 0x311abau; r_esp -= 4; W32(r_esp, v); }
    /* 005e54a4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e54aa: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e54ad: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5e54b2u); f_005fb630();
    /* 005e54b2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e54b5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e54b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e54ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e54bd: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e54c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e54c2u); call_ind(t); }
    /* 005e54c2: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e54c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e54c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e54c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e54cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e54ce: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e54d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e54d3u); call_ind(t); }
    /* 005e54d3: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e54d8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e54de: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e54e1: call 0x5fb210 */ r_esp -= 4; W32(r_esp, 0x5e54e6u); f_005fb210();
    /* 005e54e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e54e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e54ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e54ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e54f1: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005e54f4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e54f6u); call_ind(t); }
    /* 005e54f6: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e54f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e54fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e54fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e54ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e5502: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005e5505: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5507u); call_ind(t); }
    /* 005e5507: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5509: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e550b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e550e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5510: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5513: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5516: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5518u); call_ind(t); }
    /* 005e5518: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e551d:; BB(0x005e551d);
    /* 005e551d: push 0x311ac2 */ { u32 v = 0x311ac2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5524: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e552a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e552d: call 0x5fbd70 */ r_esp -= 4; W32(r_esp, 0x5e5532u); f_005fbd70();
    /* 005e5532: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5534: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5539: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e553f: call 0x5f44e0 */ r_esp -= 4; W32(r_esp, 0x5e5544u); f_005f44e0();
    /* 005e5544: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5546: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005e5548: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e554b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e554d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e5550: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005e5553: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e5555u); call_ind(t); }
    /* 005e5555: jmp 0x5e56a0 */ goto L_005e56a0;
L_005e555a:; BB(0x005e555a);
    /* 005e555a: push 0x311aba */ { u32 v = 0x311abau; r_esp -= 4; W32(r_esp, v); }
    /* 005e555f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5561: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e5566: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e5569: call 0x5fbd70 */ r_esp -= 4; W32(r_esp, 0x5e556eu); f_005fbd70();
    /* 005e556e: push 0x311abb */ { u32 v = 0x311abbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5573: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5575: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e557b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e557e: call 0x5fbd70 */ r_esp -= 4; W32(r_esp, 0x5e5583u); f_005fbd70();
    /* 005e5583: push 0x311ab4 */ { u32 v = 0x311ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e558a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e5590: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e5593: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e5598u); f_005fbc80();
    /* 005e5598: push 0x311abf */ { u32 v = 0x311abfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e559d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e559f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e55a4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e55a7: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e55acu); f_005fbc80();
    /* 005e55ac: push 0x311ac0 */ { u32 v = 0x311ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e55b9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e55bc: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e55c1u); f_005fbc80();
    /* 005e55c1: push 0x311ac1 */ { u32 v = 0x311ac1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55c8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e55ce: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e55d1: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e55d6u); f_005fbc80();
    /* 005e55d6: push 0x311abc */ { u32 v = 0x311abcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e55db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55dd: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e55e2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e55e5: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e55eau); f_005fbc80();
    /* 005e55ea: push 0x311abd */ { u32 v = 0x311abdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e55ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e55f1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e55f7: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e55fa: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e55ffu); f_005fbc80();
    /* 005e55ff: push 0x311abe */ { u32 v = 0x311abeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5606: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e560c: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e560f: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e5614u); f_005fbc80();
    /* 005e5614: mov byte ptr [0x794909], 0 */ W8((u32)(0x794909u), 0x0u);
    /* 005e561b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e561d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e5622u); f_00686d82();
    /* 005e5622: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5625: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005e5628: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005e562f: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5633: je 0x5e5642 */ if (fZ) goto L_005e5642;
L_005e5635:; BB(0x005e5635);
    /* 005e5635: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e5638: call 0x5e5840 */ r_esp -= 4; W32(r_esp, 0x5e563du); f_005e5840();
    /* 005e563d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005e5640: jmp 0x5e5649 */ goto L_005e5649;
L_005e5642:; BB(0x005e5642);
    /* 005e5642: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005e5649:; BB(0x005e5649);
    /* 005e5649: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e564c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e564f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5656: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e5659: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e565a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e565d: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005e5660: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5e5665u); f_005f1b70();
    /* 005e5665: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e566b: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x5e5670u); f_00636760();
    /* 005e5670: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e5673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5675: je 0x5e56a0 */ if (fZ) goto L_005e56a0;
L_005e5677:; BB(0x005e5677);
    /* 005e5677: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e567e: jne 0x5e56a0 */ if (!fZ) goto L_005e56a0;
L_005e5680:; BB(0x005e5680);
    /* 005e5680: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5682: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5684: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e568a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e5690: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5692: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e5698: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005e569e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e56a0u); call_ind(t); }
L_005e56a0:; BB(0x005e56a0);
    /* 005e56a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e56a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e56aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e56ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e56ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005e56ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e56af: ret  */ FN_RET(0x005e4a50); r_esp += 4; return;
}

