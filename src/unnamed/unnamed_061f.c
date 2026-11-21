#include "protos.h"

void f_0061f1c0(void) /* sub_61F1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f1c0);
    /* 0061f1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f1c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f1c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061f1c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f1cd: jl 0x61f1d5 */ if ((fS!=fO)) goto L_0061f1d5;
L_0061f1cf:; BB(0x0061f1cf);
    /* 0061f1cf: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f1d3: jl 0x61f1dc */ if ((fS!=fO)) goto L_0061f1dc;
L_0061f1d5:; BB(0x0061f1d5);
    /* 0061f1d5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f1d7: jmp 0x61f295 */ goto L_0061f295;
L_0061f1dc:; BB(0x0061f1dc);
    /* 0061f1dc: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 0061f1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f1e2: je 0x61f220 */ if (fZ) goto L_0061f220;
L_0061f1e4:; BB(0x0061f1e4);
    /* 0061f1e4: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f1e8: jg 0x61f1f1 */ if ((!fZ&&fS==fO)) goto L_0061f1f1;
L_0061f1ea:; BB(0x0061f1ea);
    /* 0061f1ea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f1ec: jmp 0x61f295 */ goto L_0061f295;
L_0061f1f1:; BB(0x0061f1f1);
    /* 0061f1f1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061f1f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f1f5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61f1fau); f_00686d82();
    /* 0061f1fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f1fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061f200: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f203: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061f206: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061f209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f20a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061f20d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f20e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f211: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f212: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x61f217u); f_00686fde();
    /* 0061f217: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f21a: mov byte ptr [ebp - 7], 1 */ W8((u32)(r_ebp+0xfffffff9u), 0x1u);
    /* 0061f21e: jmp 0x61f22c */ goto L_0061f22c;
L_0061f220:; BB(0x0061f220);
    /* 0061f220: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061f223: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061f226: mov cl, byte ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 0061f229: mov byte ptr [ebp - 7], cl */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_ecx);
L_0061f22c:; BB(0x0061f22c);
    /* 0061f22c: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0061f22f: mov byte ptr [ebp - 8], dl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_edx);
    /* 0061f232: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f235: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f238: cmp dword ptr [ecx + eax*8 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*8+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f23d: je 0x61f27f */ if (fZ) goto L_0061f27f;
L_0061f23f:; BB(0x0061f23f);
    /* 0061f23f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f245: movzx ecx, byte ptr [eax + edx*8 + 8] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0x8u));
    /* 0061f24a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f24c: je 0x61f27f */ if (fZ) goto L_0061f27f;
L_0061f24e:; BB(0x0061f24e);
    /* 0061f24e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f252: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f255: call 0x61f320 */ r_esp -= 4; W32(r_esp, 0x61f25au); f_0061f320();
    /* 0061f25a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061f25d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f25f: jne 0x61f27f */ if (!fZ) goto L_0061f27f;
L_0061f261:; BB(0x0061f261);
    /* 0061f261: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 0061f265: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f267: je 0x61f27b */ if (fZ) goto L_0061f27b;
L_0061f269:; BB(0x0061f269);
    /* 0061f269: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f26c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061f26f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f273: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f278u); f_00686cae();
    /* 0061f278: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061f27b:; BB(0x0061f27b);
    /* 0061f27b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f27d: jmp 0x61f295 */ goto L_0061f295;
L_0061f27f:; BB(0x0061f27f);
    /* 0061f27f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061f282: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f285: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061f288: mov dword ptr [edx + ecx*8 + 8], eax */ W32((u32)(r_edx+r_ecx*8+0x8u), r_eax);
    /* 0061f28c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f28f: mov dword ptr [edx + ecx*8 + 0xc], eax */ W32((u32)(r_edx+r_ecx*8+0xcu), r_eax);
    /* 0061f293: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0061f295:; BB(0x0061f295);
    /* 0061f295: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f298: ret 0x18 */ FN_RET(0x0061f1c0); r_esp += 28; return;
}

void f_0061f2a0(void) /* sub_61F2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f2a0);
    /* 0061f2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061f2a7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f2ab: jl 0x61f2b3 */ if ((fS!=fO)) goto L_0061f2b3;
L_0061f2ad:; BB(0x0061f2ad);
    /* 0061f2ad: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f2b1: jl 0x61f2b7 */ if ((fS!=fO)) goto L_0061f2b7;
L_0061f2b3:; BB(0x0061f2b3);
    /* 0061f2b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f2b5: jmp 0x61f2c1 */ goto L_0061f2c1;
L_0061f2b7:; BB(0x0061f2b7);
    /* 0061f2b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f2ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f2bd: mov eax, dword ptr [ecx + eax*8 + 0xc] */ r_eax = R32((u32)(r_ecx+r_eax*8+0xcu));
L_0061f2c1:; BB(0x0061f2c1);
    /* 0061f2c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f2c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f2c4: ret 4 */ FN_RET(0x0061f2a0); r_esp += 8; return;
}

void f_0061f2d0(void) /* sub_61F2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f2d0);
    /* 0061f2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061f2d7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f2db: jl 0x61f2e3 */ if ((fS!=fO)) goto L_0061f2e3;
L_0061f2dd:; BB(0x0061f2dd);
    /* 0061f2dd: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f2e1: jl 0x61f2e7 */ if ((fS!=fO)) goto L_0061f2e7;
