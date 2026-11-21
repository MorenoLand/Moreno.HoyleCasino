#include "protos.h"

void f_005e6470(void) /* sub_5E6470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6470);
    /* 005e6470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6471: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6473: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6476: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e6479: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e647c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e647f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6482: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6485: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e6488: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e648b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e648e: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005e6491: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6494: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005e6497: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005e6498: idiv dword ptr [0x75e87c] */ { i32 d = (i32)R32((u32)(0x75e87cu)); if (!d) UNSUP(0x005e6498, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005e6498, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005e649e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e64a1: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005e64a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e64a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e64a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e64aa: ret  */ FN_RET(0x005e6470); r_esp += 4; return;
}

void f_005e6bc0(void) /* sub_5E6BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6bc0);
    /* 005e6bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6bc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bc5: push 0x6a99b2 */ { u32 v = 0x6a99b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e6bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bd1: sub esp, 0x1b8 */ {  u32 a = r_esp; u32 b = 0x1b8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6bd7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e6bdc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e6bde: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e6be1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6be2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e6be5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e6beb: mov dword ptr [ebp - 0x1bc], ecx */ W32((u32)(r_ebp+0xfffffe44u), r_ecx);
    /* 005e6bf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6bf4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6bf7: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005e6bfc: jns 0x5e6c03 */ if (!fS) goto L_005e6c03;
L_005e6bfe:; BB(0x005e6bfe);
    /* 005e6bfe: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e6bff: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c02: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005e6c03:; BB(0x005e6c03);
    /* 005e6c03: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005e6c05: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005e6c07: and eax, 0xfffffebf */ {  u32 a = r_eax; u32 b = 0xfffffebfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c0c: add eax, 0x1bb */ {  u32 a = r_eax; u32 b = 0x1bbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c11: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e6c14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6c17: mov edx, dword ptr [ecx*4 + 0x75ebf0] */ r_edx = R32((u32)(r_ecx*4+0x75ebf0u));
    /* 005e6c1e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e6c21: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 005e6c2b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005e6c32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c35: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e6c38: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c3b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e6c3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c40: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6c4c: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6c4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c50: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6c53: sub edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e6c56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c57: push 0x30f0f1 */ { u32 v = 0x30f0f1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6c5f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c65: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6c6b: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6c70u); f_005f9ce0();
    /* 005e6c70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c74: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e6c7a: call 0x5e75f0 */ r_esp -= 4; W32(r_esp, 0x5e6c7fu); f_005e75f0();
    /* 005e6c7f: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 005e6c85: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c87: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c89: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c8b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6c8e: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6c91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c92: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c96: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c98: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c9d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6c9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6ca2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ca3: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e6ca9: call 0x5e7610 */ r_esp -= 4; W32(r_esp, 0x5e6caeu); f_005e7610();
    /* 005e6cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6caf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6cb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cb5: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6cbb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e6cc0u); f_005fa5b0();
    /* 005e6cc0: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6cc6: movsx ecx, byte ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x54u));
    /* 005e6cca: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e6ccc: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e6cce: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6cd1: add ecx, 0x1b */ {  u32 a = r_ecx; u32 b = 0x1bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6cd4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e6cd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cd9: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cdb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cdd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6ce0: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6ce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ce4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ce8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cea: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cef: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cf1: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6cf7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6cfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6cfb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6cfe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6d01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d04: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6d0a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e6d0fu); f_005fa5b0();
    /* 005e6d0f: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6d15: movsx ecx, byte ptr [eax + 0x54] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x54u));
    /* 005e6d19: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005e6d1b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005e6d1d: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6d20: add ecx, 0x29 */ {  u32 a = r_ecx; u32 b = 0x29u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6d23: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e6d26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6d29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d2a: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e6d30: call 0x5e7630 */ r_esp -= 4; W32(r_esp, 0x5e6d35u); f_005e7630();
    /* 005e6d35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6d37: jne 0x5e6d5e */ if (!fZ) goto L_005e6d5e;
L_005e6d39:; BB(0x005e6d39);
    /* 005e6d39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d3f: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 005e6d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d46: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6d4c: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005e6d4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d50: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 005e6d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d54: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e6d59u); f_0064c8d0();
    /* 005e6d59: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6d5c: jmp 0x5e6d7d */ goto L_005e6d7d;
L_005e6d5e:; BB(0x005e6d5e);
    /* 005e6d5e: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6d64: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005e6d67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d68: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d6d: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 005e6d73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d74: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5e6d7au); call_ind(t); }
    /* 005e6d7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6d7d:; BB(0x005e6d7d);
    /* 005e6d7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d7f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d81: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d83: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6d86: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6d89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d8a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6d8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d8e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d90: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d95: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d97: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 005e6d9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6d9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6da1: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6da4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6da7: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6dad: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e6db2u); f_005fa5b0();
    /* 005e6db2: mov edx, dword ptr [ebp - 0x190] */ r_edx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6db8: movsx eax, byte ptr [edx + 0x54] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x54u));
    /* 005e6dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6dbe: je 0x5e6e0b */ if (fZ) goto L_005e6e0b;
L_005e6dc0:; BB(0x005e6dc0);
    /* 005e6dc0: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 005e6dc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dcb: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e6dd1: call 0x5e7650 */ r_esp -= 4; W32(r_esp, 0x5e6dd6u); f_005e7650();
    /* 005e6dd6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dd8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dda: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ddc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6ddf: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6de3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6de6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6de7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6de9: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dee: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6df0: lea edx, [ebp - 0x18c] */ r_edx = (u32)(r_ebp+0xfffffe74u);
    /* 005e6df6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6df7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6dfa: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6dfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e00: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6e06: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e6e0bu); f_005fa5b0();
L_005e6e0b:; BB(0x005e6e0b);
    /* 005e6e0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e0d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e0f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6e14: add ecx, 0x41 */ {  u32 a = r_ecx; u32 b = 0x41u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e18: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6e1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e1c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e1e: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e23: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e25: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6e2b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6e32: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6e35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e38: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6e3e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e6e43u); f_005fa5b0();
    /* 005e6e43: mov edx, dword ptr [ebp - 0x190] */ r_edx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6e49: movsx eax, byte ptr [edx + 0xac] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xacu));
    /* 005e6e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6e52: je 0x5e6ff0 */ if (fZ) goto L_005e6ff0;
L_005e6e58:; BB(0x005e6e58);
    /* 005e6e58: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6e5e: cmp dword ptr [ecx + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6e62: jl 0x5e6f0b */ if ((fS!=fO)) goto L_005e6f0b;
L_005e6e68:; BB(0x005e6e68);
    /* 005e6e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e6a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e71: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6e76: mov eax, dword ptr [edx*4 + 0x75ebc8] */ r_eax = R32((u32)(r_edx*4+0x75ebc8u));
    /* 005e6e7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6e81: mov edx, dword ptr [ecx*4 + 0x75eba0] */ r_edx = R32((u32)(r_ecx*4+0x75eba0u));
    /* 005e6e88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e89: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6e8f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005e6e92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e93: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6e96: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6e99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6e9c: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6ea2: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6ea7u); f_005f9ce0();
    /* 005e6ea7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6eaa: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6eb0: mov dword ptr [edx + ecx*4 + 0x1e8], eax */ W32((u32)(r_edx+r_ecx*4+0x1e8u), r_eax);
    /* 005e6eb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6eb9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ebe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ec0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ec2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6ec5: mov ecx, dword ptr [eax*4 + 0x75ebc8] */ r_ecx = R32((u32)(r_eax*4+0x75ebc8u));
    /* 005e6ecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ecd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6ed0: mov eax, dword ptr [edx*4 + 0x75eba0] */ r_eax = R32((u32)(r_edx*4+0x75eba0u));
    /* 005e6ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ed8: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e6ede: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005e6ee1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ee2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6ee5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6ee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6eeb: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6ef1: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6ef6u); f_005f9ce0();
    /* 005e6ef6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6ef9: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6eff: mov dword ptr [edx + ecx*4 + 0x210], eax */ W32((u32)(r_edx+r_ecx*4+0x210u), r_eax);
    /* 005e6f06: jmp 0x5e6feb */ goto L_005e6feb;
L_005e6f0b:; BB(0x005e6f0b);
    /* 005e6f0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6f0e: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6f14: cmp dword ptr [ecx + eax*4 + 0x1c0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6f1c: jne 0x5e6feb */ if (!fZ) goto L_005e6feb;
L_005e6f22:; BB(0x005e6f22);
    /* 005e6f22: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f27: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e6f2cu); f_00686d82();
    /* 005e6f2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6f2f: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 005e6f35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e6f3c: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6f43: je 0x5e6f58 */ if (fZ) goto L_005e6f58;
L_005e6f45:; BB(0x005e6f45);
    /* 005e6f45: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 005e6f4b: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x5e6f50u); f_006640c0();
    /* 005e6f50: mov dword ptr [ebp - 0x1c0], eax */ W32((u32)(r_ebp+0xfffffe40u), r_eax);
    /* 005e6f56: jmp 0x5e6f62 */ goto L_005e6f62;
L_005e6f58:; BB(0x005e6f58);
    /* 005e6f58: mov dword ptr [ebp - 0x1c0], 0 */ W32((u32)(r_ebp+0xfffffe40u), 0x0u);
L_005e6f62:; BB(0x005e6f62);
    /* 005e6f62: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 005e6f68: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 005e6f6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e6f75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6f78: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6f7e: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 005e6f84: mov dword ptr [ecx + eax*4 + 0x1c0], edx */ W32((u32)(r_ecx+r_eax*4+0x1c0u), r_edx);
    /* 005e6f8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f8d: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6f94: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6f97: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6f9d: mov ecx, dword ptr [edx + ecx*4 + 0x1c0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c0u));
    /* 005e6fa4: call 0x664200 */ r_esp -= 4; W32(r_esp, 0x5e6fa9u); f_00664200();
    /* 005e6fa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6fac: mov ecx, dword ptr [eax*4 + 0x75ebc8] */ r_ecx = R32((u32)(r_eax*4+0x75ebc8u));
    /* 005e6fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e6fb7: mov eax, dword ptr [edx*4 + 0x75eba0] */ r_eax = R32((u32)(r_edx*4+0x75eba0u));
    /* 005e6fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6fc2: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6fc8: mov ecx, dword ptr [edx + ecx*4 + 0x1c0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c0u));
    /* 005e6fcf: call 0x6643f0 */ r_esp -= 4; W32(r_esp, 0x5e6fd4u); f_006643f0();
    /* 005e6fd4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6fd6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e6fd9: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6fdf: mov ecx, dword ptr [ecx + eax*4 + 0x1c0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c0u));
    /* 005e6fe6: call 0x664480 */ r_esp -= 4; W32(r_esp, 0x5e6febu); f_00664480();
L_005e6feb:; BB(0x005e6feb);
    /* 005e6feb: jmp 0x5e71f2 */ goto L_005e71f2;
L_005e6ff0:; BB(0x005e6ff0);
    /* 005e6ff0: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e6ff6: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 005e6ffc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e6fff: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005e7002: mov dword ptr [ebp - 0x1a8], edx */ W32((u32)(r_ebp+0xfffffe58u), r_edx);
    /* 005e7008: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 005e700e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e7013u); f_0063aac0();
    /* 005e7013: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005e7019: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e701f: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 005e7025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7026: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e702c: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 005e7032: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e7035: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005e7038: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x5e703du); f_0063b490();
    /* 005e703d: mov edx, dword ptr [ebp - 0x190] */ r_edx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005e7043: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e7049: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 005e704f: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e7055: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e705b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e705e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e7061: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005e7067: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005e706d: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 005e7073: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e7076: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e707c: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e7082: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7085: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e7088: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 005e708e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7093: mov edx, dword ptr [ebp - 0x1b4] */ r_edx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005e7099: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e709c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e709d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e70a2u); f_00686d8e();
    /* 005e70a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e70a5: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005e70a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e70acu); f_00686d82();
    /* 005e70ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e70af: mov dword ptr [ebp - 0x1a4], eax */ W32((u32)(r_ebp+0xfffffe5cu), r_eax);
    /* 005e70b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e70bc: cmp dword ptr [ebp - 0x1a4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e70c3: je 0x5e70d8 */ if (fZ) goto L_005e70d8;
L_005e70c5:; BB(0x005e70c5);
    /* 005e70c5: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005e70cb: call 0x6454f0 */ r_esp -= 4; W32(r_esp, 0x5e70d0u); f_006454f0();
    /* 005e70d0: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 005e70d6: jmp 0x5e70e2 */ goto L_005e70e2;
L_005e70d8:; BB(0x005e70d8);
    /* 005e70d8: mov dword ptr [ebp - 0x1c4], 0 */ W32((u32)(r_ebp+0xfffffe3cu), 0x0u);
L_005e70e2:; BB(0x005e70e2);
    /* 005e70e2: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 005e70e8: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 005e70ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e70f5: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e70fb: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e7101: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e7104: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e7107: mov edx, dword ptr [ebp - 0x1a0] */ r_edx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005e710d: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005e7110: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7112: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7114: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7116: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e711c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e711d: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e7123: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e7129: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e712c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e712f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7130: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e7136: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 005e713c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e713f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005e7142: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e7145: call 0x645820 */ r_esp -= 4; W32(r_esp, 0x5e714au); f_00645820();
    /* 005e714a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e714d: mov ecx, dword ptr [eax*4 + 0x75ebc8] */ r_ecx = R32((u32)(r_eax*4+0x75ebc8u));
    /* 005e7154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7155: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7158: mov eax, dword ptr [edx*4 + 0x75eba0] */ r_eax = R32((u32)(r_edx*4+0x75eba0u));
    /* 005e715f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7160: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e7166: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e716c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e716f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e7172: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e7175: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x5e717au); f_00646150();
    /* 005e717a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e717c: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e7182: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 005e7188: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e718b: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005e718e: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e7191: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x5e7196u); f_00646380();
    /* 005e7196: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e719c: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 005e71a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e71a5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e71a8: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005e71ab: mov dword ptr [ebp - 0x1b8], ecx */ W32((u32)(r_ebp+0xfffffe48u), r_ecx);
    /* 005e71b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b5: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005e71bb: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x5e71c0u); f_006464d0();
    /* 005e71c0: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005e71c6: mov byte ptr [edx + 0x28], 0 */ W8((u32)(r_edx+0x28u), 0x0u);
    /* 005e71ca: mov eax, dword ptr [ebp - 0x1b8] */ r_eax = R32((u32)(r_ebp+0xfffffe48u));
    /* 005e71d0: mov byte ptr [eax + 0x29], 0 */ W8((u32)(r_eax+0x29u), 0x0u);
    /* 005e71d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e71d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e71d8: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 005e71de: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e71e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e71e7: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e71ea: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005e71ed: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x5e71f2u); f_006464d0();
L_005e71f2:; BB(0x005e71f2);
    /* 005e71f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e71f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e71fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e71fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e7200: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7202: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e7207u); f_00686d72();
    /* 005e7207: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e720a: ret 4 */ FN_RET(0x005e6bc0); r_esp += 8; return;
}

