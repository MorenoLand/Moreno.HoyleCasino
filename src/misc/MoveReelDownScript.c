#include "protos.h"

void f_005309c0(void) /* MoveReelDownScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005309c0);
    /* 005309c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005309c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005309c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005309c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005309c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005309c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005309cc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5309d1u); f_005fc0d0();
    /* 005309d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005309d4: mov dword ptr [eax], 0x6c3e0c */ W32((u32)(r_eax), 0x6c3e0cu);
    /* 005309da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005309dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005309e0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005309e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005309e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005309e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005309e9: ret 4 */ FN_RET(0x005309c0); r_esp += 8; return;
}

void f_005309f0(void) /* MoveReelDownScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005309f0);
    /* 005309f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005309f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005309f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005309f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005309f9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00530a00: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 00530a07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a0a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x530a0fu); f_005fc360();
    /* 00530a0f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00530a12: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00530a16: ja 0x530f08 */ if ((!fC&&!fZ)) goto L_00530f08;
L_00530a1c:; BB(0x00530a1c);
    /* 00530a1c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00530a1f: jmp dword ptr [eax*4 + 0x530f0c] */ { u32 t = R32((u32)(r_eax*4+0x530f0cu)); switch (t) { case 0x530a26u: goto L_00530a26; case 0x530cc5u: goto L_00530cc5; case 0x530ec2u: goto L_00530ec2; case 0x530ed5u: goto L_00530ed5; case 0x530ee8u: goto L_00530ee8; case 0x530efbu: goto L_00530efb; default: UNSUP(0x00530a1f, "jump table entry is not a known target"); } }
L_00530a26:; BB(0x00530a26);
    /* 00530a26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530a2c: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x530a31u); f_00637630();
    /* 00530a31: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00530a34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530a36: je 0x530a4d */ if (fZ) goto L_00530a4d;
L_00530a38:; BB(0x00530a38);
    /* 00530a38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530a40: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x530a45u); f_00637810();
    /* 00530a45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530a47: jne 0x530c7f */ if (!fZ) goto L_00530c7f;
L_00530a4d:; BB(0x00530a4d);
    /* 00530a4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a50: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00530a53: movzx ecx, byte ptr [eax + 0x19d] */ r_ecx = (u32)R8((u32)(r_eax+0x19du));
    /* 00530a5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530a5c: jne 0x530a7f */ if (!fZ) goto L_00530a7f;
L_00530a5e:; BB(0x00530a5e);
    /* 00530a5e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a61: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00530a64: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00530a6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a6d: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00530a70: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00530a76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00530a78: mov ecx, edx */ r_ecx = r_edx;
    /* 00530a7a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00530a7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530a7fu); call_ind(t); }
L_00530a7f:; BB(0x00530a7f);
    /* 00530a7f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a82: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530a85: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00530a8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530a8e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530a91: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00530a97: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530a99: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530a9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530a9eu); call_ind(t); }
    /* 00530a9e: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530aa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530aa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530aa5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530aa8: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00530aae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ab1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530ab4: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00530aba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530abc: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530abf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530ac1u); call_ind(t); }
    /* 00530ac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530ac2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ac5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530ac8: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00530ace: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ad1: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530ad4: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00530ada: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530adc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530adf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ae1u); call_ind(t); }
    /* 00530ae1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ae4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530ae7: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00530aed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530af0: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530af3: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00530af9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530afb: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530afe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530b00u); call_ind(t); }
    /* 00530b00: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530b04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b07: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b0a: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00530b10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b13: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b16: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00530b1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530b1e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530b21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530b23u); call_ind(t); }
    /* 00530b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530b24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b27: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530b2a: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00530b30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b33: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530b36: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00530b3c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530b3e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530b41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530b43u); call_ind(t); }
    /* 00530b43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b46: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b49: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00530b4f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b52: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b55: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00530b5b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530b5d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530b60: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530b62u); call_ind(t); }
    /* 00530b62: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530b65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530b66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b69: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530b6c: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530b72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b75: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530b78: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00530b7e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530b80: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530b83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530b85u); call_ind(t); }
    /* 00530b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530b86: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b89: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b8c: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00530b92: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530b95: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530b98: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00530b9e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530ba0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530ba3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ba5u); call_ind(t); }
    /* 00530ba5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ba8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530bab: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00530bb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530bb4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530bb7: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00530bbd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530bbf: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530bc2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530bc4u); call_ind(t); }
    /* 00530bc4: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530bc8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530bcb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530bce: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00530bd4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530bd7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530bda: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00530be0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530be2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530be5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530be7u); call_ind(t); }
    /* 00530be7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530be8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530beb: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530bee: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00530bf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530bf7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530bfa: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00530c00: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530c02: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530c05: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530c07u); call_ind(t); }
    /* 00530c07: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c0a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530c0d: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00530c13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c16: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530c19: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00530c1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530c21: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530c24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530c26u); call_ind(t); }
    /* 00530c26: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530c2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c2d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530c30: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00530c36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c39: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530c3c: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00530c42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530c44: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530c47: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530c49u); call_ind(t); }
    /* 00530c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530c4a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c4d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530c50: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00530c56: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c59: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530c5c: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00530c62: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530c64: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530c67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530c69u); call_ind(t); }
    /* 00530c69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530c6b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530c6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530c72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c75: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530c78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530c7au); call_ind(t); }
    /* 00530c7a: jmp 0x530f08 */ goto L_00530f08;