L_0061f2e3:; BB(0x0061f2e3);
    /* 0061f2e3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f2e5: jmp 0x61f311 */ goto L_0061f311;
L_0061f2e7:; BB(0x0061f2e7);
    /* 0061f2e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f2ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f2ed: cmp dword ptr [ecx + eax*8 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*8+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f2f2: jne 0x61f2f8 */ if (!fZ) goto L_0061f2f8;
L_0061f2f4:; BB(0x0061f2f4);
    /* 0061f2f4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f2f6: jmp 0x61f311 */ goto L_0061f311;
L_0061f2f8:; BB(0x0061f2f8);
    /* 0061f2f8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f2fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f2ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f302: lea ecx, [eax + edx*8 + 8] */ r_ecx = (u32)(r_eax+r_edx*8+0x8u);
    /* 0061f306: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f307: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61f30cu); f_00686fa2();
    /* 0061f30c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f30f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0061f311:; BB(0x0061f311);
    /* 0061f311: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f314: ret 4 */ FN_RET(0x0061f2d0); r_esp += 8; return;
}

void f_0061f320(void) /* sub_61F320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f320);
    /* 0061f320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f321: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f323: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f326: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061f329: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f32d: jl 0x61f335 */ if ((fS!=fO)) goto L_0061f335;
L_0061f32f:; BB(0x0061f32f);
    /* 0061f32f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f333: jl 0x61f339 */ if ((fS!=fO)) goto L_0061f339;
L_0061f335:; BB(0x0061f335);
    /* 0061f335: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f337: jmp 0x61f399 */ goto L_0061f399;
L_0061f339:; BB(0x0061f339);
    /* 0061f339: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f33c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f33f: cmp dword ptr [ecx + eax*8 + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*8+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f344: jne 0x61f34a */ if (!fZ) goto L_0061f34a;
L_0061f346:; BB(0x0061f346);
    /* 0061f346: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0061f348: jmp 0x61f399 */ goto L_0061f399;
L_0061f34a:; BB(0x0061f34a);
    /* 0061f34a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f34d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f350: movzx ecx, byte ptr [eax + edx*8 + 9] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0x9u));
    /* 0061f355: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f357: je 0x61f374 */ if (fZ) goto L_0061f374;
L_0061f359:; BB(0x0061f359);
    /* 0061f359: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061f35c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f35f: mov ecx, dword ptr [eax + edx*8 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 0061f363: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061f366: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f36a: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f36fu); f_00686cae();
    /* 0061f36f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f372: jmp 0x61f38d */ goto L_0061f38d;
L_0061f374:; BB(0x0061f374);
    /* 0061f374: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f377: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f37a: mov edx, dword ptr [ecx + eax*8 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*8+0xcu));
    /* 0061f37e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061f381: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061f384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f385: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f38au); f_00686cae();
    /* 0061f38a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061f38d:; BB(0x0061f38d);
    /* 0061f38d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061f390: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f391: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f394: call 0x61f2d0 */ r_esp -= 4; W32(r_esp, 0x61f399u); f_0061f2d0();
L_0061f399:; BB(0x0061f399);
    /* 0061f399: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f39b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f39c: ret 4 */ FN_RET(0x0061f320); r_esp += 8; return;
}

