#include "protos.h"

void f_00411c20(void) /* sub_411C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411c20);
    /* 00411c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00411c23: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411c26: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00411c29: mov dword ptr [ebp - 0x28], 0x20 */ W32((u32)(r_ebp+0xffffffd8u), 0x20u);
    /* 00411c30: mov dword ptr [ebp - 0x24], 0x22 */ W32((u32)(r_ebp+0xffffffdcu), 0x22u);
    /* 00411c37: mov dword ptr [ebp - 0x20], 0x20 */ W32((u32)(r_ebp+0xffffffe0u), 0x20u);
    /* 00411c3e: mov dword ptr [ebp - 0x1c], 0x40 */ W32((u32)(r_ebp+0xffffffe4u), 0x40u);
    /* 00411c45: mov dword ptr [ebp - 0x18], 0x20 */ W32((u32)(r_ebp+0xffffffe8u), 0x20u);
    /* 00411c4c: mov dword ptr [ebp - 0x14], 0x5e */ W32((u32)(r_ebp+0xffffffecu), 0x5eu);
    /* 00411c53: mov dword ptr [ebp - 0x10], 0x20 */ W32((u32)(r_ebp+0xfffffff0u), 0x20u);
    /* 00411c5a: mov dword ptr [ebp - 0xc], 0x7c */ W32((u32)(r_ebp+0xfffffff4u), 0x7cu);
    /* 00411c61: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00411c68: mov dword ptr [ebp - 4], 0x9a */ W32((u32)(r_ebp+0xfffffffcu), 0x9au);
    /* 00411c6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c71: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411c74: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x411c79u); f_005fb2b0();
    /* 00411c79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411c7b: jne 0x411cc7 */ if (!fZ) goto L_00411cc7;
L_00411c7d:; BB(0x00411c7d);
    /* 00411c7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c7f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00411c84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c86: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00411c88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00411c8b: mov ecx, dword ptr [ebp + eax*8 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00411c8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411c90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00411c93: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 00411c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411c98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00411c9a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411c9e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00411ca1: add ecx, 0x1398 */ {  u32 a = r_ecx; u32 b = 0x1398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00411ca7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411caa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411cac: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411caf: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x411cb4u); f_005f9ce0();
    /* 00411cb4: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00411cb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411cb8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00411cbb: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x411cc0u); f_005fb2b0();
    /* 00411cc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00411cc2: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x411cc7u); f_005eb5d0();
L_00411cc7:; BB(0x00411cc7);
    /* 00411cc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00411cc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411cca: ret 4 */ FN_RET(0x00411c20); r_esp += 8; return;
}