L_00530c7f:; BB(0x00530c7f);
    /* 00530c7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c82: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530c85: movzx eax, byte ptr [edx + 0x19d] */ r_eax = (u32)R8((u32)(r_edx+0x19du));
    /* 00530c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530c8e: jne 0x530caf */ if (!fZ) goto L_00530caf;
L_00530c90:; BB(0x00530c90);
    /* 00530c90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c93: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530c96: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00530c9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530c9f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530ca2: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00530ca8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530caa: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00530cad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530cafu); call_ind(t); }
L_00530caf:; BB(0x00530caf);
    /* 00530caf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530cb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530cb3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530cb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530cb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530cbb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530cbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530cc0u); call_ind(t); }
    /* 00530cc0: jmp 0x530f08 */ goto L_00530f08;
L_00530cc5:; BB(0x00530cc5);
    /* 00530cc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530cc8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530ccb: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00530cd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530cd4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530cd7: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00530cdd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530cdf: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530ce2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530ce4u); call_ind(t); }
    /* 00530ce4: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530ce8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ceb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530cee: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 00530cf4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530cf7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530cfa: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00530d00: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530d02: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530d05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530d07u); call_ind(t); }
    /* 00530d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530d08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d0b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d0e: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 00530d14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d17: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d1a: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00530d20: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530d22: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530d25: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530d27u); call_ind(t); }
    /* 00530d27: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d2a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530d2d: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00530d33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d36: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530d39: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00530d3f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530d41: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530d44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530d46u); call_ind(t); }
    /* 00530d46: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530d4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d4d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d50: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00530d56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d59: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d5c: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00530d62: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530d64: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530d67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530d69u); call_ind(t); }
    /* 00530d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530d6a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d6d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530d70: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00530d76: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d79: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530d7c: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00530d82: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530d84: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530d87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530d89u); call_ind(t); }
    /* 00530d89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d8c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d8f: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530d95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530d98: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530d9b: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00530da1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530da3: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530da6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530da8u); call_ind(t); }
    /* 00530da8: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530dac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530daf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530db2: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00530db8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530dbb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530dbe: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00530dc4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530dc6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530dc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530dcbu); call_ind(t); }
    /* 00530dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530dcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530dcf: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530dd2: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00530dd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ddb: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530dde: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00530de4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530de6: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530de9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530debu); call_ind(t); }
    /* 00530deb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530dee: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530df1: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00530df7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530dfa: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530dfd: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00530e03: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530e05: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00530e08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530e0au); call_ind(t); }
    /* 00530e0a: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e11: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530e14: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00530e1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e1d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530e20: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00530e26: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530e28: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00530e2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530e2du); call_ind(t); }
    /* 00530e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e2e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e31: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530e34: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00530e3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e3d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530e40: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00530e46: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530e48: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00530e4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530e4du); call_ind(t); }
    /* 00530e4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e50: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530e53: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00530e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e5c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530e5f: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00530e65: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530e67: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00530e6a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530e6cu); call_ind(t); }
    /* 00530e6c: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00530e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e70: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e73: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530e76: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00530e7c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e7f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00530e82: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00530e88: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00530e8a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00530e8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530e8fu); call_ind(t); }
    /* 00530e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e93: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530e96: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00530e9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530e9f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00530ea2: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 00530ea8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00530eaa: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00530ead: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530eafu); call_ind(t); }
    /* 00530eaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530eb1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00530eb3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530eb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530eb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ebb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530ebe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ec0u); call_ind(t); }
    /* 00530ec0: jmp 0x530f08 */ goto L_00530f08;
L_00530ec2:; BB(0x00530ec2);
    /* 00530ec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530ec4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00530ec6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ec9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530ecb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ece: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530ed1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ed3u); call_ind(t); }
    /* 00530ed3: jmp 0x530f08 */ goto L_00530f08;
L_00530ed5:; BB(0x00530ed5);
    /* 00530ed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530ed7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00530ed9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530edc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530ede: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ee1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530ee4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ee6u); call_ind(t); }
    /* 00530ee6: jmp 0x530f08 */ goto L_00530f08;
L_00530ee8:; BB(0x00530ee8);
    /* 00530ee8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530eea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530eec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530eef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530ef1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530ef4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530ef7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530ef9u); call_ind(t); }
    /* 00530ef9: jmp 0x530f08 */ goto L_00530f08;
L_00530efb:; BB(0x00530efb);
    /* 00530efb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530efd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00530f00: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00530f03: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x530f08u); f_005f5df0();
L_00530f08:; BB(0x00530f08);
    /* 00530f08: mov esp, ebp */ r_esp = r_ebp;
    /* 00530f0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530f0b: ret  */ FN_RET(0x005309f0); r_esp += 4; return;
}

