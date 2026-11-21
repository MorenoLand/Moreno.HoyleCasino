#include "protos.h"

void f_0041d950(void) /* sub_41D950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d950);
    /* 0041d950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d951: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d953: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d956: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0041d959: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d95c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041d95f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041d962: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041d966: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041d969: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0041d96c: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0041d970: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041d973: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041d976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d97a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41d97fu); f_0064c8a0();
    /* 0041d97f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d982: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041d985: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0041d988: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041d98b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041d98e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041d991: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041d994: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d998: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41d99du); f_0064c8a0();
    /* 0041d99d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d9a0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0041d9a3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0041d9a6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041d9a9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041d9ac: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041d9af: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041d9b2: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 0041d9b5: fidiv dword ptr [ebp + 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0x18u));
    /* 0041d9b8: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0041d9bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d9be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d9bf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41d9c4u); f_005dcb00();
    /* 0041d9c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d9c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0041d9c9: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x41d9ceu); f_005d5a50();
    /* 0041d9ce: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d9d3: jl 0x41d9da */ if ((fS!=fO)) goto L_0041d9da;
L_0041d9d5:; BB(0x0041d9d5);
    /* 0041d9d5: jmp 0x41dc1d */ goto L_0041dc1d;
L_0041d9da:; BB(0x0041d9da);
    /* 0041d9da: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0041d9dd: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0041d9e0: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d9e4: je 0x41d9ff */ if (fZ) goto L_0041d9ff;
L_0041d9e6:; BB(0x0041d9e6);
    /* 0041d9e6: cmp dword ptr [ebp - 0x50], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d9ea: je 0x41dafb */ if (fZ) goto L_0041dafb;
L_0041d9f0:; BB(0x0041d9f0);
    /* 0041d9f0: cmp dword ptr [ebp - 0x50], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d9f4: je 0x41dadb */ if (fZ) goto L_0041dadb;
L_0041d9fa:; BB(0x0041d9fa);
    /* 0041d9fa: jmp 0x41dc1d */ goto L_0041dc1d;
L_0041d9ff:; BB(0x0041d9ff);
    /* 0041d9ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041da02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041da03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041da06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041da07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041da0a: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041da0f: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041da13: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041da16: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041da1b: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041da1f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041da21: mov ecx, edx */ r_ecx = r_edx;
    /* 0041da23: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 0041da29: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41da2bu); call_ind(t); }
    /* 0041da2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041da2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041da2f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41da34u); f_005dcb00();
    /* 0041da34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041da37: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041da3e: jle 0x41da56 */ if ((fZ||fS!=fO)) goto L_0041da56;
L_0041da40:; BB(0x0041da40);
    /* 0041da40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041da43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041da44: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41da49u); f_005dcb00();
    /* 0041da49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041da4c: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0041da56:; BB(0x0041da56);
    /* 0041da56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041da59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041da5a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41da5fu); f_005dcb00();
    /* 0041da5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041da62: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041da67: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0041da6a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0041da6d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041da6f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041da72: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041da75: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0041da77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041da7a: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041da7d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041da80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041da83: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041da86: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041da89: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041da8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041da8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041da90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041da91: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041da94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041da95: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41da9au); f_005dcb00();
    /* 0041da9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041da9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0041da9f: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x41daa4u); f_005d5fb0();
    /* 0041daa4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041daa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041daa8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41daadu); f_0064c8a0();
    /* 0041daad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dab0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041dab3: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0041dab6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041dab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041daba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dabd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dabe: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041dac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dac2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041dac5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dac6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041dac9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041dacb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041dace: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0041dad4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41dad6u); call_ind(t); }
    /* 0041dad6: jmp 0x41dc1d */ goto L_0041dc1d;
L_0041dadb:; BB(0x0041dadb);
    /* 0041dadb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dade: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dadf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041dae2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dae3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dae7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41daecu); f_005dcb00();
    /* 0041daec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041daef: mov ecx, eax */ r_ecx = r_eax;
    /* 0041daf1: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x41daf6u); f_005d5cf0();
    /* 0041daf6: jmp 0x41dc1d */ goto L_0041dc1d;
