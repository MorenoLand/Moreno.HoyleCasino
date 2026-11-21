#include "protos.h"

void f_00627cc0(void) /* sciStroke::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627cc0);
    /* 00627cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00627cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00627cc5: push 0x6ab4db */ { u32 v = 0x6ab4dbu; r_esp -= 4; W32(r_esp, v); }
    /* 00627cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00627cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627cd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627cd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00627cd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627cdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00627cdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00627ce5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00627ce8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00627ceb: mov dword ptr [eax], 0x6d928c */ W32((u32)(r_eax), 0x6d928cu);
    /* 00627cf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627cf8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627cfb: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627cff: je 0x627d16 */ if (fZ) goto L_00627d16;
L_00627d01:; BB(0x00627d01);
    /* 00627d01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627d04: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00627d07: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00627d0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627d0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d0e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x627d13u); f_00686cae();
    /* 00627d13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00627d16:; BB(0x00627d16);
    /* 00627d16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00627d1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627d20: call 0x627100 */ r_esp -= 4; W32(r_esp, 0x627d25u); f_00627100();
    /* 00627d25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627d28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00627d2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00627d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627d33: ret  */ FN_RET(0x00627cc0); r_esp += 4; return;
}

void f_00627d40(void) /* sciStroke::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627d40);
    /* 00627d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00627d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627d4a: call 0x627160 */ r_esp -= 4; W32(r_esp, 0x627d4fu); f_00627160();
    /* 00627d4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00627d51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627d52: ret  */ FN_RET(0x00627d40); r_esp += 4; return;
}

void f_00627d60(void) /* sciStroke::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627d60);
    /* 00627d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00627d63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627d66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00627d69: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00627d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627d6d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00627d70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d71: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00627d74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d75: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00627d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627d79: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00627d7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d7d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00627d80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627d81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627d84: call 0x627180 */ r_esp -= 4; W32(r_esp, 0x627d89u); f_00627180();
    /* 00627d89: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627d8d: je 0x627dda */ if (fZ) goto L_00627dda;
L_00627d8f:; BB(0x00627d8f);
    /* 00627d8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00627d91: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00627d94: mov edx, 4 */ r_edx = 0x4u;
    /* 00627d99: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00627d9b: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00627d9e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627da0: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00627da2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627da3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x627da8u); f_00686d82();
    /* 00627da8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627dab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00627dae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627db1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627db4: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 00627db7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00627dba: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00627dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627dbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627dc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627dc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627dc5: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00627dc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627dc9: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x627dceu); f_00686fde();
    /* 00627dce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00627dd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00627dd4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00627dd7: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
L_00627dda:; BB(0x00627dda);
    /* 00627dda: mov esp, ebp */ r_esp = r_ebp;
    /* 00627ddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627ddd: ret 0x20 */ FN_RET(0x00627d60); r_esp += 36; return;
}

void f_00627de0(void) /* sciStroke::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627de0);
    /* 00627de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00627de3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627de6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00627de9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627dec: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x627df1u); f_005f54c0();
    /* 00627df1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627df4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627df6: je 0x627dfd */ if (fZ) goto L_00627dfd;
L_00627df8:; BB(0x00627df8);
    /* 00627df8: jmp 0x627f68 */ goto L_00627f68;
L_00627dfd:; BB(0x00627dfd);
    /* 00627dfd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e00: call 0x627400 */ r_esp -= 4; W32(r_esp, 0x627e05u); f_00627400();
    /* 00627e05: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00627e08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627e0a: jne 0x627e2c */ if (!fZ) goto L_00627e2c;
L_00627e0c:; BB(0x00627e0c);
    /* 00627e0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e0f: call 0x627440 */ r_esp -= 4; W32(r_esp, 0x627e14u); f_00627440();
    /* 00627e14: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00627e17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627e19: jne 0x627e2c */ if (!fZ) goto L_00627e2c;
L_00627e1b:; BB(0x00627e1b);
    /* 00627e1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627e1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e22: call 0x627760 */ r_esp -= 4; W32(r_esp, 0x627e27u); f_00627760();
    /* 00627e27: jmp 0x627f68 */ goto L_00627f68;
L_00627e2c:; BB(0x00627e2c);
    /* 00627e2c: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00627e2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627e30: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00627e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627e34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627e38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e3b: call 0x6277f0 */ r_esp -= 4; W32(r_esp, 0x627e40u); f_006277f0();
    /* 00627e40: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00627e43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627e45: jne 0x627e4c */ if (!fZ) goto L_00627e4c;
