#include "protos.h"

void f_00699e40(void) /* _WinMain@16_139_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699e40);
    /* 00699e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00699e43: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699e46: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00699e49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699e4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699e4c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00699e4e: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00699e51: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00699e54: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00699e56: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00699e59: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00699e5b: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 00699e5e: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00699e60: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 00699e63: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00699e64: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00699e64, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00699e64, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00699e66: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00699e69: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00699e6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00699e6f: lea eax, [eax + esi - 1] */ r_eax = (u32)(r_eax+r_esi+0xffffffffu);
    /* 00699e73: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00699e74: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00699e74, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00699e74, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00699e76: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00699e79: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 00699e80: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699e83: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699e85: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699e8au); f_00687340();
    /* 00699e8a: mov ebx, esp */ r_ebx = r_esp;
    /* 00699e8c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00699e8e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699e90: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00699e93: jle 0x699eba */ if ((fZ||fS!=fO)) goto L_00699eba;
L_00699e95:; BB(0x00699e95);
    /* 00699e95: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699e98: lea edx, [ecx*4] */ r_edx = (u32)(r_ecx*4);
    /* 00699e9f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00699ea2:; BB(0x00699ea2);
    /* 00699ea2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699ea5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00699ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699ea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699eaa: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x699eafu); f_00690e40();
    /* 00699eaf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699eb2: mov dword ptr [ebx + esi*4], eax */ W32((u32)(r_ebx+r_esi*4), r_eax);
    /* 00699eb5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699eb6: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699eb8: jl 0x699ea2 */ if ((fS!=fO)) goto L_00699ea2;
L_00699eba:; BB(0x00699eba);
    /* 00699eba: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00699ebd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00699ec4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00699ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699ec9: jle 0x69a03d */ if ((fZ||fS!=fO)) goto L_0069a03d;
L_00699ecf:; BB(0x00699ecf);
    /* 00699ecf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00699ed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699ed4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699ed6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00699ed9: jle 0x69a028 */ if ((fZ||fS!=fO)) goto L_0069a028;
L_00699edf:; BB(0x00699edf);
    /* 00699edf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00699ee1: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
L_00699ee4:; BB(0x00699ee4);
    /* 00699ee4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699ee7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ee9: jne 0x699f40 */ if (!fZ) goto L_00699f40;
L_00699eeb:; BB(0x00699eeb);
    /* 00699eeb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00699eee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00699ef0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699ef2: jle 0x699f40 */ if ((fZ||fS!=fO)) goto L_00699f40;
L_00699ef4:; BB(0x00699ef4);
    /* 00699ef4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00699ef7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699efa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00699efd:; BB(0x00699efd);
    /* 00699efd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00699f00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f04: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00699f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699f08: call 0x695220 */ r_esp -= 4; W32(r_esp, 0x699f0du); f_00695220();
    /* 00699f0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699f10: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f13: je 0x69a03d */ if (fZ) goto L_0069a03d;
L_00699f19:; BB(0x00699f19);
    /* 00699f19: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00699f1c: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00699f1f: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 00699f22: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00699f25: mov dword ptr [edi + ecx], edx */ W32((u32)(r_edi+r_ecx), r_edx);
    /* 00699f28: mov eax, dword ptr [ebx + esi*4] */ r_eax = R32((u32)(r_ebx+r_esi*4));
    /* 00699f2b: cmp dword ptr [edi + eax], 0 */ {  u32 a = R32((u32)(r_edi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f2f: je 0x69a03d */ if (fZ) goto L_0069a03d;
L_00699f35:; BB(0x00699f35);
    /* 00699f35: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00699f38: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699f39: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699f3b: jl 0x699efd */ if ((fS!=fO)) goto L_00699efd;
L_00699f3d:; BB(0x00699f3d);
    /* 00699f3d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_00699f40:; BB(0x00699f40);
    /* 00699f40: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00699f43: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00699f4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699f4c: jle 0x69a017 */ if ((fZ||fS!=fO)) goto L_0069a017;
L_00699f52:; BB(0x00699f52);
    /* 00699f52: mov ecx, eax */ r_ecx = r_eax;
    /* 00699f54: imul ecx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00699f58: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00699f5b:; BB(0x00699f5b);
    /* 00699f5b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699f5e: jge 0x69a017 */ if ((fS==fO)) goto L_0069a017;
L_00699f64:; BB(0x00699f64);
    /* 00699f64: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00699f67: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00699f6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00699f70: jle 0x699ff6 */ if ((fZ||fS!=fO)) goto L_00699ff6;
L_00699f76:; BB(0x00699f76);
    /* 00699f76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699f79: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00699f7c: mov edi, 1 */ r_edi = 0x1u;
    /* 00699f81: mov esi, ebx */ r_esi = r_ebx;
    /* 00699f83: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00699f86: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00699f88: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_00699f8a:; BB(0x00699f8a);
    /* 00699f8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699f8d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00699f8f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00699f91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00699f94: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699f96: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00699f99: mov edx, dword ptr [ecx + edx] */ r_edx = R32((u32)(r_ecx+r_edx));
    /* 00699f9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699f9f: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00699fa2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699fa5: test dword ptr [edx + ecx*4 + 0x14], edi */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x14u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699fa9: je 0x699fdc */ if (fZ) goto L_00699fdc;
L_00699fab:; BB(0x00699fab);
    /* 00699fab: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00699fae: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 00699fb1: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00699fb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699fb7: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00699fba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699fbc: je 0x699fdc */ if (fZ) goto L_00699fdc;
L_00699fbe:; BB(0x00699fbe);
    /* 00699fbe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699fc2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00699fc5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699fc9: mov edx, dword ptr [ebx + esi] */ r_edx = R32((u32)(r_ebx+r_esi));
    /* 00699fcc: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 00699fcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699fd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699fd1: call dword ptr [ebp + 0x18] */ { u32 t = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, 0x699fd4u); call_ind(t); }
    /* 00699fd4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699fd7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699fda: je 0x69a03d */ if (fZ) goto L_0069a03d;
L_00699fdc:; BB(0x00699fdc);
    /* 00699fdc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699fdf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00699fe2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699fe3: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699fe6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699fe8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00699feb: jl 0x699f8a */ if ((fS!=fO)) goto L_00699f8a;
L_00699fed:; BB(0x00699fed);
    /* 00699fed: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00699ff0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00699ff3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_00699ff6:; BB(0x00699ff6);
    /* 00699ff6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699ff9: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00699ffc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699fff: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069a001: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0069a004: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069a005: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a006: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a008: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0069a00b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0069a00e: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0069a011: jl 0x699f5b */ if ((fS!=fO)) goto L_00699f5b;
L_0069a017:; BB(0x0069a017);
    /* 0069a017: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0069a01a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069a01d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a01f: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0069a022: jl 0x699ee4 */ if ((fS!=fO)) goto L_00699ee4;
L_0069a028:; BB(0x0069a028);
    /* 0069a028: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0069a02b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069a02e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069a02f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0069a032: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0069a035: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a037: jl 0x699ecf */ if ((fS!=fO)) goto L_00699ecf;
L_0069a03d:; BB(0x0069a03d);
    /* 0069a03d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069a03f: lea esp, [ebp - 0x38] */ r_esp = (u32)(r_ebp+0xffffffc8u);
    /* 0069a042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a043: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069a044: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a045: mov esp, ebp */ r_esp = r_ebp;
    /* 0069a047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a048: ret  */ FN_RET(0x00699e40); r_esp += 4; return;
}

