#include "protos.h"

void f_00416cc0(void) /* sub_416CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00416cc0);
    /* 00416cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00416cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00416cc3: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416cc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00416cc9: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00416ccd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00416cd0: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416cd4: ja 0x41710f */ if ((!fC&&!fZ)) goto L_0041710f;
L_00416cda:; BB(0x00416cda);
    /* 00416cda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00416cdd: jmp dword ptr [ecx*4 + 0x417118] */ { u32 t = R32((u32)(r_ecx*4+0x417118u)); switch (t) { case 0x416ce4u: goto L_00416ce4; case 0x416df0u: goto L_00416df0; case 0x416efcu: goto L_00416efc; case 0x417008u: goto L_00417008; default: UNSUP(0x00416cdd, "jump table entry is not a known target"); } }
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ce6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ce8: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cea: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416cf0: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416cf5u); f_005fb5e0();
    /* 00416cf5: mov ecx, eax */ r_ecx = r_eax;
    /* 00416cf7: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416cfcu); f_00605ef0();
    /* 00416cfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416cfe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d00: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d02: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d08: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416d0du); f_005fb5e0();
    /* 00416d0d: mov ecx, eax */ r_ecx = r_eax;
    /* 00416d0f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416d14u); f_00605ef0();
    /* 00416d14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d18: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d1a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d20: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416d25u); f_005fb5e0();
    /* 00416d25: mov ecx, eax */ r_ecx = r_eax;
    /* 00416d27: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416d2cu); f_00605ef0();
    /* 00416d2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d30: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d32: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d38: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416d3du); f_005fb5e0();
    /* 00416d3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00416d3f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416d44u); f_00605ef0();
    /* 00416d44: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d46: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d4c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416d51u); f_005fb350();
    /* 00416d51: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00416d54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00416d59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00416d5c: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00416d62: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x416d64u); call_ind(t); }
    /* 00416d64: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d66: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d6c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416d71u); f_005fb350();
    /* 00416d71: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00416d74: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416d77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00416d79: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00416d7c: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416d82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416d84u); call_ind(t); }
    /* 00416d84: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00416d86: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416d8c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416d91u); f_005fb350();
    /* 00416d91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00416d94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416d97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416d99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00416d9c: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416da2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416da4u); call_ind(t); }
    /* 00416da4: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00416da6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416dac: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416db1u); f_005fb350();
    /* 00416db1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00416db4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416db7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416db9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00416dbc: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416dc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416dc4u); call_ind(t); }
    /* 00416dc4: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416dc6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416dcc: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416dd1u); f_005fb5e0();
    /* 00416dd1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00416dd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416dd6: push 0x30d7f5 */ { u32 v = 0x30d7f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ddb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00416dde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416de0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00416de3: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00416de9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416debu); call_ind(t); }
    /* 00416deb: jmp 0x41710f */ goto L_0041710f;
L_00416df0:; BB(0x00416df0);
    /* 00416df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416df2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416df4: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00416df6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416dfc: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416e01u); f_005fb5e0();
    /* 00416e01: mov ecx, eax */ r_ecx = r_eax;
    /* 00416e03: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416e08u); f_00605ef0();
    /* 00416e08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e0c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e0e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e14: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416e19u); f_005fb5e0();
    /* 00416e19: mov ecx, eax */ r_ecx = r_eax;
    /* 00416e1b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416e20u); f_00605ef0();
    /* 00416e20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e24: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e26: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e2c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416e31u); f_005fb5e0();
    /* 00416e31: mov ecx, eax */ r_ecx = r_eax;
    /* 00416e33: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416e38u); f_00605ef0();
    /* 00416e38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e3c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e3e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e44: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416e49u); f_005fb5e0();
    /* 00416e49: mov ecx, eax */ r_ecx = r_eax;
    /* 00416e4b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416e50u); f_00605ef0();
    /* 00416e50: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e52: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e58: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416e5du); f_005fb350();
    /* 00416e5d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00416e60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00416e63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416e65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00416e68: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416e6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416e70u); call_ind(t); }
    /* 00416e70: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e72: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e78: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416e7du); f_005fb350();
    /* 00416e7d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00416e80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00416e83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416e85: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00416e88: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416e8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416e90u); call_ind(t); }
    /* 00416e90: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00416e92: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416e98: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416e9du); f_005fb350();
    /* 00416e9d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00416ea0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00416ea3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416ea5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00416ea8: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416eae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416eb0u); call_ind(t); }
    /* 00416eb0: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00416eb2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416eb8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416ebdu); f_005fb350();
    /* 00416ebd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00416ec0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00416ec3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416ec5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00416ec8: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416ed0u); call_ind(t); }
    /* 00416ed0: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ed2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416ed8: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416eddu); f_005fb5e0();
    /* 00416edd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00416ee0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ee2: push 0x30d7f6 */ { u32 v = 0x30d7f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ee7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00416eea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416eec: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00416eef: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00416ef5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416ef7u); call_ind(t); }
    /* 00416ef7: jmp 0x41710f */ goto L_0041710f;