L_00627e47:; BB(0x00627e47);
    /* 00627e47: jmp 0x627f68 */ goto L_00627f68;
L_00627e4c:; BB(0x00627e4c);
    /* 00627e4c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e4f: call 0x627400 */ r_esp -= 4; W32(r_esp, 0x627e54u); f_00627400();
    /* 00627e54: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00627e57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627e59: je 0x627eda */ if (fZ) goto L_00627eda;
L_00627e5b:; BB(0x00627e5b);
    /* 00627e5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00627e5e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00627e61: jmp 0x627e6c */ goto L_00627e6c;
L_00627e63:; BB(0x00627e63);
    /* 00627e63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627e66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00627e69: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00627e6c:; BB(0x00627e6c);
    /* 00627e6c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627e6f: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627e72: jg 0x627eda */ if ((!fZ&&fS==fO)) goto L_00627eda;
L_00627e74:; BB(0x00627e74);
    /* 00627e74: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627e77: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00627e7a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627e7b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627e7d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00627e7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00627e82: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627e84: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00627e87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627e8e: jmp 0x627ea2 */ goto L_00627ea2;
L_00627e90:; BB(0x00627e90);
    /* 00627e90: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627e93: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00627e96: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00627e99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627e9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627e9f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00627ea2:; BB(0x00627ea2);
    /* 00627ea2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627ea5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627ea8: cmp edx, dword ptr [ecx + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627eab: jge 0x627ed8 */ if ((fS==fO)) goto L_00627ed8;
L_00627ead:; BB(0x00627ead);
    /* 00627ead: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627eb0: call 0x6276c0 */ r_esp -= 4; W32(r_esp, 0x627eb5u); f_006276c0();
    /* 00627eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627eb6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627eb9: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00627ebc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627ebf: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00627ec2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627ec3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627ec6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627ec7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627eca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627ecb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627ece: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627ed1: call 0x5f9330 */ r_esp -= 4; W32(r_esp, 0x627ed6u); f_005f9330();
    /* 00627ed6: jmp 0x627e90 */ goto L_00627e90;
L_00627ed8:; BB(0x00627ed8);
    /* 00627ed8: jmp 0x627e63 */ goto L_00627e63;
L_00627eda:; BB(0x00627eda);
    /* 00627eda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627edd: call 0x627440 */ r_esp -= 4; W32(r_esp, 0x627ee2u); f_00627440();
    /* 00627ee2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00627ee5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627ee7: je 0x627f68 */ if (fZ) goto L_00627f68;
L_00627ee9:; BB(0x00627ee9);
    /* 00627ee9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00627eec: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00627eef: jmp 0x627efa */ goto L_00627efa;
L_00627ef1:; BB(0x00627ef1);
    /* 00627ef1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627ef4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627ef7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00627efa:; BB(0x00627efa);
    /* 00627efa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627efd: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627f00: jg 0x627f68 */ if ((!fZ&&fS==fO)) goto L_00627f68;
L_00627f02:; BB(0x00627f02);
    /* 00627f02: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f05: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00627f08: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00627f09: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627f0b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00627f0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627f10: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00627f12: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00627f15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627f1c: jmp 0x627f30 */ goto L_00627f30;
L_00627f1e:; BB(0x00627f1e);
    /* 00627f1e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627f21: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00627f24: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00627f27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627f2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00627f2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00627f30:; BB(0x00627f30);
    /* 00627f30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627f36: cmp edx, dword ptr [ecx + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x64u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00627f39: jge 0x627f66 */ if ((fS==fO)) goto L_00627f66;
L_00627f3b:; BB(0x00627f3b);
    /* 00627f3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f3e: call 0x6276c0 */ r_esp -= 4; W32(r_esp, 0x627f43u); f_006276c0();
    /* 00627f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f44: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f47: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00627f4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627f4d: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00627f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627f51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627f54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627f58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627f59: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627f5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00627f5f: call 0x5f9330 */ r_esp -= 4; W32(r_esp, 0x627f64u); f_005f9330();
    /* 00627f64: jmp 0x627f1e */ goto L_00627f1e;
L_00627f66:; BB(0x00627f66);
    /* 00627f66: jmp 0x627ef1 */ goto L_00627ef1;
L_00627f68:; BB(0x00627f68);
    /* 00627f68: mov esp, ebp */ r_esp = r_ebp;
    /* 00627f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627f6b: ret 4 */ FN_RET(0x00627de0); r_esp += 8; return;
}