void f_0061f650(void) /* sub_61F650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f650);
    /* 0061f650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f651: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f653: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f656: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0061f659: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f65c: cmp dword ptr [eax + 0x31c], 0 */ {  u32 a = R32((u32)(r_eax+0x31cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f663: jne 0x61f6a6 */ if (!fZ) goto L_0061f6a6;
L_0061f665:; BB(0x0061f665);
    /* 0061f665: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f66a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61f66fu); f_00686d82();
    /* 0061f66f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f672: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061f675: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f678: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f67b: mov dword ptr [ecx + 0x31c], edx */ W32((u32)(r_ecx+0x31cu), r_edx);
    /* 0061f681: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f688: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f68b: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 0061f691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f692: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61f697u); f_00686fa2();
    /* 0061f697: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f69a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f69d: mov word ptr [edx + 0x308], 0 */ W16((u32)(r_edx+0x308u), 0x0u);
L_0061f6a6:; BB(0x0061f6a6);
    /* 0061f6a6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f6a9: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f6ac: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061f6af: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061f6b2: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f6b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061f6b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f6c0: jmp 0x61f6cb */ goto L_0061f6cb;
L_0061f6c2:; BB(0x0061f6c2);
    /* 0061f6c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f6c5: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061f6c8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0061f6cb:; BB(0x0061f6cb);
    /* 0061f6cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f6ce: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f6d1: jge 0x61f845 */ if ((fS==fO)) goto L_0061f845;
L_0061f6d7:; BB(0x0061f6d7);
    /* 0061f6d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f6da: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f6dd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061f6e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f6e3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061f6e6: jmp 0x61f6f1 */ goto L_0061f6f1;
L_0061f6e8:; BB(0x0061f6e8);
    /* 0061f6e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061f6eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f6ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0061f6f1:; BB(0x0061f6f1);
    /* 0061f6f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061f6f4: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f6f7: jge 0x61f840 */ if ((fS==fO)) goto L_0061f840;
L_0061f6fd:; BB(0x0061f6fd);
    /* 0061f6fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061f700: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f703: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061f706: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0061f709: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0061f70d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f70f: je 0x61f83b */ if (fZ) goto L_0061f83b;
L_0061f715:; BB(0x0061f715);
    /* 0061f715: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0061f719: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061f71c: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061f71f: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061f722: movzx ecx, byte ptr [ebp - 0x17] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe9u));
    /* 0061f726: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f729: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f72c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f72e: movzx edx, byte ptr [ebp - 0x16] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffeau));
    /* 0061f732: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061f735: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f737: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f73a: mov edx, dword ptr [ecx + 0x31c] */ r_edx = R32((u32)(r_ecx+0x31cu));
    /* 0061f740: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0061f743: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061f746: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f749: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061f74b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061f74e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f751: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061f753: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f756: movzx edx, word ptr [ecx + 0x308] */ r_edx = (u32)R16((u32)(r_ecx+0x308u));
    /* 0061f75d: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f763: jge 0x61f83b */ if ((fS==fO)) goto L_0061f83b;
L_0061f769:; BB(0x0061f769);
    /* 0061f769: mov byte ptr [ebp - 0x1d], 0 */ W8((u32)(r_ebp+0xffffffe3u), 0x0u);
    /* 0061f76d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061f774: jmp 0x61f77f */ goto L_0061f77f;
L_0061f776:; BB(0x0061f776);
    /* 0061f776: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f779: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f77c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0061f77f:; BB(0x0061f77f);
    /* 0061f77f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f782: movzx edx, word ptr [ecx + 0x308] */ r_edx = (u32)R16((u32)(r_ecx+0x308u));
    /* 0061f789: cmp dword ptr [ebp - 0x24], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f78c: jge 0x61f7d7 */ if ((fS==fO)) goto L_0061f7d7;
L_0061f78e:; BB(0x0061f78e);
    /* 0061f78e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f791: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f794: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f797: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 0061f79b: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0061f79f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7a1: jne 0x61f7d5 */ if (!fZ) goto L_0061f7d5;
L_0061f7a3:; BB(0x0061f7a3);
    /* 0061f7a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f7a6: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f7a9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f7ac: movzx eax, byte ptr [edx + ecx + 1] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x1u));
    /* 0061f7b1: movzx ecx, byte ptr [ebp - 0x17] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe9u));
    /* 0061f7b5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7b7: jne 0x61f7d5 */ if (!fZ) goto L_0061f7d5;
L_0061f7b9:; BB(0x0061f7b9);
    /* 0061f7b9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f7bc: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f7bf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f7c2: movzx ecx, byte ptr [eax + edx + 2] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x2u));
    /* 0061f7c7: movzx edx, byte ptr [ebp - 0x16] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffeau));
    /* 0061f7cb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7cd: jne 0x61f7d5 */ if (!fZ) goto L_0061f7d5;
L_0061f7cf:; BB(0x0061f7cf);
    /* 0061f7cf: mov byte ptr [ebp - 0x1d], 1 */ W8((u32)(r_ebp+0xffffffe3u), 0x1u);
    /* 0061f7d3: jmp 0x61f7d7 */ goto L_0061f7d7;
L_0061f7d5:; BB(0x0061f7d5);
    /* 0061f7d5: jmp 0x61f776 */ goto L_0061f776;
L_0061f7d7:; BB(0x0061f7d7);
    /* 0061f7d7: movzx eax, byte ptr [ebp - 0x1d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 0061f7db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f7dd: jne 0x61f83b */ if (!fZ) goto L_0061f83b;
L_0061f7df:; BB(0x0061f7df);
    /* 0061f7df: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f7e2: movzx edx, word ptr [ecx + 0x308] */ r_edx = (u32)R16((u32)(r_ecx+0x308u));
    /* 0061f7e9: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f7ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f7ef: mov cl, byte ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 0061f7f2: mov byte ptr [eax + edx], cl */ W8((u32)(r_eax+r_edx), (u8)r_ecx);
    /* 0061f7f5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f7f8: movzx eax, word ptr [edx + 0x308] */ r_eax = (u32)R16((u32)(r_edx+0x308u));
    /* 0061f7ff: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f805: mov dl, byte ptr [ebp - 0x17] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe9u))) & 0xffu);
    /* 0061f808: mov byte ptr [ecx + eax + 1], dl */ W8((u32)(r_ecx+r_eax+0x1u), (u8)r_edx);
    /* 0061f80c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f80f: movzx ecx, word ptr [eax + 0x308] */ r_ecx = (u32)R16((u32)(r_eax+0x308u));
    /* 0061f816: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f819: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f81c: mov al, byte ptr [ebp - 0x16] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeau))) & 0xffu);
    /* 0061f81f: mov byte ptr [edx + ecx + 2], al */ W8((u32)(r_edx+r_ecx+0x2u), (u8)r_eax);
    /* 0061f823: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f826: mov dx, word ptr [ecx + 0x308] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x308u))) & 0xffffu);
    /* 0061f82d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0061f831: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f834: mov word ptr [eax + 0x308], dx */ W16((u32)(r_eax+0x308u), (u16)r_edx);
L_0061f83b:; BB(0x0061f83b);
    /* 0061f83b: jmp 0x61f6e8 */ goto L_0061f6e8;
L_0061f840:; BB(0x0061f840);
    /* 0061f840: jmp 0x61f6c2 */ goto L_0061f6c2;
L_0061f845:; BB(0x0061f845);
    /* 0061f845: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f848: ret 0xc */ FN_RET(0x0061f650); r_esp += 16; return;
}

void f_0061f850(void) /* sub_61F850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f850);
    /* 0061f850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f851: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061f857: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f85a: movzx ecx, word ptr [eax + 0x308] */ r_ecx = (u32)R16((u32)(r_eax+0x308u));
    /* 0061f861: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f867: jge 0x61f86b */ if ((fS==fO)) goto L_0061f86b;
L_0061f869:; BB(0x0061f869);
    /* 0061f869: jmp 0x61f890 */ goto L_0061f890;
L_0061f86b:; BB(0x0061f86b);
    /* 0061f86b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f86e: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0061f874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f875: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f878: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f87b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f87c: call 0x6216c0 */ r_esp -= 4; W32(r_esp, 0x61f881u); f_006216c0();
    /* 0061f881: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f884: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f887: mov word ptr [edx + 0x308], 0x100 */ W16((u32)(r_edx+0x308u), 0x100u);
L_0061f890:; BB(0x0061f890);
    /* 0061f890: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f893: ret  */ FN_RET(0x0061f850); r_esp += 4; return;
}

void f_0061f8a0(void) /* sub_61F8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f8a0);
    /* 0061f8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f8a3: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f8a9: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0061f8af: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061f8b5: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 0061f8bb: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061f8c1: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 0061f8c7: lea ecx, [eax + ecx*8 - 8] */ r_ecx = (u32)(r_eax+r_ecx*8+0xfffffff8u);
    /* 0061f8cb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061f8ce: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f8d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061f8d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f8d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8d8: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0061f8dd: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061f8df: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061f8e2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8e4: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f8e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f8e7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61f8ecu); f_00686d82();
    /* 0061f8ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f8ef: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0061f8f2: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0061f8f5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0061f8f8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061f8ff: jmp 0x61f90a */ goto L_0061f90a;
L_0061f901:; BB(0x0061f901);
    /* 0061f901: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f904: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f907: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0061f90a:; BB(0x0061f90a);
    /* 0061f90a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f90d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f910: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f912: jge 0x61f94f */ if ((fS==fO)) goto L_0061f94f;
L_0061f914:; BB(0x0061f914);
    /* 0061f914: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f917: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f91a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f91d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061f920: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f922: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f925: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f928: add ecx, dword ptr [ebp - 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f92b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061f92d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0061f92f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061f932: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0061f935: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061f938: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0061f93b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0061f93e: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0061f941: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061f944: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0061f947: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0061f94a: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0061f94d: jmp 0x61f901 */ goto L_0061f901;
L_0061f94f:; BB(0x0061f94f);
    /* 0061f94f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f952: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061f955: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0061f958: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061f95b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f95c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f961u); f_00686cae();
    /* 0061f961: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f964: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f967: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061f96a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0061f96d: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0061f971: mov byte ptr [ebp - 0x25], 0 */ W8((u32)(r_ebp+0xffffffdbu), 0x0u);
    /* 0061f975: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061f97c: jmp 0x61f987 */ goto L_0061f987;
L_0061f97e:; BB(0x0061f97e);
    /* 0061f97e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f981: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061f984: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0061f987:; BB(0x0061f987);
    /* 0061f987: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061f98a: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f98e: cmp dword ptr [ebp - 0x18], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f991: jge 0x61f9da */ if ((fS==fO)) goto L_0061f9da;
L_0061f993:; BB(0x0061f993);
    /* 0061f993: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f996: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f999: movzx ecx, byte ptr [eax + edx*4] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4));
    /* 0061f99d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f99f: jne 0x61f9bf */ if (!fZ) goto L_0061f9bf;
L_0061f9a1:; BB(0x0061f9a1);
    /* 0061f9a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f9a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f9a7: movzx ecx, byte ptr [eax + edx*4 + 1] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x1u));
    /* 0061f9ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f9ae: jne 0x61f9bf */ if (!fZ) goto L_0061f9bf;
L_0061f9b0:; BB(0x0061f9b0);
    /* 0061f9b0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f9b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f9b6: movzx ecx, byte ptr [eax + edx*4 + 2] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x2u));
    /* 0061f9bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f9bd: je 0x61f9c3 */ if (fZ) goto L_0061f9c3;
L_0061f9bf:; BB(0x0061f9bf);
    /* 0061f9bf: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0061f9c3:; BB(0x0061f9c3);
    /* 0061f9c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f9c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061f9c9: movzx ecx, byte ptr [eax + edx*4 + 3] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x3u));
    /* 0061f9ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f9d0: je 0x61f9d8 */ if (fZ) goto L_0061f9d8;
L_0061f9d2:; BB(0x0061f9d2);
    /* 0061f9d2: mov byte ptr [ebp - 0x25], 1 */ W8((u32)(r_ebp+0xffffffdbu), 0x1u);
    /* 0061f9d6: jmp 0x61f9da */ goto L_0061f9da;
L_0061f9d8:; BB(0x0061f9d8);
    /* 0061f9d8: jmp 0x61f97e */ goto L_0061f97e;
L_0061f9da:; BB(0x0061f9da);
    /* 0061f9da: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061f9dd: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0061f9e3: cmp dword ptr [ebp - 0x88], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f9ea: je 0x61f9fa */ if (fZ) goto L_0061f9fa;
L_0061f9ec:; BB(0x0061f9ec);
    /* 0061f9ec: cmp dword ptr [ebp - 0x88], 0x80 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f9f6: je 0x61f9fa */ if (fZ) goto L_0061f9fa;
L_0061f9f8:; BB(0x0061f9f8);
    /* 0061f9f8: jmp 0x61fa2b */ goto L_0061fa2b;
L_0061f9fa:; BB(0x0061f9fa);
    /* 0061f9fa: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0061f9fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa00: je 0x61fa16 */ if (fZ) goto L_0061fa16;
L_0061fa02:; BB(0x0061fa02);
    /* 0061fa02: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0061fa06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa08: jne 0x61fa16 */ if (!fZ) goto L_0061fa16;
L_0061fa0a:; BB(0x0061fa0a);
    /* 0061fa0a: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 0061fa14: jmp 0x61fa20 */ goto L_0061fa20;
L_0061fa16:; BB(0x0061fa16);
    /* 0061fa16: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0061fa20:; BB(0x0061fa20);
    /* 0061fa20: mov dl, byte ptr [ebp - 0x8c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff74u))) & 0xffu);
    /* 0061fa26: mov byte ptr [ebp - 0x41], dl */ W8((u32)(r_ebp+0xffffffbfu), (u8)r_edx);
    /* 0061fa29: jmp 0x61fa2f */ goto L_0061fa2f;
L_0061fa2b:; BB(0x0061fa2b);
    /* 0061fa2b: mov byte ptr [ebp - 0x41], 1 */ W8((u32)(r_ebp+0xffffffbfu), 0x1u);
L_0061fa2f:; BB(0x0061fa2f);
    /* 0061fa2f: movzx eax, byte ptr [ebp - 0x41] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbfu));
    /* 0061fa33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa35: je 0x61fb36 */ if (fZ) goto L_0061fb36;
L_0061fa3b:; BB(0x0061fa3b);
    /* 0061fa3b: cmp dword ptr [ebp + 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa3f: je 0x61fa4a */ if (fZ) goto L_0061fa4a;
L_0061fa41:; BB(0x0061fa41);
    /* 0061fa41: cmp dword ptr [ebp + 0x14], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fa48: jne 0x61fa7a */ if (!fZ) goto L_0061fa7a;
L_0061fa4a:; BB(0x0061fa4a);
    /* 0061fa4a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061fa51: jmp 0x61fa5c */ goto L_0061fa5c;
L_0061fa53:; BB(0x0061fa53);
    /* 0061fa53: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fa56: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fa59: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0061fa5c:; BB(0x0061fa5c);
    /* 0061fa5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061fa5f: imul edx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fa63: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fa66: jge 0x61fa75 */ if ((fS==fO)) goto L_0061fa75;
L_0061fa68:; BB(0x0061fa68);
    /* 0061fa68: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fa6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061fa6e: mov byte ptr [ecx + eax*4 + 3], 0xff */ W8((u32)(r_ecx+r_eax*4+0x3u), 0xffu);
    /* 0061fa73: jmp 0x61fa53 */ goto L_0061fa53;
L_0061fa75:; BB(0x0061fa75);
    /* 0061fa75: jmp 0x61fb36 */ goto L_0061fb36;
L_0061fa7a:; BB(0x0061fa7a);
    /* 0061fa7a: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 0061fa81: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061fa84: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0061fa8a: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0061fa90: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061fa93: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0061fa99: cmp dword ptr [ebp - 0x90], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061faa0: ja 0x61facf */ if ((!fC&&!fZ)) goto L_0061facf;
L_0061faa2:; BB(0x0061faa2);
    /* 0061faa2: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0061faa8: movzx edx, byte ptr [ecx + 0x62001c] */ r_edx = (u32)R8((u32)(r_ecx+0x62001cu));
    /* 0061faaf: jmp dword ptr [edx*4 + 0x62000c] */ { u32 t = R32((u32)(r_edx*4+0x62000cu)); switch (t) { case 0x61fabfu: goto L_0061fabf; case 0x61fab6u: goto L_0061fab6; case 0x61fac8u: goto L_0061fac8; case 0x61facfu: goto L_0061facf; default: UNSUP(0x0061faaf, "jump table entry is not a known target"); } }
L_0061fab6:; BB(0x0061fab6);
    /* 0061fab6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0061fabd: jmp 0x61facf */ goto L_0061facf;
L_0061fabf:; BB(0x0061fabf);
    /* 0061fabf: mov dword ptr [ebp - 0x4c], 0x80 */ W32((u32)(r_ebp+0xffffffb4u), 0x80u);
    /* 0061fac6: jmp 0x61facf */ goto L_0061facf;
L_0061fac8:; BB(0x0061fac8);
    /* 0061fac8: mov dword ptr [ebp - 0x4c], 0xff */ W32((u32)(r_ebp+0xffffffb4u), 0xffu);
L_0061facf:; BB(0x0061facf);
    /* 0061facf: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061fad6: jmp 0x61fae1 */ goto L_0061fae1;
L_0061fad8:; BB(0x0061fad8);
    /* 0061fad8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fadb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fade: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0061fae1:; BB(0x0061fae1);
    /* 0061fae1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061fae4: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fae8: cmp dword ptr [ebp - 0x18], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061faeb: jge 0x61fb36 */ if ((fS==fO)) goto L_0061fb36;
L_0061faed:; BB(0x0061faed);
    /* 0061faed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061faf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061faf3: movzx ecx, byte ptr [eax + edx*4] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4));
    /* 0061faf7: cmp ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fafa: jne 0x61fb29 */ if (!fZ) goto L_0061fb29;
L_0061fafc:; BB(0x0061fafc);
    /* 0061fafc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061faff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fb02: movzx ecx, byte ptr [eax + edx*4 + 1] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x1u));
    /* 0061fb07: cmp ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fb0a: jne 0x61fb29 */ if (!fZ) goto L_0061fb29;
L_0061fb0c:; BB(0x0061fb0c);
    /* 0061fb0c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fb0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fb12: movzx ecx, byte ptr [eax + edx*4 + 2] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x2u));
    /* 0061fb17: cmp ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fb1a: jne 0x61fb29 */ if (!fZ) goto L_0061fb29;
L_0061fb1c:; BB(0x0061fb1c);
    /* 0061fb1c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fb1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fb22: mov byte ptr [eax + edx*4 + 3], 0 */ W8((u32)(r_eax+r_edx*4+0x3u), 0x0u);
    /* 0061fb27: jmp 0x61fb34 */ goto L_0061fb34;
L_0061fb29:; BB(0x0061fb29);
    /* 0061fb29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061fb2c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fb2f: mov byte ptr [edx + ecx*4 + 3], 0xff */ W8((u32)(r_edx+r_ecx*4+0x3u), 0xffu);
L_0061fb34:; BB(0x0061fb34);
    /* 0061fb34: jmp 0x61fad8 */ goto L_0061fad8;
L_0061fb36:; BB(0x0061fb36);
    /* 0061fb36: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0061fb3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061fb44: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061fb4b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0061fb52: jmp 0x61fb5d */ goto L_0061fb5d;
L_0061fb54:; BB(0x0061fb54);
    /* 0061fb54: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fb5a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0061fb5d:; BB(0x0061fb5d);
    /* 0061fb5d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb60: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fb63: jge 0x61fc23 */ if ((fS==fO)) goto L_0061fc23;
L_0061fb69:; BB(0x0061fb69);
    /* 0061fb69: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0061fb70: jmp 0x61fb7b */ goto L_0061fb7b;
L_0061fb72:; BB(0x0061fb72);
    /* 0061fb72: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061fb75: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061fb78: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_0061fb7b:; BB(0x0061fb7b);
    /* 0061fb7b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061fb7e: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fb81: jge 0x61fc09 */ if ((fS==fO)) goto L_0061fc09;
L_0061fb87:; BB(0x0061fb87);
    /* 0061fb87: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0061fb8e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fb91: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fb95: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fb98: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fb9b: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061fb9e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061fba1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061fba4: and ecx, 0x80000001 */ {  u32 a = r_ecx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0061fbaa: jns 0x61fbb1 */ if (!fS) goto L_0061fbb1;
L_0061fbac:; BB(0x0061fbac);
    /* 0061fbac: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fbad: or ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fbb0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0061fbb1:; BB(0x0061fbb1);
    /* 0061fbb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fbb3: je 0x61fbd8 */ if (fZ) goto L_0061fbd8;
L_0061fbb5:; BB(0x0061fbb5);
    /* 0061fbb5: movzx edx, byte ptr [ebp - 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff0u));
    /* 0061fbb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fbbb: jg 0x61fbcd */ if ((!fZ&&fS==fO)) goto L_0061fbcd;
L_0061fbbd:; BB(0x0061fbbd);
    /* 0061fbbd: movzx eax, byte ptr [ebp - 0xf] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff1u));
    /* 0061fbc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fbc3: jg 0x61fbcd */ if ((!fZ&&fS==fO)) goto L_0061fbcd;
L_0061fbc5:; BB(0x0061fbc5);
    /* 0061fbc5: movzx ecx, byte ptr [ebp - 0xe] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 0061fbc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061fbcb: jle 0x61fbd6 */ if ((fZ||fS!=fO)) goto L_0061fbd6;
L_0061fbcd:; BB(0x0061fbcd);
    /* 0061fbcd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0061fbd4: jmp 0x61fc09 */ goto L_0061fc09;
L_0061fbd6:; BB(0x0061fbd6);
    /* 0061fbd6: jmp 0x61fc04 */ goto L_0061fc04;
L_0061fbd8:; BB(0x0061fbd8);
    /* 0061fbd8: movzx edx, byte ptr [ebp - 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff0u));
    /* 0061fbdc: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fbe2: jl 0x61fbfb */ if ((fS!=fO)) goto L_0061fbfb;
L_0061fbe4:; BB(0x0061fbe4);
    /* 0061fbe4: movzx eax, byte ptr [ebp - 0xf] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff1u));
    /* 0061fbe8: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fbed: jl 0x61fbfb */ if ((fS!=fO)) goto L_0061fbfb;
L_0061fbef:; BB(0x0061fbef);
    /* 0061fbef: movzx ecx, byte ptr [ebp - 0xe] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 0061fbf3: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fbf9: jge 0x61fc04 */ if ((fS==fO)) goto L_0061fc04;
L_0061fbfb:; BB(0x0061fbfb);
    /* 0061fbfb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0061fc02: jmp 0x61fc09 */ goto L_0061fc09;
L_0061fc04:; BB(0x0061fc04);
    /* 0061fc04: jmp 0x61fb72 */ goto L_0061fb72;
L_0061fc09:; BB(0x0061fc09);
    /* 0061fc09: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc0d: je 0x61fc1e */ if (fZ) goto L_0061fc1e;
L_0061fc0f:; BB(0x0061fc0f);
    /* 0061fc0f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061fc16: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc19: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0061fc1c: jmp 0x61fc23 */ goto L_0061fc23;
L_0061fc1e:; BB(0x0061fc1e);
    /* 0061fc1e: jmp 0x61fb54 */ goto L_0061fb54;
L_0061fc23:; BB(0x0061fc23);
    /* 0061fc23: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc27: je 0x61fc77 */ if (fZ) goto L_0061fc77;
L_0061fc29:; BB(0x0061fc29);
    /* 0061fc29: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0061fc30: jmp 0x61fc3f */ goto L_0061fc3f;
L_0061fc32:; BB(0x0061fc32);
    /* 0061fc32: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061fc35: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc38: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 0061fc3c: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_0061fc3f:; BB(0x0061fc3f);
    /* 0061fc3f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc42: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fc45: jge 0x61fc72 */ if ((fS==fO)) goto L_0061fc72;
L_0061fc47:; BB(0x0061fc47);
    /* 0061fc47: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0061fc4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc4b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061fc4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc4f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061fc52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc53: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061fc56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc57: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061fc5a: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fc5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fc61: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0061fc64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc65: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fc6b: call 0x61f8a0 */ r_esp -= 4; W32(r_esp, 0x61fc70u); f_0061f8a0();
    /* 0061fc70: jmp 0x61fc32 */ goto L_0061fc32;
L_0061fc72:; BB(0x0061fc72);
    /* 0061fc72: jmp 0x620005 */ goto L_00620005;
L_0061fc77:; BB(0x0061fc77);
    /* 0061fc77: movzx edx, byte ptr [ebp + 0x18] */ r_edx = (u32)R8((u32)(r_ebp+0x18u));
    /* 0061fc7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fc7d: je 0x61fca8 */ if (fZ) goto L_0061fca8;
L_0061fc7f:; BB(0x0061fc7f);
    /* 0061fc7f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061fc82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc83: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0061fc86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc87: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0061fc8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc8b: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0061fc8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc8f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061fc92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc93: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061fc96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061fc9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fc9b: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fca1: call 0x620650 */ r_esp -= 4; W32(r_esp, 0x61fca6u); f_00620650();
    /* 0061fca6: jmp 0x61fcc4 */ goto L_0061fcc4;
L_0061fca8:; BB(0x0061fca8);
    /* 0061fca8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061fcaf: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0061fcb6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061fcbd: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0061fcc4:; BB(0x0061fcc4);
    /* 0061fcc4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061fcc7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061fcc9: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fccc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061fccf: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061fcd2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0061fcd5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061fcd8: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcdb: je 0x61fcf5 */ if (fZ) goto L_0061fcf5;
L_0061fcdd:; BB(0x0061fcdd);
    /* 0061fcdd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061fce0: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fce3: je 0x61fcf5 */ if (fZ) goto L_0061fcf5;
L_0061fce5:; BB(0x0061fce5);
    /* 0061fce5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061fce8: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fceb: je 0x61fcf5 */ if (fZ) goto L_0061fcf5;
L_0061fced:; BB(0x0061fced);
    /* 0061fced: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061fcf0: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fcf3: jne 0x61fd35 */ if (!fZ) goto L_0061fd35;
L_0061fcf5:; BB(0x0061fcf5);
    /* 0061fcf5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fcf8: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0061fcff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd02: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0061fd09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd0c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0061fd12: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd15: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0061fd1c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd1f: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0061fd26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd29: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0061fd30: jmp 0x61fff8 */ goto L_0061fff8;
L_0061fd35:; BB(0x0061fd35);
    /* 0061fd35: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd38: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061fd3b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061fd3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd41: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061fd44: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0061fd47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061fd4a: sub eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd4d: sub eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061fd50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd53: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0061fd55: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061fd58: sub edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061fd5b: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061fd5e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd61: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0061fd64: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fd66: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd69: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061fd6c: mov edx, 4 */ r_edx = 0x4u;
    /* 0061fd71: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061fd73: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061fd76: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fd78: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fd7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fd7b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61fd80u); f_00686d82();
    /* 0061fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fd83: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0061fd86: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd89: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0061fd8c: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0061fd8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fd91: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fd94: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0061fd97: mov edx, 4 */ r_edx = 0x4u;
    /* 0061fd9c: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0061fd9e: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0061fda1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fda3: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fda5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fda6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61fdabu); f_00686d82();
    /* 0061fdab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fdae: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0061fdb1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fdb4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0061fdb7: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0061fdba: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fdc0: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0061fdc6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0061fdc9: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061fdcd: jne 0x61fde5 */ if (!fZ) goto L_0061fde5;
L_0061fdcf:; BB(0x0061fdcf);
    /* 0061fdcf: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdd4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61fdd9u); f_00686d82();
    /* 0061fdd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fddc: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0061fddf: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0061fde2: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_0061fde5:; BB(0x0061fde5);
    /* 0061fde5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fde8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fdeb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0061fded: imul ecx, dword ptr [eax + 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fdf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fdf2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61fdf7u); f_00686d82();
    /* 0061fdf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fdfa: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0061fdfd: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0061fe00: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0061fe03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061fe0b: imul edx, dword ptr [ecx + 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fe0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe10: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61fe15u); f_00686d82();
    /* 0061fe15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fe18: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0061fe1b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0061fe1e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0061fe21: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe28: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0061fe2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe2c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61fe31u); f_00686fa2();
    /* 0061fe31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fe34: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fe3a: movzx eax, word ptr [edx + 0x308] */ r_eax = (u32)R16((u32)(r_edx+0x308u));
    /* 0061fe41: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fe46: jge 0x61fe90 */ if ((fS==fO)) goto L_0061fe90;
L_0061fe48:; BB(0x0061fe48);
    /* 0061fe48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe4b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061fe4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe52: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061fe54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe55: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0061fe58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe59: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0061fe5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe5d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061fe60: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061fe64: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fe67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061fe6a: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0061fe6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe6e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fe74: movzx edx, word ptr [ecx + 0x308] */ r_edx = (u32)R16((u32)(r_ecx+0x308u));
    /* 0061fe7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe7c: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fe82: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061fe85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe86: call 0x622150 */ r_esp -= 4; W32(r_esp, 0x61fe8bu); f_00622150();
    /* 0061fe8b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061fe8e: jmp 0x61feda */ goto L_0061feda;
L_0061fe90:; BB(0x0061fe90);
    /* 0061fe90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe93: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0061fe96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061fe9a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061fe9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fe9d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0061fea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fea1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0061fea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fea5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061fea8: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061feac: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061feaf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061feb2: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0061feb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061feb6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0061feb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061feba: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fec0: movzx eax, word ptr [edx + 0x308] */ r_eax = (u32)R16((u32)(r_edx+0x308u));
    /* 0061fec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fec8: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061fece: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061fed1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061fed2: call 0x622340 */ r_esp -= 4; W32(r_esp, 0x61fed7u); f_00622340();
    /* 0061fed7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061feda:; BB(0x0061feda);
    /* 0061feda: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061fee1: jmp 0x61feec */ goto L_0061feec;
L_0061fee3:; BB(0x0061fee3);
    /* 0061fee3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fee6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061fee9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0061feec:; BB(0x0061feec);
    /* 0061feec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061feef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061fef2: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061fef5: jge 0x61ffb1 */ if ((fS==fO)) goto L_0061ffb1;
L_0061fefb:; BB(0x0061fefb);
    /* 0061fefb: cmp dword ptr [ebp + 0x14], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff02: je 0x61ff2b */ if (fZ) goto L_0061ff2b;
L_0061ff04:; BB(0x0061ff04);
    /* 0061ff04: cmp dword ptr [ebp + 0x14], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff0b: je 0x61ff2b */ if (fZ) goto L_0061ff2b;
L_0061ff0d:; BB(0x0061ff0d);
    /* 0061ff0d: cmp dword ptr [ebp + 0x14], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff14: je 0x61ff2b */ if (fZ) goto L_0061ff2b;
L_0061ff16:; BB(0x0061ff16);
    /* 0061ff16: cmp dword ptr [ebp + 0x14], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff1d: je 0x61ff2b */ if (fZ) goto L_0061ff2b;
L_0061ff1f:; BB(0x0061ff1f);
    /* 0061ff1f: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0061ff29: jmp 0x61ff35 */ goto L_0061ff35;
L_0061ff2b:; BB(0x0061ff2b);
    /* 0061ff2b: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
L_0061ff35:; BB(0x0061ff35);
    /* 0061ff35: movzx edx, byte ptr [ebp - 0x94] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff6cu));
    /* 0061ff3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ff3e: je 0x61ff5b */ if (fZ) goto L_0061ff5b;
L_0061ff40:; BB(0x0061ff40);
    /* 0061ff40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff43: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff46: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ff4a: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ff4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ff50: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061ff53: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0061ff59: jmp 0x61ff6d */ goto L_0061ff6d;
L_0061ff5b:; BB(0x0061ff5b);
    /* 0061ff5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ff5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff61: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ff64: add ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ff67: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
L_0061ff6d:; BB(0x0061ff6d);
    /* 0061ff6d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061ff70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ff74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff77: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ff7a: add ecx, dword ptr [ebp - 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ff7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff7e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ff81: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0061ff84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ff87: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0061ff8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ff8e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061ff90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff91: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061ff97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ff98: call 0x618330 */ r_esp -= 4; W32(r_esp, 0x61ff9du); f_00618330();
    /* 0061ff9d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ffa0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ffa3: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0061ffa6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ffa9: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0061ffac: jmp 0x61fee3 */ goto L_0061fee3;
L_0061ffb1:; BB(0x0061ffb1);
    /* 0061ffb1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0061ffb4: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0061ffb7: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0061ffba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ffbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61ffc0u); f_00686cae();
    /* 0061ffc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ffc3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0061ffc6: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0061ffc9: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0061ffcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ffcd: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61ffd2u); f_00686cae();
    /* 0061ffd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ffd5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0061ffdb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0061ffde: cmp ecx, dword ptr [eax + 0x31c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x31cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ffe4: je 0x61fff8 */ if (fZ) goto L_0061fff8;
L_0061ffe6:; BB(0x0061ffe6);
    /* 0061ffe6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0061ffe9: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0061ffec: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0061ffef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061fff0: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61fff5u); f_00686cae();
    /* 0061fff5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061fff8:; BB(0x0061fff8);
    /* 0061fff8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061fffb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061fffd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620000: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620003: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00620005:; BB(0x00620005);
    /* 00620005: mov esp, ebp */ r_esp = r_ebp;
    /* 00620007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620008: ret 0x14 */ FN_RET(0x0061f8a0); r_esp += 24; return;
}