L_00416efc:; BB(0x00416efc);
    /* 00416efc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416efe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f00: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f02: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f08: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416f0du); f_005fb5e0();
    /* 00416f0d: mov ecx, eax */ r_ecx = r_eax;
    /* 00416f0f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416f14u); f_00605ef0();
    /* 00416f14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f16: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f18: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f1a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f20: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416f25u); f_005fb5e0();
    /* 00416f25: mov ecx, eax */ r_ecx = r_eax;
    /* 00416f27: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416f2cu); f_00605ef0();
    /* 00416f2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f30: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f32: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f38: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416f3du); f_005fb5e0();
    /* 00416f3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00416f3f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416f44u); f_00605ef0();
    /* 00416f44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f48: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f50: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416f55u); f_005fb5e0();
    /* 00416f55: mov ecx, eax */ r_ecx = r_eax;
    /* 00416f57: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_00605ef0();
    /* 00416f5c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f5e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f64: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416f69u); f_005fb350();
    /* 00416f69: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00416f6c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00416f6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416f71: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00416f74: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416f7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416f7cu); call_ind(t); }
    /* 00416f7c: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f7e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416f84: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416f89u); f_005fb350();
    /* 00416f89: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00416f8c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00416f8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416f91: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00416f94: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416f9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416f9cu); call_ind(t); }
    /* 00416f9c: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00416f9e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416fa4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416fa9u); f_005fb350();
    /* 00416fa9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00416fac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00416faf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416fb1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00416fb4: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00416fba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416fbcu); call_ind(t); }
    /* 00416fbc: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00416fbe: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416fc4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x416fc9u); f_005fb350();
    /* 00416fc9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00416fcc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00416fcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416fd1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00416fd4: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00416fda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x416fdcu); call_ind(t); }
    /* 00416fdc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00416fde: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00416fe4: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x416fe9u); f_005fb5e0();
    /* 00416fe9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00416fec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416fee: push 0x30d7f7 */ { u32 v = 0x30d7f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00416ff3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00416ff6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00416ff8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00416ffb: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00417001: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417003u); call_ind(t); }
    /* 00417003: jmp 0x41710f */ goto L_0041710f;
L_00417008:; BB(0x00417008);
    /* 00417008: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041700a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041700c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041700e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417014: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417019u); f_005fb5e0();
    /* 00417019: mov ecx, eax */ r_ecx = r_eax;
    /* 0041701b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x417020u); f_00605ef0();
    /* 00417020: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417022: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417024: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00417026: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041702c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417031u); f_005fb5e0();
    /* 00417031: mov ecx, eax */ r_ecx = r_eax;
    /* 00417033: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x417038u); f_00605ef0();
    /* 00417038: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041703a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041703c: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0041703e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417044: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417049u); f_005fb5e0();
    /* 00417049: mov ecx, eax */ r_ecx = r_eax;
    /* 0041704b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x417050u); f_00605ef0();
    /* 00417050: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417052: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417054: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00417056: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041705c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417061u); f_005fb5e0();
    /* 00417061: mov ecx, eax */ r_ecx = r_eax;
    /* 00417063: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x417068u); f_00605ef0();
    /* 00417068: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0041706a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417070: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x417075u); f_005fb350();
    /* 00417075: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00417078: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041707b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041707d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00417080: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00417086: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417088u); call_ind(t); }
    /* 00417088: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0041708a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417090: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x417095u); f_005fb350();
    /* 00417095: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00417098: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041709b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041709d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004170a0: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004170a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4170a8u); call_ind(t); }
    /* 004170a8: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 004170aa: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004170b0: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4170b5u); f_005fb350();
    /* 004170b5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004170b8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004170bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004170bd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004170c0: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004170c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4170c8u); call_ind(t); }
    /* 004170c8: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004170ca: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004170d0: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4170d5u); f_005fb350();
    /* 004170d5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004170d8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004170db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004170dd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004170e0: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004170e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4170e8u); call_ind(t); }
    /* 004170e8: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004170ea: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004170f0: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4170f5u); f_005fb5e0();
    /* 004170f5: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004170f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004170fa: push 0x30d7f8 */ { u32 v = 0x30d7f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004170ff: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00417102: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417104: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00417107: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0041710d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41710fu); call_ind(t); }
L_0041710f:; BB(0x0041710f);
    /* 0041710f: mov esp, ebp */ r_esp = r_ebp;
    /* 00417111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417112: ret 4 */ FN_RET(0x00416cc0); r_esp += 8; return;
}