void f_00411e70(void) /* sub_411E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411e70);
    /* 00411e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00411e73: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411e79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00411e7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00411e80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00411e83: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00411e86: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411e8c: call 0x419d30 */ r_esp -= 4; W32(r_esp, 0x411e91u); f_00419d30();
    /* 00411e91: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00411e94: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411e9a: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x411e9fu); f_00418700();
    /* 00411e9f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00411ea2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411ea8: sub eax, dword ptr [ecx + 0x4e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4e8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00411eae: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00411eb1: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00411eb7: mov eax, dword ptr [edx + 0x4e4] */ r_eax = R32((u32)(r_edx+0x4e4u));
    /* 00411ebd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411ebe: push 0x6b3df0 */ { u32 v = 0x6b3df0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ec3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411ec8u); f_00630f40();
    /* 00411ec8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411ecc: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00411ecf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411ed0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x411ed6u); call_ind(t); }
    /* 00411ed6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411ed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411edb: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00411ede: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x411ee3u); f_005fb550();
    /* 00411ee3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00411ee6: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00411ee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411eea: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00411eed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411eef: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00411ef2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00411ef8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411efau); call_ind(t); }
    /* 00411efa: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00411f00: mov edx, dword ptr [ecx + 0x4e0] */ r_edx = R32((u32)(r_ecx+0x4e0u));
    /* 00411f06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411f07: push 0x6b3dd0 */ { u32 v = 0x6b3dd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f0c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411f11u); f_00630f40();
    /* 00411f11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411f15: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00411f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411f19: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x411f1fu); call_ind(t); }
    /* 00411f1f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411f22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f24: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00411f27: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x411f2cu); f_005fb550();
    /* 00411f2c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00411f32: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00411f35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411f36: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00411f3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00411f3e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00411f44: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00411f4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x411f4cu); call_ind(t); }
    /* 00411f4c: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00411f51: cmp dword ptr [eax + 0x4e0], 1 */ {  u32 a = R32((u32)(r_eax+0x4e0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411f58: jle 0x411f77 */ if ((fZ||fS!=fO)) goto L_00411f77;
L_00411f5a:; BB(0x00411f5a);
    /* 00411f5a: push 0x6b3db0 */ { u32 v = 0x6b3db0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f5f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411f64u); f_00630f40();
    /* 00411f64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411f68: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00411f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411f6c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x411f72u); call_ind(t); }
    /* 00411f72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411f75: jmp 0x411fbe */ goto L_00411fbe;
L_00411f77:; BB(0x00411f77);
    /* 00411f77: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00411f7d: cmp dword ptr [edx + 0x4e0], -1 */ {  u32 a = R32((u32)(r_edx+0x4e0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411f84: jge 0x411fa3 */ if ((fS==fO)) goto L_00411fa3;
L_00411f86:; BB(0x00411f86);
    /* 00411f86: push 0x6b3d90 */ { u32 v = 0x6b3d90u; r_esp -= 4; W32(r_esp, v); }
    /* 00411f8b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411f90u); f_00630f40();
    /* 00411f90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411f94: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00411f97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411f98: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x411f9eu); call_ind(t); }
    /* 00411f9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411fa1: jmp 0x411fbe */ goto L_00411fbe;
L_00411fa3:; BB(0x00411fa3);
    /* 00411fa3: push 0x6b3d74 */ { u32 v = 0x6b3d74u; r_esp -= 4; W32(r_esp, v); }
    /* 00411fa8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411fadu); f_00630f40();
    /* 00411fad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411fb1: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00411fb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411fb5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x411fbbu); call_ind(t); }
    /* 00411fbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00411fbe:; BB(0x00411fbe);
    /* 00411fbe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00411fc0: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00411fc3: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x411fc8u); f_005fb550();
    /* 00411fc8: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00411fce: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00411fd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00411fd2: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00411fd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411fda: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00411fe0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00411fe6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411fe8u); call_ind(t); }
    /* 00411fe8: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00411fec: jle 0x41200f */ if ((fZ||fS!=fO)) goto L_0041200f;
L_00411fee:; BB(0x00411fee);
    /* 00411fee: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00411ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411ff2: push 0x6b3d54 */ { u32 v = 0x6b3d54u; r_esp -= 4; W32(r_esp, v); }
    /* 00411ff7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x411ffcu); f_00630f40();
    /* 00411ffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00411fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412000: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00412003: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412004: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41200au); call_ind(t); }
    /* 0041200a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041200d: jmp 0x412055 */ goto L_00412055;
L_0041200f:; BB(0x0041200f);
    /* 0041200f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00412013: jge 0x412036 */ if ((fS==fO)) goto L_00412036;
L_00412015:; BB(0x00412015);
    /* 00412015: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00412018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412019: push 0x6b3d34 */ { u32 v = 0x6b3d34u; r_esp -= 4; W32(r_esp, v); }
    /* 0041201e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x412023u); f_00630f40();
    /* 00412023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412027: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0041202a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041202b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x412031u); call_ind(t); }
    /* 00412031: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412034: jmp 0x412055 */ goto L_00412055;
L_00412036:; BB(0x00412036);
    /* 00412036: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00412039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041203a: push 0x6b3d10 */ { u32 v = 0x6b3d10u; r_esp -= 4; W32(r_esp, v); }
    /* 0041203f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x412044u); f_00630f40();
    /* 00412044: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412048: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0041204b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041204c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x412052u); call_ind(t); }
    /* 00412052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412055:; BB(0x00412055);
    /* 00412055: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00412057: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0041205a: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x41205fu); f_005fb550();
    /* 0041205f: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00412065: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00412068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412069: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0041206f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00412071: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00412077: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0041207d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41207fu); call_ind(t); }
    /* 0041207f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412082: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00412084: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x412089u); f_00686d72();
    /* 00412089: mov esp, ebp */ r_esp = r_ebp;
    /* 0041208b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041208c: ret  */ FN_RET(0x00411e70); r_esp += 4; return;
}