L_0041dafb:; BB(0x0041dafb);
    /* 0041dafb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dafe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041daff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41db04u); f_005dcb00();
    /* 0041db04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041db07: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041db0e: jge 0x41db26 */ if ((fS==fO)) goto L_0041db26;
L_0041db10:; BB(0x0041db10);
    /* 0041db10: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041db13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041db14: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41db19u); f_005dcb00();
    /* 0041db19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041db1c: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0041db26:; BB(0x0041db26);
    /* 0041db26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041db29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041db2a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41db2fu); f_005dcb00();
    /* 0041db2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041db32: mov ecx, eax */ r_ecx = r_eax;
    /* 0041db34: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x41db39u); f_005d7540();
    /* 0041db39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041db3c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041db3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041db42: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0041db45: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041db48: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0041db4b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0041db4e: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0041db51: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x41db56u); f_0064c560();
    /* 0041db56: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041db5d: jle 0x41db6d */ if ((fZ||fS!=fO)) goto L_0041db6d;
L_0041db5f:; BB(0x0041db5f);
    /* 0041db5f: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 0041db66: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0041db6d:; BB(0x0041db6d);
    /* 0041db6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041db70: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041db73: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041db76: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041db7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041db7d: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0041db81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041db82: mov edx, dword ptr [edx + eax*8] */ r_edx = R32((u32)(r_edx+r_eax*8));
    /* 0041db85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041db86: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0041db89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041db8a: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0041db8d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x41db92u); f_0064c5c0();
    /* 0041db92: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041db94: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0041db97: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041db9a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041db9d: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041dba4: jl 0x41dbc7 */ if ((fS!=fO)) goto L_0041dbc7;
L_0041dba6:; BB(0x0041dba6);
    /* 0041dba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dba8: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbad: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41dbb2u); f_0064c8a0();
    /* 0041dbb2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dbb5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041dbb8: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0041dbbb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041dbbe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041dbc1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041dbc4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0041dbc7:; BB(0x0041dbc7);
    /* 0041dbc7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dbca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbcb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041dbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbcf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dbd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbd3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41dbd8u); f_005dcb00();
    /* 0041dbd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dbdb: mov ecx, eax */ r_ecx = r_eax;
    /* 0041dbdd: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x41dbe2u); f_005d5cf0();
    /* 0041dbe2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041dbe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbe6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041dbe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dbed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41dbf3u); f_005dcb00();
    /* 0041dbf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dbf6: mov ecx, eax */ r_ecx = r_eax;
    /* 0041dbf8: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x41dbfdu); f_005d5fb0();
    /* 0041dbfd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041dc00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dc04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dc08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc09: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041dc0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc0d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041dc10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041dc12: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041dc15: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0041dc1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41dc1du); call_ind(t); }
L_0041dc1d:; BB(0x0041dc1d);
    /* 0041dc1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dc1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dc20: ret 0x14 */ FN_RET(0x0041d950); r_esp += 24; return;
}

void f_0041dd40(void) /* sub_41DD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dd40);
    /* 0041dd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dd47: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041dd4d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x41dd52u); f_005da7b0();
    /* 0041dd52: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041dd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dd57: je 0x41dd67 */ if (fZ) goto L_0041dd67;
L_0041dd59:; BB(0x0041dd59);
    /* 0041dd59: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dd5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd60: call 0x41df20 */ r_esp -= 4; W32(r_esp, 0x41dd65u); f_0041df20();
    /* 0041dd65: jmp 0x41dd73 */ goto L_0041dd73;
L_0041dd67:; BB(0x0041dd67);
    /* 0041dd67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041dd6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd6e: call 0x41dd80 */ r_esp -= 4; W32(r_esp, 0x41dd73u); f_0041dd80();
L_0041dd73:; BB(0x0041dd73);
    /* 0041dd73: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dd75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dd76: ret 4 */ FN_RET(0x0041dd40); r_esp += 8; return;
}

