#include "protos.h"

void f_00525c10(void) /* sub_525C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00525c10);
    /* 00525c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00525c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00525c13: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00525c16: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00525c19: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00525c1b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x525c20u); f_0062fbf0();
    /* 00525c20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525c23: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00525c26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00525c29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00525c2c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525c30: jl 0x525c85 */ if ((fS!=fO)) goto L_00525c85;
L_00525c32:; BB(0x00525c32);
    /* 00525c32: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00525c36: jg 0x525c85 */ if ((!fZ&&fS==fO)) goto L_00525c85;
L_00525c38:; BB(0x00525c38);
    /* 00525c38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00525c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00525c3c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x525c41u); f_005dcb00();
    /* 00525c41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00525c44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00525c47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00525c4a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525c4fu); f_0063aac0();
    /* 00525c4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00525c51: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00525c54: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525c58: je 0x525c76 */ if (fZ) goto L_00525c76;
L_00525c5a:; BB(0x00525c5a);
    /* 00525c5a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00525c5d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x525c62u); f_0063aac0();
    /* 00525c62: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00525c64: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00525c67: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525c6b: je 0x525c76 */ if (fZ) goto L_00525c76;
L_00525c6d:; BB(0x00525c6d);
    /* 00525c6d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00525c74: jmp 0x525c7d */ goto L_00525c7d;
L_00525c76:; BB(0x00525c76);
    /* 00525c76: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_00525c7d:; BB(0x00525c7d);
    /* 00525c7d: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 00525c81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525c83: je 0x525c8a */ if (fZ) goto L_00525c8a;
L_00525c85:; BB(0x00525c85);
    /* 00525c85: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00525c88: jmp 0x525cdf */ goto L_00525cdf;
L_00525c8a:; BB(0x00525c8a);
    /* 00525c8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525c8d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00525c90: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00525c91: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00525c96: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00525c96, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00525c96, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00525c98: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00525c9b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00525c9e: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00525ca1: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00525ca6: lea ecx, [eax + edx + 0xc98] */ r_ecx = (u32)(r_eax+r_edx+0xc98u);
    /* 00525cad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525cb0: movsx eax, byte ptr [ecx + edx*8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx*8));
    /* 00525cb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525cb6: je 0x525cd4 */ if (fZ) goto L_00525cd4;
L_00525cb8:; BB(0x00525cb8);
    /* 00525cb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00525cbb: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00525cbe: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00525cc4: lea eax, [edx + ecx + 0xc98] */ r_eax = (u32)(r_edx+r_ecx+0xc98u);
    /* 00525ccb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525cce: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 00525cd2: jmp 0x525cdf */ goto L_00525cdf;
L_00525cd4:; BB(0x00525cd4);
    /* 00525cd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00525cd7: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00525cda: jne 0x525c8a */ if (!fZ) goto L_00525c8a;
L_00525cdc:; BB(0x00525cdc);
    /* 00525cdc: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00525cdf:; BB(0x00525cdf);
    /* 00525cdf: mov esp, ebp */ r_esp = r_ebp;
    /* 00525ce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525ce2: ret 4 */ FN_RET(0x00525c10); r_esp += 8; return;
}

